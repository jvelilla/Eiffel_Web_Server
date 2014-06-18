/*
 * Code for class INTEGER_OVERFLOW_CHECKER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "in137.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {INTEGER_OVERFLOW_CHECKER}.make */
void F177_8431 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_32 tu4_1;
	EIF_INTEGER_16 ti2_1;
	EIF_NATURAL_16 tu2_1;
	EIF_INTEGER_8 ti1_1;
	EIF_NATURAL_8 tu1_1;
	RTCFDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {957,1002,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSP2(eif_non_attached_type(typres0),0,(EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 4L) * ((EIF_INTEGER_32) 2L)) + ((EIF_INTEGER_32) 1L)),sizeof(EIF_NATURAL_64), EIF_TRUE);
		RT_SPECIAL_COUNT(tr1) = 0;
	}
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current);
	tu8_1 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L);
	F958_18840(RTCV(tr1), tu8_1);
	{
		static EIF_TYPE_INDEX typarr0[] = {957,1002,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSP2(eif_non_attached_type(typres0),0,(EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 4L) * ((EIF_INTEGER_32) 2L)) + ((EIF_INTEGER_32) 1L)),sizeof(EIF_NATURAL_64), EIF_TRUE);
		RT_SPECIAL_COUNT(tr1) = 0;
	}
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tu8_1 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L);
	F958_18840(RTCV(tr1), tu8_1);
	tr1 = *(EIF_REFERENCE *)(Current);
	ti1_1 = (EIF_INTEGER_8) ((EIF_INTEGER_32) 10L);
	tu8_1 = (EIF_NATURAL_64) (EIF_INTEGER_8) (((EIF_INTEGER_8) 127L) / ti1_1);
	F958_18840(RTCV(tr1), tu8_1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	ti1_1 = (EIF_INTEGER_8) ((EIF_INTEGER_32) 10L);
	tu8_1 = (EIF_NATURAL_64) (EIF_INTEGER_8) (((EIF_INTEGER_8) 127L) % ti1_1);
	F958_18840(RTCV(tr1), tu8_1);
	tr1 = *(EIF_REFERENCE *)(Current);
	ti2_1 = (EIF_INTEGER_16) ((EIF_INTEGER_32) 10L);
	tu8_1 = (EIF_NATURAL_64) (EIF_INTEGER_16) (((EIF_INTEGER_16) 32767L) / ti2_1);
	F958_18840(RTCV(tr1), tu8_1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	ti2_1 = (EIF_INTEGER_16) ((EIF_INTEGER_32) 10L);
	tu8_1 = (EIF_NATURAL_64) (EIF_INTEGER_16) (((EIF_INTEGER_16) 32767L) % ti2_1);
	F958_18840(RTCV(tr1), tu8_1);
	tr1 = *(EIF_REFERENCE *)(Current);
	tu8_1 = (EIF_NATURAL_64) (EIF_INTEGER_32) (((EIF_INTEGER_32) 2147483647L) / ((EIF_INTEGER_32) 10L));
	F958_18840(RTCV(tr1), tu8_1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tu8_1 = (EIF_NATURAL_64) (EIF_INTEGER_32) (((EIF_INTEGER_32) 2147483647L) % ((EIF_INTEGER_32) 10L));
	F958_18840(RTCV(tr1), tu8_1);
	tr1 = *(EIF_REFERENCE *)(Current);
	ti8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 10L);
	tu8_1 = (EIF_NATURAL_64) (EIF_INTEGER_64) (((EIF_INTEGER_64) RTI64C(9223372036854775807)) / ti8_1);
	F958_18840(RTCV(tr1), tu8_1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	ti8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 10L);
	tu8_1 = (EIF_NATURAL_64) (EIF_INTEGER_64) (((EIF_INTEGER_64) RTI64C(9223372036854775807)) % ti8_1);
	F958_18840(RTCV(tr1), tu8_1);
	tr1 = *(EIF_REFERENCE *)(Current);
	ti1_1 = (EIF_INTEGER_8) ((EIF_INTEGER_32) 10L);
	tu8_1 = (EIF_NATURAL_64) ((EIF_INTEGER_8) -(EIF_INTEGER_8) (((EIF_INTEGER_8) -128L) / ti1_1));
	F958_18840(RTCV(tr1), tu8_1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	ti1_1 = (EIF_INTEGER_8) ((EIF_INTEGER_32) 10L);
	tu8_1 = (EIF_NATURAL_64) ((EIF_INTEGER_8) -(EIF_INTEGER_8) (((EIF_INTEGER_8) -128L) % ti1_1));
	F958_18840(RTCV(tr1), tu8_1);
	tr1 = *(EIF_REFERENCE *)(Current);
	ti2_1 = (EIF_INTEGER_16) ((EIF_INTEGER_32) 10L);
	tu8_1 = (EIF_NATURAL_64) ((EIF_INTEGER_16) -(EIF_INTEGER_16) (((EIF_INTEGER_16) -32768L) / ti2_1));
	F958_18840(RTCV(tr1), tu8_1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	ti2_1 = (EIF_INTEGER_16) ((EIF_INTEGER_32) 10L);
	tu8_1 = (EIF_NATURAL_64) ((EIF_INTEGER_16) -(EIF_INTEGER_16) (((EIF_INTEGER_16) -32768L) % ti2_1));
	F958_18840(RTCV(tr1), tu8_1);
	tr1 = *(EIF_REFERENCE *)(Current);
	tu8_1 = (EIF_NATURAL_64) ((EIF_INTEGER_32) -(EIF_INTEGER_32) (((EIF_INTEGER_32) 0x80000000L) / ((EIF_INTEGER_32) 10L)));
	F958_18840(RTCV(tr1), tu8_1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tu8_1 = (EIF_NATURAL_64) ((EIF_INTEGER_32) -(EIF_INTEGER_32) (((EIF_INTEGER_32) 0x80000000L) % ((EIF_INTEGER_32) 10L)));
	F958_18840(RTCV(tr1), tu8_1);
	tr1 = *(EIF_REFERENCE *)(Current);
	ti8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 10L);
	tu8_1 = (EIF_NATURAL_64) ((EIF_INTEGER_64) -(EIF_INTEGER_64) (((EIF_INTEGER_64) RTI64C(0x8000000000000000)) / ti8_1));
	F958_18840(RTCV(tr1), tu8_1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	ti8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 10L);
	tu8_1 = (EIF_NATURAL_64) ((EIF_INTEGER_64) -(EIF_INTEGER_64) (((EIF_INTEGER_64) RTI64C(0x8000000000000000)) % ti8_1));
	F958_18840(RTCV(tr1), tu8_1);
	{
		static EIF_TYPE_INDEX typarr0[] = {957,1002,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSP2(eif_non_attached_type(typres0),0,(EIF_INTEGER_32) (((EIF_INTEGER_32) 4L) + ((EIF_INTEGER_32) 1L)),sizeof(EIF_NATURAL_64), EIF_TRUE);
		RT_SPECIAL_COUNT(tr1) = 0;
	}
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	tu8_1 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L);
	F958_18840(RTCV(tr1), tu8_1);
	{
		static EIF_TYPE_INDEX typarr0[] = {957,1002,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSP2(eif_non_attached_type(typres0),0,(EIF_INTEGER_32) (((EIF_INTEGER_32) 4L) + ((EIF_INTEGER_32) 1L)),sizeof(EIF_NATURAL_64), EIF_TRUE);
		RT_SPECIAL_COUNT(tr1) = 0;
	}
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	tu8_1 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L);
	F958_18840(RTCV(tr1), tu8_1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 10L);
	tu8_1 = (EIF_NATURAL_64) (EIF_NATURAL_8) (((EIF_NATURAL_8) 255U) / tu1_1);
	F958_18840(RTCV(tr1), tu8_1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 10L);
	tu8_1 = (EIF_NATURAL_64) (EIF_NATURAL_8) (((EIF_NATURAL_8) 255U) % tu1_1);
	F958_18840(RTCV(tr1), tu8_1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	tu2_1 = (EIF_NATURAL_16) ((EIF_INTEGER_32) 10L);
	tu8_1 = (EIF_NATURAL_64) (EIF_NATURAL_16) (((EIF_NATURAL_16) 65535U) / tu2_1);
	F958_18840(RTCV(tr1), tu8_1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	tu2_1 = (EIF_NATURAL_16) ((EIF_INTEGER_32) 10L);
	tu8_1 = (EIF_NATURAL_64) (EIF_NATURAL_16) (((EIF_NATURAL_16) 65535U) % tu2_1);
	F958_18840(RTCV(tr1), tu8_1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 10L);
	tu8_1 = (EIF_NATURAL_64) (EIF_NATURAL_32) (((EIF_NATURAL_32) 4294967295U) / tu4_1);
	F958_18840(RTCV(tr1), tu8_1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 10L);
	tu8_1 = (EIF_NATURAL_64) (EIF_NATURAL_32) (((EIF_NATURAL_32) 4294967295U) % tu4_1);
	F958_18840(RTCV(tr1), tu8_1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	tu8_1 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 10L);
	tu8_1 = (EIF_NATURAL_64) (EIF_NATURAL_64) (((EIF_NATURAL_64) RTU64C(18446744073709551615)) / tu8_1);
	F958_18840(RTCV(tr1), tu8_1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	tu8_1 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 10L);
	tu8_1 = (EIF_NATURAL_64) (EIF_NATURAL_64) (((EIF_NATURAL_64) RTU64C(18446744073709551615)) % tu8_1);
	F958_18840(RTCV(tr1), tu8_1);
	RTLE;
}

/* {INTEGER_OVERFLOW_CHECKER}.will_overflow */
EIF_BOOLEAN F177_8432 (EIF_REFERENCE Current, EIF_NATURAL_64 arg1, EIF_NATURAL_64 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(arg3 != ((EIF_INTEGER_32) 0L));
	if (Result) {
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg3 == ((EIF_INTEGER_32) 1L)) || (EIF_BOOLEAN)(arg3 == ((EIF_INTEGER_32) 2L))) || (EIF_BOOLEAN)(arg3 == ((EIF_INTEGER_32) 3L))) || (EIF_BOOLEAN)(arg3 == ((EIF_INTEGER_32) 4L)))) {
			loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg4 * ((EIF_INTEGER_32) 4L)) + arg3);
			Result = '\01';
			tr1 = *(EIF_REFERENCE *)(Current);
			/* INLINED CODE (SPECIAL.item) */
			tu8_2 = *((EIF_NATURAL_64 *)tr1 + (loc1));
			/* END INLINED CODE */
			tu8_1 = tu8_2;
			if (!((EIF_BOOLEAN) (arg1 > tu8_1))) {
				tb1 = '\0';
				tr1 = *(EIF_REFERENCE *)(Current);
				/* INLINED CODE (SPECIAL.item) */
				tu8_2 = *((EIF_NATURAL_64 *)tr1 + (loc1));
				/* END INLINED CODE */
				tu8_1 = tu8_2;
				if ((EIF_BOOLEAN)(arg1 == tu8_1)) {
					tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
					/* INLINED CODE (SPECIAL.item) */
					tu8_2 = *((EIF_NATURAL_64 *)tr1 + (loc1));
					/* END INLINED CODE */
					tu8_1 = tu8_2;
					tb1 = (EIF_BOOLEAN) (arg2 > tu8_1);
				}
				Result = tb1;
			}
		} else {
			loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg3 - ((EIF_INTEGER_32) 10L));
			if ((EIF_BOOLEAN)(arg4 == ((EIF_INTEGER_32) 1L))) {
				Result = '\01';
				tu8_1 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L);
				if (!((EIF_BOOLEAN) (arg1 > tu8_1))) {
					tu8_1 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L);
					Result = (EIF_BOOLEAN) (arg2 > tu8_1);
				}
			} else {
				Result = '\01';
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
				/* INLINED CODE (SPECIAL.item) */
				tu8_2 = *((EIF_NATURAL_64 *)tr1 + (loc1));
				/* END INLINED CODE */
				tu8_1 = tu8_2;
				if (!((EIF_BOOLEAN) (arg1 > tu8_1))) {
					tb1 = '\0';
					tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
					/* INLINED CODE (SPECIAL.item) */
					tu8_2 = *((EIF_NATURAL_64 *)tr1 + (loc1));
					/* END INLINED CODE */
					tu8_1 = tu8_2;
					if ((EIF_BOOLEAN)(arg1 == tu8_1)) {
						tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
						/* INLINED CODE (SPECIAL.item) */
						tu8_2 = *((EIF_NATURAL_64 *)tr1 + (loc1));
						/* END INLINED CODE */
						tu8_1 = tu8_2;
						tb1 = (EIF_BOOLEAN) (arg2 > tu8_1);
					}
					Result = tb1;
				}
			}
		}
	}
	RTLE;
	return Result;
}

/* {INTEGER_OVERFLOW_CHECKER}.integer_overflow_state1 */
EIF_REFERENCE F177_8433 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {INTEGER_OVERFLOW_CHECKER}.integer_overflow_state2 */
EIF_REFERENCE F177_8434 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {INTEGER_OVERFLOW_CHECKER}.natural_overflow_state1 */
EIF_REFERENCE F177_8435 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {INTEGER_OVERFLOW_CHECKER}.natural_overflow_state2 */
EIF_REFERENCE F177_8436 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


void EIF_Minit137 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
