/*
 * Code for class INET_ADDRESS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "in153.h"
#include "eif_built_in.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {INET_ADDRESS}.host_name */
EIF_REFERENCE F229_8750 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTLE;
		return (EIF_REFERENCE) loc1;
	} else {
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R8473[Dtype(Current)-229])(Current);
		loc1 = (EIF_REFERENCE) eif_builtin_ANY_twin (tr1);
		RTLE;
		return (EIF_REFERENCE) loc1;
	}/* NOTREACHED */
	
}

/* {INET_ADDRESS}.internal_host_name */
EIF_REFERENCE F229_8754 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {INET_ADDRESS}.sockaddr_size */
EIF_INTEGER_32 F229_8755 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) en_socket_address_len();
	
	return Result;
}

void EIF_Minit153 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
