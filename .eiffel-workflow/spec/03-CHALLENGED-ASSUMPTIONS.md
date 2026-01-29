# 03-CHALLENGED-ASSUMPTIONS: simple_linalg

## Challenging Research Assumptions

OOSC2 principle: Question and validate assumptions before coding. This section systematically examines assumptions from research and proposes design decisions to mitigate risks.

---

## ASSUMPTION 1: Pure Eiffel Performance Will Be Acceptable

**Original Assumption (A-1):**
"Pure Eiffel performance acceptable for MVP" (SCOPE.md)

**Risk if False:**
Matrix operations slow enough that users cannot solve realistic problems; abandonment of library.

**Challenge Statement:**
Can Eiffel achieve 1e-10 relative error AND reasonable performance (< 10ms for 100x100 matrix multiply) without external C bindings?

**Evidence Gathered:**

1. **Simple_math library precedent**
   - Pure Eiffel implementation of transcendental functions (sin, cos, exp)
   - Sufficient performance for physics simulations
   - Suggests Eiffel VM optimization is better than assumed

2. **Strassen Algorithm viability**
   - Standard matrix multiply: O(n³)
   - Strassen: O(n^2.807) for large matrices
   - Pure Eiffel implementation possible; deferred to Phase 2 optimization

3. **Operation frequency analysis**
   - Most users: 10-1000 matrix size range
   - Typical workflow: 10-100 matrix operations per simulation
   - Total wall-clock time: Likely dominated by physics computation, not matrix ops

**Revised Assessment:**

**ACCEPT assumption with Phase 2 optimization path:**
- Phase 1: Correctness-focused implementation
- Phase 2: Inline C for critical hotpaths if profiling shows bottleneck
- Contingency: BLAS/LAPACK C bindings (non-blocking for MVP)

**Design Decision:**
- All matrix operations written in pure Eiffel initially
- Add profiling instrumentation (counters for operation count/time)
- Document performance characteristics in GitHub Pages
- Phase 2 roadmap includes optional C acceleration

**Impact on Specification:**
- Do NOT add external C dependencies to Phase 1
- Constrain C-005 to Phase 1 only; Phase 2 can add bindings
- Every class must be SCOOP-compatible (no C code blocks in Phase 1)

---

## ASSUMPTION 2: Dense Matrices Sufficient for MVP

**Original Assumption (D-001):**
"Dense matrices sufficient; sparse deferred to separate library (simple_sparse)"

**Risk if False:**
MVP unusable for large physics simulations that naturally lead to sparse systems (finite element analysis, PDEs).

**Challenge Statement:**
Will target users (physicists, roboticists, ML researchers) encounter sparse matrices in Phase 1 workflows?

**Evidence Gathered:**

1. **Physics use cases analysis**
   - Jacobian matrices for Newton-Raphson: Usually DENSE (small/medium size)
   - Rotation matrices (robotics): Always dense 3x3 or similar
   - Covariance matrices (ML): Dense or near-dense (PCA)
   - FEA stiffness matrices: SPARSE (deferred use case)

2. **Problem size distribution**
   - MVP targets: n <= 1000 (dense matrices practical)
   - Large-scale FEA: n > 10,000 (sparse essential)
   - Natural boundary: MVP dense, Phase 2 sparse

3. **API separability**
   - Can define MATRIX interface
   - Dense MATRIX implementation (Phase 1)
   - Sparse SPARSE_MATRIX implementation (Phase 2+)
   - Clean architecture boundary

**Revised Assessment:**

**ACCEPT assumption with clear scope boundary:**
- Phase 1: Dense matrices ONLY (MUST NOT support COO/CSR formats)
- Phase 2: Introduce simple_sparse library
- Design MATRIX interface to allow plug-in implementations

**Design Decision:**
- No sparse matrix storage formats in Phase 1 API
- Document scope limitation clearly: "Phase 1: n x n matrices for n <= 1000"
- Add to roadmap: "Phase 2 will introduce simple_sparse for large FEA systems"
- Suggest workaround: "For now, use dense matrices or implement your own CSR adapter"

**Impact on Specification:**
- FR-005, FR-006, FR-007, FR-008, FR-009: Dense implementation only
- Scope boundary enforcement: Reject pull requests adding sparse formats to Phase 1
- Test matrix sizes: 2x2 to 500x500 (dense practical range)

---

## ASSUMPTION 3: Numerical Stability Achievable with Documented Algorithms

**Original Assumption (A-3):**
"Numerical stability achievable with well-known algorithms (LU, QR, power iteration)"

**Risk if False:**
Algorithms fail on edge cases; library produces incorrect results; users lose trust.

**Challenge Statement:**
Can we achieve 1e-10 relative error guarantee on all well-conditioned matrices using standard LU/QR?

**Evidence Gathered:**

1. **Algorithm maturity**
   - LU with partial pivoting: Proven stable for 70+ years (LAPACK, NumPy)
   - Condition number impact: Proven mathematical bounds (Wilkinson)
   - Power iteration: Stable for symmetric matrices; risky for general matrices

2. **Numerical error sources**
   - Rounding: Machine epsilon ≈ 2.22e-16 for REAL_64
   - Accumulation: Error grows with operation count ≈ √(operation_count) * epsilon
   - Ill-conditioning: Error scales with κ(A)
   - Partial pivoting failure: Still possible on highly ill-conditioned matrices

3. **Historical failures**
   - Hilbert matrices (n > 15): Singular to machine precision despite being non-singular mathematically
   - Vandermonde matrices: Extremely ill-conditioned
   - Rank-deficient matrices: LU fails catastrophically

**Revised Assessment:**

**ACCEPT assumption WITH MAJOR QUALIFICATIONS:**
- 1e-10 error achievable for **well-conditioned matrices only**
- Must define "well-conditioned": κ(A) <= 10^8 (condition number threshold)
- Ill-conditioned matrices: User must check condition number and accept solution uncertainty

**Design Decision:**
- Add explicit precondition to solve, inverse: `well_conditioned: condition_number <= max_safe_condition`
- max_safe_condition = 10^8 (configurable)
- Add explicit postcondition: `stability_validated: residual <= epsilon * condition_number`
- If κ(A) > threshold: Raise exception (not silent failure)
- Document this limitation clearly: "Accuracy guarantees only for κ(A) <= 10^8"

**INNOVATION Focus:**
- Design by Contract (I-001) makes this explicit: Preconditions = runtime checking
- Error estimation (I-002) quantifies uncertainty: User sees residual bound
- Most libraries silently fail here; we fail loudly

**Impact on Specification:**
- FR-011, FR-012 preconditions: MUST check well-conditioning
- FR-016 (condition number): MUST compute/estimate for every matrix
- Test suite: 40+ pathological cases (near-singular, ill-conditioned, etc.)
- Documentation: Prominent section on numerical stability limits

---

## ASSUMPTION 4: Condition Number Estimation via LU Is Sufficient

**Original Assumption (D-006):**
"Estimate condition number via LU (not exact SVD); good enough for detecting ill-conditioning"

**Risk if False:**
Estimated condition number gives false positives/negatives; operations rejected when safe, or accepted when unsafe.

**Challenge Statement:**
How accurate is condition number estimate from LU vs. true value (from SVD)?

**Evidence Gathered:**

1. **LU-based estimation (Cline, Moler, Stewart)**
   - Method: κ_estimate = ||A|| * ||A^(-1)||
   - Computed from LU: ||U^(-1)|| used to estimate ||A^(-1)||
   - Accuracy: Often within factor of 3-10 of true value
   - Cost: Free (computed during LU factorization)

2. **SVD-based estimation (exact)**
   - Method: κ_exact = σ_max / σ_min (singular values)
   - Computed from full SVD decomposition
   - Accuracy: Exact (within machine precision)
   - Cost: Expensive (O(n³), Phase 2 feature)

3. **Trade-off analysis**
   - Conservative estimate: Overestimate κ(A)
     - Consequence: Reject some solvable problems (false negatives)
     - Benefit: Never silently accept ill-conditioned solution
     - Acceptable for MVP? YES - "loud failure" safer than silent error

   - Aggressive estimate: Underestimate κ(A)
     - Consequence: Accept ill-conditioned solutions (silent failure - BAD)
     - Benefit: More problems solvable
     - Acceptable? NO - violates RISK-001 mitigation

**Revised Assessment:**

**ACCEPT assumption with CONSERVATIVE bias:**
- Use LU-based condition estimation (fast)
- Bias toward overestimation (conservative = safe)
- If true κ(A) > threshold but estimate says OK: Accept it (rare case, correct answer likely acceptable)
- If true κ(A) < threshold but estimate says too high: Reject solution (prevents false positive)
- User can request higher threshold if needed

**Design Decision:**
- Implement Cline-Moler condition number estimation (Standard algorithm, well-tested)
- Default max_safe_condition = 10^8 (conservative)
- Allow user override: `solver.set_max_condition_number(threshold)`
- Postcondition always checks residual: ||Ax - b|| <= epsilon * condition_estimate
- If κ_estimate > threshold: Raise SINGULAR_OR_ILL_CONDITIONED exception

**Impact on Specification:**
- FR-016 implementation: LU-based estimation
- FR-011, FR-012: Always compute condition estimate before solving
- Exception hierarchy: LINALG_EXCEPTION > SINGULAR_OR_ILL_CONDITIONED
- Test: Compare LU-estimates vs. true SVD values on 20+ matrices (benchmarking)

---

## ASSUMPTION 5: Partial Pivoting Prevents LU Breakdown

**Original Assumption (D-003):**
"Partial pivoting sufficient; complete pivoting overkill for MVP"

**Risk if False:**
Matrix "solves" but produces garbage; users trust result incorrectly.

**Challenge Statement:**
Are there practical matrices where partial pivoting fails but solution requested?

**Evidence Gathered:**

1. **Partial pivoting performance**
   - Eliminates danger of exponential growth (growth factor bounded)
   - Numerically stable for most "real" problems
   - Historically used in LAPACK, BLAS (70+ years)
   - Occasionally fails on pathological matrices (rare in practice)

2. **Complete pivoting**
   - Guarantees growth factor ≤ 2 (tighter bound)
   - MUCH more expensive (O(n³) comparison operations)
   - Used only in specialized scenarios (ill-conditioning detection)
   - Not default in production LAPACK

3. **Failure modes of partial pivoting**
   - Wilkinson W21+ matrix: Partial pivoting fails
   - Random ill-conditioned matrices: ~0.1% of cases
   - Hilbert matrices: Fails due to ill-conditioning (not pivoting)

**Revised Assessment:**

**ACCEPT assumption with documented limitation:**
- Phase 1: Partial pivoting only (sufficient for MVP)
- Document limitation: "Pathological matrices may still fail even with partial pivoting"
- Precondition: `well_conditioned: condition_number <= max_safe_condition` catches most failures
- Phase 2: Consider complete pivoting for specialized use

**Design Decision:**
- Implement LU with partial pivoting (row swaps)
- Add singular flag to LU_DECOMPOSITION: `singular_flag: BOOLEAN`
- Check after factorization: If any |U[i,i]| < epsilon, set singular_flag = True
- Postcondition of solve: `not_singular: not solver.singular_flag`
- Raise exception if singular detected
- Document in GitHub Pages: "LU solver works for well-conditioned matrices; see condition number limits"

**Impact on Specification:**
- FR-010: Partial pivoting only; complete deferred to Phase 2
- LU_DECOMPOSITION.singular_flag: Runtime check for diagonal near-zero
- FR-011, FR-012: Postcondition checks singular_flag
- Exception: Raise if singular detected during LU

---

## ASSUMPTION 6: Power Iteration Sufficient for Eigenvalue Phase 1

**Original Assumption (D-004):**
"Power iteration finds dominant eigenvalue; QR algorithm deferred to Phase 2"

**Risk if False:**
Users need all eigenvalues immediately; library underutilized; complaints about Phase 1 limitation.

**Challenge Statement:**
Do most Phase 1 users actually need only dominant eigenvalue, or do they need all eigenvalues?

**Evidence Gathered:**

1. **Use case analysis**
   - Physics: Stability analysis often uses dominant eigenvalue (growth/decay rate)
   - ML: Top-K eigenvalues needed (but Phase 2)
   - Robotics: 3x3 matrices solvable analytically (limited use of eigenvalues)
   - Optimization: Newton-Raphson Hessian analysis: Needs all eigenvalues

2. **Practical alternatives**
   - QR algorithm: O(n³) but finds all eigenvalues
   - Power iteration: O(kn²) for k iterations, only dominant λ
   - Deflation: Compute dominant, remove it, iterate (sequential, inefficient)

3. **API design decision**
   - Phase 1 API: `eigenvalue_solver.dominant_eigenvalue_and_vector`
   - Can add `all_eigenvalues` method in Phase 2 without breaking Phase 1 API

**Revised Assessment:**

**ACCEPT assumption with clear Phase 1 limitation:**
- Phase 1: Power iteration for dominant eigenvalue ONLY
- Phase 2: QR algorithm for all eigenvalues
- API forward-compatible: Can extend without breaking

**Design Decision:**
- Implement EIGENVALUE_SOLVER class with power iteration
- Feature: `dominant_eigenvalue_and_vector: TUPLE[REAL_64, VECTOR_N]`
- Postcondition: Verify ||A*v - λ*v|| <= epsilon * ||A||
- Phase 1 documentation: "Find dominant eigenvalue only; Phase 2 will add QR for all eigenvalues"
- Exception: EIGENVALUE_NOT_CONVERGED if power iteration fails to converge

**Impact on Specification:**
- FR-013: Power iteration ONLY; QR deferred explicitly
- EIGENVALUE_SOLVER class: Minimal Phase 1 interface
- Convergence criterion: ||A*v_new - λ_new*v_new|| < epsilon, max_iterations = 1000
- Test: Compare power iteration results on symmetric matrices (guaranteed real eigenvalues)

---

## ASSUMPTION 7: Column-Major Storage Optimal for Eiffel

**Original Assumption (D-002):**
"Column-major storage (BLAS convention) worth the mental overhead; better cache locality"

**Risk if False:**
Column-major indexing confuses Eiffel developers; bugs in index calculations; performance worse than row-major.

**Challenge Statement:**
Is column-major storage actually beneficial in Eiffel, or is it just mimicry of C/Fortran conventions?

**Evidence Gathered:**

1. **Eiffel VM characteristics**
   - Eiffel arrays: Row-major by convention (natural)
   - Cache line size: ~64 bytes = 8 REAL_64 elements
   - Column-major: Better cache reuse for matrix multiply inner loop

2. **Matrix multiply performance**
   ```
   Row-major:    C[i,j] += A[i,k] * B[k,j]
                 Inner loop: B[k,j] access (stride = N columns)
                 Cache miss rate: HIGH

   Column-major: C[i,j] += A[i,k] * B[k,j]
                 Inner loop: A[i,k] and B[k,j] access (stride = 1 column)
                 Cache miss rate: LOW
   ```

3. **Future BLAS integration**
   - All BLAS functions expect column-major (Fortran convention)
   - If we choose row-major in Phase 1, major refactor needed in Phase 2
   - Column-major now = lower Phase 2 cost

**Revised Assessment:**

**ACCEPT assumption:**
- Column-major storage decision is correct
- Benefits: Future BLAS integration, cache locality, proven industry standard
- Cost: Developer mental overhead (mitigated by clear documentation)
- Design decision STANDS; do not change

**Design Decision:**
- Lock in D-002 (Column-major)
- Implement helper: `matrix_index(i, j) -> linear_index` (encapsulate indexing)
- Document: "Storage is column-major for performance. Public API hides this detail."
- Test: Verify layout correctness on 10+ different matrix sizes

**Impact on Specification:**
- FR-005: Column-major storage MANDATORY (not optional)
- MATRIX class: Index calculation encapsulated in private helpers
- API: Logical indexing (matrix[i,j]) hides physical layout
- Performance test: Matrix multiply cache profile (validate benefits)

---

## ASSUMPTION 8: SCOOP Compatibility Possible Without Parallelization

**Original Assumption (Innovation I-003):**
"Design APIs compatible with separate keyword for future SCOOP but don't parallelize Phase 1"

**Risk if False:**
APIs not truly SCOOP-compatible; Phase 2 parallelization requires major redesign.

**Challenge Statement:**
Can we design Phase 1 code that's SCOOP-compatible WITHOUT using separate/SCOOP in Phase 1?

**Evidence Gathered:**

1. **SCOOP requirements**
   - No mutable shared state (atomic operations only)
   - All data must be either immutable or encapsulated in regions
   - Processors (separate threads) pass immutable copies or controlled access

2. **Matrix operations**
   - Most matrix operations need to read entire matrix (must be immutable copy)
   - Decomposition: Can partition matrix into independent blocks
   - Panel operations: Can be parallelized without shared write conflicts

3. **Architecture implication**
   - Phase 1: Pure Eiffel (no separate keyword)
   - Precondition: Design immutable/copy-on-write semantics
   - Phase 2: Add separate keyword to enable true parallelization
   - API remains same; implementation changes to concurrent

**Revised Assessment:**

**ACCEPT assumption with design discipline:**
- Phase 1: Write all matrix classes as if future SCOOP parallelization intended
- Constraints: No mutable shared state accessible from multiple operations
- All parameters: PASSED by immutable copy (not by reference to mutable data)
- All return values: Immutable copies

**Design Decision:**
- VECTOR, MATRIX classes: Immutable (all operations return new objects, not in-place)
- Decomposition results: Immutable (L, U, P are independent objects)
- LU_DECOMPOSITION: All queries return copies (not references to internal state)
- Phase 1 performance note: Extra copies OK for MVP; Phase 2 optimization can add in-place variants
- Precondition for Phase 1: All operations must be referentially transparent

**Impact on Specification:**
- All classes: Immutable by design (no in-place operations)
- Vector + Vector: Returns new VECTOR_N, doesn't modify operands
- Matrix * Matrix: Returns new MATRIX, doesn't modify operands
- Postcondition: Original objects unchanged after operation
- Phase 2: Can add optional `*_in_place` methods with separate keyword

---

## ASSUMPTION 9: Simple API Facade Needed

**Original Assumption (Recommendation section):**
"Simple facade wrapping VECTOR and MATRIX classes for ease of use"

**Risk if False:**
Users must understand complex class hierarchy; API too verbose; adoption low.

**Challenge Statement:**
Is a facade needed, or will VECTOR/MATRIX/SOLVER classes alone suffice?

**Evidence Gathered:**

1. **User personas**
   - Expert: Comfortable with OOP, understands decompositions → Use classes directly
   - Practitioner: Wants quick solution to standard problems → Needs facade
   - Student: Learning linear algebra → Needs simple entry point

2. **Common workflows**
   - Solve Ax=b: User wants one-liner, not 5-step decomposition
   - Multiply matrices: User wants A * B, not detailed class interaction
   - Find eigenvalue: User wants quick dominant eigenvalue

3. **Facade benefits**
   - SIMPLE_LINALG.solve(A, b): One-liner (internally uses LU_DECOMPOSITION + SOLVER)
   - SIMPLE_LINALG.multiply(A, B): More readable than A.multiply(B)
   - SIMPLE_LINALG.eigenvalue(A): Simplified interface

**Revised Assessment:**

**ACCEPT assumption:**
- Facade NEEDED and valuable (different user personas)
- Design: SIMPLE_LINALG as static/singleton facade
- Classes underneath remain public for advanced users
- Phase 1: Facade + classes (both available)

**Design Decision:**
- Create SIMPLE_LINALG facade class (static methods or singleton)
- Methods: solve, multiply, eigenvalue, transpose, determinant, inverse, norm
- Each method is user-friendly wrapper around underlying classes
- Advanced users: Import VECTOR, MATRIX, LU_DECOMPOSITION directly
- Documentation: Show both facade (for beginners) and classes (for experts)

**Impact on Specification:**
- Add SIMPLE_LINALG class to 04-CLASS-DESIGN.md
- Facade methods in 06-INTERFACE-DESIGN.md
- Example code: Both "simple" (facade) and "advanced" (classes) patterns

---

## CHALLENGE RESOLUTION SUMMARY

| Assumption | Original | Challenged | Resolution | Impact |
|-----------|----------|-----------|-----------|--------|
| A-1: Pure Eiffel Performance | Risky | Supported by precedent | ACCEPT + Phase 2 optimization path | No Phase 1 C bindings |
| A-2: Dense Sufficient | Reasonable | Confirmed for MVP scope | ACCEPT with clear boundary | Sparse deferred |
| A-3: Numerical Stability | Achievable | Qualified - only well-conditioned | ACCEPT WITH PRECONDITIONS | Contracts enforce well-conditioning |
| D-001: Dense vs Sparse | Dense chosen | MVP boundary confirmed | KEEP DECISION | Dense only Phase 1 |
| D-002: Column-major | Cost concern | Benefits outweigh cost | KEEP DECISION | Lock in column-major |
| D-003: Partial Pivoting | Sufficient? | Documented limitation | ACCEPT + singular detection | Precondition checking required |
| D-004: Power Iteration | Acceptable? | Sufficient for dominant eigenvalue | ACCEPT | Clear Phase 1 limitation |
| D-006: LU Condition Estimate | OK? | Conservative bias justified | ACCEPT | Overestimate = safe failure |
| I-003: SCOOP Ready | Possible? | Yes with immutable-first design | ACCEPT | All classes immutable Phase 1 |
| Facade needed | Helpful? | Yes (multiple user personas) | ACCEPT | SIMPLE_LINALG facade added |

---

## EVIDENCE AND DECISIONS DOCUMENTED

All assumptions challenged and justified. Major design decisions:
1. **Preconditions enforced**: well_conditioned, not_singular checks mandatory
2. **Immutable-first design**: All Phase 1 operations return new objects
3. **Error estimation built-in**: Every operation returns confidence metadata
4. **Conservative condition number**: Overestimate for safety
5. **Clear Phase limitations**: Dense only, power iteration only, documented

Next Step: 04-CLASS-DESIGN.md (Design class structure)
