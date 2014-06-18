/*
 * Code for class CHAIN [BOOLEAN]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ch618.h"
#include "eif_built_in.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {CHAIN}.has */
EIF_BOOLEAN F740_12376 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	
	RTGC;
	loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9248[dtype-796])(Current);
	Result = F272_9729(Current, arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R9250[dtype-796])(Current, loc1);
	RTLE;
	return Result;
}

/* {CHAIN}.i_th */
EIF_BOOLEAN F740_12378 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	
	RTGC;
	loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9248[dtype-796])(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R11425[dtype-736])(Current, arg1);
	Result = *(EIF_BOOLEAN *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9242[dtype-459])(Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R9250[dtype-796])(Current, loc1);
	RTLE;
	return Result;
}

/* {CHAIN}.at */
EIF_BOOLEAN F740_12379 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	
	RTGC;
	loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9248[dtype-796])(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R11425[dtype-736])(Current, arg1);
	Result = *(EIF_BOOLEAN *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9242[dtype-459])(Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R9250[dtype-796])(Current, loc1);
	RTLE;
	return Result;
}

/* {CHAIN}.index_set */
EIF_REFERENCE F740_12381 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,Result);
	
	RTGC;
	tr1 = RTLNS(720, 720, _OBJSIZ_0_3_0_2_0_0_0_0_);
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R9217[Dtype(Current)-601])(Current);
	F721_12254(RTCV(tr1), ((EIF_INTEGER_32) 1L), ti4_1);
	Result = (EIF_REFERENCE) tr1;
	RTLE;
	return Result;
}

/* {CHAIN}.start */
void F740_12382 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN) !F319_9603(Current)) {
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R11425[Dtype(Current)-736])(Current, ((EIF_INTEGER_32) 1L));
	}
	RTLE;
}

/* {CHAIN}.finish */
void F740_12383 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN) !F319_9603(Current)) {
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R9217[dtype-601])(Current);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R11425[dtype-736])(Current, ti4_1);
	}
	RTLE;
}

/* {CHAIN}.move */
void F740_12384 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L))) {
		for (;;) {
			tb1 = '\01';
			if (!((EIF_BOOLEAN)(loc1 == arg1))) {
				tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9302[dtype-459])(Current);
			}
			if (tb1) break;
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R9304[dtype-459])(Current);
			loc1++;
		}
	} else {
		if ((EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 0L))) {
			loc3 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R9298[dtype-459])(Current);
			loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + arg1);
			if ((EIF_BOOLEAN) (loc3 <= ((EIF_INTEGER_32) 0L))) {
				(FUNCTION_CAST(void, (EIF_REFERENCE)) R9288[dtype-459])(Current);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) R9386[dtype-601])(Current);
			} else {
				(FUNCTION_CAST(void, (EIF_REFERENCE)) R9288[dtype-459])(Current);
				loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				for (;;) {
					if ((EIF_BOOLEAN)(loc2 == loc3)) break;
					(FUNCTION_CAST(void, (EIF_REFERENCE)) R9304[dtype-459])(Current);
					loc2++;
				}
			}
		}
	}
	RTLE;
}

/* {CHAIN}.go_i_th */
void F740_12385 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R9298[dtype-459])(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R11424[dtype-736])(Current, (EIF_INTEGER_32) (arg1 - ti4_1));
	RTLE;
}

/* {CHAIN}.valid_index */
EIF_BOOLEAN F740_12386 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = '\0';
	if ((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L))) {
		Result = (EIF_BOOLEAN) (arg1 <= (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R9217[Dtype(Current)-601])(Current));
	}
	RTLE;
	return Result;
}

/* {CHAIN}.isfirst */
EIF_BOOLEAN F740_12387 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = '\0';
	if ((EIF_BOOLEAN) !F319_9603(Current)) {
		Result = (EIF_BOOLEAN)((FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R9298[Dtype(Current)-459])(Current) == ((EIF_INTEGER_32) 1L));
	}
	RTLE;
	return Result;
}

/* {CHAIN}.off */
EIF_BOOLEAN F740_12389 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = '\01';
	if (!((EIF_BOOLEAN)((FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R9298[dtype-459])(Current) == ((EIF_INTEGER_32) 0L)))) {
		Result = (EIF_BOOLEAN)((FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R9298[dtype-459])(Current) == (EIF_INTEGER_32) ((FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R9217[dtype-601])(Current) + ((EIF_INTEGER_32) 1L)));
	}
	RTLE;
	return Result;
}

/* {CHAIN}.append */
void F740_12393 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,loc2);
	
	RTGC;
	loc1 = (EIF_REFERENCE) arg1;
	if ((EIF_BOOLEAN)(arg1 == Current)) {
		loc1 = (EIF_REFERENCE) eif_builtin_ANY_twin (Current);
	}
	loc2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9248[dtype-796])(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R9288[Dtype(loc1)-459])(RTCV(loc1));
	for (;;) {
		tb1 = F272_9735(RTCV(loc1));
		if (tb1) break;
		tb2 = *(EIF_BOOLEAN *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9242[Dtype(loc1)-459])(RTCV(loc1)));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R9230[dtype-459])(Current, (EIF_REFERENCE) &tb2);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R9303[dtype-736])(Current);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R9304[Dtype(loc1)-459])(RTCV(loc1));
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R9250[dtype-796])(Current, loc2);
	RTLE;
}

/* {CHAIN}.fill */
void F740_12394 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,loc2);
	RTLR(3,Current);
	
	RTGC;
	loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9213[Dtype(arg1)-268])(RTCV(arg1));
	loc2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9248[dtype-796])(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R9288[Dtype(loc1)-459])(RTCV(loc1));
	for (;;) {
		tb1 = '\01';
		if (!(EIF_BOOLEAN) !F755_12435(Current)) {
			tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9287[Dtype(loc1)-268])(RTCV(loc1));
			tb1 = tb2;
		}
		if (tb1) break;
		tb2 = *(EIF_BOOLEAN *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9286[Dtype(loc1)-459])(RTCV(loc1)));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R9230[dtype-459])(Current, (EIF_REFERENCE) &tb2);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R9303[dtype-736])(Current);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R9304[Dtype(loc1)-459])(RTCV(loc1));
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R9250[dtype-796])(Current, loc2);
	RTLE;
}

/* {CHAIN}.remove */
void F740_12397 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

void EIF_Minit618 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
