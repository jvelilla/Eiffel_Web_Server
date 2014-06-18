/*
 * Code for class HTTP_CONSTANTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F126_8330(EIF_REFERENCE);
extern EIF_TYPED_VALUE F126_8331(EIF_REFERENCE);
extern EIF_TYPED_VALUE F126_8332(EIF_REFERENCE);
extern EIF_TYPED_VALUE F126_8333(EIF_REFERENCE);
extern EIF_TYPED_VALUE F126_8334(EIF_REFERENCE);
extern EIF_TYPED_VALUE F126_8335(EIF_REFERENCE);
extern void EIF_Minit126(void);

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
EIF_TYPED_VALUE F126_8330 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 80L);
	return r;
}

/* {HTTP_CONSTANTS}.default_https_port */
EIF_TYPED_VALUE F126_8331 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 443L);
	return r;
}

/* {HTTP_CONSTANTS}.http_version_1_0 */
RTOID (F126_8332)


EIF_TYPED_VALUE F126_8332 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F126_8332,1934,RTMS_EX_H("HTTP/1.0",8,303094320));
}

/* {HTTP_CONSTANTS}.http_version_1_1 */
RTOID (F126_8333)


EIF_TYPED_VALUE F126_8333 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F126_8333,1935,RTMS_EX_H("HTTP/1.1",8,303094321));
}

/* {HTTP_CONSTANTS}.crlf */
RTOID (F126_8334)


EIF_TYPED_VALUE F126_8334 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F126_8334,1936,RTMS_EX_H("\015\012",2,3338));
}

/* {HTTP_CONSTANTS}.default_bufsize */
EIF_TYPED_VALUE F126_8335 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 16384L);
	return r;
}

void EIF_Minit126 (void)
{
	GTCX
	RTOTS (8332,F126_8332)
	RTOTS (8333,F126_8333)
	RTOTS (8334,F126_8334)
}


#ifdef __cplusplus
}
#endif
