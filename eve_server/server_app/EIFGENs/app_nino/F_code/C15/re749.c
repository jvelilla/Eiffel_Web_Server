/*
 * Code for class READABLE_INDEXABLE [POINTER]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "re749.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {READABLE_INDEXABLE}.new_cursor */
EIF_REFERENCE F689_12245 (EIF_REFERENCE Current)
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
	{
		EIF_TYPE_INDEX typarr0[] = {658,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = eif_final_id(Y11075,Y11075_gen_type,Dftype(Current),629);
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		tr1 = RTLNS(typres0, 658, _OBJSIZ_1_1_0_5_0_0_0_0_);
	}
	F659_12188(RTCV(tr1), Current);
	Result = (EIF_REFERENCE) tr1;
	F659_12208(RTCV(Result));
	RTLE;
	return Result;
}

void EIF_Minit749 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
