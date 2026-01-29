# Changelog

All notable changes to this project will be documented in this file.

The format is based on [Keep a Changelog](https://keepachangelog.com/en/1.0.0/),
and this project adheres to [Semantic Versioning](https://semver.org/spec/v2.0.0.html).

## [1.0.0] - 2026-01-29

### Added

- **Vector Operations**
  - **VECTOR_2**: Specialized 2D vectors with x, y components
    - Creation, addition, subtraction, scaling
    - Dot product, norm computation
  - **VECTOR_3**: Specialized 3D vectors with x, y, z components
    - Creation, addition, subtraction, scaling
    - Dot product, cross product
    - Norm computation with perpendicularity verification
  - **VECTOR_N**: Generic n-dimensional vectors
    - Creation from arrays
    - Dimension-safe operations
    - Multiple norm types: L1, L2 (Euclidean), L∞ (Infinity)
    - Dot product with dimension validation

- **Matrix Operations**
  - Creation from 2D arrays with column-major storage
  - Matrix-matrix multiplication with dimension checking
  - Matrix transpose operation
  - Identity matrix detection and creation
  - Determinant computation (for future decomposition)
  - Condition number validation (κ ≤ 1e12)

- **LU Decomposition** (Tier 3 Expert)
  - Partial pivoting for numerical stability
  - Forward/backward substitution for solving Ax = b
  - Determinant computation from decomposition
  - Conditioning analysis

- **Linear Equation Solver** (Tier 3 Expert)
  - Solve Ax = b via LU decomposition
  - Multiple right-hand sides support
  - Error and residual reporting

- **Eigenvalue Computation** (Tier 3 Expert)
  - Power iteration method
  - Inverse power iteration (for smallest eigenvalue)
  - Shift-and-invert for interior eigenvalues
  - Residual-based convergence testing

- **Three-Tier API**
  - **Tier 1 (Simple)**: `VECTOR_2`, `VECTOR_3`, `VECTOR_N` creation and basic operations
  - **Tier 2 (Advanced)**: `MATRIX` operations with dimension control
  - **Tier 3 (Expert)**: `LU_DECOMPOSITION`, `SOLVER`, `EIGENVALUE_COMPUTER` for advanced use

- **Comprehensive Test Suite**
  - 10 baseline tests covering all Tier 1-2 APIs
  - 12 adversarial/stress tests including:
    - Zero vectors (edge case)
    - Negative components
    - Very small components (1e-15)
    - Very large components (1e15)
    - Parallel vectors (cross product edge case)
    - High-dimensional vectors (50D gradient computation)
    - Large matrices (1000×1000)
    - Matrix identity properties
    - Stress test: 1000+ consecutive vector operations
  - Total: 22 tests, 100% pass rate

### Technical Details

- **DBC**: 112 contract clauses (require/ensure/invariant)
  - 2.2x more contracts than simple_calculus (rigorous dimension checking)
- **Classes**: 8 (SIMPLE_LINALG, VECTOR_2, VECTOR_3, VECTOR_N, MATRIX, LU_DECOMPOSITION, etc.)
- **Storage**: Column-major matrices for numerical stability
- **Dependencies**: simple_math (for sqrt, transcendental functions)
- **Void Safety**: Full void safety enabled
- **SCOOP**: Concurrency support enabled (immutable vectors/matrices)

### Documentation

- Full API documentation with examples
- User guide with Tier 1-3 usage patterns
- Architecture documentation explaining column-major storage and conditioning
- Mathematical background for each algorithm
- Numerical stability guidelines

### Quality Assurance

- Design by Contract throughout (112 contract clauses)
- Dimension checking in all operations (prevents index errors)
- Condition number validation (warns on ill-conditioned matrices)
- Comprehensive adversarial testing with 12 edge case tests
- Stress tested with 1000+ vector operations

---

## Future Work (Post v1.0.0)

- QR decomposition and Gram-Schmidt orthogonalization
- Singular Value Decomposition (SVD)
- Cholesky decomposition for symmetric positive definite matrices
- Integration with simple_calculus for Jacobian computation
- Sparse matrix support for large-scale problems
- GPU acceleration for matrix operations
