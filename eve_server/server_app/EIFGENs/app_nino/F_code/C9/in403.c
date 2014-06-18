/*
 * Code for class reference INTEGER_8
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "in403.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {INTEGER_8}.is_less */
EIF_BOOLEAN F999_19421 (EIF_REFERENCE Current, EIF_INTEGER_8 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(999, 999, _OBJSIZ_0_1_0_0_0_0_0_0_);
	*(EIF_INTEGER_8 *)tr1 = arg1;
	Result = F998_19362(Current, tr1);
	RTLE;
	return Result;
}

/* {INTEGER_8}.plus */
EIF_INTEGER_8 F999_19422 (EIF_REFERENCE Current, EIF_INTEGER_8 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_8 Result = ((EIF_INTEGER_8) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(999, 999, _OBJSIZ_0_1_0_0_0_0_0_0_);
	*(EIF_INTEGER_8 *)tr1 = arg1;
	tr1 = F998_19372(Current, tr1);
	Result = *(EIF_INTEGER_8 *)(tr1);
	RTLE;
	return Result;
}

/* {INTEGER_8}.opposite */
EIF_INTEGER_8 F999_19427 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return *(EIF_INTEGER_8 *)F998_19377(Current);
}

/* {INTEGER_8}.integer_quotient */
EIF_INTEGER_8 F999_19428 (EIF_REFERENCE Current, EIF_INTEGER_8 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_8 Result = ((EIF_INTEGER_8) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(999, 999, _OBJSIZ_0_1_0_0_0_0_0_0_);
	*(EIF_INTEGER_8 *)tr1 = arg1;
	tr1 = F998_19378(Current, tr1);
	Result = *(EIF_INTEGER_8 *)(tr1);
	RTLE;
	return Result;
}

/* {INTEGER_8}.integer_remainder */
EIF_INTEGER_8 F999_19429 (EIF_REFERENCE Current, EIF_INTEGER_8 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_8 Result = ((EIF_INTEGER_8) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(999, 999, _OBJSIZ_0_1_0_0_0_0_0_0_);
	*(EIF_INTEGER_8 *)tr1 = arg1;
	tr1 = F998_19379(Current, tr1);
	Result = *(EIF_INTEGER_8 *)(tr1);
	RTLE;
	return Result;
}

/* {INTEGER_8}.as_natural_64 */
EIF_NATURAL_64 F999_19434 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_64) F998_19388(Current);
}

/* {INTEGER_8}.as_integer_32 */
EIF_INTEGER_32 F999_19437 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) F998_19391(Current);
}

/* {INTEGER_8}.to_character_8 */
EIF_CHARACTER_8 F999_19441 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_CHARACTER_8) F998_19407(Current);
}

void EIF_Minit403 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
