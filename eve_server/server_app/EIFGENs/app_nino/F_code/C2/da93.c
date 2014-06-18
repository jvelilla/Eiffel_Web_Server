/*
 * Code for class DATE_CONSTANTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "da93.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {DATE_CONSTANTS}.days_in_i_th_month */
EIF_INTEGER_32 F138_7825 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTOUCR(211,F138_7833,(Current));
	Result = F723_12311(RTCV(tr1), arg1);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 2L))) {
		tb1 = F138_7832(Current, arg2);
	}
	if (tb1) {
		RTLE;
		return (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + ((EIF_INTEGER_32) 1L));
	}
	RTLE;
	return Result;
}

/* {DATE_CONSTANTS}.date_default_format_string */
EIF_REFERENCE F138_7826 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	
	RTGC;
	Result = RTOUCR(212,F63_6466,(RTCV(RTOUCR(213,F134_7784,(Current)))));
	RTLE;
	return Result;
}

/* {DATE_CONSTANTS}.days_text */
EIF_REFERENCE F138_7827 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	
	RTGC;
	Result = RTOUCR(214,F63_6462,(RTCV(RTOUCR(213,F134_7784,(Current)))));
	RTLE;
	return Result;
}

/* {DATE_CONSTANTS}.months_text */
EIF_REFERENCE F138_7828 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	
	RTGC;
	Result = RTOUCR(215,F63_6463,(RTCV(RTOUCR(213,F134_7784,(Current)))));
	RTLE;
	return Result;
}

/* {DATE_CONSTANTS}.is_leap_year */
EIF_BOOLEAN F138_7832 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = '\0';
	if ((EIF_BOOLEAN)(F134_7782(Current, arg1, ((EIF_INTEGER_32) 4L)) == ((EIF_INTEGER_32) 0L))) {
		tb1 = '\01';
		if (!((EIF_BOOLEAN)(F134_7782(Current, arg1, ((EIF_INTEGER_32) 100L)) != ((EIF_INTEGER_32) 0L)))) {
			tb1 = (EIF_BOOLEAN)(F134_7782(Current, arg1, ((EIF_INTEGER_32) 400L)) == ((EIF_INTEGER_32) 0L));
		}
		Result = tb1;
	}
	RTLE;
	return Result;
}

/* {DATE_CONSTANTS}.days_in_months */
static EIF_REFERENCE F138_7833_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(211)

	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	
	RTEV;
	RTGC;
	RTOTP;
	{
		static EIF_TYPE_INDEX typarr0[] = {954,993,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr2 = RTLNSP2(eif_non_attached_type(typres0),0,((EIF_INTEGER_32) 12L),sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr2) = 12L;
	}
	*((EIF_INTEGER_32 *)tr2+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 31L);
	*((EIF_INTEGER_32 *)tr2+1) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 28L);
	*((EIF_INTEGER_32 *)tr2+2) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 31L);
	*((EIF_INTEGER_32 *)tr2+3) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 30L);
	*((EIF_INTEGER_32 *)tr2+4) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 31L);
	*((EIF_INTEGER_32 *)tr2+5) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 30L);
	*((EIF_INTEGER_32 *)tr2+6) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 31L);
	*((EIF_INTEGER_32 *)tr2+7) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 31L);
	*((EIF_INTEGER_32 *)tr2+8) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 30L);
	*((EIF_INTEGER_32 *)tr2+9) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 31L);
	*((EIF_INTEGER_32 *)tr2+10) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 30L);
	*((EIF_INTEGER_32 *)tr2+11) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 31L);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F955_18829)(tr2);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F138_7833 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(211,F138_7833_body,(Current));
}

void EIF_Minit93 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
