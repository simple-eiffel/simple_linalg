# Phase 0: Intent Review Request

**Instructions:** Review the intent document below and generate probing questions to clarify vague language, identify missing requirements, and surface implicit assumptions.

## Review Criteria

Look for:
1. **Vague language:** Words like "fast", "secure", "easy", "flexible" without concrete definitions
2. **Missing edge cases:** What happens with empty input? Maximum size? Invalid data?
3. **Untestable criteria:** Are acceptance criteria specific and measurable?
4. **Hidden dependencies:** What external systems or libraries are assumed?
5. **Scope ambiguity:** Is "out of scope" clearly defined?

## Output Format

Provide 5-10 probing questions. For each:
- Quote the vague phrase
- Explain why it's vague
- Offer 2-3 concrete alternatives the user can choose from

---

## Intent Document to Review

# Intent: simple_linalg

## What

**simple_linalg** is a linear algebra library providing vectors, matrices, and decompositions for Eiffel applications. It enables physics simulations, engineering analysis, machine learning, and scientific computing through verified, numerically-stable matrix operations.

**Core Capabilities:**
- Vector operations (2D, 3D, n-dimensional; norms, dot product, cross product)
- Matrix operations (multiply, transpose, determinant, inverse)
- LU decomposition with partial pivoting
- Linear system solving (Ax = b via LU)
- Eigenvalue/eigenvector computation (power iteration)
- Condition number estimation (detect ill-conditioning)

## Why

**Problem:** Physics simulations, engineering analysis, and scientific computing in Eiffel require linear algebra operations that don't exist in the ecosystem.

**Why it matters:**
- Jacobian matrices (∂f/∂x) for Newton-Raphson solvers
- Electromagnetic field simulations need matrix operations
- Structural analysis requires eigenvalue problems
- Machine learning needs matrix multiply and decompositions
- Eiffel has NO built-in linear algebra library

**Impact of not solving:** Cannot build physics engines, optimization solvers, engineering simulations, or ML applications efficiently in Eiffel without external C bindings (BLAS/LAPACK).

## Users

| User Type | Needs | Use Case |
|-----------|-------|----------|
| Physics Simulator | Jacobians, linear solving | Maxwell equations, electromagnetic fields |
| Robotics Engineer | Rotation matrices, transforms | Kinematics, inverse problems |
| ML Researcher | Matrix multiply, decompositions | Neural networks, optimization |
| Structural Engineer | Eigenvalues, linear solving | FEM analysis, modal analysis |
| Optimization Algorithm | Jacobians, linear systems | Newton-Raphson, trust region |

## Acceptance Criteria

- [ ] Vector operations accurate to < 1e-10 relative error
- [ ] Matrix multiply accurate to < 1e-10 relative error
- [ ] LU solving achieves residual < 1e-8 on well-conditioned systems
- [ ] Condition number estimation detects ill-conditioning
- [ ] All methods prevent silent failures (errors in results flagged)
- [ ] Eigenvalue power iteration converges reliably
- [ ] All methods void-safe and SCOOP-compatible
- [ ] Dense matrices (M × N) supported
- [ ] 100+ unit tests, all passing
- [ ] GitHub Pages documentation with physics examples

## Out of Scope

- **NOT Sparse matrices:** Phase 1 is dense only (Phase 2 → separate simple_sparse)
- **NOT Complex matrices:** Phase 1 is real REAL_64 only (Phase 2+ adds complex)
- **NOT GPU acceleration:** CPU-only, pure Eiffel
- **NOT Advanced iterative solvers:** GMRES, MINRES deferred to Phase 2
- **NOT All eigenvalues:** Phase 1 is dominant eigenvalue only (Phase 2 adds QR algorithm)

## Dependencies

| Need | Library | Justification |
|------|---------|---------------|
| Basic arithmetic (sqrt, abs, max) | simple_math | Foundation library, required |
| Partial derivatives (future: Jacobian) | simple_calculus | For Jacobian matrix assembly (Phase 2) |
| Fundamental types | base (ISE only) | No simple_* equivalent exists |
| Unit testing framework | testing (ISE only) | No simple_* equivalent exists |

## MML Decision

**Decision:** **NO**

**Rationale:** While internal storage uses arrays, the public interface deals with abstract vectors and matrices. Frame conditions will use mathematical properties (determinant, norm, eigenvalue equations) rather than MML collection invariants.

---

## Design Principles

1. **Design by Contract:** Every method has require/ensure/invariant
   - Preconditions validate well-conditioning (prevent silent failures)
   - Postconditions guarantee solution quality
   - Invariants enforce mathematical properties

2. **Numerical Stability:** Core design principle
   - Partial pivoting in LU (not zeros on diagonal)
   - Condition number estimation (detect ill-conditioning)
   - Error bounds on all operations
   - Residual checking in solvers

3. **Immutability:** Results are immutable
   - Enables SCOOP concurrent use
   - No state corruption issues
   - Easy to reason about

4. **Simple API:** Facade hides complexity
   - Users call `solve(a, b)`
   - Don't see LU decomposition details
   - Don't see pivoting strategy
   - Just get accurate solutions with error bounds

5. **Column-Major Storage:** Matches BLAS convention
   - Better cache locality
   - Easier future BLAS integration
   - Standard numerical computing approach
