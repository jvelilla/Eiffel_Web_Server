/*
 * Class STRING_HANDLER
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_89 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type1_89 [] = {0xFF11,180,0xFF12,88,0xFFFF};
static EIF_TYPE_INDEX gen_type2_89 [] = {0xFF11,88,0xFFFF};
static EIF_TYPE_INDEX gen_type3_89 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_89 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_89 [] = {0xFF11,88,0xFFFF};
static EIF_TYPE_INDEX gen_type6_89 [] = {0xFF11,88,0xFFFF};
static EIF_TYPE_INDEX gen_type7_89 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_89 [] = {0xFF11,11,0xFFFF};
static EIF_TYPE_INDEX gen_type9_89 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type10_89 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type11_89 [] = {0xFF11,10,0xFFFF};
static EIF_TYPE_INDEX gen_type12_89 [] = {0xFF11,88,0xFFFF};


static struct desc_info desc_89[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 170, gen_type0_89},
	{1, (BODY_INDEX)-1, 180, gen_type1_89},
	{2, (BODY_INDEX)-1, 154, NULL},
	{3, (BODY_INDEX)-1, 154, NULL},
	{4, (BODY_INDEX)-1, 154, NULL},
	{5, (BODY_INDEX)-1, 154, NULL},
	{6, (BODY_INDEX)-1, 154, NULL},
	{7, (BODY_INDEX)-1, 154, NULL},
	{8, (BODY_INDEX)-1, 154, NULL},
	{9, (BODY_INDEX)-1, 154, NULL},
	{10, (BODY_INDEX)-1, 88, gen_type2_89},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_89},
	{14, (BODY_INDEX)-1, 0, gen_type4_89},
	{15, (BODY_INDEX)-1, 88, gen_type5_89},
	{16, (BODY_INDEX)-1, 88, gen_type6_89},
	{17, (BODY_INDEX)-1, 0, gen_type7_89},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 11, gen_type8_89},
	{21, (BODY_INDEX)-1, 170, gen_type9_89},
	{22, (BODY_INDEX)-1, 170, gen_type10_89},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 10, gen_type11_89},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 88, NULL},
	{29, (BODY_INDEX)-1, 160, NULL},
	{30, (BODY_INDEX)-1, 88, gen_type12_89},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init89(void);
void Init89(void)
{
	IDSC(desc_89, 0, 88);
	IDSC(desc_89 + 1, 2, 88);
}


#ifdef __cplusplus
}
#endif
