/*
 * Code for class WGI_NINO_INPUT_STREAM
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "wg254.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WGI_NINO_INPUT_STREAM}.make */
void F566_11353 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	F566_11354(Current, arg1);
	RTLE;
}

/* {WGI_NINO_INPUT_STREAM}.set_source */
void F566_11354 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
}

/* {WGI_NINO_INPUT_STREAM}.source */
EIF_REFERENCE F566_11355 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {WGI_NINO_INPUT_STREAM}.read_character */
void F566_11356 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current);
	tb1 = F597_13895(RTCV(loc1));
	if (tb1) {
		F597_13901(RTCV(loc1));
		tc1 = *(EIF_CHARACTER_8 *)(RTCV(loc1)+ _CHROFF_6_0_);
		*(EIF_CHARACTER_8 *)(Current+ _CHROFF_2_0_) = (EIF_CHARACTER_8) tc1;
	} else {
		*(EIF_CHARACTER_8 *)(Current+ _CHROFF_2_0_) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '\000';
	}
	RTLE;
}

/* {WGI_NINO_INPUT_STREAM}.read_string */
void F566_11357 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F893_17405(RTCV(tr1));
	tb1 = F597_13895(RTCV(loc1));
	if (tb1) {
		F595_13746(RTCV(loc1), arg1);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr2 = *(EIF_REFERENCE *)(RTCV(loc1));
		F893_17380(RTCV(tr1), tr2);
	}
	RTLE;
}

/* {WGI_NINO_INPUT_STREAM}.last_string */
EIF_REFERENCE F566_11358 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {WGI_NINO_INPUT_STREAM}.last_character */
EIF_CHARACTER_8 F566_11359 (EIF_REFERENCE Current)
{
	return *(EIF_CHARACTER_8 *)(Current+ _CHROFF_2_0_);
}


/* {WGI_NINO_INPUT_STREAM}.end_of_input */
EIF_BOOLEAN F566_11361 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	Result = F601_14047(RTCV(tr1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !Result;
	RTLE;
	return Result;
}

void EIF_Minit254 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
