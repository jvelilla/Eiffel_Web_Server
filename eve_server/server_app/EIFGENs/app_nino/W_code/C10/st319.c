/*
 * Code for class STREAM_SOCKET
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F319_13964(EIF_REFERENCE);
extern EIF_TYPED_VALUE F319_13966(EIF_REFERENCE);
extern void EIF_Minit319(void);

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

/* {STREAM_SOCKET}.support_storable */
EIF_TYPED_VALUE F319_13964 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = (EIF_BOOLEAN) EIF_TRUE;
	return r;
}

/* {STREAM_SOCKET}.accepted */
EIF_TYPED_VALUE F319_13966 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(12379,Dtype(Current)));
	return r;
}


void EIF_Minit319 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
