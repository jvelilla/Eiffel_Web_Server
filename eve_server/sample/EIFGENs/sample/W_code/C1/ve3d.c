/*
 * Class VERSIONABLE
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_3 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type1_3 [] = {0xFF11,180,0xFF12,2,0xFFFF};
static EIF_TYPE_INDEX gen_type2_3 [] = {0xFF11,2,0xFFFF};
static EIF_TYPE_INDEX gen_type3_3 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_3 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_3 [] = {0xFF11,2,0xFFFF};
static EIF_TYPE_INDEX gen_type6_3 [] = {0xFF11,2,0xFFFF};
static EIF_TYPE_INDEX gen_type7_3 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_3 [] = {0xFF11,11,0xFFFF};
static EIF_TYPE_INDEX gen_type9_3 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type10_3 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type11_3 [] = {0xFF11,10,0xFFFF};
static EIF_TYPE_INDEX gen_type12_3 [] = {0xFF11,2,0xFFFF};


static struct desc_info desc_3[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 170, gen_type0_3},
	{1, (BODY_INDEX)-1, 180, gen_type1_3},
	{2, (BODY_INDEX)-1, 154, NULL},
	{3, (BODY_INDEX)-1, 154, NULL},
	{4, (BODY_INDEX)-1, 154, NULL},
	{5, (BODY_INDEX)-1, 154, NULL},
	{6, (BODY_INDEX)-1, 154, NULL},
	{7, (BODY_INDEX)-1, 154, NULL},
	{8, (BODY_INDEX)-1, 154, NULL},
	{9, (BODY_INDEX)-1, 154, NULL},
	{10, (BODY_INDEX)-1, 2, gen_type2_3},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_3},
	{14, (BODY_INDEX)-1, 0, gen_type4_3},
	{15, (BODY_INDEX)-1, 2, gen_type5_3},
	{16, (BODY_INDEX)-1, 2, gen_type6_3},
	{17, (BODY_INDEX)-1, 0, gen_type7_3},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 11, gen_type8_3},
	{21, (BODY_INDEX)-1, 170, gen_type9_3},
	{22, (BODY_INDEX)-1, 170, gen_type10_3},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 10, gen_type11_3},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 2, NULL},
	{29, (BODY_INDEX)-1, 160, NULL},
	{30, (BODY_INDEX)-1, 2, gen_type12_3},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{39, 0, 133, NULL},
	{40, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{41, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init3(void);
void Init3(void)
{
	IDSC(desc_3, 0, 2);
	IDSC(desc_3 + 1, 2, 2);
	IDSC(desc_3 + 34, 182, 2);
}


#ifdef __cplusplus
}
#endif
