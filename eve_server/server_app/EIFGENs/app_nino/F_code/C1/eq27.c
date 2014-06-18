/*
 * Code for class EQA_ASSERTIONS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "eq27.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EQA_ASSERTIONS}.assert */
void F29_3957 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_BOOLEAN arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc1);
	RTLR(3,tr1);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) !arg2;
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_)) {
		{
		/* INLINED CODE (on_violation) */
		/* END INLINED CODE */
		}
		;
		tr1 = RTLNS(187, 187, _OBJSIZ_5_1_0_1_0_0_0_0_);
		loc1 = (EIF_REFERENCE) tr1;
		F187_9236(RTCV(loc1), arg1);
		F187_9221(RTCV(loc1));
	} else {
		{
		/* INLINED CODE (on_satisfaction) */
		/* END INLINED CODE */
		}
		;
	}
	RTLE;
}

/* {EQA_ASSERTIONS}.on_violation */
void F29_3959 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTGC;
}

/* {EQA_ASSERTIONS}.on_satisfaction */
void F29_3960 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTGC;
}

void EIF_Minit27 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
