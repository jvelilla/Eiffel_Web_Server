/*
 * Code for class HTTP_ACCEPT_MEDIA_TYPE_UTILITIES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ht239.h"
#include "eif_helpers.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {HTTP_ACCEPT_MEDIA_TYPE_UTILITIES}.media_type */
EIF_REFERENCE F527_11053 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REAL_64 loc2 = (EIF_REAL_64) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(7);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLR(3,arg1);
	RTLR(4,Result);
	RTLR(5,loc1);
	RTLR(6,tr3);
	
	RTGC;
	tr1 = RTMS_EX_H("Improve the code!!!",19,837582369);
	{
	/* INLINED CODE (fixme) */
	/* END INLINED CODE */
	}
	;
	tr2 = RTLNS(950, 950, _OBJSIZ_5_1_0_0_0_0_0_0_);
	F951_18796(RTCV(tr2), arg1);
	Result = (EIF_REFERENCE) tr2;
	tr2 = RTMS_EX_H("q",1,113);
	tr2 = F951_18801(RTCV(Result), tr2);
	loc1 = tr2;
	if (EIF_TEST(loc1)) {
		tb1 = '\0';
		tb2 = '\0';
		tb3 = F885_17019(RTCV(loc1));
		if (tb3) {
			tr8_1 = F885_17069(RTCV(loc1));
			loc2 = tr8_1;
			tb2 = (EIF_TRUE);
		}
		if (tb2) {
			tb1 = (EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 >= (EIF_REAL_64) 0.0) && (EIF_BOOLEAN) (loc2 <= (EIF_REAL_64) 1.0));
		}
		if (tb1) {
			tr2 = RTMS_EX_H("1",1,49);
			tb1 = F889_17187(RTCV(loc1), tr2);
			if (tb1) {
				tr2 = RTMS_EX_H("q",1,113);
				tr3 = RTMS_EX_H("1.0",3,3223088);
				F951_18808(RTCV(Result), tr2, tr3);
			}
		} else {
			tr2 = RTMS_EX_H("q",1,113);
			tr3 = RTMS_EX_H("1.0",3,3223088);
			F951_18808(RTCV(Result), tr2, tr3);
		}
	} else {
		tr2 = RTMS_EX_H("q",1,113);
		tr3 = RTMS_EX_H("1.0",3,3223088);
		F951_18808(RTCV(Result), tr2, tr3);
	}
	RTLE;
	return Result;
}

/* {HTTP_ACCEPT_MEDIA_TYPE_UTILITIES}.best_match */
EIF_REFERENCE F527_11055 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_BOOLEAN tb6;
	EIF_BOOLEAN tb7;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(14);
	RTLR(0,loc3);
	RTLR(1,arg2);
	RTLR(2,loc1);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLR(5,loc4);
	RTLR(6,tr2);
	RTLR(7,loc2);
	RTLR(8,loc8);
	RTLR(9,arg1);
	RTLR(10,loc5);
	RTLR(11,loc6);
	RTLR(12,loc7);
	RTLR(13,Result);
	
	RTGC;
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) ',';
	loc3 = F885_17071(RTCV(arg2), tw1);
	{
		static EIF_TYPE_INDEX typarr0[] = {802,950,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNS(typres0, 802, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R9217[Dtype(loc3)-601])(RTCV(loc3));
	F803_12632(RTCV(tr1), ti4_1);
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = RTMS_EX_H("Extract method!!!",17,1444270625);
	{
	/* INLINED CODE (fixme) */
	/* END INLINED CODE */
	}
	;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R9288[Dtype(loc3)-459])(RTCV(loc3));
	for (;;) {
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9302[Dtype(loc3)-459])(RTCV(loc3));
		if (tb1) break;
		tr2 = F269_9734(RTCV(loc3));
		loc4 = F527_11053(Current, tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R9400[Dtype(loc1)-462])(RTCV(loc1), loc4);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R9304[Dtype(loc3)-459])(RTCV(loc3));
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {802,897,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNS(typres0, 802, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	F803_12632(RTCV(tr2), ((EIF_INTEGER_32) 0L));
	loc2 = (EIF_REFERENCE) tr2;
	loc8 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R11074[Dtype(arg1)-644])(RTCV(arg1));
	for (;;) {
		tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9799[Dtype(loc8)-646])(RTCV(loc8));
		if (tb2) break;
		tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9798[Dtype(loc8)-646])(RTCV(loc8));
		loc5 = F527_11056(Current, tr2, loc1);
		tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9798[Dtype(loc8)-646])(RTCV(loc8));
		tr2 = F526_11052(Current, tr2);
		F898_18483(RTCV(loc5), tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R9400[Dtype(loc2)-462])(RTCV(loc2), loc5);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R9800[Dtype(loc8)-646])(RTCV(loc8));
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R9288[Dtype(loc2)-459])(RTCV(loc2));
	loc6 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9242[Dtype(loc2)-459])(RTCV(loc2));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R9304[Dtype(loc2)-459])(RTCV(loc2));
	for (;;) {
		tb3 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9302[Dtype(loc2)-459])(RTCV(loc2));
		if (tb3) break;
		loc5 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9242[Dtype(loc2)-459])(RTCV(loc2));
		tb4 = F898_18484(RTCV(loc6), loc5);
		if (tb4) {
			loc6 = (EIF_REFERENCE) loc5;
			tb4 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R11426[Dtype(loc2)-736])(RTCV(loc2));
			if ((EIF_BOOLEAN) !tb4) {
				(FUNCTION_CAST(void, (EIF_REFERENCE)) R9386[Dtype(loc2)-601])(RTCV(loc2));
				for (;;) {
					tb4 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9385[Dtype(loc2)-601])(RTCV(loc2));
					if (tb4) break;
					(FUNCTION_CAST(void, (EIF_REFERENCE)) R9247[Dtype(loc2)-736])(RTCV(loc2));
					(FUNCTION_CAST(void, (EIF_REFERENCE)) R9386[Dtype(loc2)-601])(RTCV(loc2));
				}
				(FUNCTION_CAST(void, (EIF_REFERENCE)) R9304[Dtype(loc2)-459])(RTCV(loc2));
			}
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R9304[Dtype(loc2)-459])(RTCV(loc2));
		} else {
			tb5 = F534_10532(RTCV(loc6), loc5);
			if (tb5) {
				(FUNCTION_CAST(void, (EIF_REFERENCE)) R9304[Dtype(loc2)-459])(RTCV(loc2));
			} else {
				(FUNCTION_CAST(void, (EIF_REFERENCE)) R9247[Dtype(loc2)-736])(RTCV(loc2));
			}
		}
	}
	tb5 = '\0';
	if ((EIF_BOOLEAN)(loc6 != NULL)) {
		tr8_1 = *(EIF_REAL_64 *)(RTCV(loc6)+ _R64OFF_1_0_0_1_0_0_0_0_);
		tb5 = (EIF_BOOLEAN)(tr8_1 != (EIF_REAL_64) 0.0);
	}
	if (tb5) {
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R9217[Dtype(loc2)-601])(RTCV(loc2));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
			tr2 = *(EIF_REFERENCE *)(RTCV(loc6));
			RTLE;
			return (EIF_REFERENCE) tr2;
		} else {
			loc5 = (EIF_REFERENCE) NULL;
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R9288[Dtype(loc1)-459])(RTCV(loc1));
			for (;;) {
				tb5 = '\01';
				tb6 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9302[Dtype(loc1)-459])(RTCV(loc1));
				if (!tb6) {
					tb5 = (EIF_BOOLEAN)(loc5 != NULL);
				}
				if (tb5) break;
				loc7 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9242[Dtype(loc1)-459])(RTCV(loc1));
				loc7 = F951_18804(RTCV(loc7));
				(FUNCTION_CAST(void, (EIF_REFERENCE)) R9288[Dtype(loc2)-459])(RTCV(loc2));
				for (;;) {
					tb6 = '\01';
					tb7 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9302[Dtype(loc2)-459])(RTCV(loc2));
					if (!tb7) {
						tb6 = (EIF_BOOLEAN)(loc5 != NULL);
					}
					if (tb6) break;
					loc5 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9242[Dtype(loc2)-459])(RTCV(loc2));
					tr2 = *(EIF_REFERENCE *)(RTCV(loc5));
					tb7 = F889_17187(RTCV(tr2), loc7);
					if (tb7) {
					} else {
						loc5 = (EIF_REFERENCE) NULL;
						(FUNCTION_CAST(void, (EIF_REFERENCE)) R9304[Dtype(loc2)-459])(RTCV(loc2));
					}
				}
				(FUNCTION_CAST(void, (EIF_REFERENCE)) R9304[Dtype(loc1)-459])(RTCV(loc1));
			}
			if ((EIF_BOOLEAN)(loc5 != NULL)) {
				tr2 = *(EIF_REFERENCE *)(RTCV(loc5));
				RTLE;
				return (EIF_REFERENCE) tr2;
			} else {
				tr2 = *(EIF_REFERENCE *)(RTCV(loc6));
				RTLE;
				return (EIF_REFERENCE) tr2;
			}
		}
	} else {
		Result = RTMS_EX_H("",0,0);
	}
	RTLE;
	return Result;
}

/* {HTTP_ACCEPT_MEDIA_TYPE_UTILITIES}.fitness_and_quality_from_list */
EIF_REFERENCE F527_11056 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REAL_64 loc2 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc3 = (EIF_REAL_64) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc15 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc16 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc17 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_BOOLEAN tb6;
	RTLD;
	
	RTLI(16);
	RTLR(0,loc4);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,loc9);
	RTLR(4,tr1);
	RTLR(5,loc10);
	RTLR(6,loc11);
	RTLR(7,arg2);
	RTLR(8,loc5);
	RTLR(9,loc12);
	RTLR(10,loc13);
	RTLR(11,loc14);
	RTLR(12,loc15);
	RTLR(13,loc7);
	RTLR(14,loc16);
	RTLR(15,loc17);
	
	RTGC;
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	loc3 = (EIF_REAL_64) (EIF_REAL_64) 0.0;
	loc4 = F527_11053(Current, arg1);
	tb1 = '\0';
	tr1 = RTMS_EX_H("q",1,113);
	tr1 = F951_18801(RTCV(loc4), tr1);
	loc9 = tr1;
	if (EIF_TEST(loc9)) {
		tb2 = F885_17019(RTCV(loc9));
		tb1 = tb2;
	}
	if (tb1) {
		loc2 = F885_17068(RTCV(loc9));
		if ((EIF_BOOLEAN) (loc2 < (EIF_REAL_64) 0.0)) {
			loc2 = (EIF_REAL_64) (EIF_REAL_64) 0.0;
		} else {
			if ((EIF_BOOLEAN) (loc2 > (EIF_REAL_64) 1.0)) {
				loc2 = (EIF_REAL_64) (EIF_REAL_64) 1.0;
			}
		}
	} else {
		loc2 = (EIF_REAL_64) (EIF_REAL_64) 1.0;
	}
	tb1 = '\0';
	tr1 = *(EIF_REFERENCE *)(RTCV(loc4));
	loc10 = tr1;
	if (EIF_TEST(loc10)) {
		tr1 = *(EIF_REFERENCE *)(RTCV(loc4) + _REFACS_1_);
		loc11 = tr1;
		tb1 = EIF_TEST(loc11);
	}
	if (tb1) {
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R9288[Dtype(arg2)-459])(RTCV(arg2));
		for (;;) {
			tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9302[Dtype(arg2)-459])(RTCV(arg2));
			if (tb1) break;
			loc5 = F269_9734(RTCV(arg2));
			tb2 = '\0';
			tb3 = '\0';
			tr1 = *(EIF_REFERENCE *)(RTCV(loc5));
			loc12 = tr1;
			if (EIF_TEST(loc12)) {
				tb4 = '\01';
				tb5 = '\01';
				tb6 = F889_17187(RTCV(loc10), loc12);
				if (!tb6) {
					tr1 = RTMS_EX_H("*",1,42);
					tb6 = F889_17187(RTCV(loc12), tr1);
					tb5 = tb6;
				}
				if (!tb5) {
					tr1 = RTMS_EX_H("*",1,42);
					tb5 = F889_17187(RTCV(loc10), tr1);
					tb4 = tb5;
				}
				tb3 = tb4;
			}
			if (tb3) {
				tb3 = '\0';
				tr1 = *(EIF_REFERENCE *)(RTCV(loc5) + _REFACS_1_);
				loc13 = tr1;
				if (EIF_TEST(loc13)) {
					tb4 = '\01';
					tb5 = '\01';
					tb6 = F889_17187(RTCV(loc11), loc13);
					if (!tb6) {
						tr1 = RTMS_EX_H("*",1,42);
						tb6 = F889_17187(RTCV(loc13), tr1);
						tb5 = tb6;
					}
					if (!tb5) {
						tr1 = RTMS_EX_H("*",1,42);
						tb5 = F889_17187(RTCV(loc11), tr1);
						tb4 = tb5;
					}
					tb3 = tb4;
				}
				tb2 = tb3;
			}
			if (tb2) {
				tr1 = *(EIF_REFERENCE *)(RTCV(loc4) + _REFACS_2_);
				loc14 = tr1;
				if (EIF_TEST(loc14)) {
					loc6 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
					loc15 = F697_13013(RTCV(loc14));
					for (;;) {
						tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9799[Dtype(loc15)-646])(RTCV(loc15));
						if (tb2) break;
						loc7 = F667_12213(RTCV(loc15));
						tb3 = '\0';
						tb4 = '\0';
						tb5 = '\0';
						tr1 = RTMS_EX_H("q",1,113);
						tb6 = F889_17187(RTCV(loc7), tr1);
						if ((EIF_BOOLEAN) !tb6) {
							tb6 = F951_18800(RTCV(loc5), loc7);
							tb5 = tb6;
						}
						if (tb5) {
							tb5 = '\0';
							tr1 = F951_18801(RTCV(loc4), loc7);
							loc16 = tr1;
							if (EIF_TEST(loc16)) {
								tr1 = F951_18801(RTCV(loc5), loc7);
								loc17 = tr1;
								tb5 = EIF_TEST(loc17);
							}
							tb4 = tb5;
						}
						if (tb4) {
							tb4 = F889_17187(RTCV(loc16), loc17);
							tb3 = tb4;
						}
						if (tb3) {
							loc6++;
						}
						(FUNCTION_CAST(void, (EIF_REFERENCE)) R9800[Dtype(loc15)-646])(RTCV(loc15));
					}
				}
				tb3 = F889_17187(RTCV(loc12), loc10);
				if (tb3) {
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 100L);
				} else {
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
				}
				tb3 = F889_17187(RTCV(loc13), loc11);
				if (tb3) {
					loc8 += ((EIF_INTEGER_32) 10L);
				}
				loc8 += loc6;
				if ((EIF_BOOLEAN) (loc8 > loc1)) {
					loc1 = (EIF_INTEGER_32) loc8;
					tr1 = RTMS_EX_H("q",1,113);
					loc7 = F951_18801(RTCV(loc5), tr1);
					if ((EIF_BOOLEAN)(loc7 != NULL)) {
						loc3 = F885_17068(RTCV(loc7));
						loc3 = eif_min_real64 (loc3,loc2);
					} else {
						loc3 = (EIF_REAL_64) (EIF_REAL_64) 0.0;
					}
				}
			}
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R9304[Dtype(arg2)-459])(RTCV(arg2));
		}
	}
	tr1 = RTLNS(897, 897, _OBJSIZ_1_0_0_1_0_0_0_1_);
	F898_18478(RTCV(tr1), loc1, loc3);
	RTLE;
	return (EIF_REFERENCE) tr1;
}

void EIF_Minit239 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
