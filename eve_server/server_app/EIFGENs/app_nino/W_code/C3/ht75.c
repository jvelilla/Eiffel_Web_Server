/*
 * Code for class HTTP_SERVER_CONFIGURATION_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F75_6804(EIF_REFERENCE);
extern EIF_TYPED_VALUE F75_6806(EIF_REFERENCE);
extern EIF_TYPED_VALUE F75_6807(EIF_REFERENCE);
extern EIF_TYPED_VALUE F75_6808(EIF_REFERENCE);
extern EIF_TYPED_VALUE F75_6809(EIF_REFERENCE);
extern EIF_TYPED_VALUE F75_6810(EIF_REFERENCE);
extern EIF_TYPED_VALUE F75_6811(EIF_REFERENCE);
extern EIF_TYPED_VALUE F75_6812(EIF_REFERENCE);
extern EIF_TYPED_VALUE F75_6813(EIF_REFERENCE);
extern EIF_TYPED_VALUE F75_6814(EIF_REFERENCE);
extern EIF_TYPED_VALUE F75_6816(EIF_REFERENCE);
extern EIF_TYPED_VALUE F75_6817(EIF_REFERENCE);
extern EIF_TYPED_VALUE F75_6818(EIF_REFERENCE);
extern EIF_TYPED_VALUE F75_6819(EIF_REFERENCE);
extern void F75_6820(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F75_6821(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F75_6822(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F75_6823(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F75_6824(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F75_6825(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F75_6826(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F75_6827(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F75_6828(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F75_6829(EIF_REFERENCE);
extern void F75_6830(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F75_6831(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F75_6832(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit75(void);

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {HTTP_SERVER_CONFIGURATION_I}.make */
void F75_6804 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 74, Current, 0, 0, 1208);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(74, Current, 1208);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 6701, 0x10000000, 1); /* http_server_port */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(6701, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 80L);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 6703, 0x10000000, 1); /* max_concurrent_connections */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(6703, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 100L);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 6702, 0x10000000, 1); /* max_tcp_clients */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(6702, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 100L);
	RTHOOK(4);
	RTDBGAA(Current, dtype, 6704, 0x10000000, 1); /* socket_accept_timeout */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(6704, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1000L);
	RTHOOK(5);
	RTDBGAA(Current, dtype, 6705, 0x10000000, 1); /* socket_connect_timeout */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(6705, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5000L);
	RTHOOK(6);
	RTDBGAA(Current, dtype, 6708, 0x10000000, 1); /* keep_alive_timeout */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(6708, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
	RTHOOK(7);
	RTDBGAA(Current, dtype, 6710, 0x04000000, 1); /* is_secure */
	
	*(EIF_BOOLEAN *)(Current + RTWA(6710, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(8);
	RTDBGAA(Current, dtype, 6711, 0xF8000185, 0); /* ca_crt */
	
	tr1 = RTLNSMART(eif_non_attached_type(RTWCT(6711, dtype, Dftype(Current))));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(15571, Dtype(tr1)))(tr1);
	RTNHOOK(8,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(6711, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(9);
	RTDBGAA(Current, dtype, 6712, 0xF8000185, 0); /* ca_key */
	
	tr1 = RTLNSMART(eif_non_attached_type(RTWCT(6712, dtype, Dftype(Current))));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(15571, Dtype(tr1)))(tr1);
	RTNHOOK(9,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(6712, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {HTTP_SERVER_CONFIGURATION_I}.http_server_name */
EIF_TYPED_VALUE F75_6806 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(6700,Dtype(Current)));
	return r;
}


/* {HTTP_SERVER_CONFIGURATION_I}.http_server_port */
EIF_TYPED_VALUE F75_6807 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(6701,Dtype(Current)));
	return r;
}


/* {HTTP_SERVER_CONFIGURATION_I}.max_tcp_clients */
EIF_TYPED_VALUE F75_6808 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(6702,Dtype(Current)));
	return r;
}


/* {HTTP_SERVER_CONFIGURATION_I}.max_concurrent_connections */
EIF_TYPED_VALUE F75_6809 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(6703,Dtype(Current)));
	return r;
}


/* {HTTP_SERVER_CONFIGURATION_I}.socket_accept_timeout */
EIF_TYPED_VALUE F75_6810 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(6704,Dtype(Current)));
	return r;
}


/* {HTTP_SERVER_CONFIGURATION_I}.socket_connect_timeout */
EIF_TYPED_VALUE F75_6811 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(6705,Dtype(Current)));
	return r;
}


/* {HTTP_SERVER_CONFIGURATION_I}.force_single_threaded */
EIF_TYPED_VALUE F75_6812 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "force_single_threaded";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 74, Current, 0, 0, 1215);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(74, Current, 1215);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6703, Dtype(Current)));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {HTTP_SERVER_CONFIGURATION_I}.is_verbose */
EIF_TYPED_VALUE F75_6813 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(6707,Dtype(Current)));
	return r;
}


/* {HTTP_SERVER_CONFIGURATION_I}.keep_alive_timeout */
EIF_TYPED_VALUE F75_6814 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(6708,Dtype(Current)));
	return r;
}


/* {HTTP_SERVER_CONFIGURATION_I}.is_secure */
EIF_TYPED_VALUE F75_6816 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(6710,Dtype(Current)));
	return r;
}


/* {HTTP_SERVER_CONFIGURATION_I}.ca_crt */
EIF_TYPED_VALUE F75_6817 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(6711,Dtype(Current)));
	return r;
}


/* {HTTP_SERVER_CONFIGURATION_I}.ca_key */
EIF_TYPED_VALUE F75_6818 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(6712,Dtype(Current)));
	return r;
}


/* {HTTP_SERVER_CONFIGURATION_I}.ssl_protocol */
EIF_TYPED_VALUE F75_6819 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = *(EIF_NATURAL_32 *)(Current + RTWA(6713,Dtype(Current)));
	return r;
}


/* {HTTP_SERVER_CONFIGURATION_I}.set_http_server_name */
void F75_6820 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_http_server_name";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 74, Current, 0, 1, 1195);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(74, Current, 1195);
	if (arg1) {
		RTCC(arg1, 74, l_feature_name, 1, 385);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg1 == NULL)) {
		RTHOOK(2);
		RTDBGAA(Current, dtype, 6700, 0xF8000181, 0); /* http_server_name */
		
		*(EIF_REFERENCE *)(Current + RTWA(6700, dtype)) = (EIF_REFERENCE) NULL;
	} else {
		RTHOOK(3);
		RTDBGAA(Current, dtype, 6700, 0xF8000181, 0); /* http_server_name */
		
		tr1 = RTLN(386);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(15701, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(3,1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(6700, dtype)) = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef arg1
}

/* {HTTP_SERVER_CONFIGURATION_I}.set_http_server_port */
void F75_6821 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_http_server_port";
	RTEX;
#define arg1 arg1x.it_i4
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 74, Current, 0, 1, 1196);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(74, Current, 1196);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 6701, 0x10000000, 1); /* http_server_port */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(6701, Dtype(Current))) = (EIF_INTEGER_32) arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {HTTP_SERVER_CONFIGURATION_I}.set_max_tcp_clients */
void F75_6822 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_max_tcp_clients";
	RTEX;
#define arg1 arg1x.it_i4
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 74, Current, 0, 1, 1197);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(74, Current, 1197);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 6702, 0x10000000, 1); /* max_tcp_clients */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(6702, Dtype(Current))) = (EIF_INTEGER_32) arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {HTTP_SERVER_CONFIGURATION_I}.set_max_concurrent_connections */
void F75_6823 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_max_concurrent_connections";
	RTEX;
#define arg1 arg1x.it_i4
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 74, Current, 0, 1, 1198);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(74, Current, 1198);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 6703, 0x10000000, 1); /* max_concurrent_connections */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(6703, Dtype(Current))) = (EIF_INTEGER_32) arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {HTTP_SERVER_CONFIGURATION_I}.set_socket_accept_timeout */
void F75_6824 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_socket_accept_timeout";
	RTEX;
#define arg1 arg1x.it_i4
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 74, Current, 0, 1, 1199);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(74, Current, 1199);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 6704, 0x10000000, 1); /* socket_accept_timeout */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(6704, Dtype(Current))) = (EIF_INTEGER_32) arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {HTTP_SERVER_CONFIGURATION_I}.set_socket_connect_timeout */
void F75_6825 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_socket_connect_timeout";
	RTEX;
#define arg1 arg1x.it_i4
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 74, Current, 0, 1, 1200);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(74, Current, 1200);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 6705, 0x10000000, 1); /* socket_connect_timeout */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(6705, Dtype(Current))) = (EIF_INTEGER_32) arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {HTTP_SERVER_CONFIGURATION_I}.set_force_single_threaded */
void F75_6826 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_force_single_threaded";
	RTEX;
#define arg1 arg1x.it_b
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_b = * (EIF_BOOLEAN *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_BOOL,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 74, Current, 0, 1, 1201);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(74, Current, 1201);
	RTIV(Current, RTAL);
	RTHOOK(1);
	if (arg1) {
		RTHOOK(2);
		ui4_1 = ((EIF_INTEGER_32) 0L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6717, Dtype(Current)))(Current, ui4_1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ui4_1
#undef arg1
}

/* {HTTP_SERVER_CONFIGURATION_I}.set_is_verbose */
void F75_6827 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_is_verbose";
	RTEX;
#define arg1 arg1x.it_b
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_b = * (EIF_BOOLEAN *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_BOOL,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 74, Current, 0, 1, 1202);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(74, Current, 1202);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 6707, 0x04000000, 1); /* is_verbose */
	
	*(EIF_BOOLEAN *)(Current + RTWA(6707, Dtype(Current))) = (EIF_BOOLEAN) arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {HTTP_SERVER_CONFIGURATION_I}.set_keep_alive_timeout */
void F75_6828 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_keep_alive_timeout";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 74, Current, 0, 1, 1203);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(74, Current, 1203);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 6708, 0x10000000, 1); /* keep_alive_timeout */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(6708, dtype)) = (EIF_INTEGER_32) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("keep_alive_timeout_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6708, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {HTTP_SERVER_CONFIGURATION_I}.mark_secure */
void F75_6829 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "mark_secure";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 74, Current, 0, 0, 1204);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(74, Current, 1204);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6709, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(2);
		RTDBGAA(Current, dtype, 6710, 0x04000000, 1); /* is_secure */
		
		*(EIF_BOOLEAN *)(Current + RTWA(6710, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(3);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6701, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 80L))) {
			RTHOOK(4);
			ui4_1 = ((EIF_INTEGER_32) 443L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6715, dtype))(Current, ui4_1x);
		}
	} else {
		RTHOOK(5);
		RTDBGAA(Current, dtype, 6710, 0x04000000, 1); /* is_secure */
		
		*(EIF_BOOLEAN *)(Current + RTWA(6710, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef ui4_1
}

/* {HTTP_SERVER_CONFIGURATION_I}.set_ca_crt */
void F75_6830 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_ca_crt";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 74, Current, 0, 1, 1205);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(74, Current, 1205);
	if (arg1) {
		RTCC(arg1, 74, l_feature_name, 1, 389);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 6711, 0xF8000185, 0); /* ca_crt */
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(6711, dtype)) = (EIF_REFERENCE) RTCCL(arg1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("ca_crt_set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6711, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef arg1
}

/* {HTTP_SERVER_CONFIGURATION_I}.set_ca_key */
void F75_6831 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_ca_key";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 74, Current, 0, 1, 1206);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(74, Current, 1206);
	if (arg1) {
		RTCC(arg1, 74, l_feature_name, 1, 389);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 6712, 0xF8000185, 0); /* ca_key */
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(6712, dtype)) = (EIF_REFERENCE) RTCCL(arg1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("ca_key_set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6712, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef arg1
}

/* {HTTP_SERVER_CONFIGURATION_I}.set_ssl_protocol */
void F75_6832 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_ssl_protocol";
	RTEX;
#define arg1 arg1x.it_n4
	EIF_NATURAL_32 tu4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 74, Current, 0, 1, 1207);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(74, Current, 1207);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 6713, 0x38000000, 1); /* ssl_protocol */
	
	*(EIF_NATURAL_32 *)(Current + RTWA(6713, dtype)) = (EIF_NATURAL_32) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("ssl_protocol_set", EX_POST);
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(6713, dtype));
		if ((EIF_BOOLEAN)(tu4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

void EIF_Minit75 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
