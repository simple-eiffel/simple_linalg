# Intent: simple_linalg

## What

**simple_linalg** is a linear algebra library providing vectors, matrices, and decompositions for Eiffel applications. It enables physics simulations, engineering analysis, machine learning, and scientific computing through verified, numerically-stable matrix operations.

**Core Capabilities:**
- Vector operations (2D, 3D, n-dimensional; norms, dot product, cross product)
- Matrix operations (multiply, transpose, determinant, inverse)
- LU decomposition with partial pivoting
- Linear system solving (Ax = b via LU)
- Eigenvalue/eigenvector computation (power iteration)
- Condition number estimation (detect ill-conditioning)

## Why

**Problem:** Physics simulations, engineering analysis, and scientific computing in Eiffel require linear algebra operations that don't exist in the ecosystem.

**Why it matters:**
- Jacobian matrices (∂f/∂x) for Newton-Raphson solvers
- Electromagnetic field simulations need matrix operations
- Structural analysis requires eigenvalue problems
- Machine learning needs matrix multiply and decompositions
- Eiffel has NO built-in linear algebra library

**Impact of not solving:** Cannot build physics engines, optimization solvers, engineering simulations, or ML applications efficiently in Eiffel without external C bindings (BLAS/LAPACK).

## Users

| User Type | Needs | Use Case |
|-----------|-------|----------|
| Physics Simulator | Jacobians, linear solving | Maxwell equations, electromagnetic fields |
| Robotics Engineer | Rotation matrices, transforms | Kinematics, inverse problems |
| ML Researcher | Matrix multiply, decompositions | Neural networks, optimization |
| Structural Engineer | Eigenvalues, linear solving | FEM analysis, modal analysis |
| Optimization Algorithm | Jacobians, linear systems | Newton-Raphson, trust region |

## Acceptance Criteria

- [ ] Vector operations accurate to < 1e-10 relative error
- [ ] Matrix multiply accurate to < 1e-10 relative error
- [ ] LU solving achieves residual < 1e-8 on well-conditioned systems
- [ ] Condition number estimation detects ill-conditioning
- [ ] All methods prevent silent failures (errors in results flagged)
- [ ] Eigenvalue power iteration converges reliably
- [ ] All methods void-safe and SCOOP-compatible
- [ ] Dense matrices (M × N) supported
- [ ] 100+ unit tests, all passing
- [ ] GitHub Pages documentation with physics examples

## Out of Scope

- **NOT Sparse matrices:** Phase 1 is dense only (Phase 2 → separate simple_sparse)
- **NOT Complex matrices:** Phase 1 is real REAL_64 only (Phase 2+ adds complex)
- **NOT GPU acceleration:** CPU-only, pure Eiffel
- **NOT Advanced iterative solvers:** GMRES, MINRES deferred to Phase 2
- **NOT All eigenvalues:** Phase 1 is dominant eigenvalue only (Phase 2 adds QR algorithm)

## Dependencies (REQUIRED - simple_* First Policy)

**Rule:** Always prefer simple_* libraries over ISE/Gobo. If no simple_* equivalent exists, document the gap for future development.

| Need | Library | Justification |
|------|---------|---------------|
| Basic arithmetic (sqrt, abs, max) | simple_math | Foundation library, required |
| Partial derivatives (future: Jacobian) | simple_calculus | For Jacobian matrix assembly (Phase 2) |
| Fundamental types | base (ISE only) | No simple_* equivalent exists |
| Unit testing framework | testing (ISE only) | No simple_* equivalent exists |

**Gaps Identified (Potential future simple_* libraries):**
- Sparse matrix support (Phase 2) → consider simple_sparse
- Complex matrix support (Phase 2+) → consider simple_complex_linalg
- GPU acceleration (Phase 3+) → consider simple_gpu_linalg

## MML Decision (REQUIRED)

**Question:** Does this library need MML model queries for precise postconditions?

**Analysis:**
- simple_linalg has INTERNAL ARRAYS for matrix storage
- Matrices use column-major ARRAY storage internally
- Vectors use ARRAY storage internally
- BUT: Arrays are private implementation detail (not exposed to users)
- Postconditions care about mathematical properties, not array details

**Decision:** **NO**

**Rationale:** While internal storage uses arrays, the public interface deals with abstract vectors and matrices. Frame conditions will use mathematical properties (determinant, norm, eigenvalue equations) rather than MML collection invariants. The library is computation-focused, not collection-managing.

---

## Implementation Approach

### Phase 1 (MVP - v1.0.0)
**Deliverable:** Dense matrix operations and basic decompositions

**Classes:**
- SIMPLE_LINALG (facade)
- VECTOR_2 (2D vectors)
- VECTOR_3 (3D vectors)
- VECTOR_N (n-dimensional vectors)
- MATRIX (M × N dense matrix, column-major)
- LU_DECOMPOSITION (LU factorization with partial pivoting)
- SOLVER (linear system Ax=b via LU)
- EIGENVALUE_SOLVER (dominant eigenvalue via power iteration)

**API Tiers:**
1. **Tier 1 (Simple):** `vector_3(x, y, z)`, `matrix_multiply(a, b)`, `solve(a, b)` - one-liners
2. **Tier 2 (Advanced):** Configuration options, error control, alternative algorithms

### Phase 2 (Full - v2.0.0)
- QR decomposition (all eigenvalues)
- Singular Value Decomposition (SVD)
- Sparse matrix support (simple_sparse)
- Complex matrix support (simple_complex_linalg)
- Iterative refinement for ill-conditioned systems

### Phase 3+ (Extensions)
- GPU acceleration (simple_gpu_linalg)
- Specialized matrix types (symmetric, triangular, band)
- BLAS/LAPACK C bindings for performance

---

## Design Principles

1. **Design by Contract:** Every method has require/ensure/invariant
   - Preconditions validate well-conditioning (prevent silent failures)
   - Postconditions guarantee solution quality
   - Invariants enforce mathematical properties

2. **Numerical Stability:** Core design principle
   - Partial pivoting in LU (not zeros on diagonal)
   - Condition number estimation (detect ill-conditioning)
   - Error bounds on all operations
   - Residual checking in solvers

3. **Immutability:** Results are immutable
   - Enables SCOOP concurrent use
   - No state corruption issues
   - Easy to reason about

4. **Simple API:** Facade hides complexity
   - Users call `solve(a, b)`
   - Don't see LU decomposition details
   - Don't see pivoting strategy
   - Just get accurate solutions with error bounds

5. **Column-Major Storage:** Matches BLAS convention
   - Better cache locality
   - Easier future BLAS integration
   - Standard numerical computing approach

## Physics Integration Path

```
simple_math (foundation)
     ↓
simple_calculus (computes ∂f/∂x)
     ↓ assembles Jacobians
simple_linalg (Jacobian matrices, linear solving)
     ↓
simple_physics (solves F=ma, Maxwell, wave equations)
```

**Seamless Integration:**
- Calculus computes partial derivatives
- Linalg assembles and solves Jacobian systems
- Physics uses both for electromagnetic, structural, fluid simulations
- All pure Eiffel, no C dependencies

---

## Success Metrics

| Metric | Target |
|--------|--------|
| Vector/matrix accuracy | < 1e-10 relative error |
| Linear solving accuracy | residual < 1e-8 |
| Well-conditioning detection | κ estimation works |
| OOSC2 compliance | 4/4 principles |
| Test coverage | 100+ tests, 100% pass |
| Void safety | void_safety="all" |
| SCOOP ready | immutable results |
| Documentation | GitHub Pages + physics examples |

---

## Numerical Stability Strategy

### Ill-Conditioning Detection
- Precondition: `well_conditioned: matrix.condition_number < max_safe_condition`
- This prevents silent failures on nearly-singular matrices
- Users know when results are unreliable

### Partial Pivoting
- Swaps rows to avoid zeros on LU diagonal
- Numerically stable without complete pivoting complexity
- O(n³) same as standard LU

### Error Estimation
- Residual r = b - Ax computed and returned
- ||r|| tells user how accurate the solution is
- Can decide to use iterative refinement if needed

### Convergence for Eigenvalues
- Power iteration with convergence criteria
- Iterations count and tolerance tracked
- Status enum signals convergence success

---

## Physics Application Examples

### Example 1: Newton-Raphson Solver
```
Needs:
  - Calculus: Compute Jacobian ∂f/∂x via partial derivatives
  - Linalg: Assemble Jacobian matrix and solve J·δx = -f(x)
  - Together: Iterate x := x + δx until convergence
```

### Example 2: Electromagnetic Field Simulation
```
Maxwell's equations need:
  - Matrix: Store field component matrix
  - Linalg: Solve ∇²E = -ρ/ε (Poisson equation)
  - Calculus: Compute ∇ (divergence, curl)
  - Together: Simulate electric/magnetic fields
```

### Example 3: Structural Analysis
```
Finite Element Method needs:
  - Linalg: Assemble stiffness matrix K
  - Linalg: Solve K·u = f for displacements
  - Linalg: Compute eigenvalues (natural frequencies)
  - All: Pure matrix operations
```
