/*
 * Code for class EIFFEL_ERRORS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ei35.h"
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

/* {EIFFEL_ERRORS}.make */
void F37_4018 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	
	RTGC;
	F37_4023(Current, arg1);
	tr1 = RTLNSMART(eif_non_attached_type(1019));
	F1020_19945(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = RTMS_EX_H("Syntax error",12,995637106);
	ti4_1 = F889_17178(RTCV(tr1), tr2, ((EIF_INTEGER_32) 1L));
	if ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
		F37_4024(Current);
	} else {
		F37_4025(Current);
	}
	RTLE;
}

/* {EIFFEL_ERRORS}.error_message */
EIF_REFERENCE F37_4019 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {EIFFEL_ERRORS}.json_array */
EIF_REFERENCE F37_4021 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {EIFFEL_ERRORS}.json_object */
EIF_REFERENCE F37_4022 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {EIFFEL_ERRORS}.initialize */
void F37_4023 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = RTMS_EX_H("\012",1,10);
	tr3 = RTMS_EX_H("<br>",4,1013084734);
	F893_17354(RTCV(tr1), tr2, tr3);
	RTLE;
}

/* {EIFFEL_ERRORS}.create_syntax_error_list */
void F37_4024 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc13 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc14 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(11);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,loc5);
	RTLR(4,loc6);
	RTLR(5,loc7);
	RTLR(6,loc8);
	RTLR(7,loc9);
	RTLR(8,loc11);
	RTLR(9,loc12);
	RTLR(10,tr3);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(1018));
	F1019_19929(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_0_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = RTMS_EX_H("Syntax error",12,995637106);
	loc14 = F889_17178(RTCV(tr1), tr2, ((EIF_INTEGER_32) 1L));
	for (;;) {
		if ((EIF_BOOLEAN)(loc14 == ((EIF_INTEGER_32) 0L))) break;
		tr1 = RTLNSMART(eif_non_attached_type(1019));
		F1020_19945(RTCV(tr1));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = RTMS_EX_H("class ",6,1830427424);
		loc1 = F889_17178(RTCV(tr1), tr2, loc14);
		loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 6L));
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = RTMS_EX_H(">",1,62);
		loc3 = F889_17178(RTCV(tr1), tr2, loc1);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = RTMS_EX_H("line ",5,1769671968);
		loc2 = F889_17178(RTCV(tr1), tr2, loc14);
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 5L));
		loc13 = (EIF_INTEGER_32) loc2;
		for (;;) {
			tr1 = *(EIF_REFERENCE *)(Current);
			tc1 = F893_17343(RTCV(tr1), loc13);
			tb1 = EIF_TEST(isdigit(tc1));
			if ((EIF_BOOLEAN) !tb1) break;
			loc13++;
		}
		loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc13 - ((EIF_INTEGER_32) 1L));
		loc5 = RTMS_EX_H("Syntax Error<br>",16,590505534);
		loc6 = RTMS_EX_H("",0,0);
		loc7 = RTMS_EX_H("",0,0);
		tr1 = *(EIF_REFERENCE *)(Current);
		loc8 = F893_17423(RTCV(tr1), loc1, loc3);
		loc9 = RTMS_EX_H("",0,0);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr1 = F893_17423(RTCV(tr1), loc2, loc4);
		loc10 = F885_17058(RTCV(tr1));
		loc11 = RTMS_EX_H("",0,0);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = *(EIF_REFERENCE *)(Current);
		tr3 = RTMS_EX_H("--^",3,2960734);
		ti4_1 = F889_17178(RTCV(tr2), tr3, loc14);
		loc12 = F893_17423(RTCV(tr1), (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 5L)), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 2L)));
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr3 = RTMS_EX_H("Error_Code",10,2035117157);
		F987_19042(RTCV(tr2), tr3);
		F1020_19947(RTCV(tr1), loc5, tr2);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr3 = RTMS_EX_H("Error",5,1920632178);
		F987_19042(RTCV(tr2), tr3);
		F1020_19947(RTCV(tr1), loc6, tr2);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr3 = RTMS_EX_H("What_to_do",10,1571397231);
		F987_19042(RTCV(tr2), tr3);
		F1020_19947(RTCV(tr1), loc7, tr2);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr3 = RTMS_EX_H("Class",5,1818840435);
		F987_19042(RTCV(tr2), tr3);
		F1020_19947(RTCV(tr1), loc8, tr2);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr3 = RTMS_EX_H("Feature",7,878169957);
		F987_19042(RTCV(tr2), tr3);
		F1020_19947(RTCV(tr1), loc9, tr2);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		ti8_1 = (EIF_INTEGER_64) loc10;
		tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr3 = RTMS_EX_H("Line",4,1281977957);
		F987_19042(RTCV(tr2), tr3);
		F1020_19948(RTCV(tr1), ti8_1, tr2);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr3 = RTMS_EX_H("Before_Line",11,1271208037);
		F987_19042(RTCV(tr2), tr3);
		F1020_19947(RTCV(tr1), loc11, tr2);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr3 = RTMS_EX_H("After_Line",10,471645285);
		F987_19042(RTCV(tr2), tr3);
		F1020_19947(RTCV(tr1), loc12, tr2);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		F1019_19937(RTCV(tr1), *(EIF_REFERENCE *)(Current + _REFACS_2_));
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = RTMS_EX_H("Syntax error",12,995637106);
		loc14 = F889_17178(RTCV(tr1), tr2, loc4);
		(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_0_0_0_))++;
	}
	RTLE;
}

/* {EIFFEL_ERRORS}.create_error_list */
void F37_4025 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc12 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc13 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc14 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc15 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc16 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc17 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc18 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc19 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc20 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc21 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc22 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc23 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc24 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc25 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc26 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc27 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc28 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc29 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc30 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc31 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc32 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_CHARACTER_8 tc3;
	EIF_CHARACTER_8 tc4;
	EIF_CHARACTER_8 tc5;
	RTLD;
	
	RTLI(13);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,loc15);
	RTLR(4,loc16);
	RTLR(5,loc17);
	RTLR(6,loc18);
	RTLR(7,loc19);
	RTLR(8,loc21);
	RTLR(9,tr3);
	RTLR(10,loc22);
	RTLR(11,loc23);
	RTLR(12,tr4);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(1018));
	F1019_19929(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_0_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = RTMS_EX_H("Error code",10,424024421);
	loc25 = F889_17178(RTCV(tr1), tr2, ((EIF_INTEGER_32) 1L));
	for (;;) {
		if ((EIF_BOOLEAN)(loc25 == ((EIF_INTEGER_32) 0L))) break;
		tr1 = RTLNSMART(eif_non_attached_type(1019));
		F1020_19945(RTCV(tr1));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
		loc26 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		loc27 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		loc28 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		loc29 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		loc30 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		loc31 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		loc32 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = RTMS_EX_H("Error code: ",12,475754016);
		loc1 = F889_17178(RTCV(tr1), tr2, loc25);
		loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 12L));
		if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 12L))) {
			loc26 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			loc14 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			loc7 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc14 - ((EIF_INTEGER_32) 1L));
			tr1 = *(EIF_REFERENCE *)(Current);
			loc13 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
		} else {
			loc24 = (EIF_INTEGER_32) loc1;
			for (;;) {
				tr1 = *(EIF_REFERENCE *)(Current);
				tc1 = F893_17343(RTCV(tr1), loc24);
				if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '>')) break;
				loc24++;
			}
			loc7 = (EIF_INTEGER_32) loc24;
			loc14 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc7 + ((EIF_INTEGER_32) 1L));
			tr1 = *(EIF_REFERENCE *)(Current);
			tr2 = RTMS_EX_H("-----",5,758281005);
			loc13 = F889_17178(RTCV(tr1), tr2, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)));
			loc13 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc13 - ((EIF_INTEGER_32) 1L));
		}
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = RTMS_EX_H("Error: ",7,316445984);
		loc2 = F889_17178(RTCV(tr1), tr2, loc25);
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 7L));
		if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 7L))) {
			tr1 = *(EIF_REFERENCE *)(Current);
			tr2 = RTMS_EX_H("Type error: ",12,1137547808);
			loc2 = F889_17178(RTCV(tr1), tr2, loc25);
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 12L));
		}
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 12L)) || (EIF_BOOLEAN) (loc2 > loc13))) {
			loc27 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			loc14 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc7 + ((EIF_INTEGER_32) 1L));
			loc8 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc14 - ((EIF_INTEGER_32) 1L));
		} else {
			loc24 = (EIF_INTEGER_32) loc2;
			for (;;) {
				tr1 = *(EIF_REFERENCE *)(Current);
				tc2 = F893_17343(RTCV(tr1), loc24);
				if ((EIF_BOOLEAN)(tc2 == (EIF_CHARACTER_8) '>')) break;
				loc24++;
			}
			loc8 = (EIF_INTEGER_32) loc24;
			loc14 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc8 + ((EIF_INTEGER_32) 1L));
		}
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = RTMS_EX_H("What to do: ",12,679754016);
		loc3 = F889_17178(RTCV(tr1), tr2, loc25);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 12L));
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) -12L)) || (EIF_BOOLEAN) (loc3 > loc13))) {
			loc28 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			loc14 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc8 + ((EIF_INTEGER_32) 1L));
			loc9 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc14 - ((EIF_INTEGER_32) 1L));
		} else {
			tr1 = *(EIF_REFERENCE *)(Current);
			tr2 = RTMS_EX_H("Class:",6,1767512890);
			loc9 = F889_17178(RTCV(tr1), tr2, loc25);
			loc9 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc9 - ((EIF_INTEGER_32) 1L));
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc9 == ((EIF_INTEGER_32) -1L)) || (EIF_BOOLEAN) (loc9 > loc13))) {
				loc28 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				loc14 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc8 - ((EIF_INTEGER_32) 12L));
				loc9 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc14 - ((EIF_INTEGER_32) 1L));
			}
		}
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = RTMS_EX_H("Class: ",7,1512540192);
		loc4 = F889_17178(RTCV(tr1), tr2, loc25);
		loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 7L));
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) 7L)) || (EIF_BOOLEAN) (loc4 > loc13))) {
			loc29 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			loc14 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc9 + ((EIF_INTEGER_32) 1L));
			loc10 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc14 - ((EIF_INTEGER_32) 1L));
		} else {
			loc24 = (EIF_INTEGER_32) loc4;
			for (;;) {
				tr1 = *(EIF_REFERENCE *)(Current);
				tc3 = F893_17343(RTCV(tr1), loc24);
				if ((EIF_BOOLEAN)(tc3 == (EIF_CHARACTER_8) '>')) break;
				loc24++;
			}
			loc10 = (EIF_INTEGER_32) loc24;
			loc14 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc10 + ((EIF_INTEGER_32) 1L));
		}
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = RTMS_EX_H("Feature: ",9,1434942240);
		loc5 = F889_17178(RTCV(tr1), tr2, loc25);
		loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc5 + ((EIF_INTEGER_32) 9L));
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc5 == ((EIF_INTEGER_32) 9L)) || (EIF_BOOLEAN) (loc5 > loc13))) {
			loc30 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			loc14 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc10 + ((EIF_INTEGER_32) 1L));
			loc11 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc14 - ((EIF_INTEGER_32) 1L));
		} else {
			loc24 = (EIF_INTEGER_32) loc5;
			for (;;) {
				tr1 = *(EIF_REFERENCE *)(Current);
				tc4 = F893_17343(RTCV(tr1), loc24);
				if ((EIF_BOOLEAN)(tc4 == (EIF_CHARACTER_8) '>')) break;
				loc24++;
			}
			loc11 = (EIF_INTEGER_32) loc24;
			loc14 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc11 + ((EIF_INTEGER_32) 1L));
		}
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = RTMS_EX_H("Line:",5,1769426234);
		loc6 = F889_17178(RTCV(tr1), tr2, loc25);
		loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc6 + ((EIF_INTEGER_32) 6L));
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc6 == ((EIF_INTEGER_32) 6L)) || (EIF_BOOLEAN) (loc6 > loc13))) {
			loc31 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			loc32 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			loc14 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc11 + ((EIF_INTEGER_32) 1L));
		} else {
			loc24 = (EIF_INTEGER_32) loc6;
			for (;;) {
				tr1 = *(EIF_REFERENCE *)(Current);
				tc5 = F893_17343(RTCV(tr1), loc24);
				tb1 = EIF_TEST(isdigit(tc5));
				if ((EIF_BOOLEAN) !tb1) break;
				loc24++;
			}
			loc12 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc24 - ((EIF_INTEGER_32) 1L));
			loc14 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc12 + ((EIF_INTEGER_32) 5L));
		}
		if (loc26) {
			tr1 = *(EIF_REFERENCE *)(Current);
			loc15 = F893_17423(RTCV(tr1), loc1, loc7);
		} else {
			loc15 = RTMS_EX_H("",0,0);
		}
		if (loc27) {
			tr1 = *(EIF_REFERENCE *)(Current);
			loc16 = F893_17423(RTCV(tr1), loc2, loc8);
		} else {
			loc16 = RTMS_EX_H("",0,0);
		}
		if (loc28) {
			tr1 = *(EIF_REFERENCE *)(Current);
			loc17 = F893_17423(RTCV(tr1), loc3, loc9);
		} else {
			loc17 = RTMS_EX_H("",0,0);
		}
		if (loc29) {
			tr1 = *(EIF_REFERENCE *)(Current);
			loc18 = F893_17423(RTCV(tr1), loc4, loc10);
		} else {
			loc18 = RTMS_EX_H("",0,0);
		}
		if (loc30) {
			tr1 = *(EIF_REFERENCE *)(Current);
			loc19 = F893_17423(RTCV(tr1), loc5, loc11);
		} else {
			loc19 = RTMS_EX_H("",0,0);
		}
		if (loc31) {
			tr1 = *(EIF_REFERENCE *)(Current);
			tr1 = F893_17423(RTCV(tr1), loc6, loc12);
			loc20 = F885_17058(RTCV(tr1));
			tr1 = *(EIF_REFERENCE *)(Current);
			tr2 = *(EIF_REFERENCE *)(Current);
			tr3 = RTMS_EX_H("Line:",5,1769426234);
			ti4_1 = F889_17178(RTCV(tr2), tr3, loc25);
			loc21 = F893_17423(RTCV(tr1), (EIF_INTEGER_32) (loc11 + ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)));
		} else {
			loc20 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
			loc21 = RTMS_EX_H("",0,0);
		}
		tr1 = *(EIF_REFERENCE *)(Current);
		loc22 = F893_17423(RTCV(tr1), loc14, loc13);
		tr1 = *(EIF_REFERENCE *)(Current);
		loc23 = F893_17423(RTCV(tr1), loc25, loc13);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr3 = RTMS_EX_H("Error_Code",10,2035117157);
		F987_19042(RTCV(tr2), tr3);
		F1020_19947(RTCV(tr1), loc15, tr2);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr3 = RTMS_EX_H("Error",5,1920632178);
		F987_19042(RTCV(tr2), tr3);
		F1020_19947(RTCV(tr1), loc16, tr2);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr3 = RTMS_EX_H("What_to_do",10,1571397231);
		F987_19042(RTCV(tr2), tr3);
		F1020_19947(RTCV(tr1), loc17, tr2);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr3 = RTMS_EX_H("Class",5,1818840435);
		F987_19042(RTCV(tr2), tr3);
		F1020_19947(RTCV(tr1), loc18, tr2);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr3 = RTMS_EX_H("Feature",7,878169957);
		F987_19042(RTCV(tr2), tr3);
		F1020_19947(RTCV(tr1), loc19, tr2);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		ti8_1 = (EIF_INTEGER_64) loc20;
		tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr3 = RTMS_EX_H("Line",4,1281977957);
		F987_19042(RTCV(tr2), tr3);
		F1020_19948(RTCV(tr1), ti8_1, tr2);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr3 = RTMS_EX_H("Before_Line",11,1271208037);
		F987_19042(RTCV(tr2), tr3);
		F1020_19947(RTCV(tr1), loc21, tr2);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr3 = RTMS_EX_H("After_Line",10,471645285);
		F987_19042(RTCV(tr2), tr3);
		F1020_19947(RTCV(tr1), loc22, tr2);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr3 = RTMS_EX_H("Dump",4,1148546416);
		F987_19042(RTCV(tr2), tr3);
		F1020_19947(RTCV(tr1), loc23, tr2);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		F1019_19937(RTCV(tr1), *(EIF_REFERENCE *)(Current + _REFACS_2_));
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = RTMS_EX_H("Error code:",11,1176261434);
		loc25 = F889_17178(RTCV(tr1), tr2, loc13);
		(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_0_0_0_))++;
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	ti4_1 = F1019_19934(RTCV(tr1));
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
		tr1 = RTLNSMART(eif_non_attached_type(1019));
		F1020_19945(RTCV(tr1));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		tr2 = RTMS_EX_H("",0,0);
		tr3 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr4 = RTMS_EX_H("Error_Code",10,2035117157);
		F987_19042(RTCV(tr3), tr4);
		F1020_19947(RTCV(tr1), tr2, tr3);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		tr2 = RTMS_EX_H("",0,0);
		tr3 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr4 = RTMS_EX_H("Error",5,1920632178);
		F987_19042(RTCV(tr3), tr4);
		F1020_19947(RTCV(tr1), tr2, tr3);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		tr2 = RTMS_EX_H("",0,0);
		tr3 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr4 = RTMS_EX_H("What_to_do",10,1571397231);
		F987_19042(RTCV(tr3), tr4);
		F1020_19947(RTCV(tr1), tr2, tr3);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		tr2 = RTMS_EX_H("",0,0);
		tr3 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr4 = RTMS_EX_H("Class",5,1818840435);
		F987_19042(RTCV(tr3), tr4);
		F1020_19947(RTCV(tr1), tr2, tr3);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		tr2 = RTMS_EX_H("",0,0);
		tr3 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr4 = RTMS_EX_H("Feature",7,878169957);
		F987_19042(RTCV(tr3), tr4);
		F1020_19947(RTCV(tr1), tr2, tr3);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		ti8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) -1L);
		tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr3 = RTMS_EX_H("Line",4,1281977957);
		F987_19042(RTCV(tr2), tr3);
		F1020_19948(RTCV(tr1), ti8_1, tr2);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		tr2 = RTMS_EX_H("",0,0);
		tr3 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr4 = RTMS_EX_H("Before_Line",11,1271208037);
		F987_19042(RTCV(tr3), tr4);
		F1020_19947(RTCV(tr1), tr2, tr3);
		loc22 = *(EIF_REFERENCE *)(Current);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr3 = RTMS_EX_H("After_Line",10,471645285);
		F987_19042(RTCV(tr2), tr3);
		F1020_19947(RTCV(tr1), loc22, tr2);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr3 = RTMS_EX_H("Dump",4,1148546416);
		F987_19042(RTCV(tr2), tr3);
		F1020_19947(RTCV(tr1), loc22, tr2);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		F1019_19937(RTCV(tr1), *(EIF_REFERENCE *)(Current + _REFACS_2_));
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_0_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	}
	RTLE;
}

void EIF_Minit35 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
