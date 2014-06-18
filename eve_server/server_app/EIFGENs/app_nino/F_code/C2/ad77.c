/*
 * Code for class ADDRINFO
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ad77.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ADDRINFO}.af_inet */
EIF_INTEGER_32 F105_6991 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) en_addrinfo_af_inet();
	
	return Result;
}

/* {ADDRINFO}.af_inet6 */
EIF_INTEGER_32 F105_6992 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) en_addrinfo_af_inet6();
	
	return Result;
}

void EIF_Minit77 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
