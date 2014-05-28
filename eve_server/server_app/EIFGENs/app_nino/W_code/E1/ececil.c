#include "eif_eiffel.h"
#include "eif_rout_obj.h"
#include "eaddress.h"

#ifdef __cplusplus
extern "C" {
#endif

	/* EQA_SYSTEM_EXECUTION_PROCESS append_output */
void _A2_53_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3571, "append_output", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* EQA_SYSTEM_EXECUTION_PROCESS set_finished */
void _A2_50 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3568, "set_finished", closed [1].it_r))(closed [1].it_r);
}

	/* EQA_SYSTEM_PATH extend */
void _A15_45_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3778, "extend", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* WSF_NINO_SERVICE_LAUNCHER on_launched */
void _A78_47_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6925, "on_launched", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* WSF_NINO_SERVICE_LAUNCHER on_stopped */
void _A78_48_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6926, "on_stopped", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EQA_SYSTEM_TEST_SET inline-agent#1 of run_system */
void _A83_60_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) F83_22645)(closed [1].it_r, open [1], closed [2]);
}

	/* THREAD thr_main */
void A100_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	EIF_TYPED_VALUE u [1];
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7772, "thr_main", Current))(Current, ((u [0].type = SK_INT32), (u [0].it_i4 = arg1), u [0]));
}

	/* WGI_FILTER_RESPONSE commit */
void _A115_40 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7970, "commit", closed [1].it_r))(closed [1].it_r);
}

	/* ITP_TEST_CASE_SERIALIZER on_object_visited */
void _A210_186_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(9028, "on_object_visited", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* APP_SERVICE handle_error */
void _A216_75_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9529, "handle_error", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* APP_SERVICE handle_output */
void _A216_76_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9530, "handle_output", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* APP_SERVICE put_file_location */
void _A216_65_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(9519, "put_file_location", closed [1].it_r))(closed [1].it_r, open [1], open [2]);
}

	/* APP_SERVICE get_compilation_result */
void _A216_66_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(9520, "get_compilation_result", closed [1].it_r))(closed [1].it_r, open [1], open [2]);
}

	/* APP_SERVICE get_error_list */
void _A216_67_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(9521, "get_error_list", closed [1].it_r))(closed [1].it_r, open [1], open [2]);
}

	/* APP_SERVICE get_warning_list */
void _A216_68_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(9522, "get_warning_list", closed [1].it_r))(closed [1].it_r, open [1], open [2]);
}

	/* APP_SERVICE get_execution_result */
void _A216_69_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(9523, "get_execution_result", closed [1].it_r))(closed [1].it_r, open [1], open [2]);
}

	/* APP_SERVICE get_interface_view */
void _A216_70_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(9524, "get_interface_view", closed [1].it_r))(closed [1].it_r, open [1], open [2]);
}

	/* APP_SERVICE get_flat_view */
void _A216_71_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(9525, "get_flat_view", closed [1].it_r))(closed [1].it_r, open [1], open [2]);
}

	/* APP_SERVICE get_contract_view */
void _A216_72_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(9526, "get_contract_view", closed [1].it_r))(closed [1].it_r, open [1], open [2]);
}

	/* APP_SERVICE get_class_descendants */
void _A216_73_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(9527, "get_class_descendants", closed [1].it_r))(closed [1].it_r, open [1], open [2]);
}

	/* EQA_TEST_EVALUATOR [G#1] inline-agent#1 of execute */
EIF_TYPED_VALUE _A497_269 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) F497_22678)(closed [1].it_r);
}

	/* PROCEDURE [G#1, G#2] call */
void _A454_141 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14780, "call", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* EQA_TEST_SET clean */
void _A82_41 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6957, "clean", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* EQA_EVALUATOR invoke_routine */
void _A269_206_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(8478, "invoke_routine", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* HASH_TABLE [G#1, G#2] has */
EIF_TYPED_VALUE _A489_49_2 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11428, "has", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* HASH_TABLE [G#1, INTEGER_32] has */
EIF_TYPED_VALUE _A505_49_2 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11428, "has", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* HASH_TABLE [INTEGER_32, INTEGER_32] has */
EIF_TYPED_VALUE _A565_49_2 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11428, "has", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* HASH_TABLE [NATURAL_32, POINTER] has */
EIF_TYPED_VALUE _A669_49_2 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11428, "has", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* HASH_TABLE [INTEGER_32, G#2] has */
EIF_TYPED_VALUE _A1066_49_2 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11428, "has", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* MISMATCH_INFORMATION clear_all */
void A286_93 (EIF_REFERENCE Current)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(11459, "clear_all", Current))(Current);
}

	/* MISMATCH_INFORMATION internal_put */
void A286_159 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2)
{
	EIF_TYPED_VALUE u [2];
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(11534, "internal_put", Current))(Current, ((u [0].type = SK_REF), (u [0].it_r = arg1), u [0]), ((u [1].type = SK_POINTER), (u [1].it_p = arg2), u [1]));
}

	/* MISMATCH_INFORMATION set_string_versions */
void A286_160 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	EIF_TYPED_VALUE u [2];
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(11535, "set_string_versions", Current))(Current, ((u [0].type = SK_POINTER), (u [0].it_p = arg1), u [0]), ((u [1].type = SK_POINTER), (u [1].it_p = arg2), u [1]));
}

	/* WSF_DEFAULT_ROUTER_RESPONSE inline-agent#1 of not_found_message */
void _A295_47_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) F295_22696)(closed [1].it_r, open [1], closed [2], closed [3]);
}

	/* WSF_DEFAULT_ROUTER_RESPONSE inline-agent#1 of method_not_allowed_message */
void _A295_48_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) F295_22697)(closed [1].it_r, open [1], closed [2]);
}

	/* WSF_REQUEST item */
EIF_TYPED_VALUE _A353_66_2 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(16180, "item", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* RT_DBG_CALL_RECORD inline-agent#1 of record_fields */
void _A424_161_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) F424_22735)(closed [1].it_r, open [1]);
}

	/* ITP_INTERPRETER is_reference_equal */
EIF_TYPED_VALUE _A440_259_2_3 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(19534, "is_reference_equal", closed [1].it_r))(closed [1].it_r, open [1], open [2]);
}

	/* ITP_INTERPRETER is_object_equal */
EIF_TYPED_VALUE _A440_258_2_3 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(19533, "is_object_equal", closed [1].it_r))(closed [1].it_r, open [1], open [2]);
}


static fnptr feif_address_table[] = {
(fnptr)0,
(fnptr)A100_51,
(fnptr)A286_93,
(fnptr)A286_159,
(fnptr)A286_160,
};

fnptr *egc_address_table_init = feif_address_table;



#ifdef __cplusplus
}
#endif
