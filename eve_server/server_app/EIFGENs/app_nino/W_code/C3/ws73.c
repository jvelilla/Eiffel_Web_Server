/*
 * Code for class WSF_REQUEST_PATH_PARAMETERS_SOURCE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F73_6952(EIF_REFERENCE);
extern void F73_6953(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit73(void);

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
EIF_TYPED_VALUE F73_6952 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(6824,Dtype(Current)));
	return r;
}


/* {WSF_REQUEST_PATH_PARAMETERS_SOURCE}.update_path_parameters */
void F73_6953 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
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
	
	RTEAA(l_feature_name, 72, Current, 0, 1, 1307);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(72, Current, 1307);
	RTCC(arg1, 72, l_feature_name, 1, RTWCT(6824, Dtype(Current), Dftype(Current)));
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 6824, 0xF80001CB, 0); /* path_parameters */
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(6824, Dtype(Current))) = (EIF_REFERENCE) RTCCL(arg1);
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

void EIF_Minit73 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
