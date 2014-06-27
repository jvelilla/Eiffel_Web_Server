/*
 * Class TO_SPECIAL [REAL_64]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_312 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type1_312 [] = {0xFF11,180,0xFF12,311,145,0xFFFF};
static EIF_TYPE_INDEX gen_type2_312 [] = {0xFF11,311,145,0xFFFF};
static EIF_TYPE_INDEX gen_type3_312 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_312 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_312 [] = {0xFF11,311,145,0xFFFF};
static EIF_TYPE_INDEX gen_type6_312 [] = {0xFF11,311,145,0xFFFF};
static EIF_TYPE_INDEX gen_type7_312 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_312 [] = {0xFF11,11,0xFFFF};
static EIF_TYPE_INDEX gen_type9_312 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type10_312 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type11_312 [] = {0xFF11,10,0xFFFF};
static EIF_TYPE_INDEX gen_type12_312 [] = {311,145,0xFFFF};
static EIF_TYPE_INDEX gen_type13_312 [] = {0xFF11,311,145,0xFFFF};
static EIF_TYPE_INDEX gen_type14_312 [] = {0xFF11,312,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type15_312 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type16_312 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type17_312 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_312[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 170, gen_type0_312},
	{1, (BODY_INDEX)-1, 180, gen_type1_312},
	{2, (BODY_INDEX)-1, 154, NULL},
	{3, (BODY_INDEX)-1, 154, NULL},
	{4, (BODY_INDEX)-1, 154, NULL},
	{5, (BODY_INDEX)-1, 154, NULL},
	{6, (BODY_INDEX)-1, 154, NULL},
	{7, (BODY_INDEX)-1, 154, NULL},
	{8, (BODY_INDEX)-1, 154, NULL},
	{9, (BODY_INDEX)-1, 154, NULL},
	{10, (BODY_INDEX)-1, 311, gen_type2_312},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_312},
	{14, (BODY_INDEX)-1, 0, gen_type4_312},
	{15, (BODY_INDEX)-1, 311, gen_type5_312},
	{16, (BODY_INDEX)-1, 311, gen_type6_312},
	{17, (BODY_INDEX)-1, 0, gen_type7_312},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 11, gen_type8_312},
	{21, (BODY_INDEX)-1, 170, gen_type9_312},
	{22, (BODY_INDEX)-1, 170, gen_type10_312},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 10, gen_type11_312},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 311, gen_type12_312},
	{29, (BODY_INDEX)-1, 160, NULL},
	{30, (BODY_INDEX)-1, 311, gen_type13_312},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{2383, 0, 312, gen_type14_312},
	{2384, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{2385, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{2386, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type15_312},
	{2387, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type16_312},
	{2388, (BODY_INDEX)-1, 154, NULL},
	{2389, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{2390, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type17_312},
};

extern void Init312(void);
void Init312(void)
{
	IDSC(desc_312, 0, 311);
	IDSC(desc_312 + 1, 2, 311);
	IDSC(desc_312 + 34, 48, 311);
}


#ifdef __cplusplus
}
#endif
