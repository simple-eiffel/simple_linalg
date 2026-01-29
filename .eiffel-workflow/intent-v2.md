# Intent: simple_linalg (v2 - Post-Review)

**Status:** REFINED & APPROVED
**Date:** 2026-01-29 14:35 UTC
**Review:** AI review complete, all clarifications resolved

---

## What

**simple_linalg** is a linear algebra library providing vectors, matrices, and decompositions for Eiffel applications. It enables physics simulations, engineering analysis, machine learning, and scientific computing through verified, numerically-stable matrix operations.

**Core Capabilities:**
- Vector operations (2D, 3D, n-dimensional; norms, dot product, cross product)
- Matrix operations (multiply, transpose, determinant, inverse)
- LU decomposition with partial pivoting (handles near-zeros automatically)
- Linear system solving (Ax = b via LU with residual validation)
- Eigenvalue/eigenvector computation (power iteration with convergence criterion)
- Condition number estimation (detects ill-conditioning before failure)

---

## Why

**Problem:** Physics simulations, engineering analysis, and scientific computing in Eiffel require linear algebra operations that don't exist in the ecosystem.

**Why it matters:**
- Jacobian matrices (∂f/∂x) for Newton-Raphson solvers (Phase 2 with simple_calculus)
- Electromagnetic field simulations need matrix operations
- Structural analysis requires eigenvalue problems (natural frequencies)
- Machine learning needs matrix multiply and decompositions
- Eiffel has NO built-in linear algebra library
- BLAS/LAPACK bindings require complex C integration

**Impact of not solving:** Cannot build physics engines, optimization solvers, engineering simulations, or ML applications efficiently in Eiffel.

---

## Users

| User Type | Needs | Use Case | Priority |
|-----------|-------|----------|----------|
| Physics Simulator | Jacobians, linear solving | Maxwell equations, electromagnetic fields | HIGH |
| Robotics Engineer | Rotation matrices, transforms | Kinematics, inverse kinematics | HIGH |
| ML Researcher | Matrix multiply, decompositions | Neural networks, optimization | MEDIUM |
| Structural Engineer | Eigenvalues, linear solving | FEM analysis, modal analysis | MEDIUM |
| Optimization Algorithm | Jacobians, linear systems | Newton-Raphson, trust region | HIGH |

---

## Acceptance Criteria (Measurable)

- [ ] Vector operations accurate to < 1e-10 relative error
  - Test: add, subtract, dot product, norms
  - Accuracy: elementwise error < 1e-10 × magnitude

- [ ] Matrix multiply accurate to < 1e-10 relative error
  - Tested on square matrices up to 1000×1000
  - Larger matrices work (slower); O(n³) algorithm

- [ ] LU solving achieves residual < 1e-8 on well-conditioned systems
  - Precondition: condition_number ≤ 1e12 (IEEE 754 limits)
  - Residual: ||Ax - b|| < 1e-8 × ||b||
  - Returned in SOLVER_RESULT.residual_norm

- [ ] Condition number estimation detects ill-conditioning
  - Threshold: κ > 1e12 triggers precondition violation
  - User knows system is ill-posed; iterative refinement needed (Phase 2)

- [ ] All methods prevent silent failures (errors in results flagged)
  - Residual always computed and returned
  - Condition number always estimated
  - Postconditions document achieved accuracy

- [ ] Eigenvalue power iteration converges reliably
  - Convergence: |λ_new - λ_old| / |λ_old| < 1e-10
  - Max iterations: 10,000 (Phase 2 allows tuning)
  - Result: EIGENVALUE_RESULT (eigenvalue: λ, eigenvector: v)

- [ ] All methods void-safe and SCOOP-compatible
  - void_safety="all" in ECF
  - Immutable results enable concurrent use

- [ ] Dense matrices (M × N) supported
  - No sparse support (Phase 2 → simple_sparse)
  - No complex support (Phase 2+ → simple_complex_linalg)
  - No GPU (Phase 3+ → simple_gpu_linalg)

- [ ] 100+ unit tests, all passing
  - Unit tests: vector ops, matrix ops, decompositions, edge cases
  - Integration tests: Newton-Raphson, eigenvalue problems
  - Pathological matrices: Hilbert, Vandermonde, near-singular

- [ ] GitHub Pages documentation with physics examples
  - Examples: Newton-Raphson solver, Maxwell simulation, FEM analysis

---

## Out of Scope

- **NOT Sparse matrices:** Phase 1 is dense only (Phase 2 → separate simple_sparse)
- **NOT Complex matrices:** Phase 1 is real REAL_64 only (Phase 2+ adds complex)
- **NOT GPU acceleration:** CPU-only, pure Eiffel (Phase 3+ → simple_gpu_linalg)
- **NOT Advanced iterative solvers:** GMRES, MINRES deferred to Phase 2
- **NOT All eigenvalues:** Phase 1 is dominant eigenvalue only (Phase 2 adds QR algorithm)
- **NOT Very large matrices:** Phase 1 tested to 1000×1000; Phase 2 can add BLAS optimization

---

## Dependencies (REQUIRED - simple_* First Policy)

| Need | Library | Justification |
|------|---------|---------------|
| Basic arithmetic (sqrt, abs, max) | simple_math | Foundation library, required |
| Partial derivatives (future: Jacobian) | simple_calculus | For Jacobian matrix assembly (Phase 2) |
| Fundamental types | base (ISE only) | No simple_* equivalent exists |
| Unit testing framework | testing (ISE only) | No simple_* equivalent exists |

**Gaps Identified (Future simple_* Libraries):**
- Sparse matrix support → consider **simple_sparse** (Phase 2)
- Complex matrix support → consider **simple_complex_linalg** (Phase 2+)
- GPU acceleration → consider **simple_gpu_linalg** (Phase 3+)

---

## MML Decision (REQUIRED)

**Question:** Does this library need MML model queries for precise postconditions?

**Decision:** **NO**

**Rationale:** While internal storage uses ARRAY for matrices/vectors, arrays are private implementation detail. Public interface deals with abstract VECTOR and MATRIX types. Postconditions specify mathematical properties (A*x ≈ b, λ satisfies eigenvalue equation, etc.) using simple inequalities, not MML collection invariants.

---

## Implementation Approach

### Phase 1 (MVP - v1.0.0)
**Deliverable:** Dense matrix operations and basic decompositions

**Classes:**
1. SIMPLE_LINALG (facade)
2. VECTOR_2 (2D vectors: high-performance specialized)
3. VECTOR_3 (3D vectors: high-performance specialized with cross product)
4. VECTOR_N (n-dimensional vectors: generic, no hard size limit)
5. MATRIX (M × N dense matrix, column-major storage internally)
6. LU_DECOMPOSITION (factors, permutation; Tier 3 expert access)
7. SOLVER (solves Ax=b via LU with residual validation)
8. EIGENVALUE_SOLVER (dominant eigenvalue/eigenvector via power iteration)
9. EIGENVALUE_RESULT (holds both λ and v with convergence info)

**Storage Details:**
- VECTOR_N: ARRAY [REAL_64], dimension stored
- MATRIX: Single ARRAY [REAL_64] in column-major order
  - Element (i,j) at index: (j-1)*rows + i (0-indexed internally)
  - User API: matrix[row, col] (1-indexed, row-major syntax)
  - Transparent: user doesn't need to know column-major

**API Tiers:**

**Tier 1 (Simple - Most Users):**
```eiffel
vector_2 (x, y: REAL_64): VECTOR_2
vector_3 (x, y, z: REAL_64): VECTOR_3
vector_n (components: ARRAY [REAL_64]): VECTOR_N

matrix_identity (n: INTEGER): MATRIX
matrix_from_array_2d (data: ARRAY2 [REAL_64]): MATRIX

dot_product (v1, v2: VECTOR_N): REAL_64
vector_norm (v: VECTOR_N; norm_type: INTEGER): REAL_64  -- 1=L1, 2=L2, 3=infinity

matrix_multiply (a, b: MATRIX): MATRIX
matrix_transpose (m: MATRIX): MATRIX
matrix_determinant (m: MATRIX): REAL_64
matrix_inverse (m: MATRIX): MATRIX

solve_linear_system (a: MATRIX; b: VECTOR_N): VECTOR_N
    -- Requires: well_conditioned, returns SOLVER_RESULT with residual

dominant_eigenvalue (m: MATRIX): REAL_64
dominant_eigenvector (m: MATRIX): VECTOR_N
```

**Tier 2 (Advanced - Tuning):**
```eiffel
solve_with_residual (a: MATRIX; b: VECTOR_N): SOLVER_RESULT
    -- Returns (solution_x, residual_norm, condition_estimate)

eigenvalue_with_iterations (m: MATRIX; max_iter: INTEGER; tolerance: REAL_64):
    EIGENVALUE_RESULT
    -- Allows tuning convergence parameters
```

**Tier 3 (Expert - Research):**
```eiffel
lu_decomposition (a: MATRIX): LU_DECOMPOSITION
    -- Access L, U factors and permutation directly
```

### Phase 2 (Full - v2.0.0)
- QR decomposition (Gram-Schmidt, Householder)
- Singular Value Decomposition (SVD)
- Sparse matrix support (simple_sparse library)
- Complex matrix support (simple_complex_linalg library)
- Iterative refinement for ill-conditioned systems
- All eigenvalues via QR algorithm

### Phase 3+ (Extensions)
- GPU acceleration (simple_gpu_linalg)
- Specialized matrix types (symmetric, triangular, band)
- BLAS/LAPACK C bindings for performance
- Krylov subspace methods (GMRES, etc.)

---

## Design Principles

1. **Design by Contract:** Every method has require/ensure/invariant
   - Preconditions validate well-conditioning (prevent silent failures)
   - Postconditions guarantee solution quality
   - Invariants enforce mathematical properties

2. **Numerical Stability:** Core design principle
   - Partial pivoting in LU: Swaps with largest magnitude element (standard)
   - Condition number estimation: Threshold κ ≤ 1e12 (IEEE 754 relative error limits)
   - Error bounds on all operations: Always computed and returned
   - Residual checking: ||Ax - b|| always returned for validation

3. **Immutability:** Results are immutable
   - Enables SCOOP concurrent use
   - No state corruption issues
   - Easy to reason about correctness

4. **Simple API:** Facade hides complexity
   - Tier 1: Users call `solve(a, b)` and get VECTOR_N
   - Don't see LU decomposition details
   - Don't see pivoting strategy
   - Don't worry about column-major storage (transparent)
   - Just get accurate solutions with residual validation

5. **Column-Major Storage:** BLAS convention
   - Internal implementation (transparent to users)
   - Better cache locality for matrix multiply
   - Easier Phase 2+ BLAS integration
   - User API is row-major (standard): matrix[row, col]

---

## Numerical Stability Strategy

### Ill-Conditioning Detection
- **Precondition:** `well_conditioned: matrix.condition_number <= 1e12`
- Prevents solving mathematically valid but numerically ill-posed systems
- Users know immediately if κ is too large
- Document: "System too ill-conditioned; use Phase 2 iterative refinement"

### Partial Pivoting in LU
- Standard algorithm: Swap rows to place largest magnitude element on diagonal
- Handles near-zeros automatically (no underflow)
- O(n³) same as standard LU (no performance penalty)
- Postcondition: Factorization is numerically stable

### Error Estimation
- **Primary:** Residual r = Ax - b always computed and returned
  - ||r|| small → solution accurate
  - ||r|| large → matrix is ill-conditioned (despite κ check)
  - User can judge reliability immediately

- **Secondary:** Condition number estimated during factorization
  - Helps detect when precondition κ ≤ 1e12 is violated

### Convergence for Eigenvalues
- Power iteration convergence criterion: |λ_new - λ_old| / |λ_old| < 1e-10
- Max iterations: 10,000 (safe default)
- Phase 2: Tier 2 API allows user tuning (max_iterations, tolerance)
- Postcondition: Achieved tolerance documented in EIGENVALUE_RESULT

---

## Physics Integration Path

```
simple_math (foundation: sqrt, abs, max)
     ↓
simple_linalg (Phase 1: Vectors, matrices, LU, eigenvalues)
     ↓
simple_linalg (Phase 2: with simple_calculus for Jacobians)
     ↓
simple_physics (Phase 2+: solves F=ma, Maxwell, wave equations)
```

**Seamless Integration (Phase 2):**
- Calculus computes partial derivatives ∂f/∂x_i
- Linalg assembles Jacobian matrix J (m × n)
- Linalg solves J·δx = -f(x) for Newton-Raphson
- Physics simulations use both for complex systems

---

## Size Limits & Performance

| Operation | Max Tested | Typical Time | Phase 2+ |
|-----------|------------|--------------|----------|
| Vector dimension | 1,000,000 | O(n) per op | No limit |
| Matrix multiply (1000×1000) | 1000×1000 | ~10 ms | Strassen, BLAS |
| LU factorization (1000×1000) | 1000×1000 | ~100 ms | BLAS, GPU |
| Eigenvalue (power iter) | 1000×1000 | ~100 ms | QR, all eigenvalues |

**Documented:** Phase 1 tested extensively up to 1000×1000. Larger matrices work (memory-constrained). Phase 2 can add performance optimization via BLAS or Strassen algorithm.

---

## Success Metrics

| Metric | Target | Measurement |
|--------|--------|------------|
| Vector accuracy | < 1e-10 relative | Elementwise operations |
| Matrix multiply accuracy | < 1e-10 relative | Product vs analytical |
| LU solving accuracy | residual < 1e-8 | ||Ax - b|| / ||b|| |
| Condition detection | Reliable | κ estimation accuracy |
| Eigenvalue convergence | |λ_new - λ_old| < 1e-10 | Power iteration termination |
| OOSC2 compliance | 4/4 principles | Contract language, abstraction |
| Test coverage | 100+ tests, 100% pass | Vector, matrix, decomp, edge cases |
| Void safety | void_safety="all" | Compiler enforced |
| SCOOP ready | Immutable results | No concurrent state issues |
| Documentation | GitHub Pages + examples | Physics examples, API docs |

---

## Status

✅ **Intent APPROVED**
- Research: Complete
- Specification: Complete
- AI Review: Complete
- All clarifications resolved
- Ready for Phase 1: /eiffel.contracts
