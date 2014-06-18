/*
 * Code for class EIFFEL_WARNINGS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ei34.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EIFFEL_WARNINGS}.make */
void F36_4011 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	F36_4016(Current, arg1);
	tr1 = RTLNSMART(eif_non_attached_type(1019));
	F1020_19945(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	F36_4017(Current);
	RTLE;
}

/* {EIFFEL_WARNINGS}.warning_message */
EIF_REFERENCE F36_4012 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {EIFFEL_WARNINGS}.json_array */
EIF_REFERENCE F36_4014 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {EIFFEL_WARNINGS}.json_object */
EIF_REFERENCE F36_4015 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {EIFFEL_WARNINGS}.initialize */
void F36_4016 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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

/* {EIFFEL_WARNINGS}.create_warning_list */
void F36_4017 (EIF_REFERENCE Current)
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
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc15 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc16 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc17 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc18 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc19 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc20 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc21 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc22 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc23 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc24 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc25 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc26 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_CHARACTER_8 tc3;
	EIF_CHARACTER_8 tc4;
	RTLD;
	
	RTLI(12);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,loc11);
	RTLR(4,loc12);
	RTLR(5,loc13);
	RTLR(6,loc14);
	RTLR(7,loc15);
	RTLR(8,loc16);
	RTLR(9,loc17);
	RTLR(10,tr3);
	RTLR(11,tr4);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(1018));
	F1019_19929(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_0_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = RTMS_EX_H("Warning code",12,530688357);
	loc19 = F889_17178(RTCV(tr1), tr2, ((EIF_INTEGER_32) 1L));
	for (;;) {
		if ((EIF_BOOLEAN)(loc19 == ((EIF_INTEGER_32) 0L))) break;
		tr1 = RTLNSMART(eif_non_attached_type(1019));
		F1020_19945(RTCV(tr1));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
		loc22 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		loc23 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		loc24 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		loc25 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		loc26 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = RTMS_EX_H("Warning code: ",14,756688672);
		loc1 = F889_17178(RTCV(tr1), tr2, loc19);
		loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 14L));
		if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 14L))) {
			loc22 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			loc21 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc21 - ((EIF_INTEGER_32) 1L));
			tr1 = *(EIF_REFERENCE *)(Current);
			loc20 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
		} else {
			loc18 = (EIF_INTEGER_32) loc1;
			for (;;) {
				tr1 = *(EIF_REFERENCE *)(Current);
				tc1 = F893_17343(RTCV(tr1), loc18);
				if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '>')) break;
				loc18++;
			}
			loc6 = (EIF_INTEGER_32) loc18;
			loc21 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc6 + ((EIF_INTEGER_32) 1L));
			tr1 = *(EIF_REFERENCE *)(Current);
			tr2 = RTMS_EX_H("-----",5,758281005);
			loc20 = F889_17178(RTCV(tr1), tr2, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)));
			loc20 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc20 - ((EIF_INTEGER_32) 1L));
		}
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = RTMS_EX_H("Warning: ",9,176836128);
		loc2 = F889_17178(RTCV(tr1), tr2, loc19);
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 9L));
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 9L)) || (EIF_BOOLEAN) (loc2 > loc20))) {
			loc23 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			loc21 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc6 + ((EIF_INTEGER_32) 1L));
			loc7 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc21 - ((EIF_INTEGER_32) 1L));
		} else {
			loc18 = (EIF_INTEGER_32) loc2;
			for (;;) {
				tr1 = *(EIF_REFERENCE *)(Current);
				tc2 = F893_17343(RTCV(tr1), loc18);
				if ((EIF_BOOLEAN)(tc2 == (EIF_CHARACTER_8) '>')) break;
				loc18++;
			}
			loc7 = (EIF_INTEGER_32) loc18;
			loc21 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc7 + ((EIF_INTEGER_32) 1L));
		}
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = RTMS_EX_H("What to do: ",12,679754016);
		loc3 = F889_17178(RTCV(tr1), tr2, loc19);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 12L));
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) -12L)) || (EIF_BOOLEAN) (loc3 > loc20))) {
			loc24 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			loc21 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc7 + ((EIF_INTEGER_32) 1L));
			loc8 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc21 - ((EIF_INTEGER_32) 1L));
		} else {
			tr1 = *(EIF_REFERENCE *)(Current);
			tr2 = RTMS_EX_H("Class:",6,1767512890);
			loc8 = F889_17178(RTCV(tr1), tr2, loc19);
			loc8 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc8 - ((EIF_INTEGER_32) 1L));
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc8 == ((EIF_INTEGER_32) -1L)) || (EIF_BOOLEAN) (loc8 > loc20))) {
				loc24 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				loc21 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc7 - ((EIF_INTEGER_32) 12L));
				loc8 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc21 - ((EIF_INTEGER_32) 1L));
			}
		}
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = RTMS_EX_H("Class: ",7,1512540192);
		loc4 = F889_17178(RTCV(tr1), tr2, loc19);
		loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 7L));
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) 7L)) || (EIF_BOOLEAN) (loc4 > loc20))) {
			loc25 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			loc21 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc8 + ((EIF_INTEGER_32) 1L));
			loc9 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc21 - ((EIF_INTEGER_32) 1L));
		} else {
			loc18 = (EIF_INTEGER_32) loc4;
			for (;;) {
				tr1 = *(EIF_REFERENCE *)(Current);
				tc3 = F893_17343(RTCV(tr1), loc18);
				if ((EIF_BOOLEAN)(tc3 == (EIF_CHARACTER_8) '>')) break;
				loc18++;
			}
			loc9 = (EIF_INTEGER_32) loc18;
			loc21 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc9 + ((EIF_INTEGER_32) 1L));
		}
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = RTMS_EX_H("Feature: ",9,1434942240);
		loc5 = F889_17178(RTCV(tr1), tr2, loc19);
		loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc5 + ((EIF_INTEGER_32) 9L));
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc5 == ((EIF_INTEGER_32) 9L)) || (EIF_BOOLEAN) (loc5 > loc20))) {
			loc26 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			loc21 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc9 + ((EIF_INTEGER_32) 1L));
			loc10 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc21 - ((EIF_INTEGER_32) 1L));
		} else {
			loc18 = (EIF_INTEGER_32) loc5;
			for (;;) {
				tr1 = *(EIF_REFERENCE *)(Current);
				tc4 = F893_17343(RTCV(tr1), loc18);
				if ((EIF_BOOLEAN)(tc4 == (EIF_CHARACTER_8) '>')) break;
				loc18++;
			}
			loc10 = (EIF_INTEGER_32) loc18;
			loc21 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc10 + ((EIF_INTEGER_32) 1L));
		}
		if (loc22) {
			tr1 = *(EIF_REFERENCE *)(Current);
			loc11 = F893_17423(RTCV(tr1), loc1, loc6);
		} else {
			loc11 = RTMS_EX_H("",0,0);
		}
		if (loc23) {
			tr1 = *(EIF_REFERENCE *)(Current);
			loc12 = F893_17423(RTCV(tr1), loc2, loc7);
		} else {
			loc12 = RTMS_EX_H("",0,0);
		}
		if (loc24) {
			tr1 = *(EIF_REFERENCE *)(Current);
			loc13 = F893_17423(RTCV(tr1), loc3, loc8);
		} else {
			loc13 = RTMS_EX_H("",0,0);
		}
		if (loc25) {
			tr1 = *(EIF_REFERENCE *)(Current);
			loc14 = F893_17423(RTCV(tr1), loc4, loc9);
		} else {
			loc14 = RTMS_EX_H("",0,0);
		}
		if (loc26) {
			tr1 = *(EIF_REFERENCE *)(Current);
			loc15 = F893_17423(RTCV(tr1), loc5, loc10);
		} else {
			loc15 = RTMS_EX_H("",0,0);
		}
		tr1 = *(EIF_REFERENCE *)(Current);
		loc16 = F893_17423(RTCV(tr1), loc21, loc20);
		tr1 = *(EIF_REFERENCE *)(Current);
		loc17 = F893_17423(RTCV(tr1), loc19, loc20);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr3 = RTMS_EX_H("Warning_Code",12,2141781093);
		F987_19042(RTCV(tr2), tr3);
		F1020_19947(RTCV(tr1), loc11, tr2);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr3 = RTMS_EX_H("Warning",7,735446375);
		F987_19042(RTCV(tr2), tr3);
		F1020_19947(RTCV(tr1), loc12, tr2);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr3 = RTMS_EX_H("What_to_do",10,1571397231);
		F987_19042(RTCV(tr2), tr3);
		F1020_19947(RTCV(tr1), loc13, tr2);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr3 = RTMS_EX_H("Class",5,1818840435);
		F987_19042(RTCV(tr2), tr3);
		F1020_19947(RTCV(tr1), loc14, tr2);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr3 = RTMS_EX_H("Feature",7,878169957);
		F987_19042(RTCV(tr2), tr3);
		F1020_19947(RTCV(tr1), loc15, tr2);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr3 = RTMS_EX_H("After_Feature",13,190467685);
		F987_19042(RTCV(tr2), tr3);
		F1020_19947(RTCV(tr1), loc16, tr2);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr3 = RTMS_EX_H("Dump",4,1148546416);
		F987_19042(RTCV(tr2), tr3);
		F1020_19947(RTCV(tr1), loc17, tr2);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		F1019_19937(RTCV(tr1), *(EIF_REFERENCE *)(Current + _REFACS_2_));
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = RTMS_EX_H("Warning code",12,530688357);
		loc19 = F889_17178(RTCV(tr1), tr2, loc20);
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
		tr4 = RTMS_EX_H("Warning_Code",12,2141781093);
		F987_19042(RTCV(tr3), tr4);
		F1020_19947(RTCV(tr1), tr2, tr3);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		tr2 = RTMS_EX_H("",0,0);
		tr3 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr4 = RTMS_EX_H("Warning",7,735446375);
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
		loc16 = *(EIF_REFERENCE *)(Current);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr3 = RTMS_EX_H("After_Feature",13,190467685);
		F987_19042(RTCV(tr2), tr3);
		F1020_19947(RTCV(tr1), loc16, tr2);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr3 = RTMS_EX_H("Dump",4,1148546416);
		F987_19042(RTCV(tr2), tr3);
		F1020_19947(RTCV(tr1), loc16, tr2);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		F1019_19937(RTCV(tr1), *(EIF_REFERENCE *)(Current + _REFACS_2_));
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_0_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	}
	RTLE;
}

void EIF_Minit34 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
