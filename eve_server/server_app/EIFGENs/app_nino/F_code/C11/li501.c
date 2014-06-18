/*
 * Code for class LINKED_LIST [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "li501.h"
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

/* {LINKED_LIST}.make */
void F797_12788 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {LINKED_LIST}.item */
EIF_REFERENCE F797_12789 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	
	RTGC;
	RTCT0(NULL, EX_CHECK);
	tr1 = *(EIF_REFERENCE *)(Current + O11576[Dtype(Current)-796]);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTCK0;
	} else {
		RTCF0;
	}
	Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9580[Dtype(loc1)-120])(RTCV(loc1));
	RTLE;
	return Result;
}

/* {LINKED_LIST}.index */
EIF_INTEGER_32 F797_12792 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,loc2);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_)) {
		RTLE;
		return (EIF_INTEGER_32) (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_) + ((EIF_INTEGER_32) 1L));
	} else {
		if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_)) {
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			loc1 = *(EIF_REFERENCE *)(Current + O11576[dtype-796]);
			loc2 = *(EIF_REFERENCE *)(Current + O11572[dtype-796]);
			for (;;) {
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc2 == loc1) || (EIF_BOOLEAN)(loc2 == NULL))) break;
				loc2 = *(EIF_REFERENCE *)(RTCV(loc2) + O9690[Dtype(loc2)-126]);
				Result++;
			}
		}
	}
	RTLE;
	return Result;
}

/* {LINKED_LIST}.cursor */
EIF_REFERENCE F797_12793 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	{
		EIF_TYPE_INDEX typarr0[] = {480,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = eif_final_id(Y9214,Y9214_gen_type,Dftype(Current),238);
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		tr1 = RTLNS(typres0, 480, _OBJSIZ_1_2_0_0_0_0_0_0_);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_BOOLEAN, EIF_BOOLEAN)) R10602[Dtype(tr1)-480])(RTCV(tr1), *(EIF_REFERENCE *)(Current + O11576[Dtype(Current)-796]), *(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_), *(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_));
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {LINKED_LIST}.new_cursor */
EIF_REFERENCE F797_12794 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	
	RTGC;
	{
		EIF_TYPE_INDEX typarr0[] = {671,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = eif_final_id(Y9214,Y9214_gen_type,Dftype(Current),238);
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		tr1 = RTLNS(typres0, 671, _OBJSIZ_2_1_0_5_0_0_0_0_);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R11309[Dtype(tr1)-651])(RTCV(tr1), Current);
	Result = (EIF_REFERENCE) tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R11326[Dtype(Result)-651])(RTCV(Result));
	RTLE;
	return Result;
}

/* {LINKED_LIST}.first_element */
EIF_REFERENCE F797_12795 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O11572[Dtype(Current) - 796]);
}


/* {LINKED_LIST}.count */
EIF_INTEGER_32 F797_12796 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_);
}


/* {LINKED_LIST}.after */
EIF_BOOLEAN F797_12798 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_);
}


/* {LINKED_LIST}.before */
EIF_BOOLEAN F797_12799 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_);
}


/* {LINKED_LIST}.off */
EIF_BOOLEAN F797_12800 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) || *(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_));
}

/* {LINKED_LIST}.isfirst */
EIF_BOOLEAN F797_12801 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	
	
	Result = *(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_);
	tr1 = *(EIF_REFERENCE *)(Current + O11576[dtype-796]);
	tr2 = *(EIF_REFERENCE *)(Current + O11572[dtype-796]);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) !Result && (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_)) && (EIF_BOOLEAN)(tr1 == tr2));
	return Result;
}

/* {LINKED_LIST}.islast */
EIF_BOOLEAN F797_12802 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) && (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_))) {
		loc1 = *(EIF_REFERENCE *)(Current + O11576[Dtype(Current)-796]);
		Result = '\0';
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			tr1 = *(EIF_REFERENCE *)(RTCV(loc1) + O9690[Dtype(loc1)-126]);
			Result = (EIF_BOOLEAN)(tr1 == NULL);
		}
	}
	RTLE;
	return Result;
}

/* {LINKED_LIST}.start */
void F797_12806 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O11572[dtype-796]) != NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current + O11572[dtype-796]);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O11576[dtype-796]) = (EIF_REFERENCE) tr1;
		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	} else {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {LINKED_LIST}.finish */
void F797_12807 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + O11576[dtype-796]);
	for (;;) {
		if ((EIF_BOOLEAN)(loc1 == NULL)) break;
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + O11576[dtype-796]) = (EIF_REFERENCE) loc1;
		loc1 = *(EIF_REFERENCE *)(RTCV(loc1) + O9690[Dtype(loc1)-126]);
	}
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O11576[dtype-796]) == NULL);
	RTLE;
}

/* {LINKED_LIST}.forth */
void F797_12808 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_)) {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9207[dtype-313])(Current)) {
			*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	} else {
		loc1 = *(EIF_REFERENCE *)(Current + O11576[dtype-796]);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			tr1 = *(EIF_REFERENCE *)(RTCV(loc1) + O9690[Dtype(loc1)-126]);
			tb1 = (EIF_BOOLEAN)(tr1 != NULL);
		}
		if (tb1) {
			tr1 = *(EIF_REFERENCE *)(RTCV(loc1) + O9690[Dtype(loc1)-126]);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + O11576[dtype-796]) = (EIF_REFERENCE) tr1;
		} else {
			*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	}
	RTLE;
}

/* {LINKED_LIST}.back */
void F797_12809 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9207[dtype-313])(Current)) {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	} else {
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_)) {
			*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		} else {
			if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R11426[dtype-736])(Current)) {
				*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			} else {
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R11574[dtype-796])(Current);
				RTAR(Current, tr1);
				*(EIF_REFERENCE *)(Current + O11576[dtype-796]) = (EIF_REFERENCE) tr1;
			}
		}
	}
	RTLE;
}

/* {LINKED_LIST}.move */
void F797_12810 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLR(2,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L))) {
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_)) {
			*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		}
		loc3 = *(EIF_REFERENCE *)(Current + O11576[dtype-796]);
		for (;;) {
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 == arg1) || (EIF_BOOLEAN)(loc3 == NULL))) break;
			RTAR(Current, loc3);
			*(EIF_REFERENCE *)(Current + O11576[dtype-796]) = (EIF_REFERENCE) loc3;
			loc3 = *(EIF_REFERENCE *)(RTCV(loc3) + O9690[Dtype(loc3)-126]);
			loc1++;
		}
		if ((EIF_BOOLEAN)(loc3 == NULL)) {
			*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			RTAR(Current, loc3);
			*(EIF_REFERENCE *)(Current + O11576[dtype-796]) = (EIF_REFERENCE) loc3;
		}
	} else {
		if ((EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 0L))) {
			loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R9298[dtype-459])(Current);
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + arg1);
			*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			tr1 = *(EIF_REFERENCE *)(Current + O11572[dtype-796]);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + O11576[dtype-796]) = (EIF_REFERENCE) tr1;
			if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R11424[dtype-736])(Current, loc2);
			}
		}
	}
	RTLE;
}

/* {LINKED_LIST}.go_i_th */
void F797_12811 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 0L))) {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		tr1 = *(EIF_REFERENCE *)(Current + O11572[dtype-796]);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O11576[dtype-796]) = (EIF_REFERENCE) tr1;
	} else {
		if ((EIF_BOOLEAN)(arg1 == (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_) + ((EIF_INTEGER_32) 1L)))) {
			*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R11577[dtype-796])(Current);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + O11576[dtype-796]) = (EIF_REFERENCE) tr1;
		} else {
			ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R9298[dtype-459])(Current);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R11424[dtype-736])(Current, (EIF_INTEGER_32) (arg1 - ti4_1));
		}
	}
	RTLE;
}

/* {LINKED_LIST}.go_to */
void F797_12812 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,arg1);
	RTLR(3,tr1);
	
	RTGC;
	loc1 = arg1;
	loc1 = RTRV(eif_non_attached_type(eif_final_id(Y9248,Y9248_gen_type,dftype,439)),loc1);
	if (EIF_TEST(loc1)) {
		tb1 = *(EIF_BOOLEAN *)(RTCV(loc1)+ _CHROFF_1_0_);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) tb1;
		tb1 = *(EIF_BOOLEAN *)(RTCV(loc1)+ _CHROFF_1_1_);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) tb1;
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_)) {
			tr1 = *(EIF_REFERENCE *)(Current + O11572[dtype-796]);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + O11576[dtype-796]) = (EIF_REFERENCE) tr1;
		} else {
			if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_)) {
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R11577[dtype-796])(Current);
				RTAR(Current, tr1);
				*(EIF_REFERENCE *)(Current + O11576[dtype-796]) = (EIF_REFERENCE) tr1;
			} else {
				tr1 = *(EIF_REFERENCE *)(RTCV(loc1) + O10603[Dtype(loc1)-480]);
				RTAR(Current, tr1);
				*(EIF_REFERENCE *)(Current + O11576[dtype-796]) = (EIF_REFERENCE) tr1;
			}
		}
	} else {
	}
	RTLE;
}

/* {LINKED_LIST}.put_front */
void F797_12813 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,Current);
	
	RTGC;
	tr1 = RTCCL(arg1);
	loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R11573[dtype-796])(Current, tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R9691[Dtype(loc1)-126])(RTCV(loc1), *(EIF_REFERENCE *)(Current + O11572[dtype-796]));
	RTAR(Current, loc1);
	*(EIF_REFERENCE *)(Current + O11572[dtype-796]) = (EIF_REFERENCE) loc1;
	tb1 = '\01';
	if (!*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_)) {
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9207[dtype-313])(Current);
	}
	if (tb1) {
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + O11576[dtype-796]) = (EIF_REFERENCE) loc1;
	}
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_))++;
	RTLE;
}

/* {LINKED_LIST}.extend */
void F797_12814 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLR(4,loc2);
	
	RTGC;
	tr1 = RTCCL(arg1);
	loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R11573[dtype-796])(Current, tr1);
	if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9207[dtype-313])(Current)) {
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + O11572[dtype-796]) = (EIF_REFERENCE) loc1;
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + O11576[dtype-796]) = (EIF_REFERENCE) loc1;
	} else {
		loc2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R11577[dtype-796])(Current);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R9691[Dtype(loc2)-126])(RTCV(loc2), loc1);
			if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_)) {
				RTAR(Current, loc1);
				*(EIF_REFERENCE *)(Current + O11576[dtype-796]) = (EIF_REFERENCE) loc1;
			}
		}
	}
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_))++;
	RTLE;
}

/* {LINKED_LIST}.remove */
void F797_12820 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc3);
	RTLR(4,loc1);
	RTLR(5,loc4);
	
	RTGC;
	loc2 = *(EIF_REFERENCE *)(Current + O11576[dtype-796]);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R11426[dtype-736])(Current)) {
			tr1 = *(EIF_REFERENCE *)(RTCV(loc2) + O9690[Dtype(loc2)-126]);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + O11572[dtype-796]) = (EIF_REFERENCE) tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R9692[Dtype(loc2)-126])(RTCV(loc2));
			tr1 = *(EIF_REFERENCE *)(Current + O11572[dtype-796]);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + O11576[dtype-796]) = (EIF_REFERENCE) tr1;
			if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_) == ((EIF_INTEGER_32) 1L))) {
				*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
		} else {
			if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R11427[dtype-796])(Current)) {
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R11574[dtype-796])(Current);
				RTAR(Current, tr1);
				*(EIF_REFERENCE *)(Current + O11576[dtype-796]) = (EIF_REFERENCE) tr1;
				loc3 = *(EIF_REFERENCE *)(Current + O11576[dtype-796]);
				if ((EIF_BOOLEAN)(loc3 != NULL)) {
					(FUNCTION_CAST(void, (EIF_REFERENCE)) R9692[Dtype(loc3)-126])(RTCV(loc3));
				}
				*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			} else {
				loc1 = *(EIF_REFERENCE *)(RTCV(loc2) + O9690[Dtype(loc2)-126]);
				loc4 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R11574[dtype-796])(Current);
				if ((EIF_BOOLEAN)(loc4 != NULL)) {
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R9691[Dtype(loc4)-126])(RTCV(loc4), loc1);
				}
				(FUNCTION_CAST(void, (EIF_REFERENCE)) R9692[Dtype(loc2)-126])(RTCV(loc2));
				RTAR(Current, loc1);
				*(EIF_REFERENCE *)(Current + O11576[dtype-796]) = (EIF_REFERENCE) loc1;
			}
		}
		(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_))--;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R11578[dtype-796])(Current, loc2);
	}
	RTLE;
}

/* {LINKED_LIST}.remove_left */
void F797_12821 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R11424[dtype-736])(Current, ((EIF_INTEGER_32) -2L));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R11458[dtype-796])(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R9304[dtype-459])(Current);
	RTLE;
}

/* {LINKED_LIST}.remove_right */
void F797_12822 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,loc3);
	RTLR(5,loc4);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_)) {
		loc2 = *(EIF_REFERENCE *)(Current + O11572[dtype-796]);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			loc1 = (EIF_REFERENCE) loc2;
			tr1 = *(EIF_REFERENCE *)(RTCV(loc2) + O9690[Dtype(loc2)-126]);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + O11572[dtype-796]) = (EIF_REFERENCE) tr1;
			loc3 = *(EIF_REFERENCE *)(Current + O11576[dtype-796]);
			if ((EIF_BOOLEAN)(loc3 != NULL)) {
				(FUNCTION_CAST(void, (EIF_REFERENCE)) R9692[Dtype(loc3)-126])(RTCV(loc3));
			}
			tr1 = *(EIF_REFERENCE *)(Current + O11572[dtype-796]);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + O11576[dtype-796]) = (EIF_REFERENCE) tr1;
		}
	} else {
		loc3 = *(EIF_REFERENCE *)(Current + O11576[dtype-796]);
		if ((EIF_BOOLEAN)(loc3 != NULL)) {
			loc4 = *(EIF_REFERENCE *)(RTCV(loc3) + O9690[Dtype(loc3)-126]);
			if ((EIF_BOOLEAN)(loc4 != NULL)) {
				loc1 = (EIF_REFERENCE) loc4;
				tr1 = *(EIF_REFERENCE *)(RTCV(loc4) + O9690[Dtype(loc4)-126]);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R9691[Dtype(loc3)-126])(RTCV(loc3), tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) R9692[Dtype(loc4)-126])(RTCV(loc4));
			}
		}
	}
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_))--;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R11578[dtype-796])(Current, loc1);
	RTLE;
}

/* {LINKED_LIST}.copy */
void F797_12824 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTCDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLR(4,loc1);
	RTLR(5,tr2);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != Current)) {
		eif_builtin_ANY_standard_copy (Current, arg1);
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9207[Dtype(arg1)-313])(RTCV(arg1));
		if ((EIF_BOOLEAN) !tb1) {
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R11579[dtype-796])(Current);
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9248[Dtype(arg1)-796])(RTCV(arg1));
			loc2 = tr1;
			if (EIF_TEST(loc2)) {
				loc1 = (EIF_REFERENCE) loc2;
			}
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R9288[Dtype(arg1)-459])(RTCV(arg1));
			for (;;) {
				tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9287[Dtype(arg1)-268])(RTCV(arg1));
				if (tb1) break;
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9242[Dtype(arg1)-459])(RTCV(arg1));
				tr2 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R9230[dtype-459])(Current, tr2);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) R9303[dtype-736])(Current);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) R9304[Dtype(arg1)-459])(RTCV(arg1));
			}
			if ((EIF_BOOLEAN)(loc1 != NULL)) {
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R9250[Dtype(arg1)-796])(RTCV(arg1), loc1);
			}
		}
	}
	RTLE;
}

/* {LINKED_LIST}.new_cell */
EIF_REFERENCE F797_12826 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	RTLR(4,Result);
	
	RTGC;
	{
		EIF_TYPE_INDEX typarr0[] = {126,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = eif_final_id(Y9242,Y9242_gen_type,Dftype(Current),424);
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		tr1 = RTLNS(typres0, 126, _OBJSIZ_2_0_0_0_0_0_0_0_);
	}
	tr2 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R9581[Dtype(tr1)-120])(RTCV(tr1), tr2);
	Result = (EIF_REFERENCE) tr1;
	RTLE;
	return Result;
}

/* {LINKED_LIST}.previous */
EIF_REFERENCE F797_12827 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_)) {
		RTLE;
		return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + O11576[dtype-796]);
	} else {
		tb1 = '\01';
		if (!(FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R11426[dtype-736])(Current)) {
			tb1 = *(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_);
		}
		if ((EIF_BOOLEAN) !tb1) {
			loc1 = *(EIF_REFERENCE *)(Current + O11572[dtype-796]);
			for (;;) {
				tb1 = '\01';
				if (!(EIF_BOOLEAN)(loc1 == NULL)) {
					tr1 = *(EIF_REFERENCE *)(RTCV(loc1) + O9690[Dtype(loc1)-126]);
					tb1 = (EIF_BOOLEAN)(tr1 == *(EIF_REFERENCE *)(Current + O11576[dtype-796]));
				}
				if (tb1) break;
				loc1 = *(EIF_REFERENCE *)(RTCV(loc1) + O9690[Dtype(loc1)-126]);
			}
			RTLE;
			return (EIF_REFERENCE) loc1;
		}
	}
	RTLE;
	return (EIF_REFERENCE) 0;
}

/* {LINKED_LIST}.active */
EIF_REFERENCE F797_12829 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O11576[Dtype(Current) - 796]);
}


/* {LINKED_LIST}.last_element */
EIF_REFERENCE F797_12830 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,Result);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + O11576[Dtype(Current)-796]);
	for (;;) {
		if ((EIF_BOOLEAN)(loc1 == NULL)) break;
		Result = (EIF_REFERENCE) loc1;
		loc1 = *(EIF_REFERENCE *)(RTCV(loc1) + O9690[Dtype(loc1)-126]);
	}
	RTLE;
	return Result;
}

/* {LINKED_LIST}.cleanup_after_remove */
void F797_12831 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTGC;
}

/* {LINKED_LIST}.internal_wipe_out */
void F797_12832 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	*(EIF_REFERENCE *)(Current + O11576[dtype-796]) = (EIF_REFERENCE) NULL;
	*(EIF_REFERENCE *)(Current + O11572[dtype-796]) = (EIF_REFERENCE) NULL;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTLE;
}

void EIF_Minit501 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
