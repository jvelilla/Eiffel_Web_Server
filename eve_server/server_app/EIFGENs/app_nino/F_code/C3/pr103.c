/*
 * Code for class PROCESS_IO_LISTENER_THREAD
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "pr103.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {PROCESS_IO_LISTENER_THREAD}.set_exit_signal */
void F146_7972 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	F583_13486(RTCV(tr1));
	*(EIF_BOOLEAN *)(Current+ _CHROFF_3_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	F583_13488(RTCV(tr1));
	RTLE;
}

/* {PROCESS_IO_LISTENER_THREAD}.should_thread_exit */
EIF_BOOLEAN F146_7974 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	F583_13486(RTCV(tr1));
	Result = *(EIF_BOOLEAN *)(Current+ _CHROFF_3_1_);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	F583_13488(RTCV(tr1));
	RTLE;
	return Result;
}

/* {PROCESS_IO_LISTENER_THREAD}.process_launcher */
EIF_REFERENCE F146_7975 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {PROCESS_IO_LISTENER_THREAD}.mutex */
EIF_REFERENCE F146_7977 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


void EIF_Minit103 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
