/*
 * Code for class NATURAL_8
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "na420.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {NATURAL_8}.is_less */
EIF_BOOLEAN F1018_19902 (EIF_REFERENCE Current, EIF_NATURAL_8 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(1017, 1017, _OBJSIZ_0_1_0_0_0_0_0_0_);
	*(EIF_NATURAL_8 *)tr1 = arg1;
	Result = F1016_19846(Current, tr1);
	RTLE;
	return Result;
}

/* {NATURAL_8}.plus */
EIF_NATURAL_8 F1018_19903 (EIF_REFERENCE Current, EIF_NATURAL_8 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(1017, 1017, _OBJSIZ_0_1_0_0_0_0_0_0_);
	*(EIF_NATURAL_8 *)tr1 = arg1;
	tr1 = F1016_19855(Current, tr1);
	Result = *(EIF_NATURAL_8 *)(tr1);
	RTLE;
	return Result;
}

/* {NATURAL_8}.integer_quotient */
EIF_NATURAL_8 F1018_19908 (EIF_REFERENCE Current, EIF_NATURAL_8 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(1017, 1017, _OBJSIZ_0_1_0_0_0_0_0_0_);
	*(EIF_NATURAL_8 *)tr1 = arg1;
	tr1 = F1016_19861(Current, tr1);
	Result = *(EIF_NATURAL_8 *)(tr1);
	RTLE;
	return Result;
}

/* {NATURAL_8}.integer_remainder */
EIF_NATURAL_8 F1018_19909 (EIF_REFERENCE Current, EIF_NATURAL_8 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(1017, 1017, _OBJSIZ_0_1_0_0_0_0_0_0_);
	*(EIF_NATURAL_8 *)tr1 = arg1;
	tr1 = F1016_19862(Current, tr1);
	Result = *(EIF_NATURAL_8 *)(tr1);
	RTLE;
	return Result;
}

/* {NATURAL_8}.as_natural_16 */
EIF_NATURAL_16 F1018_19912 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_16) F1016_19869(Current);
}

/* {NATURAL_8}.as_natural_32 */
EIF_NATURAL_32 F1018_19913 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_32) F1016_19870(Current);
}

/* {NATURAL_8}.as_natural_64 */
EIF_NATURAL_64 F1018_19914 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_64) F1016_19871(Current);
}

/* {NATURAL_8}.as_integer_32 */
EIF_INTEGER_32 F1018_19917 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) F1016_19874(Current);
}

/* {NATURAL_8}.to_character_8 */
EIF_CHARACTER_8 F1018_19921 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_CHARACTER_8) F1016_19889(Current);
}

/* {NATURAL_8}.to_character_32 */
EIF_CHARACTER_32 F1018_19922 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_CHARACTER_32) F1016_19890(Current);
}

/* {NATURAL_8}.bit_and */
EIF_NATURAL_8 F1018_19923 (EIF_REFERENCE Current, EIF_NATURAL_8 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(1017, 1017, _OBJSIZ_0_1_0_0_0_0_0_0_);
	*(EIF_NATURAL_8 *)tr1 = arg1;
	tr1 = F1016_19891(Current, tr1);
	Result = *(EIF_NATURAL_8 *)(tr1);
	RTLE;
	return Result;
}

/* {NATURAL_8}.bit_or */
EIF_NATURAL_8 F1018_19924 (EIF_REFERENCE Current, EIF_NATURAL_8 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(1017, 1017, _OBJSIZ_0_1_0_0_0_0_0_0_);
	*(EIF_NATURAL_8 *)tr1 = arg1;
	tr1 = F1016_19892(Current, tr1);
	Result = *(EIF_NATURAL_8 *)(tr1);
	RTLE;
	return Result;
}

void EIF_Minit420 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
