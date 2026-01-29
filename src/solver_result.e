class SOLVER_RESULT
	-- Result of linear system solving containing solution and quality metrics
	-- Immutable: enables SCOOP concurrent use

create
	make

feature {NONE} -- Initialization

	make (a_solution: VECTOR_N; a_residual_norm: REAL_64; a_condition_estimate: REAL_64)
			-- Create solver result with solution and residual
		require
			solution_not_void: a_solution /= Void
			residual_non_negative: a_residual_norm >= 0.0
			condition_positive: a_condition_estimate > 0.0
		do
			solution := a_solution
			residual_norm := a_residual_norm
			condition_estimate := a_condition_estimate
		ensure
			solution_set: solution = a_solution
			residual_set: residual_norm = a_residual_norm
			condition_set: condition_estimate = a_condition_estimate
		end

feature -- Access

	solution: VECTOR_N
		-- Solution vector x to Ax = b

	residual_norm: REAL_64
		-- Norm of residual ||Ax - b|| for quality assessment

	condition_estimate: REAL_64
		-- Estimated condition number κ(A)

feature -- Queries

	is_accurate: BOOLEAN
			-- True if residual is small (< 1e-8)
		do
			Result := residual_norm < 1.0e-8
		ensure
			result_valid: Result = (residual_norm < 1.0e-8)
		end

	is_well_conditioned: BOOLEAN
			-- True if κ ≤ 1e12 (well-conditioned by IEEE 754 standards)
		do
			Result := condition_estimate <= 1.0e12
		ensure
			result_valid: Result = (condition_estimate <= 1.0e12)
		end

end
