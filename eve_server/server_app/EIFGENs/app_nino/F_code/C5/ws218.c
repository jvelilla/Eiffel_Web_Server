/*
 * Code for class WSF_ROUTED_SERVICE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ws218.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WSF_ROUTED_SERVICE}.initialize_router */
void F108_10089 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F108_10090(Current);
	F236_10111(Current);
	RTLE;
}

/* {WSF_ROUTED_SERVICE}.create_router */
void F108_10090 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(644));
	F645_11944(RTCV(tr1), ((EIF_INTEGER_32) 10L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O9516[Dtype(Current)-107]) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {WSF_ROUTED_SERVICE}.execute */
void F108_10092 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,arg1);
	RTLR(4,arg2);
	
	RTGC;
	tr1 = RTLNS(16, 16, _OBJSIZ_1_0_0_0_0_0_0_0_);
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + O9516[Dtype(Current)-107]);
	F645_11952(RTCV(tr1), arg1, arg2, loc1);
	tb1 = F17_3793(RTCV(loc1));
	if ((EIF_BOOLEAN) !tb1) {
		F108_10093(Current, arg1, arg2);
	}
	RTLE;
}

/* {WSF_ROUTED_SERVICE}.execute_default */
void F108_10093 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Current);
	RTLR(4,tr2);
	RTLR(5,arg2);
	
	RTGC;
	tr1 = RTLNS(613, 613, _OBJSIZ_2_2_0_0_0_0_0_0_);
	tr2 = *(EIF_REFERENCE *)(Current + O9516[Dtype(Current)-107]);
	F614_13306(RTCV(tr1), arg1, tr2);
	loc1 = (EIF_REFERENCE) tr1;
	F614_13310(RTCV(loc1), (EIF_BOOLEAN) 1);
	F116_8587(RTCV(arg2), loc1);
	RTLE;
}

/* {WSF_ROUTED_SERVICE}.router */
EIF_REFERENCE F108_10094 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O9516[Dtype(Current) - 107]);
}


void EIF_Minit218 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
