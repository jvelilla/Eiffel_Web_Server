/*
 * Code for class WSF_URI_TEMPLATE_MAPPING
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ws375.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WSF_URI_TEMPLATE_MAPPING}.handler */
EIF_REFERENCE F972_18888 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {WSF_URI_TEMPLATE_MAPPING}.set_handler */
void F972_18889 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg1;
}

/* {WSF_URI_TEMPLATE_MAPPING}.execute_handler */
void F972_18890 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	
	
	F516_11081(RTCV(arg1), arg2, arg3);
}

void EIF_Minit375 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
