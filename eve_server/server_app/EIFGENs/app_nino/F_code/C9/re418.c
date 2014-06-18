/*
 * Code for class reference REAL_64
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "re418.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {REAL_64}.is_less */
EIF_BOOLEAN F1014_19821 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(1014, 1014, _OBJSIZ_0_0_0_0_0_0_0_1_);
	*(EIF_REAL_64 *)tr1 = arg1;
	Result = F1013_19791(Current, tr1);
	RTLE;
	return Result;
}

/* {REAL_64}.truncated_to_integer */
EIF_INTEGER_32 F1014_19825 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) F1013_19802(Current);
}

/* {REAL_64}.truncated_to_real */
EIF_REAL_32 F1014_19827 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REAL_32) F1013_19804(Current);
}

/* {REAL_64}.floor_real_64 */
EIF_REAL_64 F1014_19829 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REAL_64) F1013_19809(Current);
}

/* {REAL_64}.plus */
EIF_REAL_64 F1014_19830 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(1014, 1014, _OBJSIZ_0_0_0_0_0_0_0_1_);
	*(EIF_REAL_64 *)tr1 = arg1;
	tr1 = F1013_19812(Current, tr1);
	Result = *(EIF_REAL_64 *)(tr1);
	RTLE;
	return Result;
}

/* {REAL_64}.minus */
EIF_REAL_64 F1014_19831 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(1014, 1014, _OBJSIZ_0_0_0_0_0_0_0_1_);
	*(EIF_REAL_64 *)tr1 = arg1;
	tr1 = F1013_19813(Current, tr1);
	Result = *(EIF_REAL_64 *)(tr1);
	RTLE;
	return Result;
}

/* {REAL_64}.product */
EIF_REAL_64 F1014_19832 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(1014, 1014, _OBJSIZ_0_0_0_0_0_0_0_1_);
	*(EIF_REAL_64 *)tr1 = arg1;
	tr1 = F1013_19814(Current, tr1);
	Result = *(EIF_REAL_64 *)(tr1);
	RTLE;
	return Result;
}

/* {REAL_64}.quotient */
EIF_REAL_64 F1014_19833 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(1014, 1014, _OBJSIZ_0_0_0_0_0_0_0_1_);
	*(EIF_REAL_64 *)tr1 = arg1;
	tr1 = F1013_19815(Current, tr1);
	Result = *(EIF_REAL_64 *)(tr1);
	RTLE;
	return Result;
}

/* {REAL_64}.power */
EIF_REAL_64 F1014_19834 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	
	
	return (EIF_REAL_64) F1013_19816(Current, arg1);
}

/* {REAL_64}.opposite */
EIF_REAL_64 F1014_19836 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return *(EIF_REAL_64 *)F1013_19818(Current);
}

/* {REAL_64}.out */
EIF_REFERENCE F1014_19837 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) F1013_19819(Current);
}

void EIF_Minit418 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
