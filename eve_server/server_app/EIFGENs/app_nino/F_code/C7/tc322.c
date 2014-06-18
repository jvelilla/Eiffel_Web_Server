/*
 * Code for class TCP_STREAM_SOCKET
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "tc322.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {TCP_STREAM_SOCKET}.make */
void F601_14043 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F600_14005(Current);
	F599_13986(Current);
	RTLE;
}

/* {TCP_STREAM_SOCKET}.make_server_by_address_and_port */
void F601_14044 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	F601_14043(Current);
	tr1 = RTLNSMART(eif_non_attached_type(eif_final_id(Y12323,Y12323_gen_type,Dftype(Current),596)));
	F488_9202(RTCV(tr1), arg1, arg2);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	F599_13972(Current);
	RTLE;
}

/* {TCP_STREAM_SOCKET}.put_readable_string_8 */
void F601_14046 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Current);
	
	RTGC;
	tr1 = RTLNS(562, 562, _OBJSIZ_1_0_0_1_0_0_0_0_);
	F563_11287(RTCV(tr1), arg1);
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(RTCV(loc1));
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O15187[Dtype(arg1)-888]);
	F597_13867(Current, tr1, ((EIF_INTEGER_32) 0L), ti4_1);
	RTLE;
}

/* {TCP_STREAM_SOCKET}.try_ready_for_reading */
EIF_BOOLEAN F601_14047 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = F599_13970(Current);
	loc1 = F599_14002(Current, ti4_1, (EIF_BOOLEAN) 1, ((EIF_INTEGER_32) 0L));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L));
	RTLE;
	return Result;
}

void EIF_Minit322 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
