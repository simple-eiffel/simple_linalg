# RECOMMENDATION: simple_linalg

## Executive Summary
Build a pure Eiffel linear algebra library providing vector/matrix operations and core decompositions (LU, QR, eigenvalues). Focus on numerical stability through Design by Contract (preconditions validate well-conditioning, postconditions provide error estimates). Target primary use: physics simulations requiring matrix operations for Jacobians, linear system solving, and eigenvalue problems.

## Recommendation
**Action:** BUILD
**Confidence:** HIGH

## Rationale
1. **Gap exists** - Eiffel has no linear algebra library
2. **MVP viable** - Dense matrix operations well-understood, implementable in pure Eiffel
3. **Use case critical** - Physics simulations (electromagnetic fields, structural analysis) all need matrix operations
4. **API design clear** - Simple facade wrapping VECTOR and MATRIX classes
5. **Decomposition methods proven** - LU, QR, power iteration all well-established algorithms

## Proposed Approach

### Phase 1 (MVP) - Core Linear Algebra
**Release:** v1.0.0

**Features:**
- Vector operations (creation, operations, norms, dot product)
- Matrix operations (creation, add, multiply, transpose, determinant)
- LU decomposition with partial pivoting
- Linear system solving (Ax=b)
- Matrix inverse
- Condition number estimation
- Basic eigenvalue (power iteration)

**Deliverables:**
- SIMPLE_LINALG facade class
- VECTOR, VECTOR_N classes
- MATRIX class with operations
- LU_DECOMPOSITION, SOLVER_AXB classes
- Test suite with 100+ cases
- GitHub Pages documentation with examples

**Timeline:** 3-4 weeks

### Phase 2 (Full) - Advanced Decompositions
**Release:** v2.0.0 (future)

**Features:**
- QR decomposition (Gram-Schmidt, Householder)
- Singular Value Decomposition (SVD)
- All eigenvalues via QR algorithm
- Iterative refinement for ill-conditioned systems
- Sparse matrix support (separate library: simple_sparse)

### Phase 3+ (Extensions)
**Release:** v3.0.0+ (future)

**Features:**
- Complex matrix support
- BLAS/LAPACK C bindings for performance
- GPU acceleration (via CUDA/OpenCL interface)
- Specialized matrix types (symmetric, triangular, band)

## Key Features

### 1. Vector Operations
```eiffel
v1 := create {VECTOR_N}.from_array (<<1.0, 2.0, 3.0>>)
v2 := create {VECTOR_N}.from_array (<<4.0, 5.0, 6.0>>)
dot := v1.dot_product (v2)      -- ≈ 32.0
norm := v1.norm_l2              -- ≈ 3.742
v3 := v1.add (v2)               -- Element-wise addition
```

### 2. Matrix Creation and Operations
```eiffel
a := create {MATRIX}.from_array_2d (<<...>>)
b := a.transpose
c := a.multiply (b)             -- Matrix multiply
det := a.determinant            -- Scalar
inv := a.inverse                -- Matrix inverse
```

### 3. Linear System Solving
```eiffel
solver := create {SIMPLE_LINALG}.make
x := solver.solve (a, b)        -- Solve Ax = b via LU
residual := (a.multiply (x)).subtract (b).norm_l2
```

### 4. Error Estimation
```eiffel
result := solver.solve_with_error (a, b)
-- Returns (solution_x, residual_norm, condition_estimate)
```

## Success Criteria
- [ ] Vector/matrix operations accurate to 1e-10 relative error
- [ ] LU solving achieves residual < 1e-12 on well-conditioned systems
- [ ] 100+ unit tests, 100% pass rate
- [ ] Condition number detection prevents silent failures
- [ ] All methods void-safe and SCOOP-compatible
- [ ] GitHub Pages documentation with physics examples
- [ ] Compatible with simple_calculus (Jacobian computation)

## Dependencies
| Library | Purpose | simple_* Preferred |
|---------|---------|------------------|
| simple_math | Basic arithmetic, transcendental | YES |
| simple_calculus | Jacobian computation (future) | YES |
| base | Fundamental types | (ISE allowed) |
| testing | EQA_TEST_SET | (ISE allowed) |

## Gaps Identified (Future simple_* Libraries)
| Gap | Current Workaround | Proposed simple_* |
|-----|-------------------|------------------|
| Sparse matrices | Dense only (inefficient) | simple_sparse |
| Complex matrices | Not supported | simple_complex_linalg |
| Specialized matrices | Limited types | simple_structured_matrices |
| GPU acceleration | CPU only | simple_gpu_linalg |

## Integration with Physics Stack
```
simple_math (basic ops)
       ↓
simple_calculus (derivatives) ↔ simple_linalg (Jacobians, linear systems)
       ↓
simple_physics (F=ma, wave equation)
```

## Next Steps

1. Run `/eiffel.spec` to transform research into class design
2. Run `/eiffel.intent` to capture refined intent
3. Run full eiffel-* workflow to v1.0.0
4. Coordinate with simple_calculus for Jacobian support

## Timeline
- **Research + Spec:** 1 week
- **Phase 1 Implementation:** 3-4 weeks
- **Testing + Hardening:** 1-2 weeks
- **Documentation + Release:** 1 week
- **Total MVP:** ~6-7 weeks

## Estimated Deliverables
- ~2,000 lines of Eiffel code
- ~3,000 lines of test code
- 100+ test cases
- 5 comprehensive documentation pages
- Ready for integration with simple_calculus
