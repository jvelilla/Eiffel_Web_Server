/*
 * Code for class LIST [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "li485.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {LIST}.is_equal */
EIF_BOOLEAN F767_12450 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,loc2);
	RTLR(5,tr2);
	
	RTGC;
	if ((EIF_BOOLEAN)(Current == arg1)) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		Result = '\0';
		tb1 = '\0';
		tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9207[Dtype(arg1)-313])(RTCV(arg1));
		if ((EIF_BOOLEAN)((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9207[dtype-313])(Current) == tb2)) {
			tb2 = *(EIF_BOOLEAN *)(RTCV(arg1) + O9209[Dtype(arg1)-238]);
			tb1 = (EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current + O9209[dtype-238]) == tb2);
		}
		if (tb1) {
			ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R9217[Dtype(arg1)-601])(RTCV(arg1));
			Result = (EIF_BOOLEAN)((FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R9217[dtype-601])(Current) == ti4_1);
		}
		tb1 = '\0';
		if (Result) {
			tb1 = (EIF_BOOLEAN) !(FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9207[dtype-313])(Current);
		}
		if (tb1) {
			tb1 = '\0';
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9248[dtype-796])(Current);
			loc1 = tr1;
			if (EIF_TEST(loc1)) {
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9248[Dtype(arg1)-796])(RTCV(arg1));
				loc2 = tr1;
				tb1 = EIF_TEST(loc2);
			}
			if (tb1) {
				(FUNCTION_CAST(void, (EIF_REFERENCE)) R9288[dtype-459])(Current);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) R9288[Dtype(arg1)-459])(RTCV(arg1));
				for (;;) {
					tb1 = '\01';
					if (!(FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9302[dtype-459])(Current)) {
						tb1 = (EIF_BOOLEAN) !Result;
					}
					if (tb1) break;
					if (*(EIF_BOOLEAN *)(Current + O9209[dtype-238])) {
						tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9242[dtype-459])(Current);
						tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9242[Dtype(arg1)-459])(RTCV(arg1));
						Result = (EIF_BOOLEAN) RTEQ(tr1, tr2);
					} else {
						tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9242[dtype-459])(Current);
						tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9242[Dtype(arg1)-459])(RTCV(arg1));
						Result = (EIF_BOOLEAN) RTCEQ(tr1, tr2);
					}
					(FUNCTION_CAST(void, (EIF_REFERENCE)) R9304[dtype-459])(Current);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) R9304[Dtype(arg1)-459])(RTCV(arg1));
				}
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R9250[dtype-796])(Current, loc1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R9250[Dtype(arg1)-796])(RTCV(arg1), loc2);
			} else {
			}
		} else {
			tb2 = '\0';
			tb3 = '\0';
			if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9207[dtype-313])(Current)) {
				tb4 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9207[Dtype(arg1)-313])(RTCV(arg1));
				tb3 = tb4;
			}
			if (tb3) {
				tb3 = *(EIF_BOOLEAN *)(RTCV(arg1) + O9209[Dtype(arg1)-238]);
				tb2 = (EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current + O9209[dtype-238]) == tb3);
			}
			if (tb2) {
				RTLE;
				return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
		}
	}
	RTLE;
	return Result;
}

/* {LIST}.after */
EIF_BOOLEAN F767_12451 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R9298[dtype-459])(Current);
	ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R9217[dtype-601])(Current);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L)));
	RTLE;
	return Result;
}

/* {LIST}.before */
EIF_BOOLEAN F767_12452 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R9298[Dtype(Current)-459])(Current);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
	RTLE;
	return Result;
}

void EIF_Minit485 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
