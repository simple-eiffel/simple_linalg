# Eiffel Contract Review Request - simple_linalg (Claude)

**Project:** simple_linalg - Linear Algebra Library
**Phase:** 2 - Adversarial Contract Review (Round 2)
**Reviewer:** Claude
**Previous Reviewer:** Ollama QwenCoder

---

## Ollama Review Results (Summary)

Ollama identified 9 issues:
1. **CRITICAL**: Stub determinant() breaks inverse() precondition (determinant always returns 0.0)
2. **HIGH**: Circular dependency: inverse() requires determinant /= 0.0 but determinant is stubbed
3. **HIGH**: solve() missing well-conditioning precondition (no condition_number check)
4. **MEDIUM**: VECTOR_N.make_from_array missing postcondition validating array copy
5. **MEDIUM**: normalized() missing infinity check (norm could be Infinity)
6. **MEDIUM**: VECTOR_N.norm missing postcondition validating norm type relationships (L1 >= L2 >= Infinity)
7. **MEDIUM**: LU_DECOMPOSITION.make missing permutation value validation (should be 1..rows)
8. **HIGH**: EIGENVALUE_RESULT.make precondition too strict (iterations_positive > 0 fails on immediate convergence)
9. **LOW**: MATRIX.element missing round-trip consistency postcondition

**Critical Issues Requiring Fix:**
- Issue #1: Stub determinant breaks inverse precondition
- Issue #2: Circular dependency in inverse
- Issue #3: Add well-conditioning precondition to solve
- Issue #8: Change iterations_positive to iterations_non_negative

---

## Your Task: Claude Deeper Review

You are reviewing Eiffel contracts for **technical correctness, numerical soundness, SCOOP safety, and consistency**. Assume Ollama's identified issues are valid. Your job:

1. **Validate Ollama's findings** - Are they technically correct?
2. **Check mathematical semantics** - Do contracts match linear algebra reality?
3. **Verify numerical stability** - Are threshold values realistic? (condition_number ≤ 1e12, tolerances)
4. **Check consistency** - Do related postconditions agree?
5. **Find additional issues** Ollama may have missed

**Additional Focus Areas:**
- SCOOP: Are results properly immutable? Can step_calculator/analyzer be safely shared?
- Numerical: Does condition_number definition make sense? What about ill-conditioning?
- Type Safety: Are preconditions sufficient to prevent invalid state (singular matrices, mismatched dimensions)?
- Consistency: Do Tier 1/2/3 APIs have consistent contracts?
- Missing MML: Should ARRAY/ARRAY2 use model queries for postconditions?

---

## Key Contracts (Abbreviated - Full in Original Prompt)

### MATRIX.inverse (Circular Dependency Issue)

```eiffel
inverse: MATRIX
	-- Matrix inverse via LU decomposition
require
	square: rows = columns
	nonsingular: determinant /= 0.0
do
	-- Stub - Phase 1
	Result := create {MATRIX}.make_identity (rows)
ensure
	result_valid: Result /= Void
end
```

**Ollama Issue #1-2:** determinant() is stubbed (returns 0.0 always). Precondition `nonsingular: determinant /= 0.0` will ALWAYS FAIL because determinant returns 0.0 in Phase 1. The function cannot be called.

**Your analysis needed:**
- Is this precondition mathematically correct? (Yes)
- But can it ever be satisfied in Phase 1? (No - determinant is stubbed)
- Should Phase 1 skip inverse entirely, or change precondition?

---

### EIGENVALUE_RESULT.make (Iterations Postcondition)

```eiffel
make (a_eigenvalue: REAL_64; a_eigenvector: VECTOR_N;
      a_iterations: INTEGER; a_tolerance_achieved: REAL_64)
require
	eigenvector_not_void: a_eigenvector /= Void
	iterations_positive: a_iterations > 0
	tolerance_achieved_non_negative: a_tolerance_achieved >= 0.0
```

**Ollama Issue #8:** What if power iteration converges on first call (before incrementing counter)? Then a_iterations = 0, and precondition is violated. Should iterations be >= 0 instead?

**Your analysis:**
- Can power iteration converge with 0 iterations?
- Should postcondition validate iterations > 0 implies tolerance_achieved < tolerance_threshold?

---

### VECTOR_N.norm (Missing Relationship Validation)

```eiffel
norm (norm_type: INTEGER): REAL_64
	-- Vector norm: 1=L1, 2=L2 (Euclidean), 3=Infinity
require
	norm_type_valid: norm_type >= 1 and norm_type <= 3
ensure
	result_valid: not Result.is_nan
	result_non_negative: Result >= 0.0
end
```

**Ollama Issue #6:** Missing postcondition that validates norm properties:
- L1 norm >= L2 norm >= Infinity norm (by Hölder inequality)
- These should be ensured as postconditions to catch implementation bugs

**Your analysis:**
- Is the Hölder inequality relationship guaranteed?
- Should postcondition enforce `norm_type = 1 implies Result >= norm(2)`?

---

### MATRIX.solve (Missing Precondition)

```eiffel
solve (rhs: VECTOR_N): VECTOR_N
	-- Solve Ax = b via LU decomposition
require
	square: rows = columns
	compatible: rows = rhs.dimension
do
	-- Stub - Phase 1
	create Result.make_from_array (<<0.0>>)
ensure
	result_valid: Result /= Void
end
```

**Ollama Issue #3:** No precondition checks well-conditioning. If κ > 1e12, solution is unreliable, but no warning. Should add: `well_conditioned: condition_number <= 1.0e12`?

**Your analysis:**
- Is κ ≤ 1e12 the right threshold for Phase 1?
- Should solve() enforce well-conditioning in precondition?
- Or should it return SOLVER_RESULT (which has condition_estimate) instead?

---

## Contracts to Review (Full)

[See phase2-ollama-review.md for complete contract listings]

All 7 classes:
1. VECTOR_2 (2D specialized)
2. VECTOR_3 (3D specialized)
3. VECTOR_N (n-dimensional generic)
4. MATRIX (M×N dense)
5. SOLVER_RESULT (solution quality data)
6. EIGENVALUE_RESULT (eigenvalue data)
7. LU_DECOMPOSITION (Tier 3 expert)

---

## Claude-Specific Review Checklist

- [ ] **Ollama's 9 issues**: Are they valid? Any false positives?
- [ ] **Stub functions**: Can Phase 1 skip inverse/solve, or must preconditions change?
- [ ] **Iterations count**: Should be >= 0 instead of > 0?
- [ ] **Norm relationships**: Should L1 >= L2 >= Infinity be postconditions?
- [ ] **Array copying**: Does VECTOR_N.make_from_array need copy validation?
- [ ] **Condition number**: Is κ ≤ 1e12 the right threshold? Where should it be checked?
- [ ] **Infinity/NaN propagation**: What should happen if vector = [Infinity, 0, 0]?
- [ ] **Frame conditions**: Missing MML for immutable results?
- [ ] **Dimensional compatibility**: Are all vector/matrix operation preconditions sufficient?
- [ ] **Tier consistency**: Do Tier 1/2/3 postconditions align?

---

## Output Format

For **validated** Ollama issues:
```
**OLLAMA ISSUE #N - VALIDATED** [description]
**CONTEXT**: [why it's correct]
**PRIORITY**: [Critical/High/Medium]
**FIX**: [specific recommendation]
```

For **additional** issues found:
```
**NEW ISSUE**: [description]
**LOCATION**: [Class.feature]
**ROOT CAUSE**: [analysis]
**FIX**: [suggestion]
```

For **false positives** (if any):
```
**OLLAMA ISSUE #N - DISPUTED**
**REASON**: [why Ollama is wrong]
**CORRECT INTERPRETATION**: [what actually holds]
```

---

## Proceed with Review

Analyze the contracts above using the Ollama findings as starting point. Validate, add, or dispute as needed.

**Return:** Organized list of all issues (Ollama validated + new + disputed) with priorities.
