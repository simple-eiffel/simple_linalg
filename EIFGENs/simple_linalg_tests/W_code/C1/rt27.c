/*
 * Code for class RT_DBG_EXECUTION_PARAMETERS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F27_586(EIF_REFERENCE);
extern EIF_TYPED_VALUE F27_587(EIF_REFERENCE);
extern EIF_TYPED_VALUE F27_588(EIF_REFERENCE);
extern EIF_TYPED_VALUE F27_589(EIF_REFERENCE);
extern EIF_TYPED_VALUE F27_590(EIF_REFERENCE);
extern void F27_591(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F27_592(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F27_593(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F27_594(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit27(void);

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

/* {RT_DBG_EXECUTION_PARAMETERS}.make */
void F27_586 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 26, Current, 0, 0, 561);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(26, Current, 561);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 583, 0x10000000, 1); /* maximum_record_count */
	*(EIF_INTEGER_32 *)(Current + RTWA(583, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1000000L);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 584, 0x04000000, 1); /* flatten_when_closing */
	*(EIF_BOOLEAN *)(Current + RTWA(584, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 585, 0x04000000, 1); /* keep_calls_records */
	*(EIF_BOOLEAN *)(Current + RTWA(585, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 586, 0x04000000, 1); /* recording_values */
	*(EIF_BOOLEAN *)(Current + RTWA(586, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {RT_DBG_EXECUTION_PARAMETERS}.maximum_record_count */
EIF_TYPED_VALUE F27_587 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(583,Dtype(Current)));
	return r;
}


/* {RT_DBG_EXECUTION_PARAMETERS}.flatten_when_closing */
EIF_TYPED_VALUE F27_588 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(584,Dtype(Current)));
	return r;
}


/* {RT_DBG_EXECUTION_PARAMETERS}.keep_calls_records */
EIF_TYPED_VALUE F27_589 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(585,Dtype(Current)));
	return r;
}


/* {RT_DBG_EXECUTION_PARAMETERS}.recording_values */
EIF_TYPED_VALUE F27_590 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(586,Dtype(Current)));
	return r;
}


/* {RT_DBG_EXECUTION_PARAMETERS}.set_maximum_record_count */
void F27_591 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_maximum_record_count";
	RTEX;
#define arg1 arg1x.it_i4
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
	
	RTEAA(l_feature_name, 26, Current, 0, 1, 557);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(26, Current, 557);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 583, 0x10000000, 1); /* maximum_record_count */
	*(EIF_INTEGER_32 *)(Current + RTWA(583, dtype)) = (EIF_INTEGER_32) arg1;
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

/* {RT_DBG_EXECUTION_PARAMETERS}.set_flatten_when_closing */
void F27_592 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_flatten_when_closing";
	RTEX;
#define arg1 arg1x.it_b
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_b = * (EIF_BOOLEAN *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_BOOL,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 26, Current, 0, 1, 558);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(26, Current, 558);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 584, 0x04000000, 1); /* flatten_when_closing */
	*(EIF_BOOLEAN *)(Current + RTWA(584, dtype)) = (EIF_BOOLEAN) arg1;
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

/* {RT_DBG_EXECUTION_PARAMETERS}.set_keep_calls_records */
void F27_593 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_keep_calls_records";
	RTEX;
#define arg1 arg1x.it_b
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_b = * (EIF_BOOLEAN *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_BOOL,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 26, Current, 0, 1, 559);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(26, Current, 559);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 585, 0x04000000, 1); /* keep_calls_records */
	*(EIF_BOOLEAN *)(Current + RTWA(585, dtype)) = (EIF_BOOLEAN) arg1;
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

/* {RT_DBG_EXECUTION_PARAMETERS}.set_recording_values */
void F27_594 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_recording_values";
	RTEX;
#define arg1 arg1x.it_b
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_b = * (EIF_BOOLEAN *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_BOOL,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 26, Current, 0, 1, 560);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(26, Current, 560);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 586, 0x04000000, 1); /* recording_values */
	*(EIF_BOOLEAN *)(Current + RTWA(586, dtype)) = (EIF_BOOLEAN) arg1;
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

void EIF_Minit27 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
