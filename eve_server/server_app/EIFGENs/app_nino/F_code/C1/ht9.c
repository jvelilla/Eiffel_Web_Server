/*
 * Code for class HTTP_SERVER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ht9.h"
#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {HTTP_SERVER}.make */
void F10_3732 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
}

/* {HTTP_SERVER}.setup */
void F10_3733 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,arg1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	tb1 = *(EIF_BOOLEAN *)(RTCV(tr1)+ _CHROFF_2_1_);
	if (tb1) {
		tr1 = RTMS_EX_H("\012\012\012",3,657930);
		F10_3737(Current, tr1);
		tr1 = RTMS_EX_H("Starting Web Application Server (port=",38,1349634109);
		tr2 = *(EIF_REFERENCE *)(Current);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr2)+ _LNGOFF_2_2_0_0_);
		tr2 = c_outi(ti4_1);
		tr1 = F893_17379(RTCV(tr1), tr2);
		tr2 = RTMS_EX_H("):\012",3,2701834);
		tr1 = F893_17379(RTCV(tr1), tr2);
		F10_3737(Current, tr1);
	}
	*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	F1026_20238(RTCV(arg1));
	RTLE;
}

/* {HTTP_SERVER}.configuration */
EIF_REFERENCE F10_3735 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {HTTP_SERVER}.log */
void F10_3737 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	
	RTGC;
	tr1 = RTOUCR(0,F1_24,(Current));
	tr2 = F885_17049(RTCV(arg1));
	F58_4142(RTCV(tr1), tr2);
	RTLE;
}

void EIF_Minit9 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
