/*
 * Code for class MML_MODEL
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F145_1919(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F145_1920(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void EIF_Minit145(void);

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

/* {MML_MODEL}.is_model_non_equal */
EIF_TYPED_VALUE F145_1919 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_model_non_equal";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 144, Current, 0, 1, 1897);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(144, Current, 1897);
	RTCC(arg1, 144, l_feature_name, 1, eif_new_type(144, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ur1 = RTCCL(arg1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1735, dtype))(Current, ur1x)).it_b);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !tb1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("definition", EX_POST);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1735, dtype))(Current, ur1x)).it_b);
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN) !tb1)) {
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
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ur1
#undef arg1
}

/* {MML_MODEL}.model_equals */
EIF_TYPED_VALUE F145_1920 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "model_equals";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_BOOLEAN uarg1;
#define arg2 arg2x.it_r
	EIF_BOOLEAN uarg2;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(10);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	RTLR(3,loc1);
	RTLR(4,loc2);
	RTLR(5,ur1);
	RTLR(6,loc3);
	RTLR(7,loc4);
	RTLR(8,loc5);
	RTLR(9,loc6);
	RTLIU(10);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	
	RTEAA(l_feature_name, 144, Current, 6, 2, 1898);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(144, Current, 1898);
	uarg1 = (EIF_BOOLEAN) RTS_OU (arg1);
	uarg2 = (EIF_BOOLEAN) RTS_OU (arg2);
	uarg = uarg1 || uarg2;
	if (uarg) {
		RTS_RC;
		RTS_RS (arg2);
		RTS_RS (arg1);
		RTS_RW;
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = RTCCL(arg1);
	loc1 = RTRV(eif_new_type(144, 0x01),loc1);
	if ((loc1) && RTS_OS (Current, loc1)) loc1 = (EIF_REFERENCE) 0;
	loc2 = RTCCL(arg2);
	loc2 = RTRV(eif_new_type(144, 0x01),loc2);
	if ((loc2) && RTS_OS (Current, loc2)) loc2 = (EIF_REFERENCE) 0;
	if ((EIF_BOOLEAN) (EIF_TEST(loc1) && EIF_TEST(loc2))) {
		RTHOOK(2);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		ur1 = RTCCL(loc2);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1735, "is_model_equal", loc1))(loc1, ur1x)).it_b);
		Result = (EIF_BOOLEAN) tb1;
	} else {
		RTHOOK(3);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		Result = (EIF_BOOLEAN) RTEQ(arg1, arg2);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("models_use_model_equality", EX_POST);
		tb1 = '\01';
		loc3 = RTCCL(arg1);
		loc3 = RTRV(eif_new_type(144, 0x01),loc3);
		if ((loc3) && RTS_OS (Current, loc3)) loc3 = (EIF_REFERENCE) 0;
		loc4 = RTCCL(arg2);
		loc4 = RTRV(eif_new_type(144, 0x01),loc4);
		if ((loc4) && RTS_OS (Current, loc4)) loc4 = (EIF_REFERENCE) 0;
		if ((EIF_BOOLEAN) (EIF_TEST(loc3) && EIF_TEST(loc4))) {
			ur1 = RTCCL(loc4);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1735, "is_model_equal", loc3))(loc3, ur1x)).it_b);
			tb1 = (EIF_BOOLEAN)(Result == tb2);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("non_models_use_object_equality", EX_POST);
		loc5 = RTCCL(arg1);
		loc5 = RTRV(eif_new_type(144, 0x01),loc5);
		if ((loc5) && RTS_OS (Current, loc5)) loc5 = (EIF_REFERENCE) 0;
		loc6 = RTCCL(arg2);
		loc6 = RTRV(eif_new_type(144, 0x01),loc6);
		if ((loc6) && RTS_OS (Current, loc6)) loc6 = (EIF_REFERENCE) 0;
		if ((!((EIF_BOOLEAN) ((EIF_BOOLEAN) !EIF_TEST(loc5) || (EIF_BOOLEAN) !EIF_TEST(loc6))) || ((EIF_BOOLEAN)(Result == RTEQ(arg1, arg2))))) {
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
	if (uarg) {
		RTS_RD;
	}
	RTLE;
	RTLO(10);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ur1
#undef arg2
#undef arg1
}

void EIF_Minit145 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
