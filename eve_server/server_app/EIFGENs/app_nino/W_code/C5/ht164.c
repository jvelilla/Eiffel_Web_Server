/*
 * Code for class HTTP_CONSTANTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F164_8779(EIF_REFERENCE);
extern EIF_TYPED_VALUE F164_8780(EIF_REFERENCE);
extern EIF_TYPED_VALUE F164_8781(EIF_REFERENCE);
extern EIF_TYPED_VALUE F164_8782(EIF_REFERENCE);
extern EIF_TYPED_VALUE F164_8783(EIF_REFERENCE);
extern EIF_TYPED_VALUE F164_8784(EIF_REFERENCE);
extern void EIF_Minit164(void);

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

/* {HTTP_CONSTANTS}.default_http_port */
EIF_TYPED_VALUE F164_8779 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 80L);
	return r;
}

/* {HTTP_CONSTANTS}.default_https_port */
EIF_TYPED_VALUE F164_8780 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 443L);
	return r;
}

/* {HTTP_CONSTANTS}.http_version_1_0 */
RTOID (F164_8781)


EIF_TYPED_VALUE F164_8781 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F164_8781,2348,RTMS_EX_H("HTTP/1.0",8,303094320));
}

/* {HTTP_CONSTANTS}.http_version_1_1 */
RTOID (F164_8782)


EIF_TYPED_VALUE F164_8782 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F164_8782,2349,RTMS_EX_H("HTTP/1.1",8,303094321));
}

/* {HTTP_CONSTANTS}.crlf */
RTOID (F164_8783)


EIF_TYPED_VALUE F164_8783 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F164_8783,2350,RTMS_EX_H("\015\012",2,3338));
}

/* {HTTP_CONSTANTS}.default_bufsize */
EIF_TYPED_VALUE F164_8784 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 16384L);
	return r;
}

void EIF_Minit164 (void)
{
	GTCX
	RTOTS (8781,F164_8781)
	RTOTS (8782,F164_8782)
	RTOTS (8783,F164_8783)
}


#ifdef __cplusplus
}
#endif
