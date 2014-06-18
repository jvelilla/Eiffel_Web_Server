/*
 * Code for class WEL_API
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we8.h"
#include <windows.h>
#include <winbase.h>

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
#ifndef INLINE_F9_3730
static int inline_F9_3730 (EIF_POINTER arg1)
{
	return (BOOL) FreeLibrary ((HMODULE) arg1);
	;
}
#define INLINE_F9_3730
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_API}.create_process */
EIF_BOOLEAN F9_3701 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_POINTER arg4, EIF_BOOLEAN arg5, EIF_INTEGER_32 arg6, EIF_POINTER arg7, EIF_POINTER arg8, EIF_POINTER arg9, EIF_POINTER arg10)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	Result = (EIF_BOOLEAN) EIF_TEST(CreateProcess(((LPCTSTR) arg1), ((LPTSTR) arg2), ((LPSECURITY_ATTRIBUTES) arg3), ((LPSECURITY_ATTRIBUTES) arg4), ((BOOL) arg5), ((DWORD) arg6), ((LPVOID) arg7), ((LPCTSTR) arg8), ((LPSTARTUPINFO) arg9), ((LPPROCESS_INFORMATION) arg10)));
	return Result;
}

/* {WEL_API}.get_exit_code_process */
EIF_BOOLEAN F9_3711 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	Result = EIF_TEST(inline_F9_3711 ((EIF_POINTER) arg1, (EIF_POINTER) arg2));
	return Result;
}

/* {WEL_API}.still_active */
EIF_INTEGER_32 F9_3713 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) STILL_ACTIVE;
	return Result;
}

/* {WEL_API}.free_module */
EIF_BOOLEAN F9_3730 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	Result = EIF_TEST(inline_F9_3730 ((EIF_POINTER) arg1));
	return Result;
}

void EIF_Minit8 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
