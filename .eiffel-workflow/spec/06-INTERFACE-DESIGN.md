# 06-INTERFACE-DESIGN: simple_linalg

## Public API and User-Facing Interfaces

This section defines how users interact with simple_linalg, presented through two patterns: simple (facade) and advanced (direct class usage).

---

## INTERFACE PHILOSOPHY

**Design Principle:** Two-level API
1. **Simple Interface** (SIMPLE_LINALG facade): One-liners for common tasks
2. **Advanced Interface** (Direct classes): Fine-grained control for experts

This allows:
- Beginners: Quick start with facade methods
- Experts: Access to decompositions, error estimates, custom solvers
- Both: Coexist without redundancy

---

## SIMPLE INTERFACE (Facade)

### Entry Point: SIMPLE_LINALG Class

All methods are static (or singleton). Examples show typical workflows.

#### Vector Operations

```eiffel
-- Create vectors
v1 := create {VECTOR_N}.from_array (<<1.0, 2.0, 3.0>>)
v2 := create {VECTOR_N}.from_array (<<4.0, 5.0, 6.0>>)

-- Basic operations
sum := SIMPLE_LINALG.add_vectors (v1, v2)        -- <<5, 7, 9>>
diff := SIMPLE_LINALG.subtract_vectors (v1, v2)  -- <<-3, -3, -3>>
scaled := SIMPLE_LINALG.scale_vector (v1, 2.0)   -- <<2, 4, 6>>

-- Norms
l2_norm := SIMPLE_LINALG.norm_l2 (v1)            -- 3.742
l1_norm := SIMPLE_LINALG.norm_l1 (v1)            -- 6.0
inf_norm := SIMPLE_LINALG.norm_infinity (v1)     -- 3.0

-- Dot product
dot := SIMPLE_LINALG.dot_product (v1, v2)        -- 32.0
```

**Facade Signature:**
```eiffel
class SIMPLE_LINALG

feature {NONE}
    -- Prevent instantiation; static interface only
    make is_disabled

feature
    add_vectors (u, v: VECTOR_N): VECTOR_N
        -- u + v element-wise
    subtract_vectors (u, v: VECTOR_N): VECTOR_N
        -- u - v element-wise
    scale_vector (v: VECTOR_N; factor: REAL_64): VECTOR_N
        -- factor * v scalar multiplication
    dot_product (u, v: VECTOR_N): REAL_64
        -- u · v
    norm_l1 (v: VECTOR_N): REAL_64
        -- ||v||_1
    norm_l2 (v: VECTOR_N): REAL_64
        -- ||v||_2 (Euclidean)
    norm_infinity (v: VECTOR_N): REAL_64
        -- ||v||_∞
```

#### Matrix Operations

```eiffel
-- Create matrices from 2D arrays
a := create {MATRIX}.from_array_2d (<<
    << 4.0,  7.0 >>,
    << 2.0,  6.0 >>
>>)

b := create {MATRIX}.from_array_2d (<<
    << 1.0,  2.0 >>,
    << 3.0,  4.0 >>
>>)

-- Basic operations
c := SIMPLE_LINALG.multiply (a, b)          -- Matrix multiply A*B
at := SIMPLE_LINALG.transpose (a)            -- Transpose A^T
det := SIMPLE_LINALG.determinant (a)         -- det(A)
inv := SIMPLE_LINALG.inverse (a)             -- A^(-1)

-- Norms
frob := SIMPLE_LINALG.norm_frobenius (a)     -- ||A||_F
l1_norm := SIMPLE_LINALG.norm_l1 (a)         -- Column sum norm
```

**Facade Signature:**
```eiffel
feature
    multiply (A, B: MATRIX): MATRIX
        -- A * B matrix multiplication
    add (A, B: MATRIX): MATRIX
        -- A + B element-wise addition
    subtract (A, B: MATRIX): MATRIX
        -- A - B element-wise subtraction
    transpose (A: MATRIX): MATRIX
        -- A^T transpose
    determinant (A: MATRIX): REAL_64
        -- det(A) determinant
    inverse (A: MATRIX): MATRIX
        -- A^(-1) matrix inverse (requires well-conditioning)
    norm_frobenius (A: MATRIX): REAL_64
        -- ||A||_F Frobenius norm
    norm_l1 (A: MATRIX): REAL_64
        -- Column-wise infinity norm
```

#### Linear System Solving (Simple Workflow)

```eiffel
-- Solve Ax = b
a := create {MATRIX}.from_array_2d (...)  -- 3x3 matrix
b := create {VECTOR_N}.from_array (...)   -- 3D vector

-- Simple one-liner (may raise exception if ill-conditioned)
x := SIMPLE_LINALG.solve (a, b)
    -- Internally: Creates LU_DECOMPOSITION, checks well-conditioning,
    -- solves via forward/backward substitution

-- Verify solution (optional)
residual := (a.multiply_vector(x)).subtract(b).norm_l2
-- residual should be very small for well-conditioned A
```

**Facade Signature:**
```eiffel
feature
    solve (A: MATRIX; b: VECTOR_N): VECTOR_N
        -- Solve Ax = b via LU decomposition
        -- Raises SINGULAR_OR_ILL_CONDITIONED if A not suitable
```

#### Eigenvalue Computation (Simple Workflow)

```eiffel
-- Find dominant eigenvalue and eigenvector
a := create {MATRIX}.from_array_2d (...)  -- 3x3 matrix

result := SIMPLE_LINALG.eigenvalue (a)
lambda := result.eigenvalue                -- Largest eigenvalue (magnitude)
v := result.eigenvector                    -- Corresponding eigenvector

-- Verify: A*v ≈ λ*v
residual := (a.multiply_vector(v)).subtract(v.scale(lambda)).norm_l2
```

**Facade Signature:**
```eiffel
feature
    eigenvalue (A: MATRIX): TUPLE [eigenvalue: REAL_64; eigenvector: VECTOR_N]
        -- Dominant eigenvalue via power iteration
```

---

## ADVANCED INTERFACE (Direct Classes)

### Use Case 1: Reusing LU Decomposition

```eiffel
-- Solve multiple systems with same matrix A
a := create {MATRIX}.from_array_2d (...)
b1, b2, b3: VECTOR_N

-- Decompose once
lu := create {LU_DECOMPOSITION}.make (a)

-- Check if singular
if lu.is_singular then
    handle_singular_case
else
    -- Solve multiple right-hand sides efficiently
    x1 := lu.solve (b1)  -- Fast (forward/backward substitution only)
    x2 := lu.solve (b2)
    x3 := lu.solve (b3)
end
```

**Advanced Signature:**
```eiffel
class LU_DECOMPOSITION

feature
    make (A: MATRIX)
        -- Perform LU factorization with partial pivoting
    lower_triangular: MATRIX
        -- Return L matrix (copy)
    upper_triangular: MATRIX
        -- Return U matrix (copy)
    permutation_matrix: MATRIX
        -- Return P matrix (row permutation)
    pivot_indices: ARRAY [INTEGER]
        -- Return permutation encoding (i -> pivot_indices[i])
    is_singular: BOOLEAN
        -- True if diagonal near-zero
    condition_number: REAL_64
        -- Estimated κ(A) via Cline-Moler
    verify_factorization: TUPLE [valid: BOOLEAN; error: REAL_64]
        -- Debug: Check ||P*L*U - A||
```

### Use Case 2: Error Estimation in Solving

```eiffel
-- Solve with explicit error estimation
a := create {MATRIX}.from_array_2d (...)
b := create {VECTOR_N}.from_array (...)

solver := create {SOLVER}.make
result := solver.solve_with_error (a, b)

x := result.solution
residual_norm := result.residual_norm
condition_estimate := result.condition_estimate

-- Decision: Trust solution?
if condition_estimate < 1e8 and residual_norm < 1e-12 then
    use_solution (x)
else
    alert_user ("Solution may be inaccurate")
    -- Consider iterative refinement (Phase 2)
end
```

**Advanced Signature:**
```eiffel
class SOLVER

feature
    make
        -- Initialize solver with default tolerances
    set_max_condition_number (threshold: REAL_64)
        -- Configure well-conditioning threshold
    solve (A: MATRIX; b: VECTOR_N): VECTOR_N
        -- Solve Ax = b; raise exception if preconditions fail
    solve_with_error (A: MATRIX; b: VECTOR_N):
        TUPLE [solution: VECTOR_N; residual_norm: REAL_64; condition_estimate: REAL_64]
        -- Solve with explicit error estimation
    inverse (A: MATRIX): MATRIX
        -- Compute A^(-1) via LU
```

### Use Case 3: Low-level Matrix Operations

```eiffel
-- Build matrix from formula
n := 3
a := create {MATRIX}.identity (n)          -- Start with I
b := create {MATRIX}.from_array_2d (...)   -- Load B

-- Element-wise operations
c := a.add (b)                              -- C = A + B
d := a.multiply (b)                         -- D = A * B
e := a.transpose                            -- E = A^T

-- Query properties
m := a.norm_frobenius                       -- ||A||_F
det := a.determinant                        -- det(A)
cond := a.condition_number                  -- κ(A)
```

**Advanced Signature:**
```eiffel
class MATRIX

feature {NONE}
    -- Immutable constructor (Phase 1)
    make_from_data (rows, columns: INTEGER; data: ARRAY [REAL_64])

feature
    rows: INTEGER
    columns: INTEGER
    from_array_2d (arr: ARRAY2 [REAL_64]): MATRIX
    identity (n: INTEGER): MATRIX
    zeros (m, n: INTEGER): MATRIX
    item (i, j: INTEGER): REAL_64
    add (other: MATRIX): MATRIX
    subtract (other: MATRIX): MATRIX
    multiply (other: MATRIX): MATRIX
    transpose: MATRIX
    determinant: REAL_64
    inverse: MATRIX
    norm_frobenius: REAL_64
    norm_l1: REAL_64
    norm_infinity: REAL_64
    condition_number: REAL_64
    multiply_vector (v: VECTOR_N): VECTOR_N
        -- Multiply matrix by vector (for testing)
```

### Use Case 4: Custom Eigenvalue Analysis

```eiffel
-- Find dominant eigenvalue with custom convergence
a := create {MATRIX}.from_array_2d (...)

eigenvalue_solver := create {EIGENVALUE_SOLVER}.make (a)
eigenvalue_solver.set_max_iterations (500)
eigenvalue_solver.set_convergence_tolerance (1e-15)

result := eigenvalue_solver.dominant_eigenvalue_and_vector
lambda := result.eigenvalue
v := result.eigenvector

-- Check convergence
error := eigenvalue_solver.eigenvalue_convergence_error
if error > 1e-10 then
    alert_user ("Eigenvalue computation may have weak convergence")
end
```

**Advanced Signature:**
```eiffel
class EIGENVALUE_SOLVER

feature
    make (A: MATRIX)
        -- Initialize power iteration for matrix A
    set_max_iterations (n: INTEGER)
        -- Set iteration limit (default: 1000)
    set_convergence_tolerance (tol: REAL_64)
        -- Set convergence criterion (default: 1e-14)
    dominant_eigenvalue_and_vector:
        TUPLE [eigenvalue: REAL_64; eigenvector: VECTOR_N]
        -- Power iteration result
    eigenvalue_convergence_error: REAL_64
        -- ||A*v - λ*v|| / ||A|| (diagnostic)
    num_iterations_used: INTEGER
        -- Actual iterations to convergence (performance metric)
```

---

## EXCEPTION HIERARCHY AND HANDLING

```eiffel
class LINALG_EXCEPTION
    -- Base exception for all linear algebra errors

class DIMENSION_MISMATCH is LINALG_EXCEPTION
    -- Raised when vector/matrix dimensions incompatible
    feature
        expected_dimension: INTEGER
        actual_dimension: INTEGER

class SINGULAR_OR_ILL_CONDITIONED is LINALG_EXCEPTION
    -- Raised when matrix unsuitable for solution
    feature
        condition_number_estimate: REAL_64
        max_safe_condition: REAL_64

class EIGENVALUE_NOT_CONVERGED is LINALG_EXCEPTION
    -- Raised when power iteration doesn't converge
    feature
        max_iterations: INTEGER
        convergence_error: REAL_64
```

**Usage:**
```eiffel
begin
    x := SIMPLE_LINALG.solve (a, b)
rescue
    exception: SINGULAR_OR_ILL_CONDITIONED →
        handle_ill_conditioned_case (a, exception.condition_number_estimate)
    exception: DIMENSION_MISMATCH →
        handle_dimension_error (exception.expected_dimension,
                                exception.actual_dimension)
end
```

---

## SERIALIZATION AND I/O (Phase 2 Consideration)

Not included in Phase 1 API, but interface designed for future extension:

```eiffel
-- Phase 2 extension (not Phase 1)
class MATRIX
    feature
        to_string: STRING
            -- Human-readable matrix representation
        to_csv_file (path: STRING)
            -- Export to CSV format
        to_matlab_format: STRING
            -- MATLAB/Octave compatible format
end
```

---

## NUMERICAL SETTINGS AND TOLERANCE CONFIGURATION

### Global Configuration (Optional Phase 2 Feature)

```eiffel
class LINALG_CONFIG
    feature
        default_max_condition_number: REAL_64
            -- Global threshold (default: 1e8)
        default_residual_tolerance: REAL_64
            -- Global residual threshold (default: 1e-12)
        set_default_condition_threshold (t: REAL_64)
            -- Configure globally
end
```

**Phase 1 Implementation:** Each class carries its own tolerances (immutable after creation)

---

## DOCUMENTATION AND EXAMPLES

### Example 1: Physics - Jacobian Inversion

```eiffel
-- Compute Newton-Raphson step: Δx = J^(-1) * residual
--   where J is Jacobian matrix ∂f/∂x

jacobian := compute_jacobian (...)      -- M x M matrix
residual := compute_residual (...)      -- M-vector

-- Solve J * delta_x = residual
delta_x := SIMPLE_LINALG.solve (jacobian, residual)

-- Update: x_new = x + delta_x
x_new := x.add (delta_x)
```

### Example 2: Robotics - Rotation Matrix

```eiffel
-- 3D rotation about Z-axis
angle: REAL_64 = 0.7854  -- 45 degrees
cos_a := cos(angle)
sin_a := sin(angle)

rotation := create {MATRIX}.from_array_2d (<<
    << cos_a, -sin_a,  0.0 >>,
    << sin_a,  cos_a,  0.0 >>,
    << 0.0,    0.0,    1.0 >>
>>)

-- Rotate point
point := create {VECTOR_3}.make (1.0, 0.0, 0.0)
rotated := rotation.multiply_vector (point)
```

### Example 3: ML - Eigenvalue Centrality

```eiffel
-- Compute graph centrality via dominant eigenvalue
adjacency_matrix := build_adjacency_matrix (graph)

result := SIMPLE_LINALG.eigenvalue (adjacency_matrix)
centrality_scores := result.eigenvector    -- Centrality = eigenvector component

-- Normalize
centrality := centrality_scores.normalized
```

---

## MIGRATION PATHS FOR FUTURE PHASES

### Phase 1.5 (Optional): Complex Matrices
- Add COMPLEX_VECTOR_N and COMPLEX_MATRIX classes
- Implement complex LU, eigenvalues (QR algorithm)
- Reuse SIMPLE_LINALG facade (overload for complex)

### Phase 2: Sparse Matrices
- Introduce SPARSE_MATRIX interface
- Implement COO, CSR storage
- Maintain MATRIX compatibility via interface

### Phase 2: QR Decomposition and SVD
- Add QR_DECOMPOSITION class
- Add SVD_DECOMPOSITION class
- Add SIMPLE_LINALG.qr, SIMPLE_LINALG.svd methods

### Phase 3: BLAS Integration
- Add MATRIX.multiply_blas (C binding)
- Optimize critical paths with inline C
- Maintain Eiffel API (implementation hidden)

---

## SUMMARY

**Simple Interface (SIMPLE_LINALG Facade):**
- 20+ static methods
- Common workflows: solve, multiply, eigenvalue, norms
- One-liners for typical tasks
- Exception handling for error cases

**Advanced Interface (Direct Classes):**
- VECTOR_N, VECTOR_2, VECTOR_3 (full control)
- MATRIX (element access, all operations)
- LU_DECOMPOSITION (reuse for multiple solves)
- SOLVER (custom tolerances, error estimation)
- EIGENVALUE_SOLVER (convergence control)

**Design Principles:**
- Two-level API (beginner-friendly + expert control)
- Clear separation of concerns
- Extensible for Phase 2 (interfaces, overloading)
- Exception hierarchy for robust error handling

**Next Step:** 07-SPECIFICATION.md (Formal class specifications with full contracts and implementations)
