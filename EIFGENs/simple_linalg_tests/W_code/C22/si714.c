/*
 * Code for class SIMPLE_INSERTION_SORT [REAL_64]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F714_2269(EIF_REFERENCE);
extern EIF_TYPED_VALUE F714_2270(EIF_REFERENCE);
extern EIF_TYPED_VALUE F714_2271(EIF_REFERENCE);
extern EIF_TYPED_VALUE F714_2272(EIF_REFERENCE);
extern void F714_2273(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void EIF_Minit714(void);

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

/* {SIMPLE_INSERTION_SORT}.name */
RTOID (F714_2269)


EIF_TYPED_VALUE F714_2269 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F714_2269,2356,RTMS_EX_H("Insertion Sort",14,1776514676));
}

/* {SIMPLE_INSERTION_SORT}.is_stable */
EIF_TYPED_VALUE F714_2270 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = (EIF_BOOLEAN) EIF_TRUE;
	return r;
}

/* {SIMPLE_INSERTION_SORT}.time_complexity */
RTOID (F714_2271)


EIF_TYPED_VALUE F714_2271 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F714_2271,2358,RTMS_EX_H("O(n^2)",6,2007294505));
}

/* {SIMPLE_INSERTION_SORT}.space_complexity */
RTOID (F714_2272)


EIF_TYPED_VALUE F714_2272 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F714_2272,2359,RTMS_EX_H("O(1)",4,1328034089));
}

/* {SIMPLE_INSERTION_SORT}.sort */
void F714_2273 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "sort";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REAL_64 loc3 = (EIF_REAL_64) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc6 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc7 = (EIF_BOOLEAN) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_b
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_b = * (EIF_BOOLEAN *) arg3x.it_r;
	
	RTLI(13);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLR(6,tr5);
	RTLR(7,ur1);
	RTLR(8,Current);
	RTLR(9,loc4);
	RTLR(10,tr6);
	RTLR(11,loc5);
	RTLR(12,ur2);
	RTLIU(13);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_BOOL,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REAL64, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_BOOL, &loc6);
	RTLU(SK_BOOL, &loc7);
	
	RTEAA(l_feature_name, 713, Current, 7, 3, 2359);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(713, Current, 2359);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,513,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(2069, dtype, dftype);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(dftype, typarr0);
		RTCC(arg1, 713, l_feature_name, 1, typres0, 0x01);
	}
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,510,0xFF01,0xFFF9,1,217,0,0,0xFF01,162,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(2069, dtype, dftype);
			typarr0[6] = l_type.annotations | 0xFF00;
			typarr0[7] = l_type.id;
		}
		
		typres0 = eif_compound_id(dftype, typarr0);
		RTCC(arg2, 713, l_feature_name, 2, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3181, "count", arg1))(arg1)).it_i4);
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		RTE_OT
		tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr2 = tr3;
		tr3 = NULL;
		RTE_O
		tr3 = RTLA;
		RTE_OE
		RTE_OT
		tr5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr5);
		tr5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2064, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr4 = tr5;
		tr5 = NULL;
		RTE_O
		tr5 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(3464, "lower", arg1));
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L));
	for (;;) {
		RTHOOK(2);
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(3463, "upper", arg1));
		if ((EIF_BOOLEAN) (loc1 > ti4_2)) break;
		RTHOOK(3);
		RTDBGAL(3, 0x20000000, 0, 0); /* loc3 */
		ui4_1 = loc1;
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3154, "item", arg1))(arg1, ui4_1x)).it_r8);
		loc3 = (EIF_REAL_64) tr8_1;
		RTHOOK(4);
		RTDBGAL(4, 0xF80000A2, 0, 0); /* loc4 */
		{
			EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,217,0,0,0xFFFF};
			EIF_TYPE typres0;
			{
				EIF_TYPE l_type;
				l_type = RTWCT(2069, dtype, dftype);
				typarr0[4] = l_type.annotations | 0xFF00;
				typarr0[5] = l_type.id;
			}
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr6 = RTLNTS(typres0.id, 2, 0);
		}
		((EIF_TYPED_VALUE *)tr6+1)->it_r8 = loc3;
		ur1 = RTCCL(tr6);
		tr6 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4738, "item", arg2))(arg2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc4 = (EIF_REFERENCE) RTCCL(tr6);
		RTHOOK(5);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L));
		RTHOOK(6);
		RTDBGAL(7, 0x04000000, 1, 0); /* loc7 */
		loc7 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		for (;;) {
			RTHOOK(7);
			tb1 = '\01';
			ti4_3 = *(EIF_INTEGER_32 *)(arg1 + RTVA(3464, "lower", arg1));
			if (!(EIF_BOOLEAN) (loc2 < ti4_3)) {
				tb1 = loc7;
			}
			if (tb1) break;
			RTHOOK(8);
			RTDBGAL(5, 0xF80000A2, 0, 0); /* loc5 */
			{
				EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,217,0,0,0xFFFF};
				EIF_TYPE typres0;
				{
					EIF_TYPE l_type;
					l_type = RTWCT(2069, dtype, dftype);
					typarr0[4] = l_type.annotations | 0xFF00;
					typarr0[5] = l_type.id;
				}
				
				typres0 = eif_compound_id(dftype, typarr0);
				tr6 = RTLNTS(typres0.id, 2, 0);
			}
			ui4_1 = loc2;
			tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3154, "item", arg1))(arg1, ui4_1x)).it_r8);
			((EIF_TYPED_VALUE *)tr6+1)->it_r8 = tr8_1;
			ur1 = RTCCL(tr6);
			tr6 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4738, "item", arg2))(arg2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc5 = (EIF_REFERENCE) RTCCL(tr6);
			RTHOOK(9);
			if (arg3) {
				RTHOOK(10);
				RTDBGAL(6, 0x04000000, 1, 0); /* loc6 */
				ur1 = RTCCL(loc4);
				tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2083, "is_less", loc5))(loc5, ur1x)).it_b);
				loc6 = (EIF_BOOLEAN) tb2;
			} else {
				RTHOOK(11);
				RTDBGAL(6, 0x04000000, 1, 0); /* loc6 */
				ur1 = RTCCL(loc4);
				tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2085, "is_greater", loc5))(loc5, ur1x)).it_b);
				loc6 = (EIF_BOOLEAN) tb2;
			}
			RTHOOK(12);
			if (loc6) {
				RTHOOK(13);
				ui4_1 = loc2;
				tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3154, "item", arg1))(arg1, ui4_1x)).it_r8);
				ur8_1 = tr8_1;
				ui4_1 = (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3157, "put", arg1))(arg1, ur8_1x, ui4_1x);
				RTHOOK(14);
				RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
				loc2--;
			} else {
				RTHOOK(15);
				RTDBGAL(7, 0x04000000, 1, 0); /* loc7 */
				loc7 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
		}
		RTHOOK(16);
		ur8_1 = loc3;
		ui4_1 = (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3157, "put", arg1))(arg1, ur8_1x, ui4_1x);
		RTHOOK(17);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(18);
		RTCT("count_unchanged", EX_POST);
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3181, "count", arg1))(arg1)).it_i4);
		RTCO(tr1);
		if ((EIF_BOOLEAN)(ti4_3 == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(19);
		RTCT("result_sorted", EX_POST);
		ur1 = RTCCL(arg1);
		ur2 = RTCCL(arg2);
		ub1 = arg3;
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(2066, dtype))(Current, ur1x, ur2x, ub1x)).it_b);
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(20);
		RTCT("result_permutation", EX_POST);
		ur1 = RTCCL(arg1);
		RTCO(tr3);
		ur2 = RTCCL(tr2);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(2067, dtype))(Current, ur1x, ur2x)).it_b);
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(21);
		RTCT("model_sorted", EX_POST);
		ur1 = RTCCL(arg1);
		tr6 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2063, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr6);
		ur2 = RTCCL(arg2);
		ub1 = arg3;
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(2065, dtype))(Current, ur1x, ur2x, ub1x)).it_b);
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(22);
		RTCT("model_permutation", EX_POST);
		ur1 = RTCCL(arg1);
		tr6 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2064, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(22,1);
		RTCO(tr5);
		ur1 = RTCCL(tr4);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1735, "is_model_equal", tr6))(tr6, ur1x)).it_b);
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(23);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(24);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(12);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur8_1
#undef ui4_1
#undef ub1
#undef arg3
#undef arg2
#undef arg1
}

void EIF_Minit714 (void)
{
	GTCX
	RTOTS (2269,F714_2269)
	RTOTS (2271,F714_2271)
	RTOTS (2272,F714_2272)
}


#ifdef __cplusplus
}
#endif
