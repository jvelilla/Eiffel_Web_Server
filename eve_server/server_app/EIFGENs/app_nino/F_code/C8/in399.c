/*
 * Code for class INTEGER_16
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "in399.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {INTEGER_16}.is_less */
EIF_BOOLEAN F997_19326 (EIF_REFERENCE Current, EIF_INTEGER_16 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(996, 996, _OBJSIZ_0_0_1_0_0_0_0_0_);
	*(EIF_INTEGER_16 *)tr1 = arg1;
	Result = F995_19267(Current, tr1);
	RTLE;
	return Result;
}

/* {INTEGER_16}.plus */
EIF_INTEGER_16 F997_19327 (EIF_REFERENCE Current, EIF_INTEGER_16 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_16 Result = ((EIF_INTEGER_16) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(996, 996, _OBJSIZ_0_0_1_0_0_0_0_0_);
	*(EIF_INTEGER_16 *)tr1 = arg1;
	tr1 = F995_19277(Current, tr1);
	Result = *(EIF_INTEGER_16 *)(tr1);
	RTLE;
	return Result;
}

/* {INTEGER_16}.opposite */
EIF_INTEGER_16 F997_19332 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return *(EIF_INTEGER_16 *)F995_19282(Current);
}

/* {INTEGER_16}.integer_quotient */
EIF_INTEGER_16 F997_19333 (EIF_REFERENCE Current, EIF_INTEGER_16 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_16 Result = ((EIF_INTEGER_16) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(996, 996, _OBJSIZ_0_0_1_0_0_0_0_0_);
	*(EIF_INTEGER_16 *)tr1 = arg1;
	tr1 = F995_19283(Current, tr1);
	Result = *(EIF_INTEGER_16 *)(tr1);
	RTLE;
	return Result;
}

/* {INTEGER_16}.integer_remainder */
EIF_INTEGER_16 F997_19334 (EIF_REFERENCE Current, EIF_INTEGER_16 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_16 Result = ((EIF_INTEGER_16) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(996, 996, _OBJSIZ_0_0_1_0_0_0_0_0_);
	*(EIF_INTEGER_16 *)tr1 = arg1;
	tr1 = F995_19284(Current, tr1);
	Result = *(EIF_INTEGER_16 *)(tr1);
	RTLE;
	return Result;
}

/* {INTEGER_16}.as_natural_64 */
EIF_NATURAL_64 F997_19339 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_64) F995_19293(Current);
}

/* {INTEGER_16}.as_integer_32 */
EIF_INTEGER_32 F997_19342 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) F995_19296(Current);
}

/* {INTEGER_16}.to_character_8 */
EIF_CHARACTER_8 F997_19346 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_CHARACTER_8) F995_19312(Current);
}

void EIF_Minit399 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
