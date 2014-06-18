/*
 * Code for class WSF_URI_MAPPING_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ws376.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WSF_URI_MAPPING_I}.make */
void F973_18891 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTLD;
	
	RTLI(3);
	RTLR(0,arg2);
	RTLR(1,Current);
	RTLR(2,arg1);
	
	RTGC;
	F974_18903(Current, arg2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	RTLE;
}

/* {WSF_URI_MAPPING_I}.associated_resource */
EIF_REFERENCE F973_18893 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current);
}

/* {WSF_URI_MAPPING_I}.uri */
EIF_REFERENCE F973_18894 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {WSF_URI_MAPPING_I}.description */

EIF_REFERENCE F973_18897 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (209,RTMS32_EX_H("I\000\000\000s\000\000\000-\000\000\000U\000\000\000R\000\000\000I\000\000\000",6,904973385));
}

/* {WSF_URI_MAPPING_I}.is_mapping */
EIF_BOOLEAN F973_18898 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,loc2);
	RTLR(4,tr1);
	RTLR(5,arg2);
	
	RTGC;
	loc1 = F969_18876(Current, arg1);
	tr1 = *(EIF_REFERENCE *)(Current);
	loc2 = F973_18901(Current, tr1, arg2);
	tr1 = RTMS_EX_H("/",1,47);
	tb1 = F889_17196(RTCV(loc2), tr1);
	if (tb1) {
		tr1 = RTMS_EX_H("/",1,47);
		tb1 = F889_17196(RTCV(loc1), tr1);
		if ((EIF_BOOLEAN) !tb1) {
			tr1 = RTMS_EX_H("/",1,47);
			loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R15106[Dtype(loc1)-887])(RTCV(loc1), tr1);
		}
	} else {
		tr1 = RTMS_EX_H("/",1,47);
		tb1 = F889_17196(RTCV(loc1), tr1);
		if (tb1) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc1) + O15187[Dtype(loc1)-888]);
			loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R15107[Dtype(loc1)-887])(RTCV(loc1), ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)));
		}
	}
	tb1 = F889_17187(RTCV(loc1), loc2);
	if (tb1) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTLE;
	return (EIF_BOOLEAN) 0;
}

/* {WSF_URI_MAPPING_I}.try */
void F973_18899 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3, EIF_REFERENCE arg4)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg4);
	RTLR(2,Current);
	RTLR(3,arg3);
	RTLR(4,tr1);
	RTLR(5,arg2);
	
	RTGC;
	if (F973_18898(Current, arg1, arg4)) {
		F17_3795(RTCV(arg3), *(EIF_REFERENCE *)(Current + _REFACS_1_));
		F645_11961(RTCV(arg4), Current);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		F974_18904(Current, tr1, arg1, arg2);
		{
		/* INLINED CODE (execute_after) */
		/* END INLINED CODE */
		}
		;
	}
	RTLE;
}

/* {WSF_URI_MAPPING_I}.based_uri */
EIF_REFERENCE F973_18901 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc2);
	RTLR(1,arg2);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,arg1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(RTCV(arg2) + _REFACS_2_);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F889_17164(RTCV(tr1), loc2);
		loc1 = (EIF_REFERENCE) tr1;
		F893_17380(RTCV(loc1), arg1);
		RTLE;
		return (EIF_REFERENCE) loc1;
	} else {
		RTLE;
		return (EIF_REFERENCE) arg1;
	}/* NOTREACHED */
	
}

void EIF_Minit376 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
