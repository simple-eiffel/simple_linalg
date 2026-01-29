# Phase 0: AI Review Response - simple_linalg

**Reviewer:** Claude Code
**Date:** 2026-01-29 14:30 UTC
**Status:** REVIEW COMPLETE

---

## Probing Questions & Clarifications

### Question 1: Matrix Size Limits

**Quote:** "Dense matrices (M × N) supported"

**Issue:** What's the largest matrix that can be practically created? Any hard limits?

**Question:** What are the practical limits on matrix dimensions?

**Options:**
A) No hard limit; memory-constrained (e.g., 10,000 x 10,000 in practice)
B) Document recommended max (e.g., 5,000 x 5,000 for O(n³) operations)
C) Different limits for different operations (determinant, multiply, etc.)

**Answer:** **Option B** (with memory caveat)
**Rationale:** Document that Phase 1 is tested up to 1000 x 1000. Larger matrices work but may be slow (O(n³) multiply). Phase 2 can optimize with Strassen or BLAS bindings. Users should expect ~10ms for 1000x1000 multiply, ~100ms for LU factorization.

---

### Question 2: Condition Number Threshold

**Quote:** "Condition number estimation detects ill-conditioning"

**Issue:** What's the exact threshold for "well-conditioned"? What κ value triggers a warning/error?

**Question:** What's the condition number threshold?

**Options:**
A) Precondition checks: `condition_number <= 1e12` (IEEE 754 relative error limits)
B) No hard limit; postcondition documents achieved residual; user judges
C) Warning threshold at κ > 1e6, error threshold at κ > 1e10

**Answer:** **Option A**
**Rationale:** IEEE 754 (double precision) has relative error ~1e-15. A system with κ = 1e12 loses ~3 decimal digits of accuracy. Setting precondition to κ <= 1e12 ensures users get meaningful solutions. For more ill-conditioned systems, document that iterative refinement is needed (Phase 2).

---

### Question 3: Eigenvalue Convergence Criterion

**Quote:** "Eigenvalue power iteration converges reliably"

**Issue:** What's the convergence criterion? How many max iterations?

**Question:** What are power iteration convergence parameters?

**Options:**
A) Convergence: `|λ_new - λ_old| / |λ_old| < 1e-10`, max iterations 10,000
B) Convergence: `||v_new - v_old|| < 1e-12`, max iterations 1,000
C) User-configurable via Tier 2 API

**Answer:** **Option A** (with Tier 2 override)
**Rationale:** Eigenvalue convergence based on λ change is standard. Phase 1 uses fixed tolerance 1e-10 and max 10,000 iterations (safe for well-conditioned matrices). Phase 2 allows user configuration. Postcondition documents achieved tolerance.

---

### Question 4: Partial Pivoting Edge Case

**Quote:** "Partial pivoting (not zeros on diagonal)"

**Issue:** What about near-zeros? Numerical underflow?

**Question:** How are near-zero pivots handled?

**Options:**
A) Threshold-based: Swap if diagonal element < 1e-15 * max row element
B) Always swap with largest element in column (standard partial pivoting)
C) Precondition requires determinant /= 0; underflow handling Phase 2

**Answer:** **Option B** (with precondition)
**Rationale:** Standard partial pivoting always swaps with largest magnitude. Precondition `not_singular: determinant /= 0` ensures diagonal elements aren't zero. If near-zero detected after factorization, postcondition documents it (residual will be large).

---

### Question 5: Residual Computation

**Quote:** "Residual checking in solvers"

**Issue:** Is residual always computed? Returned in result? How?

**Question:** How is residual handled?

**Options:**
A) Always computed and returned in SOLVER result; `residual_norm: REAL_64` field
B) Optionally computed via Tier 2 `solve_with_residual()` method
C) User computes manually: `residual := (a.multiply(x)).subtract(b).norm`

**Answer:** **Option A**
**Rationale:** Residual is critical for validation. All solvers compute and return it. SOLVER_RESULT has `residual_norm: REAL_64` field. Users check if residual is small (solution is good) or large (matrix is ill-conditioned).

---

### Question 6: VECTOR_N Maximum Dimension

**Quote:** "VECTOR_N (n-dimensional vectors)"

**Issue:** Practical limits on N?

**Question:** What's the max dimension for VECTOR_N?

**Options:**
A) No hard limit; ARRAY-based so memory-constrained
B) Recommend N <= 10,000 for practical performance
C) Separate classes for small vectors (VECTOR_2, VECTOR_3) and large vectors

**Answer:** **Option A** (with documentation)
**Rationale:** VECTOR_N is just an ARRAY wrapper. No hard limit. Document that vector operations are O(n), so even 1M-dimensional vectors work (slowly). Users should use VECTOR_2/VECTOR_3 for performance when N is fixed and small.

---

### Question 7: Column-Major Storage Visibility

**Quote:** "Column-Major Storage: Matches BLAS convention"

**Issue:** Is column-major user-visible or implementation detail? How do users create matrices?

**Question:** Is column-major storage transparent to users?

**Options:**
A) Completely transparent; API uses row-major indexing (standard), converted internally
B) User must be aware; API is column-major; `matrix[i,j]` is column i, row j
C) Documented but irrelevant; implementation detail, API is row-major

**Answer:** **Option C** (with caveat)
**Rationale:** Users think row-major (standard): `matrix[row, col]`. Internally stored column-major (BLAS convention). Facade handles indexing. Documented only for Phase 2+ performance optimization notes.

---

### Question 8: LU Decomposition Return Type

**Quote:** "LU decomposition with partial pivoting"

**Issue:** What does the user get back? L and U matrices separately? Permutation?

**Question:** What's the LU_DECOMPOSITION class structure?

**Options:**
A) Return L and U as separate MATRIX objects, plus permutation ARRAY
B) Single matrix with L (lower triangular) and U (upper triangular) combined
C) Internal only; users only see `solve(a, b)` output, not LU factors

**Answer:** **Option B** (with permutation available)
**Rationale:** Standard numerical practice: store L+U in single matrix (diagonal and above = U, below = L). Permutation stored as ARRAY of integers. LU_DECOMPOSITION is public (Tier 3 expert access) but Tier 1 users see only `solve()` result.

---

### Question 9: Eigenvalue Return Type

**Quote:** "Eigenvalue/eigenvector computation (power iteration)"

**Issue:** Does the user get both λ and v, or just one?

**Question:** What's returned from eigenvalue solver?

**Options:**
A) Both: λ (scalar) and v (VECTOR_N eigenvector)
B) Just dominant eigenvalue λ; user requests eigenvector separately
C) EIGENVALUE_RESULT class with both fields

**Answer:** **Option C**
**Rationale:** EIGENVALUE_RESULT has `eigenvalue: REAL_64` and `eigenvector: VECTOR_N`. Power iteration naturally computes both. Normalized eigenvector (||v|| = 1). Postcondition: `A*v ≈ λ*v` (within tolerance).

---

### Question 10: Dense-Only Phase 1 Scope

**Quote:** "Phase 1 is dense only (Phase 2 → separate simple_sparse)"

**Issue:** What if user tries to create a sparse matrix? Error or silent dense storage?

**Question:** How is sparse rejection handled?

**Options:**
A) No sparse API in Phase 1; users manually create MATRIX (automatically dense)
B) Add sparse matrix class but throw "not implemented" error
C) Document that sparse requires Phase 2 library (simple_sparse)

**Answer:** **Option A**
**Rationale:** Phase 1 has no sparse API. If users want sparse, they wait for simple_sparse library (Phase 2). No error; simply not supported. Clean separation of concerns.

---

## Answers Summary

| Question | Decision | Details |
|----------|----------|---------|
| Matrix size limits | Tested up to 1000x1000 | Larger works, slower |
| Condition number threshold | κ <= 1e12 | IEEE 754 limits |
| Eigenvalue convergence | λ change < 1e-10, max 10K iters | Tier 2 allows tuning |
| Partial pivoting | Standard (max element), precondition not_singular | Handles near-zeros |
| Residual computation | Always computed, returned in result | SOLVER_RESULT.residual_norm |
| VECTOR_N dimension | No hard limit, memory-constrained | O(n) operations |
| Column-major storage | Transparent to user (internal) | API is row-major |
| LU structure | Single matrix + permutation ARRAY | Standard numerical storage |
| Eigenvalue return | EIGENVALUE_RESULT (λ + v) | Power iteration yields both |
| Sparse handling | No Phase 1 support, Phase 2 has simple_sparse | Clean separation |

---

## Intent-v2 Ready

All clarifications captured. Ready to proceed to intent-v2.md generation with these decisions locked in.
