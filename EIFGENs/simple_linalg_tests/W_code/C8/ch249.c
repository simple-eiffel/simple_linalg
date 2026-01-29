/*
 * Code for class CHARACTER_32_REF
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F249_5961(EIF_REFERENCE);
extern EIF_TYPED_VALUE F249_5962(EIF_REFERENCE);
extern EIF_TYPED_VALUE F249_5963(EIF_REFERENCE);
extern EIF_TYPED_VALUE F249_5964(EIF_REFERENCE);
extern EIF_TYPED_VALUE F249_5965(EIF_REFERENCE);
extern EIF_TYPED_VALUE F249_5966(EIF_REFERENCE);
extern EIF_TYPED_VALUE F249_5967(EIF_REFERENCE);
extern EIF_TYPED_VALUE F249_5968(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F249_5969(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F249_5970(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F249_5971(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F249_5972(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F249_5973(EIF_REFERENCE);
extern EIF_TYPED_VALUE F249_5974(EIF_REFERENCE);
extern void F249_5975(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F249_5976(EIF_REFERENCE);
extern void F249_5977(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F249_5978(EIF_REFERENCE);
extern EIF_TYPED_VALUE F249_5979(EIF_REFERENCE);
extern EIF_TYPED_VALUE F249_5980(EIF_REFERENCE);
extern EIF_TYPED_VALUE F249_5981(EIF_REFERENCE);
extern EIF_TYPED_VALUE F249_5982(EIF_REFERENCE);
extern EIF_TYPED_VALUE F249_5983(EIF_REFERENCE);
extern EIF_TYPED_VALUE F249_5984(EIF_REFERENCE);
extern EIF_TYPED_VALUE F249_5985(EIF_REFERENCE);
extern EIF_TYPED_VALUE F249_5986(EIF_REFERENCE);
extern EIF_TYPED_VALUE F249_5987(EIF_REFERENCE);
extern EIF_TYPED_VALUE F249_5988(EIF_REFERENCE);
extern EIF_TYPED_VALUE F249_5989(EIF_REFERENCE);
extern EIF_TYPED_VALUE F249_5990(EIF_REFERENCE);
extern EIF_TYPED_VALUE F249_5991(EIF_REFERENCE);
extern EIF_TYPED_VALUE F249_5992(EIF_REFERENCE);
extern EIF_TYPED_VALUE F249_5993(EIF_REFERENCE);
extern EIF_TYPED_VALUE F249_5994(EIF_REFERENCE);
extern EIF_TYPED_VALUE F249_5995(EIF_REFERENCE);
extern EIF_TYPED_VALUE F249_5996(EIF_REFERENCE);
extern EIF_TYPED_VALUE F249_5997(EIF_REFERENCE);
extern void EIF_Minit249(void);

#ifdef __cplusplus
}
#endif

#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {CHARACTER_32_REF}.item */
EIF_TYPED_VALUE F249_5961 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR32;
	r.it_c4 = *(EIF_CHARACTER_32 *)(Current + RTWA(4587,Dtype(Current)));
	return r;
}


/* {CHARACTER_32_REF}.code */
EIF_TYPED_VALUE F249_5962 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "code";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
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
	
	RTEAA(l_feature_name, 248, Current, 0, 0, 13096);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(248, Current, 13096);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4589, dtype))(Current)).it_n4);
	RTNHOOK(1,1);
	ti4_1 = (EIF_INTEGER_32) tu4_1;
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {CHARACTER_32_REF}.hash_code */
EIF_TYPED_VALUE F249_5963 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "hash_code";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
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
	
	RTEAA(l_feature_name, 248, Current, 0, 0, 13097);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(248, Current, 13097);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4589, dtype))(Current)).it_n4);
	RTNHOOK(1,1);
	ti4_1 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (tu4_1)));
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("good_hash_value", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
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
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {CHARACTER_32_REF}.natural_32_code */
EIF_TYPED_VALUE F249_5964 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "natural_32_code";
	RTEX;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_CHARACTER_32 tw1;
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
	
	RTEAA(l_feature_name, 248, Current, 0, 0, 13061);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(248, Current, 13061);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x38000000, 1,0); /* Result */
	tw1 = *(EIF_CHARACTER_32 *)(Current + RTWA(4587, dtype));
	tu4_1 = (EIF_NATURAL_32) tw1;
	Result = (EIF_NATURAL_32) tu4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("natural_32_code_in_range", EX_POST);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4590, dtype))(Current)).it_n4);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4591, dtype))(Current)).it_n4);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (Result >= tu4_1) && (EIF_BOOLEAN) (Result <= tu4_2))) {
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
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
}

/* {CHARACTER_32_REF}.min_value */
EIF_TYPED_VALUE F249_5965 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = (EIF_NATURAL_32) ((EIF_NATURAL_32) 0U);
	return r;
}

/* {CHARACTER_32_REF}.max_value */
EIF_TYPED_VALUE F249_5966 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = (EIF_NATURAL_32) ((EIF_NATURAL_32) 4294967295U);
	return r;
}

/* {CHARACTER_32_REF}.max_unicode_value */
EIF_TYPED_VALUE F249_5967 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = (EIF_NATURAL_32) ((EIF_NATURAL_32) 1114109U);
	return r;
}

/* {CHARACTER_32_REF}.is_less */
EIF_TYPED_VALUE F249_5968 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_less";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
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
	
	RTEAA(l_feature_name, 248, Current, 0, 1, 13065);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(248, Current, 13065);
	RTCC(arg1, 248, l_feature_name, 1, eif_new_type(248, 0x01),0);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4589, dtype))(Current)).it_n4);
	tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4589, "natural_32_code", arg1))(arg1)).it_n4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu4_1 < tu4_2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("asymmetric", EX_POST);
		tb1 = '\01';
		if (Result) {
			ur1 = RTCCL(Current);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2083, "is_less", arg1))(arg1, ur1x)).it_b);
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("definition", EX_POST);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4589, dtype))(Current)).it_n4);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4589, "natural_32_code", arg1))(arg1)).it_n4);
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN) (tu4_1 < tu4_2))) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ur1
#undef arg1
}

/* {CHARACTER_32_REF}.is_equal */
EIF_TYPED_VALUE F249_5969 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_equal";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
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
	
	RTEAA(l_feature_name, 248, Current, 0, 1, 13066);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(248, Current, 13066);
	RTCC(arg1, 248, l_feature_name, 1, eif_new_type(248, 0x01),0);
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
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tw1 = *(EIF_CHARACTER_32 *)(arg1 + RTVA(4587, "item", arg1));
	tw2 = *(EIF_CHARACTER_32 *)(Current + RTWA(4587, dtype));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tw1 == tw2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("symmetric", EX_POST);
		if ((!(Result) || (RTEQ(arg1, Current)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
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
		RTHOOK(5);
		RTCT("trichotomy", EX_POST);
		tb1 = '\0';
		ur1 = RTCCL(arg1);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2083, "is_less", Current))(Current, ur1x)).it_b);
		if ((EIF_BOOLEAN) !tb2) {
			ur1 = RTCCL(Current);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2083, "is_less", arg1))(arg1, ur1x)).it_b);
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if ((EIF_BOOLEAN)(Result == tb1)) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ur1
#undef arg1
}

/* {CHARACTER_32_REF}.plus */
EIF_TYPED_VALUE F249_5970 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "plus";
	RTEX;
#define arg1 arg1x.it_n4
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_CHAR32, &Result);
	RTLU(SK_UINT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 248, Current, 0, 1, 13067);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(248, Current, 13067);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_increment", EX_PRE);
		tw1 = *(EIF_CHARACTER_32 *)(Current + RTWA(4587, dtype));
		tu4_1 = (EIF_NATURAL_32) tw1;
		tu8_1 = (EIF_NATURAL_64) tu4_1;
		tu8_2 = (EIF_NATURAL_64) arg1;
		tr1 = RTLN(eif_new_type(231, 0x00).id);
		*(EIF_NATURAL_64 *)tr1 = (EIF_NATURAL_64) (tu8_1 + tu8_2);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4317, "is_valid_character_32_code", tr1))(tr1)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x1C000000, 1,0); /* Result */
	tw1 = *(EIF_CHARACTER_32 *)(Current + RTWA(4587, dtype));
	tu4_1 = (EIF_NATURAL_32) tw1;
	tw1 = (EIF_CHARACTER_32) (EIF_NATURAL_32) (tu4_1 + arg1);
	Result = (EIF_CHARACTER_32) tw1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("valid_result", EX_POST);
		tw1 = *(EIF_CHARACTER_32 *)(Current + RTWA(4587, dtype));
		uw1 = tw1;
		tr1 = RTLN(eif_new_type(249, 0x00).id);
		*(EIF_CHARACTER_32 *)tr1 = Result;
		ti8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4595, "difference", tr1))(tr1, uw1x)).it_i8);
		ti8_2 = (EIF_INTEGER_64) arg1;
		if ((EIF_BOOLEAN)(ti8_1 == ti8_2)) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_CHAR32; r.it_c4 = Result; return r; }
#undef uw1
#undef arg1
}

/* {CHARACTER_32_REF}.minus */
EIF_TYPED_VALUE F249_5971 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "minus";
	RTEX;
#define arg1 arg1x.it_n4
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_CHAR32, &Result);
	RTLU(SK_UINT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 248, Current, 0, 1, 13068);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(248, Current, 13068);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_decrement", EX_PRE);
		tw1 = *(EIF_CHARACTER_32 *)(Current + RTWA(4587, dtype));
		tu4_1 = (EIF_NATURAL_32) tw1;
		ti8_1 = (EIF_INTEGER_64) tu4_1;
		ti8_2 = (EIF_INTEGER_64) arg1;
		tr1 = RTLN(eif_new_type(219, 0x00).id);
		*(EIF_INTEGER_64 *)tr1 = (EIF_INTEGER_64) (ti8_1 - ti8_2);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4094, "is_valid_character_32_code", tr1))(tr1)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x1C000000, 1,0); /* Result */
	tw1 = *(EIF_CHARACTER_32 *)(Current + RTWA(4587, dtype));
	tu4_1 = (EIF_NATURAL_32) tw1;
	tw1 = (EIF_CHARACTER_32) (EIF_NATURAL_32) (tu4_1 - arg1);
	Result = (EIF_CHARACTER_32) tw1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("valid_result", EX_POST);
		tw1 = *(EIF_CHARACTER_32 *)(Current + RTWA(4587, dtype));
		uw1 = Result;
		tr1 = RTLN(eif_new_type(249, 0x00).id);
		*(EIF_CHARACTER_32 *)tr1 = tw1;
		ti8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4595, "difference", tr1))(tr1, uw1x)).it_i8);
		ti8_2 = (EIF_INTEGER_64) arg1;
		if ((EIF_BOOLEAN)(ti8_1 == ti8_2)) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_CHAR32; r.it_c4 = Result; return r; }
#undef uw1
#undef arg1
}

/* {CHARACTER_32_REF}.difference */
EIF_TYPED_VALUE F249_5972 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "difference";
	RTEX;
#define arg1 arg1x.it_c4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c4 = * (EIF_CHARACTER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT64, &Result);
	RTLU(SK_CHAR32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 248, Current, 0, 1, 13069);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(248, Current, 13069);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x24000000, 1,0); /* Result */
	tw1 = *(EIF_CHARACTER_32 *)(Current + RTWA(4587, dtype));
	tu4_1 = (EIF_NATURAL_32) tw1;
	ti8_1 = (EIF_INTEGER_64) tu4_1;
	tu4_1 = (EIF_NATURAL_32) arg1;
	ti8_2 = (EIF_INTEGER_64) tu4_1;
	Result = (EIF_INTEGER_64) (EIF_INTEGER_64) (ti8_1 - ti8_2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("valid_non_negative_result", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) (Result >= (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L))) {
			tu4_1 = (EIF_NATURAL_32) Result;
			uu4_1 = tu4_1;
			tw1 = (EIF_CHARACTER_32) (((EIF_NATURAL_32) arg1) + uu4_1);
			tw2 = *(EIF_CHARACTER_32 *)(Current + RTWA(4587, dtype));
			tb1 = (EIF_BOOLEAN)(tw1 == tw2);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("valid_negative_result", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) (Result < (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L))) {
			tw1 = *(EIF_CHARACTER_32 *)(Current + RTWA(4587, dtype));
			tu4_1 = (EIF_NATURAL_32) Result;
			uu4_1 = tu4_1;
			tw2 = (EIF_CHARACTER_32) (((EIF_NATURAL_32) tw1) + uu4_1);
			tb1 = (EIF_BOOLEAN)(arg1 == tw2);
		}
		if (tb1) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_INT64; r.it_i8 = Result; return r; }
#undef uu4_1
#undef arg1
}

/* {CHARACTER_32_REF}.next */
EIF_TYPED_VALUE F249_5973 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "next";
	RTEX;
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_CHAR32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 248, Current, 0, 0, 13070);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(248, Current, 13070);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_character", EX_PRE);
		tw1 = *(EIF_CHARACTER_32 *)(Current + RTWA(4587, dtype));
		tu4_1 = (EIF_NATURAL_32) tw1;
		tu8_1 = (EIF_NATURAL_64) tu4_1;
		tr1 = RTLN(eif_new_type(231, 0x00).id);
		*(EIF_NATURAL_64 *)tr1 = ((EIF_NATURAL_64) (tu8_1 + (EIF_NATURAL_64) ((EIF_INTEGER_32) 1L)));
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4317, "is_valid_character_32_code", tr1))(tr1)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x1C000000, 1,0); /* Result */
	tw1 = *(EIF_CHARACTER_32 *)(Current + RTWA(4587, dtype));
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
	tw2 = (EIF_CHARACTER_32) (((EIF_NATURAL_32) tw1) + uu4_1);
	Result = (EIF_CHARACTER_32) tw2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("valid_result", EX_POST);
		tw1 = *(EIF_CHARACTER_32 *)(Current + RTWA(4587, dtype));
		uw1 = tw1;
		tr1 = RTLN(eif_new_type(249, 0x00).id);
		*(EIF_CHARACTER_32 *)tr1 = Result;
		ti8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4595, "difference", tr1))(tr1, uw1x)).it_i8);
		if ((EIF_BOOLEAN)(ti8_1 == (EIF_INTEGER_64) ((EIF_INTEGER_32) 1L))) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_CHAR32; r.it_c4 = Result; return r; }
#undef uu4_1
#undef uw1
}

/* {CHARACTER_32_REF}.previous */
EIF_TYPED_VALUE F249_5974 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "previous";
	RTEX;
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_CHAR32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 248, Current, 0, 0, 13071);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(248, Current, 13071);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_character", EX_PRE);
		tw1 = *(EIF_CHARACTER_32 *)(Current + RTWA(4587, dtype));
		tu4_1 = (EIF_NATURAL_32) tw1;
		tu8_1 = (EIF_NATURAL_64) tu4_1;
		tr1 = RTLN(eif_new_type(231, 0x00).id);
		*(EIF_NATURAL_64 *)tr1 = ((EIF_NATURAL_64) (tu8_1 - (EIF_NATURAL_64) ((EIF_INTEGER_32) 1L)));
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4317, "is_valid_character_32_code", tr1))(tr1)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x1C000000, 1,0); /* Result */
	tw1 = *(EIF_CHARACTER_32 *)(Current + RTWA(4587, dtype));
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
	tw2 = (EIF_CHARACTER_32) (((EIF_NATURAL_32) tw1) - uu4_1);
	Result = (EIF_CHARACTER_32) tw2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("valid_result", EX_POST);
		tw1 = *(EIF_CHARACTER_32 *)(Current + RTWA(4587, dtype));
		uw1 = tw1;
		tr1 = RTLN(eif_new_type(249, 0x00).id);
		*(EIF_CHARACTER_32 *)tr1 = Result;
		ti8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4595, "difference", tr1))(tr1, uw1x)).it_i8);
		if ((EIF_BOOLEAN)(ti8_1 == (EIF_INTEGER_64) ((EIF_INTEGER_32) -1L))) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_CHAR32; r.it_c4 = Result; return r; }
#undef uu4_1
#undef uw1
}

/* {CHARACTER_32_REF}.set_item */
void F249_5975 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_item";
	RTEX;
#define arg1 arg1x.it_c4
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c4 = * (EIF_CHARACTER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_CHAR32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 248, Current, 0, 1, 13072);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(248, Current, 13072);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 4587, 0x1C000000, 1); /* item */
	*(EIF_CHARACTER_32 *)(Current + RTWA(4587, dtype)) = (EIF_CHARACTER_32) arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {CHARACTER_32_REF}.out */
EIF_TYPED_VALUE F249_5976 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "out";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 248, Current, 0, 0, 13073);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(248, Current, 13073);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF8000109, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(265, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 6L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4744, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	uc1 = (EIF_CHARACTER_8) 'U';
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4934, "append_character", Result))(Result, uc1x);
	RTHOOK(3);
	uc1 = (EIF_CHARACTER_8) '+';
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4934, "append_character", Result))(Result, uc1x);
	RTHOOK(4);
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4589, dtype))(Current)).it_n4);
	RTNHOOK(4,1);
	tr1 = RTLN(eif_new_type(234, 0x00).id);
	*(EIF_NATURAL_32 *)tr1 = tu4_1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4398, "to_hex_string", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4932, "append_string", Result))(Result, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("out_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef uc1
}

/* {CHARACTER_32_REF}.make_from_reference */
void F249_5977 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make_from_reference";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 248, Current, 0, 1, 13074);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(248, Current, 13074);
	RTCC(arg1, 248, l_feature_name, 1, eif_new_type(248, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("v_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tw1 = *(EIF_CHARACTER_32 *)(arg1 + RTVA(4587, "item", arg1));
	uw1 = tw1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4598, dtype))(Current, uw1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("item_set", EX_POST);
		tw1 = *(EIF_CHARACTER_32 *)(Current + RTWA(4587, dtype));
		tw2 = *(EIF_CHARACTER_32 *)(arg1 + RTVA(4587, "item", arg1));
		if ((EIF_BOOLEAN)(tw1 == tw2)) {
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
#undef uw1
#undef arg1
}

/* {CHARACTER_32_REF}.to_reference */
EIF_TYPED_VALUE F249_5978 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "to_reference";
	RTEX;
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_32 tw1;
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
	
	RTEAA(l_feature_name, 248, Current, 0, 0, 13075);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(248, Current, 13075);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF80000F8, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(248, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tw1 = *(EIF_CHARACTER_32 *)(Current + RTWA(4587, dtype));
	uw1 = tw1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4598, "set_item", Result))(Result, uw1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("to_reference_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef uw1
}

/* {CHARACTER_32_REF}.to_character_8 */
EIF_TYPED_VALUE F249_5979 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "to_character_8";
	RTEX;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_CHAR8, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 248, Current, 0, 0, 13076);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(248, Current, 13076);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_character_8_compatible", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4608, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x08000000, 1,0); /* Result */
	tw1 = *(EIF_CHARACTER_32 *)(Current + RTWA(4587, dtype));
	tc1 = (EIF_CHARACTER_8) tw1;
	Result = (EIF_CHARACTER_8) tc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_CHAR8; r.it_c1 = Result; return r; }
}

/* {CHARACTER_32_REF}.to_character_32 */
EIF_TYPED_VALUE F249_5980 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "to_character_32";
	RTEX;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_CHAR32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 248, Current, 0, 0, 13077);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(248, Current, 13077);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x1C000000, 1,0); /* Result */
	tw1 = *(EIF_CHARACTER_32 *)(Current + RTWA(4587, dtype));
	Result = (EIF_CHARACTER_32) tw1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_CHAR32; r.it_c4 = Result; return r; }
}

/* {CHARACTER_32_REF}.as_upper */
EIF_TYPED_VALUE F249_5981 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "as_upper";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_CHAR32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 248, Current, 0, 0, 13078);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(248, Current, 13078);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x1C000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4619, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tw1 = *(EIF_CHARACTER_32 *)(Current + RTWA(4587, dtype));
	uw1 = tw1;
	tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(324, "to_upper", tr1))(tr1, uw1x)).it_c4);
	Result = (EIF_CHARACTER_32) tw1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_CHAR32; r.it_c4 = Result; return r; }
#undef up1
#undef uw1
}

/* {CHARACTER_32_REF}.upper */
EIF_TYPED_VALUE F249_5982 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "upper";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_CHAR32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 248, Current, 0, 0, 13079);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(248, Current, 13079);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x1C000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4619, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tw1 = *(EIF_CHARACTER_32 *)(Current + RTWA(4587, dtype));
	uw1 = tw1;
	tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(324, "to_upper", tr1))(tr1, uw1x)).it_c4);
	Result = (EIF_CHARACTER_32) tw1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_CHAR32; r.it_c4 = Result; return r; }
#undef up1
#undef uw1
}

/* {CHARACTER_32_REF}.as_lower */
EIF_TYPED_VALUE F249_5983 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "as_lower";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_CHAR32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 248, Current, 0, 0, 13080);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(248, Current, 13080);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x1C000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4619, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tw1 = *(EIF_CHARACTER_32 *)(Current + RTWA(4587, dtype));
	uw1 = tw1;
	tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(323, "to_lower", tr1))(tr1, uw1x)).it_c4);
	Result = (EIF_CHARACTER_32) tw1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_CHAR32; r.it_c4 = Result; return r; }
#undef up1
#undef uw1
}

/* {CHARACTER_32_REF}.lower */
EIF_TYPED_VALUE F249_5984 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "lower";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_CHAR32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 248, Current, 0, 0, 13081);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(248, Current, 13081);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x1C000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4619, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tw1 = *(EIF_CHARACTER_32 *)(Current + RTWA(4587, dtype));
	uw1 = tw1;
	tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(323, "to_lower", tr1))(tr1, uw1x)).it_c4);
	Result = (EIF_CHARACTER_32) tw1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_CHAR32; r.it_c4 = Result; return r; }
#undef up1
#undef uw1
}

/* {CHARACTER_32_REF}.to_hexa_digit */
EIF_TYPED_VALUE F249_5985 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "to_hexa_digit";
	RTEX;
	EIF_NATURAL_8 loc1 = (EIF_NATURAL_8) 0;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_INTEGER_8 ti1_1;
	EIF_INTEGER_8 ti1_2;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_NATURAL_8 tu1_3;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_UINT8, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_UINT8, &loc1);
	
	RTEAA(l_feature_name, 248, Current, 1, 0, 13082);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(248, Current, 13082);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_hexa_digit", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4614, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x30000000, 1,0); /* Result */
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4589, dtype))(Current)).it_n4);
	RTNHOOK(2,1);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 127L);
	tu4_2 = eif_bit_and(tu4_1,uu4_1);
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4589, dtype))(Current)).it_n4);
	RTNHOOK(2,2);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 256L);
	tu4_3 = eif_bit_and(tu4_1,uu4_1);
	ui4_1 = ((EIF_INTEGER_32) 3L);
	tu4_1 = eif_bit_shift_right(tu4_3,ui4_1);
	tu1_1 = (EIF_NATURAL_8) (EIF_NATURAL_32) (tu4_2 + tu4_1);
	Result = (EIF_NATURAL_8) tu1_1;
	RTHOOK(3);
	RTDBGAL(0, 0x30000000, 1,0); /* Result */
	uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 79L);
	tu1_1 = eif_bit_and(Result,uu1_1);
	Result = (EIF_NATURAL_8) tu1_1;
	RTHOOK(4);
	RTDBGAL(1, 0x30000000, 1, 0); /* loc1 */
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tu1_1 = eif_bit_shift_left(Result,ui4_1);
	ti1_1 = (EIF_INTEGER_8) tu1_1;
	ui4_1 = ((EIF_INTEGER_32) 7L);
	ti1_2 = eif_bit_shift_right(ti1_1,ui4_1);
	tu1_1 = (EIF_NATURAL_8) ti1_2;
	loc1 = (EIF_NATURAL_8) tu1_1;
	RTHOOK(5);
	RTDBGAL(0, 0x30000000, 1,0); /* Result */
	tu1_1 = eif_bit_not(loc1);
	uu1_1 = tu1_1;
	tu1_2 = eif_bit_and(Result,uu1_1);
	uu1_1 = loc1;
	tu1_1 = eif_bit_and(((EIF_NATURAL_8) (Result - (EIF_NATURAL_8) ((EIF_INTEGER_32) 55L))),uu1_1);
	uu1_1 = tu1_1;
	tu1_3 = eif_bit_or(tu1_2,uu1_1);
	Result = (EIF_NATURAL_8) tu1_3;
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("range", EX_POST);
		tb1 = '\0';
		ti4_1 = (EIF_INTEGER_32) Result;
		if ((EIF_BOOLEAN) (((EIF_INTEGER_32) 0L) <= ti4_1)) {
			tb1 = (EIF_BOOLEAN) (Result < (EIF_NATURAL_8) ((EIF_INTEGER_32) 16L));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("value", EX_POST);
		tb1 = '\01';
		tr1 = RTMS_EX_H("0123456789ABCDEF",16,1319696198);
		ti4_1 = (EIF_INTEGER_32) ((EIF_NATURAL_8) (Result + (EIF_NATURAL_8) ((EIF_INTEGER_32) 1L)));
		ui4_1 = ti4_1;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3403, "item", tr1))(tr1, ui4_1x)).it_c1);
		tw1 = (EIF_CHARACTER_32) tc1;
		tw2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4603, dtype))(Current)).it_c4);
		if (!(EIF_BOOLEAN)(tw1 == tw2)) {
			tr1 = RTMS32_EX_H("\020\377\000\000\021\377\000\000\022\377\000\000\023\377\000\000\024\377\000\000\025\377\000\000\026\377\000\000\027\377\000\000\030\377\000\000\031\377\000\000!\377\000\000\"\377\000\000#\377\000\000$\377\000\000%\377\000\000&\377\000\000",16,1242333478);
			ti4_1 = (EIF_INTEGER_32) ((EIF_NATURAL_8) (Result + (EIF_NATURAL_8) ((EIF_INTEGER_32) 1L)));
			ui4_1 = ti4_1;
			tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4747, "item", tr1))(tr1, ui4_1x)).it_c4);
			tw2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4603, dtype))(Current)).it_c4);
			tb1 = (EIF_BOOLEAN)(tw1 == tw2);
		}
		if (tb1) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_UINT8; r.it_n1 = Result; return r; }
#undef ui4_1
#undef uu4_1
#undef uu1_1
}

/* {CHARACTER_32_REF}.is_character_8 */
EIF_TYPED_VALUE F249_5986 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_character_8";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 248, Current, 0, 0, 13083);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(248, Current, 13083);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4589, dtype))(Current)).it_n4);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4624, 252))(Current)).it_i4);
	tu4_2 = (EIF_NATURAL_32) ti4_1;
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu4_1 <= tu4_2);
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

/* {CHARACTER_32_REF}.is_alpha */
EIF_TYPED_VALUE F249_5987 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_alpha";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 248, Current, 0, 0, 13084);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(248, Current, 13084);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4619, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tw1 = *(EIF_CHARACTER_32 *)(Current + RTWA(4587, dtype));
	uw1 = tw1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(311, "is_alpha", tr1))(tr1, uw1x)).it_b);
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef uw1
}

/* {CHARACTER_32_REF}.is_upper */
EIF_TYPED_VALUE F249_5988 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_upper";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 248, Current, 0, 0, 13085);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(248, Current, 13085);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4619, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tw1 = *(EIF_CHARACTER_32 *)(Current + RTWA(4587, dtype));
	uw1 = tw1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(313, "is_upper", tr1))(tr1, uw1x)).it_b);
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef uw1
}

/* {CHARACTER_32_REF}.is_lower */
EIF_TYPED_VALUE F249_5989 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_lower";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 248, Current, 0, 0, 13086);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(248, Current, 13086);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4619, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tw1 = *(EIF_CHARACTER_32 *)(Current + RTWA(4587, dtype));
	uw1 = tw1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(312, "is_lower", tr1))(tr1, uw1x)).it_b);
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef uw1
}

/* {CHARACTER_32_REF}.is_digit */
EIF_TYPED_VALUE F249_5990 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_digit";
	RTEX;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
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
	
	RTEAA(l_feature_name, 248, Current, 0, 0, 13087);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(248, Current, 13087);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = '\0';
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '0';
	tw2 = *(EIF_CHARACTER_32 *)(Current + RTWA(4587, dtype));
	if ((EIF_BOOLEAN) (tw1 <= tw2)) {
		tw1 = *(EIF_CHARACTER_32 *)(Current + RTWA(4587, dtype));
		tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '9';
		tb1 = (EIF_BOOLEAN) (tw1 <= tw2);
	}
	Result = (EIF_BOOLEAN) tb1;
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

/* {CHARACTER_32_REF}.is_unicode_digit */
EIF_TYPED_VALUE F249_5991 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_unicode_digit";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 248, Current, 0, 0, 13088);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(248, Current, 13088);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4619, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tw1 = *(EIF_CHARACTER_32 *)(Current + RTWA(4587, dtype));
	uw1 = tw1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(315, "is_digit", tr1))(tr1, uw1x)).it_b);
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef uw1
}

/* {CHARACTER_32_REF}.is_hexa_digit */
EIF_TYPED_VALUE F249_5992 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_hexa_digit";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 248, Current, 0, 0, 13089);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(248, Current, 13089);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4619, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tw1 = *(EIF_CHARACTER_32 *)(Current + RTWA(4587, dtype));
	uw1 = tw1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(318, "is_hexa_digit", tr1))(tr1, uw1x)).it_b);
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef uw1
}

/* {CHARACTER_32_REF}.is_space */
EIF_TYPED_VALUE F249_5993 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_space";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 248, Current, 0, 0, 13090);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(248, Current, 13090);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4619, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tw1 = *(EIF_CHARACTER_32 *)(Current + RTWA(4587, dtype));
	uw1 = tw1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(319, "is_space", tr1))(tr1, uw1x)).it_b);
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef uw1
}

/* {CHARACTER_32_REF}.is_punctuation */
EIF_TYPED_VALUE F249_5994 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_punctuation";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 248, Current, 0, 0, 13091);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(248, Current, 13091);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4619, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tw1 = *(EIF_CHARACTER_32 *)(Current + RTWA(4587, dtype));
	uw1 = tw1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(316, "is_punctuation", tr1))(tr1, uw1x)).it_b);
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef uw1
}

/* {CHARACTER_32_REF}.is_alpha_numeric */
EIF_TYPED_VALUE F249_5995 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_alpha_numeric";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 248, Current, 0, 0, 13092);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(248, Current, 13092);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = '\01';
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4619, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tw1 = *(EIF_CHARACTER_32 *)(Current + RTWA(4587, dtype));
	uw1 = tw1;
	tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(311, "is_alpha", tr1))(tr1, uw1x)).it_b);
	if (!tb2) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4619, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(1,2);
		tw1 = *(EIF_CHARACTER_32 *)(Current + RTWA(4587, dtype));
		uw1 = tw1;
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(315, "is_digit", tr1))(tr1, uw1x)).it_b);
		tb1 = tb2;
	}
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef uw1
}

/* {CHARACTER_32_REF}.is_control */
EIF_TYPED_VALUE F249_5996 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_control";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 248, Current, 0, 0, 13093);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(248, Current, 13093);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4619, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tw1 = *(EIF_CHARACTER_32 *)(Current + RTWA(4587, dtype));
	uw1 = tw1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(317, "is_control", tr1))(tr1, uw1x)).it_b);
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef uw1
}

/* {CHARACTER_32_REF}.properties */
RTOID (F249_5997)
EIF_TYPED_VALUE F249_5997 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "properties";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F249_5997);
	dtype = Dtype(Current);

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 248, Current, 0, 0, 13094);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(248, Current, 13094);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(0, 0xF800000B, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(11, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(310, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef Result
}

void EIF_Minit249 (void)
{
	GTCX
	RTOTS (5997,F249_5997)
}


#ifdef __cplusplus
}
#endif
