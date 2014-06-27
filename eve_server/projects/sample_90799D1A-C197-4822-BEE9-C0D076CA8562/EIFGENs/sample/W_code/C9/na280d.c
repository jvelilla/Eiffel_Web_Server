/*
 * Class NATIVE_ARRAY [INTEGER_32]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_280 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type1_280 [] = {0xFF11,180,0xFF12,279,121,0xFFFF};
static EIF_TYPE_INDEX gen_type2_280 [] = {0xFF11,279,121,0xFFFF};
static EIF_TYPE_INDEX gen_type3_280 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_280 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_280 [] = {0xFF11,279,121,0xFFFF};
static EIF_TYPE_INDEX gen_type6_280 [] = {0xFF11,279,121,0xFFFF};
static EIF_TYPE_INDEX gen_type7_280 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_280 [] = {0xFF11,11,0xFFFF};
static EIF_TYPE_INDEX gen_type9_280 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type10_280 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type11_280 [] = {0xFF11,10,0xFFFF};
static EIF_TYPE_INDEX gen_type12_280 [] = {279,121,0xFFFF};
static EIF_TYPE_INDEX gen_type13_280 [] = {0xFF11,279,121,0xFFFF};
static EIF_TYPE_INDEX gen_type14_280 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_280[] = {
	{(BODY_INDEX) 385, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 170, gen_type0_280},
	{1, (BODY_INDEX)-1, 180, gen_type1_280},
	{2, (BODY_INDEX)-1, 157, NULL},
	{3, (BODY_INDEX)-1, 157, NULL},
	{4, (BODY_INDEX)-1, 157, NULL},
	{5, (BODY_INDEX)-1, 157, NULL},
	{6, (BODY_INDEX)-1, 157, NULL},
	{7, (BODY_INDEX)-1, 157, NULL},
	{8, (BODY_INDEX)-1, 157, NULL},
	{9, (BODY_INDEX)-1, 157, NULL},
	{10, (BODY_INDEX)-1, 279, gen_type2_280},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_280},
	{14, (BODY_INDEX)-1, 0, gen_type4_280},
	{15, (BODY_INDEX)-1, 279, gen_type5_280},
	{16, (BODY_INDEX)-1, 279, gen_type6_280},
	{17, (BODY_INDEX)-1, 0, gen_type7_280},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 11, gen_type8_280},
	{21, (BODY_INDEX)-1, 170, gen_type9_280},
	{22, (BODY_INDEX)-1, 170, gen_type10_280},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 10, gen_type11_280},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 279, gen_type12_280},
	{29, (BODY_INDEX)-1, 160, NULL},
	{30, (BODY_INDEX)-1, 279, gen_type13_280},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type14_280},
};

extern void Init280(void);
void Init280(void)
{
	IDSC(desc_280, 0, 279);
	IDSC(desc_280 + 1, 2, 279);
	IDSC(desc_280 + 34, 39, 279);
}


#ifdef __cplusplus
}
#endif
