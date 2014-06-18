/*
 * Code for class SERVER_MEDIA_TYPE_NEGOTIATION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "se236.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SERVER_MEDIA_TYPE_NEGOTIATION}.make */
void F524_11030 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(526));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	F524_11033(Current, arg1);
	RTLE;
}

/* {SERVER_MEDIA_TYPE_NEGOTIATION}.accept_media_type_utilities */
EIF_REFERENCE F524_11031 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {SERVER_MEDIA_TYPE_NEGOTIATION}.default_media_type */
EIF_REFERENCE F524_11032 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {SERVER_MEDIA_TYPE_NEGOTIATION}.set_default_media_type */
void F524_11033 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg1;
}

/* {SERVER_MEDIA_TYPE_NEGOTIATION}.preference */
EIF_REFERENCE F524_11034 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(6);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,arg1);
	RTLR(3,arg2);
	RTLR(4,Current);
	RTLR(5,loc1);
	
	RTGC;
	tr1 = RTLNS(81, 81, _OBJSIZ_3_1_0_0_0_0_0_0_);
	Result = (EIF_REFERENCE) tr1;
	F81_6671(RTCV(Result), arg1);
	tb1 = '\01';
	if (!(EIF_BOOLEAN)(arg2 == NULL)) {
		tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R15044[Dtype(arg2)-887])(RTCV(arg2));
		tb1 = tb2;
	}
	if (tb1) {
		F81_6670(RTCV(Result), (EIF_BOOLEAN) 1);
		F81_6669(RTCV(Result), *(EIF_REFERENCE *)(Current + _REFACS_1_));
	} else {
		F82_6672(RTCV(Result));
		tr1 = *(EIF_REFERENCE *)(Current);
		loc1 = F527_11055(RTCV(tr1), arg1, arg2);
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R15044[Dtype(loc1)-887])(RTCV(loc1));
		if (tb1) {
			F81_6670(RTCV(Result), (EIF_BOOLEAN) 0);
		} else {
			F81_6669(RTCV(Result), loc1);
			F81_6670(RTCV(Result), (EIF_BOOLEAN) 1);
		}
	}
	RTLE;
	return Result;
}

void EIF_Minit236 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
