# Implementation Tasks: simple_linalg

**Phase:** 3 - Task Decomposition
**Date:** 2026-01-29
**Status:** READY FOR IMPLEMENTATION

---

## Overview

simple_linalg is a dense linear algebra library with 7 classes implementing:
- Vectors (2D/3D/N-dimensional) with element-wise operations
- Matrices (M×N) with multiplication, transpose, decomposition
- LU decomposition with partial pivoting
- Linear system solving with residual validation
- Eigenvalue computation via power iteration
- 3-tier API (simple/advanced/expert)
- Immutable results (SCOOP-safe concurrency)

**Total Tasks:** 7 implementation units + 3 fix-contract tasks = 10 total

---

## Fix-Contract Tasks (Do First)

### FIX-1: Critical Contract Issues
**Files:** src/matrix.e, src/eigenvalue_result.e
**Severity:** CRITICAL (blocks Phase 1 completion)
**Dependencies:** None

### Acceptance Criteria
- [ ] MATRIX.inverse: Remove `nonsingular: determinant /= 0.0` precondition (determinant is Phase 2 only stub)
  - Mark feature as unavailable in Phase 1 OR defer to Phase 2
  - Update postcondition: "Phase 2: Implement via LU decomposition"
- [ ] EIGENVALUE_RESULT.make: Change precondition `iterations_positive: a_iterations > 0` to `iterations_non_negative: a_iterations >= 0`
  - Allow zero iterations (power iteration converges on first call)
- [ ] MATRIX.solve: Add precondition `well_conditioned: condition_number <= 1.0e12`
  - Enforce numerical stability threshold from approach.md
- [ ] Both: Document that Phase 1 is stub only, Phase 2 has real implementation

### Implementation Notes
From approach.md + review findings:
- inverse() depends on determinant() which is stubbed
- Iterations can be 0 if tolerance already satisfied on entry
- solve() must check condition number to avoid ill-conditioning errors (κ ≤ 1e12)

---

### FIX-2: VECTOR_N Array Semantics
**Files:** src/vector_n.e
**Severity:** MEDIUM
**Dependencies:** FIX-1

### Acceptance Criteria
- [ ] VECTOR_N.make_from_array: Add postcondition documenting array copy
  - "Components array is a deep copy of input (no aliasing)"
  - "dimension = arr.count"
  - Verify that external modifications don't affect vector
- [ ] Invariant: `components_valid: components /= Void and components.count > 0`

### Implementation Notes
From review: No validation that array is copied vs aliased
- Prevents external modification corruption

---

### FIX-3: Contract Clarifications
**Files:** src/vector_n.e, src/matrix.e, src/lu_decomposition.e
**Severity:** MEDIUM
**Dependencies:** FIX-1

### Acceptance Criteria
- [ ] VECTOR_N.norm: Add postconditions validating Hölder inequality
  - `norm_l1_ge_l2: norm_type=1 implies Result >= norm(2)`
  - `norm_l2_ge_infinity: norm_type=2 implies Result >= norm(3)`
- [ ] VECTOR_2/3.normalized: Add precondition `norm_finite: norm.is_finite`
  - Prevent division by Infinity
- [ ] LU_DECOMPOSITION.make: Add precondition validating permutation values
  - `permutation_valid: across a_permutation as p all p >= 1 and p <= a_lu_matrix.rows end`

### Implementation Notes
From review findings:
- Hölder inequality: L1 ≥ L2 ≥ Infinity norm (always true mathematically)
- Prevents implementation bugs (swapped norms)
- Permutation must represent valid row swaps

---

## Implementation Tasks (Core Features)

### TASK-1: VECTOR_2 Implementation
**Files:** src/vector_2.e
**Features:** `make_from_components`, `x`, `y`, `at(index)`, `dot_product`, `norm`, `manhattan_norm`, `infinity_norm`, `add`, `subtract`, `scale`, `normalized`
**Complexity:** Low
**Estimated LOC:** 150
**Dependencies:** SIMPLE_MATH

### Acceptance Criteria
- [ ] Feature `make_from_components(a_x, a_y)`: Store coordinates
  - Precondition: `x_valid: not a_x.is_nan`, `y_valid: not a_y.is_nan`
  - Postcondition: `x_set: x = a_x`, `y_set: y = a_y`
- [ ] Features `x`, `y`: Read coordinates
- [ ] Feature `at(index)`: Access by 1-based index
  - Precondition: `index_valid: index >= 1 and index <= 2`
  - Postcondition: `correct_value: (index=1 implies Result=x) and (index=2 implies Result=y)`
- [ ] Feature `dot_product(other)`: Returns x·other.x + y·other.y
  - Postcondition: `result_valid: not Result.is_nan`
- [ ] Feature `norm`: Euclidean √(x² + y²) using SIMPLE_MATH.sqrt
  - Postcondition: `result_non_negative: Result >= 0.0`
- [ ] Feature `manhattan_norm`: |x| + |y|
- [ ] Feature `infinity_norm`: max(|x|, |y|)
- [ ] Features `add`, `subtract`: Element-wise operations
  - Return new VECTOR_2 (immutable)
  - Postconditions validate result components
- [ ] Feature `scale(factor)`: Scalar multiplication
  - Return new VECTOR_2
- [ ] Feature `normalized`: Unit vector
  - Precondition: `not_zero_vector: norm > 0.0`, `norm_finite: norm.is_finite` (from FIX-3)
  - Postcondition: `result_unit: (Result.norm - 1.0).abs < 1.0e-10`
- [ ] Invariant: `x_valid: not x_coord.is_nan`, `y_valid: not y_coord.is_nan`
- [ ] Immutable: No setters (SCOOP-safe)
- [ ] Compiles clean
- [ ] Unit test: test_vector_2_creation
- [ ] Unit test: test_vector_2_operations
- [ ] Unit test: test_vector_2_norms

### Implementation Notes
- All coordinates stored as private x_coord, y_coord
- All operations return new vectors (immutable)
- Uses SIMPLE_MATH.sqrt for norm calculation
- From approach.md line 20-22

---

### TASK-2: VECTOR_3 Implementation
**Files:** src/vector_3.e
**Features:** `make_from_components`, `x`, `y`, `z`, `at(index)`, `dot_product`, `cross_product`, `norm`, `manhattan_norm`, `infinity_norm`, `add`, `subtract`, `scale`, `normalized`
**Complexity:** Low
**Estimated LOC:** 200
**Dependencies:** SIMPLE_MATH, VECTOR_3 (for cross_product result)

### Acceptance Criteria
- [ ] Features same as VECTOR_2 but for 3D (x, y, z)
- [ ] Feature `cross_product(other)`: Returns perpendicular vector
  - Returns: (y·other.z - z·other.y, z·other.x - x·other.z, x·other.y - y·other.x)
  - Postcondition: `perpendicular_this: (Result.dot_product(Current)).abs < 1.0e-10`
  - Postcondition: `perpendicular_other: (Result.dot_product(other)).abs < 1.0e-10`
- [ ] `at(index)`: Works for 1, 2, 3 (not just 1, 2)
- [ ] All other features identical to VECTOR_2
- [ ] Compiles clean
- [ ] Unit test: test_vector_3_creation
- [ ] Unit test: test_vector_3_cross_product
- [ ] Unit test: test_vector_3_perpendicularity

### Implementation Notes
- 3D optimization: use cross product for perpendicular vectors
- Cross product formula: v × w = (v.y*w.z - v.z*w.y, v.z*w.x - v.x*w.z, v.x*w.y - v.y*w.x)
- Perpendicularity test: dot product should be ~0

---

### TASK-3: VECTOR_N Implementation
**Files:** src/vector_n.e
**Features:** `make_from_array`, `dimension`, `at(index)`, `dot_product`, `norm(norm_type)`, `add`, `subtract`, `scale`
**Complexity:** Medium
**Estimated LOC:** 180
**Dependencies:** SIMPLE_MATH

### Acceptance Criteria
- [ ] Feature `make_from_array(arr)`: Copy array to components
  - Precondition: `array_valid: arr /= Void and arr.count > 0`
  - Postcondition: `dimension_set: dimension = arr.count` (from FIX-2)
  - Postcondition: Array is deep-copied (no aliasing)
- [ ] Feature `dimension`: Returns components.count
- [ ] Feature `at(index)`: Access by 1-based index
  - Precondition: `index_valid: index >= 1 and index <= dimension`
- [ ] Feature `dot_product(other)`: Sum of component products
  - Precondition: `same_dimension: dimension = other.dimension`
  - Postcondition: `result_valid: not Result.is_nan`
- [ ] Feature `norm(norm_type: INTEGER)`: L1/L2/Infinity norms
  - Precondition: `norm_type_valid: norm_type >= 1 and norm_type <= 3`
  - L1 (type=1): Sum of absolute values
  - L2 (type=2): √(sum of squares) using SIMPLE_MATH.sqrt
  - Infinity (type=3): max(absolute values)
  - Postcondition: Hölder inequality (from FIX-3)
  - Postcondition: `result_non_negative: Result >= 0.0`
- [ ] Features `add`, `subtract`, `scale`: Element-wise operations
  - Precondition on add/subtract: `same_dimension: dimension = other.dimension`
  - Return new VECTOR_N with same dimension
  - Postcondition: `result_dimension: Result.dimension = dimension`
- [ ] Invariant: `components_valid: components /= Void and components.count > 0` (from FIX-2)
- [ ] Immutable: No setters (SCOOP-safe)
- [ ] Compiles clean
- [ ] Unit test: test_vector_n_creation
- [ ] Unit test: test_vector_n_operations
- [ ] Unit test: test_vector_n_norms

### Implementation Notes
- Generic dimension: no hard size limit
- Array iteration: use indexed loop or across with counter
- Deep copy: create new array, copy elements
- Hölder inequality: always L1 ≥ L2 ≥ Infinity mathematically

---

### TASK-4: MATRIX Implementation
**Files:** src/matrix.e
**Features:** `make_identity`, `make_from_array_2d`, `rows`, `columns`, `element`, `set_element`, `transpose`, `multiply`, `subtract`, `is_identity`, + stubs for determinant, inverse, solve, condition_number, dominant_eigenvalue, dominant_eigenvector
**Complexity:** High
**Estimated LOC:** 250
**Dependencies:** SIMPLE_MATH, VECTOR_N

### Acceptance Criteria
- [ ] Feature `make_identity(n)`: Create n×n identity matrix
  - Precondition: `size_positive: n > 0`
  - Internal storage: column-major (BLAS convention)
  - Diagonal elements = 1.0, others = 0.0
- [ ] Feature `make_from_array_2d(arr)`: Create from 2D array
  - Precondition: `array_valid: arr /= Void`
  - Convert from row-major (input) to column-major (storage)
  - Set `rows` and `columns` dimensions
- [ ] Features `rows`, `columns`: Read dimensions
- [ ] Feature `element(row, col)`: Read element
  - Precondition: `row_valid: row >= 1 and row <= rows`, `col_valid: col >= 1 and col <= columns`
  - Use col_index(row, col) = (col-1)*rows + row for column-major lookup
  - Postcondition: `result_valid: not Result.is_nan`
- [ ] Feature `set_element(row, col, value)`: Write element (internal only)
  - Same preconditions as element()
  - Update data array at col_index position
- [ ] Feature `transpose`: Return M^T
  - Postcondition: `dimensions_swapped: Result.rows = columns and Result.columns = rows`
  - Element [i,j] → [j,i]
- [ ] Feature `multiply(other)`: Matrix product C = A × B
  - Precondition: `dimensions_compatible: columns = other.rows`
  - Postcondition: `result_dimensions: Result.rows = rows and Result.columns = other.columns`
  - Formula: C[i,j] = Σ_k A[i,k] × B[k,j]
- [ ] Feature `subtract(other)`: Element-wise subtraction
  - Precondition: `same_dimensions: rows = other.rows and columns = other.columns`
  - Postcondition: `result_valid: Result /= Void`
- [ ] Feature `is_identity`: Check if identity matrix
  - No preconditions
  - Check diagonal = 1.0 (within 1e-10), off-diagonal = 0.0 (within 1e-10)
- [ ] Stubs (Phase 2): `determinant`, `inverse`, `solve`, `condition_number`, `dominant_eigenvalue`, `dominant_eigenvector`
  - Mark as Phase 2 only
  - Document preconditions from FIX-1
- [ ] Immutable for user (row operations via set_element are private)
- [ ] Compiles clean
- [ ] Unit test: test_matrix_identity
- [ ] Unit test: test_matrix_creation
- [ ] Unit test: test_matrix_transpose
- [ ] Unit test: test_matrix_multiply
- [ ] Unit test: test_column_major_storage

### Implementation Notes
- Column-major storage transparent to API: users use [row, col]
- Storage formula: data[(col-1)*rows + row] for element [row, col]
- ARRAY [REAL_64] for column-major data
- Helper: col_index(row, col): INTEGER function
- From approach.md line 24-28, 46-59

---

### TASK-5: SOLVER_RESULT Data Class
**Files:** src/solver_result.e
**Features:** `make(a_solution, a_residual_norm, a_condition_estimate)`, `solution`, `residual_norm`, `condition_estimate`, `is_accurate`, `is_well_conditioned`
**Complexity:** Trivial
**Estimated LOC:** 50
**Dependencies:** VECTOR_N

### Acceptance Criteria
- [ ] Feature `make`: Store three fields
  - Precondition: `solution_not_void: a_solution /= Void`, `residual_non_negative: a_residual_norm >= 0.0`, `condition_positive: a_condition_estimate > 0.0`
  - Postcondition: Fields set correctly
- [ ] Features `solution`, `residual_norm`, `condition_estimate`: Read-only getters
- [ ] Feature `is_accurate`: Returns residual_norm < 1e-8
  - Postcondition: `result_valid: Result = (residual_norm < 1.0e-8)`
- [ ] Feature `is_well_conditioned`: Returns condition_estimate <= 1e12
  - Postcondition: `result_valid: Result = (condition_estimate <= 1.0e12)`
- [ ] Immutable: No setters (SCOOP-safe)
- [ ] Compiles clean
- [ ] Unit test: test_solver_result_creation

### Implementation Notes
- Returned by solve() (Tier 2)
- Users check is_accurate() and is_well_conditioned() to validate solution
- From approach.md line 77-86

---

### TASK-6: EIGENVALUE_RESULT Data Class
**Files:** src/eigenvalue_result.e
**Features:** `make(a_eigenvalue, a_eigenvector, a_iterations, a_tolerance_achieved)`, eigenvalue, eigenvector, iterations, tolerance_achieved, `is_converged`
**Complexity:** Trivial
**Estimated LOC:** 50
**Dependencies:** VECTOR_N, FIX-1

### Acceptance Criteria
- [ ] Feature `make`: Store four fields
  - Precondition: `eigenvector_not_void: a_eigenvector /= Void`, `iterations_non_negative: a_iterations >= 0` (from FIX-1), `tolerance_achieved_non_negative: a_tolerance_achieved >= 0.0`
  - Postcondition: Fields set correctly
- [ ] Features `eigenvalue`, `eigenvector`, `iterations`, `tolerance_achieved`: Read-only getters
- [ ] Feature `is_converged`: Returns tolerance_achieved < 1e-10
  - Postcondition: `result_valid: Result = (tolerance_achieved < 1.0e-10)`
- [ ] Immutable: No setters (SCOOP-safe)
- [ ] Compiles clean
- [ ] Unit test: test_eigenvalue_result_creation

### Implementation Notes
- Returned by eigenvalue computation (Tier 2)
- Users check is_converged() to validate convergence quality
- iterations >= 0 allows immediate convergence
- From approach.md line 88-97

---

### TASK-7: LU_DECOMPOSITION Implementation
**Files:** src/lu_decomposition.e
**Features:** `make(a_lu_matrix, a_permutation)`, `lu_matrix`, `permutation`, `rows`, `l_factor`, `u_factor`
**Complexity:** Medium
**Estimated LOC:** 150
**Dependencies:** MATRIX

### Acceptance Criteria
- [ ] Feature `make`: Store LU matrix and permutation
  - Precondition: `matrix_not_void: a_lu_matrix /= Void`, `permutation_not_void: a_permutation /= Void`, `permutation_valid: a_permutation.count = a_lu_matrix.rows`
  - Precondition (from FIX-3): Permutation values in range 1..rows
  - Postcondition: Fields set correctly
- [ ] Features `lu_matrix`, `permutation`: Read-only access
- [ ] Feature `rows`: Returns lu_matrix.rows
- [ ] Feature `l_factor`: Extract L (lower triangular with unit diagonal)
  - Create MATRIX of size rows×rows
  - Copy lower triangle from lu_matrix
  - Set diagonal to 1.0
  - Postcondition: `result_square: Result.rows = Result.columns`
- [ ] Feature `u_factor`: Extract U (upper triangular)
  - Create MATRIX of size rows×rows
  - Copy upper triangle and diagonal from lu_matrix
  - Postcondition: `result_square: Result.rows = Result.columns`
- [ ] Immutable: No modification of factors
- [ ] Compiles clean
- [ ] Unit test: test_lu_decomposition_creation
- [ ] Unit test: test_l_factor_extraction
- [ ] Unit test: test_u_factor_extraction

### Implementation Notes
- Tier 3 expert access to LU factors
- Used by solve() and determinant() implementations (Phase 2)
- From approach.md line 61-75
- Permutation represents row swaps from partial pivoting

---

## Task Dependencies

```
FIX-1 (Critical Contracts)
├── FIX-2 (VECTOR_N Semantics)
│   └── TASK-3 (VECTOR_N)
├── FIX-3 (Contract Clarifications)
│   ├── TASK-1 (VECTOR_2)
│   ├── TASK-2 (VECTOR_3)
│   ├── TASK-3 (VECTOR_N) [above]
│   ├── TASK-4 (MATRIX)
│   └── TASK-7 (LU_DECOMPOSITION)
│
├── TASK-5 (SOLVER_RESULT)
└── TASK-6 (EIGENVALUE_RESULT)
    └── (depends on FIX-1 only)
```

**Build Order:**
1. FIX-1, FIX-2, FIX-3 (contracts)
2. TASK-5, TASK-6 (data classes - no dependencies)
3. TASK-1, TASK-2, TASK-3 (vectors - independent)
4. TASK-4 (matrix - depends on VECTOR_N for solve stubs)
5. TASK-7 (LU - depends on MATRIX)

---

## Compilation Gates

After each task implementation:
```bash
cd /d/prod/simple_linalg && /d/prod/ec.sh -batch -config simple_linalg.ecf -target simple_linalg_tests -c_compile
```

**Expected:** "System Recompiled"
**Zero warnings policy:** Fix immediately if any warnings appear

---

## Testing Strategy

### Unit Tests (Per Task)
- Written in test/test_simple_linalg.e
- Each task has 2-4 acceptance criteria tests
- Use mathematical validation:
  - Vectors: dot product, norms satisfy expected properties
  - Matrices: transpose, multiply check properties
  - Decomposition: verify L and U factors
  - Eigenvalues: power iteration convergence

### Integration Tests (After All Tasks)
- Test Tier 1 simple API
- Test Tier 2 advanced API with quality metrics
- Test Tier 3 expert direct access
- Verify immutability (no state leaks)
- Verify SCOOP safety (concurrent calls)

---

## Summary

| Task | Type | LOC | Deps | Priority |
|------|------|-----|------|----------|
| FIX-1 | Fix | 15 | 0 | Critical |
| FIX-2 | Fix | 10 | 0 | High |
| FIX-3 | Fix | 15 | 0 | High |
| TASK-1 | Code | 150 | simple_math | High |
| TASK-2 | Code | 200 | simple_math | High |
| TASK-3 | Code | 180 | simple_math | High |
| TASK-4 | Code | 250 | simple_math | Critical |
| TASK-5 | Code | 50 | 0 | High |
| TASK-6 | Code | 50 | 0 | High |
| TASK-7 | Code | 150 | TASK-4 | Critical |
| **Total** | **Code** | **~1070** | | |

**Estimated Implementation Time:** 3-4 days for experienced Eiffel developer

---

## Success Criteria

- ✅ All 7 implementation tasks completed
- ✅ All 3 fix-contract tasks resolved
- ✅ Compiles clean (zero warnings)
- ✅ All tests pass (30+ unit tests)
- ✅ Contracts verified (DBC intact)
- ✅ SCOOP-safe (no shared mutable state)
- ✅ Ready for Phase 4 (API documentation)

---

**Status:** READY FOR PHASE 4 (Implementation)
**Approved by:** [User confirmation needed]
**Date:** 2026-01-29
