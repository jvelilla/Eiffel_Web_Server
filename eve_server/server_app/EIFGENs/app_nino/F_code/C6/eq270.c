/*
 * Code for class EQA_SYSTEM_TEST_SET
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "eq270.h"
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

/* {EQA_SYSTEM_TEST_SET}.on_prepare_frozen */
void F624_11654 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLR(2,Current);
	
	RTGC;
	tr1 = RTMS_EX_H("multithreaded",13,1599663972);
	tr2 = RTLNS(535, 535, _OBJSIZ_0_0_0_0_0_0_0_0_);
	tb1 = (EIF_BOOLEAN) eif_builtin_PLATFORM_is_thread_capable;
	F615_11514(Current, tr1, tb1);
	{
	/* INLINED CODE (on_prepare) */
	/* END INLINED CODE */
	}
	;
	RTLE;
}

/* {EQA_SYSTEM_TEST_SET}.on_prepare */
void F624_11656 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

void EIF_Minit270 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
