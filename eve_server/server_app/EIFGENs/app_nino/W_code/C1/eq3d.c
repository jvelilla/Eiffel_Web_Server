/*
 * Class EQA_SYSTEM_OUTPUT_PROCESSOR
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_3 [] = {459,2,0xFFFF};
static EIF_TYPE_INDEX gen_type1_3 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_3 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_3 [] = {0,0xFFFF};


static struct desc_info desc_3[] = {
	{(BODY_INDEX) 64, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 359, NULL},
	{1, (BODY_INDEX)-1, 459, gen_type0_3},
	{2, (BODY_INDEX)-1, 346, NULL},
	{3, (BODY_INDEX)-1, 346, NULL},
	{4, (BODY_INDEX)-1, 346, NULL},
	{5, (BODY_INDEX)-1, 346, NULL},
	{6, (BODY_INDEX)-1, 346, NULL},
	{7, (BODY_INDEX)-1, 346, NULL},
	{8, (BODY_INDEX)-1, 346, NULL},
	{9, (BODY_INDEX)-1, 346, NULL},
	{10, (BODY_INDEX)-1, 2, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_3},
	{14, (BODY_INDEX)-1, 0, gen_type2_3},
	{15, (BODY_INDEX)-1, 2, NULL},
	{16, (BODY_INDEX)-1, 2, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_3},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 42, NULL},
	{21, (BODY_INDEX)-1, 359, NULL},
	{22, (BODY_INDEX)-1, 359, NULL},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 41, NULL},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 2, NULL},
	{29, (BODY_INDEX)-1, 349, NULL},
	{30, (BODY_INDEX)-1, 2, NULL},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{56, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{57, 0, 359, NULL},
	{58, 8, 346, NULL},
	{59, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{60, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{61, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{62, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{63, (BODY_INDEX)-1, 400, NULL},
};

extern void Init3(void);
void Init3(void)
{
	IDSC(desc_3, 0, 2);
	IDSC(desc_3 + 1, 4, 2);
	IDSC(desc_3 + 34, 492, 2);
}


#ifdef __cplusplus
}
#endif
