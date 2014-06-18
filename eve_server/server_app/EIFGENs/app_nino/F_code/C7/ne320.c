/*
 * Code for class NETWORK_SOCKET
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ne320.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {NETWORK_SOCKET}.exists */
EIF_BOOLEAN F599_13968 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	
	
	Result = *(EIF_BOOLEAN *)(Current + O12377[dtype-596]);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O12393[dtype-598]);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + O12394[dtype-598]);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (Result && (EIF_BOOLEAN) ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN) (ti4_2 > ((EIF_INTEGER_32) 0L))));
	return Result;
}

/* {NETWORK_SOCKET}.close_socket */
void F599_13969 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O12405[dtype-598])) {
		if (*(EIF_BOOLEAN *)(Current + O12381[dtype-598])) {
			ti4_1 = *(EIF_INTEGER_32 *)(Current + O12393[dtype-598]);
			ti4_2 = *(EIF_INTEGER_32 *)(Current + O12394[dtype-598]);
			en_socket_close(ti4_1, ti4_2);
		}
		*(EIF_BOOLEAN *)(Current + O12405[dtype-598]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	*(EIF_BOOLEAN *)(Current + O12377[dtype-596]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_BOOLEAN *)(Current + O12375[dtype-596]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_BOOLEAN *)(Current + O12376[dtype-596]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {NETWORK_SOCKET}.descriptor */
EIF_INTEGER_32 F599_13970 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current + O12393[Dtype(Current)-598]);
}

/* {NETWORK_SOCKET}.bind */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F599_13972 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTED;
	EIF_BOOLEAN EIF_VOLATILE loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	RTCDT;
	RTXD;
	
	RTXI(2);
	RTLR(0,Current);
	RTLR(1,saved_except);
	
	RTEV;
	RTGC;
	RTE_T
	if ((EIF_BOOLEAN) !loc1) {
		F600_14032(Current, *(EIF_REFERENCE *)(Current + _REFACS_1_));
		*(EIF_BOOLEAN *)(Current + O12375[dtype-596]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		*(EIF_BOOLEAN *)(Current + O12383[dtype-598]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTE_E
	RTXS(2);
	if ((EIF_BOOLEAN) !F228_9342(Current)) {
		*(EIF_BOOLEAN *)(Current + O12383[dtype-598]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		*(EIF_BOOLEAN *)(Current + O12375[dtype-596]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTER;
	}
	/* NOTREACHED */
	RTE_EE
	RTEOK;
	RTXE;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {NETWORK_SOCKET}.address_type */
EIF_REFERENCE F599_13973 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	RTCT0(NULL, EX_CHECK);
		RTCF0;
	RTEC (EN_POST);
	return (EIF_REFERENCE) 0;
}

/* {NETWORK_SOCKET}.is_closed */
EIF_BOOLEAN F599_13974 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current + O12405[Dtype(Current) - 598]);
}


/* {NETWORK_SOCKET}.port */
EIF_INTEGER_32 F599_13978 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O12383[dtype-598])) {
		RTLE;
		return (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	} else {
		RTLE;
		return (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current + O12396[dtype-598]);
	}/* NOTREACHED */
	
}

/* {NETWORK_SOCKET}.set_reuse_address */
void F599_13986 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = F599_13970(Current);
	ti4_2 = (EIF_INTEGER_32) level_sol_socket();
	ti4_3 = (EIF_INTEGER_32) so_reuse_addr();
	c_set_sock_opt_int(ti4_1, ti4_2, ti4_3, ((EIF_INTEGER_32) 1L));
	RTLE;
}

/* {NETWORK_SOCKET}.set_non_blocking */
void F599_13989 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O12393[dtype-598]);
	c_set_non_blocking(ti4_1);
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current + O12394[dtype-598]) > ((EIF_INTEGER_32) 0L))) {
		ti4_1 = *(EIF_INTEGER_32 *)(Current + O12394[dtype-598]);
		c_set_non_blocking(ti4_1);
	}
	*(EIF_BOOLEAN *)(Current + O12349[dtype-596]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {NETWORK_SOCKET}.set_blocking */
void F599_13990 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O12393[dtype-598]);
	c_set_blocking(ti4_1);
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current + O12394[dtype-598]) > ((EIF_INTEGER_32) 0L))) {
		ti4_1 = *(EIF_INTEGER_32 *)(Current + O12394[dtype-598]);
		c_set_blocking(ti4_1);
	}
	*(EIF_BOOLEAN *)(Current + O12349[dtype-596]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTLE;
}

/* {NETWORK_SOCKET}.make_socket */
void F599_13991 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F600_14033(Current);
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current + O12393[dtype-598]) > ((EIF_INTEGER_32) -1L))) {
		*(EIF_BOOLEAN *)(Current + O12405[dtype-598]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		*(EIF_BOOLEAN *)(Current + O12377[dtype-596]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		F599_13990(Current);
	}
	RTLE;
}

/* {NETWORK_SOCKET}.shutdown */
void F599_13992 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	
	
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O12393[dtype-598]);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + O12394[dtype-598]);
	F599_14004(Current, ti4_1, ti4_2);
}

/* {NETWORK_SOCKET}.c_close */
void F599_14001 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	en_socket_close(arg1, arg2);
	
}

/* {NETWORK_SOCKET}.c_select_poll_with_timeout */
EIF_INTEGER_32 F599_14002 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_BOOLEAN arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	EIF_ENTER_C;Result = (EIF_INTEGER_32) c_select_poll_with_timeout(arg1, arg2, arg3);
	
	EIF_EXIT_C;
	RTGC;
	return Result;
}

/* {NETWORK_SOCKET}.c_shutdown */
void F599_14004 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	EIF_ENTER_C;en_socket_shutdown(arg1, arg2);
	
	EIF_EXIT_C;
	RTGC;
}

void EIF_Minit320 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
