/*
 * Code for class EQA_PARTIAL_RESULT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "eq285.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EQA_PARTIAL_RESULT}.output */
EIF_REFERENCE F627_11907 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {EQA_PARTIAL_RESULT}.correct_mismatch */
void F627_11913 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	
	RTGC;
	tr1 = RTOUCR(2,F625_11836,(Current));
	tr2 = RTOUCR(22,F627_11914,(Current));
	tr1 = F697_13004(RTCV(tr1), tr2);
	loc1 = RTCCL(tr1);
	loc1 = RTRV(eif_non_attached_type(889),loc1);
	if (EIF_TEST(loc1)) {
		tr1 = RTLNS(889, 889, _OBJSIZ_1_0_0_4_0_0_0_0_);
		tr2 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F889_17164(RTCV(tr2), loc1);
		F889_17164(RTCV(tr1), tr2);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	} else {
		F625_11835(Current);
	}
	RTLE;
}

/* {EQA_PARTIAL_RESULT}.output_name */

EIF_REFERENCE F627_11914 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (22,RTMS_EX_H("output",6,25180788));
}

void EIF_Minit285 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
