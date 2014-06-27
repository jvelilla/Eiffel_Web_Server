/*
 * Code for class HTTP_SERVER_CONFIGURATION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F76_6839(EIF_REFERENCE);
extern EIF_TYPED_VALUE F76_6840(EIF_REFERENCE);
extern void F76_6841(EIF_REFERENCE);
extern void F76_6842(EIF_REFERENCE);
extern void F76_6843(EIF_REFERENCE);
extern void F76_6844(EIF_REFERENCE);
extern void F76_6845(EIF_REFERENCE);
extern void F76_6846(EIF_REFERENCE);
extern void EIF_Minit76(void);

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

/* {HTTP_SERVER_CONFIGURATION}.server_details */
RTOID (F76_6839)


EIF_TYPED_VALUE F76_6839 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F76_6839,1219,RTMS_EX_H("Server : NINO Eiffel Server",27,1169312370));
}

/* {HTTP_SERVER_CONFIGURATION}.has_ssl_support */
EIF_TYPED_VALUE F76_6840 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = (EIF_BOOLEAN) EIF_FALSE;
	return r;
}

/* {HTTP_SERVER_CONFIGURATION}.set_ssl_protocol_to_ssl_2_or_3 */
void F76_6841 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "set_ssl_protocol_to_ssl_2_or_3";
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 75, Current, 0, 0, 1220);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(75, Current, 1220);
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {HTTP_SERVER_CONFIGURATION}.set_ssl_protocol_to_ssl_3 */
void F76_6842 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "set_ssl_protocol_to_ssl_3";
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 75, Current, 0, 0, 1221);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(75, Current, 1221);
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {HTTP_SERVER_CONFIGURATION}.set_ssl_protocol_to_tls_1_0 */
void F76_6843 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "set_ssl_protocol_to_tls_1_0";
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 75, Current, 0, 0, 1222);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(75, Current, 1222);
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {HTTP_SERVER_CONFIGURATION}.set_ssl_protocol_to_tls_1_1 */
void F76_6844 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "set_ssl_protocol_to_tls_1_1";
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 75, Current, 0, 0, 1223);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(75, Current, 1223);
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {HTTP_SERVER_CONFIGURATION}.set_ssl_protocol_to_tls_1_2 */
void F76_6845 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "set_ssl_protocol_to_tls_1_2";
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 75, Current, 0, 0, 1224);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(75, Current, 1224);
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {HTTP_SERVER_CONFIGURATION}.set_ssl_protocol_to_dtls_1_0 */
void F76_6846 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "set_ssl_protocol_to_dtls_1_0";
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 75, Current, 0, 0, 1225);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(75, Current, 1225);
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

void EIF_Minit76 (void)
{
	GTCX
	RTOTS (6839,F76_6839)
}


#ifdef __cplusplus
}
#endif
