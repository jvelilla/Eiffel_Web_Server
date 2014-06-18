/*
 * Code for class WSF_REQUEST_PATH_PARAMETERS_SOURCE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ws73.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WSF_REQUEST_PATH_PARAMETERS_SOURCE}.path_parameters */
EIF_REFERENCE F100_6952 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {WSF_REQUEST_PATH_PARAMETERS_SOURCE}.update_path_parameters */
void F100_6953 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
}

void EIF_Minit73 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
