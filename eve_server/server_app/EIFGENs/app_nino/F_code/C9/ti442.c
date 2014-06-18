/*
 * Code for class TIME
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ti442.h"
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

/* {TIME}.make */
void F1084_20910 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_REAL_64 tr8_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F137_7810(Current, arg1);
	F137_7811(Current, arg2);
	F137_7812(Current, arg3);
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_0_) = (EIF_REAL_64) tr8_1;
	RTLE;
}

/* {TIME}.make_fine */
void F1084_20911 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_REAL_64 arg3)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REAL_64 tr8_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	loc1 = (EIF_INTEGER_32) arg3;
	F1084_20910(Current, arg1, arg2, loc1);
	tr8_1 = (EIF_REAL_64) (loc1);
	*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_0_) = (EIF_REAL_64) (EIF_REAL_64) (arg3 - tr8_1);
	RTLE;
}

/* {TIME}.make_now */
void F1084_20912 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	
	RTGC;
	tr1 = RTLNS(18, 18, _OBJSIZ_1_1_0_1_0_0_0_0_);
	F19_3804(RTCV(tr1));
	loc1 = (EIF_REFERENCE) tr1;
	ti4_1 = F19_3811(RTCV(loc1));
	ti4_2 = F19_3812(RTCV(loc1));
	ti4_3 = F19_3813(RTCV(loc1));
	F1084_20910(Current, ti4_1, ti4_2, ti4_3);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_1_1_0_0_);
	*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_0_) = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (ti4_1) /  (EIF_REAL_64) (((EIF_INTEGER_32) 1000L)));
	RTLE;
}

/* {TIME}.origin */
static EIF_REFERENCE F1084_20919_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(70)

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(1083, 1083, _OBJSIZ_0_0_0_1_0_0_0_1_);
	F1084_20910(RTCV(tr1), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L));
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1084_20919 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(70,F1084_20919_body,(Current));
}

/* {TIME}.is_less */
EIF_BOOLEAN F1084_20920 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REAL_64 tr8_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_);
	loc2 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_0_0_0_0_);
	Result = '\01';
	if (!((EIF_BOOLEAN) (loc1 < loc2))) {
		tb1 = '\0';
		if ((EIF_BOOLEAN)(loc1 == loc2)) {
			tb2 = '\0';
			tr8_1 = *(EIF_REAL_64 *)(RTCV(arg1)+ _R64OFF_0_0_0_1_0_0_0_0_);
			if ((EIF_BOOLEAN) (*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_0_) < tr8_1)) {
				tr8_1 = *(EIF_REAL_64 *)(RTCV(arg1)+ _R64OFF_0_0_0_1_0_0_0_0_);
				tb2 = (EIF_BOOLEAN) ((EIF_REAL_64) (tr8_1 - *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_0_)) > (EIF_REAL_64) 1.0e-10);
			}
			tb1 = tb2;
		}
		Result = tb1;
	}
	RTLE;
	return Result;
}

/* {TIME}.duration */
EIF_REFERENCE F1084_20921 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,Result);
	
	RTGC;
	tr1 = RTLNS(531, 531, _OBJSIZ_0_0_0_2_0_0_0_1_);
	ti4_1 = F137_7801(Current);
	ti4_2 = F137_7802(Current);
	tr8_1 = F137_7806(Current);
	F532_10473(RTCV(tr1), ti4_1, ti4_2, tr8_1);
	Result = (EIF_REFERENCE) tr1;
	RTLE;
	return Result;
}

/* {TIME}.plus */
EIF_REFERENCE F1084_20924 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,arg1);
	
	RTGC;
	Result = (EIF_REFERENCE) eif_builtin_ANY_twin (Current);
	tr8_1 = *(EIF_REAL_64 *)(RTCV(arg1)+ _R64OFF_0_0_0_2_0_0_0_0_);
	F1084_20927(RTCV(Result), tr8_1);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_0_0_0_0_);
	F1084_20928(RTCV(Result), ti4_1);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_0_0_0_1_);
	F1084_20929(RTCV(Result), ti4_1);
	RTLE;
	return Result;
}

/* {TIME}.fine_second_add */
void F1084_20927 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	EIF_REAL_64 loc1 = (EIF_REAL_64) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	loc1 = F137_7806(Current);
	loc1 = (EIF_REAL_64) (EIF_REAL_64) (loc1 + arg1);
	tb1 = '\01';
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	if (!(EIF_BOOLEAN) (loc1 < tr8_1)) {
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 60L));
		tb1 = (EIF_BOOLEAN) (loc1 >= tr8_1);
	}
	if (tb1) {
		tr1 = RTLNS(1014, 1014, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)tr1 = loc1;
		
		ti4_1 = F1013_19806(RTCV(tr1));
		ti4_1 = F134_7783(Current, ti4_1, ((EIF_INTEGER_32) 60L));
		tr8_1 = (EIF_REAL_64) ((EIF_INTEGER_32) (ti4_1 * ((EIF_INTEGER_32) 60L)));
		F137_7813(Current, (EIF_REAL_64) (loc1 - tr8_1));
		tr1 = RTLNS(1014, 1014, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)tr1 = loc1;
		
		ti4_1 = F1013_19806(RTCV(tr1));
		ti4_1 = F134_7783(Current, ti4_1, ((EIF_INTEGER_32) 60L));
		F1084_20928(Current, ti4_1);
	} else {
		F137_7813(Current, loc1);
	}
	RTLE;
}

/* {TIME}.minute_add */
void F1084_20928 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	loc1 = F137_7802(Current);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + arg1);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 < ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN) (loc1 >= ((EIF_INTEGER_32) 60L)))) {
		ti4_1 = F134_7782(Current, loc1, ((EIF_INTEGER_32) 60L));
		F137_7811(Current, ti4_1);
		ti4_1 = F134_7783(Current, loc1, ((EIF_INTEGER_32) 60L));
		F1084_20929(Current, ti4_1);
	} else {
		F137_7811(Current, loc1);
	}
	RTLE;
}

/* {TIME}.hour_add */
void F1084_20929 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = F137_7801(Current);
	ti4_1 = F134_7782(Current, (EIF_INTEGER_32) (ti4_1 + arg1), ((EIF_INTEGER_32) 24L));
	F137_7810(Current, ti4_1);
	RTLE;
}

/* {TIME}.out */
EIF_REFERENCE F1084_20937 (EIF_REFERENCE Current)
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
	tr1 = F135_7791(Current);
	Result = F1084_20938(Current, tr1);
	RTLE;
	return Result;
}

/* {TIME}.formatted_out */
EIF_REFERENCE F1084_20938 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Current);
	
	RTGC;
	tr1 = RTLNS(1087, 1087, _OBJSIZ_4_2_0_1_0_0_0_0_);
	F1088_20992(RTCV(tr1), arg1);
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = F1088_21005(RTCV(loc1), Current);
	RTLE;
	return (EIF_REFERENCE) tr1;
}

void EIF_Minit442 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
