/*
 * Class REFACTORING_HELPER
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_20 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type1_20 [] = {0xFF11,180,0xFF12,19,0xFFFF};
static EIF_TYPE_INDEX gen_type2_20 [] = {0xFF11,19,0xFFFF};
static EIF_TYPE_INDEX gen_type3_20 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_20 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_20 [] = {0xFF11,19,0xFFFF};
static EIF_TYPE_INDEX gen_type6_20 [] = {0xFF11,19,0xFFFF};
static EIF_TYPE_INDEX gen_type7_20 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_20 [] = {0xFF11,11,0xFFFF};
static EIF_TYPE_INDEX gen_type9_20 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type10_20 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type11_20 [] = {0xFF11,10,0xFFFF};
static EIF_TYPE_INDEX gen_type12_20 [] = {0xFF11,19,0xFFFF};


static struct desc_info desc_20[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 170, gen_type0_20},
	{1, (BODY_INDEX)-1, 180, gen_type1_20},
	{2, (BODY_INDEX)-1, 154, NULL},
	{3, (BODY_INDEX)-1, 154, NULL},
	{4, (BODY_INDEX)-1, 154, NULL},
	{5, (BODY_INDEX)-1, 154, NULL},
	{6, (BODY_INDEX)-1, 154, NULL},
	{7, (BODY_INDEX)-1, 154, NULL},
	{8, (BODY_INDEX)-1, 154, NULL},
	{9, (BODY_INDEX)-1, 154, NULL},
	{10, (BODY_INDEX)-1, 19, gen_type2_20},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_20},
	{14, (BODY_INDEX)-1, 0, gen_type4_20},
	{15, (BODY_INDEX)-1, 19, gen_type5_20},
	{16, (BODY_INDEX)-1, 19, gen_type6_20},
	{17, (BODY_INDEX)-1, 0, gen_type7_20},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 11, gen_type8_20},
	{21, (BODY_INDEX)-1, 170, gen_type9_20},
	{22, (BODY_INDEX)-1, 170, gen_type10_20},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 10, gen_type11_20},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 19, NULL},
	{29, (BODY_INDEX)-1, 160, NULL},
	{30, (BODY_INDEX)-1, 19, gen_type12_20},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{549, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{550, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{551, (BODY_INDEX)-1, 154, NULL},
};

extern void Init20(void);
void Init20(void)
{
	IDSC(desc_20, 0, 19);
	IDSC(desc_20 + 1, 2, 19);
	IDSC(desc_20 + 34, 123, 19);
}


#ifdef __cplusplus
}
#endif
