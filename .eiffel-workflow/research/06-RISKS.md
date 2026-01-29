# RISKS: simple_linalg

## Risk Register

| ID | Risk | Likelihood | Impact | Mitigation |
|----|------|------------|--------|-----------|
| RISK-001 | Ill-conditioned matrices cause silent failures | HIGH | HIGH | Condition number estimation, preconditions, error bounds |
| RISK-002 | Performance insufficient for large matrices | MEDIUM | MEDIUM | Phase 2 can add BLAS bindings or inline C |
| RISK-003 | Users expect dense+sparse in Phase 1 | MEDIUM | LOW | Clear documentation that sparse deferred |
| RISK-004 | Complex matrix support demanded early | LOW | LOW | Document deferral to Phase 2 |
| RISK-005 | Numerical instability in LU factorization | MEDIUM | HIGH | Partial pivoting, condition number checks |

## Technical Risks

### RISK-001: Ill-Conditioned Matrix Silent Failure
**Description:** Matrices with large condition numbers lose accuracy in solving Ax=b
**Likelihood:** HIGH (users will encounter naturally ill-conditioned problems)
**Impact:** HIGH (wrong answer returned silently)
**Indicators:**
- Large residual ||Ax - b|| >> machine epsilon
- Tiny changes in A cause huge changes in x

**Mitigation:**
- Compute condition number as part of LU
- Precondition: `well_conditioned: estimated_condition_number <= max_safe_condition`
- Postcondition: `stability_validated: residual <= epsilon`
- Throw exception if condition number exceeds threshold

**Contingency:**
- Document limitations clearly
- Suggest iterative refinement for Phase 2
- Recommend splitting into smaller well-conditioned systems

### RISK-002: Performance on Large Matrices
**Description:** Pure Eiffel implementation may be slow for 1000x1000+ matrices
**Likelihood:** MEDIUM
**Impact:** MEDIUM (poor adoption for "big" problems)
**Indicators:**
- Matrix multiply of 1000x1000 > 1 second
- LU factorization slow

**Mitigation:**
- Phase 1: Correctness over performance
- Document performance characteristics
- Optimize hotpaths if profiling shows issues
- Phase 2: Consider BLAS/LAPACK C bindings via inline C

**Contingency:**
- Add inline C implementations for critical operations
- Use fast matrix multiply algorithm (Strassen for large matrices)

### RISK-003: Sparse Matrix Pressure
**Description:** Users naturally encounter sparse matrices and demand support
**Likelihood:** MEDIUM
**Impact:** LOW (can defer to separate library)
**Indicators:**
- GitHub issues requesting sparse matrix support
- Performance complaints on sparse problems

**Mitigation:**
- Clear documentation: "Phase 1 is dense matrices only"
- Roadmap documenting sparse as Phase 2
- Suggest workarounds for small sparse systems

**Contingency:**
- Create separate simple_sparse library
- Design MATRIX interface compatible with both dense/sparse

### RISK-004: Eigenvalue Algorithm Limitations
**Description:** Power iteration only finds dominant eigenvalue, inadequate for some uses
**Likelihood:** MEDIUM
**Impact:** MEDIUM (users need all eigenvalues)
**Indicators:**
- GitHub issues requesting QR algorithm
- Users trying power iteration for non-dominant eigenvalues

**Mitigation:**
- Document Phase 1 limitation clearly
- Phase 2 roadmap includes QR method
- Suggest deflation technique for finding multiple eigenvalues

**Contingency:**
- Implement simple QR algorithm in Phase 1.5 if demand high

## Numerical Stability Risks

### RISK-005: LU Factorization Breakdown
**Description:** Partial pivoting sometimes insufficient; zero diagonal still possible
**Likelihood:** MEDIUM (on highly ill-conditioned matrices)
**Impact:** HIGH (division by zero or near-zero)

**Mitigation:**
- Precondition: `determinant_nonzero: abs(determinant) > epsilon`
- Detect near-zero diagonal, throw exception with helpful message
- Postcondition: `factorization_valid: L and U are well-formed`

**Contingency:**
- Implement complete pivoting as fallback (slower)
- Document which problem classes require Phase 2 improvements

## Ecosystem Risks

### RISK-006: Incompatibility with Future symbolic_linalg
**Description:** Later symbolic library might use different matrix representation
**Likelihood:** LOW
**Impact:** MEDIUM (redesign needed)

**Mitigation:**
- Use MATRIX interface class early
- Make numeric MATRIX implement abstract interface
- Document extension points for symbolic matrices

## Resource Risks

### RISK-007: Insufficient Testing Coverage
**Description:** Linear algebra has many edge cases (singular, near-singular, orthogonal, etc.)
**Likelihood:** MEDIUM
**Impact:** HIGH (bugs discovered in production)

**Mitigation:**
- Comprehensive test suite: 100+ test cases
- Test on standard benchmark matrices (Hilbert, Vandermonde, etc.)
- Test pathological cases (near-singular, rank-deficient)

**Contingency:**
- Phase 2 can add more comprehensive validation
