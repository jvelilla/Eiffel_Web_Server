/*
 * Code for class DATE_TIME_MEASUREMENT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "da95.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {DATE_TIME_MEASUREMENT}.year */
EIF_INTEGER_32 F140_7844 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R7690[Dtype(Current)-140])(Current);
	Result = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R7684[Dtype(tr1)-530])(RTCV(tr1));
	RTLE;
	return Result;
}

/* {DATE_TIME_MEASUREMENT}.month */
EIF_INTEGER_32 F140_7845 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R7690[Dtype(Current)-140])(Current);
	Result = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R7683[Dtype(tr1)-530])(RTCV(tr1));
	RTLE;
	return Result;
}

/* {DATE_TIME_MEASUREMENT}.day */
EIF_INTEGER_32 F140_7846 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R7690[Dtype(Current)-140])(Current);
	Result = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R7682[Dtype(tr1)-530])(RTCV(tr1));
	RTLE;
	return Result;
}

/* {DATE_TIME_MEASUREMENT}.hour */
EIF_INTEGER_32 F140_7847 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R7691[Dtype(Current)-140])(Current);
	Result = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R7649[Dtype(tr1)-136])(RTCV(tr1));
	RTLE;
	return Result;
}

/* {DATE_TIME_MEASUREMENT}.minute */
EIF_INTEGER_32 F140_7848 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R7691[Dtype(Current)-140])(Current);
	Result = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R7650[Dtype(tr1)-136])(RTCV(tr1));
	RTLE;
	return Result;
}

/* {DATE_TIME_MEASUREMENT}.second */
EIF_INTEGER_32 F140_7849 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R7691[Dtype(Current)-140])(Current);
	Result = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R7651[Dtype(tr1)-136])(RTCV(tr1));
	RTLE;
	return Result;
}

/* {DATE_TIME_MEASUREMENT}.fine_second */
EIF_REAL_64 F140_7850 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R7691[Dtype(Current)-140])(Current);
	Result = (FUNCTION_CAST(EIF_REAL_64, (EIF_REFERENCE)) R7652[Dtype(tr1)-136])(RTCV(tr1));
	RTLE;
	return Result;
}

void EIF_Minit95 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
