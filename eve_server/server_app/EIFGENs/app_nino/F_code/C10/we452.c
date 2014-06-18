/*
 * Code for class WEL_PROCESS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we452.h"
#include "eif_built_in.h"
#include <winbase.h>
#include <windows.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F9_3711
static int inline_F9_3711 (EIF_POINTER arg1, EIF_POINTER arg2)
{
	return EIF_TEST(GetExitCodeProcess ((HANDLE) arg1, (LPDWORD) arg2));
	;
}
#define INLINE_F9_3711
#endif
#ifndef INLINE_F1094_21177
static EIF_POINTER inline_F1094_21177 (void)
{
	return (EIF_POINTER) (GetStdHandle (STD_INPUT_HANDLE))
	;
}
#define INLINE_F1094_21177
#endif
#ifndef INLINE_F1094_21178
static EIF_POINTER inline_F1094_21178 (void)
{
	return (EIF_POINTER) (GetStdHandle (STD_OUTPUT_HANDLE))
	;
}
#define INLINE_F1094_21178
#endif
#ifndef INLINE_F1094_21179
static EIF_POINTER inline_F1094_21179 (void)
{
	return (EIF_POINTER) (GetStdHandle (STD_ERROR_HANDLE))
	;
}
#define INLINE_F1094_21179
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_PROCESS}.make */
void F1094_21137 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_7_4_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_7_5_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_7_6_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	tr1 = RTMS_EX_H("",0,0);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) tr1;
	tr1 = RTMS_EX_H("",0,0);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
	tr1 = RTMS_EX_H("",0,0);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_6_) = (EIF_REFERENCE) tr1;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_8_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_8_0_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_8_0_4_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_7_7_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTLE;
}

/* {WEL_PROCESS}.launch */
void F1094_21138 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_BOOLEAN arg3, EIF_BOOLEAN arg4)
{
	GTCX
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,tr1);
	
	RTGC;
	if (arg3) {
		loc2 = (EIF_INTEGER_32) CREATE_NEW_CONSOLE;
	} else {
		if (arg4) {
			loc2 = (EIF_INTEGER_32) DETACHED_PROCESS;
		}
	}
	F1093_21120(Current, arg1, arg2, loc2);
	tr1 = RTOUCR(206,F1094_21176,(Current));
	loc1 = F8_3643(RTCV(tr1), *(EIF_POINTER *)(Current+ _PTROFF_7_8_0_5_0_3_));
	tr1 = RTOUCR(206,F1094_21176,(Current));
	loc1 = F8_3643(RTCV(tr1), *(EIF_POINTER *)(Current+ _PTROFF_7_8_0_5_0_4_));
	if ((EIF_BOOLEAN) !F1094_21149(Current)) {
		tr1 = RTOUCR(206,F1094_21176,(Current));
		loc1 = F8_3643(RTCV(tr1), *(EIF_POINTER *)(Current+ _PTROFF_7_8_0_5_0_5_));
	}
	*(EIF_BOOLEAN *)(Current+ _CHROFF_7_3_) = (EIF_BOOLEAN) *(EIF_BOOLEAN *)(Current+ _CHROFF_7_0_);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_7_3_)) {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_7_7_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}
	RTLE;
}

/* {WEL_PROCESS}.check_process_state */
void F1094_21139 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tp1 = F592_16528(RTCV(loc1));
		tb1 = EIF_TEST (inline_F9_3711(tp1, (EIF_INTEGER_32 *) &(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_8_0_0_))));
		*(EIF_BOOLEAN *)(Current+ _CHROFF_7_2_) = (EIF_BOOLEAN) tb1;
	} else {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_7_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}
	RTLE;
}

/* {WEL_PROCESS}.set_input_direction */
void F1094_21140 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_8_0_2_) = (EIF_INTEGER_32) arg1;
}

/* {WEL_PROCESS}.set_output_direction */
void F1094_21141 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_8_0_3_) = (EIF_INTEGER_32) arg1;
}

/* {WEL_PROCESS}.set_error_direction */
void F1094_21142 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_8_0_4_) = (EIF_INTEGER_32) arg1;
}

/* {WEL_PROCESS}.set_input_file_name */
void F1094_21143 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	
	RTGC;
	tr1 = (EIF_REFERENCE) eif_builtin_ANY_twin (arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {WEL_PROCESS}.set_output_file_name */
void F1094_21144 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	
	RTGC;
	tr1 = (EIF_REFERENCE) eif_builtin_ANY_twin (arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {WEL_PROCESS}.set_error_file_name */
void F1094_21145 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	
	RTGC;
	tr1 = (EIF_REFERENCE) eif_builtin_ANY_twin (arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_6_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {WEL_PROCESS}.has_exited */
EIF_BOOLEAN F1094_21146 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_7_7_)) {
		F1094_21139(Current);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_7_7_) = (EIF_BOOLEAN) (EIF_BOOLEAN) !(EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_8_0_0_) == (EIF_INTEGER_32) STILL_ACTIVE);
	}
	RTLE;
	return (EIF_BOOLEAN) *(EIF_BOOLEAN *)(Current+ _CHROFF_7_7_);
}

/* {WEL_PROCESS}.is_error_same_as_output */
EIF_BOOLEAN F1094_21149 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_8_0_4_) == ((EIF_INTEGER_32) 5L));
}

/* {WEL_PROCESS}.input_pipe_needed */
EIF_BOOLEAN F1094_21150 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_8_0_2_) == ((EIF_INTEGER_32) 0L));
}

/* {WEL_PROCESS}.output_pipe_needed */
EIF_BOOLEAN F1094_21151 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_8_0_3_) == ((EIF_INTEGER_32) 2L));
}

/* {WEL_PROCESS}.error_pipe_needed */
EIF_BOOLEAN F1094_21152 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_8_0_4_) == ((EIF_INTEGER_32) 2L));
}

/* {WEL_PROCESS}.is_io_redirected */
EIF_BOOLEAN F1094_21153 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_8_0_2_) != ((EIF_INTEGER_32) 3L)) || (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_8_0_3_) != ((EIF_INTEGER_32) 3L))) || (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_8_0_4_) != ((EIF_INTEGER_32) 3L)));
}

/* {WEL_PROCESS}.input_file_name */
EIF_REFERENCE F1094_21166 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_4_);
}


/* {WEL_PROCESS}.output_file_name */
EIF_REFERENCE F1094_21167 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_5_);
}


/* {WEL_PROCESS}.error_file_name */
EIF_REFERENCE F1094_21168 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_6_);
}


/* {WEL_PROCESS}.close_std_output */
void F1094_21169 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_7_5_)) {
		{
		/* INLINED CODE (default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_7_8_0_5_0_1_) != tp1)) {
			tr1 = RTOUCR(206,F1094_21176,(Current));
			loc1 = F8_3643(RTCV(tr1), *(EIF_POINTER *)(Current+ _PTROFF_7_8_0_5_0_1_));
		}
		*(EIF_BOOLEAN *)(Current+ _CHROFF_7_5_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}
	RTLE;
}

/* {WEL_PROCESS}.close_std_input */
void F1094_21170 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_7_4_)) {
		{
		/* INLINED CODE (default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_7_8_0_5_0_0_) != tp1)) {
			tr1 = RTOUCR(206,F1094_21176,(Current));
			loc1 = F8_3643(RTCV(tr1), *(EIF_POINTER *)(Current+ _PTROFF_7_8_0_5_0_0_));
		}
		*(EIF_BOOLEAN *)(Current+ _CHROFF_7_4_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}
	RTLE;
}

/* {WEL_PROCESS}.close_std_error */
void F1094_21171 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_7_6_)) {
		{
		/* INLINED CODE (default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_7_8_0_5_0_2_) != tp1)) {
			tr1 = RTOUCR(206,F1094_21176,(Current));
			loc1 = F8_3643(RTCV(tr1), *(EIF_POINTER *)(Current+ _PTROFF_7_8_0_5_0_2_));
		}
	}
	*(EIF_BOOLEAN *)(Current+ _CHROFF_7_6_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {WEL_PROCESS}.close_io */
void F1094_21172 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F1094_21170(Current);
	F1094_21169(Current);
	F1094_21171(Current);
	RTLE;
}

/* {WEL_PROCESS}.close_process_handle */
void F1094_21173 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tr1 = RTOUCR(206,F1094_21176,(Current));
		tp1 = F592_16529(RTCV(loc1));
		tb1 = F8_3643(RTCV(tr1), tp1);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_7_2_) = (EIF_BOOLEAN) tb1;
		{
		/* INLINED CODE (default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		tp2 = tp1;
		F592_16533(RTCV(loc1), tp2);
		tb1 = '\0';
		tr1 = RTOUCR(206,F1094_21176,(Current));
		tp1 = F592_16528(RTCV(loc1));
		tb2 = F8_3643(RTCV(tr1), tp1);
		if (tb2) {
			tb1 = *(EIF_BOOLEAN *)(Current+ _CHROFF_7_2_);
		}
		*(EIF_BOOLEAN *)(Current+ _CHROFF_7_2_) = (EIF_BOOLEAN) tb1;
		{
		/* INLINED CODE (default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		tp2 = tp1;
		F592_16532(RTCV(loc1), tp2);
	} else {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_7_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}
	RTLE;
}

/* {WEL_PROCESS}.startup_info */
EIF_REFERENCE F1094_21174 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(7);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,loc2);
	RTLR(5,tr2);
	RTLR(6,loc3);
	
	RTGC;
	tr1 = RTLNS(592, 592, _OBJSIZ_1_1_0_0_0_1_0_0_);
	F593_17931(RTCV(tr1));
	Result = (EIF_REFERENCE) tr1;
	if (F1094_21153(Current)) {
		ti4_1 = (EIF_INTEGER_32) STARTF_USESTDHANDLES;
		F593_17953(RTCV(Result), ti4_1);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_8_0_2_) == ((EIF_INTEGER_32) 3L))) {
			tp1 = inline_F1094_21177();
			F593_17956(RTCV(Result), tp1);
		} else {
			if (F1094_21150(Current)) {
				tr1 = F8_3637(RTCV(RTOUCR(206,F1094_21176,(Current))));
				loc1 = tr1;
				if (EIF_TEST(loc1)) {
					tp1 = eif_pointer_item(RTCV(loc1),1);
					*(EIF_POINTER *)(Current+ _PTROFF_7_8_0_5_0_3_) = (EIF_POINTER) tp1;
					tp1 = eif_pointer_item(RTCV(loc1),2);
					*(EIF_POINTER *)(Current+ _PTROFF_7_8_0_5_0_0_) = (EIF_POINTER) tp1;
				} else {
					{
					/* INLINED CODE (default_pointer) */
					tp1 = (EIF_POINTER)  0;
					/* END INLINED CODE */
					}
					tp2 = tp1;
					*(EIF_POINTER *)(Current+ _PTROFF_7_8_0_5_0_3_) = (EIF_POINTER) tp2;
					{
					/* INLINED CODE (default_pointer) */
					tp1 = (EIF_POINTER)  0;
					/* END INLINED CODE */
					}
					tp2 = tp1;
					*(EIF_POINTER *)(Current+ _PTROFF_7_8_0_5_0_0_) = (EIF_POINTER) tp2;
				}
			} else {
				tr1 = RTOUCR(206,F1094_21176,(Current));
				tp1 = F8_3634(RTCV(tr1), *(EIF_REFERENCE *)(Current + _REFACS_4_));
				*(EIF_POINTER *)(Current+ _PTROFF_7_8_0_5_0_3_) = (EIF_POINTER) tp1;
				{
				/* INLINED CODE (default_pointer) */
				tp1 = (EIF_POINTER)  0;
				/* END INLINED CODE */
				}
				tp2 = tp1;
				*(EIF_POINTER *)(Current+ _PTROFF_7_8_0_5_0_0_) = (EIF_POINTER) tp2;
			}
			*(EIF_BOOLEAN *)(Current+ _CHROFF_7_4_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			F593_17956(RTCV(Result), *(EIF_POINTER *)(Current+ _PTROFF_7_8_0_5_0_3_));
		}
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_8_0_3_) == ((EIF_INTEGER_32) 3L))) {
			tp1 = inline_F1094_21178();
			F593_17957(RTCV(Result), tp1);
		} else {
			if (F1094_21151(Current)) {
				tr1 = F8_3636(RTCV(RTOUCR(206,F1094_21176,(Current))));
				loc2 = tr1;
				if (EIF_TEST(loc2)) {
					tp1 = eif_pointer_item(RTCV(loc2),1);
					*(EIF_POINTER *)(Current+ _PTROFF_7_8_0_5_0_1_) = (EIF_POINTER) tp1;
					tp1 = eif_pointer_item(RTCV(loc2),2);
					*(EIF_POINTER *)(Current+ _PTROFF_7_8_0_5_0_4_) = (EIF_POINTER) tp1;
				} else {
					{
					/* INLINED CODE (default_pointer) */
					tp1 = (EIF_POINTER)  0;
					/* END INLINED CODE */
					}
					tp2 = tp1;
					*(EIF_POINTER *)(Current+ _PTROFF_7_8_0_5_0_1_) = (EIF_POINTER) tp2;
					{
					/* INLINED CODE (default_pointer) */
					tp1 = (EIF_POINTER)  0;
					/* END INLINED CODE */
					}
					tp2 = tp1;
					*(EIF_POINTER *)(Current+ _PTROFF_7_8_0_5_0_4_) = (EIF_POINTER) tp2;
				}
			} else {
				tr1 = RTOUCR(206,F1094_21176,(Current));
				tr2 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
				tp1 = F8_3635(RTCV(tr1), tr2, (EIF_BOOLEAN) 1);
				*(EIF_POINTER *)(Current+ _PTROFF_7_8_0_5_0_4_) = (EIF_POINTER) tp1;
				{
				/* INLINED CODE (default_pointer) */
				tp1 = (EIF_POINTER)  0;
				/* END INLINED CODE */
				}
				tp2 = tp1;
				*(EIF_POINTER *)(Current+ _PTROFF_7_8_0_5_0_1_) = (EIF_POINTER) tp2;
			}
			*(EIF_BOOLEAN *)(Current+ _CHROFF_7_5_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			F593_17957(RTCV(Result), *(EIF_POINTER *)(Current+ _PTROFF_7_8_0_5_0_4_));
		}
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_8_0_4_) == ((EIF_INTEGER_32) 3L))) {
			tp1 = inline_F1094_21179();
			F593_17958(RTCV(Result), tp1);
		} else {
			if (F1094_21149(Current)) {
				if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_8_0_3_) == ((EIF_INTEGER_32) 3L))) {
					tp1 = inline_F1094_21179();
					F593_17958(RTCV(Result), tp1);
				} else {
					*(EIF_POINTER *)(Current+ _PTROFF_7_8_0_5_0_5_) = (EIF_POINTER) *(EIF_POINTER *)(Current+ _PTROFF_7_8_0_5_0_4_);
					*(EIF_POINTER *)(Current+ _PTROFF_7_8_0_5_0_2_) = (EIF_POINTER) *(EIF_POINTER *)(Current+ _PTROFF_7_8_0_5_0_1_);
					F593_17958(RTCV(Result), *(EIF_POINTER *)(Current+ _PTROFF_7_8_0_5_0_5_));
				}
			} else {
				if (F1094_21152(Current)) {
					tr1 = F8_3636(RTCV(RTOUCR(206,F1094_21176,(Current))));
					loc3 = tr1;
					if (EIF_TEST(loc3)) {
						tp1 = eif_pointer_item(RTCV(loc3),1);
						*(EIF_POINTER *)(Current+ _PTROFF_7_8_0_5_0_2_) = (EIF_POINTER) tp1;
						tp1 = eif_pointer_item(RTCV(loc3),2);
						*(EIF_POINTER *)(Current+ _PTROFF_7_8_0_5_0_5_) = (EIF_POINTER) tp1;
					} else {
						{
						/* INLINED CODE (default_pointer) */
						tp1 = (EIF_POINTER)  0;
						/* END INLINED CODE */
						}
						tp2 = tp1;
						*(EIF_POINTER *)(Current+ _PTROFF_7_8_0_5_0_2_) = (EIF_POINTER) tp2;
						{
						/* INLINED CODE (default_pointer) */
						tp1 = (EIF_POINTER)  0;
						/* END INLINED CODE */
						}
						tp2 = tp1;
						*(EIF_POINTER *)(Current+ _PTROFF_7_8_0_5_0_5_) = (EIF_POINTER) tp2;
					}
				} else {
					tr1 = RTOUCR(206,F1094_21176,(Current));
					tr2 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
					tp1 = F8_3635(RTCV(tr1), tr2, (EIF_BOOLEAN) 1);
					*(EIF_POINTER *)(Current+ _PTROFF_7_8_0_5_0_5_) = (EIF_POINTER) tp1;
					{
					/* INLINED CODE (default_pointer) */
					tp1 = (EIF_POINTER)  0;
					/* END INLINED CODE */
					}
					tp2 = tp1;
					*(EIF_POINTER *)(Current+ _PTROFF_7_8_0_5_0_2_) = (EIF_POINTER) tp2;
				}
				F593_17958(RTCV(Result), *(EIF_POINTER *)(Current+ _PTROFF_7_8_0_5_0_5_));
				*(EIF_BOOLEAN *)(Current+ _CHROFF_7_6_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
		}
	}
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_7_1_)) {
		F593_17955(RTCV(Result), ((EIF_INTEGER_32) 0L));
	} else {
		F593_17955(RTCV(Result), ((EIF_INTEGER_32) 5L));
	}
	ti4_1 = (EIF_INTEGER_32) STARTF_USESHOWWINDOW;
	F593_17954(RTCV(Result), ti4_1);
	RTLE;
	return Result;
}

/* {WEL_PROCESS}.file_handle */
static EIF_REFERENCE F1094_21176_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(206)

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(7, 7, _OBJSIZ_1_2_0_2_0_0_0_0_);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1094_21176 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(206,F1094_21176_body,(Current));
}

/* {WEL_PROCESS}.stdin */
EIF_POINTER F1094_21177 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F1094_21177 ();
	return Result;
}

/* {WEL_PROCESS}.stdout */
EIF_POINTER F1094_21178 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F1094_21178 ();
	return Result;
}

/* {WEL_PROCESS}.stderr */
EIF_POINTER F1094_21179 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F1094_21179 ();
	return Result;
}

void EIF_Minit452 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
