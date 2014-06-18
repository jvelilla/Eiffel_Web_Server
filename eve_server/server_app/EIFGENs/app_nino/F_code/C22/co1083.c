/*
 * Code for class COUNTABLE_SEQUENCE [INTEGER_32]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "co1083.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {COUNTABLE_SEQUENCE}.index */
EIF_INTEGER_32 F460_9949 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_);
}


/* {COUNTABLE_SEQUENCE}.item */
EIF_INTEGER_32 F460_9950 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R9216[Dtype(Current)-460])(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_));
}

/* {COUNTABLE_SEQUENCE}.after */
EIF_BOOLEAN F460_9951 (EIF_REFERENCE Current)
{
	return (EIF_BOOLEAN) EIF_FALSE;
}

/* {COUNTABLE_SEQUENCE}.extendible */
EIF_BOOLEAN F460_9952 (EIF_REFERENCE Current)
{
	return (EIF_BOOLEAN) EIF_FALSE;
}

/* {COUNTABLE_SEQUENCE}.forth */
void F460_9957 (EIF_REFERENCE Current)
{
	GTCX
	
	
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_))++;
}

/* {COUNTABLE_SEQUENCE}.start */
void F460_9958 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
}

/* {COUNTABLE_SEQUENCE}.extend */
void F460_9959 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	RTGC;
}

/* {COUNTABLE_SEQUENCE}.linear_representation */
EIF_REFERENCE F460_9961 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	{
		EIF_TYPE_INDEX typarr0[] = {799,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = eif_final_id(Y9214,Y9214_gen_type,Dftype(Current),238);
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		tr1 = RTLNS(typres0, 799, _OBJSIZ_2_3_0_1_0_0_0_0_);
	}
	F800_12788(RTCV(tr1));
	RTLE;
	return (EIF_REFERENCE) tr1;
}

void EIF_Minit1083 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
