/*
 * Code for class WSF_ROUTER_MAPPING
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ws372.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WSF_ROUTER_MAPPING}.debug_output */
EIF_REFERENCE F969_18873 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Result);
	
	RTGC;
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16653[dtype-970])(Current);
	tr1 = F885_17049(RTCV(tr1));
	tr2 = RTMS_EX_H(" : ",3,2112032);
	tr1 = F893_17379(RTCV(tr1), tr2);
	tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16651[dtype-970])(Current);
	Result = F893_17379(RTCV(tr1), tr2);
	RTLE;
	return Result;
}

/* {WSF_ROUTER_MAPPING}.path_from_request */
EIF_REFERENCE F969_18876 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	
	
	tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_6_);
	return (EIF_REFERENCE) tr1;
}

void EIF_Minit372 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
