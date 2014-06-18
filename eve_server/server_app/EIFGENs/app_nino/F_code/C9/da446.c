/*
 * Code for class DATE_TIME_CODE_STRING
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "da446.h"
#include <math.h>
#include "eif_built_in.h"
#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {DATE_TIME_CODE_STRING}.make */
void F1088_20992 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(9);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc5);
	RTLR(3,arg1);
	RTLR(4,loc6);
	RTLR(5,loc7);
	RTLR(6,loc1);
	RTLR(7,loc8);
	RTLR(8,tr2);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {697,898,993,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F698_13000(RTCV(tr1), ((EIF_INTEGER_32) 20L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	tr1 = RTLNS(137, 137, _OBJSIZ_0_0_0_0_0_0_0_0_);
	loc5 = (EIF_REFERENCE) tr1;
	tr1 = F138_7827(RTCV(loc5));
	tr1 = (EIF_REFERENCE) eif_builtin_ANY_twin (tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	tr1 = F138_7828(RTCV(loc5));
	tr1 = (EIF_REFERENCE) eif_builtin_ANY_twin (tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN) (loc3 >= ti4_1)) break;
		loc4 = F1087_20989(Current, arg1, loc3);
		loc6 = F1087_20990(Current, arg1, loc3, loc4);
		loc4 = F74_6546(Current, loc4);
		loc7 = eif_boxed_item(loc6,1);
		F893_17417(RTCV(loc7));
		ti4_2 = *(EIF_INTEGER_32 *)(RTCV(loc7)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN) (ti4_2 > ((EIF_INTEGER_32) 0L))) {
			tr1 = RTLNS(898, 898, _OBJSIZ_2_2_0_5_0_0_0_0_);
			F899_18485(RTCV(tr1), loc7);
			loc1 = (EIF_REFERENCE) tr1;
			tr1 = *(EIF_REFERENCE *)(Current);
			F698_13044(RTCV(tr1), loc1, loc2);
			loc2++;
		}
		loc8 = eif_boxed_item(loc6,2);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCV(loc8)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN) (ti4_2 > ((EIF_INTEGER_32) 0L))) {
			tr1 = *(EIF_REFERENCE *)(Current);
			tr2 = RTLNS(898, 898, _OBJSIZ_2_2_0_5_0_0_0_0_);
			F899_18485(RTCV(tr2), loc8);
			F698_13044(RTCV(tr1), tr2, loc2);
			loc2++;
			*(EIF_BOOLEAN *)(Current+ _CHROFF_4_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 1L));
	}
	tr1 = RTLNS(18, 18, _OBJSIZ_1_1_0_1_0_0_0_0_);
	F19_3804(RTCV(tr1));
	ti4_2 = F19_3808(RTCV(tr1));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_2_0_0_) = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_2 / ((EIF_INTEGER_32) 100L)) * ((EIF_INTEGER_32) -100L));
	RTLE;
}

/* {DATE_TIME_CODE_STRING}.value */
EIF_REFERENCE F1088_20993 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {DATE_TIME_CODE_STRING}.create_string */
EIF_REFERENCE F1088_21003 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REAL_64 loc6 = (EIF_REAL_64) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(8);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,loc1);
	RTLR(3,arg1);
	RTLR(4,loc2);
	RTLR(5,loc8);
	RTLR(6,Current);
	RTLR(7,loc7);
	
	RTGC;
	tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F889_17162(RTCV(tr1), ((EIF_INTEGER_32) 1L));
	Result = (EIF_REFERENCE) tr1;
	loc1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_);
	loc2 = *(EIF_REFERENCE *)(RTCV(arg1));
	loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	tr1 = *(EIF_REFERENCE *)(Current);
	loc8 = F698_13004(RTCV(tr1), loc4);
	for (;;) {
		if ((EIF_BOOLEAN)(loc8 == NULL)) break;
		loc5 = *(EIF_INTEGER_32 *)(RTCV(loc8)+ _LNGOFF_2_2_0_4_);
		switch (loc5) {
			case 1L:
				ti4_1 = F629_11923(RTCV(loc1));
				tr1 = c_outi(ti4_1);
				F893_17377(RTCV(Result), tr1);
				break;
			case 2L:
				loc3 = F629_11923(RTCV(loc1));
				if ((EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 10L))) {
					tr1 = RTMS_EX_H("0",1,48);
					F893_17377(RTCV(Result), tr1);
				}
				tr1 = c_outi(loc3);
				F893_17377(RTCV(Result), tr1);
				break;
			case 3L:
				loc3 = F1086_20967(RTCV(loc1));
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
				tr1 = F722_12310(RTCV(tr1), loc3);
				F893_17377(RTCV(Result), tr1);
				break;
			case 4L:
				ti4_1 = F629_11925(RTCV(loc1));
				loc7 = c_outi(ti4_1);
				ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc7)+ _LNGOFF_1_1_0_2_);
				if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 4L))) {
					F893_17377(RTCV(Result), loc7);
				} else {
					ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc7)+ _LNGOFF_1_1_0_2_);
					if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
						tr1 = RTMS_EX_H("000",3,3158064);
						F893_17377(RTCV(Result), tr1);
						F893_17377(RTCV(Result), loc7);
					} else {
						ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc7)+ _LNGOFF_1_1_0_2_);
						if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L))) {
							tr1 = RTMS_EX_H("00",2,12336);
							F893_17377(RTCV(Result), tr1);
							F893_17377(RTCV(Result), loc7);
						} else {
							ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc7)+ _LNGOFF_1_1_0_2_);
							if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 3L))) {
								tr1 = RTMS_EX_H("0",1,48);
								F893_17377(RTCV(Result), tr1);
								F893_17377(RTCV(Result), loc7);
							}
						}
					}
				}
				break;
			case 5L:
				ti4_1 = F629_11925(RTCV(loc1));
				loc7 = c_outi(ti4_1);
				ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc7)+ _LNGOFF_1_1_0_2_);
				if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 2L))) {
					F893_17360(RTCV(loc7), ((EIF_INTEGER_32) 2L));
				} else {
					ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc7)+ _LNGOFF_1_1_0_2_);
					if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
						F893_17391(RTCV(Result), (EIF_CHARACTER_8) '0');
					}
				}
				F893_17377(RTCV(Result), loc7);
				break;
			case 6L:
				ti4_1 = F629_11924(RTCV(loc1));
				tr1 = c_outi(ti4_1);
				F893_17377(RTCV(Result), tr1);
				break;
			case 7L:
				loc3 = F629_11924(RTCV(loc1));
				if ((EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 10L))) {
					tr1 = RTMS_EX_H("0",1,48);
					F893_17377(RTCV(Result), tr1);
				}
				tr1 = c_outi(loc3);
				F893_17377(RTCV(Result), tr1);
				break;
			case 8L:
				loc3 = F629_11924(RTCV(loc1));
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
				tr1 = F722_12310(RTCV(tr1), loc3);
				F893_17377(RTCV(Result), tr1);
				break;
			case 9L:
				ti4_1 = F137_7801(RTCV(loc2));
				tr1 = c_outi(ti4_1);
				F893_17377(RTCV(Result), tr1);
				break;
			case 10L:
				loc3 = F137_7801(RTCV(loc2));
				if ((EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 10L))) {
					tr1 = RTMS_EX_H("0",1,48);
					F893_17377(RTCV(Result), tr1);
				}
				tr1 = c_outi(loc3);
				F893_17377(RTCV(Result), tr1);
				break;
			case 11L:
			case 12L:
				loc3 = F137_7801(RTCV(loc2));
				if ((EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 12L))) {
					if ((EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 0L))) {
						loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 12L);
					}
				} else {
					if ((EIF_BOOLEAN)(loc3 != ((EIF_INTEGER_32) 12L))) {
						loc3 -= ((EIF_INTEGER_32) 12L);
					}
				}
				tb1 = '\0';
				ti4_1 = (EIF_INTEGER_32) ((EIF_NATURAL_8) 12U);
				if ((EIF_BOOLEAN)(loc5 == ti4_1)) {
					tb1 = (EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 10L));
				}
				if (tb1) {
					tr1 = RTMS_EX_H("0",1,48);
					F893_17377(RTCV(Result), tr1);
				}
				tr1 = c_outi(loc3);
				F893_17377(RTCV(Result), tr1);
				break;
			case 13L:
				ti4_1 = F137_7802(RTCV(loc2));
				tr1 = c_outi(ti4_1);
				F893_17377(RTCV(Result), tr1);
				break;
			case 14L:
				loc3 = F137_7802(RTCV(loc2));
				if ((EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 10L))) {
					tr1 = RTMS_EX_H("0",1,48);
					F893_17377(RTCV(Result), tr1);
				}
				tr1 = c_outi(loc3);
				F893_17377(RTCV(Result), tr1);
				break;
			case 15L:
				ti4_1 = F137_7803(RTCV(loc2));
				tr1 = c_outi(ti4_1);
				F893_17377(RTCV(Result), tr1);
				break;
			case 16L:
				loc3 = F137_7803(RTCV(loc2));
				if ((EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 10L))) {
					tr1 = RTMS_EX_H("0",1,48);
					F893_17377(RTCV(Result), tr1);
				}
				tr1 = c_outi(loc3);
				F893_17377(RTCV(Result), tr1);
				break;
			case 17L:
				loc6 = *(EIF_REAL_64 *)(RTCV(loc2)+ _R64OFF_0_0_0_1_0_0_0_0_);
				ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc8)+ _LNGOFF_2_2_0_0_);
				tr8_1 = (EIF_REAL_64) ((ti4_1));
				loc6 = (EIF_REAL_64) (EIF_REAL_64) (loc6 * (EIF_REAL_64) pow ((EIF_REAL_64) (((EIF_INTEGER_32) 10L)), (EIF_REAL_64) (tr8_1)));
				tr1 = RTLNS(1014, 1014, _OBJSIZ_0_0_0_0_0_0_0_1_);
				*(EIF_REAL_64 *)tr1 = loc6;
				
				loc3 = F1013_19807(RTCV(tr1));
				loc7 = c_outi(loc3);
				ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc7)+ _LNGOFF_1_1_0_2_);
				ti4_2 = *(EIF_INTEGER_32 *)(RTCV(loc8)+ _LNGOFF_2_2_0_0_);
				if ((EIF_BOOLEAN) (ti4_1 < ti4_2)) {
					tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
					ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc8)+ _LNGOFF_2_2_0_0_);
					ti4_2 = *(EIF_INTEGER_32 *)(RTCV(loc7)+ _LNGOFF_1_1_0_2_);
					F889_17163(RTCV(tr1), (EIF_CHARACTER_8) '0', (EIF_INTEGER_32) (ti4_1 - ti4_2));
					F893_17377(RTCV(Result), tr1);
				}
				F893_17377(RTCV(Result), loc7);
				break;
			case 24L:
				loc3 = F137_7801(RTCV(loc2));
				if ((EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 12L))) {
					tr1 = RTMS_EX_H("AM",2,16717);
					F893_17377(RTCV(Result), tr1);
				} else {
					tr1 = RTMS_EX_H("PM",2,20557);
					F893_17377(RTCV(Result), tr1);
				}
				break;
			default:
				tr1 = *(EIF_REFERENCE *)(RTCV(loc8));
				F893_17377(RTCV(Result), tr1);
				break;
		}
		loc4++;
		tr1 = *(EIF_REFERENCE *)(Current);
		loc8 = F698_13004(RTCV(tr1), loc4);
	}
	RTLE;
	return Result;
}

/* {DATE_TIME_CODE_STRING}.create_date_string */
EIF_REFERENCE F1088_21004 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Current);
	
	RTGC;
	tr1 = RTLNS(1090, 1090, _OBJSIZ_2_0_0_2_0_0_0_1_);
	F1091_21054(RTCV(tr1), arg1);
	loc1 = (EIF_REFERENCE) tr1;
	RTLE;
	return (EIF_REFERENCE) F1088_21003(Current, loc1);
}

/* {DATE_TIME_CODE_STRING}.create_time_string */
EIF_REFERENCE F1088_21005 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Current);
	
	RTGC;
	tr1 = RTLNS(1090, 1090, _OBJSIZ_2_0_0_2_0_0_0_1_);
	ti4_1 = F137_7801(RTCV(arg1));
	ti4_2 = F137_7802(RTCV(arg1));
	tr8_1 = F137_7806(RTCV(arg1));
	F1091_21052(RTCV(tr1), ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 1L), ti4_1, ti4_2, tr8_1);
	loc1 = (EIF_REFERENCE) tr1;
	RTLE;
	return (EIF_REFERENCE) F1088_21003(Current, loc1);
}

/* {DATE_TIME_CODE_STRING}.days */
EIF_REFERENCE F1088_21012 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {DATE_TIME_CODE_STRING}.months */
EIF_REFERENCE F1088_21013 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


void EIF_Minit446 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
