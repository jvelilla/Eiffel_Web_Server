/*
 * Class ITERABLE [BOOLEAN]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_850 [] = {441,849,328,0xFFFF};
static EIF_TYPE_INDEX gen_type1_850 [] = {849,328,0xFFFF};
static EIF_TYPE_INDEX gen_type2_850 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_850 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_850 [] = {849,328,0xFFFF};
static EIF_TYPE_INDEX gen_type5_850 [] = {849,328,0xFFFF};
static EIF_TYPE_INDEX gen_type6_850 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type7_850 [] = {849,328,0xFFFF};
static EIF_TYPE_INDEX gen_type8_850 [] = {849,328,0xFFFF};
static EIF_TYPE_INDEX gen_type9_850 [] = {850,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type10_850 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_850[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 341, NULL},
	{1, (BODY_INDEX)-1, 441, gen_type0_850},
	{2, (BODY_INDEX)-1, 328, NULL},
	{3, (BODY_INDEX)-1, 328, NULL},
	{4, (BODY_INDEX)-1, 328, NULL},
	{5, (BODY_INDEX)-1, 328, NULL},
	{6, (BODY_INDEX)-1, 328, NULL},
	{7, (BODY_INDEX)-1, 328, NULL},
	{8, (BODY_INDEX)-1, 328, NULL},
	{9, (BODY_INDEX)-1, 328, NULL},
	{10, (BODY_INDEX)-1, 849, gen_type1_850},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type2_850},
	{14, (BODY_INDEX)-1, 0, gen_type3_850},
	{15, (BODY_INDEX)-1, 849, gen_type4_850},
	{16, (BODY_INDEX)-1, 849, gen_type5_850},
	{17, (BODY_INDEX)-1, 0, gen_type6_850},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 36, NULL},
	{21, (BODY_INDEX)-1, 341, NULL},
	{22, (BODY_INDEX)-1, 341, NULL},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 35, NULL},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 849, gen_type7_850},
	{29, (BODY_INDEX)-1, 331, NULL},
	{30, (BODY_INDEX)-1, 849, gen_type8_850},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 850, gen_type9_850},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type10_850},
};

extern void Init850(void);
void Init850(void)
{
	IDSC(desc_850, 0, 849);
	IDSC(desc_850 + 1, 4, 849);
	IDSC(desc_850 + 34, 83, 849);
}


#ifdef __cplusplus
}
#endif
