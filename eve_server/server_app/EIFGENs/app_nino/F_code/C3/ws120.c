/*
 * Code for class WSF_MULTIPART_FORM_DATA_HANDLER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ws120.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WSF_MULTIPART_FORM_DATA_HANDLER}.make */
void F161_8241 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {WSF_MULTIPART_FORM_DATA_HANDLER}.valid_content_type */
EIF_BOOLEAN F161_8242 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	tr1 = RTOUCR(150,F153_8132,(Current));
	Result = F951_18806(RTCV(arg1), tr1);
	RTLE;
	return Result;
}

/* {WSF_MULTIPART_FORM_DATA_HANDLER}.handle */
void F161_8243 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3, EIF_REFERENCE arg4)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,arg4);
	RTLR(4,arg1);
	RTLR(5,arg3);
	
	RTGC;
	loc1 = F151_8005(Current, arg2);
	if ((EIF_BOOLEAN)(arg4 != NULL)) {
		F121_10165(RTCV(arg4), loc1);
	}
	F161_8244(Current, arg2, arg1, loc1, arg3);
	RTLE;
}

/* {WSF_MULTIPART_FORM_DATA_HANDLER}.analyze_multipart_form */
void F161_8244 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3, EIF_REFERENCE arg4)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc8 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(11);
	RTLR(0,loc6);
	RTLR(1,arg2);
	RTLR(2,tr1);
	RTLR(3,arg3);
	RTLR(4,loc4);
	RTLR(5,loc7);
	RTLR(6,arg1);
	RTLR(7,arg4);
	RTLR(8,Current);
	RTLR(9,tr2);
	RTLR(10,tr3);
	
	RTGC;
	tr1 = RTMS_EX_H("boundary",8,1971217529);
	loc6 = F951_18801(RTCV(arg2), tr1);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(loc6 != NULL)) {
		tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R15044[Dtype(loc6)-887])(RTCV(loc6));
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		loc1 = F889_17178(RTCV(arg3), loc6, ((EIF_INTEGER_32) 1L));
		if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 1L))) {
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R15107[Dtype(arg3)-887])(RTCV(arg3), ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)));
			loc4 = F885_17049(RTCV(tr1));
			loc6 = F893_17379(RTCV(loc4), loc6);
		} else {
			tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
			F885_16993(RTCV(tr1));
			loc4 = (EIF_REFERENCE) tr1;
		}
		loc5 = *(EIF_INTEGER_32 *)(RTCV(loc6) + O15187[Dtype(loc6)-888]);
		tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg3)-696])(RTCV(arg3), (EIF_INTEGER_32) (loc5 + ((EIF_INTEGER_32) 1L))));
		loc8 = (EIF_BOOLEAN) (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\015');
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + loc5) + ((EIF_INTEGER_32) 1L));
		if (loc8) {
			loc2++;
		}
		loc3 = (EIF_INTEGER_32) loc2;
		for (;;) {
			if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L))) break;
			loc3 = F889_17178(RTCV(arg3), loc6, loc2);
			if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 0L))) {
				if (loc8) {
					tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R15107[Dtype(arg3)-887])(RTCV(arg3), loc2, (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L)) - ((EIF_INTEGER_32) 2L)));
					loc7 = F885_17049(RTCV(tr1));
				} else {
					tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R15107[Dtype(arg3)-887])(RTCV(arg3), loc2, (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L)) - ((EIF_INTEGER_32) 1L)));
					loc7 = F885_17049(RTCV(tr1));
				}
				F161_8245(Current, arg1, loc7, arg4);
				tb1 = F885_17005(RTCV(arg3), (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 + loc5) + ((EIF_INTEGER_32) 1L)));
				if (tb1) {
					if (loc8) {
						tb1 = '\0';
						tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg3)-696])(RTCV(arg3), (EIF_INTEGER_32) (loc3 + loc5)));
						if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\015')) {
							tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg3)-696])(RTCV(arg3), (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 + loc5) + ((EIF_INTEGER_32) 1L))));
							tb1 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\012');
						}
						if (tb1) {
						} else {
							loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
						}
					} else {
						tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg3)-696])(RTCV(arg3), (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 + loc5) + ((EIF_INTEGER_32) 1L))));
						if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\012')) {
						} else {
							loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
						}
					}
				} else {
					loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
					tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_2_);
					tr2 = RTMS_EX_H("Invalid form data",17,534563937);
					tr3 = RTMS_EX_H("Invalid ending for form data from input",39,714666356);
					tr3 = F885_17052(RTCV(tr3));
					F1024_20106(RTCV(tr1), ((EIF_INTEGER_32) 0L), tr2, tr3);
				}
				if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
					loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 + loc5) + ((EIF_INTEGER_32) 1L));
					if (loc8) {
						loc2++;
					}
				}
			} else {
				if (loc8) {
					loc2++;
				}
				ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg3) + O15187[Dtype(arg3)-888]);
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R15107[Dtype(arg3)-887])(RTCV(arg3), (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L)), ti4_1);
				loc7 = F885_17049(RTCV(tr1));
				F893_17362(RTCV(loc7));
				tb1 = '\0';
				ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg3) + O15187[Dtype(arg3)-888]);
				if ((EIF_BOOLEAN) (loc2 >= ti4_1)) {
					tb2 = F889_17187(RTCV(loc4), loc7);
					tb1 = (EIF_BOOLEAN) !tb2;
				}
				if (tb1) {
					tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_2_);
					tr2 = RTMS_EX_H("Invalid form data",17,534563937);
					tr3 = RTMS_EX_H("Invalid ending for form data from input",39,714666356);
					tr3 = F885_17052(RTCV(tr3));
					F1024_20106(RTCV(tr1), ((EIF_INTEGER_32) 0L), tr2, tr3);
				}
				loc2 = (EIF_INTEGER_32) loc3;
			}
		}
	}
	RTLE;
}

/* {WSF_MULTIPART_FORM_DATA_HANDLER}.analyze_multipart_form_input */
void F161_8245 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(13);
	RTLR(0,arg2);
	RTLR(1,loc9);
	RTLR(2,loc10);
	RTLR(3,loc11);
	RTLR(4,tr1);
	RTLR(5,loc6);
	RTLR(6,loc7);
	RTLR(7,loc8);
	RTLR(8,Current);
	RTLR(9,loc12);
	RTLR(10,arg3);
	RTLR(11,arg1);
	RTLR(12,tr2);
	
	RTGC;
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	loc1 = *(EIF_INTEGER_32 *)(RTCV(arg2)+ _LNGOFF_1_1_0_2_);
	for (;;) {
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc3 > loc1) || (EIF_BOOLEAN)(loc9 != NULL))) break;
		tc1 = F893_17342(RTCV(arg2), loc3);
		switch (tc1) {
			case (EIF_CHARACTER_8) '\015':
				tb1 = '\0';
				tb2 = '\0';
				tb3 = '\0';
				if ((EIF_BOOLEAN) (loc1 >= (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 3L)))) {
					tc1 = F893_17342(RTCV(arg2), (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L)));
					tb3 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\012');
				}
				if (tb3) {
					tc1 = F893_17342(RTCV(arg2), (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 2L)));
					tb2 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\015');
				}
				if (tb2) {
					tc1 = F893_17342(RTCV(arg2), (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 3L)));
					tb1 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\012');
				}
				if (tb1) {
					loc9 = F893_17423(RTCV(arg2), ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L)));
					loc10 = F893_17423(RTCV(arg2), (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 4L)), loc1);
				}
				break;
			case (EIF_CHARACTER_8) '\012':
				tb1 = '\0';
				if ((EIF_BOOLEAN) (loc1 >= (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L)))) {
					tc1 = F893_17342(RTCV(arg2), (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L)));
					tb1 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\012');
				}
				if (tb1) {
					loc9 = F893_17423(RTCV(arg2), ((EIF_INTEGER_32) 1L), loc3);
					loc10 = F893_17423(RTCV(arg2), (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 2L)), loc1);
				}
				break;
		}
		loc3++;
	}
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc9 != NULL) && (EIF_BOOLEAN)(loc10 != NULL))) {
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		loc1 = *(EIF_INTEGER_32 *)(RTCV(loc9)+ _LNGOFF_1_1_0_2_);
		for (;;) {
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN) (loc2 > loc1))) break;
			loc11 = (EIF_REFERENCE) NULL;
			loc4 = (EIF_INTEGER_32) loc2;
			loc3 = F889_17173(RTCV(loc9), (EIF_CHARACTER_8) '\012', loc4);
			if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 0L))) {
				tc1 = F893_17342(RTCV(loc9), (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L)));
				if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\015')) {
					loc3--;
					loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 2L));
				} else {
					loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
				}
			}
			if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 0L))) {
				loc11 = F893_17423(RTCV(loc9), loc4, (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L)));
				tr1 = RTMS_EX_H("Content-Disposition: form-data",30,1482817121);
				tb1 = F889_17195(RTCV(loc11), tr1);
				if (tb1) {
					tr1 = RTMS_EX_H("name=",5,1635404093);
					loc3 = F889_17178(RTCV(loc11), tr1, ((EIF_INTEGER_32) 1L));
					if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 0L))) {
						loc3 += ((EIF_INTEGER_32) 4L);
						tb1 = '\0';
						tb2 = F885_17005(RTCV(loc11), (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L)));
						if (tb2) {
							tc1 = F893_17342(RTCV(loc11), (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L)));
							tb1 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\"');
						}
						if (tb1) {
							loc3++;
							loc5 = F889_17173(RTCV(loc11), (EIF_CHARACTER_8) '\"', (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L)));
						} else {
							loc5 = F889_17173(RTCV(loc11), (EIF_CHARACTER_8) ';', (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L)));
							if ((EIF_BOOLEAN)(loc5 == ((EIF_INTEGER_32) 0L))) {
								loc5 = *(EIF_INTEGER_32 *)(RTCV(loc11)+ _LNGOFF_1_1_0_2_);
							}
						}
						loc6 = F893_17423(RTCV(loc9), (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) (loc5 - ((EIF_INTEGER_32) 1L)));
					}
					tr1 = RTMS_EX_H("filename=",9,2103120189);
					loc3 = F889_17178(RTCV(loc11), tr1, ((EIF_INTEGER_32) 1L));
					if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 0L))) {
						loc3 += ((EIF_INTEGER_32) 8L);
						tb1 = '\0';
						tb2 = F885_17005(RTCV(loc11), (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L)));
						if (tb2) {
							tc1 = F893_17342(RTCV(loc11), (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L)));
							tb1 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\"');
						}
						if (tb1) {
							loc3++;
							loc5 = F889_17173(RTCV(loc11), (EIF_CHARACTER_8) '\"', (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L)));
						} else {
							loc5 = F889_17173(RTCV(loc11), (EIF_CHARACTER_8) ';', (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L)));
							if ((EIF_BOOLEAN)(loc5 == ((EIF_INTEGER_32) 0L))) {
								loc5 = *(EIF_INTEGER_32 *)(RTCV(loc11)+ _LNGOFF_1_1_0_2_);
							}
						}
						loc7 = F893_17423(RTCV(loc9), (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) (loc5 - ((EIF_INTEGER_32) 1L)));
					}
				} else {
					tr1 = RTMS_EX_H("Content-Type: ",14,597285920);
					tb1 = F889_17195(RTCV(loc11), tr1);
					if (tb1) {
						ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc11)+ _LNGOFF_1_1_0_2_);
						loc8 = F893_17423(RTCV(loc11), ((EIF_INTEGER_32) 15L), ti4_1);
					}
				}
			} else {
				loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			}
		}
		if ((EIF_BOOLEAN)(loc6 != NULL)) {
			tb1 = '\0';
			if ((EIF_BOOLEAN)(loc7 != NULL)) {
				tb2 = F324_9603(RTCV(loc7));
				tb1 = (EIF_BOOLEAN) !tb2;
			}
			if (tb1) {
				if ((EIF_BOOLEAN)(loc8 == NULL)) {
					loc8 = RTOUCR(151,F161_8246,(Current));
				}
				tr1 = RTLNS(980, 980, _OBJSIZ_6_0_0_2_0_0_0_0_);
				ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc10)+ _LNGOFF_1_1_0_2_);
				F981_18977(RTCV(tr1), loc6, loc7, loc8, ti4_1);
				loc12 = (EIF_REFERENCE) tr1;
				F151_8007(Current, loc6, loc12, arg3);
				F902_18685(RTCV(arg1), loc12, loc10);
			} else {
				F151_8006(Current, loc6, loc10, arg3);
			}
		} else {
			tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_2_);
			tr2 = RTMS_EX_H("unamed multipart entry",22,97040249);
			F1024_20106(RTCV(tr1), ((EIF_INTEGER_32) 0L), tr2, NULL);
		}
	} else {
		tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_2_);
		tr2 = RTMS_EX_H("missformed multipart entry",26,1788966777);
		F1024_20106(RTCV(tr1), ((EIF_INTEGER_32) 0L), tr2, NULL);
	}
	RTLE;
}

/* {WSF_MULTIPART_FORM_DATA_HANDLER}.default_content_type */

EIF_REFERENCE F161_8246 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (151,RTMS_EX_H("text/plain",10,1054604142));
}

void EIF_Minit120 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
