/*
 * Code for class TEST_APP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F34_880(EIF_REFERENCE);
extern void F34_881(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void EIF_Minit34(void);
extern EIF_REFERENCE _A54_52();
extern EIF_REFERENCE _A54_63();
extern EIF_REFERENCE _A54_57();
extern EIF_REFERENCE _A54_68();
extern EIF_REFERENCE _A54_51();
extern EIF_REFERENCE _A54_62();
extern EIF_REFERENCE _A54_56();
extern EIF_REFERENCE _A54_67();
extern EIF_REFERENCE _A54_61();
extern EIF_REFERENCE _A54_72();
extern EIF_REFERENCE _A54_55();
extern EIF_REFERENCE _A54_66();
extern EIF_REFERENCE _A54_60();
extern EIF_REFERENCE _A54_71();
extern EIF_REFERENCE _A54_54();
extern EIF_REFERENCE _A54_65();
extern EIF_REFERENCE _A54_59();
extern EIF_REFERENCE _A54_70();
extern EIF_REFERENCE _A54_53();
extern EIF_REFERENCE _A54_64();
extern EIF_REFERENCE _A54_58();
extern EIF_REFERENCE _A54_69();

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {TEST_APP}.make */
void F34_880 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLR(6,ur2);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 33, Current, 1, 0, 935);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(33, Current, 935);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("simple_linalg test suite\012",25,1094222090);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTHOOK(2);
	tr1 = RTMS_EX_H("Phase 5: Test Verification\012\012",28,1049309194);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTHOOK(3);
	RTDBGAL(1, 0xF8000035, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(53, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(3,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	tr1 = RTMS_EX_H("=== Vector Operations ===\012",26,2141067530);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTHOOK(5);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,217,0xFF01,53,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = loc1;
	RTAR(tr1,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,288,0xFF01,0xFFF9,0,217,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2= RTLNRW(typres0.id, 0, (EIF_POINTER) _A54_51, (EIF_POINTER)(0),1088, 0, 0, 1, -1, tr1, 0);
	}
	ur1 = RTCCL(tr2);
	tr3 = RTMS_EX_H("vector2_creation",16,1757274478);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(878, dtype))(Current, ur1x, ur2x);
	RTHOOK(6);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,217,0xFF01,53,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = loc1;
	RTAR(tr1,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,288,0xFF01,0xFFF9,0,217,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2= RTLNRW(typres0.id, 0, (EIF_POINTER) _A54_52, (EIF_POINTER)(0),1089, 0, 0, 1, -1, tr1, 0);
	}
	ur1 = RTCCL(tr2);
	tr3 = RTMS_EX_H("vector2_operations",18,209331315);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(878, dtype))(Current, ur1x, ur2x);
	RTHOOK(7);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,217,0xFF01,53,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = loc1;
	RTAR(tr1,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,288,0xFF01,0xFFF9,0,217,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2= RTLNRW(typres0.id, 0, (EIF_POINTER) _A54_53, (EIF_POINTER)(0),1090, 0, 0, 1, -1, tr1, 0);
	}
	ur1 = RTCCL(tr2);
	tr3 = RTMS_EX_H("vector3_creation",16,1824410222);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(878, dtype))(Current, ur1x, ur2x);
	RTHOOK(8);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,217,0xFF01,53,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = loc1;
	RTAR(tr1,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,288,0xFF01,0xFFF9,0,217,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2= RTLNRW(typres0.id, 0, (EIF_POINTER) _A54_54, (EIF_POINTER)(0),1091, 0, 0, 1, -1, tr1, 0);
	}
	ur1 = RTCCL(tr2);
	tr3 = RTMS_EX_H("vector3_cross_product",21,44732788);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(878, dtype))(Current, ur1x, ur2x);
	RTHOOK(9);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,217,0xFF01,53,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = loc1;
	RTAR(tr1,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,288,0xFF01,0xFFF9,0,217,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2= RTLNRW(typres0.id, 0, (EIF_POINTER) _A54_55, (EIF_POINTER)(0),1092, 0, 0, 1, -1, tr1, 0);
	}
	ur1 = RTCCL(tr2);
	tr3 = RTMS_EX_H("vector_n_creation",17,262746990);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(878, dtype))(Current, ur1x, ur2x);
	RTHOOK(10);
	tr1 = RTMS_EX_H("\012=== Matrix Operations ===\012",27,1349864714);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTHOOK(11);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,217,0xFF01,53,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = loc1;
	RTAR(tr1,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,288,0xFF01,0xFFF9,0,217,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2= RTLNRW(typres0.id, 0, (EIF_POINTER) _A54_56, (EIF_POINTER)(0),1093, 0, 0, 1, -1, tr1, 0);
	}
	ur1 = RTCCL(tr2);
	tr3 = RTMS_EX_H("matrix_identity",15,1385065337);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(878, dtype))(Current, ur1x, ur2x);
	RTHOOK(12);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,217,0xFF01,53,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = loc1;
	RTAR(tr1,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,288,0xFF01,0xFFF9,0,217,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2= RTLNRW(typres0.id, 0, (EIF_POINTER) _A54_57, (EIF_POINTER)(0),1094, 0, 0, 1, -1, tr1, 0);
	}
	ur1 = RTCCL(tr2);
	tr3 = RTMS_EX_H("matrix_transpose",16,1145907557);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(878, dtype))(Current, ur1x, ur2x);
	RTHOOK(13);
	tr1 = RTMS_EX_H("\012=== Edge Cases & Properties ===\012",33,441849098);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTHOOK(14);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,217,0xFF01,53,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = loc1;
	RTAR(tr1,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,288,0xFF01,0xFFF9,0,217,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2= RTLNRW(typres0.id, 0, (EIF_POINTER) _A54_58, (EIF_POINTER)(0),1095, 0, 0, 1, -1, tr1, 0);
	}
	ur1 = RTCCL(tr2);
	tr3 = RTMS_EX_H("vector_accuracy_across_dimensions",33,920244083);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(878, dtype))(Current, ur1x, ur2x);
	RTHOOK(15);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,217,0xFF01,53,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = loc1;
	RTAR(tr1,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,288,0xFF01,0xFFF9,0,217,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2= RTLNRW(typres0.id, 0, (EIF_POINTER) _A54_59, (EIF_POINTER)(0),1096, 0, 0, 1, -1, tr1, 0);
	}
	ur1 = RTCCL(tr2);
	tr3 = RTMS_EX_H("matrix_identity_properties",26,2038377843);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(878, dtype))(Current, ur1x, ur2x);
	RTHOOK(16);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,217,0xFF01,53,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = loc1;
	RTAR(tr1,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,288,0xFF01,0xFFF9,0,217,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2= RTLNRW(typres0.id, 0, (EIF_POINTER) _A54_60, (EIF_POINTER)(0),1097, 0, 0, 1, -1, tr1, 0);
	}
	ur1 = RTCCL(tr2);
	tr3 = RTMS_EX_H("vector_norm_variants",20,1932410227);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(878, dtype))(Current, ur1x, ur2x);
	RTHOOK(17);
	tr1 = RTMS_EX_H("\012=== Phase 6: Adversarial & Stress Tests ===\012",45,937677066);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTHOOK(18);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,217,0xFF01,53,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = loc1;
	RTAR(tr1,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,288,0xFF01,0xFFF9,0,217,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2= RTLNRW(typres0.id, 0, (EIF_POINTER) _A54_61, (EIF_POINTER)(0),1098, 0, 0, 1, -1, tr1, 0);
	}
	ur1 = RTCCL(tr2);
	tr3 = RTMS_EX_H("vector2_zero_vector",19,949254258);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(878, dtype))(Current, ur1x, ur2x);
	RTHOOK(19);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,217,0xFF01,53,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = loc1;
	RTAR(tr1,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,288,0xFF01,0xFFF9,0,217,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2= RTLNRW(typres0.id, 0, (EIF_POINTER) _A54_62, (EIF_POINTER)(0),1099, 0, 0, 1, -1, tr1, 0);
	}
	ur1 = RTCCL(tr2);
	tr3 = RTMS_EX_H("vector2_negative_components",27,1562253939);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(878, dtype))(Current, ur1x, ur2x);
	RTHOOK(20);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,217,0xFF01,53,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = loc1;
	RTAR(tr1,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,288,0xFF01,0xFFF9,0,217,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2= RTLNRW(typres0.id, 0, (EIF_POINTER) _A54_63, (EIF_POINTER)(0),1100, 0, 0, 1, -1, tr1, 0);
	}
	ur1 = RTCCL(tr2);
	tr3 = RTMS_EX_H("vector2_very_small_components",29,517592435);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(878, dtype))(Current, ur1x, ur2x);
	RTHOOK(21);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,217,0xFF01,53,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = loc1;
	RTAR(tr1,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,288,0xFF01,0xFFF9,0,217,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2= RTLNRW(typres0.id, 0, (EIF_POINTER) _A54_64, (EIF_POINTER)(0),1101, 0, 0, 1, -1, tr1, 0);
	}
	ur1 = RTCCL(tr2);
	tr3 = RTMS_EX_H("vector2_very_large_components",29,1803283059);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(878, dtype))(Current, ur1x, ur2x);
	RTHOOK(22);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,217,0xFF01,53,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = loc1;
	RTAR(tr1,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,288,0xFF01,0xFFF9,0,217,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2= RTLNRW(typres0.id, 0, (EIF_POINTER) _A54_65, (EIF_POINTER)(0),1102, 0, 0, 1, -1, tr1, 0);
	}
	ur1 = RTCCL(tr2);
	tr3 = RTMS_EX_H("vector3_cross_product_parallel",30,756596588);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(878, dtype))(Current, ur1x, ur2x);
	RTHOOK(23);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,217,0xFF01,53,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = loc1;
	RTAR(tr1,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,288,0xFF01,0xFFF9,0,217,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2= RTLNRW(typres0.id, 0, (EIF_POINTER) _A54_66, (EIF_POINTER)(0),1103, 0, 0, 1, -1, tr1, 0);
	}
	ur1 = RTCCL(tr2);
	tr3 = RTMS_EX_H("vector_n_zero_vector",20,1210505586);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(878, dtype))(Current, ur1x, ur2x);
	RTHOOK(24);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,217,0xFF01,53,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = loc1;
	RTAR(tr1,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,288,0xFF01,0xFFF9,0,217,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2= RTLNRW(typres0.id, 0, (EIF_POINTER) _A54_67, (EIF_POINTER)(0),1104, 0, 0, 1, -1, tr1, 0);
	}
	ur1 = RTCCL(tr2);
	tr3 = RTMS_EX_H("vector_n_unit_vector",20,1250477682);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(878, dtype))(Current, ur1x, ur2x);
	RTHOOK(25);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,217,0xFF01,53,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = loc1;
	RTAR(tr1,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,288,0xFF01,0xFFF9,0,217,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2= RTLNRW(typres0.id, 0, (EIF_POINTER) _A54_68, (EIF_POINTER)(0),1105, 0, 0, 1, -1, tr1, 0);
	}
	ur1 = RTCCL(tr2);
	tr3 = RTMS_EX_H("matrix_very_large",17,1633721189);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(878, dtype))(Current, ur1x, ur2x);
	RTHOOK(26);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,217,0xFF01,53,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = loc1;
	RTAR(tr1,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,288,0xFF01,0xFFF9,0,217,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2= RTLNRW(typres0.id, 0, (EIF_POINTER) _A54_69, (EIF_POINTER)(0),1106, 0, 0, 1, -1, tr1, 0);
	}
	ur1 = RTCCL(tr2);
	tr3 = RTMS_EX_H("matrix_multiplication_identity",30,775699065);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(878, dtype))(Current, ur1x, ur2x);
	RTHOOK(27);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,217,0xFF01,53,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = loc1;
	RTAR(tr1,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,288,0xFF01,0xFFF9,0,217,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2= RTLNRW(typres0.id, 0, (EIF_POINTER) _A54_70, (EIF_POINTER)(0),1107, 0, 0, 1, -1, tr1, 0);
	}
	ur1 = RTCCL(tr2);
	tr3 = RTMS_EX_H("vector_dot_product_zero",23,375251055);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(878, dtype))(Current, ur1x, ur2x);
	RTHOOK(28);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,217,0xFF01,53,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = loc1;
	RTAR(tr1,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,288,0xFF01,0xFFF9,0,217,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2= RTLNRW(typres0.id, 0, (EIF_POINTER) _A54_71, (EIF_POINTER)(0),1108, 0, 0, 1, -1, tr1, 0);
	}
	ur1 = RTCCL(tr2);
	tr3 = RTMS_EX_H("vector_operations_mixed_scales",30,1097877875);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(878, dtype))(Current, ur1x, ur2x);
	RTHOOK(29);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,217,0xFF01,53,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = loc1;
	RTAR(tr1,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,288,0xFF01,0xFFF9,0,217,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2= RTLNRW(typres0.id, 0, (EIF_POINTER) _A54_72, (EIF_POINTER)(0),1109, 0, 0, 1, -1, tr1, 0);
	}
	ur1 = RTCCL(tr2);
	tr3 = RTMS_EX_H("stress_many_vector_creations",28,1618478707);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(878, dtype))(Current, ur1x, ur2x);
	RTHOOK(30);
	tr1 = RTMS_EX_H("\012=== Summary ===\012",17,1177101066);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTHOOK(31);
	tr1 = RTMS_EX_H("Phase 6 hardening verification complete\012",40,2053635082);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(32);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef ur2
}

/* {TEST_APP}.safe_run_test */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F34_881 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "safe_run_test";
	RTEX;
	RTED;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	RTS_SDX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr2 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTDT;
	RTLD;
	RTXD;
	RTLXD;
	
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,tr2);
	RTLR(5,Current);
	RTLR(6,saved_except);
	RTLIU(7);
	RTXSLS;
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLXL;
	
	RTEAA(l_feature_name, 33, Current, 0, 2, 936);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(33, Current, 936);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,288,0xFF01,0xFFF9,0,217,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 33, l_feature_name, 1, typres0, 0x01);
	}
	RTCC(arg2, 33, l_feature_name, 2, eif_new_type(265, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTE_T
	RTHOOK(1);
	tr1 = RTMS_EX_H("  \342\234\223 ",6,1717592608);
	ur1 = RTCCL(arg2);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4896, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTHOOK(2);
	ur1 = NULL;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4713, "call", arg1))(arg1, ur1x);
	RTHOOK(3);
	tr1 = RTMS_EX_H(" - PASS\012",8,193845258);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTLXE;
	RTXSC;
	RTS_SRR
	RTHOOK(4);
	tr1 = RTMS_EX_H(" - FAIL\012",8,193111306);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTMD(0);
	/* NOTREACHED */
	RTE_EE
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTEOK;
	RTLE;
	RTLO(4);
#undef up1
#undef ur1
#undef arg2
#undef arg1
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

void EIF_Minit34 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
