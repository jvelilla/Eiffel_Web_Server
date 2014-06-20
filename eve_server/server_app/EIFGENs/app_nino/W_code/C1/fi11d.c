/*
 * Class FILE_UTILITIES
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_11 [] = {1000,10,0xFFFF};
static EIF_TYPE_INDEX gen_type1_11 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_11 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_11 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_11 [] = {485,372,0xFFFF};
static EIF_TYPE_INDEX gen_type5_11 [] = {485,372,0xFFFF};
static EIF_TYPE_INDEX gen_type6_11 [] = {485,358,0xFFFF};
static EIF_TYPE_INDEX gen_type7_11 [] = {485,358,0xFFFF};


static struct desc_info desc_11[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 359, NULL},
	{1, (BODY_INDEX)-1, 1000, gen_type0_11},
	{2, (BODY_INDEX)-1, 346, NULL},
	{3, (BODY_INDEX)-1, 346, NULL},
	{4, (BODY_INDEX)-1, 346, NULL},
	{5, (BODY_INDEX)-1, 346, NULL},
	{6, (BODY_INDEX)-1, 346, NULL},
	{7, (BODY_INDEX)-1, 346, NULL},
	{8, (BODY_INDEX)-1, 346, NULL},
	{9, (BODY_INDEX)-1, 346, NULL},
	{10, (BODY_INDEX)-1, 10, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_11},
	{14, (BODY_INDEX)-1, 0, gen_type2_11},
	{15, (BODY_INDEX)-1, 10, NULL},
	{16, (BODY_INDEX)-1, 10, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_11},
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
	{28, (BODY_INDEX)-1, 10, NULL},
	{29, (BODY_INDEX)-1, 349, NULL},
	{30, (BODY_INDEX)-1, 10, NULL},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{242, (BODY_INDEX)-1, 358, NULL},
	{243, (BODY_INDEX)-1, 485, gen_type4_11},
	{244, (BODY_INDEX)-1, 485, gen_type5_11},
	{245, (BODY_INDEX)-1, 351, NULL},
	{246, (BODY_INDEX)-1, 351, NULL},
	{230, (BODY_INDEX)-1, 346, NULL},
	{231, (BODY_INDEX)-1, 346, NULL},
	{232, (BODY_INDEX)-1, 485, gen_type6_11},
	{233, (BODY_INDEX)-1, 485, gen_type7_11},
	{234, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{235, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{236, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{237, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{238, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{239, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{240, (BODY_INDEX)-1, 346, NULL},
	{241, (BODY_INDEX)-1, 346, NULL},
};

extern void Init11(void);
void Init11(void)
{
	IDSC(desc_11, 0, 10);
	IDSC(desc_11 + 1, 4, 10);
	IDSC(desc_11 + 34, 382, 10);
}


#ifdef __cplusplus
}
#endif
