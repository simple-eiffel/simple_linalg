# SCOPE: simple_linalg

## Problem Statement
Physicists, engineers, and ML researchers need robust linear algebra operations (vectors, matrices, decompositions) in Eiffel without external dependencies.

What's wrong today: Eiffel has no native linear algebra library for matrix/vector operations needed in physics and optimization.
Who experiences this: Electromagnetic simulations, structural analysis, machine learning, robotics, quantum mechanics.
Impact of not solving: Cannot implement Jacobian matrices, solve linear systems, or perform matrix decompositions in Eiffel.

## Target Users
| User Type | Needs | Pain Level |
|-----------|-------|-----------|
| Physics Simulator | Jacobian matrices, matrix multiplication, eigenvalues | HIGH |
| Robotics Engineer | Rotation matrices, homogeneous transforms | HIGH |
| ML Researcher | Matrix operations, backpropagation | HIGH |
| Solver Developer | LU decomposition, Gaussian elimination | MEDIUM |

## Success Criteria
| Level | Criterion | Measure |
|-------|-----------|---------|
| MVP | Vector operations (add, subtract, dot product, norm) | < 1e-10 error |
| MVP | Matrix operations (multiply, transpose, determinant) | < 1e-10 error |
| MVP | LU decomposition | Solves Ax=b accurately |
| Full | Eigenvalue/eigenvector computation | Power iteration method |
| Full | QR decomposition | Orthogonal factorization |
| Full | Singular Value Decomposition (SVD) | for rank analysis |

## Scope Boundaries
### In Scope (MUST)
- Vector operations (creation, operations, norms)
- Matrix operations (creation, multiplication, transpose, determinant, inverse)
- LU decomposition and linear system solving
- Gaussian elimination with partial pivoting
- Vector/matrix norms (L1, L2, Frobenius)

### In Scope (SHOULD)
- Eigenvalue/eigenvector computation (power iteration, QR method)
- QR decomposition
- Singular Value Decomposition (SVD)
- Matrix conditioning and error estimation

### Out of Scope
- Sparse matrix operations (use simple_sparse)
- GPU acceleration (pure CPU only)
- Symbolic matrix operations (use simple_symbolic)
- Advanced iterative solvers (deferred to Phase 2)

### Deferred to Future
- Krylov subspace methods (GMRES, MINRES)
- Iterative refinement
- Preconditioning strategies
- Sparse matrix support

## Constraints
| Type | Constraint |
|------|-----------|
| Technical | SCOOP-compatible, void-safe (void_safety="all") |
| Resource | No external BLAS/LAPACK, pure Eiffel initially |
| Accuracy | Target 1e-10 relative error for well-conditioned problems |
| Data | Support REAL_64 matrices (double precision) |

## Assumptions to Validate
| ID | Assumption | Risk if False |
|----|-----------|--------------|
| A-1 | Pure Eiffel performance acceptable | May need C optimization |
| A-2 | Dense matrices sufficient for MVP | May need sparse matrix library |
| A-3 | Numerical stability achievable with algorithms | May need iterative refinement |

## Research Questions
- What's the largest matrix size needed for physics simulations?
- Should we support complex matrices early or defer?
- How important is performance vs. correctness?
- What about ill-conditioned matrices (high condition number)?
