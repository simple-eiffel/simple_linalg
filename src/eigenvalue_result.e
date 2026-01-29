class EIGENVALUE_RESULT
	-- Result of eigenvalue computation containing eigenvalue and eigenvector
	-- Immutable: enables SCOOP concurrent use

create
	make

feature {NONE} -- Initialization

	make (a_eigenvalue: REAL_64; a_eigenvector: VECTOR_N; a_iterations: INTEGER; a_tolerance_achieved: REAL_64)
			-- Create result with eigenvalue, eigenvector, and convergence info
		require
			eigenvector_not_void: a_eigenvector /= Void
			iterations_non_negative: a_iterations >= 0
			tolerance_achieved_non_negative: a_tolerance_achieved >= 0.0
		do
			eigenvalue := a_eigenvalue
			eigenvector := a_eigenvector
			iterations := a_iterations
			tolerance_achieved := a_tolerance_achieved
		ensure
			eigenvalue_set: eigenvalue = a_eigenvalue
			eigenvector_set: eigenvector = a_eigenvector
			iterations_set: iterations = a_iterations
			tolerance_set: tolerance_achieved = a_tolerance_achieved
		end

feature -- Access

	eigenvalue: REAL_64
		-- Dominant eigenvalue λ

	eigenvector: VECTOR_N
		-- Corresponding eigenvector v (unit normalized)

	iterations: INTEGER
		-- Number of power iterations performed

	tolerance_achieved: REAL_64
		-- Final convergence tolerance |λ_new - λ_old| / |λ_old|

feature -- Queries

	is_converged: BOOLEAN
			-- True if convergence criterion met (tolerance < 1e-10)
		do
			Result := tolerance_achieved < 1.0e-10
		ensure
			result_valid: Result = (tolerance_achieved < 1.0e-10)
		end

end
