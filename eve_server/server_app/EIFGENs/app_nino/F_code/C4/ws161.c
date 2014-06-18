/*
 * Code for class WSF_HEAD_RESPONSE_WRAPPER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ws161.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WSF_HEAD_RESPONSE_WRAPPER}.make_from_response */
void F150_9061 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) arg1;
	F116_8555(Current, arg1);
	RTLE;
}

/* {WSF_HEAD_RESPONSE_WRAPPER}.wsf_response */
EIF_REFERENCE F150_9062 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {WSF_HEAD_RESPONSE_WRAPPER}.put_string */
void F150_9064 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTGC;
}

/* {WSF_HEAD_RESPONSE_WRAPPER}.put_chunk */
void F150_9066 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	
	
	RTGC;
}

/* {WSF_HEAD_RESPONSE_WRAPPER}.put_chunk_end */
void F150_9067 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

void EIF_Minit161 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
