/*
 * Code for class EIFFEL_CLIENT_SUPPLIER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ei32.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EIFFEL_CLIENT_SUPPLIER}.make */
void F34_4000 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	
	RTGC;
	F34_4006(Current, arg1, arg2);
	F34_4007(Current);
	RTLE;
}

/* {EIFFEL_CLIENT_SUPPLIER}.message */
EIF_REFERENCE F34_4001 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {EIFFEL_CLIENT_SUPPLIER}.class_name */
EIF_REFERENCE F34_4002 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {EIFFEL_CLIENT_SUPPLIER}.json_array */
EIF_REFERENCE F34_4003 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {EIFFEL_CLIENT_SUPPLIER}.class_string */
EIF_REFERENCE F34_4004 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {EIFFEL_CLIENT_SUPPLIER}.initialize */
void F34_4006 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg2;
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = RTMS_EX_H("\012",1,10);
	tr3 = RTMS_EX_H("<br>",4,1013084734);
	F893_17354(RTCV(tr1), tr2, tr3);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_0_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
	RTLE;
}

/* {EIFFEL_CLIENT_SUPPLIER}.create_list */
void F34_4007 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc4);
	RTLR(3,tr2);
	RTLR(4,tr3);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(1018));
	F1019_19929(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_0_0_0_);
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
		loc2 = (EIF_INTEGER_32) loc1;
		for (;;) {
			tb2 = '\01';
			tr1 = *(EIF_REFERENCE *)(Current);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
			if (!(EIF_BOOLEAN) (loc2 > ti4_1)) {
				tr1 = *(EIF_REFERENCE *)(Current);
				tc1 = F893_17343(RTCV(tr1), loc2);
				tb2 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '<');
			}
			if (tb2) break;
			loc2++;
		}
		tr1 = RTLNS(1019, 1019, _OBJSIZ_1_0_0_0_0_0_0_0_);
		F1020_19945(RTCV(tr1));
		loc4 = (EIF_REFERENCE) tr1;
		tr1 = *(EIF_REFERENCE *)(Current);
		tr1 = F893_17423(RTCV(tr1), loc1, (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L)));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		tr2 = RTMS_EX_H("*",1,42);
		tb3 = F885_17037(RTCV(tr1), tr2);
		if (tb3) {
			tr1 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H("Deferred",8,1432531812);
			F987_19042(RTCV(tr1), tr2);
			F1020_19951(RTCV(loc4), (EIF_BOOLEAN) 1, tr1);
		} else {
			tr1 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H("Deferred",8,1432531812);
			F987_19042(RTCV(tr1), tr2);
			F1020_19951(RTCV(loc4), (EIF_BOOLEAN) 0, tr1);
		}
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		tr2 = RTMS_EX_H("*",1,42);
		tr3 = RTMS_EX_H("",0,0);
		F893_17354(RTCV(tr1), tr2, tr3);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr3 = RTMS_EX_H("Class_Name",10,1594420837);
		F987_19042(RTCV(tr2), tr3);
		F1020_19947(RTCV(loc4), tr1, tr2);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		F1019_19937(RTCV(tr1), loc4);
		loc3++;
		loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 4L));
	}
	RTLE;
}

void EIF_Minit32 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
