/*
 * Code for class EXCEPTION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ex169.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EXCEPTION}.raise */
void F187_9221 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTOUCR(13,F186_9219,(Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R8333[Dtype(tr1)-118])(RTCV(tr1), Current);
	RTLE;
}

/* {EXCEPTION}.trace */
EIF_REFERENCE F187_9227 (EIF_REFERENCE Current)
{
	GTCX
	struct eif_ex_35 sloc1;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) sloc1.data;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	memset (&sloc1.overhead, 0, OVERHEAD + _OBJSIZ_0_0_0_0_0_0_0_0_);
	sloc1.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc1.overhead, 38);
	RTLI(4);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		tr1 = F39_4050(RTCV(loc1), loc2);
		RTLE;
		return (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) 0;
}

/* {EXCEPTION}.code */
EIF_INTEGER_32 F187_9228 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_INTEGER_32) 0;
}

/* {EXCEPTION}.original */
EIF_REFERENCE F187_9229 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,loc3);
	RTLR(4,tr1);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 == Current) || (EIF_BOOLEAN)(loc1 == NULL))) {
		RTLE;
		return (EIF_REFERENCE) Current;
	} else {
		loc2 = Current;
		loc2 = RTRV(eif_non_attached_type(213),loc2);
		loc3 = Current;
		loc3 = RTRV(eif_non_attached_type(200),loc3);
		if ((EIF_BOOLEAN) ((EIF_TEST(loc2)) || (EIF_TEST(loc3)))) {
			tr1 = F187_9229(RTCV(loc1));
			RTLE;
			return (EIF_REFERENCE) tr1;
		} else {
			RTLE;
			return (EIF_REFERENCE) Current;
		}
	}/* NOTREACHED */
	
}

/* {EXCEPTION}.recipient_name */
EIF_REFERENCE F187_9231 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {EXCEPTION}.type_name */
EIF_REFERENCE F187_9232 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {EXCEPTION}.set_description */
void F187_9236 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	struct eif_ex_35 sloc1;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) sloc1.data;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	memset (&sloc1.overhead, 0, OVERHEAD + _OBJSIZ_0_0_0_0_0_0_0_0_);
	sloc1.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc1.overhead, 38);
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc3);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,Current);
	RTLR(5,loc1);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		tr1 = RTLNSMART(eif_non_attached_type(562));
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15066[Dtype(arg1)-886])(RTCV(arg1));
		F563_11288(RTCV(tr1), ti4_1);
		loc3 = (EIF_REFERENCE) tr1;
		{
			static EIF_TYPE_INDEX typarr0[] = {125,993,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr1 = RTLNS(typres0, 125, _OBJSIZ_0_0_0_1_0_0_0_0_);
		}
		F126_10164(RTCV(tr1), ((EIF_INTEGER_32) 0L));
		loc2 = (EIF_REFERENCE) tr1;
		tr1 = *(EIF_REFERENCE *)(RTCV(loc3));
		F39_4043(RTCV(loc1), arg1, tr1, ((EIF_INTEGER_32) 0L), loc2);
		ti4_1 = *(EIF_INTEGER_32 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9580[Dtype(loc2)-120])(RTCV(loc2)));
		F563_11314(RTCV(loc3), ti4_1);
		RTAR(Current, loc3);
		*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) loc3;
	} else {
		*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) NULL;
	}
	RTLE;
}

/* {EXCEPTION}.is_ignored */
EIF_BOOLEAN F187_9239 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	
	RTGC;
	tr1 = RTOUCR(13,F186_9219,(Current));
	tr2 = F1_5(Current);
	Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R8339[Dtype(tr1)-118])(RTCV(tr1), tr2);
	RTLE;
	return Result;
}

/* {EXCEPTION}.out */
EIF_REFERENCE F187_9241 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,loc1);
	
	RTGC;
	tr1 = F1_5(Current);
	Result = F905_18791(RTCV(tr1));
	loc1 = F187_9227(Current);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		F893_17391(RTCV(Result), (EIF_CHARACTER_8) '\012');
		tr1 = F885_17049(RTCV(loc1));
		F893_17380(RTCV(Result), tr1);
	}
	RTLE;
	return Result;
}

/* {EXCEPTION}.throwing_exception */
EIF_REFERENCE F187_9242 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {EXCEPTION}.set_throwing_exception */
void F187_9243 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) arg1;
}

/* {EXCEPTION}.set_recipient_name */
void F187_9244 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
}

/* {EXCEPTION}.c_description */
EIF_REFERENCE F187_9247 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {EXCEPTION}.set_type_name */
void F187_9248 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg1;
}

/* {EXCEPTION}.set_exception_trace */
void F187_9250 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) arg1;
}

/* {EXCEPTION}.internal_trace */
EIF_REFERENCE F187_9251 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_4_);
}


void EIF_Minit169 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
