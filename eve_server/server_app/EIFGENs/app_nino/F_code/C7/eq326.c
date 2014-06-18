/*
 * Code for class EQA_TEST_OUTPUT_BUFFER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "eq326.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EQA_TEST_OUTPUT_BUFFER}.count */
EIF_INTEGER_32 F605_14368 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	Result = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
	RTLE;
	return Result;
}

/* {EQA_TEST_OUTPUT_BUFFER}.buffer */
EIF_REFERENCE F605_14373 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {EQA_TEST_OUTPUT_BUFFER}.split_position */
EIF_INTEGER_32 F605_14374 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_7_2_4_) / ((EIF_INTEGER_32) 2L));
}

/* {EQA_TEST_OUTPUT_BUFFER}.exists */
EIF_BOOLEAN F605_14377 (EIF_REFERENCE Current)
{
	return (EIF_BOOLEAN) EIF_FALSE;
}

/* {EQA_TEST_OUTPUT_BUFFER}.put_string */
void F605_14380 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	RTLR(4,loc7);
	RTLR(5,loc8);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_1_1_0_2_);
	if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (ti4_1 + ti4_2) > *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_7_2_4_))) {
		loc1 = F605_14374(Current);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_7_2_5_) == ((EIF_INTEGER_32) 0L))) {
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_7_2_5_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_7_2_4_);
			tr2 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			ti4_2 = *(EIF_INTEGER_32 *)(RTCV(tr2)+ _LNGOFF_1_1_0_2_);
			tr2 = F893_17423(RTCV(arg1), ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (ti4_1 - ti4_2));
			F893_17377(RTCV(tr1), tr2);
		}
		loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_7_2_4_);
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 - loc1);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN) (ti4_1 > loc2)) {
			loc4 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_1_1_0_2_);
			loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 - loc2) + ((EIF_INTEGER_32) 1L));
			loc3 = (EIF_INTEGER_32) loc2;
		} else {
			loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			loc3 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_1_1_0_2_);
		}
		if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_7_2_5_) + loc3) > (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_7_2_4_) + ((EIF_INTEGER_32) 1L)))) {
			loc6 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_7_2_4_);
			ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_7_2_5_);
			loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc6 - ti4_1) + ((EIF_INTEGER_32) 1L));
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)) + loc3) - loc6);
			loc7 = F893_17423(RTCV(arg1), loc4, (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 + loc6) - ((EIF_INTEGER_32) 1L)));
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_7_2_5_);
			tr2 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			ti4_2 = *(EIF_INTEGER_32 *)(RTCV(tr2)+ _LNGOFF_1_1_0_2_);
			F893_17353(RTCV(tr1), loc7, ti4_1, ti4_2);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_1_1_0_2_);
			loc8 = F893_17423(RTCV(arg1), (EIF_INTEGER_32) (loc4 + loc6), ti4_1);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			F893_17353(RTCV(tr1), loc8, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) (loc5 - ((EIF_INTEGER_32) 1L)));
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_7_2_5_) = (EIF_INTEGER_32) loc5;
		} else {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_1_1_0_2_);
			tr2 = F893_17423(RTCV(arg1), loc4, ti4_1);
			ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_7_2_5_);
			ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_7_2_5_);
			F893_17353(RTCV(tr1), tr2, ti4_1, (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_2 + loc3) - ((EIF_INTEGER_32) 1L)));
			if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_7_2_5_) + loc3) > *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_7_2_4_))) {
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_7_2_5_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
			} else {
				(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_7_2_5_)) += loc3;
			}
		}
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		F893_17380(RTCV(tr1), arg1);
	}
	RTLE;
}

/* {EQA_TEST_OUTPUT_BUFFER}.put_character */
void F605_14382 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
	if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)) > *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_7_2_4_))) {
		loc1 = F605_14374(Current);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_7_2_5_) == ((EIF_INTEGER_32) 0L))) {
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_7_2_5_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 2L));
		} else {
			loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_7_2_5_);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
			if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_7_2_5_) == ti4_1)) {
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_7_2_5_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
			} else {
				(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_7_2_5_))++;
			}
		}
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		F893_17364(RTCV(tr1), arg1, loc2);
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		F893_17391(RTCV(tr1), arg1);
	}
	RTLE;
}

/* {EQA_TEST_OUTPUT_BUFFER}.put_new_line */
void F605_14386 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F605_14382(Current, (EIF_CHARACTER_8) '\012');
}

/* {EQA_TEST_OUTPUT_BUFFER}.dispose */
void F605_14393 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {EQA_TEST_OUTPUT_BUFFER}.back */
void F605_14394 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {EQA_TEST_OUTPUT_BUFFER}.end_of_file */
EIF_BOOLEAN F605_14395 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_BOOLEAN) 0;
}

/* {EQA_TEST_OUTPUT_BUFFER}.file_close */
void F605_14396 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	
	RTGC;
}

void EIF_Minit326 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
