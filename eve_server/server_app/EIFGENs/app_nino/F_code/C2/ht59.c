/*
 * Code for class HTTP_ACCEPT_VARIANTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ht59.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {HTTP_ACCEPT_VARIANTS}.make */
void F81_6662 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {HTTP_ACCEPT_VARIANTS}.vary_header_value */
EIF_REFERENCE F81_6664 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {HTTP_ACCEPT_VARIANTS}.supported_variants */
EIF_REFERENCE F81_6665 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {HTTP_ACCEPT_VARIANTS}.variant_value */
EIF_REFERENCE F81_6666 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {HTTP_ACCEPT_VARIANTS}.set_variant_value */
void F81_6669 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) arg1;
}

/* {HTTP_ACCEPT_VARIANTS}.set_acceptable */
void F81_6670 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current+ _CHROFF_3_0_) = (EIF_BOOLEAN) arg1;
}

/* {HTTP_ACCEPT_VARIANTS}.set_supported_variants */
void F81_6671 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg1;
}

void EIF_Minit59 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
