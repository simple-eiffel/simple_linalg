# INNOVATIONS: simple_linalg

## What Makes This Different

### I-001: Design by Contract for Numerical Stability
**Problem Solved:** Matrix operations have implicit preconditions (non-singular, well-conditioned)
**Approach:** Explicit contracts document when operations will be numerically unstable
**Novelty:** Most libraries silently return wrong answers for ill-conditioned matrices
**Design Impact:** Users know exactly when results are trustworthy

Example:
```eiffel
inverse: MATRIX
    -- Matrix inverse
    require
        square: rows = columns
        well_conditioned: condition_number <= max_condition
        not_singular: determinant /= 0.0
    ensure
        size_preserved: Result.rows = rows and Result.columns = columns
        inverse_property: (Current * Result).is_identity (epsilon)
```

### I-002: Numeric Error Estimation Built-In
**Problem Solved:** How does user know if result is accurate?
**Approach:** Every matrix operation returns error bounds
**Novelty:** Most libraries return results without uncertainty
**Design Impact:** User can decide whether to trust result or use higher precision method

### I-003: SCOOP-Ready Matrix Decomposition
**Problem Solved:** Matrix operations naturally parallelizable but hard to express
**Approach:** Design APIs compatible with separate keyword for concurrent decomposition
**Novelty:** Future versions can parallelize without API change
**Design Impact:** Forward compatibility with SCOOP

### I-004: Seamless Integration with simple_calculus
**Problem Solved:** Computing Jacobians (matrices of partial derivatives) needs both libraries
**Approach:** MATRIX type understands agents from simple_calculus
**Novelty:** Can construct Jacobian by passing derivative agents
**Design Impact:** User never explicitly converts between libraries

Example:
```eiffel
jacobian: MATRIX
-- Compute Jacobian ∂f/∂x for vector function f: R^n → R^m
jacobian := matrix.from_jacobian_agent (agent partial_f, n, m)
```

## Differentiation from Existing Solutions

| Aspect | NumPy/LAPACK | Our Approach | Benefit |
|--------|--------------|--------------|---------|
| Error tracking | Not automatic | Built into every operation | Results are trustworthy by default |
| Stability docs | Scattered in papers | Part of contract | Clear preconditions |
| API design | Parameter-heavy | Simple facade | Easier to use |
| SCOOP integration | Not applicable | Designed in | Future parallelization free |
| Eiffel idiomatic | No | Yes (agents, contracts) | Native language feel |
