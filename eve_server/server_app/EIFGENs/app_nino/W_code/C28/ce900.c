/*
 * Code for class CELL [NATURAL_8]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F900_10109(EIF_REFERENCE);
extern void F900_10110(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F900_10111(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit900(void);

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

/* {CELL}.item */
EIF_TYPED_VALUE F900_10109 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT8;
	r.it_n1 = *(EIF_NATURAL_8 *)(Current + RTWA(9526,Dtype(Current)));
	return r;
}


/* {CELL}.put */
void F900_10110 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "put";
	RTEX;
#define arg1 arg1x.it_n1
	EIF_NATURAL_8 tu1_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n1 = * (EIF_NATURAL_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT8,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 899, Current, 0, 1, 3525);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(899, Current, 3525);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 9526, 0x30000000, 0); /* item */
	
	*(EIF_NATURAL_8 *)(Current + RTWA(9526, dtype)) = (EIF_NATURAL_8) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("item_inserted", EX_POST);
		tu1_1 = *(EIF_NATURAL_8 *)(Current + RTWA(9526, dtype));
		if ((EIF_BOOLEAN)(tu1_1 == arg1)) {
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

/* {CELL}.replace */
void F900_10111 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "replace";
	RTEX;
#define arg1 arg1x.it_n1
	EIF_NATURAL_8 tu1_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n1 = * (EIF_NATURAL_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT8,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 899, Current, 0, 1, 3526);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(899, Current, 3526);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 9526, 0x30000000, 0); /* item */
	
	*(EIF_NATURAL_8 *)(Current + RTWA(9526, dtype)) = (EIF_NATURAL_8) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("item_inserted", EX_POST);
		tu1_1 = *(EIF_NATURAL_8 *)(Current + RTWA(9526, dtype));
		if ((EIF_BOOLEAN)(tu1_1 == arg1)) {
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

void EIF_Minit900 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif