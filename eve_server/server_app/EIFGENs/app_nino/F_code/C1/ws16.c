/*
 * Code for class WSF_ROUTER_SESSION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ws16.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WSF_ROUTER_SESSION}.dispatched */
EIF_BOOLEAN F17_3793 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) != NULL);
}

/* {WSF_ROUTER_SESSION}.dispatched_handler */
EIF_REFERENCE F17_3794 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {WSF_ROUTER_SESSION}.set_dispatched_handler */
void F17_3795 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
}

void EIF_Minit16 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
