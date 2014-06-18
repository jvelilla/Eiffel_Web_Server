/*
 * Code for class ANY
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "an1.h"
#include "eif_built_in.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ANY}.generating_type */
EIF_REFERENCE F1_5 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,Result);
	
	RTGC;
	tr1 = RTLNTY(Dftype(Current));
	Result = (EIF_REFERENCE) tr1;
	RTLE;
	return Result;
}

/* {ANY}.same_type */
EIF_BOOLEAN F1_7 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,arg1);
	
	Result = (EIF_BOOLEAN) eif_builtin_ANY_same_type (Current, arg1);
	RTLE;
	return Result;
}

/* {ANY}.is_equal */
EIF_BOOLEAN F1_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,arg1);
	
	Result = (EIF_BOOLEAN) eif_builtin_ANY_is_equal (Current, arg1);
	RTLE;
	return Result;
}

/* {ANY}.equal */
EIF_BOOLEAN F1_10 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == NULL)) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN)(arg2 == NULL);
	} else {
		Result = '\0';
		if ((EIF_BOOLEAN)(arg2 != NULL)) {
			tr1 = RTCCL(arg2);
			tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R11[Dtype(arg1)-0])(arg1, tr1);
			Result = tb1;
		}
	}
	RTLE;
	return Result;
}

/* {ANY}.twin */
EIF_REFERENCE F1_14 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Result);
	
	Result = (EIF_REFERENCE) eif_builtin_ANY_twin (Current);
	RTLE;
	return Result;
}

/* {ANY}.copy */
void F1_15 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,arg1);
	
	eif_builtin_ANY_copy (Current, arg1);
	RTLE;
}

/* {ANY}.standard_copy */
void F1_16 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,arg1);
	
	eif_builtin_ANY_standard_copy (Current, arg1);
	RTLE;
}

/* {ANY}.deep_twin */
EIF_REFERENCE F1_20 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Result);
	
	Result = (EIF_REFERENCE) eif_builtin_ANY_deep_twin (Current);
	RTLE;
	return Result;
}

/* {ANY}.internal_correct_mismatch */
void F1_23 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,loc2);
	
	RTGC;
	loc3 = RTCCL(Current);
	loc3 = RTRV(eif_non_attached_type(624),loc3);
	if (EIF_TEST(loc3)) {
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R11010[Dtype(loc3)-624])(RTCV(loc3));
	} else {
		tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
		tr2 = RTMS_EX_H("Mismatch: ",10,1538098208);
		F889_17164(RTCV(tr1), tr2);
		loc1 = (EIF_REFERENCE) tr1;
		tr1 = RTLNS(227, 227, _OBJSIZ_0_0_0_0_0_0_0_0_);
		loc2 = (EIF_REFERENCE) tr1;
		tr1 = F1_5(Current);
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16563[Dtype(tr1)-904])(RTCV(tr1));
		F893_17377(RTCV(loc1), tr1);
		F228_9360(RTCV(loc2), loc1);
	}
	RTLE;
}

/* {ANY}.io */
static EIF_REFERENCE F1_24_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(0)

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(57, 57, _OBJSIZ_1_0_0_0_0_0_0_0_);
	Result = (EIF_REFERENCE) tr1;
	F58_4139(RTCV(Result));
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1_24 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(0,F1_24_body,(Current));
}

/* {ANY}.out */
EIF_REFERENCE F1_25 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) (EIF_REFERENCE) eif_builtin_ANY_tagged_out (Current);
}

/* {ANY}.tagged_out */
EIF_REFERENCE F1_26 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Result);
	
	Result = (EIF_REFERENCE) eif_builtin_ANY_tagged_out (Current);
	RTLE;
	return Result;
}

/* {ANY}.default_create */
void F1_29 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {ANY}.default_rescue */
void F1_30 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {ANY}.do_nothing */
void F1_31 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {ANY}.default_pointer */
EIF_POINTER F1_33 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_POINTER) 0;
}

void EIF_Minit1 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
