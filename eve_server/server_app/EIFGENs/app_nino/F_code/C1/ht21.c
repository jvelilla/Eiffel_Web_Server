/*
 * Code for class HTTP_DATE_TIME_UTILITIES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ht21.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {HTTP_DATE_TIME_UTILITIES}.now_utc */
EIF_REFERENCE F23_3841 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(1);
	RTLR(0,tr1);
	
	RTGC;
	tr1 = RTLNS(1090, 1090, _OBJSIZ_2_0_0_2_0_0_0_1_);
	F1091_21056(RTCV(tr1));
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {HTTP_DATE_TIME_UTILITIES}.epoch */
static EIF_REFERENCE F23_3842_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(148)

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(1090, 1090, _OBJSIZ_2_0_0_2_0_0_0_1_);
	F1091_21061(RTCV(tr1), ((EIF_INTEGER_32) 0L));
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F23_3842 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(148,F23_3842_body,(Current));
}

/* {HTTP_DATE_TIME_UTILITIES}.unix_time_stamp */
EIF_INTEGER_64 F23_3843 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		loc1 = (EIF_REFERENCE) arg1;
	} else {
		loc1 = F23_3841(Current);
	}
	tr1 = RTOUCR(148,F23_3842,(Current));
	tr1 = F1091_21078(RTCV(loc1), tr1);
	Result = F533_10512(RTCV(tr1));
	RTLE;
	return Result;
}

void EIF_Minit21 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
