/*
 * Code for class WGI_NINO_OUTPUT_STREAM
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "wg124.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WGI_NINO_OUTPUT_STREAM}.make */
void F165_8312 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	F165_8313(Current, arg1);
}

/* {WGI_NINO_OUTPUT_STREAM}.set_target */
void F165_8313 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
}

/* {WGI_NINO_OUTPUT_STREAM}.target */
EIF_REFERENCE F165_8314 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {WGI_NINO_OUTPUT_STREAM}.put_status_line */
void F165_8315 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,loc2);
	RTLR(4,arg2);
	
	RTGC;
	tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F889_17162(RTCV(tr1), ((EIF_INTEGER_32) 16L));
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = RTOUCR(152,F167_8333,(Current));
	F893_17377(RTCV(loc1), tr1);
	F893_17391(RTCV(loc1), (EIF_CHARACTER_8) ' ');
	F893_17381(RTCV(loc1), arg1);
	loc2 = (EIF_REFERENCE) arg2;
	if ((EIF_BOOLEAN)(loc2 == NULL)) {
		loc2 = F164_8311(Current, arg1);
	}
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		F893_17391(RTCV(loc1), (EIF_CHARACTER_8) ' ');
		F893_17380(RTCV(loc1), loc2);
	}
	F78_6649(Current, loc1);
	RTLE;
}

/* {WGI_NINO_OUTPUT_STREAM}.put_string */
void F165_8316 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	F601_14046(RTCV(tr1), arg1);
	RTLE;
}

/* {WGI_NINO_OUTPUT_STREAM}.flush */
void F165_8319 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

void EIF_Minit124 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
