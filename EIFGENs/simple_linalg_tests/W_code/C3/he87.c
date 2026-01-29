/*
 * Code for class HEXADECIMAL_STRING_TO_INTEGER_CONVERTER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F87_1508(EIF_REFERENCE);
extern EIF_TYPED_VALUE F87_1509(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F87_1510(EIF_REFERENCE);
extern EIF_TYPED_VALUE F87_1511(EIF_REFERENCE);
extern EIF_TYPED_VALUE F87_1512(EIF_REFERENCE);
extern void F87_1513(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F87_1514(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F87_1515(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F87_1516(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F87_1517(EIF_REFERENCE);
extern EIF_TYPED_VALUE F87_1518(EIF_REFERENCE);
extern EIF_TYPED_VALUE F87_1519(EIF_REFERENCE);
extern EIF_TYPED_VALUE F87_1520(EIF_REFERENCE);
extern EIF_TYPED_VALUE F87_1521(EIF_REFERENCE);
extern EIF_TYPED_VALUE F87_1522(EIF_REFERENCE);
extern EIF_TYPED_VALUE F87_1523(EIF_REFERENCE);
extern EIF_TYPED_VALUE F87_1524(EIF_REFERENCE);
extern EIF_TYPED_VALUE F87_1525(EIF_REFERENCE);
extern EIF_TYPED_VALUE F87_1526(EIF_REFERENCE);
extern EIF_TYPED_VALUE F87_1527(EIF_REFERENCE);
extern EIF_TYPED_VALUE F87_1528(EIF_REFERENCE);
extern EIF_TYPED_VALUE F87_1529(EIF_REFERENCE);
extern EIF_TYPED_VALUE F87_1530(EIF_REFERENCE);
extern EIF_TYPED_VALUE F87_1531(EIF_REFERENCE);
extern EIF_TYPED_VALUE F87_1532(EIF_REFERENCE);
extern EIF_TYPED_VALUE F87_1533(EIF_REFERENCE);
extern void EIF_Minit87(void);

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

/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.make */
void F87_1508 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 86, Current, 0, 0, 1500);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(86, Current, 1500);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1354, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1390, dtype))(Current, ui4_1x);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 1382, 0xF8000109, 0); /* leading_separators */
	tr1 = RTLNSMART(RTWCT(1382, dtype, Dftype(Current)).id);
	tr2 = RTMS_EX_H(" ",1,32);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4874, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(2,1);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1382, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 1383, 0xF8000109, 0); /* trailing_separators */
	tr1 = RTLNSMART(RTWCT(1383, dtype, Dftype(Current)).id);
	tr2 = RTMS_EX_H(" ",1,32);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4874, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(3,1);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1383, dtype)) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("leading_separators_set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1382, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr2 = RTMS_EX_H(" ",1,32);
		if (RTEQ(tr1, tr2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("trailing_separators_set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1383, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr2 = RTMS_EX_H(" ",1,32);
		if (RTEQ(tr1, tr2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("leading_separators_not_acceptable", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(1381, dtype));
		if ((EIF_BOOLEAN) !tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("trailing_separatorsnot_acceptable", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(1380, dtype));
		if ((EIF_BOOLEAN) !tb1) {
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
	RTLO(2);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
}

/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.separators_valid */
EIF_TYPED_VALUE F87_1509 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "separators_valid";
	RTEX;
	EIF_CHARACTER_8 loc1 = (EIF_CHARACTER_8) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_CHAR8, &loc1);
	RTLU(SK_BOOL, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	
	RTEAA(l_feature_name, 86, Current, 4, 1, 1501);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(86, Current, 1501);
	RTCC(arg1, 86, l_feature_name, 1, eif_new_type(265, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("separators_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4906, "count", arg1));
	loc4 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	RTDBGAL(2, 0x04000000, 1, 0); /* loc2 */
	loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(5);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	for (;;) {
		RTHOOK(6);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc3 > loc4) || loc2)) break;
		RTHOOK(7);
		RTDBGAL(1, 0x08000000, 1, 0); /* loc1 */
		ui4_1 = loc3;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3403, "item", arg1))(arg1, ui4_1x)).it_c1);
		loc1 = (EIF_CHARACTER_8) tc1;
		RTHOOK(8);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 >= (EIF_CHARACTER_8) '0') && (EIF_BOOLEAN) (loc1 <= (EIF_CHARACTER_8) '9')) || (EIF_BOOLEAN)(loc1 == (EIF_CHARACTER_8) '+')) || (EIF_BOOLEAN)(loc1 == (EIF_CHARACTER_8) '-')) || (EIF_BOOLEAN)(loc1 == (EIF_CHARACTER_8) 'X')) || (EIF_BOOLEAN)(loc1 == (EIF_CHARACTER_8) '&')) || (EIF_BOOLEAN)(loc1 == (EIF_CHARACTER_8) '#'))) {
			RTHOOK(9);
			RTDBGAL(2, 0x04000000, 1, 0); /* loc2 */
			loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			RTHOOK(10);
			RTDBGAL(0, 0x04000000, 1,0); /* Result */
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		}
		RTHOOK(11);
		RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
		loc3++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ui4_1
#undef arg1
}

/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.overflowed */
EIF_TYPED_VALUE F87_1510 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "overflowed";
	RTEX;
	EIF_INTEGER_32 ti4_1;
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
	
	RTEAA(l_feature_name, 86, Current, 0, 0, 1502);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(86, Current, 1502);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(1445, dtype));
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1398, dtype));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tb1 && (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L)));
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

/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.underflowed */
EIF_TYPED_VALUE F87_1511 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "underflowed";
	RTEX;
	EIF_INTEGER_32 ti4_1;
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
	
	RTEAA(l_feature_name, 86, Current, 0, 0, 1503);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(86, Current, 1503);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(1445, dtype));
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1398, dtype));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tb1 && (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L)));
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

/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.parse_successful */
EIF_TYPED_VALUE F87_1512 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "parse_successful";
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
	
	RTEAA(l_feature_name, 86, Current, 0, 0, 1504);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(86, Current, 1504);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1397, dtype));
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(1397, dtype));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 5L)) && (EIF_BOOLEAN)(ti4_2 != ((EIF_INTEGER_32) 6L)));
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

/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.reset */
void F87_1513 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "reset";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
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
	
	RTEAA(l_feature_name, 86, Current, 0, 1, 1505);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(86, Current, 1505);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("type_valid", EX_PRE);
		ui4_1 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1385, dtype))(Current, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 1397, 0x10000000, 1); /* last_state */
	*(EIF_INTEGER_32 *)(Current + RTWA(1397, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 1398, 0x10000000, 1); /* sign */
	*(EIF_INTEGER_32 *)(Current + RTWA(1398, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(4);
	RTDBGAA(Current, dtype, 1389, 0x10000000, 1); /* conversion_type */
	*(EIF_INTEGER_32 *)(Current + RTWA(1389, dtype)) = (EIF_INTEGER_32) arg1;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 1445, 0x04000000, 1); /* internal_overflowed */
	*(EIF_BOOLEAN *)(Current + RTWA(1445, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("last_state_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1397, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("sign_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1398, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("conversion_type_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1389, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("not_overflowed", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1386, dtype))(Current)).it_b);
		if ((EIF_BOOLEAN) !tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("not_underflowed", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1387, dtype))(Current)).it_b);
		if ((EIF_BOOLEAN) !tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("parse_successful", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1388, dtype))(Current)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ui4_1
#undef arg1
}

/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.parse_string_with_type */
void F87_1514 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "parse_string_with_type";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc5 = (EIF_NATURAL_32) 0;
	EIF_CHARACTER_32 loc6 = (EIF_CHARACTER_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc7);
	RTLR(3,loc2);
	RTLR(4,tr1);
	RTLR(5,loc8);
	RTLR(6,loc3);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_UINT32, &loc5);
	RTLU(SK_CHAR32, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_REF, &loc8);
	
	RTEAA(l_feature_name, 86, Current, 8, 2, 1506);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(86, Current, 1506);
	RTCC(arg1, 86, l_feature_name, 1, eif_new_type(260, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("type_valid", EX_PRE);
		ui4_1 = arg2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1385, dtype))(Current, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ui4_1 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1390, dtype))(Current, ui4_1x);
	RTHOOK(4);
	loc7 = RTCCL(arg1);
	loc7 = RTRV(eif_new_type(263, 0x01),loc7);
	if (EIF_TEST(loc7)) {
		RTHOOK(5);
		RTDBGAL(2, 0xF800013E, 0, 0); /* loc2 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4903, "area", loc7))(loc7)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc2 = (EIF_REFERENCE) tr1;
		RTHOOK(6);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4904, "area_lower", loc7))(loc7)).it_i4);
		loc1 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(7);
		RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
		ti4_1 = *(EIF_INTEGER_32 *)(loc7 + RTVA(4906, "count", loc7));
		loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ti4_1);
		for (;;) {
			RTHOOK(8);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1397, dtype));
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 == loc4) || (EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 4L)))) break;
			RTHOOK(9);
			if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)) < loc4)) {
				RTHOOK(10);
				RTDBGAA(Current, dtype, 1444, 0x08000000, 1); /* internal_lookahead */
				ui4_1 = (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3403, "item", loc2))(loc2, ui4_1x)).it_c1);
				*(EIF_CHARACTER_8 *)(Current + RTWA(1444, dtype)) = (EIF_CHARACTER_8) tc1;
			} else {
				RTHOOK(11);
				RTDBGAA(Current, dtype, 1444, 0x08000000, 1); /* internal_lookahead */
				*(EIF_CHARACTER_8 *)(Current + RTWA(1444, dtype)) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) ' ';
			}
			RTHOOK(12);
			ui4_1 = loc1;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3403, "item", loc2))(loc2, ui4_1x)).it_c1);
			uc1 = tc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1396, dtype))(Current, uc1x);
			RTHOOK(13);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1++;
		}
	} else {
		RTHOOK(14);
		loc8 = RTCCL(arg1);
		loc8 = RTRV(eif_new_type(266, 0x01),loc8);
		if (EIF_TEST(loc8)) {
			RTHOOK(15);
			RTDBGAL(3, 0xF8000226, 0, 0); /* loc3 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4978, "area", loc8))(loc8)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc3 = (EIF_REFERENCE) tr1;
			RTHOOK(16);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4979, "area_lower", loc8))(loc8)).it_i4);
			loc1 = (EIF_INTEGER_32) ti4_2;
			RTHOOK(17);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			ti4_2 = *(EIF_INTEGER_32 *)(loc8 + RTVA(4981, "count", loc8));
			loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ti4_2);
			for (;;) {
				RTHOOK(18);
				ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(1397, dtype));
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 == loc4) || (EIF_BOOLEAN) (ti4_2 >= ((EIF_INTEGER_32) 4L)))) break;
				RTHOOK(19);
				if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)) < loc4)) {
					RTHOOK(20);
					RTDBGAA(Current, dtype, 1444, 0x08000000, 1); /* internal_lookahead */
					ui4_1 = (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
					tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3403, "item", loc3))(loc3, ui4_1x)).it_c4);
					tc1 = (EIF_CHARACTER_8) tw1;
					*(EIF_CHARACTER_8 *)(Current + RTWA(1444, dtype)) = (EIF_CHARACTER_8) tc1;
				} else {
					RTHOOK(21);
					RTDBGAA(Current, dtype, 1444, 0x08000000, 1); /* internal_lookahead */
					*(EIF_CHARACTER_8 *)(Current + RTWA(1444, dtype)) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) ' ';
				}
				RTHOOK(22);
				RTDBGAL(6, 0x1C000000, 1, 0); /* loc6 */
				ui4_1 = loc1;
				tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3403, "item", loc3))(loc3, ui4_1x)).it_c4);
				loc6 = (EIF_CHARACTER_32) tw1;
				RTHOOK(23);
				tb1 = (loc6 <= 0xFF);
				if (tb1) {
					RTHOOK(24);
					tc1 = (EIF_CHARACTER_8) loc6;
					uc1 = tc1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1396, dtype))(Current, uc1x);
				} else {
					RTHOOK(25);
					RTDBGAA(Current, dtype, 1397, 0x10000000, 1); /* last_state */
					*(EIF_INTEGER_32 *)(Current + RTWA(1397, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
				}
				RTHOOK(26);
				RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
				loc1++;
			}
		} else {
			RTHOOK(27);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			RTHOOK(28);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4783, "count", arg1))(arg1)).it_i4);
			loc4 = (EIF_INTEGER_32) ti4_3;
			for (;;) {
				RTHOOK(29);
				ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(1397, dtype));
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 > loc4) || (EIF_BOOLEAN) (ti4_3 >= ((EIF_INTEGER_32) 4L)))) break;
				RTHOOK(30);
				if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)) < loc4)) {
					RTHOOK(31);
					RTDBGAA(Current, dtype, 1444, 0x08000000, 1); /* internal_lookahead */
					ui4_1 = (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4746, "code", arg1))(arg1, ui4_1x)).it_n4);
					tc1 = (EIF_CHARACTER_8) tu4_1;
					*(EIF_CHARACTER_8 *)(Current + RTWA(1444, dtype)) = (EIF_CHARACTER_8) tc1;
				} else {
					RTHOOK(32);
					RTDBGAA(Current, dtype, 1444, 0x08000000, 1); /* internal_lookahead */
					*(EIF_CHARACTER_8 *)(Current + RTWA(1444, dtype)) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) ' ';
				}
				RTHOOK(33);
				RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
				ui4_1 = loc1;
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4746, "code", arg1))(arg1, ui4_1x)).it_n4);
				loc5 = (EIF_NATURAL_32) tu4_1;
				RTHOOK(34);
				tr1 = RTLN(eif_new_type(234, 0x00).id);
				*(EIF_NATURAL_32 *)tr1 = loc5;
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4368, "is_valid_character_8_code", tr1))(tr1)).it_b);
				if (tb1) {
					RTHOOK(35);
					tc1 = (EIF_CHARACTER_8) loc5;
					uc1 = tc1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1396, dtype))(Current, uc1x);
				} else {
					RTHOOK(36);
					RTDBGAA(Current, dtype, 1397, 0x10000000, 1); /* last_state */
					*(EIF_INTEGER_32 *)(Current + RTWA(1397, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
				}
				RTHOOK(37);
				RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
				loc1++;
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(38);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(12);
	RTEE;
#undef up1
#undef ui4_1
#undef uc1
#undef arg2
#undef arg1
}

/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.parse_character */
void F87_1515 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "parse_character";
	RTEX;
	EIF_NATURAL_64 loc1 = (EIF_NATURAL_64) 0;
	EIF_NATURAL_64 loc2 = (EIF_NATURAL_64) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_c1
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE uu8_1x = {{0}, SK_UINT64};
#define uu8_1 uu8_1x.it_n8
	EIF_TYPED_VALUE uu8_2x = {{0}, SK_UINT64};
#define uu8_2 uu8_2x.it_n8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_CHAR8,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_UINT64, &loc1);
	RTLU(SK_UINT64, &loc2);
	RTLU(SK_INT32, &loc3);
	
	RTEAA(l_feature_name, 86, Current, 3, 1, 1507);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(86, Current, 1507);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1397, dtype));
	loc3 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	if ((EIF_BOOLEAN) (loc3 <= ((EIF_INTEGER_32) 5L))) {
		RTHOOK(3);
		switch (loc3) {
			case 0L:
				RTHOOK(4);
				tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(1444, dtype));
				tc2 = *(EIF_CHARACTER_8 *)(Current + RTWA(1444, dtype));
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == (EIF_CHARACTER_8) '0') && (EIF_BOOLEAN) ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) 'x') || (EIF_BOOLEAN)(tc2 == (EIF_CHARACTER_8) 'X'))) || (EIF_BOOLEAN)(arg1 == (EIF_CHARACTER_8) '&'))) {
					RTHOOK(5);
					RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
					loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				} else {
					RTHOOK(6);
					if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == (EIF_CHARACTER_8) '-') || (EIF_BOOLEAN)(arg1 == (EIF_CHARACTER_8) '+'))) {
						RTHOOK(7);
						RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
						loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
						RTHOOK(8);
						if ((EIF_BOOLEAN)(arg1 == (EIF_CHARACTER_8) '-')) {
							RTHOOK(9);
							RTDBGAA(Current, dtype, 1398, 0x10000000, 1); /* sign */
							*(EIF_INTEGER_32 *)(Current + RTWA(1398, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
						} else {
							RTHOOK(10);
							RTDBGAA(Current, dtype, 1398, 0x10000000, 1); /* sign */
							*(EIF_INTEGER_32 *)(Current + RTWA(1398, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
						}
					} else {
						RTHOOK(11);
						tr1 = RTLN(eif_new_type(252, 0x00).id);
						*(EIF_CHARACTER_8 *)tr1 = arg1;
						tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4645, "is_hexa_digit", tr1))(tr1)).it_b);
						if (tb1) {
							RTHOOK(12);
							RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
							loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
							RTHOOK(13);
							RTDBGAA(Current, dtype, 1447, 0x3C000000, 1); /* part1 */
							*(EIF_NATURAL_64 *)(Current + RTWA(1447, dtype)) = (EIF_NATURAL_64) (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L);
							RTHOOK(14);
							RTDBGAA(Current, dtype, 1448, 0x3C000000, 1); /* part2 */
							tr1 = RTLN(eif_new_type(252, 0x00).id);
							*(EIF_CHARACTER_8 *)tr1 = arg1;
							tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4640, "to_hexa_digit", tr1))(tr1)).it_n1);
							tu8_1 = (EIF_NATURAL_64) tu1_1;
							*(EIF_NATURAL_64 *)(Current + RTWA(1448, dtype)) = (EIF_NATURAL_64) tu8_1;
						} else {
							RTHOOK(15);
							tb1 = '\0';
							tb2 = *(EIF_BOOLEAN *)(Current + RTWA(1381, dtype));
							if (tb2) {
								tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1382, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
								RTNHOOK(15,1);
								uc1 = arg1;
								tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3116, "has", tr1))(tr1, uc1x)).it_b);
								tb1 = tb2;
							}
							if (tb1) {
							} else {
								RTHOOK(16);
								RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
								loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
							}
						}
					}
				}
				break;
			case 1L:
				RTHOOK(17);
				tr1 = RTLN(eif_new_type(252, 0x00).id);
				*(EIF_CHARACTER_8 *)tr1 = arg1;
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4645, "is_hexa_digit", tr1))(tr1)).it_b);
				if (tb1) {
					RTHOOK(18);
					RTDBGAA(Current, dtype, 1447, 0x3C000000, 1); /* part1 */
					*(EIF_NATURAL_64 *)(Current + RTWA(1447, dtype)) = (EIF_NATURAL_64) (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L);
					RTHOOK(19);
					RTDBGAA(Current, dtype, 1448, 0x3C000000, 1); /* part2 */
					tr1 = RTLN(eif_new_type(252, 0x00).id);
					*(EIF_CHARACTER_8 *)tr1 = arg1;
					tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4640, "to_hexa_digit", tr1))(tr1)).it_n1);
					tu8_1 = (EIF_NATURAL_64) tu1_1;
					*(EIF_NATURAL_64 *)(Current + RTWA(1448, dtype)) = (EIF_NATURAL_64) tu8_1;
					RTHOOK(20);
					RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
					loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
					RTHOOK(21);
					tb1 = '\0';
					ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1389, dtype));
					ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1354, dtype))(Current)).it_i4);
					if ((EIF_BOOLEAN)(ti4_1 != ti4_2)) {
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1446, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(21,1);
						tu8_1 = *(EIF_NATURAL_64 *)(Current + RTWA(1447, dtype));
						uu8_1 = tu8_1;
						tu8_2 = *(EIF_NATURAL_64 *)(Current + RTWA(1448, dtype));
						uu8_2 = tu8_2;
						ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1389, dtype));
						ui4_1 = ti4_1;
						ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(1398, dtype));
						ui4_2 = ti4_2;
						tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1375, "will_overflow", tr1))(tr1, uu8_1x, uu8_2x, ui4_1x, ui4_2x)).it_b);
						tb1 = tb2;
					}
					if (tb1) {
						RTHOOK(22);
						RTDBGAA(Current, dtype, 1445, 0x04000000, 1); /* internal_overflowed */
						*(EIF_BOOLEAN *)(Current + RTWA(1445, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
						RTHOOK(23);
						RTDBGAA(Current, dtype, 1448, 0x3C000000, 1); /* part2 */
						*(EIF_NATURAL_64 *)(Current + RTWA(1448, dtype)) = (EIF_NATURAL_64) (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L);
						RTHOOK(24);
						RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
						loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 6L);
					}
				} else {
					RTHOOK(25);
					if ((EIF_BOOLEAN)(arg1 == (EIF_CHARACTER_8) '#')) {
						RTHOOK(26);
						RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
						loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
					} else {
						RTHOOK(27);
						if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == (EIF_CHARACTER_8) 'x') || (EIF_BOOLEAN)(arg1 == (EIF_CHARACTER_8) 'X'))) {
							RTHOOK(28);
							RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
							loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
						}
					}
				}
				break;
			case 2L:
				RTHOOK(29);
				tr1 = RTLN(eif_new_type(252, 0x00).id);
				*(EIF_CHARACTER_8 *)tr1 = arg1;
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4645, "is_hexa_digit", tr1))(tr1)).it_b);
				if (tb1) {
					RTHOOK(30);
					RTDBGAA(Current, dtype, 1447, 0x3C000000, 1); /* part1 */
					*(EIF_NATURAL_64 *)(Current + RTWA(1447, dtype)) = (EIF_NATURAL_64) (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L);
					RTHOOK(31);
					RTDBGAA(Current, dtype, 1448, 0x3C000000, 1); /* part2 */
					tr1 = RTLN(eif_new_type(252, 0x00).id);
					*(EIF_CHARACTER_8 *)tr1 = arg1;
					tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4640, "to_hexa_digit", tr1))(tr1)).it_n1);
					tu8_1 = (EIF_NATURAL_64) tu1_1;
					*(EIF_NATURAL_64 *)(Current + RTWA(1448, dtype)) = (EIF_NATURAL_64) tu8_1;
					RTHOOK(32);
					RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
					loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
					RTHOOK(33);
					tb1 = '\0';
					ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1389, dtype));
					ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1354, dtype))(Current)).it_i4);
					if ((EIF_BOOLEAN)(ti4_1 != ti4_2)) {
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1446, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(33,1);
						tu8_1 = *(EIF_NATURAL_64 *)(Current + RTWA(1447, dtype));
						uu8_1 = tu8_1;
						tu8_2 = *(EIF_NATURAL_64 *)(Current + RTWA(1448, dtype));
						uu8_2 = tu8_2;
						ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1389, dtype));
						ui4_1 = ti4_1;
						ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(1398, dtype));
						ui4_2 = ti4_2;
						tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1375, "will_overflow", tr1))(tr1, uu8_1x, uu8_2x, ui4_1x, ui4_2x)).it_b);
						tb1 = tb2;
					}
					if (tb1) {
						RTHOOK(34);
						RTDBGAA(Current, dtype, 1445, 0x04000000, 1); /* internal_overflowed */
						*(EIF_BOOLEAN *)(Current + RTWA(1445, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
						RTHOOK(35);
						RTDBGAA(Current, dtype, 1448, 0x3C000000, 1); /* part2 */
						*(EIF_NATURAL_64 *)(Current + RTWA(1448, dtype)) = (EIF_NATURAL_64) (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L);
						RTHOOK(36);
						RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
						loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 6L);
					}
				}
				break;
			case 3L:
				RTHOOK(37);
				tr1 = RTLN(eif_new_type(252, 0x00).id);
				*(EIF_CHARACTER_8 *)tr1 = arg1;
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4645, "is_hexa_digit", tr1))(tr1)).it_b);
				if (tb1) {
					RTHOOK(38);
					RTDBGAL(1, 0x3C000000, 1, 0); /* loc1 */
					tu8_1 = *(EIF_NATURAL_64 *)(Current + RTWA(1447, dtype));
					loc1 = (EIF_NATURAL_64) tu8_1;
					RTHOOK(39);
					RTDBGAL(2, 0x3C000000, 1, 0); /* loc2 */
					tu8_1 = *(EIF_NATURAL_64 *)(Current + RTWA(1448, dtype));
					loc2 = (EIF_NATURAL_64) tu8_1;
					RTHOOK(40);
					RTDBGAA(Current, dtype, 1447, 0x3C000000, 1); /* part1 */
					tu8_1 = *(EIF_NATURAL_64 *)(Current + RTWA(1447, dtype));
					tu8_2 = *(EIF_NATURAL_64 *)(Current + RTWA(1448, dtype));
					*(EIF_NATURAL_64 *)(Current + RTWA(1447, dtype)) = (EIF_NATURAL_64) (EIF_NATURAL_64) ((EIF_NATURAL_64) (tu8_1 * (EIF_NATURAL_64) ((EIF_INTEGER_32) 16L)) + tu8_2);
					RTHOOK(41);
					RTDBGAA(Current, dtype, 1448, 0x3C000000, 1); /* part2 */
					tr1 = RTLN(eif_new_type(252, 0x00).id);
					*(EIF_CHARACTER_8 *)tr1 = arg1;
					tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4640, "to_hexa_digit", tr1))(tr1)).it_n1);
					tu8_1 = (EIF_NATURAL_64) tu1_1;
					*(EIF_NATURAL_64 *)(Current + RTWA(1448, dtype)) = (EIF_NATURAL_64) tu8_1;
					RTHOOK(42);
					ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1389, dtype));
					ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1354, dtype))(Current)).it_i4);
					if ((EIF_BOOLEAN)(ti4_1 != ti4_2)) {
						RTHOOK(43);
						RTDBGAA(Current, dtype, 1445, 0x04000000, 1); /* internal_overflowed */
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1446, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(43,1);
						tu8_1 = *(EIF_NATURAL_64 *)(Current + RTWA(1447, dtype));
						uu8_1 = tu8_1;
						tu8_2 = *(EIF_NATURAL_64 *)(Current + RTWA(1448, dtype));
						uu8_2 = tu8_2;
						ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1389, dtype));
						ui4_1 = ti4_1;
						ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(1398, dtype));
						ui4_2 = ti4_2;
						tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1375, "will_overflow", tr1))(tr1, uu8_1x, uu8_2x, ui4_1x, ui4_2x)).it_b);
						*(EIF_BOOLEAN *)(Current + RTWA(1445, dtype)) = (EIF_BOOLEAN) tb1;
						RTHOOK(44);
						tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1386, dtype))(Current)).it_b);
						if (tb1) {
							RTHOOK(45);
							RTDBGAA(Current, dtype, 1447, 0x3C000000, 1); /* part1 */
							*(EIF_NATURAL_64 *)(Current + RTWA(1447, dtype)) = (EIF_NATURAL_64) loc1;
							RTHOOK(46);
							RTDBGAA(Current, dtype, 1448, 0x3C000000, 1); /* part2 */
							*(EIF_NATURAL_64 *)(Current + RTWA(1448, dtype)) = (EIF_NATURAL_64) loc2;
							RTHOOK(47);
							RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
							loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 6L);
						}
					}
				} else {
					RTHOOK(48);
					tb1 = '\0';
					tb2 = *(EIF_BOOLEAN *)(Current + RTWA(1380, dtype));
					if (tb2) {
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1383, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(48,1);
						uc1 = arg1;
						tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3116, "has", tr1))(tr1, uc1x)).it_b);
						tb1 = tb2;
					}
					if (tb1) {
						RTHOOK(49);
						RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
						loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
					} else {
						RTHOOK(50);
						RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
						loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
					}
				}
				break;
			case 4L:
				RTHOOK(51);
				tb1 = '\01';
				tb2 = *(EIF_BOOLEAN *)(Current + RTWA(1380, dtype));
				if (!(EIF_BOOLEAN) !tb2) {
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1383, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(51,1);
					uc1 = arg1;
					tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3116, "has", tr1))(tr1, uc1x)).it_b);
					tb1 = (EIF_BOOLEAN) !tb2;
				}
				if (tb1) {
					RTHOOK(52);
					RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
					loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
				}
				break;
			default:
				RTEC(EN_WHEN);
		}
	}
	RTHOOK(53);
	RTDBGAA(Current, dtype, 1397, 0x10000000, 1); /* last_state */
	*(EIF_INTEGER_32 *)(Current + RTWA(1397, dtype)) = (EIF_INTEGER_32) loc3;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(54);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef uu8_1
#undef uu8_2
#undef ui4_1
#undef ui4_2
#undef uc1
#undef arg1
}

/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.conversion_type_valid */
EIF_TYPED_VALUE F87_1516 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "conversion_type_valid";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 86, Current, 0, 1, 1508);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(86, Current, 1508);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ui4_1 = arg1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1370, dtype))(Current, ui4_1x)).it_b);
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ui4_1
#undef arg1
}

/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.is_part_of_integer */
EIF_TYPED_VALUE F87_1517 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_part_of_integer";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
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
	
	RTEAA(l_feature_name, 86, Current, 0, 0, 1509);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(86, Current, 1509);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1397, dtype));
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(1397, dtype));
	ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(1397, dtype));
	ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(1397, dtype));
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(1445, dtype));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 1L))) || (EIF_BOOLEAN)(ti4_3 == ((EIF_INTEGER_32) 2L))) || (EIF_BOOLEAN)(ti4_4 == ((EIF_INTEGER_32) 3L))) && (EIF_BOOLEAN) !tb1);
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

/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.is_integral_integer */
EIF_TYPED_VALUE F87_1518 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_integral_integer";
	RTEX;
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
	
	RTEAA(l_feature_name, 86, Current, 0, 0, 1510);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(86, Current, 1510);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1397, dtype));
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(1397, dtype));
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(1445, dtype));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L)) || (EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 3L))) && (EIF_BOOLEAN) !tb1);
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

/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.parsed_integer_8 */
EIF_TYPED_VALUE F87_1519 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "parsed_integer_8";
	RTEX;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_8 ti1_1;
	EIF_INTEGER_8 Result = ((EIF_INTEGER_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT8, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 86, Current, 0, 0, 1511);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(86, Current, 1511);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1398, dtype));
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
		RTHOOK(2);
		RTDBGAL(0, 0x0C000000, 1,0); /* Result */
		tu8_1 = *(EIF_NATURAL_64 *)(Current + RTWA(1447, dtype));
		tu8_2 = *(EIF_NATURAL_64 *)(Current + RTWA(1448, dtype));
		ti1_1 = (EIF_INTEGER_8) ((EIF_NATURAL_64) ((EIF_NATURAL_64) (tu8_1 * (EIF_NATURAL_64) ((EIF_INTEGER_32) 16L)) + tu8_2));
		Result = (EIF_INTEGER_8) (EIF_INTEGER_8) -ti1_1;
	} else {
		RTHOOK(3);
		RTDBGAL(0, 0x0C000000, 1,0); /* Result */
		tu8_1 = *(EIF_NATURAL_64 *)(Current + RTWA(1447, dtype));
		tu8_2 = *(EIF_NATURAL_64 *)(Current + RTWA(1448, dtype));
		ti1_1 = (EIF_INTEGER_8) ((EIF_NATURAL_64) ((EIF_NATURAL_64) (tu8_1 * (EIF_NATURAL_64) ((EIF_INTEGER_32) 16L)) + tu8_2));
		Result = (EIF_INTEGER_8) ti1_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT8; r.it_i1 = Result; return r; }
}

/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.parsed_integer_16 */
EIF_TYPED_VALUE F87_1520 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "parsed_integer_16";
	RTEX;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_16 ti2_1;
	EIF_INTEGER_16 Result = ((EIF_INTEGER_16) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT16, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 86, Current, 0, 0, 1512);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(86, Current, 1512);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1398, dtype));
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
		RTHOOK(2);
		RTDBGAL(0, 0x14000000, 1,0); /* Result */
		tu8_1 = *(EIF_NATURAL_64 *)(Current + RTWA(1447, dtype));
		tu8_2 = *(EIF_NATURAL_64 *)(Current + RTWA(1448, dtype));
		ti2_1 = (EIF_INTEGER_16) ((EIF_NATURAL_64) ((EIF_NATURAL_64) (tu8_1 * (EIF_NATURAL_64) ((EIF_INTEGER_32) 16L)) + tu8_2));
		Result = (EIF_INTEGER_16) (EIF_INTEGER_16) -ti2_1;
	} else {
		RTHOOK(3);
		RTDBGAL(0, 0x14000000, 1,0); /* Result */
		tu8_1 = *(EIF_NATURAL_64 *)(Current + RTWA(1447, dtype));
		tu8_2 = *(EIF_NATURAL_64 *)(Current + RTWA(1448, dtype));
		ti2_1 = (EIF_INTEGER_16) ((EIF_NATURAL_64) ((EIF_NATURAL_64) (tu8_1 * (EIF_NATURAL_64) ((EIF_INTEGER_32) 16L)) + tu8_2));
		Result = (EIF_INTEGER_16) ti2_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT16; r.it_i2 = Result; return r; }
}

/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.parsed_integer_32 */
EIF_TYPED_VALUE F87_1521 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "parsed_integer_32";
	RTEX;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 86, Current, 0, 0, 1513);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(86, Current, 1513);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1398, dtype));
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
		RTHOOK(2);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		tu8_1 = *(EIF_NATURAL_64 *)(Current + RTWA(1447, dtype));
		tu8_2 = *(EIF_NATURAL_64 *)(Current + RTWA(1448, dtype));
		ti4_1 = (EIF_INTEGER_32) ((EIF_NATURAL_64) ((EIF_NATURAL_64) (tu8_1 * (EIF_NATURAL_64) ((EIF_INTEGER_32) 16L)) + tu8_2));
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) -ti4_1;
	} else {
		RTHOOK(3);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		tu8_1 = *(EIF_NATURAL_64 *)(Current + RTWA(1447, dtype));
		tu8_2 = *(EIF_NATURAL_64 *)(Current + RTWA(1448, dtype));
		ti4_1 = (EIF_INTEGER_32) ((EIF_NATURAL_64) ((EIF_NATURAL_64) (tu8_1 * (EIF_NATURAL_64) ((EIF_INTEGER_32) 16L)) + tu8_2));
		Result = (EIF_INTEGER_32) ti4_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.parsed_integer */
EIF_TYPED_VALUE F87_1522 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "parsed_integer";
	RTEX;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 86, Current, 0, 0, 1514);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(86, Current, 1514);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1398, dtype));
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
		RTHOOK(2);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		tu8_1 = *(EIF_NATURAL_64 *)(Current + RTWA(1447, dtype));
		tu8_2 = *(EIF_NATURAL_64 *)(Current + RTWA(1448, dtype));
		ti4_1 = (EIF_INTEGER_32) ((EIF_NATURAL_64) ((EIF_NATURAL_64) (tu8_1 * (EIF_NATURAL_64) ((EIF_INTEGER_32) 16L)) + tu8_2));
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) -ti4_1;
	} else {
		RTHOOK(3);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		tu8_1 = *(EIF_NATURAL_64 *)(Current + RTWA(1447, dtype));
		tu8_2 = *(EIF_NATURAL_64 *)(Current + RTWA(1448, dtype));
		ti4_1 = (EIF_INTEGER_32) ((EIF_NATURAL_64) ((EIF_NATURAL_64) (tu8_1 * (EIF_NATURAL_64) ((EIF_INTEGER_32) 16L)) + tu8_2));
		Result = (EIF_INTEGER_32) ti4_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.parsed_integer_64 */
EIF_TYPED_VALUE F87_1523 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "parsed_integer_64";
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT64, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 86, Current, 0, 0, 1515);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(86, Current, 1515);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1398, dtype));
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
		RTHOOK(2);
		RTDBGAL(0, 0x24000000, 1,0); /* Result */
		tu8_1 = *(EIF_NATURAL_64 *)(Current + RTWA(1447, dtype));
		tu8_2 = *(EIF_NATURAL_64 *)(Current + RTWA(1448, dtype));
		ti8_1 = (EIF_INTEGER_64) ((EIF_NATURAL_64) ((EIF_NATURAL_64) (tu8_1 * (EIF_NATURAL_64) ((EIF_INTEGER_32) 16L)) + tu8_2));
		Result = (EIF_INTEGER_64) (EIF_INTEGER_64) -ti8_1;
	} else {
		RTHOOK(3);
		RTDBGAL(0, 0x24000000, 1,0); /* Result */
		tu8_1 = *(EIF_NATURAL_64 *)(Current + RTWA(1447, dtype));
		tu8_2 = *(EIF_NATURAL_64 *)(Current + RTWA(1448, dtype));
		ti8_1 = (EIF_INTEGER_64) ((EIF_NATURAL_64) ((EIF_NATURAL_64) (tu8_1 * (EIF_NATURAL_64) ((EIF_INTEGER_32) 16L)) + tu8_2));
		Result = (EIF_INTEGER_64) ti8_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT64; r.it_i8 = Result; return r; }
}

/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.parsed_natural_8 */
EIF_TYPED_VALUE F87_1524 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "parsed_natural_8";
	RTEX;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT8, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 86, Current, 0, 0, 1516);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(86, Current, 1516);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x30000000, 1,0); /* Result */
	tu8_1 = *(EIF_NATURAL_64 *)(Current + RTWA(1447, dtype));
	tu8_2 = *(EIF_NATURAL_64 *)(Current + RTWA(1448, dtype));
	tu1_1 = (EIF_NATURAL_8) ((EIF_NATURAL_64) ((EIF_NATURAL_64) (tu8_1 * (EIF_NATURAL_64) ((EIF_INTEGER_32) 16L)) + tu8_2));
	Result = (EIF_NATURAL_8) tu1_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT8; r.it_n1 = Result; return r; }
}

/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.parsed_natural_16 */
EIF_TYPED_VALUE F87_1525 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "parsed_natural_16";
	RTEX;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT16, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 86, Current, 0, 0, 1517);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(86, Current, 1517);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x34000000, 1,0); /* Result */
	tu8_1 = *(EIF_NATURAL_64 *)(Current + RTWA(1447, dtype));
	tu8_2 = *(EIF_NATURAL_64 *)(Current + RTWA(1448, dtype));
	tu2_1 = (EIF_NATURAL_16) ((EIF_NATURAL_64) ((EIF_NATURAL_64) (tu8_1 * (EIF_NATURAL_64) ((EIF_INTEGER_32) 16L)) + tu8_2));
	Result = (EIF_NATURAL_16) tu2_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT16; r.it_n2 = Result; return r; }
}

/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.parsed_natural_32 */
EIF_TYPED_VALUE F87_1526 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "parsed_natural_32";
	RTEX;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 86, Current, 0, 0, 1518);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(86, Current, 1518);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x38000000, 1,0); /* Result */
	tu8_1 = *(EIF_NATURAL_64 *)(Current + RTWA(1447, dtype));
	tu8_2 = *(EIF_NATURAL_64 *)(Current + RTWA(1448, dtype));
	tu4_1 = (EIF_NATURAL_32) ((EIF_NATURAL_64) ((EIF_NATURAL_64) (tu8_1 * (EIF_NATURAL_64) ((EIF_INTEGER_32) 16L)) + tu8_2));
	Result = (EIF_NATURAL_32) tu4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
}

/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.parsed_natural */
EIF_TYPED_VALUE F87_1527 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "parsed_natural";
	RTEX;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 86, Current, 0, 0, 1519);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(86, Current, 1519);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x38000000, 1,0); /* Result */
	tu8_1 = *(EIF_NATURAL_64 *)(Current + RTWA(1447, dtype));
	tu8_2 = *(EIF_NATURAL_64 *)(Current + RTWA(1448, dtype));
	tu4_1 = (EIF_NATURAL_32) ((EIF_NATURAL_64) ((EIF_NATURAL_64) (tu8_1 * (EIF_NATURAL_64) ((EIF_INTEGER_32) 16L)) + tu8_2));
	Result = (EIF_NATURAL_32) tu4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
}

/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.parsed_natural_64 */
EIF_TYPED_VALUE F87_1528 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "parsed_natural_64";
	RTEX;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT64, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 86, Current, 0, 0, 1520);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(86, Current, 1520);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x3C000000, 1,0); /* Result */
	tu8_1 = *(EIF_NATURAL_64 *)(Current + RTWA(1447, dtype));
	tu8_2 = *(EIF_NATURAL_64 *)(Current + RTWA(1448, dtype));
	Result = (EIF_NATURAL_64) (EIF_NATURAL_64) ((EIF_NATURAL_64) (tu8_1 * (EIF_NATURAL_64) ((EIF_INTEGER_32) 16L)) + tu8_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT64; r.it_n8 = Result; return r; }
}

/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.internal_lookahead */
EIF_TYPED_VALUE F87_1529 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = *(EIF_CHARACTER_8 *)(Current + RTWA(1444,Dtype(Current)));
	return r;
}


/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.internal_overflowed */
EIF_TYPED_VALUE F87_1530 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(1445,Dtype(Current)));
	return r;
}


/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.overflow_checker */
RTOID (F87_1531)
EIF_TYPED_VALUE F87_1531 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "overflow_checker";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F87_1531);
	dtype = Dtype(Current);

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 86, Current, 0, 0, 1523);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(86, Current, 1523);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(0, 0xF8000052, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(82, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(1374, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("overflow_checker_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef Result
}

/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.part1 */
EIF_TYPED_VALUE F87_1532 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT64;
	r.it_n8 = *(EIF_NATURAL_64 *)(Current + RTWA(1447,Dtype(Current)));
	return r;
}


/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.part2 */
EIF_TYPED_VALUE F87_1533 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT64;
	r.it_n8 = *(EIF_NATURAL_64 *)(Current + RTWA(1448,Dtype(Current)));
	return r;
}


void EIF_Minit87 (void)
{
	GTCX
	RTOTS (1531,F87_1531)
}


#ifdef __cplusplus
}
#endif
