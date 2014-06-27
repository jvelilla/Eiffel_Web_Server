/*
 * Class TO_SPECIAL [NATURAL_32]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_410 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type1_410 [] = {0xFF11,180,0xFF12,409,133,0xFFFF};
static EIF_TYPE_INDEX gen_type2_410 [] = {0xFF11,409,133,0xFFFF};
static EIF_TYPE_INDEX gen_type3_410 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_410 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_410 [] = {0xFF11,409,133,0xFFFF};
static EIF_TYPE_INDEX gen_type6_410 [] = {0xFF11,409,133,0xFFFF};
static EIF_TYPE_INDEX gen_type7_410 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_410 [] = {0xFF11,11,0xFFFF};
static EIF_TYPE_INDEX gen_type9_410 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type10_410 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type11_410 [] = {0xFF11,10,0xFFFF};
static EIF_TYPE_INDEX gen_type12_410 [] = {409,133,0xFFFF};
static EIF_TYPE_INDEX gen_type13_410 [] = {0xFF11,409,133,0xFFFF};
static EIF_TYPE_INDEX gen_type14_410 [] = {0xFF11,392,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type15_410 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type16_410 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type17_410 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_410[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 170, gen_type0_410},
	{1, (BODY_INDEX)-1, 180, gen_type1_410},
	{2, (BODY_INDEX)-1, 154, NULL},
	{3, (BODY_INDEX)-1, 154, NULL},
	{4, (BODY_INDEX)-1, 154, NULL},
	{5, (BODY_INDEX)-1, 154, NULL},
	{6, (BODY_INDEX)-1, 154, NULL},
	{7, (BODY_INDEX)-1, 154, NULL},
	{8, (BODY_INDEX)-1, 154, NULL},
	{9, (BODY_INDEX)-1, 154, NULL},
	{10, (BODY_INDEX)-1, 409, gen_type2_410},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_410},
	{14, (BODY_INDEX)-1, 0, gen_type4_410},
	{15, (BODY_INDEX)-1, 409, gen_type5_410},
	{16, (BODY_INDEX)-1, 409, gen_type6_410},
	{17, (BODY_INDEX)-1, 0, gen_type7_410},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 11, gen_type8_410},
	{21, (BODY_INDEX)-1, 170, gen_type9_410},
	{22, (BODY_INDEX)-1, 170, gen_type10_410},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 10, gen_type11_410},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 409, gen_type12_410},
	{29, (BODY_INDEX)-1, 160, NULL},
	{30, (BODY_INDEX)-1, 409, gen_type13_410},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{2399, 0, 392, gen_type14_410},
	{2400, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{2401, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{2402, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type15_410},
	{2403, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type16_410},
	{2404, (BODY_INDEX)-1, 154, NULL},
	{2405, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{2406, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type17_410},
};

extern void Init410(void);
void Init410(void)
{
	IDSC(desc_410, 0, 409);
	IDSC(desc_410 + 1, 2, 409);
	IDSC(desc_410 + 34, 48, 409);
}


#ifdef __cplusplus
}
#endif
