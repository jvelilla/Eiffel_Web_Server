/*
 * Code for class WEL_STARTUP_INFO
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we359.h"
#include <windows.h>
#include "wel_startup_info.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F593_17962
static void inline_F593_17962 (EIF_POINTER arg1)
{
	((LPSTARTUPINFO)arg1)->cb = sizeof (STARTUPINFO)
	;
}
#define INLINE_F593_17962
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_STARTUP_INFO}.make */
void F593_17931 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(570));
	F570_11722(RTCV(tr1), ((EIF_INTEGER_32) 0L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	F591_14797(Current);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_1_1_0_0_0_0_);
	inline_F593_17962(tp1);
	RTLE;
}

/* {WEL_STARTUP_INFO}.flags */
EIF_INTEGER_32 F593_17940 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_1_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) cwel_startup_info_flags(((LPSTARTUPINFO) tp1));
}

/* {WEL_STARTUP_INFO}.set_flags */
void F593_17953 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_1_1_0_0_0_0_);
	cwel_startup_info_set_flags(((LPSTARTUPINFO) tp1), ((DWORD) arg1));
}

/* {WEL_STARTUP_INFO}.add_flag */
void F593_17954 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	loc1 = F593_17940(Current);
	loc1 = F71_17494(Current, loc1, arg1);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_1_1_0_0_0_0_);
	cwel_startup_info_set_flags(((LPSTARTUPINFO) tp1), ((DWORD) loc1));
	RTLE;
}

/* {WEL_STARTUP_INFO}.set_show_command */
void F593_17955 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_1_1_0_0_0_0_);
	cwel_startup_info_set_show_command(((LPSTARTUPINFO) tp1), ((DWORD) arg1));
}

/* {WEL_STARTUP_INFO}.set_std_input */
void F593_17956 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_1_1_0_0_0_0_);
	cwel_startup_info_set_std_input(((LPSTARTUPINFO) tp1), ((HANDLE) arg1));
}

/* {WEL_STARTUP_INFO}.set_std_output */
void F593_17957 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_1_1_0_0_0_0_);
	cwel_startup_info_set_std_output(((LPSTARTUPINFO) tp1), ((HANDLE) arg1));
}

/* {WEL_STARTUP_INFO}.set_std_error */
void F593_17958 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_1_1_0_0_0_0_);
	cwel_startup_info_set_std_error(((LPSTARTUPINFO) tp1), ((HANDLE) arg1));
}

/* {WEL_STARTUP_INFO}.structure_size */
EIF_INTEGER_32 F593_17959 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (EIF_INTEGER_32) sizeof (STARTUPINFO);
}

/* {WEL_STARTUP_INFO}.internal_title */
EIF_REFERENCE F593_17960 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {WEL_STARTUP_INFO}.c_size_of_startup_info */
EIF_INTEGER_32 F593_17961 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (STARTUPINFO);
	return Result;
}

/* {WEL_STARTUP_INFO}.cwel_init */
void F593_17962 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	
	inline_F593_17962 ((EIF_POINTER) arg1);
}

/* {WEL_STARTUP_INFO}.cwel_startup_info_flags */
EIF_INTEGER_32 F593_17971 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) cwel_startup_info_flags(((LPSTARTUPINFO) arg1));
	return Result;
}

/* {WEL_STARTUP_INFO}.cwel_startup_info_set_flags */
void F593_17984 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_startup_info_set_flags(((LPSTARTUPINFO) arg1), ((DWORD) arg2));
}

/* {WEL_STARTUP_INFO}.cwel_startup_info_set_show_command */
void F593_17985 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_startup_info_set_show_command(((LPSTARTUPINFO) arg1), ((DWORD) arg2));
}

/* {WEL_STARTUP_INFO}.cwel_startup_info_set_std_input */
void F593_17986 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	cwel_startup_info_set_std_input(((LPSTARTUPINFO) arg1), ((HANDLE) arg2));
}

/* {WEL_STARTUP_INFO}.cwel_startup_info_set_std_output */
void F593_17987 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	cwel_startup_info_set_std_output(((LPSTARTUPINFO) arg1), ((HANDLE) arg2));
}

/* {WEL_STARTUP_INFO}.cwel_startup_info_set_std_error */
void F593_17988 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	cwel_startup_info_set_std_error(((LPSTARTUPINFO) arg1), ((HANDLE) arg2));
}

void EIF_Minit359 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
