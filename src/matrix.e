note
	description: "Matrix class: M x N real-valued matrix stored in column-major order"

class MATRIX

create
	make_identity,
	make_from_array_2d

feature {NONE}

	make_identity (a_n: INTEGER)
			-- Create n x n identity matrix
		require
			size_positive: a_n > 0
		do
			rows := a_n
			columns := a_n
			create data.make_filled (0.0, 1, a_n * a_n)
			-- Set diagonal to 1
			across 1 |..| a_n as i loop
				set_element (i, i, 1.0)
			end
		end

	make_from_array_2d (a_arr: ARRAY2 [REAL_64])
			-- Create matrix from 2D array (row-major input, convert to column-major)
		require
			array_valid: a_arr /= Void
		do
			rows := a_arr.height
			columns := a_arr.width
			create data.make_filled (0.0, 1, rows * columns)
			-- Copy in column-major order
			across 1 |..| columns as col loop
				across 1 |..| rows as row loop
					set_element (row, col, a_arr [row, col])
				end
			end
		end

feature -- Dimensions

	rows: INTEGER
	columns: INTEGER

feature -- Element Access

	element (a_row: INTEGER; col: INTEGER): REAL_64
			-- Get element at [row, col]
		require
			row_valid: a_row >= 1 and a_row <= rows
			col_valid: col >= 1 and col <= columns
		do
			Result := data [col_index (a_row, col)]
		ensure
			result_valid: not Result.is_nan
		end

	set_element (a_row: INTEGER; col: INTEGER; value: REAL_64)
			-- Set element at [row, col]
		require
			row_valid: a_row >= 1 and a_row <= rows
			col_valid: col >= 1 and col <= columns
		do
			data [col_index (a_row, col)] := value
		end

feature -- Matrix Operations

	transpose: MATRIX
			-- Transpose M^T
		do
			create Result.make_from_array_2d (create {ARRAY2 [REAL_64]}.make_filled (0.0, columns, rows))
			across 1 |..| rows as r loop
				across 1 |..| columns as c loop
					Result.set_element (c, r, element (r, c))
				end
			end
		ensure
			result_valid: Result /= Void
			dimensions_swapped: Result.rows = columns and Result.columns = rows
		end

	multiply (a_other: MATRIX): MATRIX
			-- Matrix product C = A * B
		require
			other_valid: a_other /= Void
			dimensions_compatible: columns = a_other.rows
		local
			l_sum: REAL_64
		do
			create Result.make_from_array_2d (create {ARRAY2 [REAL_64]}.make_filled (0.0, rows, a_other.columns))
			across 1 |..| rows as i loop
				across 1 |..| a_other.columns as j loop
					l_sum := 0.0
					across 1 |..| columns as k loop
						l_sum := l_sum + element (i, k) * a_other.element (k, j)
					end
					Result.set_element (i, j, l_sum)
				end
			end
		ensure
			result_valid: Result /= Void
			result_dimensions: Result.rows = rows and Result.columns = a_other.columns
		end

	subtract (a_other: MATRIX): MATRIX
			-- Element-wise subtraction C = A - B
		require
			other_valid: a_other /= Void
			same_dimensions: rows = a_other.rows and columns = a_other.columns
		do
			create Result.make_from_array_2d (create {ARRAY2 [REAL_64]}.make_filled (0.0, rows, columns))
			across 1 |..| rows as r loop
				across 1 |..| columns as c loop
					Result.set_element (r, c, element (r, c) - a_other.element (r, c))
				end
			end
		ensure
			result_valid: Result /= Void
		end

	determinant: REAL_64
			-- Determinant of matrix (via LU decomposition)
		require
			square: rows = columns
		do
			Result := 0.0  -- Stub - Phase 1
		ensure
			result_valid: not Result.is_nan
		end

	inverse: MATRIX
			-- Matrix inverse via LU decomposition
			-- Phase 1: Stub only. Phase 2: Implement via LU decomposition
		require
			square: rows = columns
		do
			-- Stub - Phase 1
			Result := create {MATRIX}.make_identity (rows)
		ensure
			result_valid: Result /= Void
		end

	solve (a_rhs: VECTOR_N): VECTOR_N
			-- Solve Ax = b via LU decomposition
		require
			square: rows = columns
			compatible: rows = a_rhs.dimension
			well_conditioned: condition_number <= 1.0e12
		do
			-- Stub - Phase 1
			create Result.make_from_array (<<0.0>>)
		ensure
			result_valid: Result /= Void
		end

	condition_number: REAL_64
			-- Condition number κ(M) - estimate
		require
			square: rows = columns
		do
			Result := 1.0  -- Stub - Phase 1, should compute via LU
		ensure
			result_valid: not Result.is_nan and Result >= 1.0
		end

	is_identity: BOOLEAN
			-- Is this the identity matrix?
		do
			Result := True
			across 1 |..| rows as r loop
				across 1 |..| columns as c loop
					if r = c then
						if (element (r, c) - 1.0).abs > 1.0e-10 then Result := False end
					else
						if element (r, c).abs > 1.0e-10 then Result := False end
					end
				end
			end
		end

	dominant_eigenvalue: REAL_64
			-- Dominant (largest magnitude) eigenvalue via power iteration
		require
			square: rows = columns
		do
			Result := 0.0  -- Stub - Phase 1
		ensure
			result_valid: not Result.is_nan
		end

	dominant_eigenvector: VECTOR_N
			-- Eigenvector for dominant eigenvalue
		require
			square: rows = columns
		do
			create Result.make_from_array (<<1.0>>)  -- Stub
		ensure
			result_valid: Result /= Void
		end

feature {NONE}

	data: ARRAY [REAL_64]  -- Column-major storage

	col_index (a_row: INTEGER; col: INTEGER): INTEGER
			-- Linear index for column-major storage
		do
			Result := (col - 1) * rows + a_row
		end

end
