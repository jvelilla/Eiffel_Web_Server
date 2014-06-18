/*
 * Code for class COM_FAILURE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "co175.h"
#include "eif_com_exception.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F193_9267
static EIF_INTEGER_32 inline_F193_9267 (EIF_POINTER arg1)
{
	#ifdef EIF_WINDOWS
			char *stopstring = NULL;
			long result = 0, high_bits = 0, low_bits = 0;
			char high_str [7];
			char *exception_code = (char *)(arg1);
			  
			if (NULL != exception_code)
			{
				strncpy (high_str, exception_code, 6);
				high_str [6] = '\0';

				high_bits = strtol (high_str, &stopstring, 16);
				low_bits = strtol (exception_code + 6, &stopstring, 16);
				result = (high_bits << 16) + low_bits;
			}
			return (EIF_INTEGER)result;
		#else
			return 0;
		#endif
	;
}
#define INLINE_F193_9267
#endif
#ifndef INLINE_F193_9268
static EIF_INTEGER_32 inline_F193_9268 (EIF_INTEGER_32 arg1)
{
	#ifdef EIF_WINDOWS
	return HRESULT_CODE(arg1);
#else
	return 0;
#endif
	;
}
#define INLINE_F193_9268
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {COM_FAILURE}.code */
EIF_INTEGER_32 F193_9258 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) ((EIF_INTEGER_32) 28L);
}

/* {COM_FAILURE}.set_hresult_code */
void F193_9260 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_2_) = (EIF_INTEGER_32) arg1;
}

/* {COM_FAILURE}.exception_information */
EIF_REFERENCE F193_9264 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_5_);
}


/* {COM_FAILURE}.set_exception_information */
void F193_9265 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,tr2);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) arg1;
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_2_) > ((EIF_INTEGER_32) 0L))) {
		tr1 = RTLNS(562, 562, _OBJSIZ_1_0_0_1_0_0_0_0_);
		tr2 = F193_9266(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_2_));
		F563_11287(RTCV(tr1), tr2);
		loc1 = (EIF_REFERENCE) tr1;
		tp1 = F563_11306(RTCV(loc1));
		ti4_1 = inline_F193_9267(tp1);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_1_) = (EIF_INTEGER_32) ti4_1;
	} else {
		tr1 = RTLNS(562, 562, _OBJSIZ_1_0_0_1_0_0_0_0_);
		F563_11287(RTCV(tr1), arg1);
		loc1 = (EIF_REFERENCE) tr1;
		tp1 = F563_11306(RTCV(loc1));
		ti4_1 = inline_F193_9267(tp1);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_1_) = (EIF_INTEGER_32) ti4_1;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_1_);
		ti4_1 = inline_F193_9268(ti4_1);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_2_) = (EIF_INTEGER_32) ti4_1;
	}
	RTLE;
}

/* {COM_FAILURE}.ccom_hresult_to_string */
EIF_REFERENCE F193_9266 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Result);
	
	RTGC;
	tr1 = RTLNS(993, 993, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)tr1 = arg1;
	
	Result = F992_19214(RTCV(tr1));
	tr1 = RTMS_EX_H("0x",2,12408);
	Result = F893_17379(RTCV(tr1), Result);
	RTLE;
	return Result;
}

/* {COM_FAILURE}.ccom_hresult */
EIF_INTEGER_32 F193_9267 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F193_9267 ((EIF_POINTER) arg1);
	return Result;
}

/* {COM_FAILURE}.ccom_hresult_code */
EIF_INTEGER_32 F193_9268 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F193_9268 ((EIF_INTEGER_32) arg1);
	return Result;
}

void EIF_Minit175 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
