/*
 * Class RT_DBG_COMMON
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_129 [] = {459,128,0xFFFF};
static EIF_TYPE_INDEX gen_type1_129 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_129 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_129 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_129 [] = {485,443,0xFFFF};


static struct desc_info desc_129[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 359, NULL},
	{1, (BODY_INDEX)-1, 459, gen_type0_129},
	{2, (BODY_INDEX)-1, 346, NULL},
	{3, (BODY_INDEX)-1, 346, NULL},
	{4, (BODY_INDEX)-1, 346, NULL},
	{5, (BODY_INDEX)-1, 346, NULL},
	{6, (BODY_INDEX)-1, 346, NULL},
	{7, (BODY_INDEX)-1, 346, NULL},
	{8, (BODY_INDEX)-1, 346, NULL},
	{9, (BODY_INDEX)-1, 346, NULL},
	{10, (BODY_INDEX)-1, 128, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_129},
	{14, (BODY_INDEX)-1, 0, gen_type2_129},
	{15, (BODY_INDEX)-1, 128, NULL},
	{16, (BODY_INDEX)-1, 128, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_129},
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
	{28, (BODY_INDEX)-1, 128, NULL},
	{29, (BODY_INDEX)-1, 349, NULL},
	{30, (BODY_INDEX)-1, 128, NULL},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1885, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1886, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1924, (BODY_INDEX)-1, 485, gen_type4_129},
};

extern void Init129(void);
void Init129(void)
{
	IDSC(desc_129, 0, 128);
	IDSC(desc_129 + 1, 4, 128);
	IDSC(desc_129 + 34, 259, 128);
	IDSC(desc_129 + 36, 255, 128);
}


#ifdef __cplusplus
}
#endif
