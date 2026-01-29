# LANDSCAPE: simple_linalg

## Existing Solutions

### NumPy (Python)
| Aspect | Assessment |
|--------|-----------|
| Type | LIBRARY |
| Platform | Python |
| URL | https://numpy.org |
| Maturity | MATURE |
| License | BSD-3-Clause |

**Strengths:** Industry standard, highly optimized, comprehensive API
**Weaknesses:** Python-dependent, not available in Eiffel
**Relevance:** 85% (API design, algorithm patterns)

### BLAS/LAPACK (Fortran/C)
| Aspect | Assessment |
|--------|-----------|
| Type | LIBRARY |
| Platform | Fortran/C |
| URL | http://www.netlib.org/blas/, http://www.netlib.org/lapack/ |
| Maturity | MATURE |
| License | BSD |

**Strengths:** Industry standard for 40+ years, highly optimized
**Weaknesses:** Fortran bindings, steep learning curve
**Relevance:** 70% (algorithm reference, performance target)

### Eigen (C++)
| Aspect | Assessment |
|--------|-----------|
| Type | LIBRARY |
| Platform | C++ |
| URL | https://eigen.tuxfamily.org |
| Maturity | MATURE |
| License | MPL-2.0 |

**Strengths:** Modern API, expression templates, vectorization
**Weaknesses:** C++ templates not applicable to Eiffel
**Relevance:** 65% (API patterns, matrix operations)

### UT Austin Linear Algebra Library
| Aspect | Assessment |
|--------|-----------|
| Type | COURSE MATERIAL |
| Platform | Multiple |
| URL | https://www.cs.utexas.edu/~flame/web/FLAMEPublicationsUsingAPIUTFL.html |
| Maturity | ACADEMIC |
| License | Open |

**Strengths:** Educational focus, algorithmic clarity
**Weaknesses:** Not a production library
**Relevance:** 80% (algorithm teaching, numerical stability)

## Eiffel Ecosystem Check

**ISE Libraries:**
- No dedicated linear algebra library
- math library: basic functions only

**simple_* Libraries:**
- simple_math: Basic arithmetic (predecessor)
- **GAP**: No linear algebra library exists

**Gobo Libraries:**
- No linear algebra support

## Gap Analysis
Linear algebra operations not available in Eiffel. Need pure Eiffel implementation.

## Comparison Matrix
| Feature | NumPy | BLAS/LAPACK | Eigen | Our Need |
|---------|-------|-------------|-------|----------|
| Vector operations | ✓ | ✓ | ✓ | MUST |
| Matrix operations | ✓ | ✓ | ✓ | MUST |
| LU decomposition | ✓ | ✓ | ✓ | MUST |
| Eigenvalues | ✓ | ✓ | ✓ | SHOULD |
| QR decomposition | ✓ | ✓ | ✓ | SHOULD |
| SVD | ✓ | ✓ | ✓ | SHOULD |
| Pure native language | ✗ | ✗ | ✗ | MUST |
| Eiffel API | ✗ | ✗ | ✗ | MUST |
| SCOOP-compatible | ✗ | ✗ | ✗ | MUST |

## Patterns Identified
| Pattern | Source | Adopt? |
|---------|--------|--------|
| Matrix storage (row-major vs column-major) | BLAS/LAPACK | YES (column-major) |
| Decomposition operations | Eigen | YES |
| Error estimation | LAPACK | YES |
| Partial pivoting | LAPACK | YES |

## Build vs Buy vs Adapt
| Option | Effort | Risk | Fit |
|--------|--------|------|-----|
| BUILD | MEDIUM-HIGH | LOW | 100% |
| ADOPT | IMPOSSIBLE | HIGH | N/A |
| ADAPT | HIGH | MEDIUM | 75% |

**Recommendation:** BUILD - Pure Eiffel implementation
