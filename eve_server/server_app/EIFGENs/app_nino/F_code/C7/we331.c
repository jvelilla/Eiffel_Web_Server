/*
 * Code for class WEL_SECURITY_ATTRIBUTES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we331.h"
#include "wel_security_attributes.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_SECURITY_ATTRIBUTES}.make */
void F594_16546 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F591_14797(Current);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	ti4_1 = F594_16549(Current);
	cwel_security_attributes_set_length(((LPSECURITY_ATTRIBUTES) tp1), ((DWORD) ti4_1));
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	{
	/* INLINED CODE (default_pointer) */
	tp2 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	tp3 = tp2;
	cwel_security_attributes_set_security_descriptor(((LPSECURITY_ATTRIBUTES) tp1), ((LPVOID) tp3));
	RTLE;
}

/* {WEL_SECURITY_ATTRIBUTES}.set_inherit_handle */
void F594_16548 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	cwel_security_attributes_set_inherit_handle(((LPSECURITY_ATTRIBUTES) tp1), ((BOOL) arg1));
}

/* {WEL_SECURITY_ATTRIBUTES}.structure_size */
EIF_INTEGER_32 F594_16549 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (EIF_INTEGER_32) sizeof (SECURITY_ATTRIBUTES);
}

/* {WEL_SECURITY_ATTRIBUTES}.cwin_size_of_security_attributes */
EIF_INTEGER_32 F594_16550 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (SECURITY_ATTRIBUTES);
	return Result;
}

/* {WEL_SECURITY_ATTRIBUTES}.cwel_security_attributes_set_length */
void F594_16551 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_security_attributes_set_length(((LPSECURITY_ATTRIBUTES) arg1), ((DWORD) arg2));
}

/* {WEL_SECURITY_ATTRIBUTES}.cwel_security_attributes_set_security_descriptor */
void F594_16552 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	cwel_security_attributes_set_security_descriptor(((LPSECURITY_ATTRIBUTES) arg1), ((LPVOID) arg2));
}

/* {WEL_SECURITY_ATTRIBUTES}.cwel_security_attributes_set_inherit_handle */
void F594_16554 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_BOOLEAN arg2)
{
	GTCX
	
	
	cwel_security_attributes_set_inherit_handle(((LPSECURITY_ATTRIBUTES) arg1), ((BOOL) arg2));
}

void EIF_Minit331 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
