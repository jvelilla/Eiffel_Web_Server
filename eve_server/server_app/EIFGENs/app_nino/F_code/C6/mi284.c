/*
 * Code for class MISMATCH_CORRECTOR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "mi284.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {MISMATCH_CORRECTOR}.correct_mismatch */
void F625_11835 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,loc2);
	RTLR(4,Current);
	
	RTGC;
	tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
	tr2 = RTMS_EX_H("Mismatch: ",10,1538098208);
	F889_17164(RTCV(tr1), tr2);
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(227, 227, _OBJSIZ_0_0_0_0_0_0_0_0_);
	loc2 = (EIF_REFERENCE) tr1;
	tr1 = F1_5(Current);
	tr1 = F905_18791(RTCV(tr1));
	F893_17377(RTCV(loc1), tr1);
	F228_9360(RTCV(loc2), loc1);
	RTLE;
}

/* {MISMATCH_CORRECTOR}.mismatch_information */
static EIF_REFERENCE F625_11836_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(2)

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(702, 702, _OBJSIZ_9_3_0_7_0_0_0_0_);
	F703_13137(RTCV(tr1));
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F625_11836 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(2,F625_11836_body,(Current));
}

void EIF_Minit284 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
