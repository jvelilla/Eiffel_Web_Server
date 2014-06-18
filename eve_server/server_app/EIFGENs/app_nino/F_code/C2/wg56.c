/*
 * Code for class WGI_OUTPUT_STREAM
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "wg56.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WGI_OUTPUT_STREAM}.put_header_line */
void F78_6649 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	F165_8316(Current, arg1);
	F78_6650(Current);
	RTLE;
}

/* {WGI_OUTPUT_STREAM}.put_crlf */
void F78_6650 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTOUCR(221,F78_6654,(Current));
	F165_8316(Current, tr1);
	RTLE;
}

/* {WGI_OUTPUT_STREAM}.crlf */

EIF_REFERENCE F78_6654 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (221,RTMS_EX_H("\015\012",2,3338));
}

void EIF_Minit56 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
