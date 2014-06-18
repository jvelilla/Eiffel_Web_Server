/*
 * Code for class EXCEPTIONS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ex208.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EXCEPTIONS}.assertion_violation */
EIF_BOOLEAN F228_9342 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	
	RTGC;
	Result = '\0';
	tr1 = RTOUCR(13,F186_9219,(Current));
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R8332[Dtype(tr1)-118])(RTCV(tr1));
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tr1 = F187_9229(RTCV(loc1));
		loc2 = tr1;
		loc2 = RTRV(eif_non_attached_type(218),loc2);
		Result = EIF_TEST(loc2);
	}
	RTLE;
	return Result;
}

/* {EXCEPTIONS}.raise */
void F228_9359 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = RTLNS(187, 187, _OBJSIZ_5_1_0_1_0_0_0_0_);
	loc1 = (EIF_REFERENCE) tr1;
	F187_9236(RTCV(loc1), arg1);
	F187_9221(RTCV(loc1));
	RTLE;
}

/* {EXCEPTIONS}.raise_retrieval_exception */
void F228_9360 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg1);
	
	RTGC;
	tr1 = RTOUCR(13,F186_9219,(Current));
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R8342[Dtype(tr1)-118])(RTCV(tr1), ((EIF_INTEGER_32) 31L));
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		F187_9236(RTCV(loc1), arg1);
		F187_9221(RTCV(loc1));
	}
	RTLE;
}

void EIF_Minit208 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
