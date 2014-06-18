/*
 * Code for class CHARACTER_8_REF
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ch338.h"
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

/* {CHARACTER_8_REF}.natural_32_code */
EIF_NATURAL_32 F828_16842 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	ti4_1 = (EIF_INTEGER_32) (tc1);
	Result = (EIF_NATURAL_32) ti4_1;
	RTLE;
	return Result;
}

/* {CHARACTER_8_REF}.hash_code */
EIF_INTEGER_32 F828_16843 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (F828_16842(Current))));
	RTLE;
	return Result;
}

/* {CHARACTER_8_REF}.is_less */
EIF_BOOLEAN F828_16847 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	tu4_1 = F828_16842(Current);
	tu4_2 = F828_16842(RTCV(arg1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu4_1 < tu4_2);
	RTLE;
	return Result;
}

/* {CHARACTER_8_REF}.is_equal */
EIF_BOOLEAN F828_16848 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	tc1 = *(EIF_CHARACTER_8 *)(RTCV(arg1)+ _CHROFF_0_0_);
	tc2 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tc1 == tc2);
	RTLE;
	return Result;
}

/* {CHARACTER_8_REF}.set_item */
void F828_16854 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	
	
	*(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_) = (EIF_CHARACTER_8) arg1;
}

/* {CHARACTER_8_REF}.out */
EIF_REFERENCE F828_16855 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	
	RTGC;
	tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F889_17162(RTCV(tr1), ((EIF_INTEGER_32) 1L));
	Result = (EIF_REFERENCE) tr1;
	F893_17391(RTCV(Result), *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_));
	RTLE;
	return Result;
}

/* {CHARACTER_8_REF}.to_character_32 */
EIF_CHARACTER_32 F828_16859 (EIF_REFERENCE Current)
{
	GTCX
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	Result = (EIF_CHARACTER_32) tc1;
	RTLE;
	return Result;
}

/* {CHARACTER_8_REF}.as_upper */
EIF_CHARACTER_8 F828_16860 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if (F828_16866(Current)) {
		tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
		ti4_1 = (EIF_INTEGER_32) (tc1);
		ti4_2 = (EIF_INTEGER_32) ((EIF_CHARACTER_8) 'a');
		ti4_3 = (EIF_INTEGER_32) ((EIF_CHARACTER_8) 'A');
		Result = (EIF_CHARACTER_8) (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - ti4_2) + ti4_3);
	} else {
		RTLE;
		return (EIF_CHARACTER_8) *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	}
	RTLE;
	return Result;
}

/* {CHARACTER_8_REF}.upper */
EIF_CHARACTER_8 F828_16861 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if (F828_16866(Current)) {
		tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
		ti4_1 = (EIF_INTEGER_32) (tc1);
		ti4_2 = (EIF_INTEGER_32) ((EIF_CHARACTER_8) 'a');
		ti4_3 = (EIF_INTEGER_32) ((EIF_CHARACTER_8) 'A');
		Result = (EIF_CHARACTER_8) (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - ti4_2) + ti4_3);
	} else {
		RTLE;
		return (EIF_CHARACTER_8) *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	}
	RTLE;
	return Result;
}

/* {CHARACTER_8_REF}.as_lower */
EIF_CHARACTER_8 F828_16862 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if (F828_16865(Current)) {
		tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
		ti4_1 = (EIF_INTEGER_32) (tc1);
		ti4_2 = (EIF_INTEGER_32) ((EIF_CHARACTER_8) 'A');
		ti4_3 = (EIF_INTEGER_32) ((EIF_CHARACTER_8) 'a');
		Result = (EIF_CHARACTER_8) (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - ti4_2) + ti4_3);
	} else {
		RTLE;
		return (EIF_CHARACTER_8) *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	}
	RTLE;
	return Result;
}

/* {CHARACTER_8_REF}.lower */
EIF_CHARACTER_8 F828_16863 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if (F828_16865(Current)) {
		tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
		ti4_1 = (EIF_INTEGER_32) (tc1);
		ti4_2 = (EIF_INTEGER_32) ((EIF_CHARACTER_8) 'A');
		ti4_3 = (EIF_INTEGER_32) ((EIF_CHARACTER_8) 'a');
		Result = (EIF_CHARACTER_8) (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - ti4_2) + ti4_3);
	} else {
		RTLE;
		return (EIF_CHARACTER_8) *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	}
	RTLE;
	return Result;
}

/* {CHARACTER_8_REF}.is_alpha */
EIF_BOOLEAN F828_16864 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	ti4_1 = (EIF_INTEGER_32) (tc1);
	tu1_1 = F828_16875(Current, ti4_1);
	tu1_2 = eif_bit_or(((EIF_NATURAL_8) 1U),((EIF_NATURAL_8) 2U));
	tu1_1 = eif_bit_and(tu1_1,tu1_2);
	tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu1_1 > tu1_2);
	RTLE;
	return Result;
}

/* {CHARACTER_8_REF}.is_upper */
EIF_BOOLEAN F828_16865 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	ti4_1 = (EIF_INTEGER_32) (tc1);
	tu1_1 = F828_16875(Current, ti4_1);
	tu1_1 = eif_bit_and(tu1_1,((EIF_NATURAL_8) 1U));
	tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu1_1 > tu1_2);
	RTLE;
	return Result;
}

/* {CHARACTER_8_REF}.is_lower */
EIF_BOOLEAN F828_16866 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	ti4_1 = (EIF_INTEGER_32) (tc1);
	tu1_1 = F828_16875(Current, ti4_1);
	tu1_1 = eif_bit_and(tu1_1,((EIF_NATURAL_8) 2U));
	tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu1_1 > tu1_2);
	RTLE;
	return Result;
}

/* {CHARACTER_8_REF}.is_digit */
EIF_BOOLEAN F828_16867 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	ti4_1 = (EIF_INTEGER_32) (tc1);
	tu1_1 = F828_16875(Current, ti4_1);
	tu1_1 = eif_bit_and(tu1_1,((EIF_NATURAL_8) 4U));
	tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu1_1 > tu1_2);
	RTLE;
	return Result;
}

/* {CHARACTER_8_REF}.is_hexa_digit */
EIF_BOOLEAN F828_16868 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	ti4_1 = (EIF_INTEGER_32) (tc1);
	tu1_1 = F828_16875(Current, ti4_1);
	tu1_2 = eif_bit_or(((EIF_NATURAL_8) 64U),((EIF_NATURAL_8) 4U));
	tu1_1 = eif_bit_and(tu1_1,tu1_2);
	tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu1_1 > tu1_2);
	RTLE;
	return Result;
}

/* {CHARACTER_8_REF}.is_space */
EIF_BOOLEAN F828_16869 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	ti4_1 = (EIF_INTEGER_32) (tc1);
	tu1_1 = F828_16875(Current, ti4_1);
	tu1_1 = eif_bit_and(tu1_1,((EIF_NATURAL_8) 8U));
	tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu1_1 > tu1_2);
	RTLE;
	return Result;
}

/* {CHARACTER_8_REF}.character_types */
EIF_NATURAL_8 F828_16875 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	
	RTGC;
	if ((EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 256L))) {
		tr1 = RTOUCR(31,F828_16876,(Current));
		/* INLINED CODE (SPECIAL.item) */
		tu1_2 = *((EIF_NATURAL_8 *)tr1 + (arg1));
		/* END INLINED CODE */
		Result = tu1_2;
	}
	RTLE;
	return Result;
}

/* {CHARACTER_8_REF}.internal_character_types */
static EIF_REFERENCE F828_16876_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_8 tu1_1;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(31)

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTEV;
	RTGC;
	RTOTP;
	{
		static EIF_TYPE_INDEX typarr0[] = {963,1017,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNSP2(eif_non_attached_type(typres0),0,((EIF_INTEGER_32) 256L),sizeof(EIF_NATURAL_8), EIF_TRUE);
		RT_SPECIAL_COUNT(tr1) = 0;
	}
	Result = (EIF_REFERENCE) tr1;
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 32U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 32U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 32U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 32U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 32U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 32U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 32U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 32U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 32U));
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 32U),((EIF_NATURAL_8) 8U));
	F964_18840(RTCV(Result), tu1_1);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 32U),((EIF_NATURAL_8) 8U));
	F964_18840(RTCV(Result), tu1_1);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 32U),((EIF_NATURAL_8) 8U));
	F964_18840(RTCV(Result), tu1_1);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 32U),((EIF_NATURAL_8) 8U));
	F964_18840(RTCV(Result), tu1_1);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 32U),((EIF_NATURAL_8) 8U));
	F964_18840(RTCV(Result), tu1_1);
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 32U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 32U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 32U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 32U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 32U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 32U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 32U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 32U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 32U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 32U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 32U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 32U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 32U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 32U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 32U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 32U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 32U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 32U));
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 8U),((EIF_NATURAL_8) 128U));
	F964_18840(RTCV(Result), tu1_1);
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 16U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 16U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 16U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 16U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 16U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 16U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 16U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 16U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 16U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 16U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 16U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 16U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 16U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 16U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 16U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 4U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 4U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 4U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 4U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 4U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 4U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 4U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 4U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 4U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 4U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 16U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 16U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 16U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 16U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 16U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 16U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 16U));
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 1U),((EIF_NATURAL_8) 64U));
	F964_18840(RTCV(Result), tu1_1);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 1U),((EIF_NATURAL_8) 64U));
	F964_18840(RTCV(Result), tu1_1);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 1U),((EIF_NATURAL_8) 64U));
	F964_18840(RTCV(Result), tu1_1);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 1U),((EIF_NATURAL_8) 64U));
	F964_18840(RTCV(Result), tu1_1);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 1U),((EIF_NATURAL_8) 64U));
	F964_18840(RTCV(Result), tu1_1);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 1U),((EIF_NATURAL_8) 64U));
	F964_18840(RTCV(Result), tu1_1);
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 1U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 1U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 1U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 1U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 1U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 1U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 1U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 1U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 1U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 1U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 1U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 1U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 1U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 1U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 1U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 1U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 1U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 1U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 1U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 1U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 16U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 16U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 16U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 16U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 16U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 16U));
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 2U),((EIF_NATURAL_8) 64U));
	F964_18840(RTCV(Result), tu1_1);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 2U),((EIF_NATURAL_8) 64U));
	F964_18840(RTCV(Result), tu1_1);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 2U),((EIF_NATURAL_8) 64U));
	F964_18840(RTCV(Result), tu1_1);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 2U),((EIF_NATURAL_8) 64U));
	F964_18840(RTCV(Result), tu1_1);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 2U),((EIF_NATURAL_8) 64U));
	F964_18840(RTCV(Result), tu1_1);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 2U),((EIF_NATURAL_8) 64U));
	F964_18840(RTCV(Result), tu1_1);
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 2U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 2U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 2U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 2U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 2U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 2U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 2U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 2U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 2U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 2U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 2U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 2U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 2U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 2U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 2U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 2U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 2U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 2U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 2U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 2U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 16U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 16U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 16U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 16U));
	F964_18840(RTCV(Result), ((EIF_NATURAL_8) 32U));
	tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	F964_18842(RTCV(Result), tu1_1, ((EIF_INTEGER_32) 128L), ((EIF_INTEGER_32) 255L));
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F828_16876 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(31,F828_16876_body,(Current));
}

void EIF_Minit338 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
