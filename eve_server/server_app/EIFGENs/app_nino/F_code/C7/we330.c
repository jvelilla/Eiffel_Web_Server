/*
 * Code for class WEL_PROCESS_INFO
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we330.h"
#include "wel_process_info.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_PROCESS_INFO}.process_handle */
EIF_POINTER F592_16528 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_POINTER) (EIF_POINTER) cwel_process_info_get_process_handle(((PROCESS_INFORMATION*) tp1));
}

/* {WEL_PROCESS_INFO}.thread_handle */
EIF_POINTER F592_16529 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_POINTER) (EIF_POINTER) cwel_process_info_get_thread_handle(((PROCESS_INFORMATION*) tp1));
}

/* {WEL_PROCESS_INFO}.process_id */
EIF_INTEGER_32 F592_16530 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) cwel_process_info_get_process_id(((PROCESS_INFORMATION*) tp1));
}

/* {WEL_PROCESS_INFO}.set_process_handle */
void F592_16532 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	cwel_process_info_set_process_handle(((PROCESS_INFORMATION*) tp1), ((HANDLE) arg1));
}

/* {WEL_PROCESS_INFO}.set_thread_handle */
void F592_16533 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	cwel_process_info_set_thread_handle(((PROCESS_INFORMATION*) tp1), ((HANDLE) arg1));
}

/* {WEL_PROCESS_INFO}.structure_size */
EIF_INTEGER_32 F592_16536 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (EIF_INTEGER_32) sizeof (PROCESS_INFORMATION);
}

/* {WEL_PROCESS_INFO}.c_size_of_process_info */
EIF_INTEGER_32 F592_16537 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (PROCESS_INFORMATION);
	return Result;
}

/* {WEL_PROCESS_INFO}.cwel_process_info_get_process_handle */
EIF_POINTER F592_16538 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) cwel_process_info_get_process_handle(((PROCESS_INFORMATION*) arg1));
	return Result;
}

/* {WEL_PROCESS_INFO}.cwel_process_info_get_thread_handle */
EIF_POINTER F592_16539 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) cwel_process_info_get_thread_handle(((PROCESS_INFORMATION*) arg1));
	return Result;
}

/* {WEL_PROCESS_INFO}.cwel_process_info_get_process_id */
EIF_INTEGER_32 F592_16540 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) cwel_process_info_get_process_id(((PROCESS_INFORMATION*) arg1));
	return Result;
}

/* {WEL_PROCESS_INFO}.cwel_process_info_set_process_handle */
void F592_16542 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	cwel_process_info_set_process_handle(((PROCESS_INFORMATION*) arg1), ((HANDLE) arg2));
}

/* {WEL_PROCESS_INFO}.cwel_process_info_set_thread_handle */
void F592_16543 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	cwel_process_info_set_thread_handle(((PROCESS_INFORMATION*) arg1), ((HANDLE) arg2));
}

void EIF_Minit330 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
