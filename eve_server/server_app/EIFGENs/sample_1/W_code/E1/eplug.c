/*
 * Generated by ISE 14.05.9.5158 GPL Edition - win64
 */

#include "eif_eiffel.h"
#include "eif_project.h"
#include "egc_include.h"

#ifdef __cplusplus
extern "C" {
#endif
extern void F1_23();
extern EIF_REFERENCE F1_14();
extern void F219_6171();
extern void F221_6324();
extern void F226_6393();
extern void F227_6532();
extern void F251_3499();
extern void F243_6052();
extern void F52_1191();
extern EIF_REFERENCE F52_1178();
extern EIF_BOOLEAN F52_1190();
extern EIF_BOOLEAN F52_1195();
extern void F52_1200();
extern void F52_1201();
extern void F52_1202();
extern void F45_1105();
extern EIF_TYPED_VALUE F45_1106();

long *eif_area_table = (long *)0;
long *eif_lower_table = (long *)0;


extern void egc_init_plug (void); 
void egc_init_plug (void)
{
	egc_prof_enabled = (EIF_INTEGER) 0;
	egc_correct_mismatch = (void (*)(EIF_REFERENCE)) F1_23;
	egc_twin = (EIF_TYPED_VALUE (*)(EIF_REFERENCE)) F1_14;
	egc_strmake = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE)) F219_6171;
	egc_str32make = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE)) F226_6393;
	egc_arrmake = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) F251_3499;
	egc_strset = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE)) F221_6324;
	egc_str32set = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE)) F227_6532;
	egc_routdisp_wb = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) F243_6052;
#ifdef RTS_SCP_CAPABLE
	egc_is_scoop_capable = 0;
#endif
	egc_set_exception_data = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) F52_1191;
	egc_set_last_exception = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE)) F52_1190;
	egc_last_exception = (EIF_TYPED_VALUE (*)(EIF_REFERENCE)) F52_1178;
	egc_is_code_ignored = (EIF_TYPED_VALUE (*)(EIF_REFERENCE, EIF_TYPED_VALUE)) F52_1195;
	egc_once_raise = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE)) F52_1200;
	egc_init_exception_manager = (void (*)(EIF_REFERENCE)) F52_1201;
	egc_free_preallocated_trace = (void (*)(EIF_REFERENCE)) F52_1202;

	egc_str_dtype = 220;

	egc_str32_dtype = 226;
	egc_arr_dtype = 250;
	egc_tup_dtype = 174;
	egc_disp_rout_id = 2658;
	egc_copy_rout_id = 18;
	egc_is_equal_rout_id = 11;

	egc_sp_char = (EIF_TYPE_INDEX)578;
	egc_sp_wchar = (EIF_TYPE_INDEX)788;
	egc_sp_bool = (EIF_TYPE_INDEX)404;
	egc_sp_uint8 = (EIF_TYPE_INDEX)711;
	egc_sp_uint16 = (EIF_TYPE_INDEX)678;
	egc_sp_uint32 = (EIF_TYPE_INDEX)365;
	egc_sp_uint64 = (EIF_TYPE_INDEX)436;
	egc_sp_int8 = (EIF_TYPE_INDEX)548;
	egc_sp_int16 = (EIF_TYPE_INDEX)750;
	egc_sp_int32 = (EIF_TYPE_INDEX)278;
	egc_sp_int64 = (EIF_TYPE_INDEX)470;
	egc_sp_real32 = (EIF_TYPE_INDEX)610;
	egc_sp_real64 = (EIF_TYPE_INDEX)322;
	egc_sp_pointer = (EIF_TYPE_INDEX)501;
	egc_sp_ref = (EIF_TYPE_INDEX)243;

	egc_uint8_dtype = 197;
	egc_uint16_dtype = 203;
	egc_uint32_dtype = 200;
	egc_uint64_dtype = 212;
	egc_int8_dtype = 176;
	egc_int16_dtype = 209;
	egc_int32_dtype = 206;
	egc_int64_dtype = 188;
	egc_bool_dtype = 191;
	egc_real32_dtype = 179;
	egc_char_dtype = 185;
	egc_wchar_dtype = 182;
	egc_real64_dtype = 194;
	egc_point_dtype = 215;
#ifdef RTS_SCP_CAPABLE
#if RTS_SCP_CAPABLE == 1
	egc_scp_mngr_dtype = (EIF_TYPE_INDEX)0 - 1;
#else
	egc_scp_mngr_dtype = (EIF_TYPE_INDEX)0 - 1;
#endif
#endif

	egc_exception_dtype = 63;
	egc_except_emnger_dtype = 51;

	egc_ce_type = egc_ce_type_init;

	egc_ce_exp_type = egc_ce_exp_type_init;
	egc_fsystem = egc_fsystem_init;
	egc_system_mod_init = egc_system_mod_init_init;
	egc_partab = egc_partab_init;
	egc_partab_size = egc_partab_size_init;
	egc_foption = egc_foption_init;
	egc_frozen = egc_frozen_init;
	egc_fpatidtab = egc_fpatidtab_init;
	egc_address_table = egc_address_table_init;
	egc_fpattern = egc_fpattern_init;

	egc_einit = egc_einit_init;
	egc_tabinit = egc_tabinit_init;
	egc_forg_table = egc_forg_table_init;

	egc_system_name = "sample_1";
	egc_system_location = "C:\\Users\\Manav\\Desktop\\eve_server\\server_app\\EIFGENs\\sample_1\\W_code";
	egc_compiler_tag = 38;
	egc_project_version = 1401031687;
	egc_has_old_special_semantic = 0;
	egc_has_ieee_semantic = 1;
	scount = 861;

	egc_rcount = 1;
	egc_ridx = 0;
	egc_rlist = (char**) eif_malloc (sizeof(char*)*egc_rcount);
	egc_rcdt = (int32 *) eif_malloc (sizeof(int32)*egc_rcount);
	egc_rcrid = (int32 *) eif_malloc (sizeof(int32)*egc_rcount);
	egc_rcarg = (int32 *) eif_malloc (sizeof(int32)*egc_rcount);
	egc_rlist[0] = "APPLICATION.make";
	egc_rcdt[0] = 0;
	egc_rcrid[0] = 4889;
	egc_rcarg[0] = 0;
	
	
	egc_platform_level = 0x00000D00;
	egc_rt_extension_dt = 44;
	egc_rt_extension_notify = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) F45_1105;
	egc_rt_extension_notify_argument = (EIF_TYPED_VALUE (*)(EIF_REFERENCE, EIF_TYPED_VALUE)) F45_1106;
}

void egc_rcdt_init (void)
{
	if (egc_rcdt[0] == 0) {
		egc_rcdt[0] = 860; /* APPLICATION */
	}
}

#ifdef __cplusplus
}
#endif
