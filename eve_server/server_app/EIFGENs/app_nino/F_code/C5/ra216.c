/*
 * Code for class RANDOM
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ra216.h"
#include <math.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {RANDOM}.make */
void F461_9974 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = RTOUCB(EIF_INTEGER_32,176,F461_9976,(Current));
	F461_9975(Current, ti4_1);
	F460_9958(Current);
	RTLE;
}

/* {RANDOM}.set_seed */
void F461_9975 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_1_) = (EIF_INTEGER_32) arg1;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_3_) = (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_1_);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTLE;
}

/* {RANDOM}.default_seed */
static EIF_INTEGER_32 F461_9976_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 176)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 123457L);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F461_9976 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,176,F461_9976_body,(Current));
}

/* {RANDOM}.modulus */
static EIF_INTEGER_32 F461_9977_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 177)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2147483647L);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F461_9977 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,177,F461_9977_body,(Current));
}

/* {RANDOM}.multiplier */
static EIF_INTEGER_32 F461_9978_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 178)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 16807L);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F461_9978 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,178,F461_9978_body,(Current));
}

/* {RANDOM}.increment */
static EIF_INTEGER_32 F461_9979_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 179)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F461_9979 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,179,F461_9979_body,(Current));
}

/* {RANDOM}.i_th */
EIF_INTEGER_32 F461_9983 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN) (arg1 >= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_2_))) {
		Result = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_3_);
		loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_2_);
	} else {
		Result = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_1_);
	}
	for (;;) {
		if ((EIF_BOOLEAN)(loc1 == arg1)) break;
		Result = F461_9988(Current, Result);
		loc1++;
	}
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_3_) = (EIF_INTEGER_32) Result;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_2_) = (EIF_INTEGER_32) arg1;
	RTLE;
	return Result;
}

/* {RANDOM}.randomize */
EIF_INTEGER_32 F461_9988 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REAL_64 loc1 = (EIF_REAL_64) 0;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_64 tr8_4;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tr8_1 = RTOUCB(EIF_REAL_64,180,F461_9993,(Current));
	tr8_2 = (EIF_REAL_64) (arg1);
	tr8_3 = RTOUCB(EIF_REAL_64,181,F461_9994,(Current));
	tr8_4 = RTOUCB(EIF_REAL_64,182,F461_9992,(Current));
	loc1 = F461_9989(Current, (EIF_REAL_64) ((EIF_REAL_64) (tr8_1 * tr8_2) + tr8_3), tr8_4);
	ti4_1 = (EIF_INTEGER_32) loc1;
	RTLE;
	return (EIF_INTEGER_32) ti4_1;
}

/* {RANDOM}.double_mod */
EIF_REAL_64 F461_9989 (EIF_REFERENCE Current, EIF_REAL_64 arg1, EIF_REAL_64 arg2)
{
	GTCX
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	
	
	RTGC;
	Result = (EIF_REAL_64) floor((double) (EIF_REAL_64) ((EIF_REAL_64) (arg1) /  (EIF_REAL_64) (arg2)));
	Result = (EIF_REAL_64) (EIF_REAL_64) (arg1 - (EIF_REAL_64) (Result * arg2));
	return Result;
}

/* {RANDOM}.dmod */
static EIF_REAL_64 F461_9992_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
#define Result RTOTRB(EIF_REAL_64)
	RTOUDB(EIF_REAL_64, 182)

	RTLI(1);
	RTLR(0,Current);
	
	RTEV;
	RTGC;
	RTOTP;
	ti4_1 = RTOUCB(EIF_INTEGER_32,177,F461_9977,(Current));
	Result = (EIF_REAL_64) (ti4_1);
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REAL_64 F461_9992 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_REAL_64,182,F461_9992_body,(Current));
}

/* {RANDOM}.dmul */
static EIF_REAL_64 F461_9993_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
#define Result RTOTRB(EIF_REAL_64)
	RTOUDB(EIF_REAL_64, 180)

	RTLI(1);
	RTLR(0,Current);
	
	RTEV;
	RTGC;
	RTOTP;
	ti4_1 = RTOUCB(EIF_INTEGER_32,178,F461_9978,(Current));
	Result = (EIF_REAL_64) (ti4_1);
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REAL_64 F461_9993 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_REAL_64,180,F461_9993_body,(Current));
}

/* {RANDOM}.dinc */
static EIF_REAL_64 F461_9994_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
#define Result RTOTRB(EIF_REAL_64)
	RTOUDB(EIF_REAL_64, 181)

	RTLI(1);
	RTLR(0,Current);
	
	RTEV;
	RTGC;
	RTOTP;
	ti4_1 = RTOUCB(EIF_INTEGER_32,179,F461_9979,(Current));
	Result = (EIF_REAL_64) (ti4_1);
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REAL_64 F461_9994 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_REAL_64,181,F461_9994_body,(Current));
}

void EIF_Minit216 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
