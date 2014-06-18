/*
 * Code for class EIFFEL_PARSER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ei31.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EIFFEL_PARSER}.make */
void F33_3991 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	F33_3998(Current, arg1);
	F33_3999(Current);
	RTLE;
}

/* {EIFFEL_PARSER}.error_message */
EIF_REFERENCE F33_3992 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {EIFFEL_PARSER}.warning_message */
EIF_REFERENCE F33_3993 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {EIFFEL_PARSER}.compile_message */
EIF_REFERENCE F33_3994 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {EIFFEL_PARSER}.syntax_error */
EIF_REFERENCE F33_3995 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {EIFFEL_PARSER}.input_string */
EIF_REFERENCE F33_3996 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_4_);
}


/* {EIFFEL_PARSER}.output_message */
EIF_REFERENCE F33_3997 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_5_);
}


/* {EIFFEL_PARSER}.initialize */
void F33_3998 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) arg1;
}

/* {EIFFEL_PARSER}.parse_message */
void F33_3999 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	tr2 = RTMS_EX_H("---------------",15,1567527213);
	loc2 = F889_17178(RTCV(tr1), tr2, ((EIF_INTEGER_32) 1L));
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L));
	if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) -1L))) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
		loc2 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	tr1 = F893_17423(RTCV(tr1), ((EIF_INTEGER_32) 1L), loc2);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	tr2 = RTMS_EX_H("Warning code: ",14,756688672);
	loc4 = F889_17178(RTCV(tr1), tr2, loc2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	tr2 = RTMS_EX_H("Error code: ",12,475754016);
	loc3 = F889_17178(RTCV(tr1), tr2, loc2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	tr2 = RTMS_EX_H("Syntax error",12,995637106);
	loc5 = F889_17178(RTCV(tr1), tr2, loc2);
	loc9 = (EIF_INTEGER_32) loc4;
	if ((EIF_BOOLEAN)(loc5 != ((EIF_INTEGER_32) 0L))) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
		tr2 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr2)+ _LNGOFF_1_1_0_2_);
		tr1 = F893_17423(RTCV(tr1), loc5, ti4_1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	}
	for (;;) {
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 0L)))) break;
		if ((EIF_BOOLEAN)(loc4 != ((EIF_INTEGER_32) 0L))) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			tr2 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
			tr3 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
			tr4 = RTMS_EX_H("------",6,846754605);
			ti4_1 = F889_17178(RTCV(tr3), tr4, loc4);
			tr2 = F893_17423(RTCV(tr2), loc4, (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)));
			F893_17377(RTCV(tr1), tr2);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			tr2 = RTMS_EX_H("-------------------------------------------------------------------------------",79,654323245);
			F893_17377(RTCV(tr1), tr2);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
			tr2 = RTMS_EX_H("Warning code: ",14,756688672);
			loc4 = F889_17178(RTCV(tr1), tr2, (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 1L)));
			if ((EIF_BOOLEAN)(loc4 != ((EIF_INTEGER_32) 0L))) {
				loc9 = (EIF_INTEGER_32) loc4;
			}
		}
		if ((EIF_BOOLEAN)(loc3 != ((EIF_INTEGER_32) 0L))) {
			tr1 = *(EIF_REFERENCE *)(Current);
			tr2 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
			tr3 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
			tr4 = RTMS_EX_H("-----",5,758281005);
			ti4_1 = F889_17178(RTCV(tr3), tr4, loc3);
			tr2 = F893_17423(RTCV(tr2), loc3, (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)));
			F893_17377(RTCV(tr1), tr2);
			tr1 = *(EIF_REFERENCE *)(Current);
			tr2 = RTMS_EX_H("-------------------------------------------------------------------------------",79,654323245);
			F893_17377(RTCV(tr1), tr2);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
			tr2 = RTMS_EX_H("Error code: ",12,475754016);
			loc3 = F889_17178(RTCV(tr1), tr2, (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L)));
		}
	}
	tb1 = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tb2 = F324_9603(RTCV(tr1));
	if ((EIF_BOOLEAN) !tb2) {
		tr1 = *(EIF_REFERENCE *)(Current);
		tb2 = F324_9603(RTCV(tr1));
		tb1 = tb2;
	}
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
		tr2 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr2)+ _LNGOFF_1_1_0_2_);
		loc2 = F889_17174(RTCV(tr1), (EIF_CHARACTER_8) '-', ti4_1);
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
		tr2 = RTMS_EX_H("--------------------",20,2029078317);
		loc9 = F889_17178(RTCV(tr1), tr2, loc9);
		for (;;) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
			tc1 = F893_17343(RTCV(tr1), loc9);
			if ((EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '-')) break;
			loc9++;
		}
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
		tc2 = F893_17343(RTCV(tr1), loc9);
		if ((EIF_BOOLEAN)(tc2 == (EIF_CHARACTER_8) '<')) {
			loc9 += ((EIF_INTEGER_32) 4L);
		}
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		tr2 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
		tr3 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr3)+ _LNGOFF_1_1_0_2_);
		tr2 = F893_17423(RTCV(tr2), loc9, ti4_1);
		F893_17377(RTCV(tr1), tr2);
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	tr2 = RTMS_EX_H("--------",8,2031566125);
	loc8 = F889_17178(RTCV(tr1), tr2, ((EIF_INTEGER_32) 1L));
	if ((EIF_BOOLEAN)(loc8 != ((EIF_INTEGER_32) 0L))) {
		tb1 = '\0';
		tb2 = '\0';
		tb3 = '\0';
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN)(ti4_1 != ti4_2)) {
			tr1 = *(EIF_REFERENCE *)(Current);
			tb4 = F324_9603(RTCV(tr1));
			tb3 = tb4;
		}
		if (tb3) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			tb3 = F324_9603(RTCV(tr1));
			tb2 = tb3;
		}
		if (tb2) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			tb2 = F324_9603(RTCV(tr1));
			tb1 = tb2;
		}
		if (tb1) {
			tr1 = *(EIF_REFERENCE *)(Current);
			tr2 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
			tr3 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr3)+ _LNGOFF_1_1_0_2_);
			tr3 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
			ti4_2 = *(EIF_INTEGER_32 *)(RTCV(tr3)+ _LNGOFF_1_1_0_2_);
			tr2 = F893_17423(RTCV(tr2), ti4_1, ti4_2);
			F893_17377(RTCV(tr1), tr2);
		}
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
	tb1 = '\0';
	tr1 = *(EIF_REFERENCE *)(Current);
	tb2 = F324_9603(RTCV(tr1));
	if (tb2) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		tb2 = F324_9603(RTCV(tr1));
		tb1 = tb2;
	}
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
		tr2 = RTMS_EX_H("Recompiled.",11,1394060078);
		loc10 = F889_17178(RTCV(tr1), tr2, ((EIF_INTEGER_32) 1L));
		loc10 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc10 + ((EIF_INTEGER_32) 15L));
		if ((EIF_BOOLEAN)(loc10 != ((EIF_INTEGER_32) 15L))) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
			tr2 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr2)+ _LNGOFF_1_1_0_2_);
			tr1 = F893_17423(RTCV(tr1), loc10, ti4_1);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
		}
	}
	RTLE;
}

void EIF_Minit31 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
