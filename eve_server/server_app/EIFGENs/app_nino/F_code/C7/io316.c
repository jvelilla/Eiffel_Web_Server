/*
 * Code for class IO_MEDIUM
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "io316.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {IO_MEDIUM}.last_string */
EIF_REFERENCE F595_13677 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {IO_MEDIUM}.dispose */
void F595_13702 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN) !(FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R12239[dtype-595])(Current)) {
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R12241[dtype-595])(Current);
	}
	RTLE;
}

/* {IO_MEDIUM}.read_stream_thread_aware */
void F595_13746 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R12283[Dtype(Current)-595])(Current, arg1);
}

/* {IO_MEDIUM}.read_line_thread_aware */
void F595_13749 (EIF_REFERENCE Current)
{
	GTCX
	
	
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R12286[Dtype(Current)-595])(Current);
}

void EIF_Minit316 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
