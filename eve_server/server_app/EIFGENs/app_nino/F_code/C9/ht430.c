/*
 * Code for class HTTP_CONNECTION_HANDLER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ht430.h"
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

/* {HTTP_CONNECTION_HANDLER}.make */
void F1027_20255 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	F1026_20236(Current, arg1);
	F1027_20256(Current);
	RTLE;
}

/* {HTTP_CONNECTION_HANDLER}.reset */
void F1027_20256 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current + O17503[Dtype(Current)-1026]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {696,892,892,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F697_13000(RTCV(tr1), ((EIF_INTEGER_32) 10L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	*(EIF_REFERENCE *)(Current + _REFACS_6_) = (EIF_REFERENCE) NULL;
	RTLE;
}

/* {HTTP_CONNECTION_HANDLER}.receive_message_and_send_reply */
void F1027_20257 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,arg1);
	RTLR(5,tr2);
	RTLR(6,tr3);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,3,823,892,892,993,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_2_);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		
		tr1 = F488_9208(RTCV(loc2));
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R8473[Dtype(tr1)-229])(RTCV(tr1));
		eif_put_reference_item(RTCV(loc1),1,tr1);
		
		tr2 = F488_9208(RTCV(loc2));
		tr2 = F229_8750(RTCV(tr2));
		eif_put_reference_item(RTCV(loc1),2,tr2);
		
		ti4_1 = F488_9207(RTCV(loc2));
		eif_put_integer_32_item(RTCV(loc1),3,ti4_1);
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + _REFACS_6_) = (EIF_REFERENCE) loc1;
	}
	F1027_20266(Current, arg1);
	if (*(EIF_BOOLEAN *)(Current + O17503[Dtype(Current)-1026])) {
		if (F1026_20245(Current)) {
			tr3 = RTMS_EX_H("ERROR: invalid HTTP incoming request",36,417286772);
			F1026_20237(Current, tr3);
		}
	} else {
		F1028_20275(Current, Current, arg1);
	}
	F1027_20256(Current);
	RTLE;
}

/* {HTTP_CONNECTION_HANDLER}.request_header */
EIF_REFERENCE F1027_20259 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {HTTP_CONNECTION_HANDLER}.request_header_map */
EIF_REFERENCE F1027_20260 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {HTTP_CONNECTION_HANDLER}.method */
EIF_REFERENCE F1027_20262 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {HTTP_CONNECTION_HANDLER}.uri */
EIF_REFERENCE F1027_20263 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_4_);
}


/* {HTTP_CONNECTION_HANDLER}.version */
EIF_REFERENCE F1027_20264 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_5_);
}


/* {HTTP_CONNECTION_HANDLER}.remote_info */
EIF_REFERENCE F1027_20265 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_6_);
}


/* {HTTP_CONNECTION_HANDLER}.analyze_request_message */
void F1027_20266 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc8 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc7);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,loc9);
	RTLR(4,arg1);
	RTLR(5,loc4);
	RTLR(6,loc5);
	RTLR(7,loc6);
	
	RTGC;
	tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F889_17162(RTCV(tr1), ((EIF_INTEGER_32) 64L));
	loc7 = (EIF_REFERENCE) tr1;
	RTAR(Current, loc7);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) loc7;
	tb1 = '\0';
	tr1 = F1027_20268(Current, arg1);
	loc9 = tr1;
	if (EIF_TEST(loc9)) {
		tb2 = F324_9603(RTCV(loc9));
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		F893_17377(RTCV(loc7), loc9);
		F893_17391(RTCV(loc7), (EIF_CHARACTER_8) '\012');
		F1027_20267(Current, loc9);
	} else {
		*(EIF_BOOLEAN *)(Current + O17503[dtype-1026]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	loc8 = F1026_20245(Current);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O17503[dtype-1026]) || loc8)) {
		loc4 = F1027_20268(Current, arg1);
		for (;;) {
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc4 == NULL) || loc1)) break;
			loc3 = *(EIF_INTEGER_32 *)(RTCV(loc4)+ _LNGOFF_1_1_0_2_);
			if (loc8) {
				F1026_20237(Current, loc4);
			}
			loc2 = F889_17173(RTCV(loc4), (EIF_CHARACTER_8) ':', ((EIF_INTEGER_32) 1L));
			if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
				loc5 = F893_17423(RTCV(loc4), ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L)));
				tc1 = F893_17342(RTCV(loc4), (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)));
				tb1 = EIF_TEST(isspace(tc1));
				if (tb1) {
					loc2++;
				}
				tc1 = F893_17342(RTCV(loc4), loc3);
				if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\015')) {
					loc3--;
				}
				loc6 = F893_17423(RTCV(loc4), (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)), loc3);
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
				F697_13044(RTCV(tr1), loc6, loc5);
			}
			F893_17377(RTCV(loc7), loc4);
			F893_17391(RTCV(loc7), (EIF_CHARACTER_8) '\012');
			tb1 = '\01';
			tb2 = F324_9603(RTCV(loc4));
			if (!tb2) {
				tc1 = F893_17342(RTCV(loc4), ((EIF_INTEGER_32) 1L));
				tb1 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\015');
			}
			if (tb1) {
				loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			} else {
				loc4 = F1027_20268(Current, arg1);
			}
		}
	}
	RTLE;
}

/* {HTTP_CONNECTION_HANDLER}.analyze_request_line */
void F1027_20267 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	if (F1026_20245(Current)) {
		tr1 = RTMS_EX_H("\012## Parse HTTP request line ##",30,202796579);
		F1026_20237(Current, tr1);
		F1026_20237(Current, arg1);
	}
	loc1 = F889_17173(RTCV(arg1), (EIF_CHARACTER_8) ' ', ((EIF_INTEGER_32) 1L));
	tr1 = F893_17423(RTCV(arg1), ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	loc2 = F889_17173(RTCV(arg1), (EIF_CHARACTER_8) ' ', (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)));
	tr1 = F893_17423(RTCV(arg1), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) tr1;
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_1_1_0_2_);
	tr1 = F893_17423(RTCV(arg1), (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)), ti4_1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	tb1 = F324_9603(RTCV(tr1));
	*(EIF_BOOLEAN *)(Current + O17503[Dtype(Current)-1026]) = (EIF_BOOLEAN) tb1;
	RTLE;
}

/* {HTTP_CONNECTION_HANDLER}.next_line */
EIF_REFERENCE F1027_20268 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	
	RTGC;
	tb1 = F597_13838(RTCV(arg1));
	if (tb1) {
		F595_13749(RTCV(arg1));
		tr1 = *(EIF_REFERENCE *)(RTCV(arg1));
		RTLE;
		return (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) 0;
}

void EIF_Minit430 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
