/*
 * Class UUID_GENERATOR
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_37 [] = {459,36,0xFFFF};
static EIF_TYPE_INDEX gen_type1_37 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_37 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_37 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_37 [] = {1057,400,0xFFFF};


static struct desc_info desc_37[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 359, NULL},
	{1, (BODY_INDEX)-1, 459, gen_type0_37},
	{2, (BODY_INDEX)-1, 346, NULL},
	{3, (BODY_INDEX)-1, 346, NULL},
	{4, (BODY_INDEX)-1, 346, NULL},
	{5, (BODY_INDEX)-1, 346, NULL},
	{6, (BODY_INDEX)-1, 346, NULL},
	{7, (BODY_INDEX)-1, 346, NULL},
	{8, (BODY_INDEX)-1, 346, NULL},
	{9, (BODY_INDEX)-1, 346, NULL},
	{10, (BODY_INDEX)-1, 36, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_37},
	{14, (BODY_INDEX)-1, 0, gen_type2_37},
	{15, (BODY_INDEX)-1, 36, NULL},
	{16, (BODY_INDEX)-1, 36, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_37},
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
	{28, (BODY_INDEX)-1, 36, NULL},
	{29, (BODY_INDEX)-1, 349, NULL},
	{30, (BODY_INDEX)-1, 36, NULL},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{523, (BODY_INDEX)-1, 337, NULL},
	{519, (BODY_INDEX)-1, 424, NULL},
	{520, (BODY_INDEX)-1, 218, NULL},
	{521, (BODY_INDEX)-1, 1057, gen_type4_37},
	{522, (BODY_INDEX)-1, 400, NULL},
};

extern void Init37(void);
void Init37(void)
{
	IDSC(desc_37, 0, 36);
	IDSC(desc_37 + 1, 4, 36);
	IDSC(desc_37 + 34, 161, 36);
}


#ifdef __cplusplus
}
#endif
