# 04-CLASS-DESIGN: simple_linalg

## Object-Oriented Class Hierarchy

Using OOSC2 principles: each class has single responsibility, contracts define behavior, inheritance models specialization.

---

## CLASS ARCHITECTURE OVERVIEW

```
┌──────────────────────────────────────────────────────────────────┐
│                      SIMPLE_LINALG (Facade)                     │
│  solve, multiply, determinant, inverse, eigenvalue, norm         │
└──────────────────────────────────────────────────────────────────┘
        │                    │                    │                │
        │ uses               │ uses               │ uses          │ uses
        │                    │                    │                │
    ┌───▼──────┐         ┌───▼──────┐        ┌────▼──────┐   ┌────▼──────────┐
    │   VECTOR │         │  MATRIX  │        │   SOLVER  │   │EIGENVALUE_    │
    │  _N      │         │          │        │           │   │SOLVER         │
    └──────────┘         └──┬───────┘        └────┬──────┘   └────┬──────────┘
         │                  │                      │               │
         │ contains       ┌─┴─────────────────┐    │ uses          │ uses
         │               │                   │    │               │
    ┌────▼────────────┐  │    ┌──────────────▼────▼──────────┐    │
    │ ARRAY[REAL_64]  │  │    │   LU_DECOMPOSITION          │    │
    │ (components)    │  │    │   (P, L, U, condition)      │    │
    └─────────────────┘  │    └──────────────┬───────────────┘    │
                         │                   │                    │
                    ┌────▼──────────────┐    │ returns            │
                    │ ARRAY[REAL_64]    │    │                    │
                    │ (data, col-major) │    │                    │
                    └───────────────────┘    │                    │
                                        ┌────▼──────────────┐     │
                                        │ Triplet: (λ, v, μ)│    │
                                        │ eigenvalue, vector │    │
                                        │ multiplicity       │    │
                                        └───────────────────┘     │
```

---

## CORE CLASSES

### CLASS 1: VECTOR_N (Vector in R^n)

**Responsibility:** Encapsulate n-dimensional vectors with operations.

**Inheritance:** Inherits from MATRIX? NO - specialization hierarchy
- VECTOR_N has specific vector semantics (norm, dot product)
- MATRIX handles 2D transformations
- Not parent-child; separate hierarchies

**Key Attributes:**
```eiffel
feature
    dimension: INTEGER
        -- Number of components (n >= 1)
        -- Immutable after creation

    components: ARRAY [REAL_64]
        -- Storage of n components
        -- Private access (encapsulated)

    cached_l2_norm: REAL_64
        -- Optimization: cache L2 norm (computed on demand)
        -- Immutable once computed
```

**Key Behaviors:**

| Operation | Input | Output | Contract Note |
|-----------|-------|--------|---|
| `from_array` | ARRAY[REAL_64] | VECTOR_N | Precondition: array.count > 0 |
| `from_value` | n: INTEGER, value: REAL_64 | VECTOR_N | Create vector of n identical values |
| `add` | other: VECTOR_N | VECTOR_N | Precondition: dimensions match |
| `subtract` | other: VECTOR_N | VECTOR_N | Precondition: dimensions match |
| `scale` | factor: REAL_64 | VECTOR_N | Scalar multiplication |
| `dot_product` | other: VECTOR_N | REAL_64 | Precondition: dimensions match |
| `norm_l1` | -- | REAL_64 | Sum of absolute values |
| `norm_l2` | -- | REAL_64 | Euclidean norm (cached) |
| `norm_infinity` | -- | REAL_64 | Maximum absolute value |
| `item` | i: INTEGER | REAL_64 | Access component i (0-based) |
| `normalized` | -- | VECTOR_N | Return unit vector |

**Design Notes:**
- All operations return NEW VECTOR_N (immutable, SCOOP-ready)
- `item` allows read-only access to components
- Caching L2 norm (computed once, reused)
- Preconditions check dimension matching

---

### CLASS 2: VECTOR_2 (Specialization for 2D)

**Responsibility:** High-performance 2D vectors with optimized storage.

**Inheritance:** May inherit from VECTOR_N or separate specialization
- Phase 1: Separate class (specific x, y attributes)
- Phase 2: Could inherit from VECTOR_N with type-specific optimization

**Key Attributes:**
```eiffel
feature
    x: REAL_64
    y: REAL_64
```

**Key Behaviors:**
- Same as VECTOR_N but optimized for 2D
- `perp`: Perpendicular vector (-y, x)
- `cross_product` (technically 3D, but included for convenience)

---

### CLASS 3: VECTOR_3 (Specialization for 3D)

**Responsibility:** High-performance 3D vectors (robotics, physics).

**Key Attributes:**
```eiffel
feature
    x: REAL_64
    y: REAL_64
    z: REAL_64
```

**Key Behaviors:**
- Same as VECTOR_N but optimized for 3D
- `cross_product`: other: VECTOR_3 → VECTOR_3
- `triple_product`: Scalar triple product (a · (b × c))

---

### CLASS 4: MATRIX (Dense Matrix Storage)

**Responsibility:** Encapsulate M x N dense matrix with column-major storage.

**Key Attributes:**
```eiffel
feature
    rows: INTEGER
        -- Number of rows (M >= 1)

    columns: INTEGER
        -- Number of columns (N >= 1)

    data: ARRAY [REAL_64]
        -- Linear storage (column-major)
        -- Size: rows * columns
        -- Invariant: data.count = rows * columns

    storage_order: STORAGE_ORDER
        -- Always COLUMN_MAJOR (D-002 decision)
        -- Enum: { COLUMN_MAJOR, ROW_MAJOR }

    condition_number_cached: REAL_64
        -- Estimated condition number κ(A)
        -- Computed during LU decomposition
        -- Immutable once computed

    has_lu_cached: BOOLEAN
        -- Whether LU decomposition cached
```

**Private Helper Methods:**
```eiffel
feature {NONE}
    linear_index (i: INTEGER; j: INTEGER): INTEGER
        -- Convert (i, j) to linear index in column-major order
        -- Precondition: 0 <= i < rows, 0 <= j < columns
        -- Formula: i + j * rows
```

**Key Behaviors:**

| Operation | Input | Output | Contract Note |
|-----------|-------|--------|---|
| `from_array_2d` | ARRAY2[REAL_64] | MATRIX | Create from 2D array (column-major storage) |
| `identity` | n: INTEGER | MATRIX | Create n x n identity matrix |
| `zeros` | m, n: INTEGER | MATRIX | Create m x n zero matrix |
| `item` | i, j: INTEGER | REAL_64 | Access element [i,j] |
| `add` | other: MATRIX | MATRIX | Precondition: dimensions match |
| `subtract` | other: MATRIX | MATRIX | Precondition: dimensions match |
| `multiply` | other: MATRIX | MATRIX | Precondition: columns = other.rows |
| `transpose` | -- | MATRIX | Return M^T (exact) |
| `determinant` | -- | REAL_64 | Precondition: square; uses cached LU if available |
| `inverse` | -- | MATRIX | Precondition: square, non-singular, well-conditioned |
| `norm_frobenius` | -- | REAL_64 | Frobenius norm ||A||_F = √(Σ|a_ij|²) |
| `norm_l1` | -- | REAL_64 | L1 induced norm (max column sum) |
| `norm_infinity` | -- | REAL_64 | L∞ induced norm (max row sum) |
| `condition_number` | -- | REAL_64 | Estimated κ(A) (via LU) |

**Design Notes:**
- Column-major storage hidden from users (via linear_index helper)
- Public API: matrix[i,j] indexing (0-based)
- All operations return new MATRIX (immutable)
- LU decomposition cached for reuse (determinant, solve)

---

### CLASS 5: LU_DECOMPOSITION

**Responsibility:** Encapsulate LU factorization with partial pivoting.

**Key Attributes:**
```eiffel
feature
    original_matrix: MATRIX
        -- Reference to original A (for audit)

    l_matrix: MATRIX
        -- Lower triangular (unit diagonal)
        -- Invariant: L[i,i] = 1.0

    u_matrix: MATRIX
        -- Upper triangular
        -- Invariant: U[i,j] = 0 for i > j

    pivot_indices: ARRAY [INTEGER]
        -- Permutation encoding: P
        -- pivot_indices[i] = j means row i of A goes to row j in factorization

    singular_flag: BOOLEAN
        -- True if any |U[i,i]| < epsilon (detected singularity)

    condition_number_estimate: REAL_64
        -- Estimated κ(A) (Cline-Moler method)

    epsilon: REAL_64
        -- Numerical tolerance (default: 1e-14)
```

**Key Behaviors:**

| Operation | Input | Output | Contract Note |
|-----------|-------|--------|---|
| `make` | A: MATRIX | LU_DECOMPOSITION | Precondition: A.square; Postcondition: L*U ≈ P*A |
| `lower_triangular` | -- | MATRIX | Return L matrix |
| `upper_triangular` | -- | MATRIX | Return U matrix |
| `permutation_matrix` | -- | MATRIX | Return P (as dense matrix) |
| `pivot_indices` | -- | ARRAY[INTEGER] | Return permutation encoding |
| `is_singular` | -- | BOOLEAN | Return singular_flag |
| `condition_number` | -- | REAL_64 | Return estimated κ(A) |
| `verify_factorization` | -- | TUPLE[BOOLEAN, REAL_64] | Check ||P*L*U - A|| (debugging) |

**Design Notes:**
- Once computed, LU is immutable
- singular_flag checked automatically during factorization
- Condition number computed via Cline-Moler (fast)
- Provides audit trail via verify_factorization

---

### CLASS 6: SOLVER (Linear System Solver)

**Responsibility:** Solve Ax = b using LU decomposition.

**Key Attributes:**
```eiffel
feature
    max_condition_number: REAL_64
        -- Threshold for well-conditioning (default: 1e8)
        -- User configurable

    residual_tolerance: REAL_64
        -- Acceptable residual ||Ax - b|| / ||b|| (default: 1e-12)
```

**Key Behaviors:**

| Operation | Input | Output | Contract Note |
|-----------|-------|--------|---|
| `solve` | A: MATRIX, b: VECTOR_N | VECTOR_N | Precondition: well_conditioned, not_singular |
| `solve_with_error` | A: MATRIX, b: VECTOR_N | TUPLE[VECTOR_N, REAL_64, REAL_64] | Returns (solution, residual_norm, condition_est) |
| `inverse` | A: MATRIX | MATRIX | Precondition: well_conditioned, not_singular |
| `set_max_condition_number` | threshold: REAL_64 | -- | Allow user override |

**Algorithm: Forward/Backward Substitution (after LU)**

```
1. Compute LU decomposition of A (with partial pivoting)
2. Check singular_flag; raise exception if True
3. Check κ(A) <= max_condition_number; raise exception if False
4. Permute b: b' = P * b
5. Forward substitution: L * y = b' → solve for y
6. Backward substitution: U * x = y → solve for x
7. Compute residual r = ||A*x - b|| / ||b||
8. Check residual <= residual_tolerance; warn if False
9. Return x
```

**Design Notes:**
- Preconditions checked before solving (loud failure, not silent)
- Residual computed and reported
- Postcondition validates solution quality
- Exception: SINGULAR_OR_ILL_CONDITIONED if preconditions violated

---

### CLASS 7: EIGENVALUE_SOLVER (Power Iteration)

**Responsibility:** Find dominant eigenvalue/eigenvector via power iteration.

**Key Attributes:**
```eiffel
feature
    max_iterations: INTEGER
        -- Maximum iterations before convergence timeout (default: 1000)

    convergence_tolerance: REAL_64
        -- Convergence criterion (default: 1e-14)

    num_iterations: INTEGER
        -- Actual iterations used (for performance analysis)
```

**Key Behaviors:**

| Operation | Input | Output | Contract Note |
|-----------|-------|--------|---|
| `dominant_eigenvalue_and_vector` | A: MATRIX | TUPLE[REAL_64, VECTOR_N] | Power iteration; (λ, v) |
| `eigenvalue_convergence_error` | -- | REAL_64 | ||A*v - λ*v|| / ||A|| (audit) |

**Algorithm: Power Iteration**

```
1. Start with random normalized vector v₀
2. For k = 1, ..., max_iterations:
   a. Compute w = A * v_k
   b. λ_k = ||w|| (Rayleigh quotient approximation)
   c. v_k+1 = w / λ_k (normalize)
   d. If ||v_k+1 - v_k|| < convergence_tolerance:
      - Converged; return (λ_k, v_k+1)
3. If max_iterations reached without convergence:
   - Raise EIGENVALUE_NOT_CONVERGED exception
```

**Design Notes:**
- Only finds dominant eigenvalue (largest magnitude)
- Phase 1 limitation documented
- Convergence error reported for verification
- Exception handling for non-convergence

---

### CLASS 8: SIMPLE_LINALG (Facade)

**Responsibility:** Provide simplified entry points for common tasks.

**Design:** Singleton or static methods (TBD during implementation)

**Key Behaviors:**

| Operation | Input | Output | Purpose |
|-----------|-------|--------|---------|
| `solve` | A: MATRIX, b: VECTOR_N | VECTOR_N | Solve Ax = b (one-liner) |
| `multiply` | A: MATRIX, B: MATRIX | MATRIX | Compute A*B |
| `determinant` | A: MATRIX | REAL_64 | Compute det(A) |
| `inverse` | A: MATRIX | MATRIX | Compute A^(-1) |
| `transpose` | A: MATRIX | MATRIX | Compute A^T |
| `eigenvalue` | A: MATRIX | TUPLE[REAL_64, VECTOR_N] | Dominant eigenvalue |
| `norm_l2` | v: VECTOR_N | REAL_64 | L2 norm of v |
| `norm_frobenius` | A: MATRIX | REAL_64 | Frobenius norm of A |
| `dot_product` | u, v: VECTOR_N | REAL_64 | u · v |

**Design Notes:**
- All methods return values (no side effects)
- Error handling: Exceptions raised on invalid input
- Documentation: Simple examples for each method

---

## CLASS HIERARCHY PRINCIPLES (OOSC2)

### Single Responsibility Principle
- **VECTOR_N**: Vector operations only
- **MATRIX**: Matrix storage and basic operations only
- **LU_DECOMPOSITION**: LU factorization only
- **SOLVER**: Linear system solving (uses LU)
- **EIGENVALUE_SOLVER**: Power iteration only
- **SIMPLE_LINALG**: Facade/orchestration only

### Immutability (SCOOP-Ready)
- All classes IMMUTABLE after creation
- All operations return new objects
- No in-place modification (Phase 1)
- Phase 2: Can add optional `*_in_place` variants with separate keyword

### Encapsulation
- Private: components storage, linear_index calculation
- Public: only interface methods
- Contracts enforce preconditions (user cannot violate)

### Contracts Everywhere
- Every method: Preconditions (when method applicable)
- Every method: Postconditions (what result guarantees)
- Class invariants: Properties always true

---

## EXCEPTION HIERARCHY

```
LINALG_EXCEPTION
    ├─ DIMENSION_MISMATCH
    │  └─ When vector/matrix dimensions don't align
    ├─ SINGULAR_OR_ILL_CONDITIONED
    │  ├─ SINGULAR_MATRIX (|det(A)| < epsilon)
    │  └─ ILL_CONDITIONED_MATRIX (κ(A) > max_safe_condition)
    ├─ SOLVER_FAILED
    │  ├─ CONVERGENCE_FAILURE (LU or eigenvalue solver)
    │  └─ RESIDUAL_TOO_LARGE (solution doesn't satisfy Ax≈b)
    └─ EIGENVALUE_NOT_CONVERGED
       └─ When power iteration doesn't converge in max_iterations
```

---

## INTERFACE BOUNDARIES

### Public Interface
- VECTOR_N, VECTOR_2, VECTOR_3 (full public API)
- MATRIX (full public API)
- SOLVER (query methods + solve)
- EIGENVALUE_SOLVER (eigenvalue queries)
- SIMPLE_LINALG (facade methods)

### Internal Interface
- LU_DECOMPOSITION (used by SOLVER, not directly by users)
- Private helper methods (linear_index, factorize_lu, etc.)

### Extension Points (Phase 2+)
- MATRIX_INTERFACE (abstract) - allow sparse matrices
- DECOMPOSITION_INTERFACE (abstract) - allow QR, SVD
- EIGENVALUE_ALGORITHM_INTERFACE - allow QR eigenvalue

---

## SCOOP COMPATIBILITY

### Phase 1 (No Parallelization)
- All classes immutable
- All data passed by copy (or shared immutable)
- No mutable shared state

### Phase 2 (Optional Parallelization)
- Add separate keyword to decomposition algorithms
- Partition matrix into independent blocks
- Use processor regions for block operations
- API unchanged (just faster)

---

## SUMMARY

**Classes Designed:**
1. VECTOR_N, VECTOR_2, VECTOR_3 (vectors)
2. MATRIX (dense matrices)
3. LU_DECOMPOSITION (factorization)
4. SOLVER (linear system solving)
5. EIGENVALUE_SOLVER (power iteration)
6. SIMPLE_LINALG (facade)

**Design Principles:**
- Single responsibility
- Immutable-first (SCOOP-ready)
- Encapsulated storage
- Contracts everywhere
- Exception hierarchy for error handling

**Next Step:** 05-CONTRACT-DESIGN.md (Define formal contracts for all classes)
