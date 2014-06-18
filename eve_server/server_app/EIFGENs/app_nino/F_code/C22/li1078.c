/*
 * Code for class LINKED_LIST [INTEGER_32]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "li1078.h"
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
void F800_12788 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {LINKED_LIST}.item */
EIF_INTEGER_32 F800_12789 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	RTCT0(NULL, EX_CHECK);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTCK0;
	} else {
		RTCF0;
	}
	Result = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_1_0_0_0_);
	RTLE;
	return Result;
}

/* {LINKED_LIST}.index */
EIF_INTEGER_32 F800_12792 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
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
			loc1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			loc2 = *(EIF_REFERENCE *)(Current);
			for (;;) {
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc2 == loc1) || (EIF_BOOLEAN)(loc2 == NULL))) break;
				loc2 = *(EIF_REFERENCE *)(RTCV(loc2));
				Result++;
			}
		}
	}
	RTLE;
	return Result;
}

/* {LINKED_LIST}.cursor */
EIF_REFERENCE F800_12793 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	{
		EIF_TYPE_INDEX typarr0[] = {483,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = eif_final_id(Y9214,Y9214_gen_type,Dftype(Current),238);
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		tr1 = RTLNS(typres0, 483, _OBJSIZ_1_2_0_0_0_0_0_0_);
	}
	F484_11388(RTCV(tr1), *(EIF_REFERENCE *)(Current + _REFACS_1_), *(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_), *(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_));
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {LINKED_LIST}.new_cursor */
EIF_REFERENCE F800_12794 (EIF_REFERENCE Current)
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
		EIF_TYPE_INDEX typarr0[] = {674,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = eif_final_id(Y9214,Y9214_gen_type,Dftype(Current),238);
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		tr1 = RTLNS(typres0, 674, _OBJSIZ_2_1_0_5_0_0_0_0_);
	}
	F653_12188(RTCV(tr1), Current);
	Result = (EIF_REFERENCE) tr1;
	F675_12219(RTCV(Result));
	RTLE;
	return Result;
}

/* {LINKED_LIST}.first_element */
EIF_REFERENCE F800_12795 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {LINKED_LIST}.count */
EIF_INTEGER_32 F800_12796 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_);
}


/* {LINKED_LIST}.after */
EIF_BOOLEAN F800_12798 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_);
}


/* {LINKED_LIST}.before */
EIF_BOOLEAN F800_12799 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_);
}


/* {LINKED_LIST}.off */
EIF_BOOLEAN F800_12800 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) || *(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_));
}

/* {LINKED_LIST}.isfirst */
EIF_BOOLEAN F800_12801 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	Result = *(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr2 = *(EIF_REFERENCE *)(Current);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) !Result && (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_)) && (EIF_BOOLEAN)(tr1 == tr2));
	return Result;
}

/* {LINKED_LIST}.islast */
EIF_BOOLEAN F800_12802 (EIF_REFERENCE Current)
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
		loc1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		Result = '\0';
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			tr1 = *(EIF_REFERENCE *)(RTCV(loc1));
			Result = (EIF_BOOLEAN)(tr1 == NULL);
		}
	}
	RTLE;
	return Result;
}

/* {LINKED_LIST}.start */
void F800_12806 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) != NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	} else {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {LINKED_LIST}.finish */
void F800_12807 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	for (;;) {
		if ((EIF_BOOLEAN)(loc1 == NULL)) break;
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) loc1;
		loc1 = *(EIF_REFERENCE *)(RTCV(loc1));
	}
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == NULL);
	RTLE;
}

/* {LINKED_LIST}.forth */
void F800_12808 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_)) {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		if (F317_9603(Current)) {
			*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	} else {
		loc1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			tr1 = *(EIF_REFERENCE *)(RTCV(loc1));
			tb1 = (EIF_BOOLEAN)(tr1 != NULL);
		}
		if (tb1) {
			tr1 = *(EIF_REFERENCE *)(RTCV(loc1));
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
		} else {
			*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	}
	RTLE;
}

/* {LINKED_LIST}.back */
void F800_12809 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if (F317_9603(Current)) {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	} else {
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_)) {
			*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		} else {
			if (F800_12801(Current)) {
				*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			} else {
				tr1 = F800_12827(Current);
				RTAR(Current, tr1);
				*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
			}
		}
	}
	RTLE;
}

/* {LINKED_LIST}.move */
void F800_12810 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
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
		loc3 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		for (;;) {
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 == arg1) || (EIF_BOOLEAN)(loc3 == NULL))) break;
			RTAR(Current, loc3);
			*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) loc3;
			loc3 = *(EIF_REFERENCE *)(RTCV(loc3));
			loc1++;
		}
		if ((EIF_BOOLEAN)(loc3 == NULL)) {
			*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			RTAR(Current, loc3);
			*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) loc3;
		}
	} else {
		if ((EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 0L))) {
			loc2 = F800_12792(Current);
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + arg1);
			*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			tr1 = *(EIF_REFERENCE *)(Current);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
			if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
				F800_12810(Current, loc2);
			}
		}
	}
	RTLE;
}

/* {LINKED_LIST}.go_i_th */
void F800_12811 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 0L))) {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		tr1 = *(EIF_REFERENCE *)(Current);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	} else {
		if ((EIF_BOOLEAN)(arg1 == (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_) + ((EIF_INTEGER_32) 1L)))) {
			*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			tr1 = F800_12830(Current);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
		} else {
			ti4_1 = F800_12792(Current);
			F800_12810(Current, (EIF_INTEGER_32) (arg1 - ti4_1));
		}
	}
	RTLE;
}

/* {LINKED_LIST}.go_to */
void F800_12812 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCFDT;
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
			tr1 = *(EIF_REFERENCE *)(Current);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
		} else {
			if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_)) {
				tr1 = F800_12830(Current);
				RTAR(Current, tr1);
				*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
			} else {
				tr1 = *(EIF_REFERENCE *)(RTCV(loc1));
				RTAR(Current, tr1);
				*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
			}
		}
	} else {
	}
	RTLE;
}

/* {LINKED_LIST}.put_front */
void F800_12813 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	
	RTGC;
	loc1 = F800_12826(Current, arg1);
	F130_10387(RTCV(loc1), *(EIF_REFERENCE *)(Current));
	RTAR(Current, loc1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc1;
	tb1 = '\01';
	if (!*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_)) {
		tb1 = F317_9603(Current);
	}
	if (tb1) {
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) loc1;
	}
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_))++;
	RTLE;
}

/* {LINKED_LIST}.extend */
void F800_12814 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc2);
	
	RTGC;
	loc1 = F800_12826(Current, arg1);
	if (F317_9603(Current)) {
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc1;
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) loc1;
	} else {
		loc2 = F800_12830(Current);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			F130_10387(RTCV(loc2), loc1);
			if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_)) {
				RTAR(Current, loc1);
				*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) loc1;
			}
		}
	}
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_))++;
	RTLE;
}

/* {LINKED_LIST}.remove */
void F800_12820 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc3);
	RTLR(4,loc1);
	RTLR(5,loc4);
	
	RTGC;
	loc2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		if (F800_12801(Current)) {
			tr1 = *(EIF_REFERENCE *)(RTCV(loc2));
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
			F130_10388(RTCV(loc2));
			tr1 = *(EIF_REFERENCE *)(Current);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
			if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_) == ((EIF_INTEGER_32) 1L))) {
				*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
		} else {
			if (F800_12802(Current)) {
				tr1 = F800_12827(Current);
				RTAR(Current, tr1);
				*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
				loc3 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
				if ((EIF_BOOLEAN)(loc3 != NULL)) {
					F130_10388(RTCV(loc3));
				}
				*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			} else {
				loc1 = *(EIF_REFERENCE *)(RTCV(loc2));
				loc4 = F800_12827(Current);
				if ((EIF_BOOLEAN)(loc4 != NULL)) {
					F130_10387(RTCV(loc4), loc1);
				}
				F130_10388(RTCV(loc2));
				RTAR(Current, loc1);
				*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) loc1;
			}
		}
		(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_))--;
		F800_12831(Current, loc2);
	}
	RTLE;
}

/* {LINKED_LIST}.remove_left */
void F800_12821 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F800_12810(Current, ((EIF_INTEGER_32) -2L));
	F800_12822(Current);
	F800_12808(Current);
	RTLE;
}

/* {LINKED_LIST}.remove_right */
void F800_12822 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
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
		loc2 = *(EIF_REFERENCE *)(Current);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			loc1 = (EIF_REFERENCE) loc2;
			tr1 = *(EIF_REFERENCE *)(RTCV(loc2));
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
			loc3 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			if ((EIF_BOOLEAN)(loc3 != NULL)) {
				F130_10388(RTCV(loc3));
			}
			tr1 = *(EIF_REFERENCE *)(Current);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
		}
	} else {
		loc3 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		if ((EIF_BOOLEAN)(loc3 != NULL)) {
			loc4 = *(EIF_REFERENCE *)(RTCV(loc3));
			if ((EIF_BOOLEAN)(loc4 != NULL)) {
				loc1 = (EIF_REFERENCE) loc4;
				tr1 = *(EIF_REFERENCE *)(RTCV(loc4));
				F130_10387(RTCV(loc3), tr1);
				F130_10388(RTCV(loc4));
			}
		}
	}
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_))--;
	F800_12831(Current, loc1);
	RTLE;
}

/* {LINKED_LIST}.copy */
void F800_12824 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLR(4,loc1);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != Current)) {
		eif_builtin_ANY_standard_copy (Current, arg1);
		tb1 = F317_9603(RTCV(arg1));
		if ((EIF_BOOLEAN) !tb1) {
			F800_12832(Current);
			tr1 = F800_12793(RTCV(arg1));
			loc2 = tr1;
			if (EIF_TEST(loc2)) {
				loc1 = (EIF_REFERENCE) loc2;
			}
			F800_12806(RTCV(arg1));
			for (;;) {
				tb1 = F800_12800(RTCV(arg1));
				if (tb1) break;
				ti4_1 = F800_12789(RTCV(arg1));
				F800_12814(Current, ti4_1);
				F800_12807(Current);
				F800_12808(RTCV(arg1));
			}
			if ((EIF_BOOLEAN)(loc1 != NULL)) {
				F800_12812(RTCV(arg1), loc1);
			}
		}
	}
	RTLE;
}

/* {LINKED_LIST}.new_cell */
EIF_REFERENCE F800_12826 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	{
		EIF_TYPE_INDEX typarr0[] = {129,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = eif_final_id(Y9242,Y9242_gen_type,Dftype(Current),424);
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		tr1 = RTLNS(typres0, 129, _OBJSIZ_1_0_0_1_0_0_0_0_);
	}
	F126_10164(RTCV(tr1), arg1);
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {LINKED_LIST}.previous */
EIF_REFERENCE F800_12827 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_)) {
		RTLE;
		return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + _REFACS_1_);
	} else {
		tb1 = '\01';
		if (!F800_12801(Current)) {
			tb1 = *(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_);
		}
		if ((EIF_BOOLEAN) !tb1) {
			loc1 = *(EIF_REFERENCE *)(Current);
			for (;;) {
				tb1 = '\01';
				if (!(EIF_BOOLEAN)(loc1 == NULL)) {
					tr1 = *(EIF_REFERENCE *)(RTCV(loc1));
					tb1 = (EIF_BOOLEAN)(tr1 == *(EIF_REFERENCE *)(Current + _REFACS_1_));
				}
				if (tb1) break;
				loc1 = *(EIF_REFERENCE *)(RTCV(loc1));
			}
			RTLE;
			return (EIF_REFERENCE) loc1;
		}
	}
	RTLE;
	return (EIF_REFERENCE) 0;
}

/* {LINKED_LIST}.active */
EIF_REFERENCE F800_12829 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {LINKED_LIST}.last_element */
EIF_REFERENCE F800_12830 (EIF_REFERENCE Current)
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
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	for (;;) {
		if ((EIF_BOOLEAN)(loc1 == NULL)) break;
		Result = (EIF_REFERENCE) loc1;
		loc1 = *(EIF_REFERENCE *)(RTCV(loc1));
	}
	RTLE;
	return Result;
}

/* {LINKED_LIST}.cleanup_after_remove */
void F800_12831 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTGC;
}

/* {LINKED_LIST}.internal_wipe_out */
void F800_12832 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) NULL;
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) NULL;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTLE;
}

void EIF_Minit1078 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
