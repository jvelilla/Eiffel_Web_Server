/*
 * Code for class HTTP_SERVER_CONFIGURATION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F9_3722(EIF_REFERENCE);
extern EIF_TYPED_VALUE F9_3723(EIF_REFERENCE);
extern EIF_TYPED_VALUE F9_3724(EIF_REFERENCE);
extern EIF_TYPED_VALUE F9_3725(EIF_REFERENCE);
extern EIF_TYPED_VALUE F9_3726(EIF_REFERENCE);
extern EIF_TYPED_VALUE F9_3727(EIF_REFERENCE);
extern EIF_TYPED_VALUE F9_3728(EIF_REFERENCE);
extern EIF_TYPED_VALUE F9_3729(EIF_REFERENCE);
extern EIF_TYPED_VALUE F9_3730(EIF_REFERENCE);
extern EIF_TYPED_VALUE F9_3731(EIF_REFERENCE);
extern void F9_3732(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F9_3733(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F9_3734(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F9_3735(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F9_3736(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F9_3737(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F9_3738(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F9_3739(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit9(void);

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

/* {HTTP_SERVER_CONFIGURATION}.make */
void F9_3722 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 8, Current, 0, 0, 206);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(8, Current, 206);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 3724, 0x10000000, 1); /* http_server_port */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(3724, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 80L);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 3725, 0x10000000, 1); /* max_tcp_clients */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(3725, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 100L);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 3726, 0x10000000, 1); /* socket_accept_timeout */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(3726, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1000L);
	RTHOOK(4);
	RTDBGAA(Current, dtype, 3727, 0x10000000, 1); /* socket_connect_timeout */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(3727, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5000L);
	RTHOOK(5);
	RTDBGAA(Current, dtype, 3722, 0xF8000155, 0); /* document_root */
	
	tr1 = RTMS_EX_H("htdocs",6,1890384755);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(3722, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(6);
	RTDBGAA(Current, dtype, 3728, 0x04000000, 1); /* force_single_threaded */
	
	*(EIF_BOOLEAN *)(Current + RTWA(3728, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {HTTP_SERVER_CONFIGURATION}.server_details */
RTOID (F9_3723)


EIF_TYPED_VALUE F9_3723 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F9_3723,208,RTMS_EX_H("Server : NINO Eiffel Server",27,1169312370));
}

/* {HTTP_SERVER_CONFIGURATION}.document_root */
EIF_TYPED_VALUE F9_3724 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(3722,Dtype(Current)));
	return r;
}


/* {HTTP_SERVER_CONFIGURATION}.http_server_name */
EIF_TYPED_VALUE F9_3725 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(3723,Dtype(Current)));
	return r;
}


/* {HTTP_SERVER_CONFIGURATION}.http_server_port */
EIF_TYPED_VALUE F9_3726 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(3724,Dtype(Current)));
	return r;
}


/* {HTTP_SERVER_CONFIGURATION}.max_tcp_clients */
EIF_TYPED_VALUE F9_3727 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(3725,Dtype(Current)));
	return r;
}


/* {HTTP_SERVER_CONFIGURATION}.socket_accept_timeout */
EIF_TYPED_VALUE F9_3728 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(3726,Dtype(Current)));
	return r;
}


/* {HTTP_SERVER_CONFIGURATION}.socket_connect_timeout */
EIF_TYPED_VALUE F9_3729 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(3727,Dtype(Current)));
	return r;
}


/* {HTTP_SERVER_CONFIGURATION}.force_single_threaded */
EIF_TYPED_VALUE F9_3730 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(3728,Dtype(Current)));
	return r;
}


/* {HTTP_SERVER_CONFIGURATION}.is_verbose */
EIF_TYPED_VALUE F9_3731 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(3729,Dtype(Current)));
	return r;
}


/* {HTTP_SERVER_CONFIGURATION}.set_http_server_name */
void F9_3732 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_http_server_name";
	RTEX;
#define arg1 arg1x.it_r
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 8, Current, 0, 1, 216);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(8, Current, 216);
	RTCC(arg1, 8, l_feature_name, 1, RTWCT(3723, Dtype(Current), Dftype(Current)));
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 3723, 0xF8000155, 0); /* http_server_name */
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(3723, Dtype(Current))) = (EIF_REFERENCE) RTCCL(arg1);
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

/* {HTTP_SERVER_CONFIGURATION}.set_http_server_port */
void F9_3733 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
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
	
	RTEAA(l_feature_name, 8, Current, 0, 1, 217);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(8, Current, 217);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 3724, 0x10000000, 1); /* http_server_port */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(3724, Dtype(Current))) = (EIF_INTEGER_32) arg1;
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

/* {HTTP_SERVER_CONFIGURATION}.set_document_root */
void F9_3734 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_document_root";
	RTEX;
#define arg1 arg1x.it_r
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 8, Current, 0, 1, 218);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(8, Current, 218);
	RTCC(arg1, 8, l_feature_name, 1, RTWCT(3722, Dtype(Current), Dftype(Current)));
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 3722, 0xF8000155, 0); /* document_root */
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(3722, Dtype(Current))) = (EIF_REFERENCE) RTCCL(arg1);
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

/* {HTTP_SERVER_CONFIGURATION}.set_max_tcp_clients */
void F9_3735 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
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
	
	RTEAA(l_feature_name, 8, Current, 0, 1, 219);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(8, Current, 219);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 3725, 0x10000000, 1); /* max_tcp_clients */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(3725, Dtype(Current))) = (EIF_INTEGER_32) arg1;
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

/* {HTTP_SERVER_CONFIGURATION}.set_socket_accept_timeout */
void F9_3736 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
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
	
	RTEAA(l_feature_name, 8, Current, 0, 1, 220);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(8, Current, 220);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 3726, 0x10000000, 1); /* socket_accept_timeout */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(3726, Dtype(Current))) = (EIF_INTEGER_32) arg1;
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

/* {HTTP_SERVER_CONFIGURATION}.set_socket_connect_timeout */
void F9_3737 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
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
	
	RTEAA(l_feature_name, 8, Current, 0, 1, 221);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(8, Current, 221);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 3727, 0x10000000, 1); /* socket_connect_timeout */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(3727, Dtype(Current))) = (EIF_INTEGER_32) arg1;
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

/* {HTTP_SERVER_CONFIGURATION}.set_force_single_threaded */
void F9_3738 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_force_single_threaded";
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
	
	RTEAA(l_feature_name, 8, Current, 0, 1, 222);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(8, Current, 222);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 3728, 0x04000000, 1); /* force_single_threaded */
	
	*(EIF_BOOLEAN *)(Current + RTWA(3728, Dtype(Current))) = (EIF_BOOLEAN) arg1;
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

/* {HTTP_SERVER_CONFIGURATION}.set_is_verbose */
void F9_3739 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
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
	
	RTEAA(l_feature_name, 8, Current, 0, 1, 223);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(8, Current, 223);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 3729, 0x04000000, 1); /* is_verbose */
	
	*(EIF_BOOLEAN *)(Current + RTWA(3729, Dtype(Current))) = (EIF_BOOLEAN) arg1;
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

void EIF_Minit9 (void)
{
	GTCX
	RTOTS (3723,F9_3723)
}


#ifdef __cplusplus
}
#endif
