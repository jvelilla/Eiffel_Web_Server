/*
 * Code for class WSF_STARTS_WITH_MAPPING_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ws378.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WSF_STARTS_WITH_MAPPING_I}.make */
void F975_18905 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTLD;
	
	RTLI(3);
	RTLR(0,arg2);
	RTLR(1,Current);
	RTLR(2,arg1);
	
	RTGC;
	F976_18915(Current, arg2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	RTLE;
}

/* {WSF_STARTS_WITH_MAPPING_I}.associated_resource */
EIF_REFERENCE F975_18906 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current);
}

/* {WSF_STARTS_WITH_MAPPING_I}.uri */
EIF_REFERENCE F975_18907 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {WSF_STARTS_WITH_MAPPING_I}.description */

EIF_REFERENCE F975_18909 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (208,RTMS32_EX_H("S\000\000\000t\000\000\000a\000\000\000r\000\000\000t\000\000\000s\000\000\000-\000\000\000W\000\000\000i\000\000\000t\000\000\000h\000\000\000-\000\000\000U\000\000\000R\000\000\000I\000\000\000",15,199176521));
}

/* {WSF_STARTS_WITH_MAPPING_I}.is_mapping */
EIF_BOOLEAN F975_18910 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
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
	loc2 = F975_18913(Current, tr1, arg2);
	tb1 = F889_17195(RTCV(loc1), loc2);
	RTLE;
	return (EIF_BOOLEAN) tb1;
}

/* {WSF_STARTS_WITH_MAPPING_I}.try */
void F975_18911 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3, EIF_REFERENCE arg4)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,loc2);
	RTLR(4,tr1);
	RTLR(5,arg4);
	RTLR(6,arg3);
	RTLR(7,arg2);
	
	RTGC;
	loc1 = F969_18876(Current, arg1);
	tr1 = *(EIF_REFERENCE *)(Current);
	loc2 = F975_18913(Current, tr1, arg4);
	tb1 = F889_17195(RTCV(loc1), loc2);
	if (tb1) {
		F17_3795(RTCV(arg3), *(EIF_REFERENCE *)(Current + _REFACS_1_));
		F645_11961(RTCV(arg4), Current);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		F976_18916(Current, tr1, loc2, arg1, arg2);
		{
		/* INLINED CODE (execute_after) */
		/* END INLINED CODE */
		}
		;
	}
	RTLE;
}

/* {WSF_STARTS_WITH_MAPPING_I}.based_uri */
EIF_REFERENCE F975_18913 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
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

void EIF_Minit378 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
