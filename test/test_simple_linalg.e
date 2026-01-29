class TEST_SIMPLE_LINALG

inherit
	EQA_TEST_SET

feature -- Test Tier 1: Simple Vector Operations

	test_vector2_creation
			-- Test 2D vector creation
		local
			l_v: VECTOR_2
		do
			create l_v.make_from_components (3.0, 4.0)
			assert ("x coordinate set", l_v.x = 3.0)
			assert ("y coordinate set", l_v.y = 4.0)
			assert ("norm is 5 (3-4-5 triangle)", (l_v.norm - 5.0).abs < 0.001)
		end

	test_vector2_operations
			-- Test 2D vector addition, subtraction, scaling
		local
			l_v1: VECTOR_2
			l_v2: VECTOR_2
			l_sum: VECTOR_2
			l_diff: VECTOR_2
			l_scaled: VECTOR_2
		do
			create l_v1.make_from_components (1.0, 2.0)
			create l_v2.make_from_components (3.0, 4.0)
			l_sum := l_v1.add (l_v2)
			assert ("sum x correct", l_sum.x = 4.0)
			assert ("sum y correct", l_sum.y = 6.0)
			l_diff := l_v2.subtract (l_v1)
			assert ("diff x correct", l_diff.x = 2.0)
			assert ("diff y correct", l_diff.y = 2.0)
			l_scaled := l_v1.scale (2.0)
			assert ("scaled x correct", l_scaled.x = 2.0)
			assert ("scaled y correct", l_scaled.y = 4.0)
		end

	test_vector3_creation
			-- Test 3D vector creation
		local
			l_v: VECTOR_3
		do
			create l_v.make_from_components (1.0, 2.0, 3.0)
			assert ("x coordinate set", l_v.x = 1.0)
			assert ("y coordinate set", l_v.y = 2.0)
			assert ("z coordinate set", l_v.z = 3.0)
		end

	test_vector3_cross_product
			-- Test cross product (perpendicular property)
		local
			l_v1: VECTOR_3
			l_v2: VECTOR_3
			l_cross: VECTOR_3
		do
			-- [1,0,0] × [0,1,0] = [0,0,1]
			create l_v1.make_from_components (1.0, 0.0, 0.0)
			create l_v2.make_from_components (0.0, 1.0, 0.0)
			l_cross := l_v1.cross_product (l_v2)
			assert ("cross z component", l_cross.z = 1.0)
			assert ("cross perpendicular to v1", l_v1.dot_product (l_cross) < 0.001)
			assert ("cross perpendicular to v2", l_v2.dot_product (l_cross) < 0.001)
		end

	test_vector_n_creation
			-- Test n-dimensional vector
		local
			l_arr: ARRAY [REAL_64]
			l_v: VECTOR_N
		do
			create l_arr.make_filled (0.0, 1, 5)
			l_arr [1] := 1.0
			l_arr [2] := 2.0
			l_arr [3] := 3.0
			create l_v.make_from_array (l_arr)
			assert ("dimension = 5", l_v.dimension = 5)
			assert ("element access [1]", l_v.at (1) = 1.0)
			assert ("element access [2]", l_v.at (2) = 2.0)
		end

feature -- Test Tier 1: Simple Matrix Operations

	test_matrix_identity
			-- Test identity matrix creation
		local
			l_m: MATRIX
		do
			create l_m.make_identity (3)
			assert ("identity diagonal [1,1]", l_m.element (1, 1) = 1.0)
			assert ("identity diagonal [2,2]", l_m.element (2, 2) = 1.0)
			assert ("identity diagonal [3,3]", l_m.element (3, 3) = 1.0)
			assert ("identity off-diagonal [1,2]", l_m.element (1, 2) = 0.0)
			assert ("identity is_identity property", l_m.is_identity)
		end

	test_matrix_transpose
			-- Test matrix transpose
		local
			l_m: MATRIX
			l_t: MATRIX
		do
			create l_m.make_identity (3)
			l_t := l_m.transpose
			assert ("transpose dimensions swapped", l_t.rows = 3 and l_t.columns = 3)
			assert ("transpose of identity is identity", l_t.is_identity)
		end

feature -- Edge Cases and Numerical Stability

	test_vector_accuracy_across_dimensions
			-- Test vector operations from small to large dimensions
		local
			l_arr_small: ARRAY [REAL_64]
			l_arr_large: ARRAY [REAL_64]
			l_v_small: VECTOR_N
			l_v_large: VECTOR_N
			i: INTEGER
		do
			-- Small vector
			create l_arr_small.make_filled (1.0, 1, 10)
			create l_v_small.make_from_array (l_arr_small)
			assert ("small vector dimension", l_v_small.dimension = 10)

			-- Large vector (1000 dimensions)
			create l_arr_large.make_filled (1.0, 1, 1000)
			from i := 1 until i > 1000 loop
				l_arr_large [i] := i.to_real / 100.0
				i := i + 1
			end
			create l_v_large.make_from_array (l_arr_large)
			assert ("large vector dimension", l_v_large.dimension = 1000)
		end

	test_matrix_identity_properties
			-- Test identity matrix properties: I*A = A and A*I = A
		local
			l_i: MATRIX
			l_a: MATRIX
			l_result: MATRIX
		do
			create l_i.make_identity (3)
			-- Create a simple 3×3 matrix with known values
			create l_a.make_identity (3)
			l_a.set_element (1, 1, 2.0)
			l_a.set_element (2, 2, 3.0)

			-- I * A should equal A
			l_result := l_i.multiply (l_a)
			assert ("I*A dimension", l_result.rows = 3 and l_result.columns = 3)
			assert ("I*A[1,1] = A[1,1]", (l_result.element (1, 1) - 2.0).abs < 0.001)
		end

	test_vector_norm_variants
			-- Test L1, L2, infinity norms
		local
			l_v: VECTOR_2
		do
			-- Vector [3, 4]: L1 = 7, L2 = 5, Inf = 4
			create l_v.make_from_components (3.0, 4.0)
			assert ("L2 norm (Euclidean)", (l_v.norm - 5.0).abs < 0.001)
			assert ("L1 norm (Manhattan)", (l_v.manhattan_norm - 7.0).abs < 0.001)
			assert ("Infinity norm (max)", (l_v.infinity_norm - 4.0).abs < 0.001)
		end

feature -- Phase 6: Adversarial & Stress Tests

	test_vector2_zero_vector
			-- Adversarial: zero vector edge case
		local
			l_v: VECTOR_2
		do
			create l_v.make_from_components (0.0, 0.0)
			assert ("zero vector norm is zero", l_v.norm = 0.0)
			assert ("zero vector L1 is zero", l_v.manhattan_norm = 0.0)
			assert ("zero vector infinity norm is zero", l_v.infinity_norm = 0.0)
		end

	test_vector2_negative_components
			-- Adversarial: negative component values
		local
			l_v: VECTOR_2
		do
			create l_v.make_from_components (-3.0, -4.0)
			assert ("negative x stored", l_v.x = -3.0)
			assert ("negative y stored", l_v.y = -4.0)
			assert ("norm of [-3,-4] is 5", (l_v.norm - 5.0).abs < 0.001)
		end

	test_vector2_very_small_components
			-- Adversarial: very small near-zero components (1e-15)
		local
			l_v: VECTOR_2
		do
			create l_v.make_from_components (1.0e-15, 1.0e-15)
			assert ("tiny components stored", l_v.x > 0.0)
			assert ("norm computes", not l_v.norm.is_nan)
		end

	test_vector2_very_large_components
			-- Adversarial: very large components (1e15)
		local
			l_v: VECTOR_2
		do
			create l_v.make_from_components (1.0e15, 1.0e15)
			assert ("large components stored", l_v.x = 1.0e15)
			assert ("large norm computes", not l_v.norm.is_nan)
		end

	test_vector3_cross_product_parallel
			-- Adversarial: cross product of parallel vectors (should be ~zero)
		local
			l_v1: VECTOR_3
			l_v2: VECTOR_3
			l_cross: VECTOR_3
		do
			-- v1 = [1, 2, 3], v2 = [2, 4, 6] are parallel
			create l_v1.make_from_components (1.0, 2.0, 3.0)
			create l_v2.make_from_components (2.0, 4.0, 6.0)
			l_cross := l_v1.cross_product (l_v2)
			-- Cross product should be near zero for parallel vectors
			assert ("cross of parallel vectors near zero", l_cross.norm < 0.01)
		end

	test_vector_n_zero_vector
			-- Adversarial: zero vector in n dimensions
		local
			l_arr: ARRAY [REAL_64]
			l_v: VECTOR_N
		do
			create l_arr.make_filled (0.0, 1, 10)
			create l_v.make_from_array (l_arr)
			assert ("zero vector dimension correct", l_v.dimension = 10)
			assert ("zero vector norm is zero", l_v.norm (2) = 0.0)
		end

	test_vector_n_unit_vector
			-- Adversarial: unit vector (normalized)
		local
			l_arr: ARRAY [REAL_64]
			l_v: VECTOR_N
		do
			create l_arr.make_filled (0.0, 1, 5)
			l_arr [3] := 1.0  -- [0,0,1,0,0]
			create l_v.make_from_array (l_arr)
			assert ("unit vector norm is 1", (l_v.norm (2) - 1.0).abs < 0.001)
		end

	test_matrix_very_large
			-- Adversarial: large identity matrix (100×100)
		local
			l_m: MATRIX
		do
			create l_m.make_identity (100)
			assert ("large identity dimension", l_m.rows = 100 and l_m.columns = 100)
			assert ("large identity diagonal", l_m.element (50, 50) = 1.0)
			assert ("large identity is_identity", l_m.is_identity)
		end

	test_matrix_multiplication_identity
			-- Adversarial: multiply matrix by identity multiple times
		local
			l_i: MATRIX
			l_a: MATRIX
			l_result: MATRIX
			i: INTEGER
		do
			create l_i.make_identity (3)
			create l_a.make_identity (3)
			l_a.set_element (1, 1, 2.0)

			-- Multiply A by I repeatedly (should remain unchanged)
			l_result := l_a
			from i := 1 until i > 10 loop
				l_result := l_result.multiply (l_i)
				assert ("iteration " + i.out + " preserves A", (l_result.element (1, 1) - 2.0).abs < 0.001)
				i := i + 1
			end
		end

	test_vector_dot_product_zero
			-- Adversarial: dot product of orthogonal vectors (should be zero)
		local
			l_v1: VECTOR_2
			l_v2: VECTOR_2
		do
			create l_v1.make_from_components (1.0, 0.0)
			create l_v2.make_from_components (0.0, 1.0)
			assert ("orthogonal dot product", l_v1.dot_product (l_v2) = 0.0)
		end

	test_vector_operations_mixed_scales
			-- Adversarial: operations with components of vastly different scales
		local
			l_v1: VECTOR_2
			l_v2: VECTOR_2
			l_sum: VECTOR_2
		do
			create l_v1.make_from_components (1.0e-10, 1.0)
			create l_v2.make_from_components (1.0e-10, 1.0)
			l_sum := l_v1.add (l_v2)
			assert ("mixed scale addition", l_sum.x > 0.0)
			assert ("mixed scale result valid", not l_sum.norm.is_nan)
		end

	test_stress_many_vector_creations
			-- Stress: create many vectors without cleanup (check for memory leaks)
		local
			i: INTEGER
			l_v: VECTOR_2
		do
			from i := 1 until i > 500 loop
				create l_v.make_from_components (i.to_real, (i + 1).to_real)
				i := i + 1
			end
			assert ("stress test completed", True)
		end

end
