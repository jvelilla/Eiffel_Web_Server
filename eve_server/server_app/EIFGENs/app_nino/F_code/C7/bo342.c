/*
 * Code for class BOOLEAN
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "bo342.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {BOOLEAN}.conjuncted */
EIF_BOOLEAN F833_16901 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(832, 832, _OBJSIZ_0_1_0_0_0_0_0_0_);
	*(EIF_BOOLEAN *)tr1 = arg1;
	Result = F831_16893(Current, tr1);
	RTLE;
	return Result;
}

/* {BOOLEAN}.conjuncted_semistrict */
EIF_BOOLEAN F833_16902 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(832, 832, _OBJSIZ_0_1_0_0_0_0_0_0_);
	*(EIF_BOOLEAN *)tr1 = arg1;
	Result = F831_16894(Current, tr1);
	RTLE;
	return Result;
}

/* {BOOLEAN}.implication */
EIF_BOOLEAN F833_16903 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(832, 832, _OBJSIZ_0_1_0_0_0_0_0_0_);
	*(EIF_BOOLEAN *)tr1 = arg1;
	Result = F831_16895(Current, tr1);
	RTLE;
	return Result;
}

/* {BOOLEAN}.negated */
EIF_BOOLEAN F833_16904 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) F831_16896(Current);
}

/* {BOOLEAN}.disjuncted */
EIF_BOOLEAN F833_16905 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(832, 832, _OBJSIZ_0_1_0_0_0_0_0_0_);
	*(EIF_BOOLEAN *)tr1 = arg1;
	Result = F831_16897(Current, tr1);
	RTLE;
	return Result;
}

/* {BOOLEAN}.disjuncted_semistrict */
EIF_BOOLEAN F833_16906 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(832, 832, _OBJSIZ_0_1_0_0_0_0_0_0_);
	*(EIF_BOOLEAN *)tr1 = arg1;
	Result = F831_16898(Current, tr1);
	RTLE;
	return Result;
}

void EIF_Minit342 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
