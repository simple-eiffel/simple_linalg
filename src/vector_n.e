note
	description: "N-dimensional vector"

class VECTOR_N

create
	make_from_array

feature {NONE}

	make_from_array (a_arr: ARRAY [REAL_64])
			-- Create vector from array
		require
			array_valid: a_arr /= Void and a_arr.count > 0
		local
			l_idx: INTEGER
		do
			create components.make (1, a_arr.count)
			l_idx := 1
			across a_arr as ic loop
				components [l_idx] := ic.item
				l_idx := l_idx + 1
			end
		end

feature -- Access

	dimension: INTEGER
		do Result := components.count end

	at (a_index: INTEGER): REAL_64
			-- Access component by 1-based index
		require
			index_valid: a_index >= 1 and a_index <= dimension
		do
			Result := components [a_index]
		ensure
			result_valid: not Result.is_nan
		end

feature -- Vector Operations

	dot_product (a_other: VECTOR_N): REAL_64
			-- Dot product v · w
		require
			other_valid: a_other /= Void
			same_dimension: dimension = a_other.dimension
		do
			Result := 0.0
			across 1 |..| dimension as i loop
				Result := Result + components [i] * a_other.at (i)
			end
		ensure
			result_valid: not Result.is_nan
		end

	norm (a_norm_type: INTEGER): REAL_64
			-- Vector norm: 1=L1, 2=L2 (Euclidean), 3=Infinity
		require
			norm_type_valid: a_norm_type >= 1 and a_norm_type <= 3
		local
			l_sum: REAL_64
			l_math: SIMPLE_MATH
			l_max: REAL_64
		do
			if a_norm_type = 1 then
				-- L1 norm: sum of absolute values
				Result := 0.0
				across 1 |..| dimension as i loop
					Result := Result + components [i].abs
				end
			elseif a_norm_type = 2 then
				-- L2 norm (Euclidean): sqrt(sum of squares)
				l_sum := 0.0
				across 1 |..| dimension as i loop
					l_sum := l_sum + components [i] * components [i]
				end
				create l_math.make
				Result := l_math.sqrt (l_sum)
			else
				-- Infinity norm: max absolute value
				l_max := 0.0
				across 1 |..| dimension as i loop
					if components [i].abs > l_max then l_max := components [i].abs end
				end
				Result := l_max
			end
		ensure
			result_valid: not Result.is_nan
			result_non_negative: Result >= 0.0
		end

	add (a_other: VECTOR_N): VECTOR_N
			-- Element-wise addition
		require
			other_valid: a_other /= Void
			same_dimension: dimension = a_other.dimension
		local
			l_result_array: ARRAY [REAL_64]
			l_idx: INTEGER
		do
			create l_result_array.make_filled (0.0, 1, dimension)
			from l_idx := 1 until l_idx > dimension loop
				l_result_array [l_idx] := components [l_idx] + a_other.at (l_idx)
				l_idx := l_idx + 1
			end
			create Result.make_from_array (l_result_array)
		ensure
			result_valid: Result /= Void
			result_dimension: Result.dimension = dimension
		end

	subtract (a_other: VECTOR_N): VECTOR_N
			-- Element-wise subtraction
		require
			other_valid: a_other /= Void
			same_dimension: dimension = a_other.dimension
		local
			l_result_array: ARRAY [REAL_64]
			l_idx: INTEGER
		do
			create l_result_array.make_filled (0.0, 1, dimension)
			from l_idx := 1 until l_idx > dimension loop
				l_result_array [l_idx] := components [l_idx] - a_other.at (l_idx)
				l_idx := l_idx + 1
			end
			create Result.make_from_array (l_result_array)
		ensure
			result_valid: Result /= Void
			result_dimension: Result.dimension = dimension
		end

	scale (a_factor: REAL_64): VECTOR_N
			-- Scalar multiplication
		local
			l_result_array: ARRAY [REAL_64]
			l_idx: INTEGER
		do
			create l_result_array.make_filled (0.0, 1, dimension)
			from l_idx := 1 until l_idx > dimension loop
				l_result_array [l_idx] := components [l_idx] * a_factor
				l_idx := l_idx + 1
			end
			create Result.make_from_array (l_result_array)
		ensure
			result_valid: Result /= Void
			result_dimension: Result.dimension = dimension
		end

feature {VECTOR_N}

	components: ARRAY [REAL_64]

end
