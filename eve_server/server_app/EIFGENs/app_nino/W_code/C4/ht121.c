/*
 * Code for class HTTP_CONSTANTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F121_8291(EIF_REFERENCE);
extern EIF_TYPED_VALUE F121_8292(EIF_REFERENCE);
extern EIF_TYPED_VALUE F121_8293(EIF_REFERENCE);
extern EIF_TYPED_VALUE F121_8294(EIF_REFERENCE);
extern EIF_TYPED_VALUE F121_8295(EIF_REFERENCE);
extern EIF_TYPED_VALUE F121_8296(EIF_REFERENCE);
extern void EIF_Minit121(void);

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
EIF_TYPED_VALUE F121_8291 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 80L);
	return r;
}

/* {HTTP_CONSTANTS}.default_https_port */
EIF_TYPED_VALUE F121_8292 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 443L);
	return r;
}

/* {HTTP_CONSTANTS}.http_version_1_0 */
RTOID (F121_8293)


EIF_TYPED_VALUE F121_8293 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F121_8293,1907,RTMS_EX_H("HTTP/1.0",8,303094320));
}

/* {HTTP_CONSTANTS}.http_version_1_1 */
RTOID (F121_8294)


EIF_TYPED_VALUE F121_8294 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F121_8294,1908,RTMS_EX_H("HTTP/1.1",8,303094321));
}

/* {HTTP_CONSTANTS}.crlf */
RTOID (F121_8295)


EIF_TYPED_VALUE F121_8295 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F121_8295,1909,RTMS_EX_H("\015\012",2,3338));
}

/* {HTTP_CONSTANTS}.default_bufsize */
EIF_TYPED_VALUE F121_8296 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 16384L);
	return r;
}

void EIF_Minit121 (void)
{
	GTCX
	RTOTS (8293,F121_8293)
	RTOTS (8294,F121_8294)
	RTOTS (8295,F121_8295)
}


#ifdef __cplusplus
}
#endif
