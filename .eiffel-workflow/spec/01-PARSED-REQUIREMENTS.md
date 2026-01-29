# 01-PARSED-REQUIREMENTS: simple_linalg

## Requirement Parsing and Organization

Extracted from research documents 01-SCOPE through 07-RECOMMENDATION.

---

## FUNCTIONAL REQUIREMENTS

### Vector Operations (FR-001 through FR-004)

| Req ID | Requirement | User Story | Acceptance Criteria | Phase |
|--------|-------------|-----------|---------------------|-------|
| FR-001 | Create vectors with arbitrary dimensions | As a physicist, I need vectors of size N to represent field values | Support VECTOR_2, VECTOR_3, VECTOR_N with N>=1 | MVP |
| FR-002 | Vector addition, subtraction, scalar multiplication | As an engineer, I need basic vector algebra | Result within 1e-10 relative error vs. reference implementation | MVP |
| FR-003 | Vector dot product | As a physicist, I need dot products for energy calculations | Result within 1e-10 relative error; handle orthogonal vectors (result ~0) | MVP |
| FR-004 | Vector norms (L1, L2, infinity) | As a researcher, I need to measure vector magnitude | Support norm_l1, norm_l2, norm_infinity; results within 1e-10 error | MVP |

**Dependency Graph:** FR-001 must precede FR-002, FR-003, FR-004

---

### Matrix Operations (FR-005 through FR-009)

| Req ID | Requirement | User Story | Acceptance Criteria | Phase |
|--------|-------------|-----------|---------------------|-------|
| FR-005 | Create matrices with arbitrary dimensions | As an engineer, I need matrices M x N (M,N >= 1) | Support MATRIX [M x N] with column-major storage (Decision D-002) | MVP |
| FR-006 | Matrix addition and subtraction | As a physicist, I need element-wise matrix operations | Result within 1e-10 relative error; same dimensions required (precondition) | MVP |
| FR-007 | Matrix multiplication | As a researcher, I need A*B matrix multiply | Result within 1e-10 relative error for well-conditioned matrices | MVP |
| FR-008 | Matrix transpose | As an engineer, I need A^T | Exact (no numerical error except floating-point roundoff) | MVP |
| FR-009 | Matrix determinant | As a physicist, I need det(A) for singularity testing | Within 1e-10 relative error for well-conditioned matrices | MVP |

**Dependency Graph:** FR-005 must precede all other matrix operations. FR-007 depends on storage layout (D-002). FR-009 depends on LU (FR-010).

---

### Linear System Solving (FR-010 through FR-012)

| Req ID | Requirement | User Story | Acceptance Criteria | Phase |
|--------|-------------|-----------|---------------------|-------|
| FR-010 | LU decomposition with partial pivoting | As a solver developer, I need stable factorization of A | A = P*L*U where L lower triangular, U upper triangular, P permutation; partial pivoting (D-003) | MVP |
| FR-011 | Solve linear system Ax=b via LU | As a physicist, I need to solve Ax=b for Jacobian inversion | Solution x within 1e-8 residual ||Ax-b|| for well-conditioned systems | MVP |
| FR-012 | Matrix inverse via LU | As an engineer, I need A^(-1) | Inverse computed via LU; postcondition: A*A^(-1) ≈ I within epsilon | SHOULD (Phase 1 acceptable) |

**Dependency Graph:** FR-011, FR-012 depend on FR-010.

**Precondition (Critical):**
- `well_conditioned: estimated_condition_number <= max_safe_condition`
- `not_singular: determinant /= 0.0`

---

### Decompositions and Advanced Operations (FR-013 through FR-016)

| Req ID | Requirement | User Story | Acceptance Criteria | Phase |
|--------|-------------|-----------|---------------------|-------|
| FR-013 | Eigenvalue/eigenvector computation | As an ML researcher, I need dominant eigenvalues | Power iteration method (D-004); converges to dominant eigenvalue; Phase 2 for QR (all eigenvalues) | SHOULD (Phase 1) |
| FR-014 | QR decomposition | As a researcher, I need orthogonal factorization A=Q*R | Gram-Schmidt orthogonalization; Phase 2 deferred | SHOULD (Phase 2) |
| FR-015 | Singular Value Decomposition (SVD) | As a data analyst, I need rank analysis A=U*Σ*V^T | Phase 2 deferred | SHOULD (Phase 2) |
| FR-016 | Matrix condition number estimation | As a scientist, I need to detect ill-conditioning | Estimate via LU (D-006); used as precondition for solve; detect when cond > threshold | SHOULD (Phase 1) |

**Dependency Graph:** FR-013 independent but uses MATRIX class. FR-014, FR-015 depend on FR-013 (QR). FR-016 feeds into FR-011, FR-012 preconditions.

---

## NON-FUNCTIONAL REQUIREMENTS

| Req ID | Category | Requirement | Measure | Target | Justification |
|--------|----------|-------------|---------|--------|---------------|
| NFR-001 | ACCURACY | Numerical accuracy of matrix operations | Relative error | < 1e-10 | IEEE 754 double precision standard |
| NFR-002 | SAFETY | Void safety | void_safety setting | "all" | Design by Contract constraint C-002 |
| NFR-003 | CONCURRENCY | SCOOP compatibility | Concurrency support | "scoop" | Constraint C-002 allows future parallelization |
| NFR-004 | PERFORMANCE | Matrix multiply on 100x100 | Milliseconds | < 10ms | Reasonable for dense matrix physics |
| NFR-005 | DEPENDENCY | External C library usage | Libraries needed | 0 (pure Eiffel) | Constraint C-005; C bindings deferred to Phase 2 |
| NFR-006 | MEMORY | Storage efficiency | Memory for NxN matrix | ~8N^2 bytes | REAL_64 = 8 bytes per element; no overhead |

---

## CONSTRAINTS

### Technical Constraints

| ID | Constraint | Immutable | Rationale |
|----|-----------|-----------|-----------|
| C-001 | Support REAL_64 (double precision) only in Phase 1 | YES | IEEE 754 standard; complex deferred to Phase 2 |
| C-002 | Must be SCOOP-compatible | YES | Requirement NFR-003; enables future parallelization |
| C-003 | Prefer simple_* over ISE stdlib | YES | Ecosystem pattern; consistency with simple_math |
| C-004 | Use simple_math for basic arithmetic | YES | Avoid duplication; leverage existing library |
| C-005 | No BLAS/LAPACK external C dependency in Phase 1 | YES | MVP timeline; Phase 2 may add bindings |

### Scope Boundaries

**IN SCOPE (MUST):**
- Vector operations (creation, operations, norms)
- Matrix operations (creation, multiply, transpose, determinant, inverse)
- LU decomposition with partial pivoting (Decision D-003)
- Linear system solving Ax=b
- Gaussian elimination with partial pivoting
- Vector/matrix norms (L1, L2, Frobenius)

**IN SCOPE (SHOULD):**
- Eigenvalue/eigenvector computation (power iteration)
- Condition number estimation
- Error bounds estimation

**OUT OF SCOPE:**
- Sparse matrices (deferred to simple_sparse)
- GPU acceleration
- Symbolic matrix operations
- Complex matrices (Phase 2)
- Advanced iterative solvers (GMRES, MINRES)

**DEFERRED TO FUTURE:**
- QR decomposition
- Singular Value Decomposition (SVD)
- Krylov subspace methods
- Iterative refinement
- Preconditioning strategies

---

## STORAGE AND REPRESENTATION DECISIONS

### Storage Layout Decision (D-002)

**Column-Major Storage** (BLAS/LAPACK convention)
- Physical memory layout: Elements stored column-by-column
- Benefit: Better cache locality for matrix multiply, easier future BLAS integration
- Impact: Eiffel code less intuitive (natural order is row-major)
- Implication: matrix[i,j] index logic must account for column-major layout

### LU Pivoting Decision (D-003)

**Partial Pivoting** (row swaps only)
- Numerical stability: Prevents division by small numbers
- Complexity: Medium - simpler than complete pivoting
- Limitation: Some ill-conditioned matrices may still fail; documented limitation
- Implementation: Permutation matrix P represents row swaps

### Eigenvalue Algorithm Decision (D-004)

**Power Iteration for Phase 1** (QR deferred)
- MVP benefit: Finds dominant eigenvalue quickly
- Limitation: Only dominant eigenvalue (largest magnitude)
- Phase 2: QR algorithm for all eigenvalues
- API design: Ready for QR replacement without breaking changes

### Condition Number Decision (D-006)

**Estimation via LU** (not exact SVD)
- Performance: Fast, computed during LU
- Accuracy: Approximation, good enough for detecting ill-conditioning
- Usage: As precondition for solve operations
- Postcondition: Operations document when results trustworthy (< 1e-10 error)

---

## REQUIREMENTS TRACEABILITY

### From Scope (01-SCOPE.md)

- **Problem Statement** → FR-001 through FR-016 (all functional requirements)
- **Target Users** (Physicist, Roboticist, ML Researcher, Solver Developer) → Architecture decision: SIMPLE_LINALG facade + VECTOR/MATRIX classes
- **Success Criteria** → Acceptance criteria in all FR-* rows
- **Constraints** → C-001 through C-005 mapped to requirements

### From Landscape (02-LANDSCAPE.md)

- **Existing Solutions** (NumPy, BLAS/LAPACK, Eigen) → Patterns adopted: column-major storage (D-002), error estimation (Innovation I-002)
- **Gap Analysis** → Justifies BUILD decision and pure Eiffel approach
- **Build vs Buy** → Supports constraints C-005 (no external dependency Phase 1)

### From Requirements (03-REQUIREMENTS.md)

- **Functional Requirements** → FR-001 through FR-016 directly extracted
- **Non-Functional Requirements** → NFR-001 through NFR-006 directly extracted
- **Constraints** → C-001 through C-005 directly extracted

### From Decisions (04-DECISIONS.md)

- **D-001** (Dense only) → Scope boundary ("IN SCOPE" section, "OUT OF SCOPE": sparse matrices)
- **D-002** (Column-major) → FR-005, FR-007 implications
- **D-003** (Partial pivoting) → FR-010 requirement
- **D-004** (Power iteration) → FR-013 Phase 1 vs Phase 2
- **D-005** (Custom VECTOR class) → FR-001 design implication
- **D-006** (LU condition estimation) → FR-016

### From Innovations (05-INNOVATIONS.md)

- **I-001** (DBC for Stability) → Design principle: Preconditions check well-conditioning (FR-011, FR-012, FR-013)
- **I-002** (Error Estimation) → NFR-001 accuracy target, postcondition requirement
- **I-003** (SCOOP Ready) → NFR-003 constraint
- **I-004** (simple_calculus Integration) → Future feature (not Phase 1, but API designed for it)

### From Risks (06-RISKS.md)

- **RISK-001** (Ill-conditioned silent failure) → Mitigated by condition number precondition (FR-016), postcondition stability validation
- **RISK-002** (Performance) → NFR-004 performance target; Phase 2 optimization path
- **RISK-003** (Sparse pressure) → Scope boundary clear documentation
- **RISK-005** (LU instability) → FR-010 partial pivoting, precondition checking
- **RISK-007** (Test coverage) → Validation requirement in 08-VALIDATION.md

---

## SUMMARY: REQUIREMENTS ORGANIZED BY CLASS

### VECTOR_N Class
- FR-001 (creation), FR-002 (operations), FR-003 (dot product), FR-004 (norms)
- NFR-001 (accuracy)

### MATRIX Class
- FR-005 (creation), FR-006 (add/subtract), FR-007 (multiply), FR-008 (transpose), FR-009 (determinant)
- FR-012 (inverse)
- NFR-001 (accuracy)

### LU_DECOMPOSITION Class
- FR-010 (LU with partial pivoting)
- FR-016 (condition number estimation)

### SOLVER Class
- FR-011 (solve Ax=b)
- FR-012 (inverse via LU)
- Precondition: well_conditioned (via FR-016)

### EIGENVALUE_SOLVER Class
- FR-013 (power iteration for dominant eigenvalue)

### SIMPLE_LINALG Facade
- Orchestrates all classes
- Enforces SCOOP compatibility (NFR-003)
- Void-safe throughout (NFR-002)

---

## EVIDENCE: Requirement Extraction Complete

All 16 functional requirements extracted from research documents.
All 6 non-functional requirements mapped to technical standards.
All 5 technical constraints justified and traced.
Scope boundaries clearly defined (MVP vs SHOULD vs Phase 2).
Storage and algorithm decisions documented in requirements.

Next Step: 02-DOMAIN-MODEL.md (Identify domain concepts)
