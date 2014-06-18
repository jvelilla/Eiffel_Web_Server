/*
 * Code for class FILE_HANDLE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "fi7.h"
#include <windows.h>
#include <winbase.h>
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F8_3646
static int inline_F8_3646 (EIF_POINTER arg1, EIF_POINTER* arg2)
{
	return EIF_TEST(DuplicateHandle (
	GetCurrentProcess(),
	(HANDLE) arg1,
	GetCurrentProcess(),
	(HANDLE *) arg2,
	0,
	TRUE,
	DUPLICATE_SAME_ACCESS));
	;
}
#define INLINE_F8_3646
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {FILE_HANDLE}.open_file_inheritable */
EIF_POINTER F8_3634 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_POINTER tp4;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,arg1);
	RTLR(4,Current);
	
	RTGC;
	tr1 = RTLNS(593, 593, _OBJSIZ_0_1_0_0_0_1_0_0_);
	F594_16546(RTCV(tr1));
	loc1 = (EIF_REFERENCE) tr1;
	F594_16548(RTCV(loc1), (EIF_BOOLEAN) 1);
	tr1 = RTLNS(570, 570, _OBJSIZ_1_0_0_1_0_0_0_0_);
	F570_11721(RTCV(tr1), arg1);
	loc2 = (EIF_REFERENCE) tr1;
	tp1 = F570_11728(RTCV(loc2));
	ti4_1 = eif_bit_or(((EIF_INTEGER_32) 1L),((EIF_INTEGER_32) 2L));
	tp2 = *(EIF_POINTER *)(RTCV(loc1)+ _PTROFF_0_1_0_0_0_0_);
	{
	/* INLINED CODE (default_pointer) */
	tp3 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	tp4 = tp3;
	Result = (EIF_POINTER) CreateFile(((LPCTSTR) tp1), ((DWORD) ((EIF_INTEGER_32) 0x80000000L)), ((DWORD) ti4_1), ((LPSECURITY_ATTRIBUTES) tp2), ((DWORD) ((EIF_INTEGER_32) 3L)), ((DWORD) ((EIF_INTEGER_32) 128L)), ((HANDLE) tp4));
	RTLE;
	return Result;
}

/* {FILE_HANDLE}.create_file_inheritable */
EIF_POINTER F8_3635 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_BOOLEAN arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32* loc4 = (EIF_INTEGER_32*) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_POINTER tp4;
	EIF_REFERENCE tr1 = NULL;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,arg1);
	RTLR(4,Current);
	
	RTGC;
	tr1 = RTLNS(593, 593, _OBJSIZ_0_1_0_0_0_1_0_0_);
	F594_16546(RTCV(tr1));
	loc1 = (EIF_REFERENCE) tr1;
	F594_16548(RTCV(loc1), (EIF_BOOLEAN) 1);
	tr1 = RTLNS(570, 570, _OBJSIZ_1_0_0_1_0_0_0_0_);
	F570_11721(RTCV(tr1), arg1);
	loc2 = (EIF_REFERENCE) tr1;
	if (arg2) {
		loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	} else {
		loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	}
	tp1 = F570_11728(RTCV(loc2));
	tp2 = *(EIF_POINTER *)(RTCV(loc1)+ _PTROFF_0_1_0_0_0_0_);
	{
	/* INLINED CODE (default_pointer) */
	tp3 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	tp4 = tp3;
	Result = (EIF_POINTER) CreateFile(((LPCTSTR) tp1), ((DWORD) ((EIF_INTEGER_32) 1073741824L)), ((DWORD) ((EIF_INTEGER_32) 1L)), ((LPSECURITY_ATTRIBUTES) tp2), ((DWORD) loc3), ((DWORD) ((EIF_INTEGER_32) 0x80000000L)), ((HANDLE) tp4));
	if (arg2) {
		SetFilePointer(((HANDLE) Result), ((LONG) ((EIF_INTEGER_32) 0L)), ((PLONG) loc4), ((DWORD) ((EIF_INTEGER_32) 2L)));
	}
	RTLE;
	return Result;
}

/* {FILE_HANDLE}.create_pipe_write_inheritable */
EIF_REFERENCE F8_3636 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_POINTER loc3 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	
	RTGC;
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	tp2 = tp1;
	if ((EIF_BOOLEAN) EIF_TEST(CreatePipe(((PHANDLE) (EIF_POINTER *) &(loc1)), ((PHANDLE) (EIF_POINTER *) &(loc3)), ((LPSECURITY_ATTRIBUTES) tp2), ((DWORD) ((EIF_INTEGER_32) 0L))))) {
		if (EIF_TEST (inline_F8_3646(loc3, (EIF_POINTER *) &(loc2)))) {
			if (F8_3643(Current, loc3)) {
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,823,865,865,0xFFFF};
					EIF_TYPE_INDEX typres0;
					static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
					
					typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
					tr1 = RTLNTS(typres0, 3, 1);
				}
				((EIF_TYPED_VALUE *)tr1+1)->it_p = loc1;
				((EIF_TYPED_VALUE *)tr1+2)->it_p = loc2;
				Result = (EIF_REFERENCE) tr1;
			} else {
				{
				/* INLINED CODE (display_error) */
				/* END INLINED CODE */
				}
				;
			}
		} else {
			{
			/* INLINED CODE (display_error) */
			/* END INLINED CODE */
			}
			;
		}
	} else {
		{
		/* INLINED CODE (display_error) */
		/* END INLINED CODE */
		}
		;
	}
	RTLE;
	return Result;
}

/* {FILE_HANDLE}.create_pipe_read_inheritable */
EIF_REFERENCE F8_3637 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_POINTER loc3 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	
	RTGC;
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	tp2 = tp1;
	if ((EIF_BOOLEAN) EIF_TEST(CreatePipe(((PHANDLE) (EIF_POINTER *) &(loc3)), ((PHANDLE) (EIF_POINTER *) &(loc2)), ((LPSECURITY_ATTRIBUTES) tp2), ((DWORD) ((EIF_INTEGER_32) 0L))))) {
		if (EIF_TEST (inline_F8_3646(loc3, (EIF_POINTER *) &(loc1)))) {
			if (F8_3643(Current, loc3)) {
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,823,865,865,0xFFFF};
					EIF_TYPE_INDEX typres0;
					static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
					
					typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
					tr1 = RTLNTS(typres0, 3, 1);
				}
				((EIF_TYPED_VALUE *)tr1+1)->it_p = loc1;
				((EIF_TYPED_VALUE *)tr1+2)->it_p = loc2;
				Result = (EIF_REFERENCE) tr1;
			} else {
				{
				/* INLINED CODE (display_error) */
				/* END INLINED CODE */
				}
				;
			}
		} else {
			{
			/* INLINED CODE (display_error) */
			/* END INLINED CODE */
			}
			;
		}
	} else {
		{
		/* INLINED CODE (display_error) */
		/* END INLINED CODE */
		}
		;
	}
	RTLE;
	return Result;
}

/* {FILE_HANDLE}.last_string */
EIF_REFERENCE F8_3640 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {FILE_HANDLE}.close */
EIF_BOOLEAN F8_3643 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) EIF_TEST(CloseHandle(((HANDLE) arg1)));
}

/* {FILE_HANDLE}.read_stream */
void F8_3644 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	
	RTGC;
	tr1 = RTLNS(562, 562, _OBJSIZ_1_0_0_1_0_0_0_0_);
	F563_11288(RTCV(tr1), arg2);
	loc1 = (EIF_REFERENCE) tr1;
	tp1 = F563_11306(RTCV(loc1));
	{
	/* INLINED CODE (default_pointer) */
	tp2 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	tp3 = tp2;
	loc2 = F8_3652(Current, arg1, tp1, arg2, (EIF_INTEGER_32 *) &(loc3), tp3);
	for (;;) {
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !loc2 || (EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 0L)))) break;
		tp1 = F563_11306(RTCV(loc1));
		{
		/* INLINED CODE (default_pointer) */
		tp2 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		tp3 = tp2;
		loc2 = F8_3652(Current, arg1, tp1, arg2, (EIF_INTEGER_32 *) &(loc3), tp3);
	}
	if (loc2) {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_1_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		F563_11314(RTCV(loc1), loc3);
		tr1 = F563_11299(RTCV(loc1), ((EIF_INTEGER_32) 1L), loc3);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	} else {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_1_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) NULL;
	}
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_2_0_1_) = (EIF_INTEGER_32) loc3;
	RTLE;
}

/* {FILE_HANDLE}.duplicate_handle */
EIF_BOOLEAN F8_3646 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER* arg2)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	Result = EIF_TEST(inline_F8_3646 ((EIF_POINTER) arg1, (EIF_POINTER*) arg2));
	return Result;
}

/* {FILE_HANDLE}.put_string */
void F8_3648 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg2);
	RTLR(3,Current);
	
	RTGC;
	tr1 = RTLNS(562, 562, _OBJSIZ_1_0_0_1_0_0_0_0_);
	F563_11287(RTCV(tr1), arg2);
	loc1 = (EIF_REFERENCE) tr1;
	tp1 = F563_11306(RTCV(loc1));
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg2)+ _LNGOFF_1_1_0_2_);
	{
	/* INLINED CODE (default_pointer) */
	tp2 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	tp3 = tp2;
	tb1 = F8_3653(Current, arg1, tp1, ti4_1, (EIF_INTEGER_32 *) &(loc2), tp3);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_) = (EIF_BOOLEAN) tb1;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_2_0_0_) = (EIF_INTEGER_32) loc2;
	RTLE;
}

/* {FILE_HANDLE}.display_error */
void F8_3649 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {FILE_HANDLE}.cwin_create_pipe */
EIF_BOOLEAN F8_3650 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	Result = (EIF_BOOLEAN) EIF_TEST(CreatePipe(((PHANDLE) arg1), ((PHANDLE) arg2), ((LPSECURITY_ATTRIBUTES) arg3), ((DWORD) arg4)));
	return Result;
}

/* {FILE_HANDLE}.cwin_create_file */
EIF_POINTER F8_3651 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4, EIF_INTEGER_32 arg5, EIF_INTEGER_32 arg6, EIF_POINTER arg7)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) CreateFile(((LPCTSTR) arg1), ((DWORD) arg2), ((DWORD) arg3), ((LPSECURITY_ATTRIBUTES) arg4), ((DWORD) arg5), ((DWORD) arg6), ((HANDLE) arg7));
	return Result;
}

/* {FILE_HANDLE}.cwin_read_file */
EIF_BOOLEAN F8_3652 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4, EIF_POINTER arg5)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	EIF_ENTER_C;
	Result = (EIF_BOOLEAN) EIF_TEST(ReadFile(((HANDLE) arg1), ((LPVOID) arg2), ((DWORD) arg3), ((LPDWORD) arg4), ((LPOVERLAPPED) arg5)));
	EIF_EXIT_C;
	RTGC;
	return Result;
}

/* {FILE_HANDLE}.cwin_write_file */
EIF_BOOLEAN F8_3653 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4, EIF_POINTER arg5)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	EIF_ENTER_C;
	Result = (EIF_BOOLEAN) EIF_TEST(WriteFile(((HANDLE) arg1), ((LPCVOID) arg2), ((DWORD) arg3), ((LPDWORD) arg4), ((LPOVERLAPPED) arg5)));
	EIF_EXIT_C;
	RTGC;
	return Result;
}

/* {FILE_HANDLE}.cwin_close_handle */
EIF_BOOLEAN F8_3654 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	Result = (EIF_BOOLEAN) EIF_TEST(CloseHandle(((HANDLE) arg1)));
	return Result;
}

/* {FILE_HANDLE}.cwin_set_file_pointer */
void F8_3656 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32* arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	
	
	SetFilePointer(((HANDLE) arg1), ((LONG) arg2), ((PLONG) arg3), ((DWORD) arg4));
}

void EIF_Minit7 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
