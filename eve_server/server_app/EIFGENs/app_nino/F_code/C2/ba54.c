/*
 * Code for class BASIC_ROUTINES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ba54.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {BASIC_ROUTINES}.abs */
EIF_INTEGER_32 F74_6546 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	RTGC;
	if ((EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 0L))) {
		return (EIF_INTEGER_32) (EIF_INTEGER_32) -arg1;
	} else {
		return (EIF_INTEGER_32) arg1;
	}/* NOTREACHED */
	
}

void EIF_Minit54 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
