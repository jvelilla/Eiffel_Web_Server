/*
 * Code for class URI_TEMPLATE_EXPRESSION_VARIABLE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ur424.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {URI_TEMPLATE_EXPRESSION_VARIABLE}.make */
void F1021_20042 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3, EIF_REFERENCE arg4)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	RTLR(3,arg3);
	RTLR(4,arg4);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	tc1 = *(EIF_CHARACTER_8 *)(RTCV(arg1)+ _CHROFF_2_0_);
	*(EIF_CHARACTER_8 *)(Current+ _CHROFF_4_0_) = (EIF_CHARACTER_8) tc1;
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg2;
	RTAR(Current, arg3);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) arg3;
	tb1 = '\0';
	if ((EIF_BOOLEAN)(arg4 != NULL)) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg4)+ _LNGOFF_1_1_0_2_);
		tb1 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
	}
	if (tb1) {
		tc1 = F893_17342(RTCV(arg4), ((EIF_INTEGER_32) 1L));
		switch (tc1) {
			case (EIF_CHARACTER_8) '*':
			case (EIF_CHARACTER_8) '+':
				tc1 = F893_17342(RTCV(arg4), ((EIF_INTEGER_32) 1L));
				*(EIF_CHARACTER_8 *)(Current+ _CHROFF_4_3_) = (EIF_CHARACTER_8) tc1;
				break;
			case (EIF_CHARACTER_8) ':':
			case (EIF_CHARACTER_8) '^':
				RTAR(Current, arg4);
				*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) arg4;
				break;
		}
	}
	*(EIF_CHARACTER_8 *)(Current+ _CHROFF_4_1_) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '\000';
	*(EIF_CHARACTER_8 *)(Current+ _CHROFF_4_2_) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) ',';
	switch (*(EIF_CHARACTER_8 *)(Current+ _CHROFF_4_0_)) {
		case (EIF_CHARACTER_8) '+':
			*(EIF_BOOLEAN *)(Current+ _CHROFF_4_4_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			break;
		case (EIF_CHARACTER_8) '\?':
			*(EIF_CHARACTER_8 *)(Current+ _CHROFF_4_1_) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '\?';
			*(EIF_CHARACTER_8 *)(Current+ _CHROFF_4_2_) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '&';
			break;
		case (EIF_CHARACTER_8) '&':
			*(EIF_CHARACTER_8 *)(Current+ _CHROFF_4_1_) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '&';
			*(EIF_CHARACTER_8 *)(Current+ _CHROFF_4_2_) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '&';
			break;
		case (EIF_CHARACTER_8) ';':
			*(EIF_CHARACTER_8 *)(Current+ _CHROFF_4_1_) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) ';';
			*(EIF_CHARACTER_8 *)(Current+ _CHROFF_4_2_) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) ';';
			break;
		case (EIF_CHARACTER_8) '/':
			*(EIF_CHARACTER_8 *)(Current+ _CHROFF_4_1_) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '/';
			*(EIF_CHARACTER_8 *)(Current+ _CHROFF_4_2_) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '/';
			break;
		case (EIF_CHARACTER_8) '#':
			*(EIF_BOOLEAN *)(Current+ _CHROFF_4_4_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			*(EIF_CHARACTER_8 *)(Current+ _CHROFF_4_1_) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '#';
			*(EIF_CHARACTER_8 *)(Current+ _CHROFF_4_2_) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) ',';
			break;
		case (EIF_CHARACTER_8) '.':
			*(EIF_CHARACTER_8 *)(Current+ _CHROFF_4_1_) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '.';
			*(EIF_CHARACTER_8 *)(Current+ _CHROFF_4_2_) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '.';
			break;
	}
	RTLE;
}

/* {URI_TEMPLATE_EXPRESSION_VARIABLE}.expression */
EIF_REFERENCE F1021_20043 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {URI_TEMPLATE_EXPRESSION_VARIABLE}.name */
EIF_REFERENCE F1021_20045 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {URI_TEMPLATE_EXPRESSION_VARIABLE}.default_value */
EIF_REFERENCE F1021_20046 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {URI_TEMPLATE_EXPRESSION_VARIABLE}.modifier */
EIF_REFERENCE F1021_20051 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


void EIF_Minit424 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
