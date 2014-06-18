/*
 * Code for class WSF_ROUTER_ITEM
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ws364.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WSF_ROUTER_ITEM}.make */
void F900_18522 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
}

/* {WSF_ROUTER_ITEM}.make_with_request_methods */
void F900_18523 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,arg2);
	
	RTGC;
	F900_18522(Current, arg1);
	F900_18527(Current, arg2);
	RTLE;
}

/* {WSF_ROUTER_ITEM}.mapping */
EIF_REFERENCE F900_18524 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {WSF_ROUTER_ITEM}.request_methods */
EIF_REFERENCE F900_18525 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {WSF_ROUTER_ITEM}.debug_output */
EIF_REFERENCE F900_18526 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(6);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLR(4,loc1);
	RTLR(5,loc2);
	
	RTGC;
	tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
	tr2 = *(EIF_REFERENCE *)(Current);
	tr2 = F969_18873(RTCV(tr2));
	F889_17164(RTCV(tr1), tr2);
	Result = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tr1 = RTMS_EX_H(" [ ",3,2120480);
		F893_17380(RTCV(Result), tr1);
		loc2 = F646_12034(RTCV(loc1));
		for (;;) {
			tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9799[Dtype(loc2)-646])(RTCV(loc2));
			if (tb1) break;
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9798[Dtype(loc2)-646])(RTCV(loc2));
			F893_17380(RTCV(Result), tr1);
			tr1 = RTMS_EX_H(" ",1,32);
			F893_17380(RTCV(Result), tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R9800[Dtype(loc2)-646])(RTCV(loc2));
		}
		tr1 = RTMS_EX_H("]",1,93);
		F893_17380(RTCV(Result), tr1);
	}
	RTLE;
	return Result;
}

/* {WSF_ROUTER_ITEM}.set_request_methods */
void F900_18527 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg1;
}

void EIF_Minit364 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
