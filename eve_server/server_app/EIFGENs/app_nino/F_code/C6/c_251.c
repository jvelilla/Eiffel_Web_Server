/*
 * Code for class C_STRING
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "c_251.h"
#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {C_STRING}.make */
void F563_11287 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15066[Dtype(arg1)-886])(RTCV(arg1));
	F563_11288(Current, ti4_1);
	F563_11312(Current, arg1);
	RTLE;
}

/* {C_STRING}.make_empty */
void F563_11288 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(583));
	F584_13499(RTCV(tr1), (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTLE;
}

/* {C_STRING}.make_shared_from_pointer */
void F563_11291 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = (EIF_INTEGER_32) strlen((char*) arg1);
	F563_11292(Current, arg1, ti4_1);
	RTLE;
}

/* {C_STRING}.make_shared_from_pointer_and_count */
void F563_11292 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) = (EIF_INTEGER_32) arg2;
	tr1 = RTLNSMART(eif_non_attached_type(583));
	F584_13502(RTCV(tr1), arg1, (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {C_STRING}.set_shared_from_pointer */
void F563_11295 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = (EIF_INTEGER_32) strlen((char*) arg1);
	F563_11296(Current, arg1, ti4_1);
	RTLE;
}

/* {C_STRING}.set_shared_from_pointer_and_count */
void F563_11296 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) = (EIF_INTEGER_32) arg2;
	tr1 = *(EIF_REFERENCE *)(Current);
	tb1 = *(EIF_BOOLEAN *)(RTCV(tr1)+ _CHROFF_0_0_);
	if ((EIF_BOOLEAN) !tb1) {
		tr1 = RTLNSMART(eif_non_attached_type(583));
		F584_13502(RTCV(tr1), arg1, (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L)));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	} else {
		tr1 = *(EIF_REFERENCE *)(Current);
		F584_13504(RTCV(tr1), arg1, (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L)));
	}
	RTLE;
}

/* {C_STRING}.substring */
EIF_REFERENCE F563_11299 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	
	RTGC;
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 - arg1) + ((EIF_INTEGER_32) 1L));
	tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F889_17162(RTCV(tr1), loc1);
	Result = (EIF_REFERENCE) tr1;
	F893_17425(RTCV(Result), loc1);
	F563_11302(Current, Result, arg1, arg2);
	RTLE;
	return Result;
}

/* {C_STRING}.string */
EIF_REFERENCE F563_11300 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	
	RTGC;
	tp1 = F563_11306(Current);
	ti4_1 = (EIF_INTEGER_32) strlen((char*) tp1);
	Result = F563_11299(Current, ((EIF_INTEGER_32) 1L), ti4_1);
	RTLE;
	return Result;
}

/* {C_STRING}.copy_to_string */
void F563_11301 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_8 tu1_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,arg1);
	
	RTGC;
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L));
	loc3 = (EIF_INTEGER_32) arg3;
	loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg2 + (EIF_INTEGER_32) (arg4 - ((EIF_INTEGER_32) 1L)));
	loc1 = *(EIF_REFERENCE *)(Current);
	for (;;) {
		if ((EIF_BOOLEAN)(loc2 == loc4)) break;
		tu1_1 = F584_13510(RTCV(loc1), loc2);
		tu4_1 = (EIF_NATURAL_32) tu1_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_NATURAL_32, EIF_INTEGER_32)) R15193[Dtype(arg1)-891])(RTCV(arg1), tu4_1, loc3);
		loc2++;
		loc3++;
	}
	RTLE;
}

/* {C_STRING}.read_substring_into */
void F563_11302 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_8 tu1_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,arg1);
	
	RTGC;
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L));
	loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg3 - arg2);
	loc1 = *(EIF_REFERENCE *)(Current);
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		if ((EIF_BOOLEAN) (loc2 > loc4)) break;
		tu1_1 = F584_13510(RTCV(loc1), loc2);
		tu4_1 = (EIF_NATURAL_32) tu1_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_NATURAL_32, EIF_INTEGER_32)) R15193[Dtype(arg1)-891])(RTCV(arg1), tu4_1, loc3);
		loc2++;
		loc3++;
	}
	RTLE;
}

/* {C_STRING}.read_string_into */
void F563_11303 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	
	
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
	F563_11302(Current, arg1, ((EIF_INTEGER_32) 1L), ti4_1);
}

/* {C_STRING}.read_substring_into_character_8_area */
void F563_11304 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_8 tu1_1;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,arg1);
	
	RTGC;
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L));
	loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg3 - arg2);
	loc1 = *(EIF_REFERENCE *)(Current);
	for (;;) {
		if ((EIF_BOOLEAN) (loc2 > loc4)) break;
		tu1_1 = F584_13510(RTCV(loc1), loc2);
		tc1 = (EIF_CHARACTER_8) tu1_1;
		/* INLINED CODE (SPECIAL.put) */
		*((EIF_CHARACTER_8 *)arg1 + (loc3)) = tc1;
		/* END INLINED CODE */
		;
		loc2++;
		loc3++;
	}
	RTLE;
}

/* {C_STRING}.item */
EIF_POINTER F563_11306 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	Result = *(EIF_POINTER *)(RTCV(tr1)+ _PTROFF_0_1_0_1_0_0_);
	RTLE;
	return Result;
}

/* {C_STRING}.managed_data */
EIF_REFERENCE F563_11307 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {C_STRING}.capacity */
EIF_INTEGER_32 F563_11308 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	Result = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_0_1_0_0_);
	RTLE;
	return Result;
}

/* {C_STRING}.set_string */
void F563_11312 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15066[Dtype(arg1)-886])(RTCV(arg1));
	F563_11313(Current, arg1, ((EIF_INTEGER_32) 1L), ti4_1);
	RTLE;
}

/* {C_STRING}.set_substring */
void F563_11313 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_8 tu1_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) = (EIF_INTEGER_32) loc2;
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_0_1_0_0_);
	if ((EIF_BOOLEAN) (ti4_1 < loc3)) {
		tr1 = *(EIF_REFERENCE *)(Current);
		F584_13583(RTCV(tr1), loc3);
	}
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		if ((EIF_BOOLEAN)(loc1 == loc2)) break;
		tr1 = *(EIF_REFERENCE *)(Current);
		tu4_1 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R15029[Dtype(arg1)-887])(RTCV(arg1), (EIF_INTEGER_32) (loc1 + arg2));
		tu1_1 = (EIF_NATURAL_8) tu4_1;
		F584_13526(RTCV(tr1), tu1_1, loc1);
		loc1++;
	}
	tr1 = *(EIF_REFERENCE *)(Current);
	tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	F584_13526(RTCV(tr1), tu1_1, loc2);
	RTLE;
}

/* {C_STRING}.set_count */
void F563_11314 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L));
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_0_1_0_0_);
	if ((EIF_BOOLEAN) (ti4_1 < loc1)) {
		tr1 = *(EIF_REFERENCE *)(Current);
		F584_13583(RTCV(tr1), loc1);
	}
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) = (EIF_INTEGER_32) arg1;
	RTLE;
}

/* {C_STRING}.c_strlen */
EIF_INTEGER_32 F563_11317 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) strlen((char*) arg1);
	
	return Result;
}

void EIF_Minit251 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
