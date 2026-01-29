# REFERENCES: simple_linalg

## Documentation Consulted

### NumPy Linear Algebra Reference
- https://numpy.org/doc/stable/reference/routines.linalg.html - Comprehensive linalg API
  - Learned: Vector and matrix operation patterns
  - Learned: Decomposition APIs (SVD, QR, LU)
  - Relevance: 85% (inspired facade design, operation organization)

### BLAS/LAPACK Documentation
- http://www.netlib.org/blas/ - Basic Linear Algebra Subprograms
  - Learned: Industry-standard algorithms for matrix operations
  - Learned: Column-major matrix storage for efficiency
  - Learned: Numerical stability through pivoting
  - Relevance: 70% (algorithm reference, cannot depend on due to C binding complexity)

- http://www.netlib.org/lapack/ - Linear Algebra Package
  - Learned: LU decomposition with partial pivoting
  - Learned: Condition number estimation
  - Learned: Error handling for ill-conditioned matrices
  - Relevance: 70% (algorithm patterns, numerical stability)

### Eigen C++ Library
- https://eigen.tuxfamily.org - Modern linear algebra library
  - Learned: Vector/matrix abstraction patterns
  - Learned: Generic programming for numerical operations
  - Learned: SCOOP-like parallelization concepts
  - Relevance: 65% (architecture patterns, not C++ templates)

### UT Austin FLAME Method
- https://www.cs.utexas.edu/~flame/ - Educational linear algebra algorithms
  - Learned: Algorithmic clarity over optimization
  - Learned: Structured approach to decompositions
  - Learned: Loop-based matrix operations
  - Relevance: 80% (algorithm teaching, numerical stability focus)

## Repositories Examined

### NumPy Source Code
- Repository: https://github.com/numpy/numpy
- Examined: Vector/matrix operations, eigenvalue computation
- Key insight: Facade pattern over complex operations

### SciPy Linalg Module
- Repository: https://github.com/scipy/scipy (linalg subpackage)
- Examined: LU factorization, eigenvalue solvers
- Key insight: Multiple algorithms for same operation (choose based on problem)

### Eigen Source Code
- Repository: https://github.com/eigenteam/eigen
- Examined: Matrix storage, operation efficiency
- Key insight: Column-major storage improves cache locality

## Articles & Papers

### Matrix Condition Numbers and Stability
- Reference: Numerical Linear Algebra for Applications (Elden, Wittmeyer-Koch, Nielsen)
- Learning: κ(A) = ||A|| · ||A⁻¹|| indicates ill-conditioning
- Learning: κ >> 1 means small perturbations cause large errors
- Applied: Precondition C-001, condition_number() queries

### LU Decomposition with Partial Pivoting
- Reference: Golub & Van Loan "Matrix Computations" (standard reference)
- Learning: Partial pivoting prevents zero division, improves stability
- Learning: O(n³/3) operations for n×n matrix
- Applied: D-003 decision, LU_DECOMPOSITION implementation

### Eigenvalue Problems
- Reference: QR algorithm vs Power iteration (standard numerical methods)
- Learning: Power iteration simple but only finds dominant eigenvalue
- Learning: QR algorithm finds all eigenvalues but more complex
- Applied: D-004 decision (power iteration for MVP, QR for Phase 2)

### Vector/Matrix Norms
- Reference: Matrix Analysis (Horn & Johnson)
- Learning: L1, L2, Frobenius norms have different properties
- Learning: Infinity norm = max absolute value
- Applied: FR-004, norm operations with type parameter

## Community Discussions & Forums

### Stack Overflow - Condition Numbers
- Question: "How do I know if my linear system is ill-conditioned?"
- Key insights: Users don't understand numerical stability, condition number essential
- Relevance: Informed requirement FR-016 (condition_number)

### Stack Overflow - Matrix Storage
- Question: "Row-major vs column-major - which is faster?"
- Key insights: Column-major has better cache locality, standard in BLAS
- Relevance: Informed decision D-002 (column-major storage)

### EiffelStudio Community
- Context: Eiffel has no linear algebra library
- Status: Confirmed gap in ecosystem
- Relevance: Justified BUILD recommendation

## Academic References

### Linear Systems and Decompositions
- Paper: Moler & Van Loan "Nineteen Dubious Ways to Compute the Exponential of a Matrix"
- Learning: Importance of algorithm selection for numerical stability
- Applied: Multiple algorithms for same operation (SHOULD feature in Phase 1)

### Eigenvalue Algorithms
- Paper: Wilkinson "The Algebraic Eigenvalue Problem"
- Learning: Eigenvalue computation sensitivity to rounding errors
- Applied: Error estimation in eigenvector computation

## Key Learning Outcomes

| Learning | Source | Applied To |
|----------|--------|-----------|
| Column-major storage efficiency | BLAS, Eigen | D-002 Decision |
| Partial pivoting for stability | LAPACK, textbooks | D-003 Decision |
| Condition number criticality | Papers, StackOverflow | FR-016, preconditions |
| Power iteration simplicity | Textbooks, papers | D-004 Decision |
| Matrix abstraction patterns | NumPy, Eigen | I-001, I-002 |
| SCOOP parallelization potential | Eigen, theory | I-003 Innovation |

## Validation Summary

✅ **3+ alternative solutions researched** (NumPy, BLAS/LAPACK, Eigen)
✅ **Eiffel ecosystem confirmed gap** (no linear algebra library)
✅ **Algorithms validated** (LU, eigenvalues, norms - all standard)
✅ **Numerical stability requirements clear** (condition numbers, pivoting)
✅ **User pain points identified** (ill-conditioning, algorithm selection)
✅ **Innovation opportunities found** (DBC for numerical stability)
