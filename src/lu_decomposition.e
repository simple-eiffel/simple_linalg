class LU_DECOMPOSITION
	-- LU decomposition of matrix: A = P*L*U where P is permutation, L is lower triangular, U is upper triangular
	-- Tier 3 expert API: direct access to decomposition factors

create
	make

feature {NONE} -- Initialization

	make (a_lu_matrix: MATRIX; a_permutation: ARRAY [INTEGER])
			-- Create LU decomposition from factors
		require
			matrix_not_void: a_lu_matrix /= Void
			permutation_not_void: a_permutation /= Void
			permutation_valid: a_permutation.count = a_lu_matrix.rows
		do
			lu_matrix := a_lu_matrix
			permutation := a_permutation
		ensure
			matrix_set: lu_matrix = a_lu_matrix
			permutation_set: permutation = a_permutation
		end

feature -- Access

	lu_matrix: MATRIX
		-- Combined LU matrix: L in lower triangle (diag=1), U in upper triangle and diagonal

	permutation: ARRAY [INTEGER]
		-- Permutation array for row swaps

	rows: INTEGER
			-- Number of rows (and columns)
		do
			Result := lu_matrix.rows
		end

feature -- Decomposition Access

	l_factor: MATRIX
			-- Extract lower triangular factor L (with unit diagonal)
		local
			l_arr: ARRAY2 [REAL_64]
			i: INTEGER
			j: INTEGER
		do
			create l_arr.make (rows, rows)
			-- Initialize to zero
			from i := 1 until i > rows loop
				from j := 1 until j > rows loop
					l_arr [i, j] := 0.0
					j := j + 1
				end
				i := i + 1
			end
			-- Fill L from lu_matrix
			from i := 1 until i > rows loop
				from j := 1 until j > i loop
					l_arr [i, j] := lu_matrix.element (i, j)
					j := j + 1
				end
				-- Diagonal of L is 1
				l_arr [i, i] := 1.0
				i := i + 1
			end
			create Result.make_from_array_2d (l_arr)
		ensure
			result_not_void: Result /= Void
			result_square: Result.rows = Result.columns
		end

	u_factor: MATRIX
			-- Extract upper triangular factor U
		local
			l_arr: ARRAY2 [REAL_64]
			i: INTEGER
			j: INTEGER
		do
			create l_arr.make (rows, rows)
			-- Initialize to zero
			from i := 1 until i > rows loop
				from j := 1 until j > rows loop
					l_arr [i, j] := 0.0
					j := j + 1
				end
				i := i + 1
			end
			-- Fill U from lu_matrix (upper triangle and diagonal)
			from i := 1 until i > rows loop
				from j := i until j > rows loop
					l_arr [i, j] := lu_matrix.element (i, j)
					j := j + 1
				end
				i := i + 1
			end
			create Result.make_from_array_2d (l_arr)
		ensure
			result_not_void: Result /= Void
			result_square: Result.rows = Result.columns
		end

end
