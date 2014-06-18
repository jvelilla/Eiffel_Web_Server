/*
 * Code for class STREAM
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "st317.h"
#include "eif_store.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {STREAM}.c_free */
void F596_13776 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	stream_free((EIF_POINTER*) arg1);
	
}

/* {STREAM}.is_closed */
EIF_BOOLEAN F596_13785 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_1_1_);
}


/* {STREAM}.close */
void F596_13786 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_1_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_1_4_2_5_1_0_);
	stream_free((EIF_POINTER*) tp1);
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	tp2 = tp1;
	*(EIF_POINTER *)(Current+ _PTROFF_1_4_2_5_1_0_) = (EIF_POINTER) tp2;
	RTLE;
}

/* {STREAM}.read_stream */
void F596_13828 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	RTGC;
}

/* {STREAM}.read_line */
void F596_13830 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {STREAM}.handle */
EIF_INTEGER_32 F596_13834 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_INTEGER_32) 0;
}

void EIF_Minit317 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
