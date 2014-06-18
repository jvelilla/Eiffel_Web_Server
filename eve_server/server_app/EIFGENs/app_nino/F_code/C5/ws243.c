/*
 * Code for class WSF_URI_TEMPLATE_AGENT_HANDLER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ws243.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WSF_URI_TEMPLATE_AGENT_HANDLER}.make */
void F516_11079 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
}

/* {WSF_URI_TEMPLATE_AGENT_HANDLER}.action */
EIF_REFERENCE F516_11080 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {WSF_URI_TEMPLATE_AGENT_HANDLER}.execute */
void F516_11081 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,arg2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) *(EIF_POINTER *)(RTCV(tr1)+ _PTROFF_4_2_0_3_0_0_))(
		*(EIF_POINTER *)(RTCV(tr1)+ _PTROFF_4_2_0_3_0_1_),
		*(EIF_REFERENCE *)(RTCV(tr1) + _REFACS_1_), arg1, arg2);
	;
	RTLE;
}

void EIF_Minit243 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
