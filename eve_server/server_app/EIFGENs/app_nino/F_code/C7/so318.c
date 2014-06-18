/*
 * Code for class SOCKET
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "so318.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SOCKET}.was_error */
EIF_BOOLEAN F597_13837 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_3_) != NULL);
}

/* {SOCKET}.socket_ok */
EIF_BOOLEAN F597_13838 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = '\0';
	if (F486_9089(Current)) {
		Result = (EIF_BOOLEAN) !F597_13837(Current);
	}
	RTLE;
	return Result;
}

/* {SOCKET}.cleanup */
void F597_13849 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R12231[Dtype(Current)-596])(Current)) {
		F597_13850(Current);
	}
	RTLE;
}

/* {SOCKET}.close */
void F597_13850 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN) (*(EIF_BOOLEAN *)(Current + O12375[dtype-596]) || *(EIF_BOOLEAN *)(Current + O12376[dtype-596]))) {
		F599_13992(Current);
	}
	if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R12231[dtype-596])(Current)) {
		F599_13969(Current);
	}
	RTLE;
}

/* {SOCKET}.descriptor_available */
EIF_BOOLEAN F597_13853 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current + O12377[Dtype(Current) - 596]);
}


/* {SOCKET}.address */
EIF_REFERENCE F597_13857 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {SOCKET}.peer_address */
EIF_REFERENCE F597_13858 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {SOCKET}.address_type */
EIF_REFERENCE F597_13859 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	RTCT0(NULL, EX_CHECK);
		RTCF0;
	RTEC (EN_POST);
	return (EIF_REFERENCE) 0;
}

/* {SOCKET}.set_peer_address */
void F597_13860 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) arg1;
}

/* {SOCKET}.put_managed_pointer */
void F597_13867 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	ti4_1 = F599_13970(Current);
	tp1 = *(EIF_POINTER *)(RTCV(arg1)+ _PTROFF_0_1_0_1_0_0_);
	tp1 = RTPOF(tp1,arg2);
	F597_13948(Current, ti4_1, tp1, arg3);
	RTLE;
}

/* {SOCKET}.exists */
EIF_BOOLEAN F597_13889 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = '\0';
	if (*(EIF_BOOLEAN *)(Current + O12377[Dtype(Current)-596])) {
		Result = (EIF_BOOLEAN) (F599_13970(Current) >= ((EIF_INTEGER_32) 0L));
	}
	RTLE;
	return Result;
}

/* {SOCKET}.is_open_write */
EIF_BOOLEAN F597_13890 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current + O12376[Dtype(Current) - 596]);
}


/* {SOCKET}.is_open_read */
EIF_BOOLEAN F597_13891 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current + O12375[Dtype(Current) - 596]);
}


/* {SOCKET}.readable */
EIF_BOOLEAN F597_13895 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = '\0';
	if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R12231[dtype-596])(Current)) {
		Result = *(EIF_BOOLEAN *)(Current + O12375[dtype-596]);
	}
	RTLE;
	return Result;
}

/* {SOCKET}.read_character */
void F597_13901 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = F597_13946(Current);
	F597_13919(Current, tr1, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 1L));
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O12230[dtype-594]) != ((EIF_INTEGER_32) 1L))) {
		tr1 = RTMS_EX_H("Peer closed connection",22,217982062);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	} else {
		tr1 = F597_13946(Current);
		tc1 = F584_13520(RTCV(tr1), ((EIF_INTEGER_32) 0L));
		*(EIF_CHARACTER_8 *)(Current + O12216[dtype-594]) = (EIF_CHARACTER_8) tc1;
		*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) NULL;
	}
	RTLE;
}

/* {SOCKET}.read_stream */
void F597_13917 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	
	RTGC;
	tr1 = RTLNS(562, 562, _OBJSIZ_1_0_0_1_0_0_0_0_);
	F563_11288(RTCV(tr1), (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)));
	loc1 = (EIF_REFERENCE) tr1;
	ti4_1 = F599_13970(Current);
	tp1 = F563_11306(RTCV(loc1));
	loc2 = F597_13949(Current, ti4_1, arg1, tp1);
	*(EIF_INTEGER_32 *)(Current + O12230[Dtype(Current)-594]) = (EIF_INTEGER_32) loc2;
	if ((EIF_BOOLEAN) (loc2 >= ((EIF_INTEGER_32) 0L))) {
		F563_11314(RTCV(loc1), loc2);
		tr1 = F563_11299(RTCV(loc1), ((EIF_INTEGER_32) 1L), loc2);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	} else {
		tr1 = *(EIF_REFERENCE *)(Current);
		F893_17405(RTCV(tr1));
	}
	RTLE;
}

/* {SOCKET}.read_to_managed_pointer */
void F597_13919 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 == arg3) || (EIF_BOOLEAN) (loc2 <= ((EIF_INTEGER_32) 0L)))) break;
		ti4_1 = F599_13970(Current);
		tp1 = *(EIF_POINTER *)(RTCV(arg1)+ _PTROFF_0_1_0_1_0_0_);
		tp1 = RTPOF(tp1,arg2);
		tp1 = RTPOF(tp1,loc1);
		loc2 = F597_13949(Current, ti4_1, (EIF_INTEGER_32) (arg3 - loc1), tp1);
		if ((EIF_BOOLEAN) (loc2 >= ((EIF_INTEGER_32) 0L))) {
			loc1 += loc2;
		}
	}
	*(EIF_INTEGER_32 *)(Current + O12230[Dtype(Current)-594]) = (EIF_INTEGER_32) loc1;
	RTLE;
}

/* {SOCKET}.read_line */
void F597_13920 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F889_17162(RTCV(tr1), ((EIF_INTEGER_32) 512L));
	loc1 = (EIF_REFERENCE) tr1;
	F597_13901(Current);
	for (;;) {
		tb1 = '\01';
		if (!(EIF_BOOLEAN)(*(EIF_CHARACTER_8 *)(Current + O12216[dtype-594]) == (EIF_CHARACTER_8) '\012')) {
			tb1 = F597_13837(Current);
		}
		if (tb1) break;
		F893_17392(RTCV(loc1), *(EIF_CHARACTER_8 *)(Current + O12216[dtype-594]));
		F597_13901(Current);
	}
	RTAR(Current, loc1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc1;
	RTLE;
}

/* {SOCKET}.socket_error */
EIF_REFERENCE F597_13944 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {SOCKET}.socket_buffer */
EIF_REFERENCE F597_13946 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		tr1 = RTLNSMART(eif_non_attached_type(583));
		F584_13499(RTCV(tr1), ((EIF_INTEGER_32) 16L));
		loc1 = (EIF_REFERENCE) tr1;
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) loc1;
	}
	RTLE;
	return (EIF_REFERENCE) loc1;
}

/* {SOCKET}.internal_socket_buffer */
EIF_REFERENCE F597_13947 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_4_);
}


/* {SOCKET}.c_put_stream */
void F597_13948 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	
	EIF_ENTER_C;c_put_stream(arg1, arg2, arg3);
	
	EIF_EXIT_C;
	RTGC;
}

/* {SOCKET}.c_read_stream */
EIF_INTEGER_32 F597_13949 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	EIF_ENTER_C;Result = (EIF_INTEGER_32) c_read_stream(arg1, arg2, arg3);
	
	EIF_EXIT_C;
	RTGC;
	return Result;
}

/* {SOCKET}.c_set_sock_opt_int */
void F597_13953 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	
	c_set_sock_opt_int(arg1, arg2, arg3, arg4);
	
}

/* {SOCKET}.c_set_non_blocking */
void F597_13956 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	c_set_non_blocking(arg1);
	
}

/* {SOCKET}.c_set_blocking */
void F597_13957 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	c_set_blocking(arg1);
	
}

void EIF_Minit318 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
