/*
 * Code for class WSF_URI_TEMPLATE_MAPPING_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ws374.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WSF_URI_TEMPLATE_MAPPING_I}.make */
void F971_18878 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,arg1);
	RTLR(2,arg2);
	RTLR(3,Current);
	
	RTGC;
	tr1 = RTLNS(896, 896, _OBJSIZ_2_1_0_0_0_0_0_0_);
	F897_18455(RTCV(tr1), arg1);
	F971_18879(Current, tr1, arg2);
	RTLE;
}

/* {WSF_URI_TEMPLATE_MAPPING_I}.make_from_template */
void F971_18879 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	F972_18889(Current, arg2);
	RTLE;
}

/* {WSF_URI_TEMPLATE_MAPPING_I}.associated_resource */
EIF_REFERENCE F971_18880 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	Result = *(EIF_REFERENCE *)(RTCV(tr1));
	RTLE;
	return Result;
}

/* {WSF_URI_TEMPLATE_MAPPING_I}.template */
EIF_REFERENCE F971_18881 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {WSF_URI_TEMPLATE_MAPPING_I}.description */

EIF_REFERENCE F971_18883 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (210,RTMS32_EX_H("M\000\000\000a\000\000\000t\000\000\000c\000\000\000h\000\000\000-\000\000\000U\000\000\000R\000\000\000I\000\000\000-\000\000\000T\000\000\000e\000\000\000m\000\000\000p\000\000\000l\000\000\000a\000\000\000t\000\000\000e\000\000\000",18,531259237));
}

/* {WSF_URI_TEMPLATE_MAPPING_I}.is_mapping */
EIF_BOOLEAN F971_18884 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(6);
	RTLR(0,loc2);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,tr1);
	RTLR(5,arg2);
	
	RTGC;
	loc2 = F969_18876(Current, arg1);
	tr1 = *(EIF_REFERENCE *)(Current);
	loc1 = F971_18887(Current, tr1, arg2);
	tr1 = F897_18467(RTCV(loc1), loc2);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tr1 != NULL);
	RTLE;
	return Result;
}

/* {WSF_URI_TEMPLATE_MAPPING_I}.try */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F971_18885 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3, EIF_REFERENCE arg4)
{
	GTCX
	RTEX;
	RTED;
	EIF_REFERENCE EIF_VOLATILE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr2 = NULL;
	EIF_INTEGER_32  EIF_VOLATILE ti4_1;
	RTXD;
	
	RTXI(12);
	RTLR(0,loc2);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,tr1);
	RTLR(5,arg4);
	RTLR(6,loc4);
	RTLR(7,arg3);
	RTLR(8,loc3);
	RTLR(9,tr2);
	RTLR(10,arg2);
	RTLR(11,saved_except);
	
	RTEV;
	RTGC;
	RTE_T
	loc2 = F969_18876(Current, arg1);
	tr1 = *(EIF_REFERENCE *)(Current);
	loc1 = F971_18887(Current, tr1, arg4);
	tr1 = F897_18467(RTCV(loc1), loc2);
	loc4 = tr1;
	if (EIF_TEST(loc4)) {
		F17_3795(RTCV(arg3), *(EIF_REFERENCE *)(Current + _REFACS_1_));
		F645_11961(RTCV(arg4), Current);
		tr1 = RTLNS(100, 100, _OBJSIZ_3_0_0_1_0_0_0_0_);
		tr2 = *(EIF_REFERENCE *)(RTCV(loc4));
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr2) + O11712[Dtype(tr2)-696]);
		tr2 = *(EIF_REFERENCE *)(RTCV(loc4));
		F101_6954(RTCV(tr1), ti4_1, tr2);
		loc3 = (EIF_REFERENCE) tr1;
		F101_6958(RTCV(loc3), arg1);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		F972_18890(Current, tr1, arg1, arg2);
		F101_6959(RTCV(loc3), arg1);
		{
		/* INLINED CODE (execute_after) */
		/* END INLINED CODE */
		}
		;
	}
	RTE_E
	RTXS(12);
	if ((EIF_BOOLEAN)(loc3 != NULL)) {
		F101_6959(RTCV(loc3), arg1);
	}
	/* NOTREACHED */
	RTE_EE
	RTEOK;
	RTXE;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {WSF_URI_TEMPLATE_MAPPING_I}.based_uri_template */
EIF_REFERENCE F971_18887 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,arg2);
	RTLR(2,tr1);
	RTLR(3,arg1);
	RTLR(4,Result);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(RTCV(arg2) + _REFACS_2_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		Result = F897_18458(RTCV(arg1));
		tr1 = *(EIF_REFERENCE *)(RTCV(arg1));
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R15106[Dtype(loc1)-887])(RTCV(loc1), tr1);
		F897_18459(RTCV(Result), tr1);
	} else {
		RTLE;
		return (EIF_REFERENCE) arg1;
	}
	RTLE;
	return Result;
}

void EIF_Minit374 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
