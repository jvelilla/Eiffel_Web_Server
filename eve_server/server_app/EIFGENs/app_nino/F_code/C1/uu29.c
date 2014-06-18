/*
 * Code for class UUID_GENERATOR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "uu29.h"
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

/* {UUID_GENERATOR}.generate_uuid */
EIF_REFERENCE F31_3976 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {731,1017,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0, 731, _OBJSIZ_1_1_0_2_0_0_0_0_);
	}
	F732_12305(RTCV(tr1), ((EIF_NATURAL_8) 0U), ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 16L));
	loc1 = (EIF_REFERENCE) tr1;
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 16L))) break;
		tu1_1 = F31_3977(Current);
		F732_12330(RTCV(loc1), tu1_1, loc2);
		loc2++;
	}
	tu1_1 = F732_12310(RTCV(loc1), ((EIF_INTEGER_32) 7L));
	tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 15L);
	tu1_1 = eif_bit_and(tu1_1,tu1_2);
	tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 64L);
	tu1_1 = eif_bit_or(tu1_1,tu1_2);
	F732_12330(RTCV(loc1), tu1_1, ((EIF_INTEGER_32) 7L));
	tu1_1 = F732_12310(RTCV(loc1), ((EIF_INTEGER_32) 9L));
	tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 63L);
	tu1_1 = eif_bit_and(tu1_1,tu1_2);
	tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 128L);
	tu1_1 = eif_bit_or(tu1_1,tu1_2);
	F732_12330(RTCV(loc1), tu1_1, ((EIF_INTEGER_32) 9L));
	tr1 = RTLNS(822, 822, _OBJSIZ_0_0_3_1_0_0_1_0_);
	F823_16613(RTCV(tr1), loc1);
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {UUID_GENERATOR}.rand_byte */
EIF_NATURAL_8 F31_3977 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTOUCR(56,F31_3979,(Current));
	loc1 = *(EIF_INTEGER_32 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9580[Dtype(tr1)-120])(RTCV(tr1)));
	if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 2147483647L))) {
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		tr1 = RTOUCR(57,F31_3978,(Current));
		ti4_1 = F31_3980(Current);
		F461_9975(RTCV(tr1), ti4_1);
	} else {
		loc1++;
	}
	tr1 = RTOUCR(57,F31_3978,(Current));
	ti4_1 = F461_9983(RTCV(tr1), loc1);
	Result = (EIF_NATURAL_8) ti4_1;
	tr1 = RTOUCR(56,F31_3979,(Current));
	F126_10164(RTCV(tr1), loc1);
	RTLE;
	return Result;
}

/* {UUID_GENERATOR}.rand */
static EIF_REFERENCE F31_3978_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(57)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(460, 460, _OBJSIZ_0_1_0_4_0_0_0_0_);
	F461_9974(RTCV(tr1));
	Result = (EIF_REFERENCE) tr1;
	ti4_1 = F31_3980(Current);
	F461_9975(RTCV(Result), ti4_1);
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F31_3978 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(57,F31_3978_body,(Current));
}

/* {UUID_GENERATOR}.rand_count */
static EIF_REFERENCE F31_3979_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(56)

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTEV;
	RTGC;
	RTOTP;
	{
		static EIF_TYPE_INDEX typarr0[] = {125,993,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0, 125, _OBJSIZ_0_0_0_1_0_0_0_0_);
	}
	F126_10164(RTCV(tr1), ((EIF_INTEGER_32) 0L));
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F31_3979 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(56,F31_3979_body,(Current));
}

/* {UUID_GENERATOR}.seed */
EIF_INTEGER_32 F31_3980 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_64 loc1 = (EIF_NATURAL_64) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_NATURAL_64 tu8_3;
	EIF_NATURAL_64 tu8_4;
	EIF_NATURAL_64 tu8_5;
	EIF_NATURAL_64 tu8_6;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,loc2);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTLNS(18, 18, _OBJSIZ_1_1_0_1_0_0_0_0_);
	F19_3804(RTCV(tr1));
	loc2 = (EIF_REFERENCE) tr1;
	ti4_1 = F19_3808(RTCV(loc2));
	loc1 = (EIF_NATURAL_64) (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1970L));
	tu8_1 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 12L);
	tu8_2 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 30L);
	tu8_3 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 24L);
	tu8_4 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 60L);
	tu8_5 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 60L);
	tu8_6 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 1000L);
	loc1 = (EIF_NATURAL_64) (EIF_NATURAL_64) ((EIF_NATURAL_64) ((EIF_NATURAL_64) ((EIF_NATURAL_64) ((EIF_NATURAL_64) ((EIF_NATURAL_64) (loc1 * tu8_1) * tu8_2) * tu8_3) * tu8_4) * tu8_5) * tu8_6);
	ti4_1 = F19_3809(RTCV(loc2));
	tu8_1 = (EIF_NATURAL_64) ti4_1;
	tu8_2 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 30L);
	tu8_3 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 24L);
	tu8_4 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 60L);
	tu8_5 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 60L);
	tu8_6 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 1000L);
	loc1 += (EIF_NATURAL_64) ((EIF_NATURAL_64) ((EIF_NATURAL_64) ((EIF_NATURAL_64) ((EIF_NATURAL_64) (tu8_1 * tu8_2) * tu8_3) * tu8_4) * tu8_5) * tu8_6);
	ti4_1 = F19_3810(RTCV(loc2));
	tu8_1 = (EIF_NATURAL_64) ti4_1;
	tu8_2 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 24L);
	tu8_3 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 60L);
	tu8_4 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 60L);
	tu8_5 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 1000L);
	loc1 += (EIF_NATURAL_64) ((EIF_NATURAL_64) ((EIF_NATURAL_64) ((EIF_NATURAL_64) (tu8_1 * tu8_2) * tu8_3) * tu8_4) * tu8_5);
	ti4_1 = F19_3811(RTCV(loc2));
	tu8_1 = (EIF_NATURAL_64) ti4_1;
	tu8_2 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 60L);
	tu8_3 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 60L);
	tu8_4 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 1000L);
	loc1 += (EIF_NATURAL_64) ((EIF_NATURAL_64) ((EIF_NATURAL_64) (tu8_1 * tu8_2) * tu8_3) * tu8_4);
	ti4_1 = F19_3812(RTCV(loc2));
	tu8_1 = (EIF_NATURAL_64) ti4_1;
	tu8_2 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 60L);
	tu8_3 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 1000L);
	loc1 += (EIF_NATURAL_64) ((EIF_NATURAL_64) (tu8_1 * tu8_2) * tu8_3);
	ti4_1 = F19_3813(RTCV(loc2));
	tu8_1 = (EIF_NATURAL_64) ti4_1;
	tu8_2 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 1000L);
	loc1 += (EIF_NATURAL_64) (tu8_1 * tu8_2);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc2)+ _LNGOFF_1_1_0_0_);
	tu8_1 = (EIF_NATURAL_64) ti4_1;
	loc1 += tu8_1;
	tu8_1 = eif_bit_shift_right(loc1,((EIF_INTEGER_32) 32L));
	tu8_1 = eif_bit_xor(tu8_1,loc1);
	ti4_1 = (EIF_INTEGER_32) tu8_1;
	Result = eif_bit_and(ti4_1,((EIF_INTEGER_32) 2147483647L));
	Result = (EIF_INTEGER_32) Result;
	RTLE;
	return Result;
}

void EIF_Minit29 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
