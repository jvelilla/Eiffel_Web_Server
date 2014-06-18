/*
 * Code for class WSF_ROUTER_SELF_DOCUMENTATION_HANDLER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ws247.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WSF_ROUTER_SELF_DOCUMENTATION_HANDLER}.make */
void F520_11100 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
}

/* {WSF_ROUTER_SELF_DOCUMENTATION_HANDLER}.router */
EIF_REFERENCE F520_11102 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {WSF_ROUTER_SELF_DOCUMENTATION_HANDLER}.resource */
EIF_REFERENCE F520_11103 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {WSF_ROUTER_SELF_DOCUMENTATION_HANDLER}.mapping_documentation */
EIF_REFERENCE F520_11105 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,arg1);
	RTLR(2,Result);
	RTLR(3,Current);
	
	RTGC;
	tr1 = RTLNS(17, 17, _OBJSIZ_2_1_0_0_0_0_0_0_);
	F18_3796(RTCV(tr1), arg1);
	Result = (EIF_REFERENCE) tr1;
	F18_3802(RTCV(Result), *(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_));
	tr1 = RTMS_EX_H("Self generated documentation based on the router\'s setup",56,1966134128);
	F18_3803(RTCV(Result), tr1);
	RTLE;
	return Result;
}

/* {WSF_ROUTER_SELF_DOCUMENTATION_HANDLER}.on_mapped */
void F520_11106 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,tr1);
	
	RTGC;
	loc1 = arg1;
	loc1 = RTRV(eif_non_attached_type(975),loc1);
	if (EIF_TEST(loc1)) {
		tr1 = *(EIF_REFERENCE *)(RTCV(loc1));
		tr1 = F885_17049(RTCV(tr1));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	}
	RTLE;
}

/* {WSF_ROUTER_SELF_DOCUMENTATION_HANDLER}.execute */
void F520_11107 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,arg2);
	RTLR(5,tr2);
	RTLR(6,arg3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		tr1 = RTLNS(610, 610, _OBJSIZ_6_0_0_1_0_0_0_0_);
		tr2 = *(EIF_REFERENCE *)(Current);
		F611_13226(RTCV(tr1), arg2, tr2, loc2);
		loc1 = (EIF_REFERENCE) tr1;
	} else {
		tr1 = RTLNS(610, 610, _OBJSIZ_6_0_0_1_0_0_0_0_);
		tr2 = *(EIF_REFERENCE *)(Current);
		F611_13225(RTCV(tr1), arg2, tr2);
		loc1 = (EIF_REFERENCE) tr1;
	}
	F116_8587(RTCV(arg3), loc1);
	RTLE;
}

void EIF_Minit247 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
