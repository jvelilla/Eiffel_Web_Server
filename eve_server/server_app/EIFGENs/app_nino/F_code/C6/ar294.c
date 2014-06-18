/*
 * Code for class ARGUMENTS_32
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ar294.h"
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

/* {ARGUMENTS_32}.argument */
EIF_REFERENCE F651_12167 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	tr1 = RTOUCR(27,F651_12185,(Current));
	Result = F722_12310(RTCV(tr1), arg1);
	RTLE;
	return Result;
}

/* {ARGUMENTS_32}.new_cursor */
EIF_REFERENCE F651_12171 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	
	RTGC;
	Result = F682_12245(RTCV(RTOUCR(27,F651_12185,(Current))));
	RTLE;
	return Result;
}

/* {ARGUMENTS_32}.argument_count */
EIF_INTEGER_32 F651_12181 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) eif_builtin_ARGUMENTS_32_argument_count (Current);
	return Result;
}

/* {ARGUMENTS_32}.internal_argument_array */
static EIF_REFERENCE F651_12185_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(27)

	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	
	RTEV;
	RTGC;
	RTOTP;
	{
		static EIF_TYPE_INDEX typarr0[] = {721,887,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0, 721, _OBJSIZ_1_1_0_2_0_0_0_0_);
	}
	tr2 = RTLNS(887, 887, _OBJSIZ_1_0_0_4_0_0_0_0_);
	F885_16993(RTCV(tr2));
	ti4_1 = (EIF_INTEGER_32) eif_builtin_ARGUMENTS_32_argument_count (Current);
	F722_12305(RTCV(tr1), tr2, ((EIF_INTEGER_32) 0L), ti4_1);
	Result = (EIF_REFERENCE) tr1;
	F239_9595(RTCV(Result));
	for (;;) {
		if ((EIF_BOOLEAN) (loc1 > (EIF_INTEGER_32) eif_builtin_ARGUMENTS_32_argument_count (Current))) break;
		tr1 = F651_12186(Current, loc1);
		F722_12330(RTCV(Result), tr1, loc1);
		loc1++;
	}
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F651_12185 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(27,F651_12185_body,(Current));
}

/* {ARGUMENTS_32}.i_th_argument_string */
EIF_REFERENCE F651_12186 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,Result);
	
	RTGC;
	tr1 = RTLNS(569, 569, _OBJSIZ_1_0_0_1_0_0_0_0_);
	F570_11722(RTCV(tr1), ((EIF_INTEGER_32) 0L));
	loc1 = (EIF_REFERENCE) tr1;
	loc2 = (EIF_POINTER) eif_builtin_ARGUMENTS_32_i_th_argument_pointer (Current, arg1);
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(loc2 != tp1)) {
		F570_11738(RTCV(loc1), loc2);
		tr1 = RTLNS(887, 887, _OBJSIZ_1_0_0_4_0_0_0_0_);
		tr2 = F570_11726(RTCV(loc1));
		F887_17091(RTCV(tr1), tr2);
		Result = (EIF_REFERENCE) tr1;
	} else {
		tr1 = RTLNS(887, 887, _OBJSIZ_1_0_0_4_0_0_0_0_);
		F885_16993(RTCV(tr1));
		RTLE;
		return (EIF_REFERENCE) tr1;
	}
	RTLE;
	return Result;
}

/* {ARGUMENTS_32}.i_th_argument_pointer */
EIF_POINTER F651_12187 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) eif_builtin_ARGUMENTS_32_i_th_argument_pointer (Current, arg1);
	return Result;
}

void EIF_Minit294 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
