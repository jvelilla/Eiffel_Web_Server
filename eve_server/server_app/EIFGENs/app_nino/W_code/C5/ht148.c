/*
 * Code for class HTTP_CONSTANTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F148_8549(EIF_REFERENCE);
extern EIF_TYPED_VALUE F148_8550(EIF_REFERENCE);
extern EIF_TYPED_VALUE F148_8551(EIF_REFERENCE);
extern EIF_TYPED_VALUE F148_8552(EIF_REFERENCE);
extern EIF_TYPED_VALUE F148_8553(EIF_REFERENCE);
extern EIF_TYPED_VALUE F148_8554(EIF_REFERENCE);
extern void EIF_Minit148(void);

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
EIF_TYPED_VALUE F148_8549 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 80L);
	return r;
}

/* {HTTP_CONSTANTS}.default_https_port */
EIF_TYPED_VALUE F148_8550 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 443L);
	return r;
}

/* {HTTP_CONSTANTS}.http_version_1_0 */
RTOID (F148_8551)


EIF_TYPED_VALUE F148_8551 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F148_8551,2149,RTMS_EX_H("HTTP/1.0",8,303094320));
}

/* {HTTP_CONSTANTS}.http_version_1_1 */
RTOID (F148_8552)


EIF_TYPED_VALUE F148_8552 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F148_8552,2150,RTMS_EX_H("HTTP/1.1",8,303094321));
}

/* {HTTP_CONSTANTS}.crlf */
RTOID (F148_8553)


EIF_TYPED_VALUE F148_8553 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F148_8553,2151,RTMS_EX_H("\015\012",2,3338));
}

/* {HTTP_CONSTANTS}.default_bufsize */
EIF_TYPED_VALUE F148_8554 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 16384L);
	return r;
}

void EIF_Minit148 (void)
{
	GTCX
	RTOTS (8551,F148_8551)
	RTOTS (8552,F148_8552)
	RTOTS (8553,F148_8553)
}


#ifdef __cplusplus
}
#endif
