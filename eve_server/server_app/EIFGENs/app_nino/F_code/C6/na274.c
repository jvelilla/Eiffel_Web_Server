/*
 * Code for class NATIVE_STRING
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "na274.h"
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

/* {NATIVE_STRING}.make */
void F570_11721 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15066[Dtype(arg1)-886])(RTCV(arg1));
	F570_11722(Current, ti4_1);
	F570_11736(Current, arg1);
	RTLE;
}

/* {NATIVE_STRING}.make_empty */
void F570_11722 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(583));
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R10919[Dtype(Current)-569])(Current);
	F584_13499(RTCV(tr1), (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)) * ti4_1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTLE;
}

/* {NATIVE_STRING}.string */
EIF_REFERENCE F570_11726 (EIF_REFERENCE Current)
{
	GTCX
	struct eif_ex_35 sloc1;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) sloc1.data;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	memset (&sloc1.overhead, 0, OVERHEAD + _OBJSIZ_0_0_0_0_0_0_0_0_);
	sloc1.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc1.overhead, 38);
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN) eif_builtin_PLATFORM_is_windows) {
		tr1 = F39_4071(RTCV(loc1), *(EIF_REFERENCE *)(Current));
		RTLE;
		return (EIF_REFERENCE) tr1;
	} else {
		tr1 = F39_4046(RTCV(loc1), *(EIF_REFERENCE *)(Current));
		RTLE;
		return (EIF_REFERENCE) tr1;
	}/* NOTREACHED */
	
}

/* {NATIVE_STRING}.item */
EIF_POINTER F570_11728 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	Result = *(EIF_POINTER *)(RTCV(tr1)+ _PTROFF_0_1_0_1_0_0_);
	RTLE;
	return Result;
}

/* {NATIVE_STRING}.managed_data */
EIF_REFERENCE F570_11729 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {NATIVE_STRING}.unit_size */
EIF_INTEGER_32 F570_11734 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	if ((EIF_BOOLEAN) eif_builtin_PLATFORM_is_windows) {
		return (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	} else {
		return (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	}/* NOTREACHED */
	
}

/* {NATIVE_STRING}.is_equal */
EIF_BOOLEAN F570_11735 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	tp1 = F570_11728(Current);
	tp2 = F570_11728(RTCV(arg1));
	Result = tp1 == tp2;
	RTLE;
	return Result;
}

/* {NATIVE_STRING}.set_string */
void F570_11736 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15066[Dtype(arg1)-886])(RTCV(arg1));
	F570_11737(Current, arg1, ((EIF_INTEGER_32) 1L), ti4_1);
	RTLE;
}

/* {NATIVE_STRING}.set_substring */
void F570_11737 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	struct eif_ex_35 sloc1;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) sloc1.data;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	memset (&sloc1.overhead, 0, OVERHEAD + _OBJSIZ_0_0_0_0_0_0_0_0_);
	sloc1.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc1.overhead, 38);
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	
	RTGC;
	if ((EIF_BOOLEAN) eif_builtin_PLATFORM_is_windows) {
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = RTOUCR(71,F570_11741,(Current));
		F39_4064(RTCV(loc1), arg1, arg2, arg3, tr1, ((EIF_INTEGER_32) 0L), tr2);
	} else {
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = RTOUCR(71,F570_11741,(Current));
		F39_4039(RTCV(loc1), arg1, arg2, arg3, tr1, ((EIF_INTEGER_32) 0L), tr2);
	}
	tr1 = RTOUCR(71,F570_11741,(Current));
	ti4_1 = *(EIF_INTEGER_32 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9580[Dtype(tr1)-120])(RTCV(tr1)));
	ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R10919[Dtype(Current)-569])(Current);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 / ti4_2);
	RTLE;
}

/* {NATIVE_STRING}.set_shared_from_pointer */
void F570_11738 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = F567_11659(Current, arg1);
	F570_11739(Current, arg1, ti4_1);
	RTLE;
}

/* {NATIVE_STRING}.set_shared_from_pointer_and_count */
void F570_11739 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R10919[dtype-569])(Current);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg2 / ti4_1);
	tr1 = *(EIF_REFERENCE *)(Current);
	tb1 = *(EIF_BOOLEAN *)(RTCV(tr1)+ _CHROFF_0_0_);
	if ((EIF_BOOLEAN) !tb1) {
		tr1 = RTLNSMART(eif_non_attached_type(583));
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R10919[dtype-569])(Current);
		F584_13502(RTCV(tr1), arg1, (EIF_INTEGER_32) (arg2 + ti4_1));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	} else {
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R10919[dtype-569])(Current);
		F584_13504(RTCV(tr1), arg1, (EIF_INTEGER_32) (arg2 + ti4_1));
	}
	RTLE;
}

/* {NATIVE_STRING}.upper_cell */
static EIF_REFERENCE F570_11741_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(71)

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTEV;
	RTGC;
	RTOTP;
	{
		static EIF_TYPE_INDEX typarr0[] = {125,993,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0, 125, _OBJSIZ_0_0_0_1_0_0_0_0_);
	}
	F126_10164(RTCV(tr1), ((EIF_INTEGER_32) 0L));
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F570_11741 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(71,F570_11741_body,(Current));
}

void EIF_Minit274 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
