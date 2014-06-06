/*
 * Class INFINITE [INTEGER_32]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1080 [] = {450,1079,391,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1080 [] = {1079,391,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1080 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1080 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1080 [] = {1079,391,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1080 [] = {1079,391,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1080 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1080 [] = {1079,391,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1080 [] = {1079,391,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1080 [] = {514,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1080 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_1080[] = {
	{(BODY_INDEX) 2775, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 350, NULL},
	{1, (BODY_INDEX)-1, 450, gen_type0_1080},
	{2, (BODY_INDEX)-1, 337, NULL},
	{3, (BODY_INDEX)-1, 337, NULL},
	{4, (BODY_INDEX)-1, 337, NULL},
	{5, (BODY_INDEX)-1, 337, NULL},
	{6, (BODY_INDEX)-1, 337, NULL},
	{7, (BODY_INDEX)-1, 337, NULL},
	{8, (BODY_INDEX)-1, 337, NULL},
	{9, (BODY_INDEX)-1, 337, NULL},
	{10, (BODY_INDEX)-1, 1079, gen_type1_1080},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type2_1080},
	{14, (BODY_INDEX)-1, 0, gen_type3_1080},
	{15, (BODY_INDEX)-1, 1079, gen_type4_1080},
	{16, (BODY_INDEX)-1, 1079, gen_type5_1080},
	{17, (BODY_INDEX)-1, 0, gen_type6_1080},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 38, NULL},
	{21, (BODY_INDEX)-1, 350, NULL},
	{22, (BODY_INDEX)-1, 350, NULL},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 37, NULL},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 1079, gen_type7_1080},
	{29, (BODY_INDEX)-1, 340, NULL},
	{30, (BODY_INDEX)-1, 1079, gen_type8_1080},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 337, NULL},
	{2776, (BODY_INDEX)-1, 337, NULL},
	{2705, (BODY_INDEX)-1, 337, NULL},
	{2706, 0, 337, NULL},
	{2707, (BODY_INDEX)-1, 337, NULL},
	{2708, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{2709, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 514, gen_type9_1080},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type10_1080},
	{2777, (BODY_INDEX)-1, 337, NULL},
};

extern void Init1080(void);
void Init1080(void)
{
	IDSC(desc_1080, 0, 1079);
	IDSC(desc_1080 + 1, 4, 1079);
	IDSC(desc_1080 + 34, 358, 1079);
	IDSC(desc_1080 + 43, 437, 1079);
}


#ifdef __cplusplus
}
#endif
