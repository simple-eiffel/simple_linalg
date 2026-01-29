/*
 * Code for class VECTOR_3
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F25_568(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F25_569(EIF_REFERENCE);
extern EIF_TYPED_VALUE F25_570(EIF_REFERENCE);
extern EIF_TYPED_VALUE F25_571(EIF_REFERENCE);
extern EIF_TYPED_VALUE F25_572(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F25_573(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F25_574(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F25_575(EIF_REFERENCE);
extern EIF_TYPED_VALUE F25_576(EIF_REFERENCE);
extern EIF_TYPED_VALUE F25_577(EIF_REFERENCE);
extern EIF_TYPED_VALUE F25_578(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F25_579(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F25_580(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F25_581(EIF_REFERENCE);
extern EIF_TYPED_VALUE F25_582(EIF_REFERENCE);
extern EIF_TYPED_VALUE F25_583(EIF_REFERENCE);
extern EIF_TYPED_VALUE F25_584(EIF_REFERENCE);
extern void F25_7083(EIF_REFERENCE, int);
extern void EIF_Minit25(void);

#ifdef __cplusplus
}
#endif

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

/* {VECTOR_3}.make_from_components */
void F25_568 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "make_from_components";
	RTEX;
#define arg1 arg1x.it_r8
#define arg2 arg2x.it_r8
#define arg3 arg3x.it_r8
	EIF_REAL_64 tr8_1;
	EIF_BOOLEAN tb1;
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
	RTLU (SK_VOID, NULL);
	RTLU(SK_REAL64,&arg1);
	RTLU(SK_REAL64,&arg2);
	RTLU(SK_REAL64,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 24, Current, 0, 3, 535);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(24, Current, 535);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("x_valid", EX_PRE);
		tb1 = eif_is_nan_real_64 (arg1);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("y_valid", EX_PRE);
		tb1 = eif_is_nan_real_64 (arg2);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("z_valid", EX_PRE);
		tb1 = eif_is_nan_real_64 (arg3);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 578, 0x20000000, 1); /* x_coord */
	*(EIF_REAL_64 *)(Current + RTWA(578, dtype)) = (EIF_REAL_64) arg1;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 579, 0x20000000, 1); /* y_coord */
	*(EIF_REAL_64 *)(Current + RTWA(579, dtype)) = (EIF_REAL_64) arg2;
	RTHOOK(6);
	RTDBGAA(Current, dtype, 580, 0x20000000, 1); /* z_coord */
	*(EIF_REAL_64 *)(Current + RTWA(580, dtype)) = (EIF_REAL_64) arg3;
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("x_set", EX_POST);
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(565, dtype))(Current)).it_r8);
		if ((EIF_BOOLEAN)(tr8_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("y_set", EX_POST);
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(566, dtype))(Current)).it_r8);
		if ((EIF_BOOLEAN)(tr8_1 == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("z_set", EX_POST);
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(567, dtype))(Current)).it_r8);
		if ((EIF_BOOLEAN)(tr8_1 == arg3)) {
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
	RTLO(5);
	RTEE;
#undef arg3
#undef arg2
#undef arg1
}

/* {VECTOR_3}.x */
EIF_TYPED_VALUE F25_569 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "x";
	RTEX;
	EIF_REAL_64 tr8_1;
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
	
	RTEAA(l_feature_name, 24, Current, 0, 0, 536);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(24, Current, 536);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x20000000, 1,0); /* Result */
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(578, dtype));
	Result = (EIF_REAL_64) tr8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
}

/* {VECTOR_3}.y */
EIF_TYPED_VALUE F25_570 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "y";
	RTEX;
	EIF_REAL_64 tr8_1;
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
	
	RTEAA(l_feature_name, 24, Current, 0, 0, 537);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(24, Current, 537);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x20000000, 1,0); /* Result */
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(579, dtype));
	Result = (EIF_REAL_64) tr8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
}

/* {VECTOR_3}.z */
EIF_TYPED_VALUE F25_571 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "z";
	RTEX;
	EIF_REAL_64 tr8_1;
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
	
	RTEAA(l_feature_name, 24, Current, 0, 0, 538);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(24, Current, 538);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x20000000, 1,0); /* Result */
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(580, dtype));
	Result = (EIF_REAL_64) tr8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
}

/* {VECTOR_3}.at */
EIF_TYPED_VALUE F25_572 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "at";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_REAL_64 tr8_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REAL64, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 24, Current, 0, 1, 539);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(24, Current, 539);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_valid", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)) && (EIF_BOOLEAN) (arg1 <= ((EIF_INTEGER_32) 3L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 1L))) {
		RTHOOK(3);
		RTDBGAL(0, 0x20000000, 1,0); /* Result */
		tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(578, dtype));
		Result = (EIF_REAL_64) tr8_1;
	} else {
		RTHOOK(4);
		if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 2L))) {
			RTHOOK(5);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(579, dtype));
			Result = (EIF_REAL_64) tr8_1;
		} else {
			RTHOOK(6);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(580, dtype));
			Result = (EIF_REAL_64) tr8_1;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("result_valid", EX_POST);
		tb1 = eif_is_nan_real_64 (Result);
		if ((EIF_BOOLEAN) !tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("correct_value", EX_POST);
		tb1 = '\0';
		tb2 = '\0';
		tb3 = '\01';
		if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 1L))) {
			tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(565, dtype))(Current)).it_r8);
			tb3 = (EIF_BOOLEAN)(Result == tr8_1);
		}
		if (tb3) {
			tb3 = '\01';
			if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 2L))) {
				tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(566, dtype))(Current)).it_r8);
				tb3 = (EIF_BOOLEAN)(Result == tr8_1);
			}
			tb2 = tb3;
		}
		if (tb2) {
			tb2 = '\01';
			if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 3L))) {
				tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(567, dtype))(Current)).it_r8);
				tb2 = (EIF_BOOLEAN)(Result == tr8_1);
			}
			tb1 = tb2;
		}
		if (tb1) {
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
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef arg1
}

/* {VECTOR_3}.dot_product */
EIF_TYPED_VALUE F25_573 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "dot_product";
	RTEX;
#define arg1 arg1x.it_r
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_64 tr8_4;
	EIF_REAL_64 tr8_5;
	EIF_REAL_64 tr8_6;
	EIF_BOOLEAN tb1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_REAL64, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 24, Current, 0, 1, 540);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(24, Current, 540);
	RTCC(arg1, 24, l_feature_name, 1, eif_new_type(24, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_valid", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x20000000, 1,0); /* Result */
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(578, dtype));
	tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(565, "x", arg1))(arg1)).it_r8);
	tr8_3 = *(EIF_REAL_64 *)(Current + RTWA(579, dtype));
	tr8_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(566, "y", arg1))(arg1)).it_r8);
	tr8_5 = *(EIF_REAL_64 *)(Current + RTWA(580, dtype));
	tr8_6 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(567, "z", arg1))(arg1)).it_r8);
	Result = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (tr8_1 * tr8_2) + (EIF_REAL_64) (tr8_3 * tr8_4)) + (EIF_REAL_64) (tr8_5 * tr8_6));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_valid", EX_POST);
		tb1 = eif_is_nan_real_64 (Result);
		if ((EIF_BOOLEAN) !tb1) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef arg1
}

/* {VECTOR_3}.cross_product */
EIF_TYPED_VALUE F25_574 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "cross_product";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur8_2x = {{0}, SK_REAL64};
#define ur8_2 ur8_2x.it_r8
	EIF_TYPED_VALUE ur8_3x = {{0}, SK_REAL64};
#define ur8_3 ur8_3x.it_r8
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_64 tr8_4;
	EIF_REAL_64 tr8_5;
	EIF_REAL_64 tr8_6;
	EIF_REAL_64 tr8_7;
	EIF_REAL_64 tr8_8;
	EIF_REAL_64 tr8_9;
	EIF_REAL_64 tr8_10;
	EIF_REAL_64 tr8_11;
	EIF_REAL_64 tr8_12;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,Result);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 24, Current, 0, 1, 541);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(24, Current, 541);
	RTCC(arg1, 24, l_feature_name, 1, eif_new_type(24, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_valid", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0xF8000018, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(24, 0x01).id);
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(579, dtype));
	tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(567, "z", arg1))(arg1)).it_r8);
	tr8_3 = *(EIF_REAL_64 *)(Current + RTWA(580, dtype));
	tr8_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(566, "y", arg1))(arg1)).it_r8);
	ur8_1 = (EIF_REAL_64) ((EIF_REAL_64) (tr8_1 * tr8_2) - (EIF_REAL_64) (tr8_3 * tr8_4));
	tr8_5 = *(EIF_REAL_64 *)(Current + RTWA(580, dtype));
	tr8_6 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(565, "x", arg1))(arg1)).it_r8);
	tr8_7 = *(EIF_REAL_64 *)(Current + RTWA(578, dtype));
	tr8_8 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(567, "z", arg1))(arg1)).it_r8);
	ur8_2 = (EIF_REAL_64) ((EIF_REAL_64) (tr8_5 * tr8_6) - (EIF_REAL_64) (tr8_7 * tr8_8));
	tr8_9 = *(EIF_REAL_64 *)(Current + RTWA(578, dtype));
	tr8_10 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(566, "y", arg1))(arg1)).it_r8);
	tr8_11 = *(EIF_REAL_64 *)(Current + RTWA(579, dtype));
	tr8_12 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(565, "x", arg1))(arg1)).it_r8);
	ur8_3 = (EIF_REAL_64) ((EIF_REAL_64) (tr8_9 * tr8_10) - (EIF_REAL_64) (tr8_11 * tr8_12));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(564, Dtype(tr1)))(tr1, ur8_1x, ur8_2x, ur8_3x);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_valid", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("perpendicular_this", EX_POST);
		ur1 = RTCCL(Current);
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(569, "dot_product", Result))(Result, ur1x)).it_r8);
		tr8_2 = eif_abs_real64 (tr8_1);
		if ((EIF_BOOLEAN) (tr8_2 < (EIF_REAL_64) 1.0e-10)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("perpendicular_other", EX_POST);
		ur1 = RTCCL(arg1);
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(569, "dot_product", Result))(Result, ur1x)).it_r8);
		tr8_2 = eif_abs_real64 (tr8_1);
		if ((EIF_BOOLEAN) (tr8_2 < (EIF_REAL_64) 1.0e-10)) {
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
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ur8_1
#undef ur8_2
#undef ur8_3
#undef arg1
}

/* {VECTOR_3}.norm */
EIF_TYPED_VALUE F25_575 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "norm";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_64 tr8_4;
	EIF_REAL_64 tr8_5;
	EIF_REAL_64 tr8_6;
	EIF_BOOLEAN tb1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_REAL64, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 24, Current, 1, 0, 542);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(24, Current, 542);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF800000A, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(10, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(267, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(0, 0x20000000, 1,0); /* Result */
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(578, dtype));
	tr8_2 = *(EIF_REAL_64 *)(Current + RTWA(578, dtype));
	tr8_3 = *(EIF_REAL_64 *)(Current + RTWA(579, dtype));
	tr8_4 = *(EIF_REAL_64 *)(Current + RTWA(579, dtype));
	tr8_5 = *(EIF_REAL_64 *)(Current + RTWA(580, dtype));
	tr8_6 = *(EIF_REAL_64 *)(Current + RTWA(580, dtype));
	ur8_1 = (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (tr8_1 * tr8_2) + (EIF_REAL_64) (tr8_3 * tr8_4)) + (EIF_REAL_64) (tr8_5 * tr8_6));
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(295, "sqrt", loc1))(loc1, ur8_1x)).it_r8);
	Result = (EIF_REAL_64) tr8_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_non_negative", EX_POST);
		if ((EIF_BOOLEAN) (Result >= (EIF_REAL_64) 0.0)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("result_valid", EX_POST);
		tb1 = eif_is_nan_real_64 (Result);
		if ((EIF_BOOLEAN) !tb1) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef ur8_1
}

/* {VECTOR_3}.manhattan_norm */
EIF_TYPED_VALUE F25_576 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "manhattan_norm";
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_64 tr8_4;
	EIF_BOOLEAN tb1;
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
	
	RTEAA(l_feature_name, 24, Current, 0, 0, 543);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(24, Current, 543);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x20000000, 1,0); /* Result */
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(578, dtype));
	tr8_2 = eif_abs_real64 (tr8_1);
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(579, dtype));
	tr8_3 = eif_abs_real64 (tr8_1);
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(580, dtype));
	tr8_4 = eif_abs_real64 (tr8_1);
	Result = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (tr8_2 + tr8_3) + tr8_4);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_non_negative", EX_POST);
		if ((EIF_BOOLEAN) (Result >= (EIF_REAL_64) 0.0)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("result_valid", EX_POST);
		tb1 = eif_is_nan_real_64 (Result);
		if ((EIF_BOOLEAN) !tb1) {
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
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
}

/* {VECTOR_3}.infinity_norm */
EIF_TYPED_VALUE F25_577 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "infinity_norm";
	RTEX;
	EIF_REAL_64 loc1 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc2 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc3 = (EIF_REAL_64) 0;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_BOOLEAN tb1;
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
	RTLU(SK_REAL64, &loc1);
	RTLU(SK_REAL64, &loc2);
	RTLU(SK_REAL64, &loc3);
	
	RTEAA(l_feature_name, 24, Current, 3, 0, 544);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(24, Current, 544);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0x20000000, 1, 0); /* loc1 */
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(578, dtype));
	tr8_2 = eif_abs_real64 (tr8_1);
	loc1 = (EIF_REAL_64) tr8_2;
	RTHOOK(2);
	RTDBGAL(2, 0x20000000, 1, 0); /* loc2 */
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(579, dtype));
	tr8_2 = eif_abs_real64 (tr8_1);
	loc2 = (EIF_REAL_64) tr8_2;
	RTHOOK(3);
	RTDBGAL(3, 0x20000000, 1, 0); /* loc3 */
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(580, dtype));
	tr8_2 = eif_abs_real64 (tr8_1);
	loc3 = (EIF_REAL_64) tr8_2;
	RTHOOK(4);
	RTDBGAL(0, 0x20000000, 1,0); /* Result */
	Result = (EIF_REAL_64) loc1;
	RTHOOK(5);
	if ((EIF_BOOLEAN) (loc2 > Result)) {
		RTHOOK(6);
		RTDBGAL(0, 0x20000000, 1,0); /* Result */
		Result = (EIF_REAL_64) loc2;
	}
	RTHOOK(7);
	if ((EIF_BOOLEAN) (loc3 > Result)) {
		RTHOOK(8);
		RTDBGAL(0, 0x20000000, 1,0); /* Result */
		Result = (EIF_REAL_64) loc3;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("result_non_negative", EX_POST);
		if ((EIF_BOOLEAN) (Result >= (EIF_REAL_64) 0.0)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("result_valid", EX_POST);
		tb1 = eif_is_nan_real_64 (Result);
		if ((EIF_BOOLEAN) !tb1) {
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
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
}

/* {VECTOR_3}.add */
EIF_TYPED_VALUE F25_578 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "add";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur8_2x = {{0}, SK_REAL64};
#define ur8_2 ur8_2x.it_r8
	EIF_TYPED_VALUE ur8_3x = {{0}, SK_REAL64};
#define ur8_3 ur8_3x.it_r8
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_64 tr8_4;
	EIF_REAL_64 tr8_5;
	EIF_REAL_64 tr8_6;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,Result);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 24, Current, 0, 1, 545);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(24, Current, 545);
	RTCC(arg1, 24, l_feature_name, 1, eif_new_type(24, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_valid", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0xF8000018, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(24, 0x01).id);
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(578, dtype));
	tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(565, "x", arg1))(arg1)).it_r8);
	ur8_1 = (EIF_REAL_64) (tr8_1 + tr8_2);
	tr8_3 = *(EIF_REAL_64 *)(Current + RTWA(579, dtype));
	tr8_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(566, "y", arg1))(arg1)).it_r8);
	ur8_2 = (EIF_REAL_64) (tr8_3 + tr8_4);
	tr8_5 = *(EIF_REAL_64 *)(Current + RTWA(580, dtype));
	tr8_6 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(567, "z", arg1))(arg1)).it_r8);
	ur8_3 = (EIF_REAL_64) (tr8_5 + tr8_6);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(564, Dtype(tr1)))(tr1, ur8_1x, ur8_2x, ur8_3x);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_valid", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("result_x", EX_POST);
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(565, "x", Result))(Result)).it_r8);
		tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(565, dtype))(Current)).it_r8);
		tr8_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(565, "x", arg1))(arg1)).it_r8);
		if ((EIF_BOOLEAN)(tr8_1 == (EIF_REAL_64) (tr8_2 + tr8_3))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("result_y", EX_POST);
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(566, "y", Result))(Result)).it_r8);
		tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(566, dtype))(Current)).it_r8);
		tr8_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(566, "y", arg1))(arg1)).it_r8);
		if ((EIF_BOOLEAN)(tr8_1 == (EIF_REAL_64) (tr8_2 + tr8_3))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("result_z", EX_POST);
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(567, "z", Result))(Result)).it_r8);
		tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(567, dtype))(Current)).it_r8);
		tr8_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(567, "z", arg1))(arg1)).it_r8);
		if ((EIF_BOOLEAN)(tr8_1 == (EIF_REAL_64) (tr8_2 + tr8_3))) {
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
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur8_1
#undef ur8_2
#undef ur8_3
#undef arg1
}

/* {VECTOR_3}.subtract */
EIF_TYPED_VALUE F25_579 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "subtract";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur8_2x = {{0}, SK_REAL64};
#define ur8_2 ur8_2x.it_r8
	EIF_TYPED_VALUE ur8_3x = {{0}, SK_REAL64};
#define ur8_3 ur8_3x.it_r8
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_64 tr8_4;
	EIF_REAL_64 tr8_5;
	EIF_REAL_64 tr8_6;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,Result);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 24, Current, 0, 1, 546);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(24, Current, 546);
	RTCC(arg1, 24, l_feature_name, 1, eif_new_type(24, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_valid", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0xF8000018, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(24, 0x01).id);
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(578, dtype));
	tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(565, "x", arg1))(arg1)).it_r8);
	ur8_1 = (EIF_REAL_64) (tr8_1 - tr8_2);
	tr8_3 = *(EIF_REAL_64 *)(Current + RTWA(579, dtype));
	tr8_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(566, "y", arg1))(arg1)).it_r8);
	ur8_2 = (EIF_REAL_64) (tr8_3 - tr8_4);
	tr8_5 = *(EIF_REAL_64 *)(Current + RTWA(580, dtype));
	tr8_6 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(567, "z", arg1))(arg1)).it_r8);
	ur8_3 = (EIF_REAL_64) (tr8_5 - tr8_6);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(564, Dtype(tr1)))(tr1, ur8_1x, ur8_2x, ur8_3x);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_valid", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("result_x", EX_POST);
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(565, "x", Result))(Result)).it_r8);
		tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(565, dtype))(Current)).it_r8);
		tr8_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(565, "x", arg1))(arg1)).it_r8);
		if ((EIF_BOOLEAN)(tr8_1 == (EIF_REAL_64) (tr8_2 - tr8_3))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("result_y", EX_POST);
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(566, "y", Result))(Result)).it_r8);
		tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(566, dtype))(Current)).it_r8);
		tr8_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(566, "y", arg1))(arg1)).it_r8);
		if ((EIF_BOOLEAN)(tr8_1 == (EIF_REAL_64) (tr8_2 - tr8_3))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("result_z", EX_POST);
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(567, "z", Result))(Result)).it_r8);
		tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(567, dtype))(Current)).it_r8);
		tr8_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(567, "z", arg1))(arg1)).it_r8);
		if ((EIF_BOOLEAN)(tr8_1 == (EIF_REAL_64) (tr8_2 - tr8_3))) {
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
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur8_1
#undef ur8_2
#undef ur8_3
#undef arg1
}

/* {VECTOR_3}.scale */
EIF_TYPED_VALUE F25_580 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "scale";
	RTEX;
#define arg1 arg1x.it_r8
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur8_2x = {{0}, SK_REAL64};
#define ur8_2 ur8_2x.it_r8
	EIF_TYPED_VALUE ur8_3x = {{0}, SK_REAL64};
#define ur8_3 ur8_3x.it_r8
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU(SK_REAL64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 24, Current, 0, 1, 547);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(24, Current, 547);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("factor_valid", EX_PRE);
		tb1 = eif_is_nan_real_64 (arg1);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0xF8000018, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(24, 0x01).id);
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(578, dtype));
	ur8_1 = (EIF_REAL_64) (tr8_1 * arg1);
	tr8_2 = *(EIF_REAL_64 *)(Current + RTWA(579, dtype));
	ur8_2 = (EIF_REAL_64) (tr8_2 * arg1);
	tr8_3 = *(EIF_REAL_64 *)(Current + RTWA(580, dtype));
	ur8_3 = (EIF_REAL_64) (tr8_3 * arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(564, Dtype(tr1)))(tr1, ur8_1x, ur8_2x, ur8_3x);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_valid", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("result_x", EX_POST);
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(565, "x", Result))(Result)).it_r8);
		tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(565, dtype))(Current)).it_r8);
		if ((EIF_BOOLEAN)(tr8_1 == (EIF_REAL_64) (tr8_2 * arg1))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("result_y", EX_POST);
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(566, "y", Result))(Result)).it_r8);
		tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(566, dtype))(Current)).it_r8);
		if ((EIF_BOOLEAN)(tr8_1 == (EIF_REAL_64) (tr8_2 * arg1))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("result_z", EX_POST);
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(567, "z", Result))(Result)).it_r8);
		tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(567, dtype))(Current)).it_r8);
		if ((EIF_BOOLEAN)(tr8_1 == (EIF_REAL_64) (tr8_2 * arg1))) {
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
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur8_1
#undef ur8_2
#undef ur8_3
#undef arg1
}

/* {VECTOR_3}.normalized */
EIF_TYPED_VALUE F25_581 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "normalized";
	RTEX;
	EIF_REAL_64 loc1 = (EIF_REAL_64) 0;
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur8_2x = {{0}, SK_REAL64};
#define ur8_2 ur8_2x.it_r8
	EIF_TYPED_VALUE ur8_3x = {{0}, SK_REAL64};
#define ur8_3 ur8_3x.it_r8
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
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
	RTLU(SK_REAL64, &loc1);
	
	RTEAA(l_feature_name, 24, Current, 1, 0, 548);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(24, Current, 548);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_zero_vector", EX_PRE);
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(571, dtype))(Current)).it_r8);
		RTTE((EIF_BOOLEAN) (tr8_1 > (EIF_REAL_64) 0.0), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(1, 0x20000000, 1, 0); /* loc1 */
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(571, dtype))(Current)).it_r8);
	loc1 = (EIF_REAL_64) tr8_1;
	RTHOOK(3);
	RTDBGAL(0, 0xF8000018, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(24, 0x01).id);
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(578, dtype));
	ur8_1 = (EIF_REAL_64) ((EIF_REAL_64) (tr8_1) /  (EIF_REAL_64) (loc1));
	tr8_2 = *(EIF_REAL_64 *)(Current + RTWA(579, dtype));
	ur8_2 = (EIF_REAL_64) ((EIF_REAL_64) (tr8_2) /  (EIF_REAL_64) (loc1));
	tr8_3 = *(EIF_REAL_64 *)(Current + RTWA(580, dtype));
	ur8_3 = (EIF_REAL_64) ((EIF_REAL_64) (tr8_3) /  (EIF_REAL_64) (loc1));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(564, Dtype(tr1)))(tr1, ur8_1x, ur8_2x, ur8_3x);
	RTNHOOK(3,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("result_valid", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("result_unit", EX_POST);
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(571, "norm", Result))(Result)).it_r8);
		tr8_2 = eif_abs_real64 ((EIF_REAL_64) (tr8_1 - (EIF_REAL_64) 1.0));
		if ((EIF_BOOLEAN) (tr8_2 < (EIF_REAL_64) 1.0e-10)) {
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
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur8_1
#undef ur8_2
#undef ur8_3
}

/* {VECTOR_3}.x_coord */
EIF_TYPED_VALUE F25_582 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(578,Dtype(Current)));
	return r;
}


/* {VECTOR_3}.y_coord */
EIF_TYPED_VALUE F25_583 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(579,Dtype(Current)));
	return r;
}


/* {VECTOR_3}.z_coord */
EIF_TYPED_VALUE F25_584 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(580,Dtype(Current)));
	return r;
}


/* {VECTOR_3}._invariant */
void F25_7083 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	RTDA;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAINV(l_feature_name, 24, Current, 0, 7082);
	RTSA(dtype);
	RTME(dtype, 0);
	RTIT("x_valid", Current);
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(578, dtype));
	tb1 = eif_is_nan_real_64 (tr8_1);
	if ((EIF_BOOLEAN) !tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("y_valid", Current);
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(579, dtype));
	tb1 = eif_is_nan_real_64 (tr8_1);
	if ((EIF_BOOLEAN) !tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("z_valid", Current);
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(580, dtype));
	tb1 = eif_is_nan_real_64 (tr8_1);
	if ((EIF_BOOLEAN) !tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTLO(2);
	RTMD(0);
	RTLE;
	RTEE;
}

void EIF_Minit25 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
