/*
 * Class ACCOUNT
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_13 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type1_13 [] = {0xFF11,180,0xFF12,12,0xFFFF};
static EIF_TYPE_INDEX gen_type2_13 [] = {0xFF11,12,0xFFFF};
static EIF_TYPE_INDEX gen_type3_13 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_13 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_13 [] = {0xFF11,12,0xFFFF};
static EIF_TYPE_INDEX gen_type6_13 [] = {0xFF11,12,0xFFFF};
static EIF_TYPE_INDEX gen_type7_13 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_13 [] = {0xFF11,11,0xFFFF};
static EIF_TYPE_INDEX gen_type9_13 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type10_13 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type11_13 [] = {0xFF11,10,0xFFFF};
static EIF_TYPE_INDEX gen_type12_13 [] = {0xFF11,12,0xFFFF};


static struct desc_info desc_13[] = {
	{(BODY_INDEX) 477, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 170, gen_type0_13},
	{1, (BODY_INDEX)-1, 180, gen_type1_13},
	{2, (BODY_INDEX)-1, 154, NULL},
	{3, (BODY_INDEX)-1, 154, NULL},
	{4, (BODY_INDEX)-1, 154, NULL},
	{5, (BODY_INDEX)-1, 154, NULL},
	{6, (BODY_INDEX)-1, 154, NULL},
	{7, (BODY_INDEX)-1, 154, NULL},
	{8, (BODY_INDEX)-1, 154, NULL},
	{9, (BODY_INDEX)-1, 154, NULL},
	{10, (BODY_INDEX)-1, 12, gen_type2_13},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_13},
	{14, (BODY_INDEX)-1, 0, gen_type4_13},
	{15, (BODY_INDEX)-1, 12, gen_type5_13},
	{16, (BODY_INDEX)-1, 12, gen_type6_13},
	{17, (BODY_INDEX)-1, 0, gen_type7_13},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 11, gen_type8_13},
	{21, (BODY_INDEX)-1, 170, gen_type9_13},
	{22, (BODY_INDEX)-1, 170, gen_type10_13},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 10, gen_type11_13},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 12, NULL},
	{29, (BODY_INDEX)-1, 160, NULL},
	{30, (BODY_INDEX)-1, 12, gen_type12_13},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{478, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{479, 0, 145, NULL},
	{480, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{481, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init13(void);
void Init13(void)
{
	IDSC(desc_13, 0, 12);
	IDSC(desc_13 + 1, 2, 12);
	IDSC(desc_13 + 34, 31, 12);
}


#ifdef __cplusplus
}
#endif
