/*
 * Code for class WSF_REQUEST_PATH_PARAMETERS_SOURCE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F86_7023(EIF_REFERENCE);
extern void F86_7024(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit86(void);

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

/* {WSF_REQUEST_PATH_PARAMETERS_SOURCE}.path_parameters */
EIF_TYPED_VALUE F86_7023 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(6907,Dtype(Current)));
	return r;
}


/* {WSF_REQUEST_PATH_PARAMETERS_SOURCE}.update_path_parameters */
void F86_7024 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "update_path_parameters";
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
	
	RTEAA(l_feature_name, 85, Current, 0, 1, 1395);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(85, Current, 1395);
	RTCC(arg1, 85, l_feature_name, 1, RTWCT(6907, Dtype(Current), Dftype(Current)));
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 6907, 0xF80001EF, 0); /* path_parameters */
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(6907, Dtype(Current))) = (EIF_REFERENCE) RTCCL(arg1);
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

void EIF_Minit86 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
