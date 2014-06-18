/*
 * Code for class PROCESS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "pr78.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {PROCESS}.cancel_input_redirection */
void F109_7005 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current + O6923[Dtype(Current)-108]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	tr1 = RTLNSMART(eif_non_attached_type(887));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {PROCESS}.redirect_output_to_agent */
void F109_7007 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current + O6924[Dtype(Current)-108]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_6_) = (EIF_REFERENCE) arg1;
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) NULL;
	RTLE;
}

/* {PROCESS}.cancel_output_redirection */
void F109_7008 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current + O6924[Dtype(Current)-108]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	tr1 = RTLNSMART(eif_non_attached_type(887));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	*(EIF_REFERENCE *)(Current + _REFACS_6_) = (EIF_REFERENCE) NULL;
	RTLE;
}

/* {PROCESS}.redirect_error_to_agent */
void F109_7010 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current + O6925[Dtype(Current)-108]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_7_) = (EIF_REFERENCE) arg1;
	*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) NULL;
	RTLE;
}

/* {PROCESS}.cancel_error_redirection */
void F109_7012 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current + O6925[Dtype(Current)-108]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	tr1 = RTLNSMART(eif_non_attached_type(887));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) tr1;
	*(EIF_REFERENCE *)(Current + _REFACS_7_) = (EIF_REFERENCE) NULL;
	RTLE;
}

/* {PROCESS}.set_separate_console */
void F109_7024 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current + O6934[Dtype(Current)-108]) = (EIF_BOOLEAN) arg1;
}

/* {PROCESS}.enable_launch_in_new_process_group */
void F109_7035 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current + O6939[Dtype(Current)-108]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {PROCESS}.on_start */
void F109_7037 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_8_);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R14994[Dtype(loc1)-867])(RTCV(loc1), NULL);
	}
	RTLE;
}

/* {PROCESS}.on_terminate */
void F109_7038 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_10_);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R14994[Dtype(loc1)-867])(RTCV(loc1), NULL);
	}
	RTLE;
}

/* {PROCESS}.on_exit */
void F109_7039 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_9_);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R14994[Dtype(loc1)-867])(RTCV(loc1), NULL);
	}
	RTLE;
}

/* {PROCESS}.on_launch_failed */
void F109_7040 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_11_);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R14994[Dtype(loc1)-867])(RTCV(loc1), NULL);
	}
	RTLE;
}

/* {PROCESS}.on_launch_successed */
void F109_7041 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_12_);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R14994[Dtype(loc1)-867])(RTCV(loc1), NULL);
	}
	RTLE;
}

/* {PROCESS}.command_line */
EIF_REFERENCE F109_7046 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {PROCESS}.working_directory */
EIF_REFERENCE F109_7047 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {PROCESS}.input_file_name */
EIF_REFERENCE F109_7048 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {PROCESS}.output_file_name */
EIF_REFERENCE F109_7049 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {PROCESS}.error_file_name */
EIF_REFERENCE F109_7050 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_4_);
}


/* {PROCESS}.environment_variable_table */
EIF_REFERENCE F109_7054 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_5_);
}


/* {PROCESS}.is_running */
EIF_BOOLEAN F109_7056 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = '\0';
	if (*(EIF_BOOLEAN *)(Current + O6927[Dtype(Current)-108])) {
		Result = (EIF_BOOLEAN) !F110_7914(Current);
	}
	Result = (EIF_BOOLEAN) Result;
	RTLE;
	return Result;
}

/* {PROCESS}.output_handler */
EIF_REFERENCE F109_7072 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_6_);
}


/* {PROCESS}.error_handler */
EIF_REFERENCE F109_7073 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_7_);
}


/* {PROCESS}.on_start_handler */
EIF_REFERENCE F109_7074 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_8_);
}


/* {PROCESS}.on_exit_handler */
EIF_REFERENCE F109_7075 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_9_);
}


/* {PROCESS}.on_terminate_handler */
EIF_REFERENCE F109_7076 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_10_);
}


/* {PROCESS}.on_fail_launch_handler */
EIF_REFERENCE F109_7077 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_11_);
}


/* {PROCESS}.on_successful_launch_handler */
EIF_REFERENCE F109_7078 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_12_);
}


/* {PROCESS}.timer */
EIF_REFERENCE F109_7080 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_14_);
}


/* {PROCESS}.initialize_working_directory */
void F109_7081 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		tr1 = RTLNSMART(eif_non_attached_type(887));
		F888_17140(RTCV(tr1), arg1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	} else {
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) NULL;
	}
	RTLE;
}

/* {PROCESS}.initialize_parameter */
void F109_7084 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	F109_7005(Current);
	F109_7008(Current);
	F109_7012(Current);
	*(EIF_REFERENCE *)(Current + _REFACS_6_) = (EIF_REFERENCE) NULL;
	*(EIF_REFERENCE *)(Current + _REFACS_7_) = (EIF_REFERENCE) NULL;
	*(EIF_BOOLEAN *)(Current + O6933[dtype-108]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_BOOLEAN *)(Current + O6934[dtype-108]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_INTEGER_32 *)(Current + O6917[dtype-108]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4096L);
	tr1 = RTLNS(575, 575, _OBJSIZ_3_3_0_2_0_1_0_0_);
	F576_11813(RTCV(tr1), ((EIF_INTEGER_32) 250L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_14_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_14_);
	F94_6794(RTCV(tr1), Current);
	*(EIF_BOOLEAN *)(Current + O6930[dtype-108]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_BOOLEAN *)(Current + O6927[dtype-108]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_BOOLEAN *)(Current + O6931[dtype-108]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_BOOLEAN *)(Current + O6932[dtype-108]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTLE;
}

void EIF_Minit78 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
