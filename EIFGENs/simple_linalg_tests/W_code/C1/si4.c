/*
 * Code for class SIMPLE_MATRIX
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F4_144(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F4_145(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F4_146(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F4_147(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F4_148(EIF_REFERENCE);
extern EIF_TYPED_VALUE F4_149(EIF_REFERENCE);
extern EIF_TYPED_VALUE F4_150(EIF_REFERENCE);
extern EIF_TYPED_VALUE F4_151(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F4_152(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F4_153(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F4_154(EIF_REFERENCE);
extern void F4_155(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F4_156(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F4_157(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F4_158(EIF_REFERENCE);
extern EIF_TYPED_VALUE F4_159(EIF_REFERENCE);
extern EIF_TYPED_VALUE F4_160(EIF_REFERENCE);
extern EIF_TYPED_VALUE F4_161(EIF_REFERENCE);
extern EIF_TYPED_VALUE F4_162(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F4_163(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F4_164(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F4_165(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F4_166(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F4_167(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F4_168(EIF_REFERENCE);
extern EIF_TYPED_VALUE F4_169(EIF_REFERENCE);
extern EIF_TYPED_VALUE F4_170(EIF_REFERENCE);
extern EIF_TYPED_VALUE F4_171(EIF_REFERENCE);
extern EIF_TYPED_VALUE F4_172(EIF_REFERENCE);
extern EIF_TYPED_VALUE F4_173(EIF_REFERENCE);
extern void F4_7078(EIF_REFERENCE, int);
extern void EIF_Minit4(void);

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

/* {SIMPLE_MATRIX}.make */
void F4_144 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 3, Current, 0, 2, 108);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(3, Current, 108);
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
	RTDBGAA(Current, dtype, 149, 0x10000000, 1); /* rows */
	*(EIF_INTEGER_32 *)(Current + RTWA(149, dtype)) = (EIF_INTEGER_32) arg1;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 150, 0x10000000, 1); /* cols */
	*(EIF_INTEGER_32 *)(Current + RTWA(150, dtype)) = (EIF_INTEGER_32) arg2;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 171, 0xF8000201, 0); /* data */
	tr1 = RTLNSMART(RTWCT(171, dtype, Dftype(Current)).id);
	ur8_1 = (EIF_REAL_64) 0.0;
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = (EIF_INTEGER_32) (arg1 * arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(3428, Dtype(tr1)))(tr1, ur8_1x, ui4_1x, ui4_2x);
	RTNHOOK(5,1);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(171, dtype)) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("rows_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("cols_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(150, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg2)) {
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
	RTLO(4);
	RTEE;
#undef ur8_1
#undef ui4_1
#undef ui4_2
#undef arg2
#undef arg1
}

/* {SIMPLE_MATRIX}.make_from_array */
void F4_145 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "make_from_array";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,arg3);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 3, Current, 1, 3, 109);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(3, Current, 109);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,513,246,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg3, 3, l_feature_name, 3, typres0, 0x01);
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
	ui4_1 = arg1;
	ui4_2 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(144, dtype))(Current, ui4_1x, ui4_2x);
	RTHOOK(5);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(6);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3181, "count", arg3))(arg3)).it_i4);
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
		RTHOOK(7);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(171, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(7,1);
		ti4_2 = *(EIF_INTEGER_32 *)(arg3 + RTVA(3464, "lower", arg3));
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_2 + loc1) - ((EIF_INTEGER_32) 1L));
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3154, "item", arg3))(arg3, ui4_1x)).it_r8);
		ur8_1 = tr8_1;
		ui4_1 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3157, "put", tr1))(tr1, ur8_1x, ui4_1x);
		RTHOOK(8);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("rows_set", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
		if ((EIF_BOOLEAN)(ti4_2 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("cols_set", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(150, dtype));
		if ((EIF_BOOLEAN)(ti4_2 == arg2)) {
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
	RTLO(6);
	RTEE;
#undef up1
#undef ur8_1
#undef ui4_1
#undef ui4_2
#undef arg3
#undef arg2
#undef arg1
}

/* {SIMPLE_MATRIX}.make_identity */
void F4_146 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make_identity";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 3, Current, 1, 1, 110);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(3, Current, 110);
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
	ui4_1 = arg1;
	ui4_2 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(144, dtype))(Current, ui4_1x, ui4_2x);
	RTHOOK(3);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN) (loc1 > arg1)) break;
		RTHOOK(5);
		ur8_1 = (EIF_REAL_64) 1.0;
		ui4_1 = loc1;
		ui4_2 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(155, dtype))(Current, ur8_1x, ui4_1x, ui4_2x);
		RTHOOK(6);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("square", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(150, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("size_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
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
#undef ur8_1
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {SIMPLE_MATRIX}.make_zero */
void F4_147 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "make_zero";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 3, Current, 0, 2, 111);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(3, Current, 111);
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
	ui4_1 = arg1;
	ui4_2 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(144, dtype))(Current, ui4_1x, ui4_2x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("rows_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("cols_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(150, dtype));
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
#undef ui4_1
#undef ui4_2
#undef arg2
#undef arg1
}

/* {SIMPLE_MATRIX}.model */
EIF_TYPED_VALUE F4_148 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "model";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
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
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,loc1);
	RTLR(4,ur1);
	RTLR(5,loc4);
	RTLR(6,tr2);
	RTLIU(7);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 3, Current, 4, 0, 112);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(3, Current, 112);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF80002CF, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,719,0xFF01,655,246,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(3);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
		if ((EIF_BOOLEAN) (loc2 > ti4_1)) break;
		RTHOOK(4);
		RTDBGAL(1, 0xF800028F, 0, 0); /* loc1 */
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,655,246,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr1 = RTLN(typres0.id);
		}
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
		RTNHOOK(4,1);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(5);
		RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
		loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(6);
			ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(150, dtype));
			if ((EIF_BOOLEAN) (loc3 > ti4_2)) break;
			RTHOOK(7);
			RTDBGAL(1, 0xF800028F, 0, 0); /* loc1 */
			ui4_1 = loc2;
			ui4_2 = loc3;
			tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(151, dtype))(Current, ui4_1x, ui4_2x)).it_r8);
			ur8_1 = tr8_1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1783, "extended", loc1))(loc1, ur8_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc1 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(8);
			RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
			loc3++;
		}
		RTHOOK(9);
		RTDBGAL(0, 0xF80002CF, 0,0); /* Result */
		ur1 = RTCCL(loc1);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1783, "extended", Result))(Result, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		Result = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(10);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("row_count", EX_POST);
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1772, "count", Result))(Result)).it_i4);
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
		if ((EIF_BOOLEAN)(ti4_3 == ti4_4)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("col_count", EX_POST);
		RTNHOOK(12,1);
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
		ui4_1 = ti4_3;
		tr1 = RTLN(eif_new_type(222, 0x00).id);
		*(EIF_INTEGER_32 *)tr1 = ((EIF_INTEGER_32) 1L);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4154, "interval", tr1))(tr1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3021, "new_cursor", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc4 = (EIF_REFERENCE) RTCCL(tr1);
		tb1 = EIF_TRUE;
		for (;;) {
			if (!tb1) break;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3007, "after", loc4))(loc4)).it_b);
			if (tb2) break;
			RTHOOK(13);
			ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3006, "item", loc4))(loc4)).it_i4);
			ui4_1 = ti4_3;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1768, "item", Result))(Result, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1772, "count", tr1))(tr1)).it_i4);
			ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(150, dtype));
			tb1 = (EIF_BOOLEAN)(ti4_3 == ti4_4);
			RTNHOOK(13,1);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3008, "forth", loc4))(loc4);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ur8_1
#undef ui4_1
#undef ui4_2
}

/* {SIMPLE_MATRIX}.rows */
EIF_TYPED_VALUE F4_149 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(149,Dtype(Current)));
	return r;
}


/* {SIMPLE_MATRIX}.cols */
EIF_TYPED_VALUE F4_150 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(150,Dtype(Current)));
	return r;
}


/* {SIMPLE_MATRIX}.item */
EIF_TYPED_VALUE F4_151 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "item";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_REAL64, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 3, Current, 0, 2, 115);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(3, Current, 115);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_row", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)) && (EIF_BOOLEAN) (arg1 <= ti4_1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_col", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(150, dtype));
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 1L)) && (EIF_BOOLEAN) (arg2 <= ti4_1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(0, 0x20000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(171, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(150, dtype));
	ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L)) * ti4_1) + arg2);
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3154, "item", tr1))(tr1, ui4_1x)).it_r8);
	Result = (EIF_REAL_64) tr8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef up1
#undef ui4_1
#undef arg2
#undef arg1
}

/* {SIMPLE_MATRIX}.row */
EIF_TYPED_VALUE F4_152 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "row";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 3, Current, 1, 1, 116);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(3, Current, 116);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_row", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)) && (EIF_BOOLEAN) (arg1 <= ti4_1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0xF8000002, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(2, 0x01).id);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(150, dtype));
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(118, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(4);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(150, dtype));
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
		RTHOOK(5);
		ui4_1 = arg1;
		ui4_2 = loc1;
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(151, dtype))(Current, ui4_1x, ui4_2x)).it_r8);
		ur8_1 = tr8_1;
		ui4_1 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(126, "put", Result))(Result, ur8_1x, ui4_1x);
		RTHOOK(6);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("correct_dimension", EX_POST);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(123, "dimension", Result))(Result)).it_i4);
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(150, dtype));
		if ((EIF_BOOLEAN)(ti4_2 == ti4_3)) {
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
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur8_1
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {SIMPLE_MATRIX}.column */
EIF_TYPED_VALUE F4_153 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "column";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 3, Current, 1, 1, 117);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(3, Current, 117);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_col", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(150, dtype));
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)) && (EIF_BOOLEAN) (arg1 <= ti4_1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0xF8000002, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(2, 0x01).id);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(118, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(4);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
		RTHOOK(5);
		ui4_1 = loc1;
		ui4_2 = arg1;
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(151, dtype))(Current, ui4_1x, ui4_2x)).it_r8);
		ur8_1 = tr8_1;
		ui4_1 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(126, "put", Result))(Result, ur8_1x, ui4_1x);
		RTHOOK(6);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("correct_dimension", EX_POST);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(123, "dimension", Result))(Result)).it_i4);
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
		if ((EIF_BOOLEAN)(ti4_2 == ti4_3)) {
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
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur8_1
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {SIMPLE_MATRIX}.diagonal */
EIF_TYPED_VALUE F4_154 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "diagonal";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 3, Current, 1, 0, 118);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(3, Current, 118);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_square", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(150, dtype));
		RTTE((EIF_BOOLEAN)(ti4_1 == ti4_2), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0xF8000002, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(2, 0x01).id);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(118, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(4);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
		RTHOOK(5);
		ui4_1 = loc1;
		ui4_2 = loc1;
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(151, dtype))(Current, ui4_1x, ui4_2x)).it_r8);
		ur8_1 = tr8_1;
		ui4_1 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(126, "put", Result))(Result, ur8_1x, ui4_1x);
		RTHOOK(6);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("correct_dimension", EX_POST);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(123, "dimension", Result))(Result)).it_i4);
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
		if ((EIF_BOOLEAN)(ti4_2 == ti4_3)) {
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
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur8_1
#undef ui4_1
#undef ui4_2
}

/* {SIMPLE_MATRIX}.put */
void F4_155 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "put";
	RTEX;
#define arg1 arg1x.it_r8
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REAL64,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 3, Current, 0, 3, 119);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(3, Current, 119);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_row", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 1L)) && (EIF_BOOLEAN) (arg2 <= ti4_1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_col", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(150, dtype));
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 1L)) && (EIF_BOOLEAN) (arg3 <= ti4_1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
		ti4_1 = ti4_2;
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(150, dtype));
		ti4_2 = ti4_3;
		in_assertion = 0;
	}
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(171, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	ur8_1 = arg1;
	ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(150, dtype));
	ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L)) * ti4_3) + arg3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3157, "put", tr1))(tr1, ur8_1x, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("value_set", EX_POST);
		ui4_1 = arg2;
		ui4_2 = arg3;
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(151, dtype))(Current, ui4_1x, ui4_2x)).it_r8);
		if ((EIF_BOOLEAN)(tr8_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("dimensions_unchanged", EX_POST);
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(150, dtype));
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(ti4_3 == ti4_1) && (EIF_BOOLEAN)(ti4_4 == ti4_2))) {
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
	RTLO(5);
	RTEE;
#undef up1
#undef ur8_1
#undef ui4_1
#undef ui4_2
#undef arg3
#undef arg2
#undef arg1
}

/* {SIMPLE_MATRIX}.set_row */
void F4_156 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "set_row";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(5);
	RTLR(0,arg2);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 3, Current, 2, 2, 120);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(3, Current, 120);
	RTCC(arg2, 3, l_feature_name, 2, eif_new_type(2, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_row", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)) && (EIF_BOOLEAN) (arg1 <= ti4_1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("correct_dimension", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(123, "dimension", arg2))(arg2)).it_i4);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(150, dtype));
		RTTE((EIF_BOOLEAN)(ti4_1 == ti4_2), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
		ti4_1 = ti4_2;
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(150, dtype));
		ti4_2 = ti4_3;
		in_assertion = 0;
	}
	RTHOOK(3);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(4);
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(150, dtype));
		if ((EIF_BOOLEAN) (loc1 > ti4_3)) break;
		RTHOOK(5);
		ui4_1 = loc1;
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(124, "item", arg2))(arg2, ui4_1x)).it_r8);
		ur8_1 = tr8_1;
		ui4_1 = arg1;
		ui4_2 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(155, dtype))(Current, ur8_1x, ui4_1x, ui4_2x);
		RTHOOK(6);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("row_set", EX_POST);
		RTNHOOK(7,1);
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(150, dtype));
		ui4_1 = ti4_4;
		tr1 = RTLN(eif_new_type(222, 0x00).id);
		*(EIF_INTEGER_32 *)tr1 = ((EIF_INTEGER_32) 1L);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4154, "interval", tr1))(tr1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3021, "new_cursor", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc2 = (EIF_REFERENCE) RTCCL(tr1);
		tb1 = EIF_TRUE;
		for (;;) {
			if (!tb1) break;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3007, "after", loc2))(loc2)).it_b);
			if (tb2) break;
			RTHOOK(8);
			ui4_1 = arg1;
			ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3006, "item", loc2))(loc2)).it_i4);
			ui4_2 = ti4_4;
			tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(151, dtype))(Current, ui4_1x, ui4_2x)).it_r8);
			ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3006, "item", loc2))(loc2)).it_i4);
			ui4_1 = ti4_4;
			tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(124, "item", arg2))(arg2, ui4_1x)).it_r8);
			tb1 = (EIF_BOOLEAN)(tr8_1 == tr8_2);
			RTNHOOK(8,1);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3008, "forth", loc2))(loc2);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("dimensions_unchanged", EX_POST);
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
		ti4_5 = *(EIF_INTEGER_32 *)(Current + RTWA(150, dtype));
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(ti4_4 == ti4_1) && (EIF_BOOLEAN)(ti4_5 == ti4_2))) {
			RTCK;
		} else {
			RTCF;
		}
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
#undef ur8_1
#undef ui4_1
#undef ui4_2
#undef arg2
#undef arg1
}

/* {SIMPLE_MATRIX}.set_column */
void F4_157 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "set_column";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(5);
	RTLR(0,arg2);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 3, Current, 2, 2, 121);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(3, Current, 121);
	RTCC(arg2, 3, l_feature_name, 2, eif_new_type(2, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_col", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(150, dtype));
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)) && (EIF_BOOLEAN) (arg1 <= ti4_1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("correct_dimension", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(123, "dimension", arg2))(arg2)).it_i4);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
		RTTE((EIF_BOOLEAN)(ti4_1 == ti4_2), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
		ti4_1 = ti4_2;
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(150, dtype));
		ti4_2 = ti4_3;
		in_assertion = 0;
	}
	RTHOOK(3);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(4);
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
		if ((EIF_BOOLEAN) (loc1 > ti4_3)) break;
		RTHOOK(5);
		ui4_1 = loc1;
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(124, "item", arg2))(arg2, ui4_1x)).it_r8);
		ur8_1 = tr8_1;
		ui4_1 = loc1;
		ui4_2 = arg1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(155, dtype))(Current, ur8_1x, ui4_1x, ui4_2x);
		RTHOOK(6);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("column_set", EX_POST);
		RTNHOOK(7,1);
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
		ui4_1 = ti4_4;
		tr1 = RTLN(eif_new_type(222, 0x00).id);
		*(EIF_INTEGER_32 *)tr1 = ((EIF_INTEGER_32) 1L);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4154, "interval", tr1))(tr1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3021, "new_cursor", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc2 = (EIF_REFERENCE) RTCCL(tr1);
		tb1 = EIF_TRUE;
		for (;;) {
			if (!tb1) break;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3007, "after", loc2))(loc2)).it_b);
			if (tb2) break;
			RTHOOK(8);
			ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3006, "item", loc2))(loc2)).it_i4);
			ui4_1 = ti4_4;
			ui4_2 = arg1;
			tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(151, dtype))(Current, ui4_1x, ui4_2x)).it_r8);
			ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3006, "item", loc2))(loc2)).it_i4);
			ui4_1 = ti4_4;
			tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(124, "item", arg2))(arg2, ui4_1x)).it_r8);
			tb1 = (EIF_BOOLEAN)(tr8_1 == tr8_2);
			RTNHOOK(8,1);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3008, "forth", loc2))(loc2);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("dimensions_unchanged", EX_POST);
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
		ti4_5 = *(EIF_INTEGER_32 *)(Current + RTWA(150, dtype));
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(ti4_4 == ti4_1) && (EIF_BOOLEAN)(ti4_5 == ti4_2))) {
			RTCK;
		} else {
			RTCF;
		}
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
#undef ur8_1
#undef ui4_1
#undef ui4_2
#undef arg2
#undef arg1
}

/* {SIMPLE_MATRIX}.is_square */
EIF_TYPED_VALUE F4_158 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_square";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 3, Current, 0, 0, 122);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(3, Current, 122);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(150, dtype));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {SIMPLE_MATRIX}.is_symmetric */
EIF_TYPED_VALUE F4_159 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_symmetric";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 3, Current, 2, 0, 123);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(3, Current, 123);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(158, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(2);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(3);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(4);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 > ti4_1) || (EIF_BOOLEAN) !Result)) break;
			RTHOOK(5);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
			for (;;) {
				RTHOOK(6);
				ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(150, dtype));
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 > ti4_2) || (EIF_BOOLEAN) !Result)) break;
				RTHOOK(7);
				ui4_1 = loc1;
				ui4_2 = loc2;
				tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(151, dtype))(Current, ui4_1x, ui4_2x)).it_r8);
				ui4_1 = loc2;
				ui4_2 = loc1;
				tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(151, dtype))(Current, ui4_1x, ui4_2x)).it_r8);
				tr8_3 = eif_abs_real64 ((EIF_REAL_64) (tr8_1 - tr8_2));
				if ((EIF_BOOLEAN) (tr8_3 > (EIF_REAL_64) 1.0e-10)) {
					RTHOOK(8);
					RTDBGAL(0, 0x04000000, 1,0); /* Result */
					Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				}
				RTHOOK(9);
				RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
				loc2++;
			}
			RTHOOK(10);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1++;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ui4_1
#undef ui4_2
}

/* {SIMPLE_MATRIX}.is_diagonal */
EIF_TYPED_VALUE F4_160 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_diagonal";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 3, Current, 2, 0, 124);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(3, Current, 124);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(158, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(2);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(3);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(4);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 > ti4_1) || (EIF_BOOLEAN) !Result)) break;
			RTHOOK(5);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			for (;;) {
				RTHOOK(6);
				ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(150, dtype));
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 > ti4_2) || (EIF_BOOLEAN) !Result)) break;
				RTHOOK(7);
				tb1 = '\0';
				if ((EIF_BOOLEAN)(loc1 != loc2)) {
					ui4_1 = loc1;
					ui4_2 = loc2;
					tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(151, dtype))(Current, ui4_1x, ui4_2x)).it_r8);
					RTNHOOK(7,1);
					tr8_2 = eif_abs_real64 (tr8_1);
					tb1 = (EIF_BOOLEAN) (tr8_2 > (EIF_REAL_64) 1.0e-10);
				}
				if (tb1) {
					RTHOOK(8);
					RTDBGAL(0, 0x04000000, 1,0); /* Result */
					Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				}
				RTHOOK(9);
				RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
				loc2++;
			}
			RTHOOK(10);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1++;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ui4_1
#undef ui4_2
}

/* {SIMPLE_MATRIX}.is_identity */
EIF_TYPED_VALUE F4_161 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_identity";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 3, Current, 2, 0, 125);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(3, Current, 125);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(158, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(2);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(3);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(4);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 > ti4_1) || (EIF_BOOLEAN) !Result)) break;
			RTHOOK(5);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			for (;;) {
				RTHOOK(6);
				ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(150, dtype));
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 > ti4_2) || (EIF_BOOLEAN) !Result)) break;
				RTHOOK(7);
				if ((EIF_BOOLEAN)(loc1 == loc2)) {
					RTHOOK(8);
					ui4_1 = loc1;
					ui4_2 = loc2;
					tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(151, dtype))(Current, ui4_1x, ui4_2x)).it_r8);
					tr8_2 = eif_abs_real64 ((EIF_REAL_64) (tr8_1 - (EIF_REAL_64) 1.0));
					if ((EIF_BOOLEAN) (tr8_2 > (EIF_REAL_64) 1.0e-10)) {
						RTHOOK(9);
						RTDBGAL(0, 0x04000000, 1,0); /* Result */
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
					}
				} else {
					RTHOOK(10);
					ui4_1 = loc1;
					ui4_2 = loc2;
					tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(151, dtype))(Current, ui4_1x, ui4_2x)).it_r8);
					RTNHOOK(10,1);
					tr8_2 = eif_abs_real64 (tr8_1);
					if ((EIF_BOOLEAN) (tr8_2 > (EIF_REAL_64) 1.0e-10)) {
						RTHOOK(11);
						RTDBGAL(0, 0x04000000, 1,0); /* Result */
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
					}
				}
				RTHOOK(12);
				RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
				loc2++;
			}
			RTHOOK(13);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1++;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ui4_1
#undef ui4_2
}

/* {SIMPLE_MATRIX}.is_equal */
EIF_TYPED_VALUE F4_162 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_equal";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,ur1);
	RTLIU(3);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 3, Current, 2, 1, 126);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(3, Current, 126);
	RTCC(arg1, 3, l_feature_name, 1, eif_new_type(3, 0x01),0);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tb1 = '\0';
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
	ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(149, "rows", arg1));
	if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(150, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(150, "cols", arg1));
		tb1 = (EIF_BOOLEAN)(ti4_1 == ti4_2);
	}
	if (tb1) {
		RTHOOK(3);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(4);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(5);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 > ti4_1) || (EIF_BOOLEAN) !Result)) break;
			RTHOOK(6);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			for (;;) {
				RTHOOK(7);
				ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(150, dtype));
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 > ti4_2) || (EIF_BOOLEAN) !Result)) break;
				RTHOOK(8);
				ui4_1 = loc1;
				ui4_2 = loc2;
				tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(151, dtype))(Current, ui4_1x, ui4_2x)).it_r8);
				ui4_1 = loc1;
				ui4_2 = loc2;
				tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(151, "item", arg1))(arg1, ui4_1x, ui4_2x)).it_r8);
				tr8_3 = eif_abs_real64 ((EIF_REAL_64) (tr8_1 - tr8_2));
				if ((EIF_BOOLEAN) (tr8_3 > (EIF_REAL_64) 1.0e-10)) {
					RTHOOK(9);
					RTDBGAL(0, 0x04000000, 1,0); /* Result */
					Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				}
				RTHOOK(10);
				RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
				loc2++;
			}
			RTHOOK(11);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1++;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("symmetric", EX_POST);
		if ((!(Result) || (RTEQ(arg1, Current)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("consistent", EX_POST);
		tb1 = '\01';
		ur1 = RTCCL(arg1);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(12, dtype))(Current, ur1x)).it_b);
		if (tb2) {
			tb1 = Result;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {SIMPLE_MATRIX}.plus */
EIF_TYPED_VALUE F4_163 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "plus";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLR(4,loc3);
	RTLR(5,tr2);
	RTLR(6,loc4);
	RTLIU(7);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 3, Current, 4, 1, 127);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(3, Current, 127);
	RTCC(arg1, 3, l_feature_name, 1, eif_new_type(3, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("same_rows", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(149, "rows", arg1));
		RTTE((EIF_BOOLEAN)(ti4_1 == ti4_2), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("same_cols", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(150, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(150, "cols", arg1));
		RTTE((EIF_BOOLEAN)(ti4_1 == ti4_2), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(0, 0xF8000003, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(3, 0x01).id);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
	ui4_1 = ti4_1;
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(150, dtype));
	ui4_2 = ti4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(144, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
	RTNHOOK(3,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(5);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
		RTHOOK(6);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(7);
			ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(150, dtype));
			if ((EIF_BOOLEAN) (loc2 > ti4_2)) break;
			RTHOOK(8);
			ui4_1 = loc1;
			ui4_2 = loc2;
			tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(151, dtype))(Current, ui4_1x, ui4_2x)).it_r8);
			ui4_1 = loc1;
			ui4_2 = loc2;
			tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(151, "item", arg1))(arg1, ui4_1x, ui4_2x)).it_r8);
			ur8_1 = (EIF_REAL_64) (tr8_1 + tr8_2);
			ui4_1 = loc1;
			ui4_2 = loc2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(155, "put", Result))(Result, ur8_1x, ui4_1x, ui4_2x);
			RTHOOK(9);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2++;
		}
		RTHOOK(10);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("result_rows", EX_POST);
		ti4_3 = *(EIF_INTEGER_32 *)(Result + RTVA(149, "rows", Result));
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
		if ((EIF_BOOLEAN)(ti4_3 == ti4_4)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("result_cols", EX_POST);
		ti4_3 = *(EIF_INTEGER_32 *)(Result + RTVA(150, "cols", Result));
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(150, dtype));
		if ((EIF_BOOLEAN)(ti4_3 == ti4_4)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("elementwise_sum", EX_POST);
		RTNHOOK(13,1);
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
		ui4_1 = ti4_3;
		tr1 = RTLN(eif_new_type(222, 0x00).id);
		*(EIF_INTEGER_32 *)tr1 = ((EIF_INTEGER_32) 1L);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4154, "interval", tr1))(tr1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3021, "new_cursor", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc3 = (EIF_REFERENCE) RTCCL(tr1);
		tb1 = EIF_TRUE;
		for (;;) {
			if (!tb1) break;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3007, "after", loc3))(loc3)).it_b);
			if (tb2) break;
			RTHOOK(14);
			RTNHOOK(14,1);
			ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(150, dtype));
			ui4_1 = ti4_3;
			tr1 = RTLN(eif_new_type(222, 0x00).id);
			*(EIF_INTEGER_32 *)tr1 = ((EIF_INTEGER_32) 1L);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4154, "interval", tr1))(tr1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3021, "new_cursor", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc4 = (EIF_REFERENCE) RTCCL(tr1);
			tb3 = EIF_TRUE;
			for (;;) {
				if (!tb3) break;
				tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3007, "after", loc4))(loc4)).it_b);
				if (tb4) break;
				RTHOOK(15);
				ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3006, "item", loc3))(loc3)).it_i4);
				ui4_1 = ti4_3;
				ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3006, "item", loc4))(loc4)).it_i4);
				ui4_2 = ti4_4;
				tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(151, "item", Result))(Result, ui4_1x, ui4_2x)).it_r8);
				ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3006, "item", loc3))(loc3)).it_i4);
				ui4_1 = ti4_3;
				ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3006, "item", loc4))(loc4)).it_i4);
				ui4_2 = ti4_4;
				tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(151, dtype))(Current, ui4_1x, ui4_2x)).it_r8);
				ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3006, "item", loc3))(loc3)).it_i4);
				ui4_1 = ti4_3;
				ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3006, "item", loc4))(loc4)).it_i4);
				ui4_2 = ti4_4;
				tr8_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(151, "item", arg1))(arg1, ui4_1x, ui4_2x)).it_r8);
				tb3 = (EIF_BOOLEAN)(tr8_1 == (EIF_REAL_64) (tr8_2 + tr8_3));
				RTNHOOK(15,1);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3008, "forth", loc4))(loc4);
			}
			tb1 = tb3;
			RTNHOOK(15,2);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3008, "forth", loc3))(loc3);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(16);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur8_1
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {SIMPLE_MATRIX}.minus */
EIF_TYPED_VALUE F4_164 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "minus";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLR(4,loc3);
	RTLR(5,tr2);
	RTLR(6,loc4);
	RTLIU(7);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 3, Current, 4, 1, 128);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(3, Current, 128);
	RTCC(arg1, 3, l_feature_name, 1, eif_new_type(3, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("same_rows", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(149, "rows", arg1));
		RTTE((EIF_BOOLEAN)(ti4_1 == ti4_2), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("same_cols", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(150, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(150, "cols", arg1));
		RTTE((EIF_BOOLEAN)(ti4_1 == ti4_2), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(0, 0xF8000003, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(3, 0x01).id);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
	ui4_1 = ti4_1;
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(150, dtype));
	ui4_2 = ti4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(144, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
	RTNHOOK(3,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(5);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
		RTHOOK(6);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(7);
			ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(150, dtype));
			if ((EIF_BOOLEAN) (loc2 > ti4_2)) break;
			RTHOOK(8);
			ui4_1 = loc1;
			ui4_2 = loc2;
			tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(151, dtype))(Current, ui4_1x, ui4_2x)).it_r8);
			ui4_1 = loc1;
			ui4_2 = loc2;
			tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(151, "item", arg1))(arg1, ui4_1x, ui4_2x)).it_r8);
			ur8_1 = (EIF_REAL_64) (tr8_1 - tr8_2);
			ui4_1 = loc1;
			ui4_2 = loc2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(155, "put", Result))(Result, ur8_1x, ui4_1x, ui4_2x);
			RTHOOK(9);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2++;
		}
		RTHOOK(10);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("result_rows", EX_POST);
		ti4_3 = *(EIF_INTEGER_32 *)(Result + RTVA(149, "rows", Result));
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
		if ((EIF_BOOLEAN)(ti4_3 == ti4_4)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("result_cols", EX_POST);
		ti4_3 = *(EIF_INTEGER_32 *)(Result + RTVA(150, "cols", Result));
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(150, dtype));
		if ((EIF_BOOLEAN)(ti4_3 == ti4_4)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("elementwise_diff", EX_POST);
		RTNHOOK(13,1);
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
		ui4_1 = ti4_3;
		tr1 = RTLN(eif_new_type(222, 0x00).id);
		*(EIF_INTEGER_32 *)tr1 = ((EIF_INTEGER_32) 1L);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4154, "interval", tr1))(tr1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3021, "new_cursor", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc3 = (EIF_REFERENCE) RTCCL(tr1);
		tb1 = EIF_TRUE;
		for (;;) {
			if (!tb1) break;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3007, "after", loc3))(loc3)).it_b);
			if (tb2) break;
			RTHOOK(14);
			RTNHOOK(14,1);
			ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(150, dtype));
			ui4_1 = ti4_3;
			tr1 = RTLN(eif_new_type(222, 0x00).id);
			*(EIF_INTEGER_32 *)tr1 = ((EIF_INTEGER_32) 1L);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4154, "interval", tr1))(tr1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3021, "new_cursor", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc4 = (EIF_REFERENCE) RTCCL(tr1);
			tb3 = EIF_TRUE;
			for (;;) {
				if (!tb3) break;
				tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3007, "after", loc4))(loc4)).it_b);
				if (tb4) break;
				RTHOOK(15);
				ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3006, "item", loc3))(loc3)).it_i4);
				ui4_1 = ti4_3;
				ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3006, "item", loc4))(loc4)).it_i4);
				ui4_2 = ti4_4;
				tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(151, "item", Result))(Result, ui4_1x, ui4_2x)).it_r8);
				ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3006, "item", loc3))(loc3)).it_i4);
				ui4_1 = ti4_3;
				ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3006, "item", loc4))(loc4)).it_i4);
				ui4_2 = ti4_4;
				tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(151, dtype))(Current, ui4_1x, ui4_2x)).it_r8);
				ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3006, "item", loc3))(loc3)).it_i4);
				ui4_1 = ti4_3;
				ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3006, "item", loc4))(loc4)).it_i4);
				ui4_2 = ti4_4;
				tr8_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(151, "item", arg1))(arg1, ui4_1x, ui4_2x)).it_r8);
				tb3 = (EIF_BOOLEAN)(tr8_1 == (EIF_REAL_64) (tr8_2 - tr8_3));
				RTNHOOK(15,1);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3008, "forth", loc4))(loc4);
			}
			tb1 = tb3;
			RTNHOOK(15,2);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3008, "forth", loc3))(loc3);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(16);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur8_1
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {SIMPLE_MATRIX}.product */
EIF_TYPED_VALUE F4_165 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "product";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REAL_64 loc4 = (EIF_REAL_64) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_REAL64, &loc4);
	
	RTEAA(l_feature_name, 3, Current, 4, 1, 129);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(3, Current, 129);
	RTCC(arg1, 3, l_feature_name, 1, eif_new_type(3, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("compatible", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(150, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(149, "rows", arg1));
		RTTE((EIF_BOOLEAN)(ti4_1 == ti4_2), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0xF8000003, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(3, 0x01).id);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
	ui4_1 = ti4_1;
	ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(150, "cols", arg1));
	ui4_2 = ti4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(144, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(4);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
		RTHOOK(5);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(6);
			ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(150, "cols", arg1));
			if ((EIF_BOOLEAN) (loc2 > ti4_2)) break;
			RTHOOK(7);
			RTDBGAL(4, 0x20000000, 1, 0); /* loc4 */
			loc4 = (EIF_REAL_64) (EIF_REAL_64) 0.0;
			RTHOOK(8);
			RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
			loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			for (;;) {
				RTHOOK(9);
				ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(150, dtype));
				if ((EIF_BOOLEAN) (loc3 > ti4_3)) break;
				RTHOOK(10);
				RTDBGAL(4, 0x20000000, 1, 0); /* loc4 */
				ui4_1 = loc1;
				ui4_2 = loc3;
				tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(151, dtype))(Current, ui4_1x, ui4_2x)).it_r8);
				ui4_1 = loc3;
				ui4_2 = loc2;
				tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(151, "item", arg1))(arg1, ui4_1x, ui4_2x)).it_r8);
				loc4 += (EIF_REAL_64) (tr8_1 * tr8_2);
				RTHOOK(11);
				RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
				loc3++;
			}
			RTHOOK(12);
			ur8_1 = loc4;
			ui4_1 = loc1;
			ui4_2 = loc2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(155, "put", Result))(Result, ur8_1x, ui4_1x, ui4_2x);
			RTHOOK(13);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2++;
		}
		RTHOOK(14);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(15);
		RTCT("result_rows", EX_POST);
		ti4_4 = *(EIF_INTEGER_32 *)(Result + RTVA(149, "rows", Result));
		ti4_5 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
		if ((EIF_BOOLEAN)(ti4_4 == ti4_5)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(16);
		RTCT("result_cols", EX_POST);
		ti4_4 = *(EIF_INTEGER_32 *)(Result + RTVA(150, "cols", Result));
		ti4_5 = *(EIF_INTEGER_32 *)(arg1 + RTVA(150, "cols", arg1));
		if ((EIF_BOOLEAN)(ti4_4 == ti4_5)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(17);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur8_1
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {SIMPLE_MATRIX}.scaled */
EIF_TYPED_VALUE F4_166 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "scaled";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r8
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(6);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,loc3);
	RTLR(4,tr2);
	RTLR(5,loc4);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU(SK_REAL64,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 3, Current, 4, 1, 130);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(3, Current, 130);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF8000003, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(3, 0x01).id);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
	ui4_1 = ti4_1;
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(150, dtype));
	ui4_2 = ti4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(144, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(3);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
		RTHOOK(4);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(5);
			ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(150, dtype));
			if ((EIF_BOOLEAN) (loc2 > ti4_2)) break;
			RTHOOK(6);
			ui4_1 = loc1;
			ui4_2 = loc2;
			tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(151, dtype))(Current, ui4_1x, ui4_2x)).it_r8);
			ur8_1 = (EIF_REAL_64) (tr8_1 * arg1);
			ui4_1 = loc1;
			ui4_2 = loc2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(155, "put", Result))(Result, ur8_1x, ui4_1x, ui4_2x);
			RTHOOK(7);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2++;
		}
		RTHOOK(8);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("result_rows", EX_POST);
		ti4_3 = *(EIF_INTEGER_32 *)(Result + RTVA(149, "rows", Result));
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
		if ((EIF_BOOLEAN)(ti4_3 == ti4_4)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("result_cols", EX_POST);
		ti4_3 = *(EIF_INTEGER_32 *)(Result + RTVA(150, "cols", Result));
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(150, dtype));
		if ((EIF_BOOLEAN)(ti4_3 == ti4_4)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("elementwise_scaled", EX_POST);
		RTNHOOK(11,1);
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
		ui4_1 = ti4_3;
		tr1 = RTLN(eif_new_type(222, 0x00).id);
		*(EIF_INTEGER_32 *)tr1 = ((EIF_INTEGER_32) 1L);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4154, "interval", tr1))(tr1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3021, "new_cursor", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc3 = (EIF_REFERENCE) RTCCL(tr1);
		tb1 = EIF_TRUE;
		for (;;) {
			if (!tb1) break;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3007, "after", loc3))(loc3)).it_b);
			if (tb2) break;
			RTHOOK(12);
			RTNHOOK(12,1);
			ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(150, dtype));
			ui4_1 = ti4_3;
			tr1 = RTLN(eif_new_type(222, 0x00).id);
			*(EIF_INTEGER_32 *)tr1 = ((EIF_INTEGER_32) 1L);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4154, "interval", tr1))(tr1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3021, "new_cursor", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc4 = (EIF_REFERENCE) RTCCL(tr1);
			tb3 = EIF_TRUE;
			for (;;) {
				if (!tb3) break;
				tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3007, "after", loc4))(loc4)).it_b);
				if (tb4) break;
				RTHOOK(13);
				ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3006, "item", loc3))(loc3)).it_i4);
				ui4_1 = ti4_3;
				ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3006, "item", loc4))(loc4)).it_i4);
				ui4_2 = ti4_4;
				tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(151, "item", Result))(Result, ui4_1x, ui4_2x)).it_r8);
				ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3006, "item", loc3))(loc3)).it_i4);
				ui4_1 = ti4_3;
				ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3006, "item", loc4))(loc4)).it_i4);
				ui4_2 = ti4_4;
				tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(151, dtype))(Current, ui4_1x, ui4_2x)).it_r8);
				tb3 = (EIF_BOOLEAN)(tr8_1 == (EIF_REAL_64) (tr8_2 * arg1));
				RTNHOOK(13,1);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3008, "forth", loc4))(loc4);
			}
			tb1 = tb3;
			RTNHOOK(13,2);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3008, "forth", loc3))(loc3);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur8_1
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {SIMPLE_MATRIX}.multiply_vector */
EIF_TYPED_VALUE F4_167 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "multiply_vector";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REAL_64 loc3 = (EIF_REAL_64) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REAL64, &loc3);
	
	RTEAA(l_feature_name, 3, Current, 3, 1, 131);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(3, Current, 131);
	RTCC(arg1, 3, l_feature_name, 1, eif_new_type(2, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("compatible", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(150, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(123, "dimension", arg1))(arg1)).it_i4);
		RTTE((EIF_BOOLEAN)(ti4_1 == ti4_2), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0xF8000002, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(2, 0x01).id);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(118, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(4);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
		RTHOOK(5);
		RTDBGAL(3, 0x20000000, 1, 0); /* loc3 */
		loc3 = (EIF_REAL_64) (EIF_REAL_64) 0.0;
		RTHOOK(6);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(7);
			ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(150, dtype));
			if ((EIF_BOOLEAN) (loc2 > ti4_2)) break;
			RTHOOK(8);
			RTDBGAL(3, 0x20000000, 1, 0); /* loc3 */
			ui4_1 = loc1;
			ui4_2 = loc2;
			tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(151, dtype))(Current, ui4_1x, ui4_2x)).it_r8);
			ui4_1 = loc2;
			tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(124, "item", arg1))(arg1, ui4_1x)).it_r8);
			loc3 += (EIF_REAL_64) (tr8_1 * tr8_2);
			RTHOOK(9);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2++;
		}
		RTHOOK(10);
		ur8_1 = loc3;
		ui4_1 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(126, "put", Result))(Result, ur8_1x, ui4_1x);
		RTHOOK(11);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("result_dimension", EX_POST);
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(123, "dimension", Result))(Result)).it_i4);
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
		if ((EIF_BOOLEAN)(ti4_3 == ti4_4)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur8_1
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {SIMPLE_MATRIX}.transposed */
EIF_TYPED_VALUE F4_168 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "transposed";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,loc3);
	RTLR(4,tr2);
	RTLR(5,loc4);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 3, Current, 4, 0, 132);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(3, Current, 132);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF8000003, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(3, 0x01).id);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(150, dtype));
	ui4_1 = ti4_1;
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
	ui4_2 = ti4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(144, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(3);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
		RTHOOK(4);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(5);
			ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(150, dtype));
			if ((EIF_BOOLEAN) (loc2 > ti4_2)) break;
			RTHOOK(6);
			ui4_1 = loc1;
			ui4_2 = loc2;
			tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(151, dtype))(Current, ui4_1x, ui4_2x)).it_r8);
			ur8_1 = tr8_1;
			ui4_1 = loc2;
			ui4_2 = loc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(155, "put", Result))(Result, ur8_1x, ui4_1x, ui4_2x);
			RTHOOK(7);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2++;
		}
		RTHOOK(8);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("result_rows", EX_POST);
		ti4_3 = *(EIF_INTEGER_32 *)(Result + RTVA(149, "rows", Result));
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(150, dtype));
		if ((EIF_BOOLEAN)(ti4_3 == ti4_4)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("result_cols", EX_POST);
		ti4_3 = *(EIF_INTEGER_32 *)(Result + RTVA(150, "cols", Result));
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
		if ((EIF_BOOLEAN)(ti4_3 == ti4_4)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("transposed_elements", EX_POST);
		RTNHOOK(11,1);
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
		ui4_1 = ti4_3;
		tr1 = RTLN(eif_new_type(222, 0x00).id);
		*(EIF_INTEGER_32 *)tr1 = ((EIF_INTEGER_32) 1L);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4154, "interval", tr1))(tr1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3021, "new_cursor", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc3 = (EIF_REFERENCE) RTCCL(tr1);
		tb1 = EIF_TRUE;
		for (;;) {
			if (!tb1) break;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3007, "after", loc3))(loc3)).it_b);
			if (tb2) break;
			RTHOOK(12);
			RTNHOOK(12,1);
			ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(150, dtype));
			ui4_1 = ti4_3;
			tr1 = RTLN(eif_new_type(222, 0x00).id);
			*(EIF_INTEGER_32 *)tr1 = ((EIF_INTEGER_32) 1L);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4154, "interval", tr1))(tr1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3021, "new_cursor", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc4 = (EIF_REFERENCE) RTCCL(tr1);
			tb3 = EIF_TRUE;
			for (;;) {
				if (!tb3) break;
				tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3007, "after", loc4))(loc4)).it_b);
				if (tb4) break;
				RTHOOK(13);
				ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3006, "item", loc4))(loc4)).it_i4);
				ui4_1 = ti4_3;
				ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3006, "item", loc3))(loc3)).it_i4);
				ui4_2 = ti4_4;
				tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(151, "item", Result))(Result, ui4_1x, ui4_2x)).it_r8);
				ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3006, "item", loc3))(loc3)).it_i4);
				ui4_1 = ti4_3;
				ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3006, "item", loc4))(loc4)).it_i4);
				ui4_2 = ti4_4;
				tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(151, dtype))(Current, ui4_1x, ui4_2x)).it_r8);
				tb3 = (EIF_BOOLEAN)(tr8_1 == tr8_2);
				RTNHOOK(13,1);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3008, "forth", loc4))(loc4);
			}
			tb1 = tb3;
			RTNHOOK(13,2);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3008, "forth", loc3))(loc3);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur8_1
#undef ui4_1
#undef ui4_2
}

/* {SIMPLE_MATRIX}.trace */
EIF_TYPED_VALUE F4_169 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "trace";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REAL64, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 3, Current, 1, 0, 133);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(3, Current, 133);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_square", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(150, dtype));
		RTTE((EIF_BOOLEAN)(ti4_1 == ti4_2), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(3);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
		RTHOOK(4);
		RTDBGAL(0, 0x20000000, 1,0); /* Result */
		ui4_1 = loc1;
		ui4_2 = loc1;
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(151, dtype))(Current, ui4_1x, ui4_2x)).it_r8);
		Result += tr8_1;
		RTHOOK(5);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef ui4_1
#undef ui4_2
}

/* {SIMPLE_MATRIX}.determinant */
EIF_TYPED_VALUE F4_170 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "determinant";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REAL_64 loc6 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc7 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc8 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc9 = (EIF_REAL_64) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_INTEGER_32 ti4_7;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_REAL64, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_REAL64, &loc6);
	RTLU(SK_REAL64, &loc7);
	RTLU(SK_REAL64, &loc8);
	RTLU(SK_REAL64, &loc9);
	RTLU(SK_INT32, &loc10);
	
	RTEAA(l_feature_name, 3, Current, 10, 0, 134);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(3, Current, 134);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_square", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(150, dtype));
		RTTE((EIF_BOOLEAN)(ti4_1 == ti4_2), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(1, 0xF8000003, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(3, 0x01).id);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
	ui4_1 = ti4_1;
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(150, dtype));
	ui4_2 = ti4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(144, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
	RTNHOOK(2,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(4);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
		if ((EIF_BOOLEAN) (loc2 > ti4_1)) break;
		RTHOOK(5);
		RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
		loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(6);
			ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(150, dtype));
			if ((EIF_BOOLEAN) (loc3 > ti4_2)) break;
			RTHOOK(7);
			ui4_1 = loc2;
			ui4_2 = loc3;
			tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(151, dtype))(Current, ui4_1x, ui4_2x)).it_r8);
			ur8_1 = tr8_1;
			ui4_1 = loc2;
			ui4_2 = loc3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(155, "put", loc1))(loc1, ur8_1x, ui4_1x, ui4_2x);
			RTHOOK(8);
			RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
			loc3++;
		}
		RTHOOK(9);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2++;
	}
	RTHOOK(10);
	RTDBGAL(9, 0x20000000, 1, 0); /* loc9 */
	loc9 = (EIF_REAL_64) (EIF_REAL_64) 1.0;
	RTHOOK(11);
	RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
	loc10 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(12);
	RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
	loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(13);
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
		if ((EIF_BOOLEAN) (loc4 > ti4_3)) break;
		RTHOOK(14);
		RTDBGAL(6, 0x20000000, 1, 0); /* loc6 */
		ui4_1 = loc4;
		ui4_2 = loc4;
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(151, "item", loc1))(loc1, ui4_1x, ui4_2x)).it_r8);
		tr8_2 = eif_abs_real64 (tr8_1);
		loc6 = (EIF_REAL_64) tr8_2;
		RTHOOK(15);
		RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
		loc5 = (EIF_INTEGER_32) loc4;
		RTHOOK(16);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 1L));
		for (;;) {
			RTHOOK(17);
			ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
			if ((EIF_BOOLEAN) (loc2 > ti4_4)) break;
			RTHOOK(18);
			ui4_1 = loc2;
			ui4_2 = loc4;
			tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(151, "item", loc1))(loc1, ui4_1x, ui4_2x)).it_r8);
			tr8_2 = eif_abs_real64 (tr8_1);
			if ((EIF_BOOLEAN) (tr8_2 > loc6)) {
				RTHOOK(19);
				RTDBGAL(6, 0x20000000, 1, 0); /* loc6 */
				ui4_1 = loc2;
				ui4_2 = loc4;
				tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(151, "item", loc1))(loc1, ui4_1x, ui4_2x)).it_r8);
				tr8_2 = eif_abs_real64 (tr8_1);
				loc6 = (EIF_REAL_64) tr8_2;
				RTHOOK(20);
				RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
				loc5 = (EIF_INTEGER_32) loc2;
			}
			RTHOOK(21);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2++;
		}
		RTHOOK(22);
		if ((EIF_BOOLEAN) (loc6 < (EIF_REAL_64) 1.0e-10)) {
			RTHOOK(23);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.0;
			RTHOOK(24);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			ti4_5 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
			loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_5 + ((EIF_INTEGER_32) 1L));
		} else {
			RTHOOK(25);
			if ((EIF_BOOLEAN)(loc5 != loc4)) {
				RTHOOK(26);
				RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
				loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				for (;;) {
					RTHOOK(27);
					ti4_5 = *(EIF_INTEGER_32 *)(Current + RTWA(150, dtype));
					if ((EIF_BOOLEAN) (loc3 > ti4_5)) break;
					RTHOOK(28);
					RTDBGAL(7, 0x20000000, 1, 0); /* loc7 */
					ui4_1 = loc4;
					ui4_2 = loc3;
					tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(151, "item", loc1))(loc1, ui4_1x, ui4_2x)).it_r8);
					loc7 = (EIF_REAL_64) tr8_1;
					RTHOOK(29);
					ui4_1 = loc5;
					ui4_2 = loc3;
					tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(151, "item", loc1))(loc1, ui4_1x, ui4_2x)).it_r8);
					ur8_1 = tr8_1;
					ui4_1 = loc4;
					ui4_2 = loc3;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(155, "put", loc1))(loc1, ur8_1x, ui4_1x, ui4_2x);
					RTHOOK(30);
					ur8_1 = loc7;
					ui4_1 = loc5;
					ui4_2 = loc3;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(155, "put", loc1))(loc1, ur8_1x, ui4_1x, ui4_2x);
					RTHOOK(31);
					RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
					loc3++;
				}
				RTHOOK(32);
				RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
				loc10++;
			}
			RTHOOK(33);
			RTDBGAL(9, 0x20000000, 1, 0); /* loc9 */
			ui4_1 = loc4;
			ui4_2 = loc4;
			tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(151, "item", loc1))(loc1, ui4_1x, ui4_2x)).it_r8);
			loc9 *= tr8_1;
			RTHOOK(34);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 1L));
			for (;;) {
				RTHOOK(35);
				ti4_6 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
				if ((EIF_BOOLEAN) (loc2 > ti4_6)) break;
				RTHOOK(36);
				RTDBGAL(8, 0x20000000, 1, 0); /* loc8 */
				ui4_1 = loc2;
				ui4_2 = loc4;
				tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(151, "item", loc1))(loc1, ui4_1x, ui4_2x)).it_r8);
				ui4_1 = loc4;
				ui4_2 = loc4;
				tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(151, "item", loc1))(loc1, ui4_1x, ui4_2x)).it_r8);
				loc8 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (tr8_1) /  (EIF_REAL_64) (tr8_2));
				RTHOOK(37);
				RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
				loc3 = (EIF_INTEGER_32) loc4;
				for (;;) {
					RTHOOK(38);
					ti4_7 = *(EIF_INTEGER_32 *)(Current + RTWA(150, dtype));
					if ((EIF_BOOLEAN) (loc3 > ti4_7)) break;
					RTHOOK(39);
					ui4_1 = loc2;
					ui4_2 = loc3;
					tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(151, "item", loc1))(loc1, ui4_1x, ui4_2x)).it_r8);
					ui4_1 = loc4;
					ui4_2 = loc3;
					tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(151, "item", loc1))(loc1, ui4_1x, ui4_2x)).it_r8);
					ur8_1 = (EIF_REAL_64) (tr8_1 - (EIF_REAL_64) (loc8 * tr8_2));
					ui4_1 = loc2;
					ui4_2 = loc3;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(155, "put", loc1))(loc1, ur8_1x, ui4_1x, ui4_2x);
					RTHOOK(40);
					RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
					loc3++;
				}
				RTHOOK(41);
				RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
				loc2++;
			}
			RTHOOK(42);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			loc4++;
		}
	}
	RTHOOK(43);
	if ((EIF_BOOLEAN)(loc9 != (EIF_REAL_64) 0.0)) {
		RTHOOK(44);
		if ((EIF_BOOLEAN)((EIF_INTEGER_32) (loc10 % ((EIF_INTEGER_32) 2L)) == ((EIF_INTEGER_32) 1L))) {
			RTHOOK(45);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) -loc9;
		} else {
			RTHOOK(46);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) loc9;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(47);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(12);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef ur8_1
#undef ui4_1
#undef ui4_2
}

/* {SIMPLE_MATRIX}.inverse */
EIF_TYPED_VALUE F4_171 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "inverse";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REAL_64 loc6 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc7 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc8 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc9 = (EIF_REAL_64) 0;
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_INTEGER_32 ti4_7;
	EIF_INTEGER_32 ti4_8;
	EIF_INTEGER_32 ti4_9;
	EIF_INTEGER_32 ti4_10;
	EIF_INTEGER_32 ti4_11;
	EIF_INTEGER_32 ti4_12;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_REAL64, &loc6);
	RTLU(SK_REAL64, &loc7);
	RTLU(SK_REAL64, &loc8);
	RTLU(SK_REAL64, &loc9);
	
	RTEAA(l_feature_name, 3, Current, 9, 0, 135);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(3, Current, 135);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_square", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(150, dtype));
		RTTE((EIF_BOOLEAN)(ti4_1 == ti4_2), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_invertible", EX_PRE);
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(169, dtype))(Current)).it_r8);
		RTNHOOK(2,1);
		tr8_2 = eif_abs_real64 (tr8_1);
		RTTE((EIF_BOOLEAN) (tr8_2 > (EIF_REAL_64) 1.0e-10), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(1, 0xF8000003, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(3, 0x01).id);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
	ui4_1 = ti4_1;
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(150, dtype));
	ui4_2 = (EIF_INTEGER_32) (ti4_2 * ((EIF_INTEGER_32) 2L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(144, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
	RTNHOOK(3,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(5);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
		if ((EIF_BOOLEAN) (loc2 > ti4_1)) break;
		RTHOOK(6);
		RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
		loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(7);
			ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(150, dtype));
			if ((EIF_BOOLEAN) (loc3 > ti4_2)) break;
			RTHOOK(8);
			ui4_1 = loc2;
			ui4_2 = loc3;
			tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(151, dtype))(Current, ui4_1x, ui4_2x)).it_r8);
			ur8_1 = tr8_1;
			ui4_1 = loc2;
			ui4_2 = loc3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(155, "put", loc1))(loc1, ur8_1x, ui4_1x, ui4_2x);
			RTHOOK(9);
			RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
			loc3++;
		}
		RTHOOK(10);
		ur8_1 = (EIF_REAL_64) 1.0;
		ui4_1 = loc2;
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(150, dtype));
		ui4_2 = (EIF_INTEGER_32) (ti4_3 + loc2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(155, "put", loc1))(loc1, ur8_1x, ui4_1x, ui4_2x);
		RTHOOK(11);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2++;
	}
	RTHOOK(12);
	RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
	loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(13);
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
		if ((EIF_BOOLEAN) (loc4 > ti4_3)) break;
		RTHOOK(14);
		RTDBGAL(6, 0x20000000, 1, 0); /* loc6 */
		ui4_1 = loc4;
		ui4_2 = loc4;
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(151, "item", loc1))(loc1, ui4_1x, ui4_2x)).it_r8);
		tr8_2 = eif_abs_real64 (tr8_1);
		loc6 = (EIF_REAL_64) tr8_2;
		RTHOOK(15);
		RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
		loc5 = (EIF_INTEGER_32) loc4;
		RTHOOK(16);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 1L));
		for (;;) {
			RTHOOK(17);
			ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
			if ((EIF_BOOLEAN) (loc2 > ti4_4)) break;
			RTHOOK(18);
			ui4_1 = loc2;
			ui4_2 = loc4;
			tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(151, "item", loc1))(loc1, ui4_1x, ui4_2x)).it_r8);
			tr8_2 = eif_abs_real64 (tr8_1);
			if ((EIF_BOOLEAN) (tr8_2 > loc6)) {
				RTHOOK(19);
				RTDBGAL(6, 0x20000000, 1, 0); /* loc6 */
				ui4_1 = loc2;
				ui4_2 = loc4;
				tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(151, "item", loc1))(loc1, ui4_1x, ui4_2x)).it_r8);
				tr8_2 = eif_abs_real64 (tr8_1);
				loc6 = (EIF_REAL_64) tr8_2;
				RTHOOK(20);
				RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
				loc5 = (EIF_INTEGER_32) loc2;
			}
			RTHOOK(21);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2++;
		}
		RTHOOK(22);
		if ((EIF_BOOLEAN)(loc5 != loc4)) {
			RTHOOK(23);
			RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
			loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			for (;;) {
				RTHOOK(24);
				ti4_5 = *(EIF_INTEGER_32 *)(Current + RTWA(150, dtype));
				if ((EIF_BOOLEAN) (loc3 > (EIF_INTEGER_32) (ti4_5 * ((EIF_INTEGER_32) 2L)))) break;
				RTHOOK(25);
				RTDBGAL(7, 0x20000000, 1, 0); /* loc7 */
				ui4_1 = loc4;
				ui4_2 = loc3;
				tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(151, "item", loc1))(loc1, ui4_1x, ui4_2x)).it_r8);
				loc7 = (EIF_REAL_64) tr8_1;
				RTHOOK(26);
				ui4_1 = loc5;
				ui4_2 = loc3;
				tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(151, "item", loc1))(loc1, ui4_1x, ui4_2x)).it_r8);
				ur8_1 = tr8_1;
				ui4_1 = loc4;
				ui4_2 = loc3;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(155, "put", loc1))(loc1, ur8_1x, ui4_1x, ui4_2x);
				RTHOOK(27);
				ur8_1 = loc7;
				ui4_1 = loc5;
				ui4_2 = loc3;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(155, "put", loc1))(loc1, ur8_1x, ui4_1x, ui4_2x);
				RTHOOK(28);
				RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
				loc3++;
			}
		}
		RTHOOK(29);
		RTDBGAL(9, 0x20000000, 1, 0); /* loc9 */
		ui4_1 = loc4;
		ui4_2 = loc4;
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(151, "item", loc1))(loc1, ui4_1x, ui4_2x)).it_r8);
		loc9 = (EIF_REAL_64) tr8_1;
		RTHOOK(30);
		RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
		loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(31);
			ti4_6 = *(EIF_INTEGER_32 *)(Current + RTWA(150, dtype));
			if ((EIF_BOOLEAN) (loc3 > (EIF_INTEGER_32) (ti4_6 * ((EIF_INTEGER_32) 2L)))) break;
			RTHOOK(32);
			ui4_1 = loc4;
			ui4_2 = loc3;
			tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(151, "item", loc1))(loc1, ui4_1x, ui4_2x)).it_r8);
			ur8_1 = (EIF_REAL_64) ((EIF_REAL_64) (tr8_1) /  (EIF_REAL_64) (loc9));
			ui4_1 = loc4;
			ui4_2 = loc3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(155, "put", loc1))(loc1, ur8_1x, ui4_1x, ui4_2x);
			RTHOOK(33);
			RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
			loc3++;
		}
		RTHOOK(34);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(35);
			ti4_7 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
			if ((EIF_BOOLEAN) (loc2 > ti4_7)) break;
			RTHOOK(36);
			if ((EIF_BOOLEAN)(loc2 != loc4)) {
				RTHOOK(37);
				RTDBGAL(8, 0x20000000, 1, 0); /* loc8 */
				ui4_1 = loc2;
				ui4_2 = loc4;
				tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(151, "item", loc1))(loc1, ui4_1x, ui4_2x)).it_r8);
				loc8 = (EIF_REAL_64) tr8_1;
				RTHOOK(38);
				RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
				loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				for (;;) {
					RTHOOK(39);
					ti4_8 = *(EIF_INTEGER_32 *)(Current + RTWA(150, dtype));
					if ((EIF_BOOLEAN) (loc3 > (EIF_INTEGER_32) (ti4_8 * ((EIF_INTEGER_32) 2L)))) break;
					RTHOOK(40);
					ui4_1 = loc2;
					ui4_2 = loc3;
					tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(151, "item", loc1))(loc1, ui4_1x, ui4_2x)).it_r8);
					ui4_1 = loc4;
					ui4_2 = loc3;
					tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(151, "item", loc1))(loc1, ui4_1x, ui4_2x)).it_r8);
					ur8_1 = (EIF_REAL_64) (tr8_1 - (EIF_REAL_64) (loc8 * tr8_2));
					ui4_1 = loc2;
					ui4_2 = loc3;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(155, "put", loc1))(loc1, ur8_1x, ui4_1x, ui4_2x);
					RTHOOK(41);
					RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
					loc3++;
				}
			}
			RTHOOK(42);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2++;
		}
		RTHOOK(43);
		RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
		loc4++;
	}
	RTHOOK(44);
	RTDBGAL(0, 0xF8000003, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(3, 0x01).id);
	ti4_9 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
	ui4_1 = ti4_9;
	ti4_10 = *(EIF_INTEGER_32 *)(Current + RTWA(150, dtype));
	ui4_2 = ti4_10;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(144, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
	RTNHOOK(44,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(45);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(46);
		ti4_9 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
		if ((EIF_BOOLEAN) (loc2 > ti4_9)) break;
		RTHOOK(47);
		RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
		loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(48);
			ti4_10 = *(EIF_INTEGER_32 *)(Current + RTWA(150, dtype));
			if ((EIF_BOOLEAN) (loc3 > ti4_10)) break;
			RTHOOK(49);
			ui4_1 = loc2;
			ti4_11 = *(EIF_INTEGER_32 *)(Current + RTWA(150, dtype));
			ui4_2 = (EIF_INTEGER_32) (ti4_11 + loc3);
			tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(151, "item", loc1))(loc1, ui4_1x, ui4_2x)).it_r8);
			ur8_1 = tr8_1;
			ui4_1 = loc2;
			ui4_2 = loc3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(155, "put", Result))(Result, ur8_1x, ui4_1x, ui4_2x);
			RTHOOK(50);
			RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
			loc3++;
		}
		RTHOOK(51);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(52);
		RTCT("result_rows", EX_POST);
		ti4_11 = *(EIF_INTEGER_32 *)(Result + RTVA(149, "rows", Result));
		ti4_12 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
		if ((EIF_BOOLEAN)(ti4_11 == ti4_12)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(53);
		RTCT("result_cols", EX_POST);
		ti4_11 = *(EIF_INTEGER_32 *)(Result + RTVA(150, "cols", Result));
		ti4_12 = *(EIF_INTEGER_32 *)(Current + RTWA(150, dtype));
		if ((EIF_BOOLEAN)(ti4_11 == ti4_12)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(54);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(11);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur8_1
#undef ui4_1
#undef ui4_2
}

/* {SIMPLE_MATRIX}.out */
EIF_TYPED_VALUE F4_172 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "out";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 3, Current, 2, 0, 136);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(3, Current, 136);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF8000109, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(265, 0x01).id);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(150, dtype));
	ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 * ti4_2) * ((EIF_INTEGER_32) 10L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4744, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(3);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
		RTHOOK(4);
		uc1 = (EIF_CHARACTER_8) '[';
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4934, "append_character", Result))(Result, uc1x);
		RTHOOK(5);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(6);
			ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(150, dtype));
			if ((EIF_BOOLEAN) (loc2 > ti4_2)) break;
			RTHOOK(7);
			if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 1L))) {
				RTHOOK(8);
				tr1 = RTMS_EX_H(", ",2,11296);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4932, "append_string", Result))(Result, ur1x);
			}
			RTHOOK(9);
			ui4_1 = loc1;
			ui4_2 = loc2;
			tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(151, dtype))(Current, ui4_1x, ui4_2x)).it_r8);
			RTNHOOK(9,1);
			tr1 = eif_out__r8_s1(tr8_1);
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4932, "append_string", Result))(Result, ur1x);
			RTHOOK(10);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2++;
		}
		RTHOOK(11);
		uc1 = (EIF_CHARACTER_8) ']';
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4934, "append_character", Result))(Result, uc1x);
		RTHOOK(12);
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
		if ((EIF_BOOLEAN) (loc1 < ti4_3)) {
			RTHOOK(13);
			uc1 = (EIF_CHARACTER_8) '\012';
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4934, "append_character", Result))(Result, uc1x);
		}
		RTHOOK(14);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(15);
		RTCT("out_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(16);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef uc1
}

/* {SIMPLE_MATRIX}.data */
EIF_TYPED_VALUE F4_173 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(171,Dtype(Current)));
	return r;
}


/* {SIMPLE_MATRIX}._invariant */
void F4_7078 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTLD;
	RTDA;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,tr2);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTEAINV(l_feature_name, 3, Current, 1, 7077);
	RTSA(dtype);
	RTME(dtype, 0);
	RTIT("positive_rows", Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
	if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("positive_cols", Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(150, dtype));
	if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("data_size", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(171, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3181, "count", tr1))(tr1)).it_i4);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
	ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(150, dtype));
	if ((EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) (ti4_2 * ti4_3))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("data_attached", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(171, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("model_rows", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(148, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1772, "count", tr1))(tr1)).it_i4);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
	if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("model_cols", Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(149, dtype));
	ui4_1 = ti4_1;
	tr1 = RTLN(eif_new_type(222, 0x00).id);
	*(EIF_INTEGER_32 *)tr1 = ((EIF_INTEGER_32) 1L);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4154, "interval", tr1))(tr1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3021, "new_cursor", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	tb1 = EIF_TRUE;
	for (;;) {
		if (!tb1) break;
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3007, "after", loc1))(loc1)).it_b);
		if (tb2) break;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(148, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3006, "item", loc1))(loc1)).it_i4);
		ui4_1 = ti4_1;
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1768, "item", tr1))(tr1, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1772, "count", tr2))(tr2)).it_i4);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(150, dtype));
		tb1 = (EIF_BOOLEAN)(ti4_1 == ti4_2);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3008, "forth", loc1))(loc1);
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTLO(3);
	RTMD(0);
	RTLE;
	RTEE;
#undef up1
#undef up2
#undef ui4_1
}

void EIF_Minit4 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
