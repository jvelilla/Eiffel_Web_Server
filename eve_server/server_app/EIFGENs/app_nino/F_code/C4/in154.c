/*
 * Code for class INET6_ADDRESS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "in154.h"
#include "eif_built_in.h"
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F230_8783
static EIF_NATURAL_8 inline_F230_8783 (EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	return (EIF_NATURAL_8) (((unsigned char*)arg1)[arg2])
	;
}
#define INLINE_F230_8783
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {INET6_ADDRESS}.make_from_host_and_address */
void F230_8757 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_1_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg2;
	RTLE;
}

/* {INET6_ADDRESS}.make_from_host_and_address_and_interface_name */
void F230_8758 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg3);
	RTLR(2,arg1);
	RTLR(3,arg2);
	
	RTGC;
	RTAR(Current, arg3);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) arg3;
	F230_8759(Current, arg1, arg2, ((EIF_INTEGER_32) 0L));
	RTLE;
}

/* {INET6_ADDRESS}.make_from_host_and_address_and_scope */
void F230_8759 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	
	RTGC;
	F230_8757(Current, arg1, arg2);
	if ((EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 0L))) {
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_1_0_1_) = (EIF_INTEGER_32) arg3;
		*(EIF_BOOLEAN *)(Current+ _CHROFF_3_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTLE;
}

/* {INET6_ADDRESS}.make_from_host_and_pointer */
void F230_8760 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_8 tu1_1;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg1);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {731,1017,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0, 731, _OBJSIZ_1_1_0_2_0_0_0_0_);
	}
	F732_12305(RTCV(tr1), ((EIF_NATURAL_8) 0U), ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 16L));
	loc2 = (EIF_REFERENCE) tr1;
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(arg2 != tp1)) {
		loc1 = (EIF_POINTER) en_sockaddr_get_ipv6_address(arg2);
		loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 16L))) break;
			tu1_1 = inline_F230_8783(loc1, (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L)));
			F732_12330(RTCV(loc2), tu1_1, loc3);
			loc3++;
		}
		loc4 = (EIF_INTEGER_32) en_sockaddr_get_ipv6_address_scope(arg2);
	}
	F230_8759(Current, arg1, loc2, loc4);
	RTLE;
}

/* {INET6_ADDRESS}.host_address */
EIF_REFERENCE F230_8761 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,loc1);
	
	RTGC;
	Result = F230_8779(Current, *(EIF_REFERENCE *)(Current + _REFACS_1_));
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		F893_17391(RTCV(Result), (EIF_CHARACTER_8) '%');
		F893_17380(RTCV(Result), loc1);
	} else {
		if ((EIF_BOOLEAN) (*(EIF_BOOLEAN *)(Current+ _CHROFF_3_0_) && (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_1_0_1_) > ((EIF_INTEGER_32) 0L)))) {
			F893_17391(RTCV(Result), (EIF_CHARACTER_8) '%');
			F893_17381(RTCV(Result), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_1_0_1_));
		}
	}
	RTLE;
	return Result;
}

/* {INET6_ADDRESS}.raw_address */
EIF_REFERENCE F230_8772 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	Result = (EIF_REFERENCE) eif_builtin_ANY_twin (tr1);
	RTLE;
	return Result;
}

/* {INET6_ADDRESS}.sockaddr */
EIF_REFERENCE F230_8773 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,loc1);
	RTLR(3,Current);
	
	RTGC;
	tr1 = RTLNS(583, 583, _OBJSIZ_0_1_0_1_0_1_1_0_);
	ti4_1 = (EIF_INTEGER_32) en_socket_address_len();
	F584_13499(RTCV(tr1), ti4_1);
	Result = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(583, 583, _OBJSIZ_0_1_0_1_0_1_1_0_);
	F584_13500(RTCV(tr1), *(EIF_REFERENCE *)(Current + _REFACS_1_));
	loc1 = (EIF_REFERENCE) tr1;
	tp1 = *(EIF_POINTER *)(RTCV(Result)+ _PTROFF_0_1_0_1_0_0_);
	tp2 = *(EIF_POINTER *)(RTCV(loc1)+ _PTROFF_0_1_0_1_0_0_);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_1_0_1_);
	en_socket_address_fill_ipv6(tp1, tp2, arg1, ti4_1);
	RTLE;
	return Result;
}

/* {INET6_ADDRESS}.the_address */
EIF_REFERENCE F230_8774 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {INET6_ADDRESS}.the_scope_ifname */
EIF_REFERENCE F230_8776 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {INET6_ADDRESS}.numeric_to_text */
EIF_REFERENCE F230_8779 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_16 loc2 = (EIF_NATURAL_16) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
	EIF_NATURAL_16 tu2_3;
	EIF_NATURAL_8 tu1_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F885_16993(RTCV(tr1));
	Result = (EIF_REFERENCE) tr1;
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		if ((EIF_BOOLEAN) (loc1 >= ((EIF_INTEGER_32) 16L))) break;
		tu1_1 = F732_12310(RTCV(arg1), loc1);
		tu2_1 = (EIF_NATURAL_16) tu1_1;
		tu2_1 = eif_bit_shift_left(tu2_1,((EIF_INTEGER_32) 8L));
		tu2_2 = (EIF_NATURAL_16) ((EIF_INTEGER_32) 65280L);
		tu2_1 = eif_bit_and((tu2_1),tu2_2);
		tu1_1 = F732_12310(RTCV(arg1), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)));
		tu2_2 = (EIF_NATURAL_16) tu1_1;
		tu2_3 = (EIF_NATURAL_16) ((EIF_INTEGER_32) 255L);
		tu2_2 = eif_bit_and(tu2_2,tu2_3);
		tu2_1 = eif_bit_or((tu2_1),tu2_2);
		loc2 = (EIF_NATURAL_16) tu2_1;
		tr1 = RTLNS(1008, 1008, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)tr1 = loc2;
		
		tr1 = F1007_19677(RTCV(tr1));
		F893_17380(RTCV(Result), tr1);
		if ((EIF_BOOLEAN) (loc1 < (EIF_INTEGER_32) (((EIF_INTEGER_32) 16L) - ((EIF_INTEGER_32) 1L)))) {
			F893_17391(RTCV(Result), (EIF_CHARACTER_8) ':');
		}
		loc1 += ((EIF_INTEGER_32) 2L);
	}
	RTLE;
	return Result;
}

/* {INET6_ADDRESS}.fill_ipv6 */
void F230_8780 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	
	en_socket_address_fill_ipv6(arg1, arg2, arg3, arg4);
	
}

/* {INET6_ADDRESS}.c_sockaddr_get_ipv6_address */
EIF_POINTER F230_8781 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) en_sockaddr_get_ipv6_address(arg1);
	
	return Result;
}

/* {INET6_ADDRESS}.c_sockaddr_get_ipv6_address_scope */
EIF_INTEGER_32 F230_8782 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) en_sockaddr_get_ipv6_address_scope(arg1);
	
	return Result;
}

/* {INET6_ADDRESS}.c_get_addr_element */
EIF_NATURAL_8 F230_8783 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	
	
	Result = inline_F230_8783 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2);
	return Result;
}

void EIF_Minit154 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
