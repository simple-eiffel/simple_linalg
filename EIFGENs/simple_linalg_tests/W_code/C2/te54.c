/*
 * Code for class TEST_SIMPLE_LINALG
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F54_1128(EIF_REFERENCE);
extern void F54_1129(EIF_REFERENCE);
extern void F54_1130(EIF_REFERENCE);
extern void F54_1131(EIF_REFERENCE);
extern void F54_1132(EIF_REFERENCE);
extern void F54_1133(EIF_REFERENCE);
extern void F54_1134(EIF_REFERENCE);
extern void F54_1135(EIF_REFERENCE);
extern void F54_1136(EIF_REFERENCE);
extern void F54_1137(EIF_REFERENCE);
extern void F54_1138(EIF_REFERENCE);
extern void F54_1139(EIF_REFERENCE);
extern void F54_1140(EIF_REFERENCE);
extern void F54_1141(EIF_REFERENCE);
extern void F54_1142(EIF_REFERENCE);
extern void F54_1143(EIF_REFERENCE);
extern void F54_1144(EIF_REFERENCE);
extern void F54_1145(EIF_REFERENCE);
extern void F54_1146(EIF_REFERENCE);
extern void F54_1147(EIF_REFERENCE);
extern void F54_1148(EIF_REFERENCE);
extern void F54_1149(EIF_REFERENCE);
extern void EIF_Minit54(void);

#ifdef __cplusplus
}
#endif

#include "eif_helpers.h"
#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {TEST_SIMPLE_LINALG}.test_vector2_creation */
void F54_1128 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_vector2_creation";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur8_2x = {{0}, SK_REAL64};
#define ur8_2 ur8_2x.it_r8
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 53, Current, 1, 0, 1149);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(53, Current, 1149);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000015, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(21, 0x01).id);
	ur8_1 = (EIF_REAL_64) 3.0;
	ur8_2 = (EIF_REAL_64) 4.0;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(523, Dtype(tr1)))(tr1, ur8_1x, ur8_2x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = RTMS_EX_H("x coordinate set",16,2111907956);
	ur1 = tr1;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(524, "x", loc1))(loc1)).it_r8);
	ub1 = (EIF_BOOLEAN)(tr8_1 == (EIF_REAL_64) 3.0);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1078, dtype))(Current, ur1x, ub1x);
	RTHOOK(3);
	tr1 = RTMS_EX_H("y coordinate set",16,257163124);
	ur1 = tr1;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(525, "y", loc1))(loc1)).it_r8);
	ub1 = (EIF_BOOLEAN)(tr8_1 == (EIF_REAL_64) 4.0);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1078, dtype))(Current, ur1x, ub1x);
	RTHOOK(4);
	tr1 = RTMS_EX_H("norm is 5 (3-4-5 triangle)",26,2040727337);
	ur1 = tr1;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(528, "norm", loc1))(loc1)).it_r8);
	tr8_2 = eif_abs_real64 ((EIF_REAL_64) (tr8_1 - (EIF_REAL_64) 5.0));
	ub1 = (EIF_BOOLEAN) (tr8_2 < (EIF_REAL_64) 0.001);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1078, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef ur8_1
#undef ur8_2
#undef ub1
}

/* {TEST_SIMPLE_LINALG}.test_vector2_operations */
void F54_1129 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_vector2_operations";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur8_2x = {{0}, SK_REAL64};
#define ur8_2 ur8_2x.it_r8
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,loc3);
	RTLR(4,ur1);
	RTLR(5,Current);
	RTLR(6,loc4);
	RTLR(7,loc5);
	RTLIU(8);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	
	RTEAA(l_feature_name, 53, Current, 5, 0, 1150);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(53, Current, 1150);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000015, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(21, 0x01).id);
	ur8_1 = (EIF_REAL_64) 1.0;
	ur8_2 = (EIF_REAL_64) 2.0;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(523, Dtype(tr1)))(tr1, ur8_1x, ur8_2x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(2, 0xF8000015, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(21, 0x01).id);
	ur8_1 = (EIF_REAL_64) 3.0;
	ur8_2 = (EIF_REAL_64) 4.0;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(523, Dtype(tr1)))(tr1, ur8_1x, ur8_2x);
	RTNHOOK(2,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(3, 0xF8000015, 0, 0); /* loc3 */
	ur1 = RTCCL(loc2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(531, "add", loc1))(loc1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	tr1 = RTMS_EX_H("sum x correct",13,237447284);
	ur1 = tr1;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(524, "x", loc3))(loc3)).it_r8);
	ub1 = (EIF_BOOLEAN)(tr8_1 == (EIF_REAL_64) 4.0);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1078, dtype))(Current, ur1x, ub1x);
	RTHOOK(5);
	tr1 = RTMS_EX_H("sum y correct",13,296429684);
	ur1 = tr1;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(525, "y", loc3))(loc3)).it_r8);
	ub1 = (EIF_BOOLEAN)(tr8_1 == (EIF_REAL_64) 6.0);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1078, dtype))(Current, ur1x, ub1x);
	RTHOOK(6);
	RTDBGAL(4, 0xF8000015, 0, 0); /* loc4 */
	ur1 = RTCCL(loc1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(532, "subtract", loc2))(loc2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(7);
	tr1 = RTMS_EX_H("diff x correct",14,12017780);
	ur1 = tr1;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(524, "x", loc4))(loc4)).it_r8);
	ub1 = (EIF_BOOLEAN)(tr8_1 == (EIF_REAL_64) 2.0);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1078, dtype))(Current, ur1x, ub1x);
	RTHOOK(8);
	tr1 = RTMS_EX_H("diff y correct",14,71000180);
	ur1 = tr1;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(525, "y", loc4))(loc4)).it_r8);
	ub1 = (EIF_BOOLEAN)(tr8_1 == (EIF_REAL_64) 2.0);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1078, dtype))(Current, ur1x, ub1x);
	RTHOOK(9);
	RTDBGAL(5, 0xF8000015, 0, 0); /* loc5 */
	ur8_1 = (EIF_REAL_64) 2.0;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(533, "scale", loc1))(loc1, ur8_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc5 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(10);
	tr1 = RTMS_EX_H("scaled x correct",16,1254974068);
	ur1 = tr1;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(524, "x", loc5))(loc5)).it_r8);
	ub1 = (EIF_BOOLEAN)(tr8_1 == (EIF_REAL_64) 2.0);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1078, dtype))(Current, ur1x, ub1x);
	RTHOOK(11);
	tr1 = RTMS_EX_H("scaled y correct",16,1313956468);
	ur1 = tr1;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(525, "y", loc5))(loc5)).it_r8);
	ub1 = (EIF_BOOLEAN)(tr8_1 == (EIF_REAL_64) 4.0);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1078, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef up1
#undef ur1
#undef ur8_1
#undef ur8_2
#undef ub1
}

/* {TEST_SIMPLE_LINALG}.test_vector3_creation */
void F54_1130 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_vector3_creation";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur8_2x = {{0}, SK_REAL64};
#define ur8_2 ur8_2x.it_r8
	EIF_TYPED_VALUE ur8_3x = {{0}, SK_REAL64};
#define ur8_3 ur8_3x.it_r8
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 53, Current, 1, 0, 1151);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(53, Current, 1151);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000018, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(24, 0x01).id);
	ur8_1 = (EIF_REAL_64) 1.0;
	ur8_2 = (EIF_REAL_64) 2.0;
	ur8_3 = (EIF_REAL_64) 3.0;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(564, Dtype(tr1)))(tr1, ur8_1x, ur8_2x, ur8_3x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = RTMS_EX_H("x coordinate set",16,2111907956);
	ur1 = tr1;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(565, "x", loc1))(loc1)).it_r8);
	ub1 = (EIF_BOOLEAN)(tr8_1 == (EIF_REAL_64) 1.0);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1078, dtype))(Current, ur1x, ub1x);
	RTHOOK(3);
	tr1 = RTMS_EX_H("y coordinate set",16,257163124);
	ur1 = tr1;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(566, "y", loc1))(loc1)).it_r8);
	ub1 = (EIF_BOOLEAN)(tr8_1 == (EIF_REAL_64) 2.0);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1078, dtype))(Current, ur1x, ub1x);
	RTHOOK(4);
	tr1 = RTMS_EX_H("z coordinate set",16,549898100);
	ur1 = tr1;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(567, "z", loc1))(loc1)).it_r8);
	ub1 = (EIF_BOOLEAN)(tr8_1 == (EIF_REAL_64) 3.0);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1078, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef ur8_1
#undef ur8_2
#undef ur8_3
#undef ub1
}

/* {TEST_SIMPLE_LINALG}.test_vector3_cross_product */
void F54_1131 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_vector3_cross_product";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur8_2x = {{0}, SK_REAL64};
#define ur8_2 ur8_2x.it_r8
	EIF_TYPED_VALUE ur8_3x = {{0}, SK_REAL64};
#define ur8_3 ur8_3x.it_r8
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,loc3);
	RTLR(4,ur1);
	RTLR(5,Current);
	RTLR(6,ur2);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 53, Current, 3, 0, 1152);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(53, Current, 1152);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000018, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(24, 0x01).id);
	ur8_1 = (EIF_REAL_64) 1.0;
	ur8_2 = (EIF_REAL_64) 0.0;
	ur8_3 = (EIF_REAL_64) 0.0;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(564, Dtype(tr1)))(tr1, ur8_1x, ur8_2x, ur8_3x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(2, 0xF8000018, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(24, 0x01).id);
	ur8_1 = (EIF_REAL_64) 0.0;
	ur8_2 = (EIF_REAL_64) 1.0;
	ur8_3 = (EIF_REAL_64) 0.0;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(564, Dtype(tr1)))(tr1, ur8_1x, ur8_2x, ur8_3x);
	RTNHOOK(2,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(3, 0xF8000018, 0, 0); /* loc3 */
	ur1 = RTCCL(loc2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(570, "cross_product", loc1))(loc1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	tr1 = RTMS_EX_H("cross z component",17,271757428);
	ur1 = tr1;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(567, "z", loc3))(loc3)).it_r8);
	ub1 = (EIF_BOOLEAN)(tr8_1 == (EIF_REAL_64) 1.0);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1078, dtype))(Current, ur1x, ub1x);
	RTHOOK(5);
	tr1 = RTMS_EX_H("cross perpendicular to v1",25,1883139889);
	ur1 = tr1;
	ur2 = RTCCL(loc3);
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(569, "dot_product", loc1))(loc1, ur2x)).it_r8);
	ub1 = (EIF_BOOLEAN) (tr8_1 < (EIF_REAL_64) 0.001);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1078, dtype))(Current, ur1x, ub1x);
	RTHOOK(6);
	tr1 = RTMS_EX_H("cross perpendicular to v2",25,1883139890);
	ur1 = tr1;
	ur2 = RTCCL(loc3);
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(569, "dot_product", loc2))(loc2, ur2x)).it_r8);
	ub1 = (EIF_BOOLEAN) (tr8_1 < (EIF_REAL_64) 0.001);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1078, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur8_1
#undef ur8_2
#undef ur8_3
#undef ub1
}

/* {TEST_SIMPLE_LINALG}.test_vector_n_creation */
void F54_1132 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_vector_n_creation";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 53, Current, 2, 0, 1153);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(53, Current, 1153);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000201, 0, 0); /* loc1 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,513,246,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ur8_1 = (EIF_REAL_64) 0.0;
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = ((EIF_INTEGER_32) 5L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(3428, Dtype(tr1)))(tr1, ur8_1x, ui4_1x, ui4_2x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	ur8_1 = (EIF_REAL_64) 1.0;
	ui4_1 = ((EIF_INTEGER_32) 1L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3157, "put", loc1))(loc1, ur8_1x, ui4_1x);
	RTHOOK(3);
	ur8_1 = (EIF_REAL_64) 2.0;
	ui4_1 = ((EIF_INTEGER_32) 2L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3157, "put", loc1))(loc1, ur8_1x, ui4_1x);
	RTHOOK(4);
	ur8_1 = (EIF_REAL_64) 3.0;
	ui4_1 = ((EIF_INTEGER_32) 3L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3157, "put", loc1))(loc1, ur8_1x, ui4_1x);
	RTHOOK(5);
	RTDBGAL(2, 0xF8000017, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(23, 0x01).id);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(555, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(5,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	tr1 = RTMS_EX_H("dimension = 5",13,1740417589);
	ur1 = tr1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(556, "dimension", loc2))(loc2)).it_i4);
	ub1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 5L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1078, dtype))(Current, ur1x, ub1x);
	RTHOOK(7);
	tr1 = RTMS_EX_H("element access [1]",18,1814318685);
	ur1 = tr1;
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(557, "at", loc2))(loc2, ui4_1x)).it_r8);
	ub1 = (EIF_BOOLEAN)(tr8_1 == (EIF_REAL_64) 1.0);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1078, dtype))(Current, ur1x, ub1x);
	RTHOOK(8);
	tr1 = RTMS_EX_H("element access [2]",18,1814318941);
	ur1 = tr1;
	ui4_1 = ((EIF_INTEGER_32) 2L);
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(557, "at", loc2))(loc2, ui4_1x)).it_r8);
	ub1 = (EIF_BOOLEAN)(tr8_1 == (EIF_REAL_64) 2.0);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1078, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef ur1
#undef ur8_1
#undef ui4_1
#undef ui4_2
#undef ub1
}

/* {TEST_SIMPLE_LINALG}.test_matrix_identity */
void F54_1133 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_matrix_identity";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 53, Current, 1, 0, 1154);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(53, Current, 1154);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000016, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(22, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 3L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(537, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = RTMS_EX_H("identity diagonal [1,1]",23,1305169757);
	ur1 = tr1;
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = ((EIF_INTEGER_32) 1L);
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(541, "element", loc1))(loc1, ui4_1x, ui4_2x)).it_r8);
	ub1 = (EIF_BOOLEAN)(tr8_1 == (EIF_REAL_64) 1.0);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1078, dtype))(Current, ur1x, ub1x);
	RTHOOK(3);
	tr1 = RTMS_EX_H("identity diagonal [2,2]",23,1321947229);
	ur1 = tr1;
	ui4_1 = ((EIF_INTEGER_32) 2L);
	ui4_2 = ((EIF_INTEGER_32) 2L);
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(541, "element", loc1))(loc1, ui4_1x, ui4_2x)).it_r8);
	ub1 = (EIF_BOOLEAN)(tr8_1 == (EIF_REAL_64) 1.0);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1078, dtype))(Current, ur1x, ub1x);
	RTHOOK(4);
	tr1 = RTMS_EX_H("identity diagonal [3,3]",23,1338724701);
	ur1 = tr1;
	ui4_1 = ((EIF_INTEGER_32) 3L);
	ui4_2 = ((EIF_INTEGER_32) 3L);
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(541, "element", loc1))(loc1, ui4_1x, ui4_2x)).it_r8);
	ub1 = (EIF_BOOLEAN)(tr8_1 == (EIF_REAL_64) 1.0);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1078, dtype))(Current, ur1x, ub1x);
	RTHOOK(5);
	tr1 = RTMS_EX_H("identity off-diagonal [1,2]",27,1917479517);
	ur1 = tr1;
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = ((EIF_INTEGER_32) 2L);
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(541, "element", loc1))(loc1, ui4_1x, ui4_2x)).it_r8);
	ub1 = (EIF_BOOLEAN)(tr8_1 == (EIF_REAL_64) 0.0);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1078, dtype))(Current, ur1x, ub1x);
	RTHOOK(6);
	tr1 = RTMS_EX_H("identity is_identity property",29,1285622137);
	ur1 = tr1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(550, "is_identity", loc1))(loc1)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1078, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ub1
}

/* {TEST_SIMPLE_LINALG}.test_matrix_transpose */
void F54_1134 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_matrix_transpose";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,ur1);
	RTLR(4,Current);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 53, Current, 2, 0, 1155);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(53, Current, 1155);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000016, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(22, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 3L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(537, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(2, 0xF8000016, 0, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(543, "transpose", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tr1 = RTMS_EX_H("transpose dimensions swapped",28,1733616740);
	ur1 = tr1;
	tb1 = '\0';
	ti4_1 = *(EIF_INTEGER_32 *)(loc2 + RTVA(539, "rows", loc2));
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 3L))) {
		ti4_1 = *(EIF_INTEGER_32 *)(loc2 + RTVA(540, "columns", loc2));
		tb1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 3L));
	}
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1078, dtype))(Current, ur1x, ub1x);
	RTHOOK(4);
	tr1 = RTMS_EX_H("transpose of identity is identity",33,1360295545);
	ur1 = tr1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(550, "is_identity", loc2))(loc2)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1078, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef ub1
}

/* {TEST_SIMPLE_LINALG}.test_vector_accuracy_across_dimensions */
void F54_1135 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_vector_accuracy_across_dimensions";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 ti4_1;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc3);
	RTLR(4,ur1);
	RTLR(5,loc2);
	RTLR(6,loc4);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_INT32, &loc5);
	
	RTEAA(l_feature_name, 53, Current, 5, 0, 1156);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(53, Current, 1156);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000201, 0, 0); /* loc1 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,513,246,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ur8_1 = (EIF_REAL_64) 1.0;
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(3428, Dtype(tr1)))(tr1, ur8_1x, ui4_1x, ui4_2x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(3, 0xF8000017, 0, 0); /* loc3 */
	tr1 = RTLN(eif_new_type(23, 0x01).id);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(555, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(2,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tr1 = RTMS_EX_H("small vector dimension",22,2116563566);
	ur1 = tr1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(556, "dimension", loc3))(loc3)).it_i4);
	ub1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 10L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1078, dtype))(Current, ur1x, ub1x);
	RTHOOK(4);
	RTDBGAL(2, 0xF8000201, 0, 0); /* loc2 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,513,246,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ur8_1 = (EIF_REAL_64) 1.0;
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = ((EIF_INTEGER_32) 1000L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(3428, Dtype(tr1)))(tr1, ur8_1x, ui4_1x, ui4_2x);
	RTNHOOK(4,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
	loc5 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(6);
		if ((EIF_BOOLEAN) (loc5 > ((EIF_INTEGER_32) 1000L))) break;
		RTHOOK(7);
		tr4_1 = (EIF_REAL_32) (loc5);
		tr8_1 = (EIF_REAL_64) (((EIF_REAL_32) ((EIF_REAL_64) (tr4_1) /  (EIF_REAL_64) ((EIF_REAL_32) (EIF_REAL_64) 100.0))));
		ur8_1 = tr8_1;
		ui4_1 = loc5;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3157, "put", loc2))(loc2, ur8_1x, ui4_1x);
		RTHOOK(8);
		RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
		loc5++;
	}
	RTHOOK(9);
	RTDBGAL(4, 0xF8000017, 0, 0); /* loc4 */
	tr1 = RTLN(eif_new_type(23, 0x01).id);
	ur1 = RTCCL(loc2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(555, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(9,1);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(10);
	tr1 = RTMS_EX_H("large vector dimension",22,1746508654);
	ur1 = tr1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(556, "dimension", loc4))(loc4)).it_i4);
	ub1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1000L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1078, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef ur1
#undef ur8_1
#undef ui4_1
#undef ui4_2
#undef ub1
}

/* {TEST_SIMPLE_LINALG}.test_matrix_identity_properties */
void F54_1136 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_matrix_identity_properties";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,loc3);
	RTLR(4,ur1);
	RTLR(5,Current);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 53, Current, 3, 0, 1157);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(53, Current, 1157);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000016, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(22, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 3L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(537, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(2, 0xF8000016, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(22, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 3L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(537, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(2,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = ((EIF_INTEGER_32) 1L);
	ur8_1 = (EIF_REAL_64) 2.0;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(542, "set_element", loc2))(loc2, ui4_1x, ui4_2x, ur8_1x);
	RTHOOK(4);
	ui4_1 = ((EIF_INTEGER_32) 2L);
	ui4_2 = ((EIF_INTEGER_32) 2L);
	ur8_1 = (EIF_REAL_64) 3.0;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(542, "set_element", loc2))(loc2, ui4_1x, ui4_2x, ur8_1x);
	RTHOOK(5);
	RTDBGAL(3, 0xF8000016, 0, 0); /* loc3 */
	ur1 = RTCCL(loc2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(544, "multiply", loc1))(loc1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	tr1 = RTMS_EX_H("I*A dimension",13,1247549550);
	ur1 = tr1;
	tb1 = '\0';
	ti4_1 = *(EIF_INTEGER_32 *)(loc3 + RTVA(539, "rows", loc3));
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 3L))) {
		ti4_1 = *(EIF_INTEGER_32 *)(loc3 + RTVA(540, "columns", loc3));
		tb1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 3L));
	}
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1078, dtype))(Current, ur1x, ub1x);
	RTHOOK(7);
	tr1 = RTMS_EX_H("I*A[1,1] = A[1,1]",17,1797035101);
	ur1 = tr1;
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = ((EIF_INTEGER_32) 1L);
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(541, "element", loc3))(loc3, ui4_1x, ui4_2x)).it_r8);
	tr8_2 = eif_abs_real64 ((EIF_REAL_64) (tr8_1 - (EIF_REAL_64) 2.0));
	ub1 = (EIF_BOOLEAN) (tr8_2 < (EIF_REAL_64) 0.001);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1078, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ur1
#undef ur8_1
#undef ui4_1
#undef ui4_2
#undef ub1
}

/* {TEST_SIMPLE_LINALG}.test_vector_norm_variants */
void F54_1137 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_vector_norm_variants";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur8_2x = {{0}, SK_REAL64};
#define ur8_2 ur8_2x.it_r8
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 53, Current, 1, 0, 1158);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(53, Current, 1158);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000015, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(21, 0x01).id);
	ur8_1 = (EIF_REAL_64) 3.0;
	ur8_2 = (EIF_REAL_64) 4.0;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(523, Dtype(tr1)))(tr1, ur8_1x, ur8_2x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = RTMS_EX_H("L2 norm (Euclidean)",19,1224845609);
	ur1 = tr1;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(528, "norm", loc1))(loc1)).it_r8);
	tr8_2 = eif_abs_real64 ((EIF_REAL_64) (tr8_1 - (EIF_REAL_64) 5.0));
	ub1 = (EIF_BOOLEAN) (tr8_2 < (EIF_REAL_64) 0.001);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1078, dtype))(Current, ur1x, ub1x);
	RTHOOK(3);
	tr1 = RTMS_EX_H("L1 norm (Manhattan)",19,1860301865);
	ur1 = tr1;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(529, "manhattan_norm", loc1))(loc1)).it_r8);
	tr8_2 = eif_abs_real64 ((EIF_REAL_64) (tr8_1 - (EIF_REAL_64) 7.0));
	ub1 = (EIF_BOOLEAN) (tr8_2 < (EIF_REAL_64) 0.001);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1078, dtype))(Current, ur1x, ub1x);
	RTHOOK(4);
	tr1 = RTMS_EX_H("Infinity norm (max)",19,1583910441);
	ur1 = tr1;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(530, "infinity_norm", loc1))(loc1)).it_r8);
	tr8_2 = eif_abs_real64 ((EIF_REAL_64) (tr8_1 - (EIF_REAL_64) 4.0));
	ub1 = (EIF_BOOLEAN) (tr8_2 < (EIF_REAL_64) 0.001);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1078, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef ur8_1
#undef ur8_2
#undef ub1
}

/* {TEST_SIMPLE_LINALG}.test_vector2_zero_vector */
void F54_1138 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_vector2_zero_vector";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur8_2x = {{0}, SK_REAL64};
#define ur8_2 ur8_2x.it_r8
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 53, Current, 1, 0, 1159);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(53, Current, 1159);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000015, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(21, 0x01).id);
	ur8_1 = (EIF_REAL_64) 0.0;
	ur8_2 = (EIF_REAL_64) 0.0;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(523, Dtype(tr1)))(tr1, ur8_1x, ur8_2x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = RTMS_EX_H("zero vector norm is zero",24,1452511855);
	ur1 = tr1;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(528, "norm", loc1))(loc1)).it_r8);
	ub1 = (EIF_BOOLEAN)(tr8_1 == (EIF_REAL_64) 0.0);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1078, dtype))(Current, ur1x, ub1x);
	RTHOOK(3);
	tr1 = RTMS_EX_H("zero vector L1 is zero",22,499141999);
	ur1 = tr1;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(529, "manhattan_norm", loc1))(loc1)).it_r8);
	ub1 = (EIF_BOOLEAN)(tr8_1 == (EIF_REAL_64) 0.0);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1078, dtype))(Current, ur1x, ub1x);
	RTHOOK(4);
	tr1 = RTMS_EX_H("zero vector infinity norm is zero",33,1463707503);
	ur1 = tr1;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(530, "infinity_norm", loc1))(loc1)).it_r8);
	ub1 = (EIF_BOOLEAN)(tr8_1 == (EIF_REAL_64) 0.0);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1078, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef ur8_1
#undef ur8_2
#undef ub1
}

/* {TEST_SIMPLE_LINALG}.test_vector2_negative_components */
void F54_1139 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_vector2_negative_components";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur8_2x = {{0}, SK_REAL64};
#define ur8_2 ur8_2x.it_r8
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 53, Current, 1, 0, 1160);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(53, Current, 1160);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000015, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(21, 0x01).id);
	ur8_1 = (EIF_REAL_64) -3.0;
	ur8_2 = (EIF_REAL_64) -4.0;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(523, Dtype(tr1)))(tr1, ur8_1x, ur8_2x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = RTMS_EX_H("negative x stored",17,180392548);
	ur1 = tr1;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(524, "x", loc1))(loc1)).it_r8);
	ub1 = (EIF_BOOLEAN)(tr8_1 == (EIF_REAL_64) -3.0);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1078, dtype))(Current, ur1x, ub1x);
	RTHOOK(3);
	tr1 = RTMS_EX_H("negative y stored",17,180622948);
	ur1 = tr1;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(525, "y", loc1))(loc1)).it_r8);
	ub1 = (EIF_BOOLEAN)(tr8_1 == (EIF_REAL_64) -4.0);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1078, dtype))(Current, ur1x, ub1x);
	RTHOOK(4);
	tr1 = RTMS_EX_H("norm of [-3,-4] is 5",20,283120437);
	ur1 = tr1;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(528, "norm", loc1))(loc1)).it_r8);
	tr8_2 = eif_abs_real64 ((EIF_REAL_64) (tr8_1 - (EIF_REAL_64) 5.0));
	ub1 = (EIF_BOOLEAN) (tr8_2 < (EIF_REAL_64) 0.001);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1078, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef ur8_1
#undef ur8_2
#undef ub1
}

/* {TEST_SIMPLE_LINALG}.test_vector2_very_small_components */
void F54_1140 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_vector2_very_small_components";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur8_2x = {{0}, SK_REAL64};
#define ur8_2 ur8_2x.it_r8
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 53, Current, 1, 0, 1161);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(53, Current, 1161);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000015, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(21, 0x01).id);
	ur8_1 = (EIF_REAL_64) 1.0e-15;
	ur8_2 = (EIF_REAL_64) 1.0e-15;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(523, Dtype(tr1)))(tr1, ur8_1x, ur8_2x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = RTMS_EX_H("tiny components stored",22,1286874212);
	ur1 = tr1;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(524, "x", loc1))(loc1)).it_r8);
	ub1 = (EIF_BOOLEAN) (tr8_1 > (EIF_REAL_64) 0.0);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1078, dtype))(Current, ur1x, ub1x);
	RTHOOK(3);
	tr1 = RTMS_EX_H("norm computes",13,698775667);
	ur1 = tr1;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(528, "norm", loc1))(loc1)).it_r8);
	tb1 = eif_is_nan_real_64 (tr8_1);
	ub1 = (EIF_BOOLEAN) !tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1078, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef ur8_1
#undef ur8_2
#undef ub1
}

/* {TEST_SIMPLE_LINALG}.test_vector2_very_large_components */
void F54_1141 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_vector2_very_large_components";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur8_2x = {{0}, SK_REAL64};
#define ur8_2 ur8_2x.it_r8
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 53, Current, 1, 0, 1162);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(53, Current, 1162);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000015, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(21, 0x01).id);
	ur8_1 = (EIF_REAL_64) 1.0e15;
	ur8_2 = (EIF_REAL_64) 1.0e15;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(523, Dtype(tr1)))(tr1, ur8_1x, ur8_2x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = RTMS_EX_H("large components stored",23,1615683428);
	ur1 = tr1;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(524, "x", loc1))(loc1)).it_r8);
	ub1 = (EIF_BOOLEAN)(tr8_1 == (EIF_REAL_64) 1.0e15);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1078, dtype))(Current, ur1x, ub1x);
	RTHOOK(3);
	tr1 = RTMS_EX_H("large norm computes",19,240602483);
	ur1 = tr1;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(528, "norm", loc1))(loc1)).it_r8);
	tb1 = eif_is_nan_real_64 (tr8_1);
	ub1 = (EIF_BOOLEAN) !tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1078, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef ur8_1
#undef ur8_2
#undef ub1
}

/* {TEST_SIMPLE_LINALG}.test_vector3_cross_product_parallel */
void F54_1142 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_vector3_cross_product_parallel";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur8_2x = {{0}, SK_REAL64};
#define ur8_2 ur8_2x.it_r8
	EIF_TYPED_VALUE ur8_3x = {{0}, SK_REAL64};
#define ur8_3 ur8_3x.it_r8
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,loc3);
	RTLR(4,ur1);
	RTLR(5,Current);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 53, Current, 3, 0, 1163);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(53, Current, 1163);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000018, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(24, 0x01).id);
	ur8_1 = (EIF_REAL_64) 1.0;
	ur8_2 = (EIF_REAL_64) 2.0;
	ur8_3 = (EIF_REAL_64) 3.0;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(564, Dtype(tr1)))(tr1, ur8_1x, ur8_2x, ur8_3x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(2, 0xF8000018, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(24, 0x01).id);
	ur8_1 = (EIF_REAL_64) 2.0;
	ur8_2 = (EIF_REAL_64) 4.0;
	ur8_3 = (EIF_REAL_64) 6.0;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(564, Dtype(tr1)))(tr1, ur8_1x, ur8_2x, ur8_3x);
	RTNHOOK(2,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(3, 0xF8000018, 0, 0); /* loc3 */
	ur1 = RTCCL(loc2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(570, "cross_product", loc1))(loc1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	tr1 = RTMS_EX_H("cross of parallel vectors near zero",35,891462511);
	ur1 = tr1;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(571, "norm", loc3))(loc3)).it_r8);
	ub1 = (EIF_BOOLEAN) (tr8_1 < (EIF_REAL_64) 0.01);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1078, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ur1
#undef ur8_1
#undef ur8_2
#undef ur8_3
#undef ub1
}

/* {TEST_SIMPLE_LINALG}.test_vector_n_zero_vector */
void F54_1143 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_vector_n_zero_vector";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 53, Current, 2, 0, 1164);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(53, Current, 1164);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000201, 0, 0); /* loc1 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,513,246,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ur8_1 = (EIF_REAL_64) 0.0;
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(3428, Dtype(tr1)))(tr1, ur8_1x, ui4_1x, ui4_2x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(2, 0xF8000017, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(23, 0x01).id);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(555, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(2,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tr1 = RTMS_EX_H("zero vector dimension correct",29,895113076);
	ur1 = tr1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(556, "dimension", loc2))(loc2)).it_i4);
	ub1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 10L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1078, dtype))(Current, ur1x, ub1x);
	RTHOOK(4);
	tr1 = RTMS_EX_H("zero vector norm is zero",24,1452511855);
	ur1 = tr1;
	ui4_1 = ((EIF_INTEGER_32) 2L);
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(559, "norm", loc2))(loc2, ui4_1x)).it_r8);
	ub1 = (EIF_BOOLEAN)(tr8_1 == (EIF_REAL_64) 0.0);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1078, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef ur1
#undef ur8_1
#undef ui4_1
#undef ui4_2
#undef ub1
}

/* {TEST_SIMPLE_LINALG}.test_vector_n_unit_vector */
void F54_1144 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_vector_n_unit_vector";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 53, Current, 2, 0, 1165);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(53, Current, 1165);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000201, 0, 0); /* loc1 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,513,246,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ur8_1 = (EIF_REAL_64) 0.0;
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = ((EIF_INTEGER_32) 5L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(3428, Dtype(tr1)))(tr1, ur8_1x, ui4_1x, ui4_2x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	ur8_1 = (EIF_REAL_64) 1.0;
	ui4_1 = ((EIF_INTEGER_32) 3L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3157, "put", loc1))(loc1, ur8_1x, ui4_1x);
	RTHOOK(3);
	RTDBGAL(2, 0xF8000017, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(23, 0x01).id);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(555, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(3,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	tr1 = RTMS_EX_H("unit vector norm is 1",21,1374838065);
	ur1 = tr1;
	ui4_1 = ((EIF_INTEGER_32) 2L);
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(559, "norm", loc2))(loc2, ui4_1x)).it_r8);
	tr8_2 = eif_abs_real64 ((EIF_REAL_64) (tr8_1 - (EIF_REAL_64) 1.0));
	ub1 = (EIF_BOOLEAN) (tr8_2 < (EIF_REAL_64) 0.001);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1078, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef ur1
#undef ur8_1
#undef ui4_1
#undef ui4_2
#undef ub1
}

/* {TEST_SIMPLE_LINALG}.test_matrix_very_large */
void F54_1145 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_matrix_very_large";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 53, Current, 1, 0, 1166);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(53, Current, 1166);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000016, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(22, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 100L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(537, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = RTMS_EX_H("large identity dimension",24,919269486);
	ur1 = tr1;
	tb1 = '\0';
	ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(539, "rows", loc1));
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 100L))) {
		ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(540, "columns", loc1));
		tb1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 100L));
	}
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1078, dtype))(Current, ur1x, ub1x);
	RTHOOK(3);
	tr1 = RTMS_EX_H("large identity diagonal",23,927594604);
	ur1 = tr1;
	ui4_1 = ((EIF_INTEGER_32) 50L);
	ui4_2 = ((EIF_INTEGER_32) 50L);
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(541, "element", loc1))(loc1, ui4_1x, ui4_2x)).it_r8);
	ub1 = (EIF_BOOLEAN)(tr8_1 == (EIF_REAL_64) 1.0);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1078, dtype))(Current, ur1x, ub1x);
	RTHOOK(4);
	tr1 = RTMS_EX_H("large identity is_identity",26,1192962425);
	ur1 = tr1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(550, "is_identity", loc1))(loc1)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1078, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ub1
}

/* {TEST_SIMPLE_LINALG}.test_matrix_multiplication_identity */
void F54_1146 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_matrix_multiplication_identity";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,loc3);
	RTLR(4,ur1);
	RTLR(5,tr2);
	RTLR(6,Current);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_INT32, &loc4);
	
	RTEAA(l_feature_name, 53, Current, 4, 0, 1167);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(53, Current, 1167);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000016, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(22, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 3L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(537, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(2, 0xF8000016, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(22, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 3L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(537, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(2,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = ((EIF_INTEGER_32) 1L);
	ur8_1 = (EIF_REAL_64) 2.0;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(542, "set_element", loc2))(loc2, ui4_1x, ui4_2x, ur8_1x);
	RTHOOK(4);
	RTDBGAL(3, 0xF8000016, 0, 0); /* loc3 */
	loc3 = (EIF_REFERENCE) RTCCL(loc2);
	RTHOOK(5);
	RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
	loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(6);
		if ((EIF_BOOLEAN) (loc4 > ((EIF_INTEGER_32) 10L))) break;
		RTHOOK(7);
		RTDBGAL(3, 0xF8000016, 0, 0); /* loc3 */
		ur1 = RTCCL(loc1);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(544, "multiply", loc3))(loc3, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc3 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(8);
		tr1 = RTMS_EX_H("iteration ",10,238758176);
		tr2 = eif_out__i4_s1(loc4);
		ur1 = RTCCL(tr2);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4896, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTMS_EX_H(" preserves A",12,1390139713);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4896, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ui4_2 = ((EIF_INTEGER_32) 1L);
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(541, "element", loc3))(loc3, ui4_1x, ui4_2x)).it_r8);
		tr8_2 = eif_abs_real64 ((EIF_REAL_64) (tr8_1 - (EIF_REAL_64) 2.0));
		ub1 = (EIF_BOOLEAN) (tr8_2 < (EIF_REAL_64) 0.001);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1078, dtype))(Current, ur1x, ub1x);
		RTHOOK(9);
		RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
		loc4++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef ur1
#undef ur8_1
#undef ui4_1
#undef ui4_2
#undef ub1
}

/* {TEST_SIMPLE_LINALG}.test_vector_dot_product_zero */
void F54_1147 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_vector_dot_product_zero";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur8_2x = {{0}, SK_REAL64};
#define ur8_2 ur8_2x.it_r8
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,ur1);
	RTLR(4,ur2);
	RTLR(5,Current);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 53, Current, 2, 0, 1146);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(53, Current, 1146);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000015, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(21, 0x01).id);
	ur8_1 = (EIF_REAL_64) 1.0;
	ur8_2 = (EIF_REAL_64) 0.0;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(523, Dtype(tr1)))(tr1, ur8_1x, ur8_2x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(2, 0xF8000015, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(21, 0x01).id);
	ur8_1 = (EIF_REAL_64) 0.0;
	ur8_2 = (EIF_REAL_64) 1.0;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(523, Dtype(tr1)))(tr1, ur8_1x, ur8_2x);
	RTNHOOK(2,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tr1 = RTMS_EX_H("orthogonal dot product",22,912210804);
	ur1 = tr1;
	ur2 = RTCCL(loc2);
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(527, "dot_product", loc1))(loc1, ur2x)).it_r8);
	ub1 = (EIF_BOOLEAN)(tr8_1 == (EIF_REAL_64) 0.0);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1078, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef ur1
#undef ur2
#undef ur8_1
#undef ur8_2
#undef ub1
}

/* {TEST_SIMPLE_LINALG}.test_vector_operations_mixed_scales */
void F54_1148 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_vector_operations_mixed_scales";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur8_2x = {{0}, SK_REAL64};
#define ur8_2 ur8_2x.it_r8
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,loc3);
	RTLR(4,ur1);
	RTLR(5,Current);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 53, Current, 3, 0, 1147);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(53, Current, 1147);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000015, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(21, 0x01).id);
	ur8_1 = (EIF_REAL_64) 1.0e-10;
	ur8_2 = (EIF_REAL_64) 1.0;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(523, Dtype(tr1)))(tr1, ur8_1x, ur8_2x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(2, 0xF8000015, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(21, 0x01).id);
	ur8_1 = (EIF_REAL_64) 1.0e-10;
	ur8_2 = (EIF_REAL_64) 1.0;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(523, Dtype(tr1)))(tr1, ur8_1x, ur8_2x);
	RTNHOOK(2,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(3, 0xF8000015, 0, 0); /* loc3 */
	ur1 = RTCCL(loc2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(531, "add", loc1))(loc1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	tr1 = RTMS_EX_H("mixed scale addition",20,547815278);
	ur1 = tr1;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(524, "x", loc3))(loc3)).it_r8);
	ub1 = (EIF_BOOLEAN) (tr8_1 > (EIF_REAL_64) 0.0);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1078, dtype))(Current, ur1x, ub1x);
	RTHOOK(5);
	tr1 = RTMS_EX_H("mixed scale result valid",24,470389604);
	ur1 = tr1;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(528, "norm", loc3))(loc3)).it_r8);
	tb1 = eif_is_nan_real_64 (tr8_1);
	ub1 = (EIF_BOOLEAN) !tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1078, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ur1
#undef ur8_1
#undef ur8_2
#undef ub1
}

/* {TEST_SIMPLE_LINALG}.test_stress_many_vector_creations */
void F54_1149 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_stress_many_vector_creations";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur8_2x = {{0}, SK_REAL64};
#define ur8_2 ur8_2x.it_r8
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_32 tr4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc2);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 53, Current, 2, 0, 1148);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(53, Current, 1148);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(2);
		if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 500L))) break;
		RTHOOK(3);
		RTDBGAL(2, 0xF8000015, 0, 0); /* loc2 */
		tr1 = RTLN(eif_new_type(21, 0x01).id);
		tr4_1 = (EIF_REAL_32) (loc1);
		tr8_1 = (EIF_REAL_64) (tr4_1);
		ur8_1 = tr8_1;
		tr4_1 = (EIF_REAL_32) ((EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)));
		tr8_2 = (EIF_REAL_64) (tr4_1);
		ur8_2 = tr8_2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(523, Dtype(tr1)))(tr1, ur8_1x, ur8_2x);
		RTNHOOK(3,1);
		loc2 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(4);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	RTHOOK(5);
	tr1 = RTMS_EX_H("stress test completed",21,536676452);
	ur1 = tr1;
	ub1 = (EIF_BOOLEAN) 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1078, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef ur1
#undef ur8_1
#undef ur8_2
#undef ub1
}

void EIF_Minit54 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
