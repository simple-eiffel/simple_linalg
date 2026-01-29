/*
 * Code for class SIMPLE_HEAP_SORT [REAL_64]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F713_2274(EIF_REFERENCE);
extern EIF_TYPED_VALUE F713_2275(EIF_REFERENCE);
extern EIF_TYPED_VALUE F713_2276(EIF_REFERENCE);
extern EIF_TYPED_VALUE F713_2277(EIF_REFERENCE);
extern void F713_2278(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F713_2279(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F713_2280(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void EIF_Minit713(void);

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

/* {SIMPLE_HEAP_SORT}.name */
RTOID (F713_2274)


EIF_TYPED_VALUE F713_2274 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F713_2274,2361,RTMS_EX_H("Heap Sort",9,1024966004));
}

/* {SIMPLE_HEAP_SORT}.is_stable */
EIF_TYPED_VALUE F713_2275 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = (EIF_BOOLEAN) EIF_FALSE;
	return r;
}

/* {SIMPLE_HEAP_SORT}.time_complexity */
RTOID (F713_2276)


EIF_TYPED_VALUE F713_2276 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F713_2276,2363,RTMS_EX_H("O(n log n)",10,2115580969));
}

/* {SIMPLE_HEAP_SORT}.space_complexity */
RTOID (F713_2277)


EIF_TYPED_VALUE F713_2277 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F713_2277,2364,RTMS_EX_H("O(1)",4,1328034089));
}

/* {SIMPLE_HEAP_SORT}.sort */
void F713_2278 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "sort";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_b
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_b = * (EIF_BOOLEAN *) arg3x.it_r;
	
	RTLI(11);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLR(6,tr5);
	RTLR(7,ur1);
	RTLR(8,Current);
	RTLR(9,ur2);
	RTLR(10,tr6);
	RTLIU(11);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_BOOL,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 712, Current, 2, 3, 2364);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(712, Current, 2364);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,513,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(2069, dtype, Dftype(Current));
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		RTCC(arg1, 712, l_feature_name, 1, typres0, 0x01);
	}
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,510,0xFF01,0xFFF9,1,217,0,0,0xFF01,162,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(2069, dtype, Dftype(Current));
			typarr0[6] = l_type.annotations | 0xFF00;
			typarr0[7] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		RTCC(arg2, 712, l_feature_name, 2, typres0, 0x01);
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
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3181, "count", arg1))(arg1)).it_i4);
	loc1 = (EIF_INTEGER_32) ti4_2;
	RTHOOK(2);
	if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 1L))) {
		RTHOOK(3);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 / ((EIF_INTEGER_32) 2L)) - ((EIF_INTEGER_32) 1L));
		for (;;) {
			RTHOOK(4);
			if ((EIF_BOOLEAN) (loc2 < ((EIF_INTEGER_32) 0L))) break;
			RTHOOK(5);
			ur1 = RTCCL(arg1);
			ui4_1 = loc1;
			ui4_2 = loc2;
			ur2 = RTCCL(arg2);
			ub1 = arg3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(2070, dtype))(Current, ur1x, ui4_1x, ui4_2x, ur2x, ub1x);
			RTHOOK(6);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2--;
		}
		RTHOOK(7);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L));
		for (;;) {
			RTHOOK(8);
			if ((EIF_BOOLEAN) (loc2 < ((EIF_INTEGER_32) 1L))) break;
			RTHOOK(9);
			ur1 = RTCCL(arg1);
			ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(3464, "lower", arg1));
			ui4_1 = ti4_2;
			ti4_3 = *(EIF_INTEGER_32 *)(arg1 + RTVA(3464, "lower", arg1));
			ui4_2 = (EIF_INTEGER_32) (ti4_3 + loc2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(2071, dtype))(Current, ur1x, ui4_1x, ui4_2x);
			RTHOOK(10);
			ur1 = RTCCL(arg1);
			ui4_1 = loc2;
			ui4_2 = ((EIF_INTEGER_32) 0L);
			ur2 = RTCCL(arg2);
			ub1 = arg3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(2070, dtype))(Current, ur1x, ui4_1x, ui4_2x, ur2x, ub1x);
			RTHOOK(11);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2--;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("count_unchanged", EX_POST);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3181, "count", arg1))(arg1)).it_i4);
		RTCO(tr1);
		if ((EIF_BOOLEAN)(ti4_2 == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("result_sorted", EX_POST);
		ur1 = RTCCL(arg1);
		ur2 = RTCCL(arg2);
		ub1 = arg3;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(2066, dtype))(Current, ur1x, ur2x, ub1x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(14);
		RTCT("result_permutation", EX_POST);
		ur1 = RTCCL(arg1);
		RTCO(tr3);
		ur2 = RTCCL(tr2);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(2067, dtype))(Current, ur1x, ur2x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(15);
		RTCT("model_sorted", EX_POST);
		ur1 = RTCCL(arg1);
		tr6 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2063, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr6);
		ur2 = RTCCL(arg2);
		ub1 = arg3;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(2065, dtype))(Current, ur1x, ur2x, ub1x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(16);
		RTCT("model_permutation", EX_POST);
		ur1 = RTCCL(arg1);
		tr6 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2064, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(16,1);
		RTCO(tr5);
		ur1 = RTCCL(tr4);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1735, "is_model_equal", tr6))(tr6, ur1x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(17);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef ub1
#undef arg3
#undef arg2
#undef arg1
}

/* {SIMPLE_HEAP_SORT}.heapify */
void F713_2279 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x)
{
	GTCX
	char *l_feature_name = "heapify";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc7 = (EIF_BOOLEAN) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_r
#define arg5 arg5x.it_b
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_b = * (EIF_BOOLEAN *) arg5x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,arg4);
	RTLR(2,loc4);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLR(5,ur1);
	RTLR(6,loc5);
	RTLR(7,loc6);
	RTLR(8,ur2);
	RTLIU(9);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_REF,&arg4);
	RTLU(SK_BOOL,&arg5);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_BOOL, &loc7);
	
	RTEAA(l_feature_name, 712, Current, 7, 5, 2365);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(712, Current, 2365);
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
		RTCC(arg1, 712, l_feature_name, 1, typres0, 0x01);
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
		RTCC(arg4, 712, l_feature_name, 4, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("size_valid", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L))) {
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3181, "count", arg1))(arg1)).it_i4);
			tb1 = (EIF_BOOLEAN) (arg2 <= ti4_1);
		}
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("root_valid", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (arg3 < arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) arg3;
	RTHOOK(4);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * arg3) + ((EIF_INTEGER_32) 1L));
	RTHOOK(5);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * arg3) + ((EIF_INTEGER_32) 2L));
	RTHOOK(6);
	if ((EIF_BOOLEAN) (loc2 < arg2)) {
		RTHOOK(7);
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
			tr1 = RTLNTS(typres0.id, 2, 0);
		}
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(3464, "lower", arg1));
		ui4_1 = (EIF_INTEGER_32) (ti4_1 + loc1);
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3154, "item", arg1))(arg1, ui4_1x)).it_r8);
		((EIF_TYPED_VALUE *)tr1+1)->it_r8 = tr8_1;
		ur1 = RTCCL(tr1);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4738, "item", arg4))(arg4, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc4 = (EIF_REFERENCE) RTCCL(tr1);
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
			tr1 = RTLNTS(typres0.id, 2, 0);
		}
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(3464, "lower", arg1));
		ui4_1 = (EIF_INTEGER_32) (ti4_1 + loc2);
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3154, "item", arg1))(arg1, ui4_1x)).it_r8);
		((EIF_TYPED_VALUE *)tr1+1)->it_r8 = tr8_1;
		ur1 = RTCCL(tr1);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4738, "item", arg4))(arg4, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc5 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(9);
		if (arg5) {
			RTHOOK(10);
			RTDBGAL(7, 0x04000000, 1, 0); /* loc7 */
			ur1 = RTCCL(loc4);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2083, "is_less", loc5))(loc5, ur1x)).it_b);
			loc7 = (EIF_BOOLEAN) tb1;
		} else {
			RTHOOK(11);
			RTDBGAL(7, 0x04000000, 1, 0); /* loc7 */
			ur1 = RTCCL(loc4);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2085, "is_greater", loc5))(loc5, ur1x)).it_b);
			loc7 = (EIF_BOOLEAN) tb1;
		}
		RTHOOK(12);
		if (loc7) {
			RTHOOK(13);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1 = (EIF_INTEGER_32) loc2;
		}
	}
	RTHOOK(14);
	if ((EIF_BOOLEAN) (loc3 < arg2)) {
		RTHOOK(15);
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
			tr1 = RTLNTS(typres0.id, 2, 0);
		}
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(3464, "lower", arg1));
		ui4_1 = (EIF_INTEGER_32) (ti4_1 + loc1);
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3154, "item", arg1))(arg1, ui4_1x)).it_r8);
		((EIF_TYPED_VALUE *)tr1+1)->it_r8 = tr8_1;
		ur1 = RTCCL(tr1);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4738, "item", arg4))(arg4, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc4 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(16);
		RTDBGAL(6, 0xF80000A2, 0, 0); /* loc6 */
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
			tr1 = RTLNTS(typres0.id, 2, 0);
		}
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(3464, "lower", arg1));
		ui4_1 = (EIF_INTEGER_32) (ti4_1 + loc3);
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3154, "item", arg1))(arg1, ui4_1x)).it_r8);
		((EIF_TYPED_VALUE *)tr1+1)->it_r8 = tr8_1;
		ur1 = RTCCL(tr1);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4738, "item", arg4))(arg4, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc6 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(17);
		if (arg5) {
			RTHOOK(18);
			RTDBGAL(7, 0x04000000, 1, 0); /* loc7 */
			ur1 = RTCCL(loc4);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2083, "is_less", loc6))(loc6, ur1x)).it_b);
			loc7 = (EIF_BOOLEAN) tb1;
		} else {
			RTHOOK(19);
			RTDBGAL(7, 0x04000000, 1, 0); /* loc7 */
			ur1 = RTCCL(loc4);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2085, "is_greater", loc6))(loc6, ur1x)).it_b);
			loc7 = (EIF_BOOLEAN) tb1;
		}
		RTHOOK(20);
		if (loc7) {
			RTHOOK(21);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1 = (EIF_INTEGER_32) loc3;
		}
	}
	RTHOOK(22);
	if ((EIF_BOOLEAN)(loc1 != arg3)) {
		RTHOOK(23);
		ur1 = RTCCL(arg1);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(3464, "lower", arg1));
		ui4_1 = (EIF_INTEGER_32) (ti4_1 + arg3);
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(3464, "lower", arg1));
		ui4_2 = (EIF_INTEGER_32) (ti4_2 + loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(2071, dtype))(Current, ur1x, ui4_1x, ui4_2x);
		RTHOOK(24);
		ur1 = RTCCL(arg1);
		ui4_1 = arg2;
		ui4_2 = loc1;
		ur2 = RTCCL(arg4);
		ub1 = arg5;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(2070, dtype))(Current, ur1x, ui4_1x, ui4_2x, ur2x, ub1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(25);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(14);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef ub1
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {SIMPLE_HEAP_SORT}.swap */
void F713_2280 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "swap";
	RTEX;
	EIF_REAL_64 loc1 = (EIF_REAL_64) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,Current);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_REAL64, &loc1);
	
	RTEAA(l_feature_name, 712, Current, 1, 3, 2366);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(712, Current, 2366);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,513,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(2069, dtype, Dftype(Current));
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		RTCC(arg1, 712, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("i_valid", EX_PRE);
		ui4_1 = arg2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3407, "valid_index", arg1))(arg1, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("j_valid", EX_PRE);
		ui4_1 = arg3;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3407, "valid_index", arg1))(arg1, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ui4_1 = arg3;
		tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3154, "item", arg1))(arg1, ui4_1x)).it_r8);
		tr8_1 = tr8_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		RTE_OT
		ui4_1 = arg2;
		tr8_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3154, "item", arg1))(arg1, ui4_1x)).it_r8);
		tr8_2 = tr8_3;
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		RTE_OT
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3181, "count", arg1))(arg1)).it_i4);
		ti4_1 = ti4_2;
		tr3 = NULL;
		RTE_O
		tr3 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(3);
	RTDBGAL(1, 0x20000000, 0, 0); /* loc1 */
	ui4_1 = arg2;
	tr8_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3154, "item", arg1))(arg1, ui4_1x)).it_r8);
	loc1 = (EIF_REAL_64) tr8_3;
	RTHOOK(4);
	ui4_1 = arg3;
	tr8_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3154, "item", arg1))(arg1, ui4_1x)).it_r8);
	ur8_1 = tr8_3;
	ui4_1 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3157, "put", arg1))(arg1, ur8_1x, ui4_1x);
	RTHOOK(5);
	ur8_1 = loc1;
	ui4_1 = arg3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3157, "put", arg1))(arg1, ur8_1x, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("swapped_i", EX_POST);
		ui4_1 = arg2;
		tr8_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3154, "item", arg1))(arg1, ui4_1x)).it_r8);
		RTCO(tr1);
		if ((EIF_BOOLEAN)(tr8_3 == tr8_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("swapped_j", EX_POST);
		ui4_1 = arg3;
		tr8_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3154, "item", arg1))(arg1, ui4_1x)).it_r8);
		RTCO(tr2);
		if ((EIF_BOOLEAN)(tr8_3 == tr8_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("count_unchanged", EX_POST);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3181, "count", arg1))(arg1)).it_i4);
		RTCO(tr3);
		if ((EIF_BOOLEAN)(ti4_2 == ti4_1)) {
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
	RTLO(6);
	RTEE;
#undef ur8_1
#undef ui4_1
#undef arg3
#undef arg2
#undef arg1
}

void EIF_Minit713 (void)
{
	GTCX
	RTOTS (2274,F713_2274)
	RTOTS (2276,F713_2276)
	RTOTS (2277,F713_2277)
}


#ifdef __cplusplus
}
#endif
