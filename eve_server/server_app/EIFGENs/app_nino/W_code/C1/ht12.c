/*
 * Code for class HTTP_SERVER_CONFIGURATION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F12_3752(EIF_REFERENCE);
extern EIF_TYPED_VALUE F12_3753(EIF_REFERENCE);
extern EIF_TYPED_VALUE F12_3754(EIF_REFERENCE);
extern EIF_TYPED_VALUE F12_3755(EIF_REFERENCE);
extern EIF_TYPED_VALUE F12_3756(EIF_REFERENCE);
extern EIF_TYPED_VALUE F12_3757(EIF_REFERENCE);
extern EIF_TYPED_VALUE F12_3758(EIF_REFERENCE);
extern EIF_TYPED_VALUE F12_3759(EIF_REFERENCE);
extern EIF_TYPED_VALUE F12_3760(EIF_REFERENCE);
extern EIF_TYPED_VALUE F12_3761(EIF_REFERENCE);
extern void F12_3762(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F12_3763(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F12_3764(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F12_3765(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F12_3766(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F12_3767(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F12_3768(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F12_3769(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit12(void);

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
void F12_3752 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 11, Current, 0, 0, 218);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(11, Current, 218);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 3753, 0x10000000, 1); /* http_server_port */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(3753, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 80L);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 3754, 0x10000000, 1); /* max_tcp_clients */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(3754, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 100L);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 3755, 0x10000000, 1); /* socket_accept_timeout */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(3755, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1000L);
	RTHOOK(4);
	RTDBGAA(Current, dtype, 3756, 0x10000000, 1); /* socket_connect_timeout */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(3756, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5000L);
	RTHOOK(5);
	RTDBGAA(Current, dtype, 3751, 0xF8000185, 0); /* document_root */
	
	tr1 = RTMS_EX_H("htdocs",6,1890384755);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(3751, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(6);
	RTDBGAA(Current, dtype, 3757, 0x04000000, 1); /* force_single_threaded */
	
	*(EIF_BOOLEAN *)(Current + RTWA(3757, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
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
RTOID (F12_3753)


EIF_TYPED_VALUE F12_3753 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F12_3753,220,RTMS_EX_H("Server : NINO Eiffel Server",27,1169312370));
}

/* {HTTP_SERVER_CONFIGURATION}.document_root */
EIF_TYPED_VALUE F12_3754 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(3751,Dtype(Current)));
	return r;
}


/* {HTTP_SERVER_CONFIGURATION}.http_server_name */
EIF_TYPED_VALUE F12_3755 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(3752,Dtype(Current)));
	return r;
}


/* {HTTP_SERVER_CONFIGURATION}.http_server_port */
EIF_TYPED_VALUE F12_3756 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(3753,Dtype(Current)));
	return r;
}


/* {HTTP_SERVER_CONFIGURATION}.max_tcp_clients */
EIF_TYPED_VALUE F12_3757 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(3754,Dtype(Current)));
	return r;
}


/* {HTTP_SERVER_CONFIGURATION}.socket_accept_timeout */
EIF_TYPED_VALUE F12_3758 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(3755,Dtype(Current)));
	return r;
}


/* {HTTP_SERVER_CONFIGURATION}.socket_connect_timeout */
EIF_TYPED_VALUE F12_3759 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(3756,Dtype(Current)));
	return r;
}


/* {HTTP_SERVER_CONFIGURATION}.force_single_threaded */
EIF_TYPED_VALUE F12_3760 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(3757,Dtype(Current)));
	return r;
}


/* {HTTP_SERVER_CONFIGURATION}.is_verbose */
EIF_TYPED_VALUE F12_3761 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(3758,Dtype(Current)));
	return r;
}


/* {HTTP_SERVER_CONFIGURATION}.set_http_server_name */
void F12_3762 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
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
	
	RTEAA(l_feature_name, 11, Current, 0, 1, 228);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(11, Current, 228);
	RTCC(arg1, 11, l_feature_name, 1, RTWCT(3752, Dtype(Current), Dftype(Current)));
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 3752, 0xF8000185, 0); /* http_server_name */
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(3752, Dtype(Current))) = (EIF_REFERENCE) RTCCL(arg1);
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
void F12_3763 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
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
	
	RTEAA(l_feature_name, 11, Current, 0, 1, 229);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(11, Current, 229);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 3753, 0x10000000, 1); /* http_server_port */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(3753, Dtype(Current))) = (EIF_INTEGER_32) arg1;
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
void F12_3764 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
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
	
	RTEAA(l_feature_name, 11, Current, 0, 1, 230);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(11, Current, 230);
	RTCC(arg1, 11, l_feature_name, 1, RTWCT(3751, Dtype(Current), Dftype(Current)));
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 3751, 0xF8000185, 0); /* document_root */
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(3751, Dtype(Current))) = (EIF_REFERENCE) RTCCL(arg1);
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
void F12_3765 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
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
	
	RTEAA(l_feature_name, 11, Current, 0, 1, 231);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(11, Current, 231);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 3754, 0x10000000, 1); /* max_tcp_clients */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(3754, Dtype(Current))) = (EIF_INTEGER_32) arg1;
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
void F12_3766 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
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
	
	RTEAA(l_feature_name, 11, Current, 0, 1, 232);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(11, Current, 232);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 3755, 0x10000000, 1); /* socket_accept_timeout */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(3755, Dtype(Current))) = (EIF_INTEGER_32) arg1;
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
void F12_3767 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
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
	
	RTEAA(l_feature_name, 11, Current, 0, 1, 233);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(11, Current, 233);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 3756, 0x10000000, 1); /* socket_connect_timeout */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(3756, Dtype(Current))) = (EIF_INTEGER_32) arg1;
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
void F12_3768 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
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
	
	RTEAA(l_feature_name, 11, Current, 0, 1, 234);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(11, Current, 234);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 3757, 0x04000000, 1); /* force_single_threaded */
	
	*(EIF_BOOLEAN *)(Current + RTWA(3757, Dtype(Current))) = (EIF_BOOLEAN) arg1;
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
void F12_3769 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
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
	
	RTEAA(l_feature_name, 11, Current, 0, 1, 235);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(11, Current, 235);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 3758, 0x04000000, 1); /* is_verbose */
	
	*(EIF_BOOLEAN *)(Current + RTWA(3758, Dtype(Current))) = (EIF_BOOLEAN) arg1;
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

void EIF_Minit12 (void)
{
	GTCX
	RTOTS (3753,F12_3753)
}


#ifdef __cplusplus
}
#endif
