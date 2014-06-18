/*
 * Code for class WSF_SELF_DOCUMENTED_ROUTER_MAPPING
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ws373.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WSF_SELF_DOCUMENTED_ROUTER_MAPPING}.documentation */
EIF_REFERENCE F970_18877 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg1);
	
	RTGC;
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16652[Dtype(Current)-971])(Current);
	loc1 = tr1;
	loc1 = RTRV(eif_non_attached_type(151),loc1);
	if (EIF_TEST(loc1)) {
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R8757[Dtype(loc1)-519])(RTCV(loc1), Current, arg1);
		RTLE;
		return (EIF_REFERENCE) tr1;
	} else {
		tr1 = RTLNS(17, 17, _OBJSIZ_2_1_0_0_0_0_0_0_);
		F18_3796(RTCV(tr1), Current);
		RTLE;
		return (EIF_REFERENCE) tr1;
	}/* NOTREACHED */
	
}

void EIF_Minit373 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
