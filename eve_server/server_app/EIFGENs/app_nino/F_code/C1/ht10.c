/*
 * Code for class HTTP_SERVER_CONFIGURATION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ht10.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {HTTP_SERVER_CONFIGURATION}.make */
void F11_3738 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 80L);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 100L);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1000L);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5000L);
	tr1 = RTMS_EX_H("htdocs",6,1890384755);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {HTTP_SERVER_CONFIGURATION}.server_details */

EIF_REFERENCE F11_3739 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (205,RTMS_EX_H("Server : NINO Eiffel Server",27,1169312370));
}

/* {HTTP_SERVER_CONFIGURATION}.document_root */
EIF_REFERENCE F11_3740 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {HTTP_SERVER_CONFIGURATION}.http_server_name */
EIF_REFERENCE F11_3741 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {HTTP_SERVER_CONFIGURATION}.set_http_server_name */
void F11_3748 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg1;
}

/* {HTTP_SERVER_CONFIGURATION}.set_http_server_port */
void F11_3749 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_0_) = (EIF_INTEGER_32) arg1;
}

/* {HTTP_SERVER_CONFIGURATION}.set_force_single_threaded */
void F11_3754 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) arg1;
}

/* {HTTP_SERVER_CONFIGURATION}.set_is_verbose */
void F11_3755 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) arg1;
}

void EIF_Minit10 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
