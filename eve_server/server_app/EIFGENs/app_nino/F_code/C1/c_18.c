/*
 * Code for class C_DATE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "c_18.h"
#include <string.h>
#include <time.h>
#include <sys/timeb.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F19_3820
static void inline_F19_3820 (EIF_POINTER arg1, EIF_POINTER arg2)
{
	*(time_t *) arg2 = (((struct timeb *)arg1)->time);
	;
}
#define INLINE_F19_3820
#endif
#ifndef INLINE_F19_3823
static EIF_POINTER inline_F19_3823 (EIF_POINTER arg1)
{
	return (EIF_POINTER) (gmtime ((time_t *) arg1))
	;
}
#define INLINE_F19_3823
#endif
#ifndef INLINE_F19_3822
static EIF_POINTER inline_F19_3822 (EIF_POINTER arg1)
{
	return (EIF_POINTER) (localtime ((time_t *) arg1))
	;
}
#define INLINE_F19_3822
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {C_DATE}.default_create */
void F19_3804 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	F19_3807(Current);
	RTLE;
}

/* {C_DATE}.make_utc */
void F19_3805 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	F19_3807(Current);
	RTLE;
}

/* {C_DATE}.update */
void F19_3807 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_POINTER loc3 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	ti4_1 = (EIF_INTEGER_32) sizeof(struct timeb);
	loc1 = malloc((size_t)ti4_1);
	ti4_1 = (EIF_INTEGER_32) sizeof(time_t);
	loc3 = malloc((size_t)ti4_1);
	ftime(((struct timeb*) loc1));
	inline_F19_3820(loc1, loc3);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_)) {
		loc2 = inline_F19_3823(loc3);
	} else {
		loc2 = inline_F19_3822(loc3);
	}
	tr1 = RTLNSMART(eif_non_attached_type(583));
	ti4_1 = (EIF_INTEGER_32) sizeof(struct tm);
	F584_13501(RTCV(tr1), loc2, ti4_1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	loc4 = (EIF_INTEGER_32) (((struct timeb *)loc1)->millitm);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc4 < ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN) (loc4 > ((EIF_INTEGER_32) 999L)))) {
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	} else {
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) loc4;
	}
	free(loc1);
	free(loc3);
	RTLE;
}

/* {C_DATE}.year_now */
EIF_INTEGER_32 F19_3808 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	tp1 = *(EIF_POINTER *)(RTCV(tr1)+ _PTROFF_0_1_0_1_0_0_);
	Result = (EIF_INTEGER_32) (((struct tm *)tp1)->tm_year);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 1900L) + Result);
	RTLE;
	return Result;
}

/* {C_DATE}.month_now */
EIF_INTEGER_32 F19_3809 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	tp1 = *(EIF_POINTER *)(RTCV(tr1)+ _PTROFF_0_1_0_1_0_0_);
	Result = (EIF_INTEGER_32) (((struct tm *)tp1)->tm_mon);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + ((EIF_INTEGER_32) 1L));
	RTLE;
	return Result;
}

/* {C_DATE}.day_now */
EIF_INTEGER_32 F19_3810 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	tp1 = *(EIF_POINTER *)(RTCV(tr1)+ _PTROFF_0_1_0_1_0_0_);
	Result = (EIF_INTEGER_32) (((struct tm *)tp1)->tm_mday);
	RTLE;
	return Result;
}

/* {C_DATE}.hour_now */
EIF_INTEGER_32 F19_3811 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	tp1 = *(EIF_POINTER *)(RTCV(tr1)+ _PTROFF_0_1_0_1_0_0_);
	Result = (EIF_INTEGER_32) (((struct tm *)tp1)->tm_hour);
	RTLE;
	return Result;
}

/* {C_DATE}.minute_now */
EIF_INTEGER_32 F19_3812 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	tp1 = *(EIF_POINTER *)(RTCV(tr1)+ _PTROFF_0_1_0_1_0_0_);
	Result = (EIF_INTEGER_32) (((struct tm *)tp1)->tm_min);
	RTLE;
	return Result;
}

/* {C_DATE}.second_now */
EIF_INTEGER_32 F19_3813 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	tp1 = *(EIF_POINTER *)(RTCV(tr1)+ _PTROFF_0_1_0_1_0_0_);
	Result = (EIF_INTEGER_32) (((struct tm *)tp1)->tm_sec);
	if ((EIF_BOOLEAN) (Result > ((EIF_INTEGER_32) 59L))) {
		RTLE;
		return (EIF_INTEGER_32) ((EIF_INTEGER_32) 59L);
	}
	RTLE;
	return Result;
}

/* {C_DATE}.ftime */
void F19_3815 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	
	ftime(((struct timeb*) arg1));
}

/* {C_DATE}.timeb_structure_size */
EIF_INTEGER_32 F19_3816 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof(struct timeb);
	return Result;
}

/* {C_DATE}.time_t_structure_size */
EIF_INTEGER_32 F19_3817 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof(time_t);
	return Result;
}

/* {C_DATE}.tm_structure_size */
EIF_INTEGER_32 F19_3818 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof(struct tm);
	return Result;
}

/* {C_DATE}.get_millitm */
EIF_INTEGER_32 F19_3819 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((struct timeb *)arg1)->millitm);
	
	return Result;
}

/* {C_DATE}.get_time */
void F19_3820 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	inline_F19_3820 ((EIF_POINTER) arg1, (EIF_POINTER) arg2);
}

/* {C_DATE}.internal_item */
EIF_REFERENCE F19_3821 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {C_DATE}.localtime */
EIF_POINTER F19_3822 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F19_3822 ((EIF_POINTER) arg1);
	return Result;
}

/* {C_DATE}.gmtime */
EIF_POINTER F19_3823 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F19_3823 ((EIF_POINTER) arg1);
	return Result;
}

/* {C_DATE}.get_tm_year */
EIF_INTEGER_32 F19_3824 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((struct tm *)arg1)->tm_year);
	
	return Result;
}

/* {C_DATE}.get_tm_mon */
EIF_INTEGER_32 F19_3825 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((struct tm *)arg1)->tm_mon);
	
	return Result;
}

/* {C_DATE}.get_tm_mday */
EIF_INTEGER_32 F19_3826 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((struct tm *)arg1)->tm_mday);
	
	return Result;
}

/* {C_DATE}.get_tm_hour */
EIF_INTEGER_32 F19_3827 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((struct tm *)arg1)->tm_hour);
	
	return Result;
}

/* {C_DATE}.get_tm_min */
EIF_INTEGER_32 F19_3828 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((struct tm *)arg1)->tm_min);
	
	return Result;
}

/* {C_DATE}.get_tm_sec */
EIF_INTEGER_32 F19_3829 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((struct tm *)arg1)->tm_sec);
	
	return Result;
}

void EIF_Minit18 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
