/*
 * Code for class WSF_URI_MAPPING
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ws377.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WSF_URI_MAPPING}.handler */
EIF_REFERENCE F974_18902 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {WSF_URI_MAPPING}.set_handler */
void F974_18903 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg1;
}

/* {WSF_URI_MAPPING}.execute_handler */
void F974_18904 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	
	
	F518_11092(RTCV(arg1), arg2, arg3);
}

void EIF_Minit377 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
