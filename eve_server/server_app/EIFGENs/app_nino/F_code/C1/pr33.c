/*
 * Code for class PROCESS_FACTORY
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "pr33.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {PROCESS_FACTORY}.process_launcher_with_command_line */
EIF_REFERENCE F35_4009 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,arg1);
	RTLR(2,arg2);
	
	RTGC;
	tr1 = RTLNS(109, 109, _OBJSIZ_24_14_0_8_0_0_0_0_);
	F110_7905(RTCV(tr1), arg1, arg2);
	RTLE;
	return (EIF_REFERENCE) tr1;
}

void EIF_Minit33 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
