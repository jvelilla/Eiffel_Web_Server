/*
 * Code for class LINKED_LIST_CURSOR [NATURAL_8]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F974_11350(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F974_11351(EIF_REFERENCE);
extern EIF_TYPED_VALUE F974_11352(EIF_REFERENCE);
extern EIF_TYPED_VALUE F974_11353(EIF_REFERENCE);
extern void F974_22953(EIF_REFERENCE, int);
extern void EIF_Minit974(void);

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

/* {LINKED_LIST_CURSOR}.make */
void F974_11350 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_b
#define arg3 arg3x.it_b
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_b = * (EIF_BOOLEAN *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_b = * (EIF_BOOLEAN *) arg2x.it_r;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_BOOL,&arg2);
	RTLU(SK_BOOL,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 973, Current, 0, 3, 4263);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(973, Current, 4263);
	RTCC(arg1, 973, l_feature_name, 1, RTWCT(10568, dtype, Dftype(Current)));
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 10568, 0xF80003CA, 0); /* active */
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(10568, dtype)) = (EIF_REFERENCE) RTCCL(arg1);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 10569, 0x04000000, 1); /* after */
	
	*(EIF_BOOLEAN *)(Current + RTWA(10569, dtype)) = (EIF_BOOLEAN) arg2;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 10570, 0x04000000, 1); /* before */
	
	*(EIF_BOOLEAN *)(Current + RTWA(10570, dtype)) = (EIF_BOOLEAN) arg3;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg3
#undef arg2
#undef arg1
}

/* {LINKED_LIST_CURSOR}.active */
EIF_TYPED_VALUE F974_11351 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(10568,Dtype(Current)));
	return r;
}


/* {LINKED_LIST_CURSOR}.after */
EIF_TYPED_VALUE F974_11352 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(10569,Dtype(Current)));
	return r;
}


/* {LINKED_LIST_CURSOR}.before */
EIF_TYPED_VALUE F974_11353 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(10570,Dtype(Current)));
	return r;
}


/* {LINKED_LIST_CURSOR}._invariant */
void F974_22953 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCDT;
	RTLD;
	RTDA;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAINV(l_feature_name, 973, Current, 0, 22952);
	RTSA(dtype);
	RTME(dtype, 0);
	RTIT("not_both", Current);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(10570, dtype));
	tb2 = *(EIF_BOOLEAN *)(Current + RTWA(10569, dtype));
	if ((EIF_BOOLEAN) !(EIF_BOOLEAN) (tb1 && tb2)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("no_active_not_on", Current);
	tb1 = '\01';
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10568, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if ((EIF_BOOLEAN)(tr1 == NULL)) {
		tb2 = *(EIF_BOOLEAN *)(Current + RTWA(10570, dtype));
		tb3 = *(EIF_BOOLEAN *)(Current + RTWA(10569, dtype));
		tb1 = (EIF_BOOLEAN) (tb2 || tb3);
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTLO(2);
	RTMD(0);
	RTLE;
	RTEE;
#undef up1
}

void EIF_Minit974 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
