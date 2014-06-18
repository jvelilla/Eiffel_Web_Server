/*
 * Code for class PROCESS_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "pr99.h"
#include <windows.h>
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

/* {PROCESS_IMP}.make_with_command_line */
void F110_7905 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,arg2);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(1093));
	F1094_21137(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_19_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_15_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(582));
	F583_13483(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_20_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(887));
	F888_17140(RTCV(tr1), arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	F109_7081(Current, arg2);
	F109_7084(Current);
	RTLE;
}

/* {PROCESS_IMP}.launch */
void F110_7906 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_14_);
	tb1 = *(EIF_BOOLEAN *)(RTCV(tr1) + O6695[Dtype(tr1)-93]);
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_14_);
		loc1 = F576_11816(RTCV(tr1), ((EIF_INTEGER_32) 0L));
	}
	F109_7037(Current);
	F110_7926(Current);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_19_);
	F1094_21138(RTCV(tr1), *(EIF_REFERENCE *)(Current), *(EIF_REFERENCE *)(Current + _REFACS_1_), *(EIF_BOOLEAN *)(Current+ _CHROFF_24_5_), *(EIF_BOOLEAN *)(Current+ _CHROFF_24_6_));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_19_);
	tb1 = *(EIF_BOOLEAN *)(RTCV(tr1)+ _CHROFF_7_3_);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_24_0_) = (EIF_BOOLEAN) tb1;
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_24_0_)) {
		F110_7927(Current);
		F109_7041(Current);
	} else {
		F109_7040(Current);
	}
	RTLE;
}

/* {PROCESS_IMP}.has_exited */
EIF_BOOLEAN F110_7914 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) *(EIF_BOOLEAN *)(Current+ _CHROFF_24_12_);
}

/* {PROCESS_IMP}.check_exit */
void F110_7916 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,loc3);
	RTLR(3,loc4);
	RTLR(4,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN) !F110_7914(Current)) {
		loc2 = *(EIF_REFERENCE *)(Current + _REFACS_18_);
		loc3 = *(EIF_REFERENCE *)(Current + _REFACS_16_);
		loc4 = *(EIF_REFERENCE *)(Current + _REFACS_17_);
		if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_24_10_)) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_19_);
			tb1 = F1094_21146(RTCV(tr1));
			*(EIF_BOOLEAN *)(Current+ _CHROFF_24_10_) = (EIF_BOOLEAN) tb1;
			if (*(EIF_BOOLEAN *)(Current+ _CHROFF_24_10_)) {
				if ((EIF_BOOLEAN)(loc2 != NULL)) {
					F146_7972(RTCV(loc2));
				}
				if ((EIF_BOOLEAN)(loc3 != NULL)) {
					F146_7972(RTCV(loc3));
				}
				if ((EIF_BOOLEAN)(loc4 != NULL)) {
					F146_7972(RTCV(loc4));
				}
			}
		} else {
			loc1 = '\0';
			tb1 = '\0';
			tb2 = '\01';
			if ((EIF_BOOLEAN)(loc2 != NULL)) {
				tb3 = *(EIF_BOOLEAN *)(RTCV(loc2)+ _CHROFF_3_0_);
				tb2 = tb3;
			}
			if (tb2) {
				tb2 = '\01';
				if ((EIF_BOOLEAN)(loc3 != NULL)) {
					tb3 = *(EIF_BOOLEAN *)(RTCV(loc3)+ _CHROFF_3_0_);
					tb2 = tb3;
				}
				tb1 = tb2;
			}
			if (tb1) {
				tb1 = '\01';
				if ((EIF_BOOLEAN)(loc4 != NULL)) {
					tb2 = *(EIF_BOOLEAN *)(RTCV(loc4)+ _CHROFF_3_0_);
					tb1 = tb2;
				}
				loc1 = tb1;
			}
			if (loc1) {
				if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_24_12_)) {
					tr1 = *(EIF_REFERENCE *)(Current + _REFACS_14_);
					F576_11815(RTCV(tr1));
					tr1 = *(EIF_REFERENCE *)(Current + _REFACS_15_);
					F893_17405(RTCV(tr1));
					tr1 = *(EIF_REFERENCE *)(Current + _REFACS_19_);
					F1094_21173(RTCV(tr1));
					tr1 = *(EIF_REFERENCE *)(Current + _REFACS_19_);
					F1094_21172(RTCV(tr1));
					*(EIF_BOOLEAN *)(Current+ _CHROFF_24_12_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					if (*(EIF_BOOLEAN *)(Current+ _CHROFF_24_2_)) {
						F109_7038(Current);
					} else {
						F109_7039(Current);
					}
				}
			}
		}
	}
	RTLE;
}

/* {PROCESS_IMP}.input_buffer */
EIF_REFERENCE F110_7917 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_15_);
}


/* {PROCESS_IMP}.write_input_stream */
void F110_7922 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc3);
	RTLR(3,loc4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_20_);
	F583_13486(RTCV(tr1));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_15_);
	loc1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
	if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
		ti4_1 = eif_min_int32 (loc1,*(EIF_INTEGER_32 *)(Current+ _LNGOFF_24_14_0_0_));
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_24_14_0_6_) = (EIF_INTEGER_32) ti4_1;
		tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F889_17162(RTCV(tr1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_24_14_0_6_));
		loc3 = (EIF_REFERENCE) tr1;
		loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_24_14_0_6_);
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 - loc2);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_15_);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_24_14_0_6_);
		tr1 = F893_17423(RTCV(tr1), ((EIF_INTEGER_32) 1L), ti4_1);
		F893_17377(RTCV(loc3), tr1);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_15_);
		F893_17360(RTCV(tr1), loc2);
	} else {
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_24_14_0_6_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_20_);
	F583_13488(RTCV(tr1));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_21_);
	loc4 = tr1;
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc3 != NULL) && EIF_TEST(loc4))) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_19_);
		tp1 = *(EIF_POINTER *)(RTCV(tr1)+ _PTROFF_7_8_0_5_0_0_);
		F8_3648(RTCV(loc4), tp1, loc3);
	}
	RTLE;
}

/* {PROCESS_IMP}.read_output_stream */
void F110_7923 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_POINTER tp4;
	EIF_POINTER tp5;
	EIF_POINTER tp6;
	EIF_POINTER tp7;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCFDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLR(2,tr1);
	RTLR(3,loc4);
	RTLR(4,loc5);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_24_14_0_4_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
	loc3 = tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_22_);
	loc4 = tr1;
	if ((EIF_BOOLEAN) (EIF_TEST(loc3) && EIF_TEST(loc4))) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_19_);
		tp1 = *(EIF_POINTER *)(RTCV(tr1)+ _PTROFF_7_8_0_5_0_1_);
		{
		/* INLINED CODE (default_pointer) */
		tp2 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		tp3 = tp2;
		{
		/* INLINED CODE (default_pointer) */
		tp4 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		tp5 = tp4;
		{
		/* INLINED CODE (default_pointer) */
		tp6 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		tp7 = tp6;
		loc1 = F110_7925(Current, tp1, tp3, ((EIF_INTEGER_32) 0L), tp5, (EIF_INTEGER_32 *) &(loc2), tp7);
		if ((EIF_BOOLEAN) (loc1 && (EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L)))) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_19_);
			tp1 = *(EIF_POINTER *)(RTCV(tr1)+ _PTROFF_7_8_0_5_0_1_);
			ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_24_14_0_0_);
			ti4_1 = eif_min_int32 (ti4_1,loc2);
			F8_3644(RTCV(loc4), tp1, ti4_1);
			tr1 = *(EIF_REFERENCE *)(RTCV(loc4));
			loc5 = tr1;
			if (EIF_TEST(loc5)) {
				ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc4)+ _LNGOFF_1_2_0_1_);
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_24_14_0_4_) = (EIF_INTEGER_32) ti4_1;
				(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE)) *(EIF_POINTER *)(RTCV(loc3)+ _PTROFF_4_2_0_3_0_0_))(
					*(EIF_POINTER *)(RTCV(loc3)+ _PTROFF_4_2_0_3_0_1_),
					*(EIF_REFERENCE *)(RTCV(loc3) + _REFACS_1_), loc5);
				;
			}
		}
	}
	RTLE;
}

/* {PROCESS_IMP}.read_error_stream */
void F110_7924 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_POINTER tp4;
	EIF_POINTER tp5;
	EIF_POINTER tp6;
	EIF_POINTER tp7;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCFDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLR(2,tr1);
	RTLR(3,loc4);
	RTLR(4,loc5);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_24_14_0_5_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
	loc3 = tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_23_);
	loc4 = tr1;
	if ((EIF_BOOLEAN) (EIF_TEST(loc3) && EIF_TEST(loc4))) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_19_);
		tp1 = *(EIF_POINTER *)(RTCV(tr1)+ _PTROFF_7_8_0_5_0_2_);
		{
		/* INLINED CODE (default_pointer) */
		tp2 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		tp3 = tp2;
		{
		/* INLINED CODE (default_pointer) */
		tp4 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		tp5 = tp4;
		{
		/* INLINED CODE (default_pointer) */
		tp6 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		tp7 = tp6;
		loc1 = F110_7925(Current, tp1, tp3, ((EIF_INTEGER_32) 0L), tp5, (EIF_INTEGER_32 *) &(loc2), tp7);
		if ((EIF_BOOLEAN) (loc1 && (EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L)))) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_19_);
			tp1 = *(EIF_POINTER *)(RTCV(tr1)+ _PTROFF_7_8_0_5_0_2_);
			ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_24_14_0_0_);
			ti4_1 = eif_min_int32 (ti4_1,loc2);
			F8_3644(RTCV(loc4), tp1, ti4_1);
			tr1 = *(EIF_REFERENCE *)(RTCV(loc4));
			loc5 = tr1;
			if (EIF_TEST(loc5)) {
				ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc4)+ _LNGOFF_1_2_0_1_);
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_24_14_0_5_) = (EIF_INTEGER_32) ti4_1;
				(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE)) *(EIF_POINTER *)(RTCV(loc3)+ _PTROFF_4_2_0_3_0_0_))(
					*(EIF_POINTER *)(RTCV(loc3)+ _PTROFF_4_2_0_3_0_1_),
					*(EIF_REFERENCE *)(RTCV(loc3) + _REFACS_1_), loc5);
				;
			}
		}
	}
	RTLE;
}

/* {PROCESS_IMP}.cwin_peek_named_pipe */
EIF_BOOLEAN F110_7925 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4, EIF_POINTER arg5, EIF_POINTER arg6)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	EIF_ENTER_C;
	Result = (EIF_BOOLEAN) EIF_TEST(PeekNamedPipe(((HANDLE) arg1), ((LPVOID) arg2), ((DWORD) arg3), ((LPDWORD) arg4), ((LPDWORD) arg5), ((LPDWORD) arg6)));
	EIF_EXIT_C;
	RTGC;
	return Result;
}

/* {PROCESS_IMP}.initialize_child_process */
void F110_7926 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,loc2);
	RTLR(4,loc3);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_24_4_)) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_19_);
		F1093_21110(RTCV(tr1));
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_19_);
	F1094_21140(RTCV(tr1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_24_14_0_1_));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_19_);
	F1094_21141(RTCV(tr1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_24_14_0_2_));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_19_);
	F1094_21142(RTCV(tr1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_24_14_0_3_));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_19_);
	F1093_21109(RTCV(tr1), *(EIF_REFERENCE *)(Current + _REFACS_5_));
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_24_14_0_1_) == ((EIF_INTEGER_32) 1L))) {
		RTCT0(NULL, EX_CHECK);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		loc1 = tr1;
		if (EIF_TEST(loc1)) {
			RTCK0;
		} else {
			RTCF0;
		}
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_19_);
		F1094_21143(RTCV(tr1), loc1);
	}
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_24_14_0_2_) == ((EIF_INTEGER_32) 1L))) {
		RTCT0(NULL, EX_CHECK);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		loc2 = tr1;
		if (EIF_TEST(loc2)) {
			RTCK0;
		} else {
			RTCF0;
		}
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_19_);
		F1094_21144(RTCV(tr1), loc2);
	}
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_24_14_0_3_) == ((EIF_INTEGER_32) 1L))) {
		RTCT0(NULL, EX_CHECK);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
		loc3 = tr1;
		if (EIF_TEST(loc3)) {
			RTCK0;
		} else {
			RTCF0;
		}
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_19_);
		F1094_21145(RTCV(tr1), loc3);
	}
	RTLE;
}

/* {PROCESS_IMP}.initialize_after_launch */
void F110_7927 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_19_);
	tr1 = *(EIF_REFERENCE *)(RTCV(tr1) + _REFACS_3_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		ti4_1 = F592_16530(RTCV(loc1));
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_24_14_0_7_) = (EIF_INTEGER_32) ti4_1;
		*(EIF_BOOLEAN *)(Current+ _CHROFF_24_10_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		*(EIF_BOOLEAN *)(Current+ _CHROFF_24_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		*(EIF_BOOLEAN *)(Current+ _CHROFF_24_3_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		*(EIF_BOOLEAN *)(Current+ _CHROFF_24_12_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		F110_7928(Current);
	} else {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_24_3_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}
	RTLE;
}

/* {PROCESS_IMP}.start_listening_threads */
void F110_7928 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,loc2);
	RTLR(4,loc3);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_24_14_0_1_) == ((EIF_INTEGER_32) 0L))) {
		tr1 = RTLNSMART(eif_non_attached_type(7));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_21_) = (EIF_REFERENCE) tr1;
		tr1 = RTLNSMART(eif_non_attached_type(892));
		F889_17162(RTCV(tr1), ((EIF_INTEGER_32) 4096L));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_15_) = (EIF_REFERENCE) tr1;
		tr1 = RTLNSMART(eif_non_attached_type(573));
		F574_11809(RTCV(tr1), Current);
		loc1 = (EIF_REFERENCE) tr1;
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + _REFACS_18_) = (EIF_REFERENCE) loc1;
		F145_7956(RTCV(loc1));
	} else {
		*(EIF_REFERENCE *)(Current + _REFACS_18_) = (EIF_REFERENCE) NULL;
	}
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_24_14_0_2_) == ((EIF_INTEGER_32) 2L))) {
		tr1 = RTLNSMART(eif_non_attached_type(7));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_22_) = (EIF_REFERENCE) tr1;
		tr1 = RTLNSMART(eif_non_attached_type(574));
		F575_11811(RTCV(tr1), Current);
		loc2 = (EIF_REFERENCE) tr1;
		RTAR(Current, loc2);
		*(EIF_REFERENCE *)(Current + _REFACS_16_) = (EIF_REFERENCE) loc2;
		F145_7956(RTCV(loc2));
	} else {
		*(EIF_REFERENCE *)(Current + _REFACS_16_) = (EIF_REFERENCE) NULL;
	}
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_24_14_0_3_) == ((EIF_INTEGER_32) 2L))) {
		tr1 = RTLNSMART(eif_non_attached_type(7));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_23_) = (EIF_REFERENCE) tr1;
		tr1 = RTLNSMART(eif_non_attached_type(572));
		F573_11807(RTCV(tr1), Current);
		loc3 = (EIF_REFERENCE) tr1;
		RTAR(Current, loc3);
		*(EIF_REFERENCE *)(Current + _REFACS_17_) = (EIF_REFERENCE) loc3;
		F145_7956(RTCV(loc3));
	} else {
		*(EIF_REFERENCE *)(Current + _REFACS_17_) = (EIF_REFERENCE) NULL;
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_14_);
	F576_11814(RTCV(tr1));
	RTLE;
}

/* {PROCESS_IMP}.out_thread */
EIF_REFERENCE F110_7935 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_16_);
}


/* {PROCESS_IMP}.err_thread */
EIF_REFERENCE F110_7936 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_17_);
}


/* {PROCESS_IMP}.in_thread */
EIF_REFERENCE F110_7937 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_18_);
}


/* {PROCESS_IMP}.child_process */
EIF_REFERENCE F110_7938 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_19_);
}


/* {PROCESS_IMP}.input_mutex */
EIF_REFERENCE F110_7943 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_20_);
}


/* {PROCESS_IMP}.input_file_handle */
EIF_REFERENCE F110_7944 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_21_);
}


/* {PROCESS_IMP}.output_file_handle */
EIF_REFERENCE F110_7945 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_22_);
}


/* {PROCESS_IMP}.error_file_handle */
EIF_REFERENCE F110_7946 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_23_);
}


void EIF_Minit99 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
