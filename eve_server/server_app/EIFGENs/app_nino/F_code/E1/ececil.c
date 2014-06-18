#include "eif_eiffel.h"
#include "eif_rout_obj.h"
#include "eaddress.h"
#include "eoffsets.h"

#ifdef __cplusplus
extern "C" {
#endif

	/* WSF_NINO_SERVICE_LAUNCHER on_launched */
void _A82_47_2 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r);
}

	/* WSF_NINO_SERVICE_LAUNCHER on_launched */
void __A82_47_2 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	f_ptr (closed [1].it_r, op_2);
}

	/* WSF_NINO_SERVICE_LAUNCHER on_stopped */
void _A82_48_2 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r);
}

	/* WSF_NINO_SERVICE_LAUNCHER on_stopped */
void __A82_48_2 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	f_ptr (closed [1].it_r, op_2);
}

	/* THREAD thr_main */
void A102_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) F145_7965)(Current, arg1);
}

	/* WGI_FILTER_RESPONSE commit */
void _A117_40 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r);
}

	/* WGI_FILTER_RESPONSE commit */
void __A117_40 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r);
}

	/* APP_SERVICE handle_error_execution */
void _A219_99_2 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r);
}

	/* APP_SERVICE handle_error_execution */
void __A219_99_2 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	f_ptr (closed [1].it_r, op_2);
}

	/* APP_SERVICE handle_output_execution */
void _A219_98_2 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r);
}

	/* APP_SERVICE handle_output_execution */
void __A219_98_2 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	f_ptr (closed [1].it_r, op_2);
}

	/* APP_SERVICE handle_error_compilation */
void _A219_96_2 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r);
}

	/* APP_SERVICE handle_error_compilation */
void __A219_96_2 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	f_ptr (closed [1].it_r, op_2);
}

	/* APP_SERVICE handle_output_compilation */
void _A219_97_2 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r);
}

	/* APP_SERVICE handle_output_compilation */
void __A219_97_2 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	f_ptr (closed [1].it_r, op_2);
}

	/* APP_SERVICE get_compilation_result */
void _A219_72_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r, open [2].it_r);
}

	/* APP_SERVICE get_compilation_result */
void __A219_72_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2, EIF_REFERENCE op_3)
{
	f_ptr (closed [1].it_r, op_2, op_3);
}

	/* APP_SERVICE get_execution_result */
void _A219_73_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r, open [2].it_r);
}

	/* APP_SERVICE get_execution_result */
void __A219_73_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2, EIF_REFERENCE op_3)
{
	f_ptr (closed [1].it_r, op_2, op_3);
}

	/* APP_SERVICE get_interface_view */
void _A219_74_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r, open [2].it_r);
}

	/* APP_SERVICE get_interface_view */
void __A219_74_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2, EIF_REFERENCE op_3)
{
	f_ptr (closed [1].it_r, op_2, op_3);
}

	/* APP_SERVICE get_flat_view */
void _A219_75_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r, open [2].it_r);
}

	/* APP_SERVICE get_flat_view */
void __A219_75_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2, EIF_REFERENCE op_3)
{
	f_ptr (closed [1].it_r, op_2, op_3);
}

	/* APP_SERVICE get_contract_view */
void _A219_76_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r, open [2].it_r);
}

	/* APP_SERVICE get_contract_view */
void __A219_76_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2, EIF_REFERENCE op_3)
{
	f_ptr (closed [1].it_r, op_2, op_3);
}

	/* APP_SERVICE get_class_descendants */
void _A219_77_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r, open [2].it_r);
}

	/* APP_SERVICE get_class_descendants */
void __A219_77_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2, EIF_REFERENCE op_3)
{
	f_ptr (closed [1].it_r, op_2, op_3);
}

	/* APP_SERVICE get_class_ancestors */
void _A219_78_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r, open [2].it_r);
}

	/* APP_SERVICE get_class_ancestors */
void __A219_78_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2, EIF_REFERENCE op_3)
{
	f_ptr (closed [1].it_r, op_2, op_3);
}

	/* APP_SERVICE get_class_clients */
void _A219_79_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r, open [2].it_r);
}

	/* APP_SERVICE get_class_clients */
void __A219_79_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2, EIF_REFERENCE op_3)
{
	f_ptr (closed [1].it_r, op_2, op_3);
}

	/* APP_SERVICE get_class_suppliers */
void _A219_80_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r, open [2].it_r);
}

	/* APP_SERVICE get_class_suppliers */
void __A219_80_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2, EIF_REFERENCE op_3)
{
	f_ptr (closed [1].it_r, op_2, op_3);
}

	/* APP_SERVICE get_feature_callers */
void _A219_103_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r, open [2].it_r);
}

	/* APP_SERVICE get_feature_callers */
void __A219_103_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2, EIF_REFERENCE op_3)
{
	f_ptr (closed [1].it_r, op_2, op_3);
}

	/* APP_SERVICE handle_error_feature */
void _A219_110_2 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r);
}

	/* APP_SERVICE handle_error_feature */
void __A219_110_2 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	f_ptr (closed [1].it_r, op_2);
}

	/* APP_SERVICE handle_output_feature */
void _A219_109_2 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r);
}

	/* APP_SERVICE handle_output_feature */
void __A219_109_2 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	f_ptr (closed [1].it_r, op_2);
}

	/* APP_SERVICE handle_error_class */
void _A219_108_2 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r);
}

	/* APP_SERVICE handle_error_class */
void __A219_108_2 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	f_ptr (closed [1].it_r, op_2);
}

	/* APP_SERVICE handle_output_class */
void _A219_107_2 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r);
}

	/* APP_SERVICE handle_output_class */
void __A219_107_2 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	f_ptr (closed [1].it_r, op_2);
}

	/* PROCEDURE [G#1, G#2] call */
void _A467_141 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, closed [2].it_r);
}

	/* PROCEDURE [G#1, G#2] call */
void __A467_141 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r, closed [2].it_r);
}

	/* HASH_TABLE [G#1, G#2] has */
EIF_BOOLEAN _A503_49_2 (EIF_BOOLEAN(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	return f_ptr (closed [1].it_r, open [1].it_r);
}

	/* HASH_TABLE [G#1, INTEGER_32] has */
EIF_BOOLEAN _A513_49_2 (EIF_BOOLEAN(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	EIF_BOOLEAN Result;
	EIF_REFERENCE arg1 = (EIF_REFERENCE) 0;
	GTCX
	RTLD;
	RTLI (2);
	
	RTLR(0,closed [1].it_r);
	
	RTLR(1,arg1);
	arg1 = RTLNS(993, 993, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)arg1 = open [1].it_i4;
	Result = f_ptr (closed [1].it_r, arg1);
	RTLE;
	return Result;
}

	/* HASH_TABLE [INTEGER_32, G#2] has */
EIF_BOOLEAN _A989_49_2 (EIF_BOOLEAN(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	return f_ptr (closed [1].it_r, open [1].it_r);
}

	/* HASH_TABLE [INTEGER_32, INTEGER_32] has */
EIF_BOOLEAN _A580_49_2 (EIF_BOOLEAN(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	return f_ptr (closed [1].it_r, open [1].it_i4);
}

	/* HASH_TABLE [NATURAL_32, POINTER] has */
EIF_BOOLEAN _A699_49_2 (EIF_BOOLEAN(*f_ptr) (EIF_REFERENCE, EIF_POINTER) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	return f_ptr (closed [1].it_r, open [1].it_p);
}

	/* HASH_TABLE [G#1, G#2] has */
EIF_BOOLEAN __A503_49_2 (EIF_BOOLEAN(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	return f_ptr (closed [1].it_r, op_2);
}

	/* HASH_TABLE [G#1, INTEGER_32] has */
EIF_BOOLEAN __A513_49_2 (EIF_BOOLEAN(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_INTEGER_32 op_2)
{
	EIF_BOOLEAN Result;
	EIF_REFERENCE arg1 = (EIF_REFERENCE) 0;
	GTCX
	RTLD;
	RTLI (2);
	
	RTLR(0,closed [1].it_r);
	
	RTLR(1,arg1);
	arg1 = RTLNS(993, 993, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)arg1 = op_2;
	Result = f_ptr (closed [1].it_r, arg1);
	RTLE;
	return Result;
}

	/* HASH_TABLE [INTEGER_32, G#2] has */
EIF_BOOLEAN __A989_49_2 (EIF_BOOLEAN(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	return f_ptr (closed [1].it_r, op_2);
}

	/* HASH_TABLE [INTEGER_32, INTEGER_32] has */
EIF_BOOLEAN __A580_49_2 (EIF_BOOLEAN(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32) , EIF_TYPED_VALUE * closed, EIF_INTEGER_32 op_2)
{
	return f_ptr (closed [1].it_r, op_2);
}

	/* HASH_TABLE [NATURAL_32, POINTER] has */
EIF_BOOLEAN __A699_49_2 (EIF_BOOLEAN(*f_ptr) (EIF_REFERENCE, EIF_POINTER) , EIF_TYPED_VALUE * closed, EIF_POINTER op_2)
{
	return f_ptr (closed [1].it_r, op_2);
}

	/* MISMATCH_INFORMATION clear_all */
void A298_93 (EIF_REFERENCE Current)
{
	(FUNCTION_CAST(void, (EIF_REFERENCE)) F697_13053)(Current);
}

	/* MISMATCH_INFORMATION internal_put */
void A298_159 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2)
{
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_POINTER)) F703_13145)(Current, arg1, arg2);
}

	/* MISMATCH_INFORMATION set_string_versions */
void A298_160 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_POINTER, EIF_POINTER)) F703_13146)(Current, arg1, arg2);
}

	/* WSF_DEFAULT_ROUTER_RESPONSE inline-agent#1 of not_found_message */
void _A307_47_2 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) F614_22914)(closed [1].it_r, open [1].it_r, closed [2].it_r, closed [3].it_r);
}

	/* WSF_DEFAULT_ROUTER_RESPONSE inline-agent#1 of not_found_message */
void __A307_47_2 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) F614_22914)(closed [1].it_r, op_2, closed [2].it_r, closed [3].it_r);
}

	/* WSF_DEFAULT_ROUTER_RESPONSE inline-agent#1 of method_not_allowed_message */
void _A307_48_2 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) F614_22915)(closed [1].it_r, open [1].it_r, closed [2].it_r);
}

	/* WSF_DEFAULT_ROUTER_RESPONSE inline-agent#1 of method_not_allowed_message */
void __A307_48_2 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) F614_22915)(closed [1].it_r, op_2, closed [2].it_r);
}


#ifdef __cplusplus
}
#endif
