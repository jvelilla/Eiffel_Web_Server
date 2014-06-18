/*
 * Code for class URI_TEMPLATE_MATCH_RESULT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ur4.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {URI_TEMPLATE_MATCH_RESULT}.make */
void F5_3592 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg2;
	RTLE;
}

/* {URI_TEMPLATE_MATCH_RESULT}.path_variables */
EIF_REFERENCE F5_3594 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {URI_TEMPLATE_MATCH_RESULT}.query_variables */
EIF_REFERENCE F5_3595 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


void EIF_Minit4 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
