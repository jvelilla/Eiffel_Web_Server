/*
 * Code for class WGI_NINO_ERROR_STREAM
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "wg58.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WGI_NINO_ERROR_STREAM}.make */
void F80_6656 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
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

/* {WGI_NINO_ERROR_STREAM}.make_stderr */
void F80_6657 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	tr1 = RTOUCR(29,F58_4115,(RTCV(RTOUCR(0,F1_24,(Current)))));
	F80_6656(Current, arg1, tr1);
	RTLE;
}

/* {WGI_NINO_ERROR_STREAM}.identifier */
EIF_REFERENCE F80_6659 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {WGI_NINO_ERROR_STREAM}.output */
EIF_REFERENCE F80_6660 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {WGI_NINO_ERROR_STREAM}.put_error */
void F80_6661 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Current);
	RTLR(4,tr2);
	
	RTGC;
	tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O15187[Dtype(arg1)-888]);
	tr2 = *(EIF_REFERENCE *)(Current);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCV(tr2) + O15187[Dtype(tr2)-888]);
	F889_17162(RTCV(tr1), (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + ti4_2) + ((EIF_INTEGER_32) 4L)));
	loc1 = (EIF_REFERENCE) tr1;
	F893_17391(RTCV(loc1), (EIF_CHARACTER_8) '[');
	F893_17377(RTCV(loc1), *(EIF_REFERENCE *)(Current));
	F893_17391(RTCV(loc1), (EIF_CHARACTER_8) ']');
	F893_17391(RTCV(loc1), (EIF_CHARACTER_8) ' ');
	F893_17377(RTCV(loc1), arg1);
	F893_17391(RTCV(loc1), (EIF_CHARACTER_8) '\012');
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R12244[Dtype(tr1)-601])(RTCV(tr1), loc1);
	RTLE;
}

void EIF_Minit58 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
