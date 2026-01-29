# 05-CONTRACT-DESIGN: simple_linalg

## Formal Contract Specification

Design by Contract (DBC) specifies preconditions, postconditions, and invariants for every class and feature. This section documents contracts formally using Eiffel syntax.

---

## VECTOR_N CLASS CONTRACTS

### Class Invariant
```eiffel
invariant
    dimension_positive: dimension > 0
    components_valid: components.count = dimension
    components_not_void: components /= Void
```

### Creation: from_array
```eiffel
from_array (arr: ARRAY [REAL_64]): VECTOR_N
    require
        arr_not_void: arr /= Void
        arr_not_empty: arr.count > 0
    ensure
        dimension_set: Result.dimension = arr.count
        values_copied: ∀ i ∈ [0, arr.count):
            Result.components[i] = arr[i] (within machine epsilon)
```

### Creation: from_value
```eiffel
from_value (n: INTEGER; value: REAL_64): VECTOR_N
    require
        n_positive: n > 0
        value_valid: not value.is_nan and not value.is_infinite
    ensure
        dimension_set: Result.dimension = n
        all_values_set: ∀ i ∈ [0, n): Result.components[i] = value
```

### Operation: add
```eiffel
add (other: VECTOR_N): VECTOR_N
    require
        other_not_void: other /= Void
        dimensions_match: dimension = other.dimension
    ensure
        result_dimension_preserved: Result.dimension = dimension
        result_correct: ∀ i ∈ [0, dimension):
            abs(Result.components[i] - (components[i] + other.components[i]))
                < epsilon * (abs(components[i]) + abs(other.components[i]))
                where epsilon = machine_epsilon_scaled
        -- Postcondition enforces relative error bound
```

### Operation: subtract
```eiffel
subtract (other: VECTOR_N): VECTOR_N
    require
        other_not_void: other /= Void
        dimensions_match: dimension = other.dimension
    ensure
        result_dimension_preserved: Result.dimension = dimension
        result_correct: ∀ i ∈ [0, dimension):
            abs(Result.components[i] - (components[i] - other.components[i]))
                <= epsilon * (abs(components[i]) + abs(other.components[i]))
```

### Operation: scale
```eiffel
scale (factor: REAL_64): VECTOR_N
    require
        factor_valid: not factor.is_nan and not factor.is_infinite
    ensure
        dimension_preserved: Result.dimension = dimension
        result_correct: ∀ i ∈ [0, dimension):
            abs(Result.components[i] - factor * components[i])
                <= epsilon * abs(factor) * abs(components[i])
```

### Operation: dot_product
```eiffel
dot_product (other: VECTOR_N): REAL_64
    require
        other_not_void: other /= Void
        dimensions_match: dimension = other.dimension
    ensure
        result_valid: not Result.is_nan and not Result.is_infinite
        result_correct: abs(Result - theoretical_dot_product)
            <= dimension * epsilon * ||this|| * ||other||
            -- Accumulated rounding error scales with dimension
```

### Operation: norm_l2
```eiffel
norm_l2: REAL_64
    ensure
        result_nonnegative: Result >= 0.0
        result_exact_zero: Result = 0.0 iff all_components_zero
        result_correct: abs(Result - sqrt(Σ components[i]²))
            <= epsilon * Result
            -- Relative error in norm
        result_cached: cached_l2_norm_valid
            -- Subsequent calls return cached value
```

### Operation: norm_l1
```eiffel
norm_l1: REAL_64
    ensure
        result_nonnegative: Result >= 0.0
        result_exact_zero: Result = 0.0 iff all_components_zero
        result_correct: abs(Result - Σ abs(components[i]))
            <= epsilon * Result
```

### Operation: norm_infinity
```eiffel
norm_infinity: REAL_64
    ensure
        result_nonnegative: Result >= 0.0
        result_exact_zero: Result = 0.0 iff all_components_zero
        result_correct: abs(Result - max(abs(components[i])))
            <= epsilon * Result
```

### Operation: item
```eiffel
item (i: INTEGER): REAL_64
    require
        index_valid: 0 <= i < dimension
    ensure
        result_equals_component: Result = components[i]
```

### Operation: normalized
```eiffel
normalized: VECTOR_N
    require
        not_zero_vector: norm_l2 > epsilon
    ensure
        dimension_preserved: Result.dimension = dimension
        unit_norm: abs(Result.norm_l2 - 1.0) <= epsilon
        direction_preserved: Result is parallel to Current
```

---

## MATRIX CLASS CONTRACTS

### Class Invariant
```eiffel
invariant
    rows_positive: rows > 0
    columns_positive: columns > 0
    data_valid: data.count = rows * columns
    data_not_void: data /= Void
    storage_order_column_major: storage_order = COLUMN_MAJOR
```

### Creation: from_array_2d
```eiffel
from_array_2d (arr: ARRAY2 [REAL_64]): MATRIX
    require
        arr_not_void: arr /= Void
        arr_not_empty: arr.count1 > 0 and arr.count2 > 0
    ensure
        rows_set: Result.rows = arr.count1
        columns_set: Result.columns = arr.count2
        storage_column_major: Result.storage_order = COLUMN_MAJOR
        values_copied: ∀ i, j: Result.item(i,j) = arr[i,j]
```

### Creation: identity
```eiffel
identity (n: INTEGER): MATRIX
    require
        n_positive: n > 0
    ensure
        square_matrix: Result.rows = n and Result.columns = n
        identity_property: ∀ i, j ∈ [0, n):
            Result.item(i,j) = 1.0 if i = j else 0.0
        determinant_one: abs(Result.determinant - 1.0) <= epsilon
```

### Operation: add
```eiffel
add (other: MATRIX): MATRIX
    require
        other_not_void: other /= Void
        dimensions_match: rows = other.rows and columns = other.columns
    ensure
        result_dimensions: Result.rows = rows and Result.columns = columns
        result_correct: ∀ i, j:
            abs(Result.item(i,j) - (Current.item(i,j) + other.item(i,j)))
                <= epsilon * (abs(Current.item(i,j)) + abs(other.item(i,j)))
```

### Operation: multiply
```eiffel
multiply (other: MATRIX): MATRIX
    require
        other_not_void: other /= Void
        dimensions_compatible: columns = other.rows
    ensure
        result_dimensions: Result.rows = rows and Result.columns = other.columns
        result_correct: ∀ i, k:
            abs(Result.item(i,k) - Σ(j=0,columns-1) Current.item(i,j)*other.item(j,k))
                <= sqrt(columns) * epsilon * ||Current||_frobenius * ||other||_frobenius
```

### Operation: transpose
```eiffel
transpose: MATRIX
    ensure
        dimensions_swapped: Result.rows = columns and Result.columns = rows
        values_transposed: ∀ i, j: Result.item(i,j) = Current.item(j,i)
        no_numerical_error: Result.item(i,j) = Current.item(j,i)
            -- Exact (no floating-point error except storage)
```

### Operation: determinant
```eiffel
determinant: REAL_64
    require
        square: rows = columns
    ensure
        result_valid: not Result.is_nan and not Result.is_infinite
        result_correct: abs(Result - true_determinant)
            <= epsilon * ||Current||_frobenius^(rows-1) * condition_number
            -- Error grows with condition number
```

### Operation: inverse
```eiffel
inverse: MATRIX
    require
        square: rows = columns
        non_singular: determinant /= 0.0
        well_conditioned: condition_number <= max_safe_condition_number
    ensure
        square_result: Result.rows = rows and Result.columns = columns
        inverse_property: (Current.multiply(Result)).is_identity(epsilon)
            and (Result.multiply(Current)).is_identity(epsilon)
        error_bounded: ||Current * Result - I||_frobenius
            <= epsilon * condition_number
            -- Error scaled by condition number
```

### Operation: norm_frobenius
```eiffel
norm_frobenius: REAL_64
    ensure
        result_nonnegative: Result >= 0.0
        result_correct: abs(Result - sqrt(Σ_i,j item(i,j)²)) <= epsilon * Result
```

### Operation: norm_l1
```eiffel
norm_l1: REAL_64
    ensure
        result_nonnegative: Result >= 0.0
        result_correct: abs(Result - max_j(Σ_i abs(item(i,j)))) <= epsilon * Result
```

### Operation: condition_number
```eiffel
condition_number: REAL_64
    require
        square: rows = columns
    ensure
        result_positive: Result >= 1.0
        result_valid: not Result.is_nan and not Result.is_infinite
        result_estimate: condition_number_estimate_valid
            -- Estimated κ(A) via LU (may not be exact)
```

### Operation: item (read-only accessor)
```eiffel
item (i: INTEGER; j: INTEGER): REAL_64
    require
        index_i_valid: 0 <= i < rows
        index_j_valid: 0 <= j < columns
    ensure
        result_equals_element: Result = data[linear_index(i,j)]
```

---

## LU_DECOMPOSITION CLASS CONTRACTS

### Creation: make
```eiffel
make (A: MATRIX): LU_DECOMPOSITION
    require
        A_not_void: A /= Void
        A_square: A.rows = A.columns
    ensure
        factorization_valid: L.multiply(U) ≈ permutation_matrix.multiply(A)
            -- Within numerical tolerance
        L_lower_triangular: ∀ i < j: L.item(i,j) = 0.0
        L_unit_diagonal: ∀ i: L.item(i,i) = 1.0
        U_upper_triangular: ∀ i > j: U.item(i,j) = 0.0
        singular_flag_accurate: singular_flag = True
            iff ∃ i: abs(U.item(i,i)) < numerical_epsilon
        condition_estimate_computed: condition_number_estimate > 0.0
```

### Query: lower_triangular
```eiffel
lower_triangular: MATRIX
    ensure
        result_lower: ∀ i < j: Result.item(i,j) = 0.0
        result_unit_diagonal: ∀ i: Result.item(i,i) = 1.0
        copy_returned: Result is new object (not reference to internal L)
```

### Query: upper_triangular
```eiffel
upper_triangular: MATRIX
    ensure
        result_upper: ∀ i > j: Result.item(i,j) = 0.0
        copy_returned: Result is new object
```

### Query: is_singular
```eiffel
is_singular: BOOLEAN
    ensure
        result_matches_flag: Result = singular_flag
        means_nonzero_diagonal: Result = False implies
            (∀ i: abs(U.item(i,i)) > numerical_epsilon)
```

### Query: condition_number
```eiffel
condition_number: REAL_64
    ensure
        result_positive: Result >= 1.0
        result_estimate: Result >= true_condition_number (conservative estimate)
```

---

## SOLVER CLASS CONTRACTS

### Operation: solve
```eiffel
solve (A: MATRIX; b: VECTOR_N): VECTOR_N
    require
        A_not_void: A /= Void
        b_not_void: b /= Void
        A_square: A.rows = A.columns
        dimensions_match: A.rows = b.dimension
        well_conditioned: A.condition_number <= max_condition_number
            -- PRECONDITION: Check ill-conditioning (prevents RISK-001)
        not_singular: abs(A.determinant) > epsilon
    ensure
        solution_dimension: Result.dimension = b.dimension
        residual_small: ||(A.multiply(Result)).subtract(b)||_2 <= residual_tolerance * ||b||_2
            -- Postcondition: Solution quality guarantee
        stability_validated: ||(A.multiply(Result)).subtract(b)||_2
            <= epsilon * A.condition_number * ||b||_2
            -- Theoretical error bound
```

### Operation: solve_with_error
```eiffel
solve_with_error (A: MATRIX; b: VECTOR_N):
    TUPLE [solution: VECTOR_N, residual_norm: REAL_64, condition_estimate: REAL_64]
    require
        A_not_void: A /= Void
        b_not_void: b /= Void
        A_square: A.rows = A.columns
        dimensions_match: A.rows = b.dimension
    ensure
        solution_valid: Tuple.solution /= Void
        residual_computed: Tuple.residual_norm >= 0.0
        condition_estimate_valid: Tuple.condition_estimate >= 1.0
        residual_matches: Tuple.residual_norm = ||(A.multiply(Tuple.solution)).subtract(b)||_2
        -- Returns error information alongside solution
```

### Operation: inverse
```eiffel
inverse (A: MATRIX): MATRIX
    require
        A_not_void: A /= Void
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

---

## EIGENVALUE_SOLVER CLASS CONTRACTS

### Operation: dominant_eigenvalue_and_vector
```eiffel
dominant_eigenvalue_and_vector (A: MATRIX):
    TUPLE [eigenvalue: REAL_64, eigenvector: VECTOR_N]
    require
        A_not_void: A /= Void
        A_square: A.rows = A.columns
        A_non_singular: abs(A.determinant) > epsilon
            -- Power iteration requires non-singular matrix
    ensure
        eigenvalue_real: not Result.eigenvalue.is_nan
        eigenvector_unit_norm: abs(Result.eigenvector.norm_l2 - 1.0) <= epsilon
        eigenvalue_equation_satisfied:
            (A.multiply_vector(Result.eigenvector)).subtract(Result.eigenvector.scale(Result.eigenvalue))
                .norm_l2 <= epsilon * ||A||
            -- Verify: ||A*v - λ*v|| <= tolerance
        dominant: Result.eigenvalue >= all other eigenvalues in magnitude
            -- Only dominant eigenvalue found (Phase 1 limitation)
        converged: power_iteration converged within max_iterations
    end

    ensure then
        -- Exception raised if convergence fails
        exception_on_nonconvergence: not converged implies
            raise(EIGENVALUE_NOT_CONVERGED)
```

---

## SIMPLE_LINALG FACADE CONTRACTS

### Static Method: solve
```eiffel
solve (A: MATRIX; b: VECTOR_N): VECTOR_N
    require
        A_not_void: A /= Void
        b_not_void: b /= Void
        A_square: A.rows = A.columns
        dimensions_match: A.rows = b.dimension
        well_conditioned: A.condition_number <= max_safe_condition
    ensure
        solution_valid: Result /= Void and Result.dimension = b.dimension
        residual_small: (A.multiply(Result)).subtract(b).norm_l2
            <= epsilon * b.norm_l2
        -- Facade delegates to SOLVER.solve internally
```

### Static Method: multiply
```eiffel
multiply (A: MATRIX; B: MATRIX): MATRIX
    require
        A_not_void: A /= Void
        B_not_void: B /= Void
        dimensions_compatible: A.columns = B.rows
    ensure
        result_valid: Result /= Void
        result_dimensions: Result.rows = A.rows and Result.columns = B.columns
        result_correct: ∀ i, k:
            abs(Result.item(i,k) - Σ(j) A.item(i,j)*B.item(j,k))
                <= sqrt(A.columns) * epsilon * ||A||_frobenius * ||B||_frobenius
```

---

## NUMERIC CONSTANTS AND TOLERANCES

```eiffel
feature
    machine_epsilon: REAL_64 = 2.22e-16
        -- IEEE 754 double precision

    numerical_epsilon: REAL_64 = 1e-14
        -- Working tolerance for near-zero checks

    max_safe_condition_number: REAL_64 = 1e8
        -- Default threshold for well-conditioning

    residual_tolerance: REAL_64 = 1e-12
        -- Acceptable residual ||Ax - b|| / ||b||

    epsilon_scaled_by_norm: REAL_64
        -- Context-dependent epsilon
        -- = machine_epsilon * max(norm_of_operands, 1.0)
```

---

## CONTRACT VALIDATION STRATEGY

### Precondition Violations
- Raise exception (loud failure, not silent)
- Never silently weaken contract
- Example: `well_conditioned` precondition → SINGULAR_OR_ILL_CONDITIONED exception

### Postcondition Violations
- Indicates algorithm bug (not input problem)
- Assert internally; raise POSTCONDITION_VIOLATION
- Example: LU factorization postcondition fails → internal logic error

### Invariant Violations
- Should never occur if contracts correct
- Indicates design flaw
- Assert internally; raise INVARIANT_VIOLATION

### Error Bounds (Accuracy Guarantees)
- All operations specify relative error bounds
- Error scales with condition number (for linear system solving)
- Error scales with operation count (for accumulated roundoff)

---

## SUMMARY

**Contracts Established:**
- VECTOR_N: 11 features with preconditions, postconditions, invariants
- MATRIX: 12 features with contracts
- LU_DECOMPOSITION: 5 features with contracts
- SOLVER: 3 features with preconditions (well-conditioning), postconditions (residual)
- EIGENVALUE_SOLVER: 1 feature with convergence guarantees
- SIMPLE_LINALG: Facade methods delegate to underlying classes

**Key Contract Patterns:**
- Preconditions enforce well-conditioning (prevent silent failures)
- Postconditions guarantee error bounds (user knows result trustworthiness)
- Invariants maintain structure (L lower, U upper, etc.)
- Exception hierarchy for contract violations

**Design Principles:**
- Loud failure > silent error (preconditions checked)
- Error estimation included (user sees uncertainty)
- Numerical accuracy documented (relative error bounds)
- OOSC2 compliance (every contract justified)

**Next Step:** 06-INTERFACE-DESIGN.md (Design public API and user-facing interfaces)
