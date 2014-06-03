/*
 * Code for class HTTP_CONSTANTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F120_8283(EIF_REFERENCE);
extern EIF_TYPED_VALUE F120_8284(EIF_REFERENCE);
extern EIF_TYPED_VALUE F120_8285(EIF_REFERENCE);
extern EIF_TYPED_VALUE F120_8286(EIF_REFERENCE);
extern EIF_TYPED_VALUE F120_8287(EIF_REFERENCE);
extern EIF_TYPED_VALUE F120_8288(EIF_REFERENCE);
extern void EIF_Minit120(void);

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
EIF_TYPED_VALUE F120_8283 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 80L);
	return r;
}

/* {HTTP_CONSTANTS}.default_https_port */
EIF_TYPED_VALUE F120_8284 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 443L);
	return r;
}

/* {HTTP_CONSTANTS}.http_version_1_0 */
RTOID (F120_8285)


EIF_TYPED_VALUE F120_8285 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F120_8285,1899,RTMS_EX_H("HTTP/1.0",8,303094320));
}

/* {HTTP_CONSTANTS}.http_version_1_1 */
RTOID (F120_8286)


EIF_TYPED_VALUE F120_8286 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F120_8286,1900,RTMS_EX_H("HTTP/1.1",8,303094321));
}

/* {HTTP_CONSTANTS}.crlf */
RTOID (F120_8287)


EIF_TYPED_VALUE F120_8287 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F120_8287,1901,RTMS_EX_H("\015\012",2,3338));
}

/* {HTTP_CONSTANTS}.default_bufsize */
EIF_TYPED_VALUE F120_8288 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 16384L);
	return r;
}

void EIF_Minit120 (void)
{
	GTCX
	RTOTS (8285,F120_8285)
	RTOTS (8286,F120_8286)
	RTOTS (8287,F120_8287)
}


#ifdef __cplusplus
}
#endif
