/*
 * Code for class WSF_WGI_DELAYED_HEADER_RESPONSE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ws162.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WSF_WGI_DELAYED_HEADER_RESPONSE}.make */
void F158_9068 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg2);
	RTLR(2,arg1);
	
	RTGC;
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) arg2;
	F157_8210(Current, arg1);
	RTLE;
}

/* {WSF_WGI_DELAYED_HEADER_RESPONSE}.update_wsf_response */
void F158_9069 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) arg1;
}

/* {WSF_WGI_DELAYED_HEADER_RESPONSE}.wsf_response */
EIF_REFERENCE F158_9070 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {WSF_WGI_DELAYED_HEADER_RESPONSE}.commit */
void F158_9071 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN) !F157_8215(Current)) {
		F158_9072(Current);
	}
	F157_8213(Current);
	RTLE;
}

/* {WSF_WGI_DELAYED_HEADER_RESPONSE}.process_header */
void F158_9072 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F154_8176(RTCV(tr1), NULL);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	F116_8568(RTCV(tr1));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	F116_8558(RTCV(tr1), *(EIF_REFERENCE *)(Current + _REFACS_1_));
	RTLE;
}

/* {WSF_WGI_DELAYED_HEADER_RESPONSE}.put_string */
void F158_9076 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	F158_9072(Current);
	F157_8224(Current, arg1);
	RTLE;
}

/* {WSF_WGI_DELAYED_HEADER_RESPONSE}.flush */
void F158_9078 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F158_9072(Current);
	F157_8226(Current);
	RTLE;
}

void EIF_Minit162 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
