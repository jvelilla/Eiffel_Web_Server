/*
 * Code for class WEL_PROCESS_LAUNCHER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we451.h"
#include <winbase.h>
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_PROCESS_LAUNCHER}.set_environment_variables */
void F1093_21109 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
}

/* {WEL_PROCESS_LAUNCHER}.run_hidden */
void F1093_21110 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current + O18287[Dtype(Current)-1092]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {WEL_PROCESS_LAUNCHER}.environment_variables */
EIF_REFERENCE F1093_21119 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {WEL_PROCESS_LAUNCHER}.spawn_with_flags */
void F1093_21120 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_POINTER loc5 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_POINTER tp4;
	EIF_POINTER tp5;
	EIF_POINTER tp6;
	EIF_POINTER tp7;
	EIF_POINTER tp8;
	EIF_POINTER tp9;
	EIF_POINTER tp10;
	EIF_POINTER tp11;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,loc3);
	RTLR(4,Current);
	RTLR(5,loc4);
	RTLR(6,arg2);
	RTLR(7,loc2);
	
	RTGC;
	tr1 = RTLNS(570, 570, _OBJSIZ_1_0_0_1_0_0_0_0_);
	F570_11721(RTCV(tr1), arg1);
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(591));
	F591_14797(RTCV(tr1));
	loc3 = (EIF_REFERENCE) tr1;
	RTAR(Current, loc3);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) loc3;
	loc4 = F1093_21121(Current);
	if ((EIF_BOOLEAN)(loc4 != NULL)) {
		loc5 = F570_11728(RTCV(loc4));
	}
	tb1 = '\0';
	if ((EIF_BOOLEAN)(arg2 != NULL)) {
		tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R15044[Dtype(arg2)-887])(RTCV(arg2));
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		tr1 = RTLNS(570, 570, _OBJSIZ_1_0_0_1_0_0_0_0_);
		F570_11721(RTCV(tr1), arg2);
		loc2 = (EIF_REFERENCE) tr1;
		{
		/* INLINED CODE (default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		tp2 = tp1;
		tp3 = F570_11728(RTCV(loc1));
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
		ti4_1 = (EIF_INTEGER_32) CREATE_UNICODE_ENVIRONMENT;
		ti4_1 = eif_bit_or(arg3,ti4_1);
		tp8 = F570_11728(RTCV(loc2));
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R18293[dtype-1092])(Current);
		tp9 = *(EIF_POINTER *)(RTCV(tr1)+ _PTROFF_1_1_0_0_0_0_);
		tp10 = *(EIF_POINTER *)(RTCV(loc3)+ _PTROFF_0_1_0_0_0_0_);
		tb1 = (EIF_BOOLEAN) EIF_TEST(CreateProcess(((LPCTSTR) tp2), ((LPTSTR) tp3), ((LPSECURITY_ATTRIBUTES) tp5), ((LPSECURITY_ATTRIBUTES) tp7), ((BOOL) (EIF_BOOLEAN) 1), ((DWORD) ti4_1), ((LPVOID) loc5), ((LPCTSTR) tp8), ((LPSTARTUPINFO) tp9), ((LPPROCESS_INFORMATION) tp10)));
		*(EIF_BOOLEAN *)(Current + O18285[dtype-1092]) = (EIF_BOOLEAN) tb1;
	} else {
		{
		/* INLINED CODE (default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		tp2 = tp1;
		tp3 = F570_11728(RTCV(loc1));
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
		ti4_1 = (EIF_INTEGER_32) CREATE_UNICODE_ENVIRONMENT;
		ti4_1 = eif_bit_or(arg3,ti4_1);
		{
		/* INLINED CODE (default_pointer) */
		tp8 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		tp9 = tp8;
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R18293[dtype-1092])(Current);
		tp10 = *(EIF_POINTER *)(RTCV(tr1)+ _PTROFF_1_1_0_0_0_0_);
		tp11 = *(EIF_POINTER *)(RTCV(loc3)+ _PTROFF_0_1_0_0_0_0_);
		tb1 = (EIF_BOOLEAN) EIF_TEST(CreateProcess(((LPCTSTR) tp2), ((LPTSTR) tp3), ((LPSECURITY_ATTRIBUTES) tp5), ((LPSECURITY_ATTRIBUTES) tp7), ((BOOL) (EIF_BOOLEAN) 1), ((DWORD) ti4_1), ((LPVOID) loc5), ((LPCTSTR) tp9), ((LPSTARTUPINFO) tp10), ((LPPROCESS_INFORMATION) tp11)));
		*(EIF_BOOLEAN *)(Current + O18285[dtype-1092]) = (EIF_BOOLEAN) tb1;
	}
	RTLE;
}

/* {WEL_PROCESS_LAUNCHER}.environment_variables_as_wel_string */
EIF_REFERENCE F1093_21121 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	
	RTGC;
	loc2 = *(EIF_REFERENCE *)(Current);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		tb2 = F316_9603(RTCV(loc2));
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		tr1 = RTLNS(891, 891, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F887_17089(RTCV(tr1), ((EIF_INTEGER_32) 512L));
		loc1 = (EIF_REFERENCE) tr1;
		F697_13037(RTCV(loc2));
		for (;;) {
			tb1 = F697_13032(RTCV(loc2));
			if (tb1) break;
			tb2 = '\0';
			tr1 = F697_13011(RTCV(loc2));
			if ((EIF_BOOLEAN)(tr1 != NULL)) {
				tr1 = F697_13010(RTCV(loc2));
				tb2 = (EIF_BOOLEAN)(tr1 != NULL);
			}
			if (tb2) {
				tr1 = F697_13011(RTCV(loc2));
				tr1 = F885_17053(RTCV(tr1));
				F892_17286(RTCV(loc1), tr1);
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '=';
				F892_17300(RTCV(loc1), tw1);
				tr1 = F697_13010(RTCV(loc2));
				tr1 = F885_17053(RTCV(tr1));
				F892_17286(RTCV(loc1), tr1);
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\000';
				F892_17300(RTCV(loc1), tw1);
			}
			F697_13038(RTCV(loc2));
		}
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\000';
		F892_17300(RTCV(loc1), tw1);
		tr1 = RTLNS(570, 570, _OBJSIZ_1_0_0_1_0_0_0_0_);
		F570_11721(RTCV(tr1), loc1);
		RTLE;
		return (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) 0;
}

/* {WEL_PROCESS_LAUNCHER}.input_pipe */
EIF_REFERENCE F1093_21122 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {WEL_PROCESS_LAUNCHER}.output_pipe */
EIF_REFERENCE F1093_21123 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {WEL_PROCESS_LAUNCHER}.startup_info */
EIF_REFERENCE F1093_21124 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,loc2);
	RTLR(4,Result);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(561));
	F562_11251(RTCV(tr1));
	loc1 = (EIF_REFERENCE) tr1;
	RTAR(Current, loc1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) loc1;
	tr1 = RTLNSMART(eif_non_attached_type(561));
	F562_11251(RTCV(tr1));
	loc2 = (EIF_REFERENCE) tr1;
	RTAR(Current, loc2);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) loc2;
	tr1 = RTLNS(592, 592, _OBJSIZ_1_1_0_0_0_1_0_0_);
	F593_17931(RTCV(tr1));
	Result = (EIF_REFERENCE) tr1;
	ti4_1 = (EIF_INTEGER_32) STARTF_USESTDHANDLES;
	F593_17953(RTCV(Result), ti4_1);
	if (*(EIF_BOOLEAN *)(Current + O18287[Dtype(Current)-1092])) {
		F593_17955(RTCV(Result), ((EIF_INTEGER_32) 0L));
	} else {
		F593_17955(RTCV(Result), ((EIF_INTEGER_32) 5L));
	}
	ti4_1 = (EIF_INTEGER_32) STARTF_USESHOWWINDOW;
	F593_17954(RTCV(Result), ti4_1);
	tp1 = *(EIF_POINTER *)(RTCV(loc1)+ _PTROFF_2_5_0_2_0_1_);
	F593_17956(RTCV(Result), tp1);
	tp1 = *(EIF_POINTER *)(RTCV(loc2)+ _PTROFF_2_5_0_2_0_1_);
	F593_17957(RTCV(Result), tp1);
	tp1 = *(EIF_POINTER *)(RTCV(loc2)+ _PTROFF_2_5_0_2_0_1_);
	F593_17958(RTCV(Result), tp1);
	RTLE;
	return Result;
}

/* {WEL_PROCESS_LAUNCHER}.process_info */
EIF_REFERENCE F1093_21125 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


void EIF_Minit451 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
