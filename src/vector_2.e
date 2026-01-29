class VECTOR_2
	-- 2D vector for high-performance specialized operations
	-- Immutable: enables SCOOP concurrent use

create
	make_from_components

feature {NONE} -- Initialization

	make_from_components (a_x: REAL_64; a_y: REAL_64)
			-- Create vector from components
		require
			x_valid: not a_x.is_nan
			y_valid: not a_y.is_nan
		do
			x_coord := a_x
			y_coord := a_y
		ensure
			x_set: x = a_x
			y_set: y = a_y
		end

feature -- Access

	x: REAL_64
			-- X component
		do Result := x_coord end

	y: REAL_64
			-- Y component
		do Result := y_coord end

	at (index: INTEGER): REAL_64
			-- Access component by index (1=x, 2=y)
		require
			index_valid: index >= 1 and index <= 2
		do
			if index = 1 then Result := x_coord else Result := y_coord end
		ensure
			result_valid: not Result.is_nan
			correct_value: (index = 1 implies Result = x) and (index = 2 implies Result = y)
		end

feature -- Vector Operations

	dot_product (other: VECTOR_2): REAL_64
			-- Dot product with another 2D vector
		require
			other_valid: other /= Void
		do
			Result := x_coord * other.x + y_coord * other.y
		ensure
			result_valid: not Result.is_nan
		end

	norm: REAL_64
			-- Euclidean norm (L2, length)
		local
			l_math: SIMPLE_MATH
		do
			create l_math.make
			Result := l_math.sqrt (x_coord * x_coord + y_coord * y_coord)
		ensure
			result_non_negative: Result >= 0.0
			result_valid: not Result.is_nan
		end

	manhattan_norm: REAL_64
			-- L1 norm (sum of absolute values)
		do
			Result := x_coord.abs + y_coord.abs
		ensure
			result_non_negative: Result >= 0.0
			result_valid: not Result.is_nan
		end

	infinity_norm: REAL_64
			-- Infinity norm (max absolute value)
		local
			l_abs_x: REAL_64
			l_abs_y: REAL_64
		do
			l_abs_x := x_coord.abs
			l_abs_y := y_coord.abs
			if l_abs_x >= l_abs_y then
				Result := l_abs_x
			else
				Result := l_abs_y
			end
		ensure
			result_non_negative: Result >= 0.0
			result_valid: not Result.is_nan
		end

	add (other: VECTOR_2): VECTOR_2
			-- Element-wise addition
		require
			other_valid: other /= Void
		do
			create Result.make_from_components (x_coord + other.x, y_coord + other.y)
		ensure
			result_valid: Result /= Void
			result_x: Result.x = x + other.x
			result_y: Result.y = y + other.y
		end

	subtract (other: VECTOR_2): VECTOR_2
			-- Element-wise subtraction
		require
			other_valid: other /= Void
		do
			create Result.make_from_components (x_coord - other.x, y_coord - other.y)
		ensure
			result_valid: Result /= Void
			result_x: Result.x = x - other.x
			result_y: Result.y = y - other.y
		end

	scale (factor: REAL_64): VECTOR_2
			-- Scalar multiplication
		require
			factor_valid: not factor.is_nan
		do
			create Result.make_from_components (x_coord * factor, y_coord * factor)
		ensure
			result_valid: Result /= Void
			result_x: Result.x = x * factor
			result_y: Result.y = y * factor
		end

feature -- Normalization

	normalized: VECTOR_2
			-- Return unit vector in same direction
		require
			not_zero_vector: norm > 0.0
		local
			l_mag: REAL_64
		do
			l_mag := norm
			create Result.make_from_components (x_coord / l_mag, y_coord / l_mag)
		ensure
			result_valid: Result /= Void
			result_unit: (Result.norm - 1.0).abs < 1.0e-10
		end

feature {NONE}

	x_coord: REAL_64
	y_coord: REAL_64

invariant
	x_valid: not x_coord.is_nan
	y_valid: not y_coord.is_nan

end
