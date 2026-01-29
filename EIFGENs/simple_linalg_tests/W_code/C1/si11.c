/*
 * Code for class SIMPLE_MATH
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F11_271(EIF_REFERENCE);
extern EIF_TYPED_VALUE F11_272(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F11_273(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F11_274(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F11_275(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F11_276(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F11_277(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F11_278(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F11_279(EIF_REFERENCE);
extern EIF_TYPED_VALUE F11_280(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F11_281(EIF_REFERENCE);
extern EIF_TYPED_VALUE F11_282(EIF_REFERENCE);
extern EIF_TYPED_VALUE F11_283(EIF_REFERENCE);
extern EIF_TYPED_VALUE F11_284(EIF_REFERENCE);
extern EIF_TYPED_VALUE F11_285(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F11_286(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F11_287(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F11_288(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F11_289(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F11_290(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F11_291(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F11_292(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F11_293(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F11_294(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F11_295(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F11_296(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F11_297(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F11_298(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F11_299(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F11_300(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F11_301(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F11_302(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F11_303(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F11_304(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F11_305(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F11_306(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F11_307(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F11_308(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F11_309(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F11_310(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F11_311(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F11_312(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F11_313(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void EIF_Minit11(void);

#ifdef __cplusplus
}
#endif

#include <math.h>
#include "eif_helpers.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SIMPLE_MATH}.make */
void F11_271 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 10, Current, 0, 0, 266);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(10, Current, 266);
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {SIMPLE_MATH}.new_vector */
EIF_TYPED_VALUE F11_272 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "new_vector";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 10, Current, 0, 1, 267);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(10, Current, 267);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("positive_dimension", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0xF8000002, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(2, 0x01).id);
	ui4_1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(118, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("dimension_set", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(123, "dimension", Result))(Result)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui4_1
#undef arg1
}

/* {SIMPLE_MATH}.new_vector_from_array */
EIF_TYPED_VALUE F11_273 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "new_vector_from_array";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Result);
	RTLR(4,Current);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 10, Current, 0, 1, 268);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(10, Current, 268);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,513,246,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 10, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_empty", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3181, "count", arg1))(arg1)).it_i4);
		RTTE((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0xF8000002, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(2, 0x01).id);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(119, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("dimension_set", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(123, "dimension", Result))(Result)).it_i4);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3181, "count", arg1))(arg1)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef arg1
}

/* {SIMPLE_MATH}.new_vector_2d */
EIF_TYPED_VALUE F11_274 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "new_vector_2d";
	RTEX;
#define arg1 arg1x.it_r8
#define arg2 arg2x.it_r8
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_r8 = * (EIF_REAL_64 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(6);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,ur1);
	RTLR(5,Result);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU(SK_REAL64,&arg1);
	RTLU(SK_REAL64,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 10, Current, 0, 2, 269);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(10, Current, 269);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF8000002, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(2, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 2L);
	{
		static EIF_TYPE_INDEX typarr0[] = {543,246,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr3 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_REAL_64), EIF_TRUE);
		RT_SPECIAL_COUNT(tr3) = 2L;
		memset(tr3, 0, RT_SPECIAL_VISIBLE_SIZE(tr3));
	}
	*((EIF_REAL_64 *)tr3+0) = (EIF_REAL_64) arg1;
	*((EIF_REAL_64 *)tr3+1) = (EIF_REAL_64) arg2;
	tr2 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(3610, Dtype(tr3)))(tr3).it_r;
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(119, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("dimension_2", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(123, "dimension", Result))(Result)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ui4_1
#undef arg2
#undef arg1
}

/* {SIMPLE_MATH}.new_vector_3d */
EIF_TYPED_VALUE F11_275 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "new_vector_3d";
	RTEX;
#define arg1 arg1x.it_r8
#define arg2 arg2x.it_r8
#define arg3 arg3x.it_r8
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_r8 = * (EIF_REAL_64 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_r8 = * (EIF_REAL_64 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(6);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,ur1);
	RTLR(5,Result);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU(SK_REAL64,&arg1);
	RTLU(SK_REAL64,&arg2);
	RTLU(SK_REAL64,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 10, Current, 0, 3, 270);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(10, Current, 270);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF8000002, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(2, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 3L);
	{
		static EIF_TYPE_INDEX typarr0[] = {543,246,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr3 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_REAL_64), EIF_TRUE);
		RT_SPECIAL_COUNT(tr3) = 3L;
		memset(tr3, 0, RT_SPECIAL_VISIBLE_SIZE(tr3));
	}
	*((EIF_REAL_64 *)tr3+0) = (EIF_REAL_64) arg1;
	*((EIF_REAL_64 *)tr3+1) = (EIF_REAL_64) arg2;
	*((EIF_REAL_64 *)tr3+2) = (EIF_REAL_64) arg3;
	tr2 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(3610, Dtype(tr3)))(tr3).it_r;
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(119, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("dimension_3", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(123, "dimension", Result))(Result)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 3L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ui4_1
#undef arg3
#undef arg2
#undef arg1
}

/* {SIMPLE_MATH}.new_matrix */
EIF_TYPED_VALUE F11_276 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "new_matrix";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 10, Current, 0, 2, 271);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(10, Current, 271);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("positive_rows", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("positive_cols", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(0, 0xF8000003, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(3, 0x01).id);
	ui4_1 = arg1;
	ui4_2 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(144, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
	RTNHOOK(3,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("rows_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(149, "rows", Result));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("cols_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(150, "cols", Result));
		if ((EIF_BOOLEAN)(ti4_1 == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui4_1
#undef ui4_2
#undef arg2
#undef arg1
}

/* {SIMPLE_MATH}.new_matrix_from_array */
EIF_TYPED_VALUE F11_277 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "new_matrix_from_array";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(5);
	RTLR(0,arg3);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Result);
	RTLR(4,Current);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 10, Current, 0, 3, 272);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(10, Current, 272);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,513,246,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg3, 10, l_feature_name, 3, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("positive_rows", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("positive_cols", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("correct_size", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3181, "count", arg3))(arg3)).it_i4);
		RTTE((EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) (arg1 * arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	RTDBGAL(0, 0xF8000003, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(3, 0x01).id);
	ui4_1 = arg1;
	ui4_2 = arg2;
	ur1 = RTCCL(arg3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(145, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ur1x);
	RTNHOOK(4,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("rows_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(149, "rows", Result));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("cols_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(150, "cols", Result));
		if ((EIF_BOOLEAN)(ti4_1 == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg3
#undef arg2
#undef arg1
}

/* {SIMPLE_MATH}.new_identity_matrix */
EIF_TYPED_VALUE F11_278 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "new_identity_matrix";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 10, Current, 0, 1, 273);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(10, Current, 273);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("positive_size", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0xF8000003, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(3, 0x01).id);
	ui4_1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(146, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("square", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(149, "rows", Result));
		ti4_2 = *(EIF_INTEGER_32 *)(Result + RTVA(150, "cols", Result));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("size_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(149, "rows", Result));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui4_1
#undef arg1
}

/* {SIMPLE_MATH}.new_statistics */
EIF_TYPED_VALUE F11_279 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "new_statistics";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 10, Current, 0, 0, 274);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(10, Current, 274);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF8000004, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(4, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(172, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
}

/* {SIMPLE_MATH}.new_statistics_from_array */
EIF_TYPED_VALUE F11_280 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "new_statistics_from_array";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,ur1);
	RTLR(4,Current);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 10, Current, 0, 1, 275);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(10, Current, 275);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,513,246,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 10, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF8000004, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(4, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(172, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(177, "add_all", Result))(Result, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("count_set", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(174, "count", Result))(Result)).it_i4);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3181, "count", arg1))(arg1)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef arg1
}

/* {SIMPLE_MATH}.pi */
EIF_TYPED_VALUE F11_281 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = (EIF_REAL_64) 3.1415926535897931;
	return r;
}

/* {SIMPLE_MATH}.e */
EIF_TYPED_VALUE F11_282 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = (EIF_REAL_64) 2.7182818284590455;
	return r;
}

/* {SIMPLE_MATH}.golden_ratio */
EIF_TYPED_VALUE F11_283 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = (EIF_REAL_64) 1.6180339887498949;
	return r;
}

/* {SIMPLE_MATH}.sqrt_2 */
EIF_TYPED_VALUE F11_284 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = (EIF_REAL_64) 1.4142135623730949;
	return r;
}

/* {SIMPLE_MATH}.sin */
EIF_TYPED_VALUE F11_285 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "sin";
	RTEX;
#define arg1 arg1x.it_r8
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REAL64, &Result);
	RTLU(SK_REAL64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 10, Current, 0, 1, 237);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(10, Current, 237);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x20000000, 1,0); /* Result */
	ur8_1 = arg1;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(932, 42))(Current, ur8_1x)).it_r8);
	Result = (EIF_REAL_64) tr8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef ur8_1
#undef arg1
}

/* {SIMPLE_MATH}.cos */
EIF_TYPED_VALUE F11_286 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "cos";
	RTEX;
#define arg1 arg1x.it_r8
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REAL64, &Result);
	RTLU(SK_REAL64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 10, Current, 0, 1, 238);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(10, Current, 238);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x20000000, 1,0); /* Result */
	ur8_1 = arg1;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(930, 42))(Current, ur8_1x)).it_r8);
	Result = (EIF_REAL_64) tr8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef ur8_1
#undef arg1
}

/* {SIMPLE_MATH}.tan */
EIF_TYPED_VALUE F11_287 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "tan";
	RTEX;
#define arg1 arg1x.it_r8
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REAL64, &Result);
	RTLU(SK_REAL64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 10, Current, 0, 1, 239);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(10, Current, 239);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x20000000, 1,0); /* Result */
	ur8_1 = arg1;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(934, 42))(Current, ur8_1x)).it_r8);
	Result = (EIF_REAL_64) tr8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef ur8_1
#undef arg1
}

/* {SIMPLE_MATH}.asin */
EIF_TYPED_VALUE F11_288 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "asin";
	RTEX;
#define arg1 arg1x.it_r8
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REAL64, &Result);
	RTLU(SK_REAL64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 10, Current, 0, 1, 240);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(10, Current, 240);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_range", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= (EIF_REAL_64) -1.0) && (EIF_BOOLEAN) (arg1 <= (EIF_REAL_64) 1.0)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x20000000, 1,0); /* Result */
	ur8_1 = arg1;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(933, 42))(Current, ur8_1x)).it_r8);
	Result = (EIF_REAL_64) tr8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef ur8_1
#undef arg1
}

/* {SIMPLE_MATH}.acos */
EIF_TYPED_VALUE F11_289 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "acos";
	RTEX;
#define arg1 arg1x.it_r8
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REAL64, &Result);
	RTLU(SK_REAL64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 10, Current, 0, 1, 241);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(10, Current, 241);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_range", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= (EIF_REAL_64) -1.0) && (EIF_BOOLEAN) (arg1 <= (EIF_REAL_64) 1.0)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x20000000, 1,0); /* Result */
	ur8_1 = arg1;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(931, 42))(Current, ur8_1x)).it_r8);
	Result = (EIF_REAL_64) tr8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef ur8_1
#undef arg1
}

/* {SIMPLE_MATH}.atan */
EIF_TYPED_VALUE F11_290 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "atan";
	RTEX;
#define arg1 arg1x.it_r8
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REAL64, &Result);
	RTLU(SK_REAL64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 10, Current, 0, 1, 242);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(10, Current, 242);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x20000000, 1,0); /* Result */
	ur8_1 = arg1;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(935, 42))(Current, ur8_1x)).it_r8);
	Result = (EIF_REAL_64) tr8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef ur8_1
#undef arg1
}

/* {SIMPLE_MATH}.atan2 */
EIF_TYPED_VALUE F11_291 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "atan2";
	RTEX;
#define arg1 arg1x.it_r8
#define arg2 arg2x.it_r8
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_r8 = * (EIF_REAL_64 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REAL64, &Result);
	RTLU(SK_REAL64,&arg1);
	RTLU(SK_REAL64,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 10, Current, 0, 2, 243);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(10, Current, 243);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	if ((EIF_BOOLEAN) (arg2 > tr8_1)) {
		RTHOOK(2);
		RTDBGAL(0, 0x20000000, 1,0); /* Result */
		ur8_1 = (EIF_REAL_64) ((EIF_REAL_64) (arg1) /  (EIF_REAL_64) (arg2));
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(286, dtype))(Current, ur8_1x)).it_r8);
		Result = (EIF_REAL_64) tr8_1;
	} else {
		RTHOOK(3);
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		if ((EIF_BOOLEAN) (arg2 < tr8_1)) {
			RTHOOK(4);
			tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
			if ((EIF_BOOLEAN) (arg1 >= tr8_1)) {
				RTHOOK(5);
				RTDBGAL(0, 0x20000000, 1,0); /* Result */
				ur8_1 = (EIF_REAL_64) ((EIF_REAL_64) (arg1) /  (EIF_REAL_64) (arg2));
				tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(286, dtype))(Current, ur8_1x)).it_r8);
				tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(277, dtype))(Current)).it_r8);
				Result = (EIF_REAL_64) (EIF_REAL_64) (tr8_1 + tr8_2);
			} else {
				RTHOOK(6);
				RTDBGAL(0, 0x20000000, 1,0); /* Result */
				ur8_1 = (EIF_REAL_64) ((EIF_REAL_64) (arg1) /  (EIF_REAL_64) (arg2));
				tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(286, dtype))(Current, ur8_1x)).it_r8);
				tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(277, dtype))(Current)).it_r8);
				Result = (EIF_REAL_64) (EIF_REAL_64) (tr8_1 - tr8_2);
			}
		} else {
			RTHOOK(7);
			tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
			if ((EIF_BOOLEAN) (arg1 > tr8_1)) {
				RTHOOK(8);
				RTDBGAL(0, 0x20000000, 1,0); /* Result */
				tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(277, dtype))(Current)).it_r8);
				tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
				Result = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (tr8_1) /  (EIF_REAL_64) (tr8_2));
			} else {
				RTHOOK(9);
				tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
				if ((EIF_BOOLEAN) (arg1 < tr8_1)) {
					RTHOOK(10);
					RTDBGAL(0, 0x20000000, 1,0); /* Result */
					tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(277, dtype))(Current)).it_r8);
					tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
					Result = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) -tr8_1) /  (EIF_REAL_64) (tr8_2));
				} else {
					RTHOOK(11);
					RTDBGAL(0, 0x20000000, 1,0); /* Result */
					tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
					Result = (EIF_REAL_64) tr8_1;
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef ur8_1
#undef arg2
#undef arg1
}

/* {SIMPLE_MATH}.degrees_to_radians */
EIF_TYPED_VALUE F11_292 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "degrees_to_radians";
	RTEX;
#define arg1 arg1x.it_r8
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REAL64, &Result);
	RTLU(SK_REAL64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 10, Current, 0, 1, 244);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(10, Current, 244);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x20000000, 1,0); /* Result */
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(277, dtype))(Current)).it_r8);
	Result = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (arg1 * tr8_1)) /  (EIF_REAL_64) ((EIF_REAL_64) 180.0));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef arg1
}

/* {SIMPLE_MATH}.radians_to_degrees */
EIF_TYPED_VALUE F11_293 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "radians_to_degrees";
	RTEX;
#define arg1 arg1x.it_r8
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REAL64, &Result);
	RTLU(SK_REAL64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 10, Current, 0, 1, 245);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(10, Current, 245);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x20000000, 1,0); /* Result */
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(277, dtype))(Current)).it_r8);
	Result = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (arg1 * (EIF_REAL_64) 180.0)) /  (EIF_REAL_64) (tr8_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef arg1
}

/* {SIMPLE_MATH}.exp */
EIF_TYPED_VALUE F11_294 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "exp";
	RTEX;
#define arg1 arg1x.it_r8
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REAL64, &Result);
	RTLU(SK_REAL64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 10, Current, 0, 1, 246);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(10, Current, 246);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x20000000, 1,0); /* Result */
	ur8_1 = arg1;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(937, 42))(Current, ur8_1x)).it_r8);
	Result = (EIF_REAL_64) tr8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef ur8_1
#undef arg1
}

/* {SIMPLE_MATH}.log */
EIF_TYPED_VALUE F11_295 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "log";
	RTEX;
#define arg1 arg1x.it_r8
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REAL64, &Result);
	RTLU(SK_REAL64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 10, Current, 0, 1, 247);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(10, Current, 247);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("positive", EX_PRE);
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		RTTE((EIF_BOOLEAN) (arg1 > tr8_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x20000000, 1,0); /* Result */
	ur8_1 = arg1;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(938, 42))(Current, ur8_1x)).it_r8);
	Result = (EIF_REAL_64) tr8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef ur8_1
#undef arg1
}

/* {SIMPLE_MATH}.log10 */
EIF_TYPED_VALUE F11_296 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "log10";
	RTEX;
#define arg1 arg1x.it_r8
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REAL64, &Result);
	RTLU(SK_REAL64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 10, Current, 0, 1, 248);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(10, Current, 248);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("positive", EX_PRE);
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		RTTE((EIF_BOOLEAN) (arg1 > tr8_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x20000000, 1,0); /* Result */
	ur8_1 = arg1;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(939, 42))(Current, ur8_1x)).it_r8);
	Result = (EIF_REAL_64) tr8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef ur8_1
#undef arg1
}

/* {SIMPLE_MATH}.log2 */
EIF_TYPED_VALUE F11_297 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "log2";
	RTEX;
#define arg1 arg1x.it_r8
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REAL64, &Result);
	RTLU(SK_REAL64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 10, Current, 0, 1, 249);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(10, Current, 249);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("positive", EX_PRE);
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		RTTE((EIF_BOOLEAN) (arg1 > tr8_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x20000000, 1,0); /* Result */
	ur8_1 = arg1;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(938, 42))(Current, ur8_1x)).it_r8);
	ur8_1 = (EIF_REAL_64) 2.0;
	tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(938, 42))(Current, ur8_1x)).it_r8);
	Result = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (tr8_1) /  (EIF_REAL_64) (tr8_2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef ur8_1
#undef arg1
}

/* {SIMPLE_MATH}.pow */
EIF_TYPED_VALUE F11_298 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "pow";
	RTEX;
#define arg1 arg1x.it_r8
#define arg2 arg2x.it_r8
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_r8 = * (EIF_REAL_64 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REAL64, &Result);
	RTLU(SK_REAL64,&arg1);
	RTLU(SK_REAL64,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 10, Current, 0, 2, 250);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(10, Current, 250);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x20000000, 1,0); /* Result */
	Result = (EIF_REAL_64) (EIF_REAL_64) pow ((EIF_REAL_64) (arg1), (EIF_REAL_64) (arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef arg2
#undef arg1
}

/* {SIMPLE_MATH}.sqrt */
EIF_TYPED_VALUE F11_299 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "sqrt";
	RTEX;
#define arg1 arg1x.it_r8
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REAL64, &Result);
	RTLU(SK_REAL64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 10, Current, 0, 1, 251);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(10, Current, 251);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("non_negative", EX_PRE);
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		RTTE((EIF_BOOLEAN) (arg1 >= tr8_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x20000000, 1,0); /* Result */
	ur8_1 = arg1;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(936, 42))(Current, ur8_1x)).it_r8);
	Result = (EIF_REAL_64) tr8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef ur8_1
#undef arg1
}

/* {SIMPLE_MATH}.cbrt */
EIF_TYPED_VALUE F11_300 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "cbrt";
	RTEX;
#define arg1 arg1x.it_r8
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REAL64, &Result);
	RTLU(SK_REAL64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 10, Current, 0, 1, 252);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(10, Current, 252);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	if ((EIF_BOOLEAN) (arg1 >= tr8_1)) {
		RTHOOK(2);
		RTDBGAL(0, 0x20000000, 1,0); /* Result */
		Result = (EIF_REAL_64) (EIF_REAL_64) pow ((EIF_REAL_64) (arg1), (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) 1.0) /  (EIF_REAL_64) ((EIF_REAL_64) 3.0))));
	} else {
		RTHOOK(3);
		RTDBGAL(0, 0x20000000, 1,0); /* Result */
		Result = (EIF_REAL_64) (EIF_REAL_64) -(EIF_REAL_64) pow ((EIF_REAL_64) ((EIF_REAL_64) -arg1), (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) 1.0) /  (EIF_REAL_64) ((EIF_REAL_64) 3.0))));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef arg1
}

/* {SIMPLE_MATH}.bisection */
EIF_TYPED_VALUE F11_301 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x)
{
	GTCX
	char *l_feature_name = "bisection";
	RTEX;
	EIF_REAL_64 loc1 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc2 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc3 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc4 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc5 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc6 = (EIF_REAL_64) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r8
#define arg3 arg3x.it_r8
#define arg4 arg4x.it_r8
#define arg5 arg5x.it_i4
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_i4 = * (EIF_INTEGER_32 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_r8 = * (EIF_REAL_64 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_r8 = * (EIF_REAL_64 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_r8 = * (EIF_REAL_64 *) arg2x.it_r;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_REAL64, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REAL64,&arg2);
	RTLU(SK_REAL64,&arg3);
	RTLU(SK_REAL64,&arg4);
	RTLU(SK_INT32,&arg5);
	RTLU (SK_REF, &Current);
	RTLU(SK_REAL64, &loc1);
	RTLU(SK_REAL64, &loc2);
	RTLU(SK_REAL64, &loc3);
	RTLU(SK_REAL64, &loc4);
	RTLU(SK_REAL64, &loc5);
	RTLU(SK_REAL64, &loc6);
	RTLU(SK_INT32, &loc7);
	
	RTEAA(l_feature_name, 10, Current, 7, 5, 253);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(10, Current, 253);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,658,0xFF01,0xFFF9,1,217,246,246,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		RTCC(arg1, 10, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_interval", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 < arg3), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("opposite_signs", EX_PRE);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,217,246,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr1 = RTLNTS(typres0.id, 2, 1);
		}
		((EIF_TYPED_VALUE *)tr1+1)->it_r8 = arg2;
		ur1 = RTCCL(tr1);
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4738, "item", arg1))(arg1, ur1x)).it_r8);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,217,246,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr1 = RTLNTS(typres0.id, 2, 1);
		}
		((EIF_TYPED_VALUE *)tr1+1)->it_r8 = arg3;
		ur1 = RTCCL(tr1);
		tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4738, "item", arg1))(arg1, ur1x)).it_r8);
		tr8_3 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		RTTE((EIF_BOOLEAN) ((EIF_REAL_64) (tr8_1 * tr8_2) < tr8_3), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("positive_tolerance", EX_PRE);
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		RTTE((EIF_BOOLEAN) (arg4 > tr8_1), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("positive_iterations", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg5 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	RTDBGAL(1, 0x20000000, 1, 0); /* loc1 */
	loc1 = (EIF_REAL_64) arg2;
	RTHOOK(6);
	RTDBGAL(2, 0x20000000, 1, 0); /* loc2 */
	loc2 = (EIF_REAL_64) arg3;
	RTHOOK(7);
	RTDBGAL(4, 0x20000000, 1, 0); /* loc4 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,217,246,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 2, 1);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r8 = loc1;
	ur1 = RTCCL(tr1);
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4738, "item", arg1))(arg1, ur1x)).it_r8);
	loc4 = (EIF_REAL_64) tr8_1;
	RTHOOK(8);
	RTDBGAL(5, 0x20000000, 1, 0); /* loc5 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,217,246,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 2, 1);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r8 = loc2;
	ur1 = RTCCL(tr1);
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4738, "item", arg1))(arg1, ur1x)).it_r8);
	loc5 = (EIF_REAL_64) tr8_1;
	RTHOOK(9);
	RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
	loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(10);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc7 > arg5) || (EIF_BOOLEAN) ((EIF_REAL_64) (loc2 - loc1) < arg4))) break;
		RTHOOK(11);
		RTDBGAL(3, 0x20000000, 1, 0); /* loc3 */
		loc3 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (loc1 + loc2)) /  (EIF_REAL_64) ((EIF_REAL_64) 2.0));
		RTHOOK(12);
		RTDBGAL(6, 0x20000000, 1, 0); /* loc6 */
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,217,246,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr1 = RTLNTS(typres0.id, 2, 1);
		}
		((EIF_TYPED_VALUE *)tr1+1)->it_r8 = loc3;
		ur1 = RTCCL(tr1);
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4738, "item", arg1))(arg1, ur1x)).it_r8);
		loc6 = (EIF_REAL_64) tr8_1;
		RTHOOK(13);
		tr8_1 = eif_abs_real64 (loc6);
		if ((EIF_BOOLEAN) (tr8_1 < arg4)) {
			RTHOOK(14);
			RTDBGAL(1, 0x20000000, 1, 0); /* loc1 */
			loc1 = (EIF_REAL_64) loc3;
			RTHOOK(15);
			RTDBGAL(2, 0x20000000, 1, 0); /* loc2 */
			loc2 = (EIF_REAL_64) loc3;
		} else {
			RTHOOK(16);
			tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
			if ((EIF_BOOLEAN) ((EIF_REAL_64) (loc4 * loc6) < tr8_1)) {
				RTHOOK(17);
				RTDBGAL(2, 0x20000000, 1, 0); /* loc2 */
				loc2 = (EIF_REAL_64) loc3;
				RTHOOK(18);
				RTDBGAL(5, 0x20000000, 1, 0); /* loc5 */
				loc5 = (EIF_REAL_64) loc6;
			} else {
				RTHOOK(19);
				RTDBGAL(1, 0x20000000, 1, 0); /* loc1 */
				loc1 = (EIF_REAL_64) loc3;
				RTHOOK(20);
				RTDBGAL(4, 0x20000000, 1, 0); /* loc4 */
				loc4 = (EIF_REAL_64) loc6;
			}
		}
		RTHOOK(21);
		RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
		loc7++;
	}
	RTHOOK(22);
	RTDBGAL(0, 0x20000000, 1,0); /* Result */
	Result = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (loc1 + loc2)) /  (EIF_REAL_64) ((EIF_REAL_64) 2.0));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(23);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(14);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef ur1
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {SIMPLE_MATH}.newton_raphson */
EIF_TYPED_VALUE F11_302 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x)
{
	GTCX
	char *l_feature_name = "newton_raphson";
	RTEX;
	EIF_REAL_64 loc1 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc2 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc3 = (EIF_REAL_64) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_r8
#define arg4 arg4x.it_r8
#define arg5 arg5x.it_i4
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_i4 = * (EIF_INTEGER_32 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_r8 = * (EIF_REAL_64 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_r8 = * (EIF_REAL_64 *) arg3x.it_r;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_REAL64, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REAL64,&arg3);
	RTLU(SK_REAL64,&arg4);
	RTLU(SK_INT32,&arg5);
	RTLU (SK_REF, &Current);
	RTLU(SK_REAL64, &loc1);
	RTLU(SK_REAL64, &loc2);
	RTLU(SK_REAL64, &loc3);
	RTLU(SK_INT32, &loc4);
	
	RTEAA(l_feature_name, 10, Current, 4, 5, 254);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(10, Current, 254);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,658,0xFF01,0xFFF9,1,217,246,246,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		RTCC(arg1, 10, l_feature_name, 1, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,658,0xFF01,0xFFF9,1,217,246,246,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		RTCC(arg2, 10, l_feature_name, 2, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("positive_tolerance", EX_PRE);
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		RTTE((EIF_BOOLEAN) (arg4 > tr8_1), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("positive_iterations", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg5 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(1, 0x20000000, 1, 0); /* loc1 */
	loc1 = (EIF_REAL_64) arg3;
	RTHOOK(4);
	RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
	loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN) (loc4 > arg5)) break;
		RTHOOK(6);
		RTDBGAL(2, 0x20000000, 1, 0); /* loc2 */
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,217,246,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr1 = RTLNTS(typres0.id, 2, 1);
		}
		((EIF_TYPED_VALUE *)tr1+1)->it_r8 = loc1;
		ur1 = RTCCL(tr1);
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4738, "item", arg1))(arg1, ur1x)).it_r8);
		loc2 = (EIF_REAL_64) tr8_1;
		RTHOOK(7);
		tr8_1 = eif_abs_real64 (loc2);
		if ((EIF_BOOLEAN) (tr8_1 < arg4)) {
			RTHOOK(8);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg5 + ((EIF_INTEGER_32) 1L));
		} else {
			RTHOOK(9);
			RTDBGAL(3, 0x20000000, 1, 0); /* loc3 */
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,217,246,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLNTS(typres0.id, 2, 1);
			}
			((EIF_TYPED_VALUE *)tr1+1)->it_r8 = loc1;
			ur1 = RTCCL(tr1);
			tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4738, "item", arg2))(arg2, ur1x)).it_r8);
			loc3 = (EIF_REAL_64) tr8_1;
			RTHOOK(10);
			tr8_1 = eif_abs_real64 (loc3);
			if ((EIF_BOOLEAN) (tr8_1 < (EIF_REAL_64) 1.0e-15)) {
				RTHOOK(11);
				RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
				loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg5 + ((EIF_INTEGER_32) 1L));
			} else {
				RTHOOK(12);
				RTDBGAL(1, 0x20000000, 1, 0); /* loc1 */
				loc1 -= (EIF_REAL_64) ((EIF_REAL_64) (loc2) /  (EIF_REAL_64) (loc3));
			}
		}
		RTHOOK(13);
		RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
		loc4++;
	}
	RTHOOK(14);
	RTDBGAL(0, 0x20000000, 1,0); /* Result */
	Result = (EIF_REAL_64) loc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(11);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef ur1
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {SIMPLE_MATH}.trapezoidal */
EIF_TYPED_VALUE F11_303 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "trapezoidal";
	RTEX;
	EIF_REAL_64 loc1 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc2 = (EIF_REAL_64) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REAL_64 loc4 = (EIF_REAL_64) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r8
#define arg3 arg3x.it_r8
#define arg4 arg4x.it_i4
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_r8 = * (EIF_REAL_64 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_r8 = * (EIF_REAL_64 *) arg2x.it_r;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_REAL64, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REAL64,&arg2);
	RTLU(SK_REAL64,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU (SK_REF, &Current);
	RTLU(SK_REAL64, &loc1);
	RTLU(SK_REAL64, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_REAL64, &loc4);
	
	RTEAA(l_feature_name, 10, Current, 4, 4, 255);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(10, Current, 255);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,658,0xFF01,0xFFF9,1,217,246,246,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		RTCC(arg1, 10, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_interval", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 < arg3), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("positive_intervals", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg4 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(1, 0x20000000, 1, 0); /* loc1 */
	tr8_1 = (EIF_REAL_64) (arg4);
	loc1 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (arg3 - arg2)) /  (EIF_REAL_64) (tr8_1));
	RTHOOK(4);
	RTDBGAL(2, 0x20000000, 1, 0); /* loc2 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,217,246,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 2, 1);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r8 = arg2;
	ur1 = RTCCL(tr1);
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4738, "item", arg1))(arg1, ur1x)).it_r8);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,217,246,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 2, 1);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r8 = arg3;
	ur1 = RTCCL(tr1);
	tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4738, "item", arg1))(arg1, ur1x)).it_r8);
	loc2 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (tr8_1 + tr8_2)) /  (EIF_REAL_64) ((EIF_REAL_64) 2.0));
	RTHOOK(5);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(6);
		if ((EIF_BOOLEAN) (loc3 >= arg4)) break;
		RTHOOK(7);
		RTDBGAL(4, 0x20000000, 1, 0); /* loc4 */
		tr8_1 = (EIF_REAL_64) (loc3);
		loc4 = (EIF_REAL_64) (EIF_REAL_64) (arg2 + (EIF_REAL_64) (tr8_1 * loc1));
		RTHOOK(8);
		RTDBGAL(2, 0x20000000, 1, 0); /* loc2 */
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,217,246,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr1 = RTLNTS(typres0.id, 2, 1);
		}
		((EIF_TYPED_VALUE *)tr1+1)->it_r8 = loc4;
		ur1 = RTCCL(tr1);
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4738, "item", arg1))(arg1, ur1x)).it_r8);
		loc2 += tr8_1;
		RTHOOK(9);
		RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
		loc3++;
	}
	RTHOOK(10);
	RTDBGAL(0, 0x20000000, 1,0); /* Result */
	Result = (EIF_REAL_64) (EIF_REAL_64) (loc1 * loc2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(10);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef ur1
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {SIMPLE_MATH}.simpson */
EIF_TYPED_VALUE F11_304 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "simpson";
	RTEX;
	EIF_REAL_64 loc1 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc2 = (EIF_REAL_64) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REAL_64 loc4 = (EIF_REAL_64) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r8
#define arg3 arg3x.it_r8
#define arg4 arg4x.it_i4
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_r8 = * (EIF_REAL_64 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_r8 = * (EIF_REAL_64 *) arg2x.it_r;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_REAL64, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REAL64,&arg2);
	RTLU(SK_REAL64,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU (SK_REF, &Current);
	RTLU(SK_REAL64, &loc1);
	RTLU(SK_REAL64, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_REAL64, &loc4);
	
	RTEAA(l_feature_name, 10, Current, 4, 4, 256);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(10, Current, 256);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,658,0xFF01,0xFFF9,1,217,246,246,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		RTCC(arg1, 10, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_interval", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 < arg3), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("even_intervals", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg4 > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)((EIF_INTEGER_32) (arg4 % ((EIF_INTEGER_32) 2L)) == ((EIF_INTEGER_32) 0L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(1, 0x20000000, 1, 0); /* loc1 */
	tr8_1 = (EIF_REAL_64) (arg4);
	loc1 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (arg3 - arg2)) /  (EIF_REAL_64) (tr8_1));
	RTHOOK(4);
	RTDBGAL(2, 0x20000000, 1, 0); /* loc2 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,217,246,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 2, 1);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r8 = arg2;
	ur1 = RTCCL(tr1);
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4738, "item", arg1))(arg1, ur1x)).it_r8);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,217,246,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 2, 1);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r8 = arg3;
	ur1 = RTCCL(tr1);
	tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4738, "item", arg1))(arg1, ur1x)).it_r8);
	loc2 = (EIF_REAL_64) (EIF_REAL_64) (tr8_1 + tr8_2);
	RTHOOK(5);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(6);
		if ((EIF_BOOLEAN) (loc3 >= arg4)) break;
		RTHOOK(7);
		RTDBGAL(4, 0x20000000, 1, 0); /* loc4 */
		tr8_1 = (EIF_REAL_64) (loc3);
		loc4 = (EIF_REAL_64) (EIF_REAL_64) (arg2 + (EIF_REAL_64) (tr8_1 * loc1));
		RTHOOK(8);
		if ((EIF_BOOLEAN)((EIF_INTEGER_32) (loc3 % ((EIF_INTEGER_32) 2L)) == ((EIF_INTEGER_32) 0L))) {
			RTHOOK(9);
			RTDBGAL(2, 0x20000000, 1, 0); /* loc2 */
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,217,246,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLNTS(typres0.id, 2, 1);
			}
			((EIF_TYPED_VALUE *)tr1+1)->it_r8 = loc4;
			ur1 = RTCCL(tr1);
			tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4738, "item", arg1))(arg1, ur1x)).it_r8);
			loc2 += (EIF_REAL_64) ((EIF_REAL_64) 2.0 * tr8_1);
		} else {
			RTHOOK(10);
			RTDBGAL(2, 0x20000000, 1, 0); /* loc2 */
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,217,246,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLNTS(typres0.id, 2, 1);
			}
			((EIF_TYPED_VALUE *)tr1+1)->it_r8 = loc4;
			ur1 = RTCCL(tr1);
			tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4738, "item", arg1))(arg1, ur1x)).it_r8);
			loc2 += (EIF_REAL_64) ((EIF_REAL_64) 4.0 * tr8_1);
		}
		RTHOOK(11);
		RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
		loc3++;
	}
	RTHOOK(12);
	RTDBGAL(0, 0x20000000, 1,0); /* Result */
	Result = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (loc1 * loc2)) /  (EIF_REAL_64) ((EIF_REAL_64) 3.0));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(10);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef ur1
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {SIMPLE_MATH}.linear_interpolate */
EIF_TYPED_VALUE F11_305 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x)
{
	GTCX
	char *l_feature_name = "linear_interpolate";
	RTEX;
#define arg1 arg1x.it_r8
#define arg2 arg2x.it_r8
#define arg3 arg3x.it_r8
#define arg4 arg4x.it_r8
#define arg5 arg5x.it_r8
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_r8 = * (EIF_REAL_64 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_r8 = * (EIF_REAL_64 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_r8 = * (EIF_REAL_64 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_r8 = * (EIF_REAL_64 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REAL64, &Result);
	RTLU(SK_REAL64,&arg1);
	RTLU(SK_REAL64,&arg2);
	RTLU(SK_REAL64,&arg3);
	RTLU(SK_REAL64,&arg4);
	RTLU(SK_REAL64,&arg5);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 10, Current, 0, 5, 257);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(10, Current, 257);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("different_x", EX_PRE);
		tr8_1 = eif_abs_real64 ((EIF_REAL_64) (arg3 - arg1));
		RTTE((EIF_BOOLEAN) (tr8_1 > (EIF_REAL_64) 1.0e-15), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x20000000, 1,0); /* Result */
	Result = (EIF_REAL_64) (EIF_REAL_64) (arg2 + (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (arg4 - arg2) * (EIF_REAL_64) (arg5 - arg1))) /  (EIF_REAL_64) ((EIF_REAL_64) (arg3 - arg1))));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {SIMPLE_MATH}.lagrange_interpolate */
EIF_TYPED_VALUE F11_306 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "lagrange_interpolate";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REAL_64 loc4 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc5 = (EIF_REAL_64) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_r8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_r8 = * (EIF_REAL_64 *) arg3x.it_r;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_REAL64, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REAL64,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_REAL64, &loc4);
	RTLU(SK_REAL64, &loc5);
	
	RTEAA(l_feature_name, 10, Current, 5, 3, 258);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(10, Current, 258);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,513,246,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 10, l_feature_name, 1, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,513,246,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg2, 10, l_feature_name, 2, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("same_count", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3181, "count", arg1))(arg1)).it_i4);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3181, "count", arg2))(arg2)).it_i4);
		RTTE((EIF_BOOLEAN)(ti4_1 == ti4_2), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_empty", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3181, "count", arg1))(arg1)).it_i4);
		RTTE((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3181, "count", arg1))(arg1)).it_i4);
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(3464, "lower", arg1));
	loc2 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(5);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(3463, "upper", arg1));
		if ((EIF_BOOLEAN) (loc2 > ti4_1)) break;
		RTHOOK(6);
		RTDBGAL(5, 0x20000000, 1, 0); /* loc5 */
		loc5 = (EIF_REAL_64) (EIF_REAL_64) 1.0;
		RTHOOK(7);
		RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(3464, "lower", arg1));
		loc3 = (EIF_INTEGER_32) ti4_2;
		for (;;) {
			RTHOOK(8);
			ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(3463, "upper", arg1));
			if ((EIF_BOOLEAN) (loc3 > ti4_2)) break;
			RTHOOK(9);
			if ((EIF_BOOLEAN)(loc2 != loc3)) {
				RTHOOK(10);
				RTDBGAL(5, 0x20000000, 1, 0); /* loc5 */
				ui4_1 = loc3;
				tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3154, "item", arg1))(arg1, ui4_1x)).it_r8);
				ui4_1 = loc2;
				tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3154, "item", arg1))(arg1, ui4_1x)).it_r8);
				ui4_1 = loc3;
				tr8_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3154, "item", arg1))(arg1, ui4_1x)).it_r8);
				loc5 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (loc5 * (EIF_REAL_64) (arg3 - tr8_1))) /  (EIF_REAL_64) ((EIF_REAL_64) (tr8_2 - tr8_3)));
			}
			RTHOOK(11);
			RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
			loc3++;
		}
		RTHOOK(12);
		RTDBGAL(0, 0x20000000, 1,0); /* Result */
		ui4_1 = loc2;
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3154, "item", arg2))(arg2, ui4_1x)).it_r8);
		Result += (EIF_REAL_64) (tr8_1 * loc5);
		RTHOOK(13);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(10);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef ui4_1
#undef arg3
#undef arg2
#undef arg1
}

/* {SIMPLE_MATH}.factorial */
EIF_TYPED_VALUE F11_307 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "factorial";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT64, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 10, Current, 1, 1, 259);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(10, Current, 259);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((EIF_BOOLEAN) (arg1 <= ((EIF_INTEGER_32) 1L))) {
		RTHOOK(3);
		RTDBGAL(0, 0x24000000, 1,0); /* Result */
		Result = (EIF_INTEGER_64) (EIF_INTEGER_64) ((EIF_INTEGER_32) 1L);
	} else {
		RTHOOK(4);
		RTDBGAL(0, 0x24000000, 1,0); /* Result */
		Result = (EIF_INTEGER_64) (EIF_INTEGER_64) ((EIF_INTEGER_32) 1L);
		RTHOOK(5);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
		for (;;) {
			RTHOOK(6);
			if ((EIF_BOOLEAN) (loc1 > arg1)) break;
			RTHOOK(7);
			RTDBGAL(0, 0x24000000, 1,0); /* Result */
			ti8_1 = (EIF_INTEGER_64) loc1;
			Result *= ti8_1;
			RTHOOK(8);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1++;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT64; r.it_i8 = Result; return r; }
#undef arg1
}

/* {SIMPLE_MATH}.binomial */
EIF_TYPED_VALUE F11_308 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "binomial";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	EIF_INTEGER_64 ti8_3;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT64, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 10, Current, 0, 2, 260);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(10, Current, 260);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_n", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_k", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (arg2 <= arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(0, 0x24000000, 1,0); /* Result */
	ui4_1 = arg1;
	ti8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(303, dtype))(Current, ui4_1x)).it_i8);
	ui4_1 = arg2;
	ti8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(303, dtype))(Current, ui4_1x)).it_i8);
	ui4_1 = (EIF_INTEGER_32) (arg1 - arg2);
	ti8_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(303, dtype))(Current, ui4_1x)).it_i8);
	Result = (EIF_INTEGER_64) (EIF_INTEGER_64) (ti8_1 / (EIF_INTEGER_64) (ti8_2 * ti8_3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT64; r.it_i8 = Result; return r; }
#undef ui4_1
#undef arg2
#undef arg1
}

/* {SIMPLE_MATH}.gcd */
EIF_TYPED_VALUE F11_309 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "gcd";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	
	RTEAA(l_feature_name, 10, Current, 3, 2, 261);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(10, Current, 261);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("positive_a", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("positive_b", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) arg1;
	RTHOOK(4);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	loc2 = (EIF_INTEGER_32) arg2;
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L))) break;
		RTHOOK(6);
		RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
		loc3 = (EIF_INTEGER_32) loc2;
		RTHOOK(7);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 % loc2);
		RTHOOK(8);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1 = (EIF_INTEGER_32) loc3;
	}
	RTHOOK(9);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	Result = (EIF_INTEGER_32) loc1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("positive", EX_POST);
		if ((EIF_BOOLEAN) (Result > ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg2
#undef arg1
}

/* {SIMPLE_MATH}.lcm */
EIF_TYPED_VALUE F11_310 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "lcm";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 10, Current, 0, 2, 262);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(10, Current, 262);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("positive_a", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("positive_b", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	ui4_1 = arg1;
	ui4_2 = arg2;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(305, dtype))(Current, ui4_1x, ui4_2x)).it_i4);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg1 * arg2) / ti4_1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("positive", EX_POST);
		if ((EIF_BOOLEAN) (Result > ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef ui4_1
#undef ui4_2
#undef arg2
#undef arg1
}

/* {SIMPLE_MATH}.clamp */
EIF_TYPED_VALUE F11_311 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "clamp";
	RTEX;
#define arg1 arg1x.it_r8
#define arg2 arg2x.it_r8
#define arg3 arg3x.it_r8
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_r8 = * (EIF_REAL_64 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_r8 = * (EIF_REAL_64 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REAL64, &Result);
	RTLU(SK_REAL64,&arg1);
	RTLU(SK_REAL64,&arg2);
	RTLU(SK_REAL64,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 10, Current, 0, 3, 263);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(10, Current, 263);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_range", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= arg3), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((EIF_BOOLEAN) (arg1 < arg2)) {
		RTHOOK(3);
		RTDBGAL(0, 0x20000000, 1,0); /* Result */
		Result = (EIF_REAL_64) arg2;
	} else {
		RTHOOK(4);
		if ((EIF_BOOLEAN) (arg1 > arg3)) {
			RTHOOK(5);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) arg3;
		} else {
			RTHOOK(6);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) arg1;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("in_range", EX_POST);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (Result >= arg2) && (EIF_BOOLEAN) (Result <= arg3))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef arg3
#undef arg2
#undef arg1
}

/* {SIMPLE_MATH}.lerp */
EIF_TYPED_VALUE F11_312 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "lerp";
	RTEX;
#define arg1 arg1x.it_r8
#define arg2 arg2x.it_r8
#define arg3 arg3x.it_r8
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_r8 = * (EIF_REAL_64 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_r8 = * (EIF_REAL_64 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REAL64, &Result);
	RTLU(SK_REAL64,&arg1);
	RTLU(SK_REAL64,&arg2);
	RTLU(SK_REAL64,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 10, Current, 0, 3, 264);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(10, Current, 264);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x20000000, 1,0); /* Result */
	Result = (EIF_REAL_64) (EIF_REAL_64) (arg1 + (EIF_REAL_64) ((EIF_REAL_64) (arg2 - arg1) * arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef arg3
#undef arg2
#undef arg1
}

/* {SIMPLE_MATH}.is_close */
EIF_TYPED_VALUE F11_313 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "is_close";
	RTEX;
#define arg1 arg1x.it_r8
#define arg2 arg2x.it_r8
#define arg3 arg3x.it_r8
	EIF_REAL_64 tr8_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_r8 = * (EIF_REAL_64 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_r8 = * (EIF_REAL_64 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REAL64,&arg1);
	RTLU(SK_REAL64,&arg2);
	RTLU(SK_REAL64,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 10, Current, 0, 3, 265);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(10, Current, 265);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("positive_tolerance", EX_PRE);
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		RTTE((EIF_BOOLEAN) (arg3 >= tr8_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tr8_1 = eif_abs_real64 ((EIF_REAL_64) (arg1 - arg2));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tr8_1 <= arg3);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg3
#undef arg2
#undef arg1
}

void EIF_Minit11 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
