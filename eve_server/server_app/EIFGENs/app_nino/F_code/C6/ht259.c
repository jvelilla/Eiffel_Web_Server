/*
 * Code for class HTML_ENCODER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ht259.h"
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

/* {HTML_ENCODER}.has_error */
EIF_BOOLEAN F537_11491 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_);
}


/* {HTML_ENCODER}.encoded_string */
EIF_REFERENCE F537_11492 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	return (EIF_REFERENCE) F537_11493(Current, arg1);
}

/* {HTML_ENCODER}.general_encoded_string */
EIF_REFERENCE F537_11493 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_CHARACTER_8 loc4 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Result);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15066[Dtype(arg1)-886])(RTCV(arg1));
	ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15066[Dtype(arg1)-886])(RTCV(arg1));
	F889_17162(RTCV(tr1), (EIF_INTEGER_32) (ti4_1 + (EIF_INTEGER_32) (ti4_2 / ((EIF_INTEGER_32) 10L))));
	Result = (EIF_REFERENCE) tr1;
	loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15066[Dtype(arg1)-886])(RTCV(arg1));
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		loc3 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R15029[Dtype(arg1)-887])(RTCV(arg1), loc1);
		tr1 = RTLNS(1005, 1005, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)tr1 = loc3;
		
		tb1 = F1004_19554(RTCV(tr1));
		if (tb1) {
			loc4 = (EIF_CHARACTER_8) loc3;
			switch (loc4) {
				case (EIF_CHARACTER_8) '\011':
				case (EIF_CHARACTER_8) '\012':
				case (EIF_CHARACTER_8) '\015':
					F893_17392(RTCV(Result), loc4);
					break;
				case (EIF_CHARACTER_8) '\"':
					tr1 = RTMS_EX_H("&quot;",6,2045817403);
					F893_17380(RTCV(Result), tr1);
					break;
				case (EIF_CHARACTER_8) '&':
					tr1 = RTMS_EX_H("&amp;",5,1634853947);
					F893_17380(RTCV(Result), tr1);
					break;
				case (EIF_CHARACTER_8) '\'':
					tr1 = RTMS_EX_H("&apos;",6,1961808187);
					F893_17380(RTCV(Result), tr1);
					break;
				case (EIF_CHARACTER_8) '<':
					tr1 = RTMS_EX_H("&lt;",4,644641851);
					F893_17380(RTCV(Result), tr1);
					break;
				case (EIF_CHARACTER_8) '>':
					tr1 = RTMS_EX_H("&gt;",4,644314171);
					F893_17380(RTCV(Result), tr1);
					break;
				default:
					tb1 = '\01';
					tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 31L);
					if (!(EIF_BOOLEAN) (loc3 <= tu4_1)) {
						tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 127L);
						tb1 = (EIF_BOOLEAN)(loc3 == tu4_1);
					}
					if (tb1) {
					} else {
						tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
						if ((EIF_BOOLEAN) (loc3 >= tu4_1)) {
							tr1 = RTMS_EX_H("&#",2,9763);
							F893_17377(RTCV(Result), tr1);
							tr1 = c_outu(loc3);
							F893_17377(RTCV(Result), tr1);
							F893_17392(RTCV(Result), (EIF_CHARACTER_8) ';');
						} else {
							F893_17392(RTCV(Result), loc4);
						}
					}
					break;
			}
		} else {
			tr1 = RTMS_EX_H("&#",2,9763);
			F893_17377(RTCV(Result), tr1);
			tr1 = c_outu(loc3);
			F893_17377(RTCV(Result), tr1);
			F893_17392(RTCV(Result), (EIF_CHARACTER_8) ';');
		}
		loc1++;
	}
	RTLE;
	return Result;
}

void EIF_Minit259 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
