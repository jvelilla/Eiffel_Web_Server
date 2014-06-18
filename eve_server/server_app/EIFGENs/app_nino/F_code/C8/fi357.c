/*
 * Code for class FILE_NAME
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "fi357.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {FILE_NAME}.new_string */
EIF_REFERENCE F895_17488 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTLNSMART(Dftype(Current));
	F889_17162(RTCV(tr1), arg1);
	RTLE;
	return (EIF_REFERENCE) tr1;
}

void EIF_Minit357 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
