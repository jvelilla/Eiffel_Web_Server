/*
 * Code for class SOCKET_RESOURCES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "so165.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SOCKET_RESOURCES}.error_number */
EIF_INTEGER_32 F486_9088 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (EIF_INTEGER_32) c_errorno();
}

/* {SOCKET_RESOURCES}.socket_ok */
EIF_BOOLEAN F486_9089 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = F486_9088(Current);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
	RTLE;
	return Result;
}

/* {SOCKET_RESOURCES}.level_sol_socket */
EIF_INTEGER_32 F486_9113 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) level_sol_socket();
	
	return Result;
}

/* {SOCKET_RESOURCES}.so_reuse_addr */
EIF_INTEGER_32 F486_9143 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) so_reuse_addr();
	
	return Result;
}

/* {SOCKET_RESOURCES}.c_errorno */
EIF_INTEGER_32 F486_9146 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) c_errorno();
	
	return Result;
}

/* {SOCKET_RESOURCES}.c_reset_error */
void F486_9147 (EIF_REFERENCE Current)
{
	GTCX
	
	c_reset_error();
	
}

/* {SOCKET_RESOURCES}.sock_stream */
EIF_INTEGER_32 F486_9170 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) sock_stream();
	
	return Result;
}

/* {SOCKET_RESOURCES}.af_inet */
EIF_INTEGER_32 F486_9172 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) af_inet();
	
	return Result;
}

/* {SOCKET_RESOURCES}.af_inet6 */
EIF_INTEGER_32 F486_9173 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) af_inet6();
	
	return Result;
}

void EIF_Minit165 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
