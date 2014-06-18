/*
 * Code for class URI_TEMPLATE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ur361.h"
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

/* {URI_TEMPLATE}.make */
void F897_18455 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
}

/* {URI_TEMPLATE}.make_from_uri_template */
void F897_18456 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(RTCV(arg1));
	tr1 = F889_17176(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {URI_TEMPLATE}.template */
EIF_REFERENCE F897_18457 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {URI_TEMPLATE}.duplicate */
EIF_REFERENCE F897_18458 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTLNSMART(Dftype(Current));
	F897_18456(RTCV(tr1), Current);
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {URI_TEMPLATE}.set_template */
void F897_18459 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	F897_18470(Current);
	RTLE;
}

/* {URI_TEMPLATE}.hash_code */
EIF_INTEGER_32 F897_18461 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	Result = F885_17002(RTCV(tr1));
	RTLE;
	return Result;
}

/* {URI_TEMPLATE}.match */
EIF_REFERENCE F897_18467 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc15 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc16 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc17 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc18 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc19 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_CHARACTER_8 tc1;
	RTCFDT;
	RTLD;
	
	RTLI(16);
	RTLR(0,Current);
	RTLR(1,loc19);
	RTLR(2,tr1);
	RTLR(3,loc14);
	RTLR(4,loc15);
	RTLR(5,loc13);
	RTLR(6,arg1);
	RTLR(7,loc2);
	RTLR(8,loc7);
	RTLR(9,loc8);
	RTLR(10,loc10);
	RTLR(11,loc9);
	RTLR(12,loc18);
	RTLR(13,loc12);
	RTLR(14,loc11);
	RTLR(15,tr2);
	
	RTGC;
	F897_18473(Current);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	loc19 = tr1;
	if (EIF_TEST(loc19)) {
		{
			static EIF_TYPE_INDEX typarr0[] = {696,888,888,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr1 = RTLNS(typres0, 696, _OBJSIZ_7_3_0_7_0_0_0_0_);
		}
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R9217[Dtype(loc19)-601])(RTCV(loc19));
		F697_13000(RTCV(tr1), ti4_1);
		loc14 = (EIF_REFERENCE) tr1;
		{
			static EIF_TYPE_INDEX typarr0[] = {696,888,888,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr1 = RTLNS(typres0, 696, _OBJSIZ_7_3_0_7_0_0_0_0_);
		}
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R9217[Dtype(loc19)-601])(RTCV(loc19));
		F697_13000(RTCV(tr1), ti4_1);
		loc15 = (EIF_REFERENCE) tr1;
		loc13 = (EIF_REFERENCE) loc14;
		loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		loc16 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O15187[Dtype(arg1)-888]);
		loc2 = *(EIF_REFERENCE *)(Current);
		loc17 = *(EIF_INTEGER_32 *)(RTCV(loc2) + O15187[Dtype(loc2)-888]);
		tb1 = F316_9603(RTCV(loc19));
		if (tb1) {
			loc1 = F889_17187(RTCV(arg1), loc2);
		} else {
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R9288[Dtype(loc19)-459])(RTCV(loc19));
			loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			for (;;) {
				tb1 = '\01';
				tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9302[Dtype(loc19)-459])(RTCV(loc19));
				if (!tb2) {
					tb1 = (EIF_BOOLEAN) !loc1;
				}
				if (tb1) break;
				loc7 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9242[Dtype(loc19)-459])(RTCV(loc19));
				loc8 = *(EIF_REFERENCE *)(RTCV(loc7));
				loc5 = *(EIF_INTEGER_32 *)(RTCV(loc7)+ _LNGOFF_2_6_0_0_);
				if ((EIF_BOOLEAN)(loc4 == loc5)) {
					F1082_20763(RTCV(loc7));
					loc1 = '\01';
					tc1 = *(EIF_CHARACTER_8 *)(RTCV(loc7)+ _CHROFF_2_0_);
					if (!(EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '/')) {
						tc1 = *(EIF_CHARACTER_8 *)(RTCV(loc7)+ _CHROFF_2_0_);
						loc1 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\?');
					}
					loc4 = F1082_20765(RTCV(loc7));
				} else {
					if ((EIF_BOOLEAN) (loc5 > loc4)) {
						if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) 0L))) {
							loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
						}
						tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R15107[Dtype(loc2)-887])(RTCV(loc2), loc4, (EIF_INTEGER_32) (loc5 - ((EIF_INTEGER_32) 1L)));
						loc10 = F885_17049(RTCV(tr1));
						tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R15107[Dtype(arg1)-887])(RTCV(arg1), (EIF_INTEGER_32) (loc4 + loc3), (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc5 + loc3) - ((EIF_INTEGER_32) 1L)));
						loc9 = F885_17049(RTCV(tr1));
						loc1 = F889_17187(RTCV(loc9), loc10);
						loc4 = F1082_20765(RTCV(loc7));
					}
				}
				(FUNCTION_CAST(void, (EIF_REFERENCE)) R9304[Dtype(loc19)-459])(RTCV(loc19));
				tb2 = '\0';
				if (loc1) {
					tb3 = F324_9603(RTCV(loc8));
					tb2 = (EIF_BOOLEAN) !tb3;
				}
				if (tb2) {
					tb2 = *(EIF_BOOLEAN *)(RTCV(loc7)+ _CHROFF_2_3_);
					if (tb2) {
						loc13 = (EIF_REFERENCE) loc15;
					} else {
						loc13 = (EIF_REFERENCE) loc14;
					}
					if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc5 + loc3) <= loc16)) {
						tc1 = F893_17342(RTCV(loc8), ((EIF_INTEGER_32) 1L));
						switch (tc1) {
							case (EIF_CHARACTER_8) '\?':
								tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R15107[Dtype(arg1)-887])(RTCV(arg1), (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc5 + loc3) + ((EIF_INTEGER_32) 1L)), loc16);
								tr1 = F885_17049(RTCV(tr1));
								F897_18475(Current, tr1, loc13);
								loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc17 + ((EIF_INTEGER_32) 1L));
								loc3 += ((EIF_INTEGER_32) (loc16 - (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc5 + loc3) + ((EIF_INTEGER_32) 1L))));
								break;
							case (EIF_CHARACTER_8) ';':
								tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R15107[Dtype(arg1)-887])(RTCV(arg1), (EIF_INTEGER_32) (loc5 + loc3), loc16);
								tr1 = F885_17049(RTCV(tr1));
								F897_18474(Current, tr1, loc13);
								loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc17 + ((EIF_INTEGER_32) 1L));
								break;
							default:
								tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9302[Dtype(loc19)-459])(RTCV(loc19));
								if ((EIF_BOOLEAN) !tb2) {
									loc7 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9242[Dtype(loc19)-459])(RTCV(loc19));
									F1082_20763(RTCV(loc7));
									tb2 = '\01';
									tc1 = *(EIF_CHARACTER_8 *)(RTCV(loc7)+ _CHROFF_2_0_);
									if (!(EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '/')) {
										tc1 = *(EIF_CHARACTER_8 *)(RTCV(loc7)+ _CHROFF_2_0_);
										tb2 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\?');
									}
									if (tb2) {
										loc18 = (EIF_REFERENCE) NULL;
									} else {
										ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc7)+ _LNGOFF_2_6_0_0_);
										tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R15107[Dtype(loc2)-887])(RTCV(loc2), loc4, (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)));
										loc18 = F885_17049(RTCV(tr1));
									}
								} else {
									if ((EIF_BOOLEAN) (loc4 < loc17)) {
										tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R15107[Dtype(loc2)-887])(RTCV(loc2), loc4, loc17);
										loc18 = F885_17049(RTCV(tr1));
									} else {
										loc18 = (EIF_REFERENCE) NULL;
									}
								}
								tc1 = F893_17342(RTCV(loc8), ((EIF_INTEGER_32) 1L));
								if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '/')) {
									ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc8)+ _LNGOFF_1_1_0_2_);
									loc8 = F893_17423(RTCV(loc8), ((EIF_INTEGER_32) 2L), ti4_1);
									tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
									F885_16993(RTCV(tr1));
									loc12 = (EIF_REFERENCE) tr1;
									loc11 = RTMS_EX_H("/",1,47);
									loc6 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
									for (;;) {
										tb2 = '\01';
										tb3 = F324_9603(RTCV(loc11));
										if (!tb3) {
											ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O15187[Dtype(arg1)-888]);
											tb2 = (EIF_BOOLEAN) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc5 + loc3) + ((EIF_INTEGER_32) 1L)) > ti4_1);
										}
										if (tb2) break;
										tr1 = F885_17049(RTCV(arg1));
										loc11 = F897_18477(Current, tr1, (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc5 + loc3) + ((EIF_INTEGER_32) 1L)), loc18);
										ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc11)+ _LNGOFF_1_1_0_2_);
										loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 + ti4_1) + ((EIF_INTEGER_32) 1L));
										loc6++;
										tb3 = F324_9603(RTCV(loc11));
										if ((EIF_BOOLEAN) !tb3) {
											F893_17392(RTCV(loc12), (EIF_CHARACTER_8) '/');
											F893_17377(RTCV(loc12), loc11);
											tr1 = RTMS_EX_H("[",1,91);
											tr1 = F893_17379(RTCV(loc8), tr1);
											tr2 = c_outi(loc6);
											tr1 = F893_17379(RTCV(tr1), tr2);
											tr2 = RTMS_EX_H("]",1,93);
											tr1 = F893_17379(RTCV(tr1), tr2);
											F697_13045(RTCV(loc13), loc11, tr1);
										}
									}
									F697_13045(RTCV(loc13), loc12, loc8);
									ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc8)+ _LNGOFF_1_1_0_2_);
									loc3 -= (EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + ti4_1) + ((EIF_INTEGER_32) 2L));
								} else {
									tr1 = F885_17049(RTCV(arg1));
									loc11 = F897_18477(Current, tr1, (EIF_INTEGER_32) (loc5 + loc3), loc18);
									F697_13045(RTCV(loc13), loc11, loc8);
									ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc11)+ _LNGOFF_1_1_0_2_);
									ti4_2 = *(EIF_INTEGER_32 *)(RTCV(loc8)+ _LNGOFF_1_1_0_2_);
									loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 + ti4_1) - (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 2L)));
								}
								break;
						}
					} else {
						loc1 = *(EIF_BOOLEAN *)(RTCV(loc7)+ _CHROFF_2_3_);
					}
				}
				tb3 = '\0';
				if (loc1) {
					tb4 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9302[Dtype(loc19)-459])(RTCV(loc19));
					tb3 = tb4;
				}
				if (tb3) {
					if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc4 < loc17) || (EIF_BOOLEAN) ((EIF_INTEGER_32) (loc4 + loc3) < loc16))) {
						tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R15107[Dtype(loc2)-887])(RTCV(loc2), loc4, loc17);
						loc10 = F885_17049(RTCV(tr1));
						tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R15107[Dtype(arg1)-887])(RTCV(arg1), (EIF_INTEGER_32) (loc4 + loc3), loc16);
						loc9 = F885_17049(RTCV(tr1));
						loc1 = F889_17187(RTCV(loc9), loc10);
					}
				}
			}
		}
		if (loc1) {
			tr1 = RTLNS(4, 4, _OBJSIZ_2_0_0_0_0_0_0_0_);
			F5_3592(RTCV(tr1), loc14, loc15);
			RTLE;
			return (EIF_REFERENCE) tr1;
		}
	}
	RTLE;
	return (EIF_REFERENCE) 0;
}

/* {URI_TEMPLATE}.reset */
void F897_18470 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) NULL;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {URI_TEMPLATE}.expressions */
EIF_REFERENCE F897_18472 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {URI_TEMPLATE}.analyze */
void F897_18473 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_8 loc2 = (EIF_CHARACTER_8) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc7 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc8 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc11 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc6);
	RTLR(3,tr1);
	RTLR(4,loc9);
	RTLR(5,loc10);
	RTLR(6,tr2);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		loc6 = *(EIF_REFERENCE *)(Current);
		{
			static EIF_TYPE_INDEX typarr0[] = {802,1081,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr1 = RTLNS(typres0, 802, _OBJSIZ_1_1_0_1_0_0_0_0_);
		}
		ti4_1 = F889_17182(RTCV(loc6), (EIF_CHARACTER_8) '{');
		F803_12632(RTCV(tr1), ti4_1);
		loc1 = (EIF_REFERENCE) tr1;
		loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		loc5 = *(EIF_INTEGER_32 *)(RTCV(loc6) + O15187[Dtype(loc6)-888]);
		loc11 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F885_16993(RTCV(tr1));
		loc9 = (EIF_REFERENCE) tr1;
		for (;;) {
			if ((EIF_BOOLEAN) (loc3 > loc5)) break;
			loc2 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(loc6)-696])(RTCV(loc6), loc3));
			if (loc7) {
				if ((EIF_BOOLEAN)(loc2 == (EIF_CHARACTER_8) '}')) {
					tr1 = RTLNS(1081, 1081, _OBJSIZ_2_6_0_1_0_0_0_0_);
					tr2 = (EIF_REFERENCE) eif_builtin_ANY_twin (loc9);
					F1082_20762(RTCV(tr1), loc4, tr2, loc8);
					loc10 = (EIF_REFERENCE) tr1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R9400[Dtype(loc1)-462])(RTCV(loc1), loc10);
					F893_17405(RTCV(loc9));
					loc7 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
					if ((EIF_BOOLEAN) (loc11 && (EIF_BOOLEAN) (loc3 < loc5))) {
						*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					}
				} else {
					F893_17392(RTCV(loc9), loc2);
				}
			} else {
				switch (loc2) {
					case (EIF_CHARACTER_8) '{':
						loc4 = (EIF_INTEGER_32) loc3;
						loc7 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
						if ((EIF_BOOLEAN) !loc11) {
							loc11 = '\0';
							tb1 = F885_17005(RTCV(loc6), (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L)));
							if (tb1) {
								tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(loc6)-696])(RTCV(loc6), (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L))));
								loc11 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\?');
							}
						}
						if ((EIF_BOOLEAN) !loc8) {
							loc8 = (EIF_BOOLEAN) loc11;
						}
						break;
					case (EIF_CHARACTER_8) '\?':
						loc8 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
						break;
				}
			}
			loc3++;
		}
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) loc1;
	}
	RTLE;
}

/* {URI_TEMPLATE}.import_path_style_parameters_into */
void F897_18474 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	
	
	F897_18476(Current, arg1, (EIF_CHARACTER_8) ';', arg2);
}

/* {URI_TEMPLATE}.import_form_style_parameters_into */
void F897_18475 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	
	
	F897_18476(Current, arg1, (EIF_CHARACTER_8) '&', arg2);
}

/* {URI_TEMPLATE}.import_custom_style_parameters_into */
void F897_18476 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_CHARACTER_8 arg2, EIF_REFERENCE arg3)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc5);
	RTLR(2,loc6);
	RTLR(3,loc7);
	RTLR(4,tr1);
	RTLR(5,arg3);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_1_1_0_2_);
	if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L))) break;
			loc3 = F889_17173(RTCV(arg1), arg2, loc2);
			if ((EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 0L))) {
				loc5 = F893_17423(RTCV(arg1), loc2, loc1);
				loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			} else {
				loc5 = F893_17423(RTCV(arg1), loc2, (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L)));
				loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
			}
			tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R15044[Dtype(loc5)-887])(RTCV(loc5));
			if ((EIF_BOOLEAN) !tb1) {
				loc4 = F889_17173(RTCV(loc5), (EIF_CHARACTER_8) '=', ((EIF_INTEGER_32) 1L));
				if ((EIF_BOOLEAN) (loc4 > ((EIF_INTEGER_32) 0L))) {
					loc6 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R15107[Dtype(loc5)-887])(RTCV(loc5), ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (loc4 - ((EIF_INTEGER_32) 1L)));
					ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc5) + O15187[Dtype(loc5)-888]);
					loc7 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R15107[Dtype(loc5)-887])(RTCV(loc5), (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 1L)), ti4_1);
				} else {
					loc6 = (EIF_REFERENCE) loc5;
					tr1 = RTLNS(889, 889, _OBJSIZ_1_0_0_4_0_0_0_0_);
					F885_16993(RTCV(tr1));
					loc7 = (EIF_REFERENCE) tr1;
				}
				F697_13045(RTCV(arg3), loc7, loc6);
			}
		}
	}
	RTLE;
}

/* {URI_TEMPLATE}.next_path_variable_value */
EIF_REFERENCE F897_18477 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_REFERENCE arg3)
{
	GTCX
	EIF_CHARACTER_8 loc1 = (EIF_CHARACTER_8) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc5 = (EIF_CHARACTER_8) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg3);
	RTLR(1,arg1);
	RTLR(2,tr1);
	
	RTGC;
	tb1 = '\0';
	if ((EIF_BOOLEAN)(arg3 != NULL)) {
		tb2 = F324_9603(RTCV(arg3));
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		loc5 = F893_17342(RTCV(arg3), ((EIF_INTEGER_32) 1L));
		loc6 = *(EIF_INTEGER_32 *)(RTCV(arg3)+ _LNGOFF_1_1_0_2_);
	}
	loc2 = (EIF_INTEGER_32) arg2;
	loc3 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_1_1_0_2_);
	for (;;) {
		if ((EIF_BOOLEAN) (loc2 > loc3)) break;
		loc1 = F893_17342(RTCV(arg1), loc2);
		switch (loc1) {
			case (EIF_CHARACTER_8) '/':
			case (EIF_CHARACTER_8) '\?':
				loc2 = (EIF_INTEGER_32) loc3;
				break;
			default:
				tb1 = '\0';
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg3 != NULL) && (EIF_BOOLEAN)(loc1 == loc5))) {
					tr1 = F893_17423(RTCV(arg1), loc2, (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 + loc6) - ((EIF_INTEGER_32) 1L)));
					tb2 = F889_17187(RTCV(tr1), arg3);
					tb1 = tb2;
				}
				if (tb1) {
					loc2 = (EIF_INTEGER_32) loc3;
				} else {
					loc4 = (EIF_INTEGER_32) loc2;
				}
				break;
		}
		loc2++;
	}
	tr1 = F893_17423(RTCV(arg1), arg2, loc4);
	RTLE;
	return (EIF_REFERENCE) tr1;
}

void EIF_Minit361 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
