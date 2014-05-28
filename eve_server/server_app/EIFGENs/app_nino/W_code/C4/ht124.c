/*
 * Code for class HTTP_CONSTANTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F124_8309(EIF_REFERENCE);
extern EIF_TYPED_VALUE F124_8310(EIF_REFERENCE);
extern EIF_TYPED_VALUE F124_8311(EIF_REFERENCE);
extern EIF_TYPED_VALUE F124_8312(EIF_REFERENCE);
extern EIF_TYPED_VALUE F124_8313(EIF_REFERENCE);
extern EIF_TYPED_VALUE F124_8314(EIF_REFERENCE);
extern void EIF_Minit124(void);

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
EIF_TYPED_VALUE F124_8309 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 80L);
	return r;
}

/* {HTTP_CONSTANTS}.default_https_port */
EIF_TYPED_VALUE F124_8310 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 443L);
	return r;
}

/* {HTTP_CONSTANTS}.http_version_1_0 */
RTOID (F124_8311)


EIF_TYPED_VALUE F124_8311 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F124_8311,1925,RTMS_EX_H("HTTP/1.0",8,303094320));
}

/* {HTTP_CONSTANTS}.http_version_1_1 */
RTOID (F124_8312)


EIF_TYPED_VALUE F124_8312 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F124_8312,1926,RTMS_EX_H("HTTP/1.1",8,303094321));
}

/* {HTTP_CONSTANTS}.crlf */
RTOID (F124_8313)


EIF_TYPED_VALUE F124_8313 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F124_8313,1927,RTMS_EX_H("\015\012",2,3338));
}

/* {HTTP_CONSTANTS}.default_bufsize */
EIF_TYPED_VALUE F124_8314 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 16384L);
	return r;
}

void EIF_Minit124 (void)
{
	GTCX
	RTOTS (8311,F124_8311)
	RTOTS (8312,F124_8312)
	RTOTS (8313,F124_8313)
}


#ifdef __cplusplus
}
#endif
