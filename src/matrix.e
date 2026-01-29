note
	description: "Matrix class: M x N real-valued matrix stored in column-major order"

class MATRIX

create
	make_identity,
	make_from_array_2d

feature {NONE}

	make_identity (n: INTEGER)
			-- Create n x n identity matrix
		require
			size_positive: n > 0
		do
			rows := n
			columns := n
			create data.make_filled (0.0, 1, n * n)
			-- Set diagonal to 1
			across 1 |..| n as i loop
				set_element (i, i, 1.0)
			end
		end

	make_from_array_2d (arr: ARRAY2 [REAL_64])
			-- Create matrix from 2D array (row-major input, convert to column-major)
		require
			array_valid: arr /= Void
		do
			rows := arr.height
			columns := arr.width
			create data.make_filled (0.0, 1, rows * columns)
			-- Copy in column-major order
			across 1 |..| columns as col loop
				across 1 |..| rows as row loop
					set_element (row, col, arr [row, col])
				end
			end
		end

feature -- Dimensions

	rows: INTEGER
	columns: INTEGER

feature -- Element Access

	element (row: INTEGER; col: INTEGER): REAL_64
			-- Get element at [row, col]
		require
			row_valid: row >= 1 and row <= rows
			col_valid: col >= 1 and col <= columns
		do
			Result := data [col_index (row, col)]
		ensure
			result_valid: not Result.is_nan
		end

	set_element (row: INTEGER; col: INTEGER; value: REAL_64)
			-- Set element at [row, col]
		require
			row_valid: row >= 1 and row <= rows
			col_valid: col >= 1 and col <= columns
		do
			data [col_index (row, col)] := value
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

	multiply (other: MATRIX): MATRIX
			-- Matrix product C = A * B
		require
			other_valid: other /= Void
			dimensions_compatible: columns = other.rows
		local
			l_sum: REAL_64
		do
			create Result.make_from_array_2d (create {ARRAY2 [REAL_64]}.make_filled (0.0, rows, other.columns))
			across 1 |..| rows as i loop
				across 1 |..| other.columns as j loop
					l_sum := 0.0
					across 1 |..| columns as k loop
						l_sum := l_sum + element (i, k) * other.element (k, j)
					end
					Result.set_element (i, j, l_sum)
				end
			end
		ensure
			result_valid: Result /= Void
			result_dimensions: Result.rows = rows and Result.columns = other.columns
		end

	subtract (other: MATRIX): MATRIX
			-- Element-wise subtraction C = A - B
		require
			other_valid: other /= Void
			same_dimensions: rows = other.rows and columns = other.columns
		do
			create Result.make_from_array_2d (create {ARRAY2 [REAL_64]}.make_filled (0.0, rows, columns))
			across 1 |..| rows as r loop
				across 1 |..| columns as c loop
					Result.set_element (r, c, element (r, c) - other.element (r, c))
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

	solve (rhs: VECTOR_N): VECTOR_N
			-- Solve Ax = b via LU decomposition
		require
			square: rows = columns
			compatible: rows = rhs.dimension
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

	col_index (row: INTEGER; col: INTEGER): INTEGER
			-- Linear index for column-major storage
		do
			Result := (col - 1) * rows + row
		end

end
