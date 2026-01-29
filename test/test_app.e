note
	description: "Test runner for simple_linalg"

class TEST_APP

create
	make

feature {NONE}

	make
			-- Run all tests
		local
			l_test_suite: TEST_SIMPLE_LINALG
		do
			print ("simple_linalg test suite%N")
			print ("Phase 5: Test Verification%N%N")

			create l_test_suite

			-- Vector tests
			print ("=== Vector Operations ===%N")
			safe_run_test (agent l_test_suite.test_vector2_creation, "vector2_creation")
			safe_run_test (agent l_test_suite.test_vector2_operations, "vector2_operations")
			safe_run_test (agent l_test_suite.test_vector3_creation, "vector3_creation")
			safe_run_test (agent l_test_suite.test_vector3_cross_product, "vector3_cross_product")
			safe_run_test (agent l_test_suite.test_vector_n_creation, "vector_n_creation")

			-- Matrix tests
			print ("%N=== Matrix Operations ===%N")
			safe_run_test (agent l_test_suite.test_matrix_identity, "matrix_identity")
			safe_run_test (agent l_test_suite.test_matrix_transpose, "matrix_transpose")

			-- Edge cases
			print ("%N=== Edge Cases & Properties ===%N")
			safe_run_test (agent l_test_suite.test_vector_accuracy_across_dimensions, "vector_accuracy_across_dimensions")
			safe_run_test (agent l_test_suite.test_matrix_identity_properties, "matrix_identity_properties")
			safe_run_test (agent l_test_suite.test_vector_norm_variants, "vector_norm_variants")

			-- Adversarial & Stress Tests (Phase 6)
			print ("%N=== Phase 6: Adversarial & Stress Tests ===%N")
			safe_run_test (agent l_test_suite.test_vector2_zero_vector, "vector2_zero_vector")
			safe_run_test (agent l_test_suite.test_vector2_negative_components, "vector2_negative_components")
			safe_run_test (agent l_test_suite.test_vector2_very_small_components, "vector2_very_small_components")
			safe_run_test (agent l_test_suite.test_vector2_very_large_components, "vector2_very_large_components")
			safe_run_test (agent l_test_suite.test_vector3_cross_product_parallel, "vector3_cross_product_parallel")
			safe_run_test (agent l_test_suite.test_vector_n_zero_vector, "vector_n_zero_vector")
			safe_run_test (agent l_test_suite.test_vector_n_unit_vector, "vector_n_unit_vector")
			safe_run_test (agent l_test_suite.test_matrix_very_large, "matrix_very_large")
			safe_run_test (agent l_test_suite.test_matrix_multiplication_identity, "matrix_multiplication_identity")
			safe_run_test (agent l_test_suite.test_vector_dot_product_zero, "vector_dot_product_zero")
			safe_run_test (agent l_test_suite.test_vector_operations_mixed_scales, "vector_operations_mixed_scales")
			safe_run_test (agent l_test_suite.test_stress_many_vector_creations, "stress_many_vector_creations")

			print ("%N=== Summary ===%N")
			print ("Phase 6 hardening verification complete%N")
		end

	safe_run_test (test: PROCEDURE; test_name: STRING)
			-- Run a test safely and catch exceptions
		do
			print ("  ✓ " + test_name)
			test.call (Void)
			print (" - PASS%N")
		rescue
			print (" - FAIL%N")
		end

end
