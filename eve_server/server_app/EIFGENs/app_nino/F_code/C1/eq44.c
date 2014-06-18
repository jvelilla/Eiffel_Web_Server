/*
 * Code for class EQA_ENVIRONMENT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "eq44.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EQA_ENVIRONMENT}.item */
EIF_REFERENCE F61_4294 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Result);
	
	RTGC;
	tr1 = RTOUCR(19,F61_4300,(Current));
	F697_13040(RTCV(tr1), arg1);
	tb1 = F697_13030(RTCV(RTOUCR(19,F61_4300,(Current))));
	if (tb1) {
		Result = *(EIF_REFERENCE *)(RTCV(RTOUCR(19,F61_4300,(Current))));
	}
	RTLE;
	return Result;
}

/* {EQA_ENVIRONMENT}.table */
static EIF_REFERENCE F61_4300_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(19)

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTEV;
	RTGC;
	RTOTP;
	{
		static EIF_TYPE_INDEX typarr0[] = {703,887,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0, 703, _OBJSIZ_7_4_0_7_0_0_0_0_);
	}
	F697_13000(RTCV(tr1), ((EIF_INTEGER_32) 10L));
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F61_4300 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(19,F61_4300_body,(Current));
}

/* {EQA_ENVIRONMENT}.put */
void F61_4301 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc2);
	RTLR(1,arg1);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,Current);
	RTLR(5,arg2);
	
	RTGC;
	loc2 = arg1;
	loc2 = RTRV(eif_non_attached_type(887),loc2);
	if (EIF_TEST(loc2)) {
		loc1 = (EIF_REFERENCE) loc2;
	} else {
		tr1 = RTLNS(887, 887, _OBJSIZ_1_0_0_4_0_0_0_0_);
		F888_17140(RTCV(tr1), arg1);
		loc1 = (EIF_REFERENCE) tr1;
	}
	tr1 = RTOUCR(19,F61_4300,(Current));
	F697_13045(RTCV(tr1), loc1, arg2);
	RTLE;
}

void EIF_Minit44 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
