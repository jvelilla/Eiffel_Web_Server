/*
 * Code for class EIFFEL_RUNTIME
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ei28.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EIFFEL_RUNTIME}.make */
void F30_3962 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	F30_3968(Current, arg1);
	F30_3969(Current);
	RTLE;
}

/* {EIFFEL_RUNTIME}.error_message */
EIF_REFERENCE F30_3963 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {EIFFEL_RUNTIME}.json_array */
EIF_REFERENCE F30_3965 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {EIFFEL_RUNTIME}.json_object */
EIF_REFERENCE F30_3966 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {EIFFEL_RUNTIME}.runtime_text */
EIF_REFERENCE F30_3967 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {EIFFEL_RUNTIME}.initialize */
void F30_3968 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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

/* {EIFFEL_RUNTIME}.create_error_list */
void F30_3969 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
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
	EIF_BOOLEAN tb5;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	RTLD;
	
	RTLI(10);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc4);
	RTLR(3,loc5);
	RTLR(4,loc6);
	RTLR(5,loc7);
	RTLR(6,loc8);
	RTLR(7,tr2);
	RTLR(8,tr3);
	RTLR(9,tr4);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(1018));
	F1019_19929(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F885_16993(RTCV(tr1));
	loc4 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F885_16993(RTCV(tr1));
	loc5 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F885_16993(RTCV(tr1));
	loc6 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F885_16993(RTCV(tr1));
	loc7 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F885_16993(RTCV(tr1));
	loc8 = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(1019));
	F1020_19945(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	loc11 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = *(EIF_REFERENCE *)(Current);
	tr3 = RTMS_EX_H("------",6,846754605);
	ti4_1 = F889_17178(RTCV(tr2), tr3, ((EIF_INTEGER_32) 1L));
	tr1 = F893_17423(RTCV(tr1), ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 5L)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = RTMS_EX_H("Effect<br>",10,438739518);
	loc10 = F889_17178(RTCV(tr1), tr2, ((EIF_INTEGER_32) 1L));
	loc10 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc10 + ((EIF_INTEGER_32) 10L));
	if (F30_3970(Current, loc10)) {
		loc10 = F30_3971(Current, loc10);
	}
	if (F30_3973(Current, loc10)) {
		loc10 = F30_3972(Current, loc10);
	}
	loc10 = F30_3975(Current, loc10);
	for (;;) {
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN) (loc10 > ti4_1)) break;
		if (F30_3970(Current, loc10)) {
			loc10 = F30_3971(Current, loc10);
		}
		if (F30_3973(Current, loc10)) {
			loc10 = F30_3972(Current, loc10);
		}
		loc9 = (EIF_INTEGER_32) loc10;
		for (;;) {
			tb1 = '\01';
			if (!F30_3970(Current, loc9)) {
				tr1 = *(EIF_REFERENCE *)(Current);
				tc1 = F893_17343(RTCV(tr1), loc9);
				tb1 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '<');
			}
			if (tb1) break;
			loc9++;
		}
		tr1 = *(EIF_REFERENCE *)(Current);
		tr1 = F893_17423(RTCV(tr1), loc10, (EIF_INTEGER_32) (loc9 - ((EIF_INTEGER_32) 1L)));
		F893_17377(RTCV(loc4), tr1);
		loc10 = (EIF_INTEGER_32) loc9;
		loc10 = F30_3971(Current, loc10);
		if (F30_3970(Current, loc10)) {
			loc10 = F30_3971(Current, loc10);
		}
		if (F30_3973(Current, loc10)) {
			loc10 = F30_3972(Current, loc10);
		}
		loc9 = (EIF_INTEGER_32) loc10;
		for (;;) {
			tb2 = '\01';
			if (!F30_3970(Current, loc9)) {
				tr1 = *(EIF_REFERENCE *)(Current);
				tc1 = F893_17343(RTCV(tr1), loc9);
				tb2 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '<');
			}
			if (tb2) break;
			loc9++;
		}
		tr1 = *(EIF_REFERENCE *)(Current);
		tr1 = F893_17423(RTCV(tr1), loc10, (EIF_INTEGER_32) (loc9 - ((EIF_INTEGER_32) 1L)));
		F893_17377(RTCV(loc5), tr1);
		loc10 = (EIF_INTEGER_32) loc9;
		loc10 = F30_3971(Current, loc10);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCV(loc5)+ _LNGOFF_1_1_0_2_);
		loc1 = F889_17174(RTCV(loc5), (EIF_CHARACTER_8) '@', ti4_2);
		if ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L))) {
			ti4_2 = *(EIF_INTEGER_32 *)(RTCV(loc5)+ _LNGOFF_1_1_0_2_);
			loc6 = F893_17423(RTCV(loc5), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)), ti4_2);
			loc5 = F893_17423(RTCV(loc5), ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 2L)));
		}
		loc9 = (EIF_INTEGER_32) loc10;
		for (;;) {
			tb3 = '\01';
			if (!F30_3970(Current, loc9)) {
				tr1 = *(EIF_REFERENCE *)(Current);
				tc1 = F893_17343(RTCV(tr1), loc9);
				tb3 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '<');
			}
			if (tb3) break;
			loc9++;
		}
		tr1 = *(EIF_REFERENCE *)(Current);
		tr1 = F893_17423(RTCV(tr1), loc10, (EIF_INTEGER_32) (loc9 - ((EIF_INTEGER_32) 1L)));
		F893_17377(RTCV(loc7), tr1);
		loc10 = (EIF_INTEGER_32) loc9;
		loc10 = F30_3971(Current, loc10);
		loc10 += ((EIF_INTEGER_32) 4L);
		if (F30_3970(Current, loc10)) {
			loc10 = F30_3971(Current, loc10);
		}
		if (F30_3973(Current, loc10)) {
			loc10 = F30_3972(Current, loc10);
		}
		tr1 = *(EIF_REFERENCE *)(Current);
		tc1 = F893_17343(RTCV(tr1), loc10);
		if ((EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '<')) {
			loc9 = (EIF_INTEGER_32) loc10;
			for (;;) {
				tb4 = '\01';
				if (!F30_3970(Current, loc9)) {
					tr1 = *(EIF_REFERENCE *)(Current);
					tc1 = F893_17343(RTCV(tr1), loc9);
					tb4 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '<');
				}
				if (tb4) break;
				loc9++;
			}
			tr1 = *(EIF_REFERENCE *)(Current);
			tr1 = F893_17423(RTCV(tr1), loc10, (EIF_INTEGER_32) (loc9 - ((EIF_INTEGER_32) 1L)));
			F893_17377(RTCV(loc7), tr1);
			loc10 = (EIF_INTEGER_32) loc9;
			loc10 = F30_3971(Current, loc10);
			loc10 += ((EIF_INTEGER_32) 4L);
		}
		if (F30_3970(Current, loc10)) {
			loc10 = F30_3971(Current, loc10);
		}
		if (F30_3973(Current, loc10)) {
			loc10 = F30_3972(Current, loc10);
		}
		loc9 = (EIF_INTEGER_32) loc10;
		for (;;) {
			if (F30_3970(Current, loc9)) break;
			loc9++;
		}
		tr1 = *(EIF_REFERENCE *)(Current);
		tr1 = F893_17423(RTCV(tr1), loc10, (EIF_INTEGER_32) (loc9 - ((EIF_INTEGER_32) 1L)));
		F893_17377(RTCV(loc4), tr1);
		loc10 = (EIF_INTEGER_32) loc9;
		loc10 = F30_3971(Current, loc10);
		tr1 = *(EIF_REFERENCE *)(Current);
		tc1 = F893_17343(RTCV(tr1), loc10);
		if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '(')) {
			loc9 = (EIF_INTEGER_32) loc10;
			for (;;) {
				tr1 = *(EIF_REFERENCE *)(Current);
				tc1 = F893_17343(RTCV(tr1), loc9);
				if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) ')')) break;
				loc9++;
			}
			tr1 = *(EIF_REFERENCE *)(Current);
			tr1 = F893_17423(RTCV(tr1), loc10, loc9);
			F893_17377(RTCV(loc5), tr1);
			loc10 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc9 + ((EIF_INTEGER_32) 1L));
			loc10 = F30_3971(Current, loc10);
		}
		loc9 = (EIF_INTEGER_32) loc10;
		for (;;) {
			tb5 = '\01';
			if (!F30_3970(Current, loc9)) {
				tr1 = *(EIF_REFERENCE *)(Current);
				tc2 = F893_17343(RTCV(tr1), loc9);
				tb5 = (EIF_BOOLEAN)(tc2 == (EIF_CHARACTER_8) '<');
			}
			if (tb5) break;
			loc9++;
		}
		tr1 = *(EIF_REFERENCE *)(Current);
		tr1 = F893_17423(RTCV(tr1), loc10, (EIF_INTEGER_32) (loc9 - ((EIF_INTEGER_32) 1L)));
		F893_17377(RTCV(loc7), tr1);
		loc10 = (EIF_INTEGER_32) loc9;
		loc10 = F30_3971(Current, loc10);
		loc9 = (EIF_INTEGER_32) loc10;
		for (;;) {
			tr1 = *(EIF_REFERENCE *)(Current);
			tc2 = F893_17343(RTCV(tr1), loc9);
			if ((EIF_BOOLEAN)(tc2 == (EIF_CHARACTER_8) '<')) break;
			loc9++;
		}
		tr1 = *(EIF_REFERENCE *)(Current);
		tr1 = F893_17423(RTCV(tr1), loc10, (EIF_INTEGER_32) (loc9 - ((EIF_INTEGER_32) 1L)));
		F893_17377(RTCV(loc8), tr1);
		loc10 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc9 + ((EIF_INTEGER_32) 4L));
		if (F30_3970(Current, loc10)) {
			loc10 = F30_3971(Current, loc10);
		}
		if (F30_3973(Current, loc10)) {
			loc10 = F30_3972(Current, loc10);
		}
		if (F30_3974(Current, loc10)) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
			tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr3 = RTMS_EX_H("Class",5,1818840435);
			F987_19042(RTCV(tr2), tr3);
			F1020_19947(RTCV(tr1), loc4, tr2);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
			tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr3 = RTMS_EX_H("Feature",7,878169957);
			F987_19042(RTCV(tr2), tr3);
			F1020_19947(RTCV(tr1), loc5, tr2);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
			tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr3 = RTMS_EX_H("Routine",7,494555237);
			F987_19042(RTCV(tr2), tr3);
			F1020_19947(RTCV(tr1), loc6, tr2);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
			tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr3 = RTMS_EX_H("Message",7,88473189);
			F987_19042(RTCV(tr2), tr3);
			F1020_19947(RTCV(tr1), loc7, tr2);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
			tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr3 = RTMS_EX_H("Effect",6,1854363508);
			F987_19042(RTCV(tr2), tr3);
			F1020_19947(RTCV(tr1), loc8, tr2);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			F1019_19937(RTCV(tr1), *(EIF_REFERENCE *)(Current + _REFACS_2_));
			loc11++;
			tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
			F885_16993(RTCV(tr1));
			loc4 = (EIF_REFERENCE) tr1;
			tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
			F885_16993(RTCV(tr1));
			loc5 = (EIF_REFERENCE) tr1;
			tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
			F885_16993(RTCV(tr1));
			loc6 = (EIF_REFERENCE) tr1;
			tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
			F885_16993(RTCV(tr1));
			loc7 = (EIF_REFERENCE) tr1;
			tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
			F885_16993(RTCV(tr1));
			loc8 = (EIF_REFERENCE) tr1;
			tr1 = RTLNSMART(eif_non_attached_type(1019));
			F1020_19945(RTCV(tr1));
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
			loc10 = F30_3975(Current, loc10);
		}
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	ti4_2 = F1019_19934(RTCV(tr1));
	if ((EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 0L))) {
		tr1 = RTLNSMART(eif_non_attached_type(1019));
		F1020_19945(RTCV(tr1));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
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
		tr2 = RTMS_EX_H("",0,0);
		tr3 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr4 = RTMS_EX_H("Routine",7,494555237);
		F987_19042(RTCV(tr3), tr4);
		F1020_19947(RTCV(tr1), tr2, tr3);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		tr2 = RTMS_EX_H("",0,0);
		tr3 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr4 = RTMS_EX_H("Message",7,88473189);
		F987_19042(RTCV(tr3), tr4);
		F1020_19947(RTCV(tr1), tr2, tr3);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		tr2 = RTMS_EX_H("",0,0);
		tr3 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr4 = RTMS_EX_H("Effect",6,1854363508);
		F987_19042(RTCV(tr3), tr4);
		F1020_19947(RTCV(tr1), tr2, tr3);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		F1019_19937(RTCV(tr1), *(EIF_REFERENCE *)(Current + _REFACS_2_));
		loc11++;
	}
	RTLE;
}

/* {EIFFEL_RUNTIME}.space_checker */
EIF_BOOLEAN F30_3970 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	tb1 = '\0';
	tr1 = *(EIF_REFERENCE *)(Current);
	tc1 = F893_17343(RTCV(tr1), arg1);
	if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) ' ')) {
		tr1 = *(EIF_REFERENCE *)(Current);
		tc1 = F893_17343(RTCV(tr1), (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)));
		tb1 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) ' ');
	}
	if (tb1) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTLE;
	return Result;
}

/* {EIFFEL_RUNTIME}.skip_spaces */
EIF_INTEGER_32 F30_3971 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	loc1 = (EIF_INTEGER_32) arg1;
	for (;;) {
		tr1 = *(EIF_REFERENCE *)(Current);
		tc1 = F893_17343(RTCV(tr1), loc1);
		if ((EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) ' ')) break;
		loc1++;
	}
	RTLE;
	return (EIF_INTEGER_32) loc1;
}

/* {EIFFEL_RUNTIME}.skip_line_end */
EIF_INTEGER_32 F30_3972 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 4L));
}

/* {EIFFEL_RUNTIME}.line_end_checker */
EIF_BOOLEAN F30_3973 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	tb1 = '\0';
	tb2 = '\0';
	tb3 = '\0';
	tr1 = *(EIF_REFERENCE *)(Current);
	tc1 = F893_17343(RTCV(tr1), arg1);
	if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '<')) {
		tr1 = *(EIF_REFERENCE *)(Current);
		tc1 = F893_17343(RTCV(tr1), (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)));
		tb3 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) 'b');
	}
	if (tb3) {
		tr1 = *(EIF_REFERENCE *)(Current);
		tc1 = F893_17343(RTCV(tr1), (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 2L)));
		tb2 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) 'r');
	}
	if (tb2) {
		tr1 = *(EIF_REFERENCE *)(Current);
		tc1 = F893_17343(RTCV(tr1), (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 3L)));
		tb1 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '>');
	}
	if (tb1) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTLE;
	return Result;
}

/* {EIFFEL_RUNTIME}.dash_checker */
EIF_BOOLEAN F30_3974 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	tb1 = '\0';
	tb2 = '\0';
	tr1 = *(EIF_REFERENCE *)(Current);
	tc1 = F893_17343(RTCV(tr1), arg1);
	if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '-')) {
		tr1 = *(EIF_REFERENCE *)(Current);
		tc1 = F893_17343(RTCV(tr1), (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)));
		tb2 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '-');
	}
	if (tb2) {
		tr1 = *(EIF_REFERENCE *)(Current);
		tc1 = F893_17343(RTCV(tr1), (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 2L)));
		tb1 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '-');
	}
	if (tb1) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTLE;
	return Result;
}

/* {EIFFEL_RUNTIME}.skip_dash */
EIF_INTEGER_32 F30_3975 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	loc1 = (EIF_INTEGER_32) arg1;
	for (;;) {
		tr1 = *(EIF_REFERENCE *)(Current);
		tc1 = F893_17343(RTCV(tr1), loc1);
		if ((EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '-')) break;
		loc1++;
	}
	tr1 = *(EIF_REFERENCE *)(Current);
	tc2 = F893_17343(RTCV(tr1), loc1);
	if ((EIF_BOOLEAN)(tc2 == (EIF_CHARACTER_8) '<')) {
		loc1 += ((EIF_INTEGER_32) 4L);
	}
	RTLE;
	return (EIF_INTEGER_32) loc1;
}

void EIF_Minit28 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
