/*
 * Code for class HTTP_MEDIA_TYPE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ht369.h"
#include <ctype.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {HTTP_MEDIA_TYPE}.make_from_string */
void F951_18796 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Current);
	
	RTGC;
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	loc3 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O15187[Dtype(arg1)-888]);
	for (;;) {
		tb1 = '\01';
		if (!(EIF_BOOLEAN) (loc2 > loc3)) {
			tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc2));
			tb2 = EIF_TEST(isspace(tc1));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) break;
		loc2++;
	}
	if ((EIF_BOOLEAN) (loc2 < loc3)) {
		loc4 = F889_17173(RTCV(arg1), (EIF_CHARACTER_8) ';', loc2);
		if ((EIF_BOOLEAN) (loc4 > ((EIF_INTEGER_32) 0L))) {
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R15107[Dtype(arg1)-887])(RTCV(arg1), loc2, (EIF_INTEGER_32) (loc4 - ((EIF_INTEGER_32) 1L)));
			loc1 = F885_17049(RTCV(tr1));
			tr1 = RTLNSMART(eif_non_attached_type(701));
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O15187[Dtype(arg1)-888]);
			F702_13133(RTCV(tr1), arg1, (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 1L)), ti4_1);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
		} else {
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R15107[Dtype(arg1)-887])(RTCV(arg1), loc2, loc3);
			loc1 = F885_17049(RTCV(tr1));
		}
		F893_17362(RTCV(loc1));
		loc4 = F889_17173(RTCV(loc1), (EIF_CHARACTER_8) '/', ((EIF_INTEGER_32) 1L));
		if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) 0L))) {
			F893_17362(RTCV(loc1));
			RTAR(Current, loc1);
			*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc1;
			tr1 = RTMS_EX_H("*",1,42);
			tb2 = F889_17187(RTCV(loc1), tr1);
			if (tb2) {
			} else {
				*(EIF_BOOLEAN *)(Current+ _CHROFF_5_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
			tr1 = RTMS_EX_H("*",1,42);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
		} else {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_1_1_0_2_);
			tr1 = F893_17423(RTCV(loc1), (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 1L)), ti4_1);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
			RTAR(Current, loc1);
			*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc1;
			F893_17359(RTCV(loc1), (EIF_INTEGER_32) (loc4 - ((EIF_INTEGER_32) 1L)));
		}
	} else {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_5_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		tr1 = RTMS_EX_H("",0,0);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
		tr1 = *(EIF_REFERENCE *)(Current);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	}
	RTLE;
}

/* {HTTP_MEDIA_TYPE}.type */
EIF_REFERENCE F951_18798 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {HTTP_MEDIA_TYPE}.subtype */
EIF_REFERENCE F951_18799 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {HTTP_MEDIA_TYPE}.has_parameter */
EIF_BOOLEAN F951_18800 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tr1 = F885_17049(RTCV(arg1));
		Result = F697_13006(RTCV(loc1), tr1);
	}
	RTLE;
	return Result;
}

/* {HTTP_MEDIA_TYPE}.parameter */
EIF_REFERENCE F951_18801 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg1);
	RTLR(4,Result);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tr1 = F885_17049(RTCV(arg1));
		Result = F697_13004(RTCV(loc1), tr1);
	}
	RTLE;
	return Result;
}

/* {HTTP_MEDIA_TYPE}.parameters */
EIF_REFERENCE F951_18802 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {HTTP_MEDIA_TYPE}.simple_type */
EIF_REFERENCE F951_18804 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		tr1 = RTLNSMART(eif_non_attached_type(892));
		F889_17164(RTCV(tr1), *(EIF_REFERENCE *)(Current));
		loc1 = (EIF_REFERENCE) tr1;
		loc2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R15044[Dtype(loc2)-887])(RTCV(loc2));
		if ((EIF_BOOLEAN) !tb1) {
			F893_17391(RTCV(loc1), (EIF_CHARACTER_8) '/');
			F893_17377(RTCV(loc1), loc2);
		}
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) loc1;
	}
	RTLE;
	return (EIF_REFERENCE) loc1;
}

/* {HTTP_MEDIA_TYPE}.same_simple_type */
EIF_BOOLEAN F951_18806 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = F951_18804(Current);
	Result = F889_17187(RTCV(tr1), arg1);
	RTLE;
	return Result;
}

/* {HTTP_MEDIA_TYPE}.add_parameter */
void F951_18808 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg2);
	RTLR(4,arg1);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		tr1 = RTLNSMART(eif_non_attached_type(701));
		F697_13000(RTCV(tr1), ((EIF_INTEGER_32) 1L));
		loc1 = (EIF_REFERENCE) tr1;
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) loc1;
	}
	tr1 = F885_17049(RTCV(arg1));
	F697_13045(RTCV(loc1), arg2, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) NULL;
	RTLE;
}

/* {HTTP_MEDIA_TYPE}.internal_string */
EIF_REFERENCE F951_18810 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {HTTP_MEDIA_TYPE}.internal_simple_type */
EIF_REFERENCE F951_18811 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_4_);
}


void EIF_Minit369 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
