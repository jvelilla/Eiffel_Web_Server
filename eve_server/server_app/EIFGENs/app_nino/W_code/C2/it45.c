/*
 * Code for class ITP_AGENT_CREATION_INFO
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F45_4297(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F45_4298(EIF_REFERENCE);
extern EIF_TYPED_VALUE F45_4299(EIF_REFERENCE);
extern EIF_TYPED_VALUE F45_4300(EIF_REFERENCE);
extern EIF_TYPED_VALUE F45_4301(EIF_REFERENCE);
extern void EIF_Minit45(void);

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

/* {ITP_AGENT_CREATION_INFO}.make */
void F45_4297 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_r
#define arg3 arg3x.it_r
#define arg4 arg4x.it_i4
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,arg2);
	RTLR(1,arg3);
	RTLR(2,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 44, Current, 0, 4, 873);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(44, Current, 873);
	if (arg2) {
		RTCC(arg2, 44, l_feature_name, 2, 359);
	}
	RTCC(arg3, 44, l_feature_name, 3, RTWCT(4298, dtype, Dftype(Current)));
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 4295, 0x10000000, 1); /* agent_variable_id */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(4295, dtype)) = (EIF_INTEGER_32) arg1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 4296, 0xF8000167, 0); /* feature_name */
	
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + RTWA(4296, dtype)) = (EIF_REFERENCE) RTCCL(arg2);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 4298, 0xF8000218, 0); /* closed_operands */
	
	RTAR(Current, arg3);
	*(EIF_REFERENCE *)(Current + RTWA(4298, dtype)) = (EIF_REFERENCE) arg3;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 4297, 0x10000000, 1); /* argument_count */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(4297, dtype)) = (EIF_INTEGER_32) arg4;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {ITP_AGENT_CREATION_INFO}.agent_variable_id */
EIF_TYPED_VALUE F45_4298 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(4295,Dtype(Current)));
	return r;
}


/* {ITP_AGENT_CREATION_INFO}.feature_name */
EIF_TYPED_VALUE F45_4299 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(4296,Dtype(Current)));
	return r;
}


/* {ITP_AGENT_CREATION_INFO}.argument_count */
EIF_TYPED_VALUE F45_4300 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(4297,Dtype(Current)));
	return r;
}


/* {ITP_AGENT_CREATION_INFO}.closed_operands */
EIF_TYPED_VALUE F45_4301 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(4298,Dtype(Current)));
	return r;
}


void EIF_Minit45 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
