/*
 * Code for class EXECUTION_ENVIRONMENT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ex276.h"
#include <string.h>
#include "eif_dir.h"
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F572_11795
static EIF_POINTER inline_F572_11795 (EIF_INTEGER_32 arg1)
{
	if (eif_environ) {
	#ifdef EIF_WINDOWS
		EIF_NATIVE_CHAR *vars = (EIF_NATIVE_CHAR *) eif_environ;
		int cnt = 0;
		for (; *vars; vars++) {
		   if (arg1==cnt) return vars;
		   while (*vars) { vars++; }
		   cnt++;
		}
		return NULL;
	#else
		return ((EIF_NATIVE_CHAR **)eif_environ)[arg1];
	#endif
} else {
	return NULL;
}
	;
}
#define INLINE_F572_11795
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EXECUTION_ENVIRONMENT}.current_working_path */
EIF_REFERENCE F572_11775 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,loc3);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Result);
	
	RTGC;
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 50L);
	tr1 = RTLNS(583, 583, _OBJSIZ_0_1_0_1_0_1_1_0_);
	F584_13499(RTCV(tr1), loc1);
	loc3 = (EIF_REFERENCE) tr1;
	tp1 = *(EIF_POINTER *)(RTCV(loc3)+ _PTROFF_0_1_0_1_0_0_);
	loc2 = (EIF_INTEGER_32) eif_dir_current((EIF_FILENAME) tp1, (EIF_INTEGER) loc1);
	if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) -1L))) {
		tr1 = RTLNS(903, 903, _OBJSIZ_2_1_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H(".",1,46);
		F904_18709(RTCV(tr1), tr2);
		Result = (EIF_REFERENCE) tr1;
	} else {
		if ((EIF_BOOLEAN) (loc2 > loc1)) {
			loc1 = (EIF_INTEGER_32) loc2;
			F584_13583(RTCV(loc3), loc1);
			tp1 = *(EIF_POINTER *)(RTCV(loc3)+ _PTROFF_0_1_0_1_0_0_);
			loc2 = (EIF_INTEGER_32) eif_dir_current((EIF_FILENAME) tp1, (EIF_INTEGER) loc1);
		}
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (loc2 <= loc1))) {
			tr1 = RTLNS(903, 903, _OBJSIZ_2_1_0_0_0_0_0_0_);
			tp1 = *(EIF_POINTER *)(RTCV(loc3)+ _PTROFF_0_1_0_1_0_0_);
			F904_18713(RTCV(tr1), tp1);
			Result = (EIF_REFERENCE) tr1;
		} else {
			tr1 = RTLNS(903, 903, _OBJSIZ_2_1_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H(".",1,46);
			F904_18709(RTCV(tr1), tr2);
			Result = (EIF_REFERENCE) tr1;
		}
	}
	RTLE;
	return Result;
}

/* {EXECUTION_ENVIRONMENT}.starting_environment */
EIF_REFERENCE F572_11786 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,loc3);
	RTLR(4,loc4);
	RTLR(5,tr2);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {696,891,891,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNS(typres0, 696, _OBJSIZ_7_3_0_7_0_0_0_0_);
	}
	F697_13000(RTCV(tr1), ((EIF_INTEGER_32) 40L));
	Result = (EIF_REFERENCE) tr1;
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	loc1 = inline_F572_11795(loc2);
	tr1 = RTLNS(569, 569, _OBJSIZ_1_0_0_1_0_0_0_0_);
	F570_11722(RTCV(tr1), ((EIF_INTEGER_32) 0L));
	loc3 = (EIF_REFERENCE) tr1;
	for (;;) {
		tb1 = !loc1;
		if (tb1) break;
		F570_11738(RTCV(loc3), loc1);
		tr1 = F570_11726(RTCV(loc3));
		tr1 = F572_11796(Current, tr1);
		loc4 = tr1;
		if (EIF_TEST(loc4)) {
			tr1 = eif_boxed_item(loc4,1);
			tr2 = eif_boxed_item(loc4,2);
			F697_13045(RTCV(Result), tr1, tr2);
		}
		loc2++;
		loc1 = inline_F572_11795(loc2);
	}
	RTLE;
	return Result;
}

/* {EXECUTION_ENVIRONMENT}.sleep */
void F572_11793 (EIF_REFERENCE Current, EIF_INTEGER_64 arg1)
{
	GTCX
	
	
	F572_11806(Current, arg1);
}

/* {EXECUTION_ENVIRONMENT}.i_th_environ */
EIF_POINTER F572_11795 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F572_11795 ((EIF_INTEGER_32) arg1);
	return Result;
}

/* {EXECUTION_ENVIRONMENT}.separated_variables */
EIF_REFERENCE F572_11796 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc3 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,Result);
	
	RTGC;
	loc2 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_1_1_0_2_);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 > loc2) || loc3)) break;
		tw1 = F892_17252(RTCV(arg1), loc1);
		tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '=';
		if ((EIF_BOOLEAN)(tw1 == tw2)) {
			loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			loc1++;
		}
	}
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 1L)) && (EIF_BOOLEAN) (loc1 < loc2))) {
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,823,891,891,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr1 = RTLNTS(typres0, 3, 0);
		}
		tr2 = F892_17332(RTCV(arg1), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)), loc2);
		((EIF_TYPED_VALUE *)tr1+1)->it_r = tr2;
		RTAR(tr1,tr2);
		tr2 = F892_17332(RTCV(arg1), ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)));
		((EIF_TYPED_VALUE *)tr1+2)->it_r = tr2;
		RTAR(tr1,tr2);
		Result = (EIF_REFERENCE) tr1;
	}
	RTLE;
	return Result;
}

/* {EXECUTION_ENVIRONMENT}.eif_dir_current */
EIF_INTEGER_32 F572_11798 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) eif_dir_current((EIF_FILENAME) arg1, (EIF_INTEGER) arg2);
	
	return Result;
}

/* {EXECUTION_ENVIRONMENT}.eif_sleep */
void F572_11806 (EIF_REFERENCE Current, EIF_INTEGER_64 arg1)
{
	GTCX
	
	
	EIF_ENTER_C;eif_sleep(arg1);
	
	EIF_EXIT_C;
	RTGC;
}

void EIF_Minit276 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
