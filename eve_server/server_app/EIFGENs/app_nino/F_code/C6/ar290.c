/*
 * Code for class ARGUMENTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ar290.h"
#include "eif_built_in.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ARGUMENTS}.argument */
EIF_REFERENCE F648_11992 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	
	RTGC;
	Result = RTOUCR(73,F648_12015,(Current));
	Result = F651_12167(RTCV(Result), arg1);
	Result = F885_17049(RTCV(Result));
	RTLE;
	return Result;
}

/* {ARGUMENTS}.argument_array */
static EIF_REFERENCE F648_11993_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRR
	RTOUDR(74)

	
	RTEV;
	RTOTP;
	Result = F648_12014(Current);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F648_11993 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(74,F648_11993_body,(Current));
}

/* {ARGUMENTS}.new_cursor */
EIF_REFERENCE F648_11996 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	
	RTGC;
	Result = F682_12245(RTCV(RTOUCR(74,F648_11993,(Current))));
	RTLE;
	return Result;
}

/* {ARGUMENTS}.argument_count */
EIF_INTEGER_32 F648_12010 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = (EIF_INTEGER_32) eif_builtin_ARGUMENTS_32_argument_count (RTOUCR(73,F648_12015,(Current)));
	RTLE;
	return Result;
}

/* {ARGUMENTS}.internal_argument_array */
EIF_REFERENCE F648_12014 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Result);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {721,892,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0, 721, _OBJSIZ_1_1_0_2_0_0_0_0_);
	}
	tr2 = RTMS_EX_H("",0,0);
	ti4_1 = F648_12010(Current);
	F722_12305(RTCV(tr1), tr2, ((EIF_INTEGER_32) 0L), ti4_1);
	Result = (EIF_REFERENCE) tr1;
	F239_9595(RTCV(Result));
	for (;;) {
		if ((EIF_BOOLEAN) (loc1 > F648_12010(Current))) break;
		tr1 = F648_11992(Current, loc1);
		F722_12330(RTCV(Result), tr1, loc1);
		loc1++;
	}
	RTLE;
	return Result;
}

/* {ARGUMENTS}.internal_arguments */
static EIF_REFERENCE F648_12015_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(73)

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(650, 650, _OBJSIZ_0_0_0_0_0_0_0_0_);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F648_12015 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(73,F648_12015_body,(Current));
}

void EIF_Minit290 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
