/*
 * Class SYSTEM_STRING
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_8 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type1_8 [] = {0xFF11,180,0xFF12,7,0xFFFF};
static EIF_TYPE_INDEX gen_type2_8 [] = {0xFF11,7,0xFFFF};
static EIF_TYPE_INDEX gen_type3_8 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_8 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_8 [] = {0xFF11,7,0xFFFF};
static EIF_TYPE_INDEX gen_type6_8 [] = {0xFF11,7,0xFFFF};
static EIF_TYPE_INDEX gen_type7_8 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_8 [] = {0xFF11,11,0xFFFF};
static EIF_TYPE_INDEX gen_type9_8 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type10_8 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type11_8 [] = {0xFF11,10,0xFFFF};
static EIF_TYPE_INDEX gen_type12_8 [] = {0xFF11,7,0xFFFF};


static struct desc_info desc_8[] = {
	{(BODY_INDEX) 272, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 170, gen_type0_8},
	{1, (BODY_INDEX)-1, 180, gen_type1_8},
	{2, (BODY_INDEX)-1, 157, NULL},
	{3, (BODY_INDEX)-1, 157, NULL},
	{4, (BODY_INDEX)-1, 157, NULL},
	{5, (BODY_INDEX)-1, 157, NULL},
	{6, (BODY_INDEX)-1, 157, NULL},
	{7, (BODY_INDEX)-1, 157, NULL},
	{8, (BODY_INDEX)-1, 157, NULL},
	{9, (BODY_INDEX)-1, 157, NULL},
	{10, (BODY_INDEX)-1, 7, gen_type2_8},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_8},
	{14, (BODY_INDEX)-1, 0, gen_type4_8},
	{15, (BODY_INDEX)-1, 7, gen_type5_8},
	{16, (BODY_INDEX)-1, 7, gen_type6_8},
	{17, (BODY_INDEX)-1, 0, gen_type7_8},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 11, gen_type8_8},
	{21, (BODY_INDEX)-1, 170, gen_type9_8},
	{22, (BODY_INDEX)-1, 170, gen_type10_8},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 10, gen_type11_8},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 7, NULL},
	{29, (BODY_INDEX)-1, 160, NULL},
	{30, (BODY_INDEX)-1, 7, gen_type12_8},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{271, (BODY_INDEX)-1, 121, NULL},
};

extern void Init8(void);
void Init8(void)
{
	IDSC(desc_8, 0, 7);
	IDSC(desc_8 + 1, 2, 7);
	IDSC(desc_8 + 34, 80, 7);
}


#ifdef __cplusplus
}
#endif
