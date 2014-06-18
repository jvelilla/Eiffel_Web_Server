/*
 * Code for class WGI_FILTER_RESPONSE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "wg117.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WGI_FILTER_RESPONSE}.make_with_response */
void F157_8210 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCFDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg1;
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,823,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNTS(typres0, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
	RTAR(tr1,Current);
	
	{
		EIF_TYPE_INDEX typarr0[] = {867,0,0xFFF9,0,823,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr2 = RTLNRF(typres0, (EIF_POINTER) __A117_40, (EIF_POINTER) _A117_40, (EIF_POINTER)(R7994[Dtype((((EIF_TYPED_VALUE *)tr1)[1].it_r)) - 154]),tr1, 1, 0);
	}
	F154_8176(RTCV(arg1), tr2);
	RTLE;
}

/* {WGI_FILTER_RESPONSE}.wgi_response */
EIF_REFERENCE F157_8211 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {WGI_FILTER_RESPONSE}.commit */
void F157_8213 (EIF_REFERENCE Current)
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
	RTLE;
}

/* {WGI_FILTER_RESPONSE}.status_committed */
EIF_BOOLEAN F157_8214 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R7997[Dtype(tr1)-154])(RTCV(tr1));
	RTLE;
	return Result;
}

/* {WGI_FILTER_RESPONSE}.header_committed */
EIF_BOOLEAN F157_8215 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R7998[Dtype(tr1)-154])(RTCV(tr1));
	RTLE;
	return Result;
}

/* {WGI_FILTER_RESPONSE}.set_status_code */
void F157_8219 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_REFERENCE)) R8002[Dtype(tr1)-154])(RTCV(tr1), arg1, arg2);
	RTLE;
}

/* {WGI_FILTER_RESPONSE}.put_header_text */
void F157_8222 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R8005[Dtype(tr1)-154])(RTCV(tr1), arg1);
	RTLE;
}

/* {WGI_FILTER_RESPONSE}.put_string */
void F157_8224 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R8007[Dtype(tr1)-154])(RTCV(tr1), arg1);
	RTLE;
}

/* {WGI_FILTER_RESPONSE}.flush */
void F157_8226 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R8009[Dtype(tr1)-154])(RTCV(tr1));
	RTLE;
}

/* {WGI_FILTER_RESPONSE}.put_error */
void F157_8227 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R8010[Dtype(tr1)-154])(RTCV(tr1), arg1);
	RTLE;
}

void EIF_Minit117 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
