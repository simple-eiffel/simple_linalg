#include "eif_eiffel.h"
#include "eif_rout_obj.h"
#include "eaddress.h"

#ifdef __cplusplus
extern "C" {
#endif

	/* SIMPLE_SORTER [REAL_64] compare_by_keys */
EIF_TYPED_VALUE _A709_66_2_3 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(107, "compare_by_keys", closed [1].it_r))(closed [1].it_r, open [1], open [2], closed [2], closed [3]);
}

	/* SIMPLE_STATISTICS real_identity */
EIF_TYPED_VALUE _A5_63_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(203, "real_identity", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EQA_SYSTEM_PATH extend */
void _A9_43_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(239, "extend", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* TEST_SIMPLE_LINALG test_vector2_creation */
void _A54_51 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1088, "test_vector2_creation", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_SIMPLE_LINALG test_vector2_operations */
void _A54_52 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1089, "test_vector2_operations", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_SIMPLE_LINALG test_vector3_creation */
void _A54_53 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1090, "test_vector3_creation", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_SIMPLE_LINALG test_vector3_cross_product */
void _A54_54 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1091, "test_vector3_cross_product", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_SIMPLE_LINALG test_vector_n_creation */
void _A54_55 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1092, "test_vector_n_creation", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_SIMPLE_LINALG test_matrix_identity */
void _A54_56 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1093, "test_matrix_identity", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_SIMPLE_LINALG test_matrix_transpose */
void _A54_57 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1094, "test_matrix_transpose", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_SIMPLE_LINALG test_vector_accuracy_across_dimensions */
void _A54_58 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1095, "test_vector_accuracy_across_dimensions", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_SIMPLE_LINALG test_matrix_identity_properties */
void _A54_59 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1096, "test_matrix_identity_properties", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_SIMPLE_LINALG test_vector_norm_variants */
void _A54_60 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1097, "test_vector_norm_variants", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_SIMPLE_LINALG test_vector2_zero_vector */
void _A54_61 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1098, "test_vector2_zero_vector", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_SIMPLE_LINALG test_vector2_negative_components */
void _A54_62 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1099, "test_vector2_negative_components", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_SIMPLE_LINALG test_vector2_very_small_components */
void _A54_63 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1100, "test_vector2_very_small_components", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_SIMPLE_LINALG test_vector2_very_large_components */
void _A54_64 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1101, "test_vector2_very_large_components", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_SIMPLE_LINALG test_vector3_cross_product_parallel */
void _A54_65 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1102, "test_vector3_cross_product_parallel", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_SIMPLE_LINALG test_vector_n_zero_vector */
void _A54_66 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1103, "test_vector_n_zero_vector", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_SIMPLE_LINALG test_vector_n_unit_vector */
void _A54_67 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1104, "test_vector_n_unit_vector", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_SIMPLE_LINALG test_matrix_very_large */
void _A54_68 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1105, "test_matrix_very_large", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_SIMPLE_LINALG test_matrix_multiplication_identity */
void _A54_69 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1106, "test_matrix_multiplication_identity", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_SIMPLE_LINALG test_vector_dot_product_zero */
void _A54_70 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1107, "test_vector_dot_product_zero", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_SIMPLE_LINALG test_vector_operations_mixed_scales */
void _A54_71 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1108, "test_vector_operations_mixed_scales", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_SIMPLE_LINALG test_stress_many_vector_creations */
void _A54_72 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1109, "test_stress_many_vector_creations", closed [1].it_r))(closed [1].it_r);
}

	/* MML_SET [REAL_64] has */
EIF_TYPED_VALUE _A657_35_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1792, "has", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* MML_SET [G#1] has */
EIF_TYPED_VALUE _A721_35_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1792, "has", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* MML_SET [INTEGER_32] has */
EIF_TYPED_VALUE _A1008_35_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1792, "has", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EQA_TEST_EVALUATOR [G#1] inline-agent#1 of execute */
EIF_TYPED_VALUE _A1007_271 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) F1007_7114)(closed [1].it_r);
}

	/* PROCEDURE [G#1] call */
void _A289_140 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4713, "call", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* EQA_TEST_SET clean */
void _A53_39 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1076, "clean", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* EQA_EVALUATOR invoke_routine */
void _A189_208_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1733, "invoke_routine", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* RT_DBG_CALL_RECORD inline-agent#1 of record_fields */
void _A204_159_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) F204_7139)(closed [1].it_r, open [1]);
}

	/* MISMATCH_INFORMATION wipe_out */
void A214_98 (EIF_REFERENCE Current)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3151, "wipe_out", Current))(Current);
}

	/* MISMATCH_INFORMATION internal_put */
void A214_162 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2)
{
	EIF_TYPED_VALUE u [2];
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3868, "internal_put", Current))(Current, ((u [0].type = SK_REF), (u [0].it_r = arg1), u [0]), ((u [1].type = SK_POINTER), (u [1].it_p = arg2), u [1]));
}

	/* MISMATCH_INFORMATION set_string_versions */
void A214_163 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	EIF_TYPED_VALUE u [2];
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3869, "set_string_versions", Current))(Current, ((u [0].type = SK_POINTER), (u [0].it_p = arg1), u [0]), ((u [1].type = SK_POINTER), (u [1].it_p = arg2), u [1]));
}


static fnptr feif_address_table[] = {
(fnptr)0,
(fnptr)A214_98,
(fnptr)A214_162,
(fnptr)A214_163,
};

fnptr *egc_address_table_init = feif_address_table;



#ifdef __cplusplus
}
#endif
