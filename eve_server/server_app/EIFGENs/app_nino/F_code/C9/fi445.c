/*
 * Code for class FIND_SEPARATOR_FACILITY
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "fi445.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {FIND_SEPARATOR_FACILITY}.separator_characters */

EIF_REFERENCE F1087_20988 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (216,RTMS_EX_H(":/-, .",6,872260142));
}

/* {FIND_SEPARATOR_FACILITY}.find_separator */
EIF_INTEGER_32 F1087_20989 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc3 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc5 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_CHARACTER_8 tc1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc4);
	
	RTGC;
	Result = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_1_1_0_2_);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + ((EIF_INTEGER_32) 1L));
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(RTOUCR(216,F1087_20988,(Current)))+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
		tr1 = RTOUCR(216,F1087_20988,(Current));
		tc1 = F893_17343(RTCV(tr1), loc1);
		loc2 = F889_17173(RTCV(arg1), tc1, ((EIF_INTEGER_32) 1L));
		if ((EIF_BOOLEAN)(loc2 != ((EIF_INTEGER_32) 0L))) {
			loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			tr1 = RTOUCR(216,F1087_20988,(Current));
			tc1 = F893_17343(RTCV(tr1), loc1);
			loc2 = F889_17173(RTCV(arg1), tc1, arg2);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc2 != ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (loc2 < Result))) {
				Result = (EIF_INTEGER_32) loc2;
			}
		}
		loc1++;
	}
	if ((EIF_BOOLEAN) !loc5) {
		loc1 = (EIF_INTEGER_32) arg2;
		loc4 = F893_17423(RTCV(arg1), loc1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 2L)));
		tr1 = RTMS_EX_H("[0]",3,5976157);
		if (F1_10(Current, loc4, tr1)) {
			loc1 += ((EIF_INTEGER_32) 3L);
		}
		loc3 = F893_17343(RTCV(arg1), loc1);
		for (;;) {
			tb1 = '\01';
			ti4_2 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_1_1_0_2_);
			if (!(EIF_BOOLEAN) (loc1 > ti4_2)) {
				tc1 = F893_17343(RTCV(arg1), loc1);
				tb1 = (EIF_BOOLEAN)(tc1 != loc3);
			}
			if (tb1) break;
			loc1++;
			ti4_2 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_1_1_0_2_);
			if ((EIF_BOOLEAN) (loc1 <= ti4_2)) {
				tb2 = '\0';
				if ((EIF_BOOLEAN)(loc3 == (EIF_CHARACTER_8) 'm')) {
					tc1 = F893_17343(RTCV(arg1), loc1);
					tb2 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) 'i');
				}
				if (tb2) {
					loc3 = F893_17343(RTCV(arg1), loc1);
				} else {
					tb2 = '\0';
					tb3 = '\0';
					if ((EIF_BOOLEAN)(loc3 == (EIF_CHARACTER_8) 'h')) {
						tc1 = F893_17343(RTCV(arg1), loc1);
						tb3 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '1');
					}
					if (tb3) {
						tb3 = '\0';
						tb4 = F885_17005(RTCV(arg1), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)));
						if (tb4) {
							tc1 = F893_17342(RTCV(arg1), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)));
							tb3 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '2');
						}
						tb2 = tb3;
					}
					if (tb2) {
						loc1++;
						loc3 = F893_17343(RTCV(arg1), loc1);
					}
				}
			}
		}
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)) * ((EIF_INTEGER_32) -1L));
	}
	RTLE;
	return Result;
}

/* {FIND_SEPARATOR_FACILITY}.extracted_substrings */
EIF_REFERENCE F1087_20990 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(6);
	RTLR(0,loc2);
	RTLR(1,arg1);
	RTLR(2,loc3);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLR(5,Result);
	
	RTGC;
	if ((EIF_BOOLEAN) (arg3 > ((EIF_INTEGER_32) 0L))) {
		loc2 = F893_17423(RTCV(arg1), arg2, (EIF_INTEGER_32) (arg3 - ((EIF_INTEGER_32) 1L)));
		loc3 = F893_17423(RTCV(arg1), arg3, arg3);
	} else {
		loc1 = F74_6546(Current, arg3);
		loc2 = F893_17423(RTCV(arg1), arg2, loc1);
		tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F889_17162(RTCV(tr1), ((EIF_INTEGER_32) 0L));
		loc3 = (EIF_REFERENCE) tr1;
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,823,892,892,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNTS(typres0, 3, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = loc2;
	RTAR(tr1,loc2);
	((EIF_TYPED_VALUE *)tr1+2)->it_r = loc3;
	RTAR(tr1,loc3);
	Result = (EIF_REFERENCE) tr1;
	RTLE;
	return Result;
}

void EIF_Minit445 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
