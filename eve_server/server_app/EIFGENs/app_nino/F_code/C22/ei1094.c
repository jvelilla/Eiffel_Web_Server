/*
 * Code for class EIFFEL_FEATURE_CALLERS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ei1094.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EIFFEL_FEATURE_CALLERS}.make */
void F2_22962 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,Current);
	
	RTGC;
	F2_22969(Current, arg1, arg2, arg3);
	F2_22970(Current);
	RTLE;
}

/* {EIFFEL_FEATURE_CALLERS}.message */
EIF_REFERENCE F2_22963 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {EIFFEL_FEATURE_CALLERS}.class_name */
EIF_REFERENCE F2_22964 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {EIFFEL_FEATURE_CALLERS}.feature_name */
EIF_REFERENCE F2_22965 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {EIFFEL_FEATURE_CALLERS}.json_array */
EIF_REFERENCE F2_22966 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {EIFFEL_FEATURE_CALLERS}.class_string */
EIF_REFERENCE F2_22967 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_4_);
}


/* {EIFFEL_FEATURE_CALLERS}.initialize */
void F2_22969 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTLD;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	RTLR(3,arg3);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLR(6,tr3);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg2;
	RTAR(Current, arg3);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) arg3;
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = RTMS_EX_H("\012",1,10);
	tr3 = RTMS_EX_H("<br>",4,1013084734);
	F893_17354(RTCV(tr1), tr2, tr3);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = RTMS_EX_H("\011",1,9);
	tr3 = RTMS_EX_H("$",1,36);
	F893_17354(RTCV(tr1), tr2, tr3);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = RTMS_EX_H("\\t",2,23668);
	tr3 = RTMS_EX_H("$",1,36);
	F893_17354(RTCV(tr1), tr2, tr3);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_0_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTLE;
}

/* {EIFFEL_FEATURE_CALLERS}.create_list */
void F2_22970 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc4);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,loc5);
	RTLR(6,loc6);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(1018));
	F1019_19929(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current);
	tc1 = F893_17343(RTCV(tr1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_0_0_0_));
	if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '<')) {
	} else {
		loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_0_0_0_);
		for (;;) {
			tb1 = '\01';
			tr1 = *(EIF_REFERENCE *)(Current);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
			if (!(EIF_BOOLEAN) (loc1 > ti4_1)) {
				tr1 = *(EIF_REFERENCE *)(Current);
				tc1 = F893_17343(RTCV(tr1), loc1);
				tb1 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '<');
			}
			if (tb1) break;
			loc1++;
		}
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_0_0_0_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 4L));
		loc3 = F2_22971(Current);
		loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_0_0_0_);
		for (;;) {
			tb2 = '\01';
			tb3 = '\01';
			tr1 = *(EIF_REFERENCE *)(Current);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
			if (!(EIF_BOOLEAN) (loc1 > ti4_1)) {
				tr1 = *(EIF_REFERENCE *)(Current);
				tc1 = F893_17343(RTCV(tr1), loc1);
				tb3 = (EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '$');
			}
			if (!tb3) {
				tb2 = (EIF_BOOLEAN)(loc3 != ((EIF_INTEGER_32) 1L));
			}
			if (tb2) break;
			tr1 = RTLNS(1019, 1019, _OBJSIZ_1_0_0_0_0_0_0_0_);
			F1020_19945(RTCV(tr1));
			loc4 = (EIF_REFERENCE) tr1;
			loc3 = F2_22971(Current);
			(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_0_0_0_)) += loc3;
			loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_0_0_0_);
			for (;;) {
				tb3 = '\01';
				tr1 = *(EIF_REFERENCE *)(Current);
				ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
				if (!(EIF_BOOLEAN) (loc2 > ti4_1)) {
					tr1 = *(EIF_REFERENCE *)(Current);
					tc1 = F893_17343(RTCV(tr1), loc2);
					tb3 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '<');
				}
				if (tb3) break;
				loc2++;
			}
			tr1 = *(EIF_REFERENCE *)(Current);
			ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_0_0_0_);
			tr1 = F893_17423(RTCV(tr1), ti4_1, (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L)));
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) tr1;
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
			tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr3 = RTMS_EX_H("Class_Name",10,1594420837);
			F987_19042(RTCV(tr2), tr3);
			F1020_19947(RTCV(loc4), tr1, tr2);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_0_0_0_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 4L));
			loc3 = F2_22971(Current);
			tr1 = RTLNS(1018, 1018, _OBJSIZ_1_0_0_0_0_0_0_0_);
			F1019_19929(RTCV(tr1));
			loc5 = (EIF_REFERENCE) tr1;
			for (;;) {
				if ((EIF_BOOLEAN)(loc3 != ((EIF_INTEGER_32) 2L))) break;
				(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_0_0_0_)) += loc3;
				loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_0_0_0_);
				for (;;) {
					tb4 = '\01';
					tr1 = *(EIF_REFERENCE *)(Current);
					ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
					if (!(EIF_BOOLEAN) (loc2 > ti4_1)) {
						tr1 = *(EIF_REFERENCE *)(Current);
						tc1 = F893_17343(RTCV(tr1), loc2);
						tb4 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '<');
					}
					if (tb4) break;
					loc2++;
				}
				tr1 = *(EIF_REFERENCE *)(Current);
				ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_0_0_0_);
				tr1 = F893_17423(RTCV(tr1), ti4_1, (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L)));
				RTAR(Current, tr1);
				*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
				tr1 = RTLNS(1019, 1019, _OBJSIZ_1_0_0_0_0_0_0_0_);
				F1020_19945(RTCV(tr1));
				loc6 = (EIF_REFERENCE) tr1;
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
				tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
				tr3 = RTMS_EX_H("Feature_Name",12,1413962085);
				F987_19042(RTCV(tr2), tr3);
				F1020_19947(RTCV(loc6), tr1, tr2);
				F1019_19937(RTCV(loc5), loc6);
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_0_0_0_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 4L));
				loc3 = F2_22971(Current);
			}
			tr1 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H("Features",8,1473609075);
			F987_19042(RTCV(tr1), tr2);
			F1020_19946(RTCV(loc4), loc5, tr1);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			F1019_19937(RTCV(tr1), loc4);
		}
	}
	RTLE;
}

/* {EIFFEL_FEATURE_CALLERS}.get_count */
EIF_INTEGER_32 F2_22971 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_0_0_0_);
	for (;;) {
		tr1 = *(EIF_REFERENCE *)(Current);
		tc1 = F893_17343(RTCV(tr1), loc1);
		if ((EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '$')) break;
		loc2++;
		loc1++;
	}
	RTLE;
	return (EIF_INTEGER_32) loc2;
}

void EIF_Minit1094 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
