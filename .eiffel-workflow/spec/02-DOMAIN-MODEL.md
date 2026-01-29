# 02-DOMAIN-MODEL: simple_linalg

## Domain Ontology

Linear algebra is the mathematical domain studying vector spaces, linear transformations, and their computational aspects. We model this domain using OOSC2 principles: identify entities (domain concepts), relationships, and invariants.

---

## CORE DOMAIN CONCEPTS

### 1. VECTOR (Abstract Concept)

**Definition:** An element of R^n (n-dimensional Euclidean space), represented as an ordered tuple of real numbers.

**Domain Properties:**
- **Dimensionality** (n): Number of components; n >= 1
- **Components** (c₁, c₂, ..., cₙ): Real-valued scalars (REAL_64)
- **Operations**: Addition, scalar multiplication, norm, dot product

**Real-World Semantics:**
- Physics: Displacement, velocity, acceleration, force fields
- Robotics: Joint angles, end-effector position, angular velocity
- ML: Feature vectors, gradient vectors, data points

**Class Mapping:**
- Concrete: VECTOR_N (dynamic dimension)
- Specialized: VECTOR_2, VECTOR_3 (fixed dimensions for performance)

---

### 2. MATRIX (Abstract Concept)

**Definition:** A linear transformation represented as an M x N array of real numbers, organizing data in rows and columns.

**Domain Properties:**
- **Dimensions**: M rows, N columns (M, N >= 1)
- **Storage Layout** (D-002): Column-major (following BLAS/LAPACK)
  - Physical order: A[0,0], A[1,0], ..., A[M-1,0], A[0,1], ...
  - Logical indexing: matrix[i,j] = i-th row, j-th column
- **Elements**: Real-valued scalars (REAL_64)

**Domain Classification:**
- **Square matrices** (M = N): Support determinant, inverse, eigenvalues
- **Rectangular matrices** (M ≠ N): Support rank, SVD (Phase 2)
- **Special matrices** (Phase 2 deferred):
  - Symmetric: A = A^T (eigenvalues guaranteed real)
  - Triangular: Upper/lower (from LU decomposition)
  - Orthogonal: A*A^T = I (from QR)

**Operations** (mapped to requirements):
- Element-wise: Addition, subtraction (FR-006)
- Transformation: Multiplication (FR-007), transpose (FR-008)
- Scalar properties: Determinant (FR-009), inverse (FR-012)
- Numerical properties: Condition number (FR-016)

**Real-World Semantics:**
- Physics: Jacobian matrices (∂f/∂x), rotation matrices, differential operators
- Robotics: Homogeneous transformation matrices (SE(3))
- ML: Weight matrices (neural networks), covariance matrices

**Class Mapping:** MATRIX (single class for dense matrices)

---

### 3. DECOMPOSITION (Abstract Concept)

**Definition:** Factorization of a matrix into component parts with special structure, enabling efficient computation of derived operations.

**Decomposition Types:**

#### LU Decomposition (D-003: Partial Pivoting)
- **Formula**: A = P * L * U
- **Components**:
  - P: Permutation matrix (row swaps from partial pivoting)
  - L: Lower triangular matrix (unit diagonal)
  - U: Upper triangular matrix
- **Purpose**: Enables efficient solution of Ax=b (FR-011)
- **Stability**: Partial pivoting prevents division by near-zero elements
- **Precondition**: Matrix must be square and non-singular
- **Class Mapping**: LU_DECOMPOSITION

#### QR Decomposition (Deferred Phase 2)
- **Formula**: A = Q * R
- **Components**: Q (orthogonal), R (upper triangular)
- **Purpose**: Numerically stable alternative to LU for least squares
- **Not Phase 1**: Deferred per D-004

#### Eigenvalue Decomposition (Phase 1: Power Iteration)
- **Formula**: A*v = λ*v (eigenvalue equation)
- **Components**: λ (eigenvalue), v (eigenvector)
- **Purpose**: Finds dominant eigenvalue for stability analysis
- **Phase 1 limitation**: Only dominant eigenvalue (largest magnitude)
- **Class Mapping**: EIGENVALUE_SOLVER (power iteration)

#### SVD (Deferred Phase 2)
- **Formula**: A = U * Σ * V^T
- **Purpose**: Rank analysis, pseudo-inverse
- **Not Phase 1**: Deferred per scope boundaries

---

### 4. VECTOR SPACE (Structural Concept)

**Definition:** R^n with properties inherited by all n-dimensional vectors.

**Invariants**:
- Associativity: (u + v) + w = u + (v + w)
- Commutativity: u + v = v + u
- Distributivity: c*(u + v) = c*u + c*v
- Closure: u + v ∈ R^n
- Identity: ∃ zero vector 0 ∈ R^n such that u + 0 = u

**Norms** (FR-004):
- **L1-norm**: ||v||₁ = Σ|vᵢ|
- **L2-norm**: ||v||₂ = √(Σvᵢ²) [Euclidean norm]
- **L∞-norm**: ||v||∞ = max|vᵢ|
- **Property**: All norms equivalent up to constant factors

**Dot Product** (FR-003):
- **Definition**: u·v = Σ(uᵢ*vᵢ)
- **Properties**:
  - Symmetric: u·v = v·u
  - Bilinear: (a*u)·(b*v) = ab(u·v)
  - Positive: u·u >= 0, u·u = 0 iff u = 0
- **Geometric meaning**: Cosine of angle between u, v

---

### 5. LINEAR SYSTEM (Computational Problem)

**Definition:** Problem of solving Ax = b where A is M x N matrix, x is unknown vector, b is known vector.

**Domain Classification**:
- **Square system** (M = N): Unique solution if A non-singular
- **Overdetermined** (M > N): No exact solution; least squares
- **Underdetermined** (M < N): Infinite solutions

**Phase 1 Focus**: Square systems only (M = N, well-conditioned)

**Solution Method** (FR-011): LU decomposition
1. Factor: A = P*L*U
2. Solve: P*L*U*x = b
3. Forward/backward substitution

**Error Measures**:
- **Residual**: r = b - A*x (how well solution satisfies Ax ≈ b)
- **Forward error**: ||x - x_exact|| (distance to true solution)
- **Backward error**: ||Ax - b|| (residual norm)

**Condition Number** (FR-016):
- **Definition**: κ(A) = ||A|| * ||A^(-1)|| (ratio of max to min singular value)
- **Interpretation**:
  - κ(A) ≈ 1: Well-conditioned (small perturbations → small solution changes)
  - κ(A) >> 1: Ill-conditioned (small perturbations → large solution changes)
  - κ(A) = ∞: Singular (no unique solution)
- **Phase 1 Strategy** (D-006): Estimate via LU residuals (not exact)
- **Usage**: Precondition to prevent silent failures (RISK-001 mitigation)

---

### 6. NUMERICAL STABILITY (Quality Concept)

**Definition:** Property that small perturbations in input cause proportionally small perturbations in output.

**Stability Properties in Phase 1**:

**Matrix Multiplication** (FR-007):
- Forward error grows with condition number κ(A)
- For well-conditioned matrices: Error ≤ κ(A) * machine_epsilon

**LU Factorization** (FR-010):
- Growth factor γ: Measures size of intermediate numbers
- Partial pivoting keeps γ bounded (prevents exponential growth)
- Postcondition: Verify factorization by checking L*U ≈ P*A

**Linear System Solving** (FR-011):
- Precondition: Check κ(A) <= max_safe_condition
- Postcondition: Check residual ||Ax - b|| <= epsilon
- If condition violated: Reject solution, alert user (prevents RISK-001)

**Vector Operations**:
- Addition/subtraction: Error amplified by condition number
- Dot product: Error bounded by norms of operands

---

## DOMAIN RELATIONSHIPS

```
┌─────────────┐
│   VECTOR    │ (contains n REAL_64 values)
└──────┬──────┘
       │ (many)
       │ forms_basis_for
       │
    ┌──▼──────────────┐
    │  VECTOR_SPACE   │ (R^n with operations)
    └──┬──────────────┘
       │
       │ contains
       │
    ┌──▼──────────────┐
    │   MATRIX        │ (M x N linear transformation)
    └──┬──────────────┘
       │ (can_be_decomposed_into)
       │
    ┌──┴─────────────────────────┐
    │                             │
┌───▼────────────────┐  ┌─────────▼──────────┐
│ LU_DECOMPOSITION   │  │ EIGENVALUE_SOLUTION│
│ A = P*L*U          │  │ A*v = λ*v          │
└────────────────────┘  └────────────────────┘
       │                        │
       │ enables               │ enables
       │                        │
┌──────▼──────────┐   ┌────────▼─────────────┐
│ LINEAR_SYSTEM   │   │ STABILITY_ANALYSIS   │
│ Solve Ax = b    │   │ (dominant eigenvalues)│
└─────────────────┘   └──────────────────────┘
```

---

## DOMAIN ATTRIBUTES AND INVARIANTS

### VECTOR Domain Attributes
- `dimension: INTEGER` - Number of components (n >= 1)
- `components: ARRAY[REAL_64]` - Element storage
- `norm_l2_cached: REAL_64` - Cached L2 norm (optimization)

### VECTOR Invariants
- `components.count = dimension`
- `∀ i ∈ [0, dimension): components[i] is REAL_64`
- `All operations maintain vector_space properties`

### MATRIX Domain Attributes
- `rows: INTEGER` - Number of rows (M >= 1)
- `columns: INTEGER` - Number of columns (N >= 1)
- `data: ARRAY[REAL_64]` - Element storage (column-major, size = M*N)
- `storage_layout: STORAGE_ORDER` - Always COLUMN_MAJOR (D-002)
- `condition_number_cached: REAL_64` - Estimated κ(A)

### MATRIX Invariants
- `data.count = rows * columns`
- `Column-major layout: data[i + j*rows] = matrix[i,j]`
- `If square: determinant defined and cached after LU`
- `If stored_lu: Lower/upper triangular invariants hold`

### LU_DECOMPOSITION Domain Attributes
- `l_matrix: MATRIX` - Lower triangular (unit diagonal)
- `u_matrix: MATRIX` - Upper triangular
- `pivot_indices: ARRAY[INTEGER]` - Row permutation encoding P
- `condition_estimate: REAL_64` - κ(A) estimate
- `singular_flag: BOOLEAN` - True if A detected singular

### LU_DECOMPOSITION Invariants
- `l_matrix and u_matrix are square (rows = columns = original_rows)`
- `l_matrix[i,i] = 1.0 ∀ i` (unit diagonal on L)
- `∀ i < j: l_matrix[i,j] = 0` (L strictly lower)
- `∀ i > j: u_matrix[i,j] = 0` (U strictly upper)
- `P*L*U ≈ original_matrix (within numerical tolerance)`
- `singular_flag = True iff ∃ i: abs(u_matrix[i,i]) < epsilon`

---

## DOMAIN PATTERNS

### Pattern 1: Error Estimation (Innovation I-002)

Every operation returns confidence information alongside result:
- Primary result: Computed value
- Secondary metadata: Error estimate, condition number estimate
- Allows user to decide: "Is this result trustworthy?"

**Example**: solve_with_error returns (solution_x, residual_norm, condition_estimate)

### Pattern 2: Precondition-Driven Stability (Innovation I-001)

Operations document when they are valid:
- **Precondition**: `well_conditioned: condition_number <= max_safe_condition`
- **Precondition**: `not_singular: determinant /= 0.0`
- **Postcondition**: `stability_validated: residual <= epsilon`

Result: User never silently gets wrong answer (RISK-001 mitigated)

### Pattern 3: SCOOP-Ready Decomposition (Innovation I-003)

Decomposition algorithms designed to enable future parallelization:
- Matrix multiply can be parallelized by blocks
- LU factorization can use panel decomposition
- API unchanged when SCOOP applied

---

## DOMAIN-DRIVEN ARCHITECTURE

### Core Responsibility Boundaries

**VECTOR Classes** (FR-001, FR-002, FR-003, FR-004)
- Encapsulate n-dimensional vectors
- Own norms, dot products, element-wise operations
- Enforce vector space invariants

**MATRIX Class** (FR-005, FR-006, FR-007, FR-008, FR-009)
- Encapsulate M x N dense matrices
- Own basic operations (add, multiply, transpose, determinant)
- Maintain column-major storage invariant (D-002)
- Compute/cache condition number estimates

**LU_DECOMPOSITION Class** (FR-010)
- Own LU factorization algorithm with partial pivoting (D-003)
- Maintain L, U, P components
- Provide access for solving, inverse computation
- Compute condition estimate (D-006)

**SOLVER Class** (FR-011, FR-012)
- Own linear system solution algorithms
- Use LU decomposition
- Check preconditions (well-conditioning, non-singularity)
- Return solution with error estimates

**EIGENVALUE_SOLVER Class** (FR-013)
- Own power iteration algorithm (D-004)
- Find dominant eigenvalue and eigenvector
- Phase 2: QR algorithm for all eigenvalues

**SIMPLE_LINALG Facade** (Orchestration)
- Provide simplified entry points for common tasks
- Coordinate VECTOR, MATRIX, SOLVER, EIGENVALUE_SOLVER classes
- Ensure SCOOP compatibility (NFR-003)
- Enforce void-safety throughout (NFR-002)

---

## DOMAIN RELATIONSHIPS TO REQUIREMENTS

### Domain Concept → Requirement Mapping

| Domain Concept | Relates To | Requirements | Phase |
|---|---|---|---|
| VECTOR | Vector operations | FR-001, FR-002, FR-003, FR-004 | MVP |
| VECTOR_SPACE | Axioms of addition | Implicit in all vector reqs | MVP |
| MATRIX | Dense matrix representation | FR-005, FR-006, FR-007, FR-008, FR-009 | MVP |
| DECOMPOSITION | Factorization algorithms | FR-010, FR-013, FR-014 (Phase 2) | MVP + Phase 2 |
| LINEAR_SYSTEM | Ax=b solving | FR-011, FR-012 | MVP |
| NUMERICAL_STABILITY | Error bounds | NFR-001, postconditions | MVP |
| CONDITION_NUMBER | Ill-conditioning detection | FR-016, preconditions | MVP |

---

## SUMMARY

**Domain Concepts Identified:**
1. VECTOR (with specializations VECTOR_2, VECTOR_3, VECTOR_N)
2. MATRIX (dense, column-major)
3. DECOMPOSITION (LU with partial pivoting; QR, SVD deferred)
4. VECTOR_SPACE (mathematical structure)
5. LINEAR_SYSTEM (Ax=b problem)
6. NUMERICAL_STABILITY (error tracking)

**Invariants Established:**
- Column-major storage layout enforced at MATRIX level
- LU decomposition maintains L lower/U upper/P permutation structure
- Vector space axioms enforced by VECTOR operations
- Condition number estimates computed and cached

**Design Patterns Identified:**
- Error estimation (every operation returns confidence)
- Precondition-driven stability (contracts prevent silent failures)
- SCOOP-ready decomposition (parallelizable algorithms)

**Next Step:** 03-CHALLENGED-ASSUMPTIONS.md (Question research assumptions)
