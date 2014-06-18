/*
 * Code for class EIFFEL_ARCHITECTURE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ei30.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EIFFEL_ARCHITECTURE}.make */
void F32_3981 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,tr1);
	
	RTGC;
	F32_3988(Current, arg1, arg2, arg3);
	tr1 = F32_3989(Current, ((EIF_INTEGER_32) 0L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {EIFFEL_ARCHITECTURE}.message */
EIF_REFERENCE F32_3982 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {EIFFEL_ARCHITECTURE}.class_name */
EIF_REFERENCE F32_3983 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {EIFFEL_ARCHITECTURE}.json_arr */
EIF_REFERENCE F32_3984 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {EIFFEL_ARCHITECTURE}.class_string */
EIF_REFERENCE F32_3985 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {EIFFEL_ARCHITECTURE}.initialize */
void F32_3988 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3)
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
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = RTMS_EX_H("\011",1,9);
	tr3 = RTMS_EX_H("$",1,36);
	F893_17354(RTCV(tr1), tr2, tr3);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = RTMS_EX_H("\\t",2,23668);
	tr3 = RTMS_EX_H("$",1,36);
	F893_17354(RTCV(tr1), tr2, tr3);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_0_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_0_0_0_) = (EIF_INTEGER_32) arg3;
	RTLE;
}

/* {EIFFEL_ARCHITECTURE}.create_architecture */
EIF_REFERENCE F32_3989 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc3);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,loc5);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLR(6,loc4);
	
	RTGC;
	tr1 = RTLNS(1018, 1018, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F1019_19929(RTCV(tr1));
	loc3 = (EIF_REFERENCE) tr1;
	loc2 = F32_3990(Current);
	for (;;) {
		if ((EIF_BOOLEAN)(loc2 != (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)))) break;
		tr1 = RTLNS(1019, 1019, _OBJSIZ_1_0_0_0_0_0_0_0_);
		F1020_19945(RTCV(tr1));
		loc5 = (EIF_REFERENCE) tr1;
		(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_0_0_1_)) += loc2;
		loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_0_0_1_);
		for (;;) {
			tr1 = *(EIF_REFERENCE *)(Current);
			tc1 = F893_17343(RTCV(tr1), loc1);
			if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '<')) break;
			loc1++;
		}
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_0_0_1_);
		tr1 = F893_17423(RTCV(tr1), ti4_1, (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		tr2 = RTMS_EX_H("*",1,42);
		tb1 = F885_17037(RTCV(tr1), tr2);
		if (tb1) {
			tr1 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H("Deferred",8,1432531812);
			F987_19042(RTCV(tr1), tr2);
			F1020_19951(RTCV(loc5), (EIF_BOOLEAN) 1, tr1);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			tr2 = RTMS_EX_H("*",1,42);
			tr3 = RTMS_EX_H("",0,0);
			F893_17354(RTCV(tr1), tr2, tr3);
		} else {
			tr1 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H("Deferred",8,1432531812);
			F987_19042(RTCV(tr1), tr2);
			F1020_19951(RTCV(loc5), (EIF_BOOLEAN) 0, tr1);
		}
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_0_0_1_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 4L));
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr3 = RTMS_EX_H("Class_Name",10,1594420837);
		F987_19042(RTCV(tr2), tr3);
		F1020_19947(RTCV(loc5), tr1, tr2);
		loc4 = F32_3989(Current, loc2);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_0_0_0_) == ((EIF_INTEGER_32) 1L))) {
			tr1 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H("Descendants",11,171267699);
			F987_19042(RTCV(tr1), tr2);
			F1020_19946(RTCV(loc5), loc4, tr1);
		} else {
			tr1 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H("Ancestors",9,5974643);
			F987_19042(RTCV(tr1), tr2);
			F1020_19946(RTCV(loc5), loc4, tr1);
		}
		F1019_19937(RTCV(loc3), loc5);
		loc2 = F32_3990(Current);
	}
	RTLE;
	return (EIF_REFERENCE) loc3;
}

/* {EIFFEL_ARCHITECTURE}.get_count */
EIF_INTEGER_32 F32_3990 (EIF_REFERENCE Current)
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
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_0_0_1_);
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

void EIF_Minit30 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
