/*
 * Code for class WSF_URI_TEMPLATE_HELPER_FOR_ROUTED_SERVICE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ws146.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WSF_URI_TEMPLATE_HELPER_FOR_ROUTED_SERVICE}.map_uri_template_with_request_methods */
void F106_8546 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,arg1);
	RTLR(4,arg2);
	RTLR(5,arg3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O9516[Dtype(Current)-107]);
	tr2 = RTLNS(971, 971, _OBJSIZ_2_0_0_0_0_0_0_0_);
	F971_18878(RTCV(tr2), arg1, arg2);
	F645_11949(RTCV(tr1), tr2, arg3);
	RTLE;
}

/* {WSF_URI_TEMPLATE_HELPER_FOR_ROUTED_SERVICE}.map_uri_template_agent_with_request_methods */
void F106_8548 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,arg2);
	RTLR(3,arg3);
	RTLR(4,Current);
	
	RTGC;
	tr1 = RTLNS(515, 515, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F516_11079(RTCV(tr1), arg2);
	F106_8546(Current, arg1, tr1, arg3);
	RTLE;
}

void EIF_Minit146 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
