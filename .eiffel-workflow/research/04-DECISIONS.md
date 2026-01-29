# DECISIONS: simple_linalg

## Decision Log

### D-001: Dense vs Sparse Matrices
**Question:** Should MVP support sparse matrices or dense only?

**Options:**
1. Dense only (ARRAY2D storage)
2. Sparse only (COO/CSR format)
3. Both simultaneously

**Decision:** Dense only for MVP
**Rationale:** Simpler implementation, sufficient for most physics use cases, sparse deferred to separate library (simple_sparse)
**Implications:** Not suitable for very large systems (>10,000 x 10,000)
**Reversible:** YES - can add sparse layer later

### D-002: Matrix Storage Layout
**Question:** Row-major or column-major?

**Options:**
1. Row-major (natural for Eiffel 2D arrays)
2. Column-major (standard in BLAS/LAPACK)
3. Both (complex)

**Decision:** Column-major (following BLAS/LAPACK convention)
**Rationale:** Better cache locality for matrix multiply, easier future BLAS integration
**Implications:** Eiffel code less intuitive but aligns with industry standard
**Reversible:** YES but expensive

### D-003: LU Pivoting Strategy
**Question:** How to handle numerical instability in LU?

**Options:**
1. No pivoting (fails on zeros on diagonal)
2. Partial pivoting (swap rows)
3. Complete pivoting (swap rows and columns)

**Decision:** Partial pivoting (most common, good balance)
**Rationale:** Numerically stable enough for most problems, much simpler than complete pivoting
**Implications:** Some ill-conditioned problems may still fail; documented as limitation
**Reversible:** YES

### D-004: Eigenvalue Algorithm
**Question:** What algorithm for eigenvalues in Phase 1?

**Options:**
1. Power iteration (simple, only dominant eigenvalue)
2. QR algorithm (complex, all eigenvalues)
3. Jacobi method (moderate complexity)

**Decision:** Power iteration for Phase 1, QR deferred to Phase 2
**Rationale:** MVP shipping faster, works for dominant eigenvalue (common use case)
**Implications:** Not suitable for all eigenvalues; documented limitation
**Reversible:** YES

### D-005: Vector Storage
**Question:** How to represent vectors internally?

**Options:**
1. ARRAY [REAL_64]
2. Custom VECTOR class wrapping array
3. Inherit from list-like structure

**Decision:** Custom VECTOR class with internal ARRAY [REAL_64]
**Rationale:** Encapsulation, can add operations safely, future SCOOP parallelization
**Implications:** Slight memory overhead per vector
**Reversible:** YES

### D-006: Condition Number Estimation
**Question:** Compute exact condition number or estimate?

**Options:**
1. Exact (expensive, uses SVD)
2. Estimate (fast, uses LU residuals)
3. Skip in MVP

**Decision:** Estimate via LU, document as approximation
**Rationale:** Fast, good enough for detecting ill-conditioning
**Implications:** Not exact but practical
**Reversible:** YES
