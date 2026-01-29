# 07-SPECIFICATION: simple_linalg

## Formal Class Specifications (OOSC2 Style)

Complete specifications for all core classes with full contracts, responsibilities, and implementation guidelines.

---

## SPECIFICATION: VECTOR_N

### Purpose
Encapsulate n-dimensional vectors (elements of R^n) with operations: addition, subtraction, scaling, dot product, norms.

### Responsibility
- Store n REAL_64 components
- Provide vector space operations
- Maintain vector invariants (dimensionality)
- Enforce immutability (no in-place modification)

### Attributes
```eiffel
feature
    dimension: INTEGER
        -- Number of components
    components: ARRAY [REAL_64]
        -- Storage (private access via item)
    cached_l2_norm: REAL_64
        -- Cache for norm (optimization)
```

### Invariants
```eiffel
invariant
    dimension_positive: dimension > 0
    components_size: components.count = dimension
    all_finite: ∀ i ∈ [0, dimension): components[i].is_finite
```

### Key Features

#### Creation
```eiffel
from_array (arr: ARRAY [REAL_64]): VECTOR_N
    require
        arr /= Void
        arr.count > 0
    ensure
        dimension_set: Result.dimension = arr.count
        values_correct: ∀ i: Result.components[i] = arr[i]

from_value (n: INTEGER; value: REAL_64): VECTOR_N
    require
        n > 0
        value.is_finite
    ensure
        dimension_set: Result.dimension = n
        all_values: ∀ i: Result.components[i] = value

from_copy (other: VECTOR_N): VECTOR_N
    require
        other /= Void
    ensure
        dimension_equals: Result.dimension = other.dimension
        values_equal: ∀ i: Result.components[i] = other.components[i]
        separate_storage: Result.components /= other.components
            -- New object, not shared storage
```

#### Vector Operations
```eiffel
add (other: VECTOR_N): VECTOR_N
    require
        other /= Void
        dimensions_match: dimension = other.dimension
    ensure
        dimension_preserved: Result.dimension = dimension
        result_correct: ∀ i:
            abs(Result.components[i] - (components[i] + other.components[i]))
                <= epsilon * (abs(components[i]) + abs(other.components[i]) + 1.0)

subtract (other: VECTOR_N): VECTOR_N
    require
        other /= Void
        dimensions_match: dimension = other.dimension
    ensure
        dimension_preserved: Result.dimension = dimension
        result_correct: ∀ i:
            abs(Result.components[i] - (components[i] - other.components[i]))
                <= epsilon * (abs(components[i]) + abs(other.components[i]) + 1.0)

scale (factor: REAL_64): VECTOR_N
    require
        factor.is_finite
    ensure
        dimension_preserved: Result.dimension = dimension
        result_correct: ∀ i:
            abs(Result.components[i] - factor * components[i])
                <= epsilon * (abs(factor) * abs(components[i]) + 1.0)
```

#### Dot Product and Norms
```eiffel
dot_product (other: VECTOR_N): REAL_64
    require
        other /= Void
        dimensions_match: dimension = other.dimension
    ensure
        result_finite: Result.is_finite
        result_correct: abs(Result - Σ(i) components[i] * other.components[i])
            <= dimension * epsilon * ||this||_2 * ||other||_2

norm_l2: REAL_64
    ensure
        result_nonnegative: Result >= 0.0
        result_zero_iff_zero_vector: Result = 0.0 iff all_components_zero
        result_correct: abs(Result - sqrt(Σ(i) components[i]^2))
            <= epsilon * Result + 1e-16

norm_l1: REAL_64
    ensure
        result_nonnegative: Result >= 0.0
        result_correct: abs(Result - Σ(i) abs(components[i]))
            <= epsilon * Result

norm_infinity: REAL_64
    ensure
        result_nonnegative: Result >= 0.0
        result_correct: abs(Result - max(abs(components[i])))
            <= epsilon * Result

normalized: VECTOR_N
    require
        norm_l2 > epsilon
    ensure
        unit_norm: abs(Result.norm_l2 - 1.0) <= epsilon
        direction_preserved: Result parallel to Current
```

#### Accessors
```eiffel
item (i: INTEGER): REAL_64
    require
        index_valid: 0 <= i < dimension
    ensure
        result_equals: Result = components[i]
```

---

## SPECIFICATION: MATRIX

### Purpose
Encapsulate M x N dense matrices with column-major storage, supporting operations: addition, multiplication, transpose, determinant, inverse, condition number estimation.

### Responsibility
- Store M*N elements in column-major layout (D-002)
- Provide matrix operations with numerical accuracy
- Cache LU decomposition and condition number
- Maintain column-major storage invariant
- Provide matrix-vector multiplication for decomposition algorithms

### Attributes
```eiffel
feature
    rows: INTEGER              -- M
    columns: INTEGER           -- N
    data: ARRAY [REAL_64]      -- Linear storage (size M*N, column-major)
    condition_number_cached: REAL_64
        -- Estimated κ(A) (computed on demand)
    has_lu_cached: BOOLEAN
        -- Whether LU decomposition cached
```

### Invariants
```eiffel
invariant
    rows_positive: rows > 0
    columns_positive: columns > 0
    data_correct_size: data.count = rows * columns
    storage_column_major: storage_order = COLUMN_MAJOR
```

### Key Features

#### Creation
```eiffel
from_array_2d (arr: ARRAY2 [REAL_64]): MATRIX
    require
        arr /= Void
        arr.count1 > 0 and arr.count2 > 0
    ensure
        rows_set: Result.rows = arr.count1
        columns_set: Result.columns = arr.count2
        storage_column_major: Result.storage_order = COLUMN_MAJOR
        values_copied: ∀ i, j: Result.item(i,j) = arr[i,j]

identity (n: INTEGER): MATRIX
    require
        n > 0
    ensure
        square: Result.rows = n and Result.columns = n
        identity_property: ∀ i, j:
            Result.item(i,j) = 1.0 if i=j else 0.0

zeros (m, n: INTEGER): MATRIX
    require
        m > 0 and n > 0
    ensure
        dimensions: Result.rows = m and Result.columns = n
        all_zero: ∀ i, j: Result.item(i,j) = 0.0
```

#### Matrix Operations
```eiffel
add (other: MATRIX): MATRIX
    require
        other /= Void
        same_dimensions: rows = other.rows and columns = other.columns
    ensure
        result_dimensions: Result.rows = rows and Result.columns = columns
        result_correct: ∀ i, j:
            abs(Result.item(i,j) - (item(i,j) + other.item(i,j)))
                <= epsilon * (abs(item(i,j)) + abs(other.item(i,j)) + 1.0)

subtract (other: MATRIX): MATRIX
    require
        other /= Void
        same_dimensions: rows = other.rows and columns = other.columns
    ensure
        result_dimensions: Result.rows = rows and Result.columns = columns
        result_correct: ∀ i, j:
            abs(Result.item(i,j) - (item(i,j) - other.item(i,j)))
                <= epsilon * (abs(item(i,j)) + abs(other.item(i,j)) + 1.0)

multiply (other: MATRIX): MATRIX
    require
        other /= Void
        compatible_dimensions: columns = other.rows
    ensure
        result_dimensions: Result.rows = rows and Result.columns = other.columns
        result_correct: ∀ i, k:
            abs(Result.item(i,k) - Σ(j=0,columns-1) item(i,j)*other.item(j,k))
                <= sqrt(columns) * epsilon * norm_frobenius * other.norm_frobenius

transpose: MATRIX
    ensure
        dimensions_swapped: Result.rows = columns and Result.columns = rows
        values_transposed: ∀ i, j: Result.item(i,j) = item(j,i)
        exact: Result.item(i,j) = item(j,i)
            -- Exact within floating-point storage precision

multiply_vector (v: VECTOR_N): VECTOR_N
    require
        v /= Void
        compatible_dimensions: columns = v.dimension
    ensure
        result_dimension: Result.dimension = rows
        result_correct: ∀ i:
            abs(Result.components[i] - Σ(j=0,columns-1) item(i,j)*v.item(j))
                <= sqrt(columns) * epsilon * norm_frobenius * v.norm_l2
```

#### Scalar Properties
```eiffel
determinant: REAL_64
    require
        square: rows = columns
    ensure
        result_finite: Result.is_finite
        result_correct: abs(Result - true_determinant)
            <= epsilon * norm_frobenius^(rows-1) * condition_number_estimate
            -- Error scales with condition number and dimension

inverse: MATRIX
    require
        square: rows = columns
        not_singular: abs(determinant) > epsilon
        well_conditioned: condition_number <= max_safe_condition_number
            -- PRECONDITION: Prevents silent failures (RISK-001 mitigation)
    ensure
        square_result: Result.rows = rows and Result.columns = columns
        left_inverse: (Result.multiply(Current)).is_identity(epsilon)
        right_inverse: (Current.multiply(Result)).is_identity(epsilon)
        error_scaled: ||(Current.multiply(Result)) - I||_frobenius
            <= epsilon * condition_number
```

#### Norms and Conditioning
```eiffel
norm_frobenius: REAL_64
    ensure
        result_nonnegative: Result >= 0.0
        result_correct: abs(Result - sqrt(Σ(i,j) item(i,j)^2))
            <= epsilon * Result

norm_l1: REAL_64
    ensure
        result_nonnegative: Result >= 0.0
        result_correct: abs(Result - max_j(Σ(i) abs(item(i,j))))
            <= epsilon * Result

condition_number: REAL_64
    require
        square: rows = columns
    ensure
        result_positive: Result >= 1.0
        result_finite: Result.is_finite
        result_estimate: Result >= true_condition_number
            -- Conservative (overestimate) for safety
```

#### Accessors
```eiffel
item (i, j: INTEGER): REAL_64
    require
        index_i: 0 <= i < rows
        index_j: 0 <= j < columns
    ensure
        result_equals: Result = data[linear_index(i,j)]

is_identity (tolerance: REAL_64): BOOLEAN
    require
        square: rows = columns
        tolerance_valid: tolerance > 0.0 and tolerance < 1.0
    ensure
        result_true_iff: Result = True iff
            (∀ i: abs(item(i,i) - 1.0) <= tolerance and
             ∀ i,j with i≠j: abs(item(i,j)) <= tolerance)
```

---

## SPECIFICATION: LU_DECOMPOSITION

### Purpose
Compute LU factorization A = P*L*U using partial pivoting. Provides access to factors and condition number estimate.

### Responsibility
- Perform LU decomposition with partial pivoting (D-003)
- Detect singularity (diagonal near-zero)
- Estimate condition number via Cline-Moler (D-006)
- Provide access to L, U, P components
- Cache results for multiple uses

### Attributes
```eiffel
feature
    original_matrix: MATRIX
    l_matrix: MATRIX
    u_matrix: MATRIX
    pivot_indices: ARRAY [INTEGER]
    singular_flag: BOOLEAN
    condition_number_estimate: REAL_64
```

### Invariants
```eiffel
invariant
    l_matrix_lower_triangular: ∀ i < j: l_matrix.item(i,j) = 0.0
    l_matrix_unit_diagonal: ∀ i: l_matrix.item(i,i) = 1.0
    u_matrix_upper_triangular: ∀ i > j: u_matrix.item(i,j) = 0.0
    factorization_valid: l_matrix.multiply(u_matrix) ≈ P*original_matrix
        -- Within numerical tolerance
    singular_consistent: singular_flag = True iff
        (∃ i: abs(u_matrix.item(i,i)) < numerical_epsilon)
```

### Key Features

#### Creation and Factorization
```eiffel
make (A: MATRIX): LU_DECOMPOSITION
    require
        A /= Void
        A_square: A.rows = A.columns
    ensure
        factorization_valid: l_matrix.multiply(u_matrix) ≈ permutation_matrix.multiply(A)
        l_lower_triangular: ∀ i < j: l_matrix.item(i,j) = 0.0
        l_unit_diagonal: ∀ i: l_matrix.item(i,i) = 1.0
        u_upper_triangular: ∀ i > j: u_matrix.item(i,j) = 0.0
        singular_flag_accurate: singular_flag = True iff
            (∃ i: abs(u_matrix.item(i,i)) < numerical_epsilon)
        condition_estimated: condition_number_estimate > 0.0
```

#### Component Access
```eiffel
lower_triangular: MATRIX
    ensure
        result_lower: ∀ i < j: Result.item(i,j) = 0.0
        result_unit_diagonal: ∀ i: Result.item(i,i) = 1.0
        copy_returned: Result is independent copy (not reference)

upper_triangular: MATRIX
    ensure
        result_upper: ∀ i > j: Result.item(i,j) = 0.0
        copy_returned: Result is independent copy

permutation_matrix: MATRIX
    ensure
        result_permutation: Result is permutation matrix
        copy_returned: Result is independent copy

pivot_indices: ARRAY [INTEGER]
    ensure
        result_encoding: Result[i] = j means row i of A maps to row j
        result_copy: Result is independent copy
```

#### Status Queries
```eiffel
is_singular: BOOLEAN
    ensure
        result_matches_flag: Result = singular_flag
        means_zero_diagonal: Result = True implies
            (∃ i: abs(u_matrix.item(i,i)) < numerical_epsilon)

condition_number: REAL_64
    ensure
        result_positive: Result >= 1.0
        result_estimate: Result >= true_condition_number (conservative)

verify_factorization: TUPLE [valid: BOOLEAN; error: REAL_64]
    ensure
        valid_true_iff: valid = True iff
            ||l_matrix.multiply(u_matrix) - permutation_matrix.multiply(original_matrix)||_frobenius
                < tolerance
        error_measure: error = ||l_matrix.multiply(u_matrix) - permutation_matrix.multiply(original_matrix)||_frobenius
```

---

## SPECIFICATION: SOLVER

### Purpose
Solve linear systems Ax = b using LU decomposition. Enforces well-conditioning and provides error estimation.

### Responsibility
- Check preconditions (well-conditioning, non-singularity)
- Perform forward/backward substitution
- Compute residual and error estimates
- Provide postconditions (solution quality)
- Raise exceptions on violations

### Attributes
```eiffel
feature
    max_condition_number: REAL_64
    residual_tolerance: REAL_64
```

### Key Features

#### Linear System Solving
```eiffel
solve (A: MATRIX; b: VECTOR_N): VECTOR_N
    require
        A /= Void and b /= Void
        A_square: A.rows = A.columns
        dimensions_match: A.rows = b.dimension
        well_conditioned: A.condition_number <= max_condition_number
            -- CRITICAL: Prevents silent failures
        not_singular: abs(A.determinant) > epsilon
    ensure
        solution_dimension: Result.dimension = b.dimension
        residual_small: ||(A.multiply_vector(Result)).subtract(b)||_l2
            <= residual_tolerance * ||b||_l2
        stability_validated: ||(A.multiply_vector(Result)).subtract(b)||_l2
            <= epsilon * A.condition_number * ||b||_l2

solve_with_error (A: MATRIX; b: VECTOR_N):
    TUPLE [solution: VECTOR_N; residual_norm: REAL_64; condition_estimate: REAL_64]
    require
        A /= Void and b /= Void
        A_square: A.rows = A.columns
        dimensions_match: A.rows = b.dimension
    ensure
        solution_valid: Tuple.solution /= Void and Tuple.solution.dimension = b.dimension
        residual_computed: Tuple.residual_norm
            = ||(A.multiply_vector(Tuple.solution)).subtract(b)||_l2
        condition_computed: Tuple.condition_estimate = A.condition_number_estimate
        provides_confidence: User can inspect residual_norm and condition_estimate
```

#### Matrix Inverse
```eiffel
inverse (A: MATRIX): MATRIX
    require
        A /= Void
        A_square: A.rows = A.columns
        well_conditioned: A.condition_number <= max_condition_number
        not_singular: abs(A.determinant) > epsilon
    ensure
        inverse_square: Result.rows = A.rows and Result.columns = A.columns
        left_inverse: (Result.multiply(A)).is_identity(epsilon)
        right_inverse: (A.multiply(Result)).is_identity(epsilon)
        error_bounded: ||(A.multiply(Result)) - I||_frobenius
            <= epsilon * A.condition_number
```

#### Configuration
```eiffel
set_max_condition_number (threshold: REAL_64)
    require
        threshold > 1.0
    ensure
        max_condition_number = threshold

set_residual_tolerance (tolerance: REAL_64)
    require
        tolerance > 0.0 and tolerance < 1.0
    ensure
        residual_tolerance = tolerance
```

---

## SPECIFICATION: EIGENVALUE_SOLVER

### Purpose
Find dominant eigenvalue and eigenvector via power iteration.

### Responsibility
- Implement power iteration algorithm
- Detect convergence
- Provide convergence error metric
- Raise exception on non-convergence

### Attributes
```eiffel
feature
    max_iterations: INTEGER
    convergence_tolerance: REAL_64
    num_iterations_used: INTEGER
```

### Key Features

#### Eigenvalue Computation
```eiffel
dominant_eigenvalue_and_vector: TUPLE [eigenvalue: REAL_64; eigenvector: VECTOR_N]
    ensure
        eigenvalue_valid: Result.eigenvalue.is_finite
        eigenvector_unit_norm: abs(Result.eigenvector.norm_l2 - 1.0) <= epsilon
        eigenvalue_equation: ||(A.multiply_vector(Result.eigenvector)).subtract(
            Result.eigenvector.scale(Result.eigenvalue))||_l2
                <= epsilon * ||A||_frobenius
        dominant: Result.eigenvalue has largest magnitude
            -- Only dominant eigenvalue found (Phase 1 limitation)
        converged_within_max: num_iterations_used <= max_iterations

set_max_iterations (n: INTEGER)
    require
        n > 0
    ensure
        max_iterations = n

set_convergence_tolerance (tol: REAL_64)
    require
        tol > 0.0 and tol < 1.0
    ensure
        convergence_tolerance = tol

eigenvalue_convergence_error: REAL_64
    ensure
        result_equals: Result = ||(A.multiply_vector(eigenvector)).subtract(
            eigenvector.scale(eigenvalue))||_l2 / ||A||_frobenius
```

---

## EXCEPTION SPECIFICATIONS

### Exception Hierarchy
```eiffel
class LINALG_EXCEPTION inherit EXCEPTION

class DIMENSION_MISMATCH inherit LINALG_EXCEPTION
    feature
        expected: INTEGER
        actual: INTEGER

class SINGULAR_OR_ILL_CONDITIONED inherit LINALG_EXCEPTION
    feature
        condition_number_estimate: REAL_64
        max_safe_condition: REAL_64
        reason: STRING  -- "SINGULAR" or "ILL_CONDITIONED"

class EIGENVALUE_NOT_CONVERGED inherit LINALG_EXCEPTION
    feature
        max_iterations: INTEGER
        actual_iterations: INTEGER
        final_error: REAL_64
```

---

## IMPLEMENTATION GUIDELINES

### Numerical Precision
- Use REAL_64 throughout (IEEE 754 double precision)
- Machine epsilon: 2.22e-16
- Working epsilon: 1e-14 for comparisons
- Scale all error bounds by ||A|| to avoid underflow

### Column-Major Storage
- Index calculation: `linear_index(i, j) = i + j * rows`
- Justify in code: "Follows BLAS convention for cache locality"
- Helper function in private section

### LU Decomposition Algorithm
```
Algorithm: Gaussian elimination with partial pivoting
Input: A (n x n matrix)
Output: L (lower triangular, unit diagonal), U (upper triangular), P (permutation)

1. Initialize: P = I
2. For column k = 0 to n-1:
   a. Find pivot: i_max = argmax_i(|A[i,k]|) for i >= k
   b. Swap rows: A[[k, i_max]] ↔ P[[k, i_max]]
   c. Check: If |A[k,k]| < epsilon, set singular_flag = True, return
   d. For row i > k:
      - L[i,k] = A[i,k] / A[k,k]
      - For column j >= k:
        - A[i,j] = A[i,j] - L[i,k] * A[k,j]
3. Extract: L (lower part with unit diagonal), U (upper part)
```

### Power Iteration Algorithm
```
Algorithm: Power iteration for dominant eigenvalue
Input: A (n x n matrix)
Output: λ (dominant eigenvalue), v (eigenvector)

1. Initialize: v_0 = random unit vector
2. For k = 0 to max_iterations:
   a. w = A * v_k
   b. λ_k = ||w||_2 (Rayleigh quotient)
   c. v_k+1 = w / λ_k (normalize)
   d. If ||v_k+1 - v_k||_2 < convergence_tolerance:
      - return (λ_k, v_k+1)
3. If max_iterations reached: raise EIGENVALUE_NOT_CONVERGED
```

### Error Handling Strategy
- **Preconditions violated**: Raise exception with context
- **Algorithm failure**: Catch and re-raise with helpful message
- **Postconditions violated**: Assert internally (indicates design bug)

---

## SUMMARY

Seven core classes fully specified:
1. **VECTOR_N**: n-dimensional vectors with operations
2. **MATRIX**: M x N dense matrices (column-major)
3. **LU_DECOMPOSITION**: Factorization with partial pivoting
4. **SOLVER**: Linear system solving with preconditions
5. **EIGENVALUE_SOLVER**: Power iteration eigenvalue finding
6. **SIMPLE_LINALG**: Facade for simplified access
7. Exception hierarchy for error handling

All contracts include:
- Preconditions (when method applicable)
- Postconditions (result quality guarantees)
- Invariants (properties always true)
- Error bounds (numerical accuracy specifications)

**Next Step:** 08-VALIDATION.md (Verify OOSC2 compliance and requirements traceability)
