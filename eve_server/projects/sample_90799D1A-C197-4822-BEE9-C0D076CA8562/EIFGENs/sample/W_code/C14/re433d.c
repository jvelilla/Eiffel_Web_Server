/*
 * Class READABLE_INDEXABLE [NATURAL_32]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_433 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type1_433 [] = {0xFF11,180,0xFF12,432,133,0xFFFF};
static EIF_TYPE_INDEX gen_type2_433 [] = {0xFF11,432,133,0xFFFF};
static EIF_TYPE_INDEX gen_type3_433 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_433 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_433 [] = {0xFF11,432,133,0xFFFF};
static EIF_TYPE_INDEX gen_type6_433 [] = {0xFF11,432,133,0xFFFF};
static EIF_TYPE_INDEX gen_type7_433 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_433 [] = {0xFF11,11,0xFFFF};
static EIF_TYPE_INDEX gen_type9_433 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type10_433 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type11_433 [] = {0xFF11,10,0xFFFF};
static EIF_TYPE_INDEX gen_type12_433 [] = {432,133,0xFFFF};
static EIF_TYPE_INDEX gen_type13_433 [] = {0xFF11,432,133,0xFFFF};
static EIF_TYPE_INDEX gen_type14_433 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type15_433 [] = {0xFF11,114,0xFFFF};
static EIF_TYPE_INDEX gen_type16_433 [] = {0xFF11,429,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type17_433 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_433[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 170, gen_type0_433},
	{1, (BODY_INDEX)-1, 180, gen_type1_433},
	{2, (BODY_INDEX)-1, 157, NULL},
	{3, (BODY_INDEX)-1, 157, NULL},
	{4, (BODY_INDEX)-1, 157, NULL},
	{5, (BODY_INDEX)-1, 157, NULL},
	{6, (BODY_INDEX)-1, 157, NULL},
	{7, (BODY_INDEX)-1, 157, NULL},
	{8, (BODY_INDEX)-1, 157, NULL},
	{9, (BODY_INDEX)-1, 157, NULL},
	{10, (BODY_INDEX)-1, 432, gen_type2_433},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_433},
	{14, (BODY_INDEX)-1, 0, gen_type4_433},
	{15, (BODY_INDEX)-1, 432, gen_type5_433},
	{16, (BODY_INDEX)-1, 432, gen_type6_433},
	{17, (BODY_INDEX)-1, 0, gen_type7_433},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 11, gen_type8_433},
	{21, (BODY_INDEX)-1, 170, gen_type9_433},
	{22, (BODY_INDEX)-1, 170, gen_type10_433},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 10, gen_type11_433},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 432, gen_type12_433},
	{29, (BODY_INDEX)-1, 160, NULL},
	{30, (BODY_INDEX)-1, 432, gen_type13_433},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type14_433},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 114, gen_type15_433},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 157, NULL},
	{2916, (BODY_INDEX)-1, 429, gen_type16_433},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type17_433},
};

extern void Init433(void);
void Init433(void)
{
	IDSC(desc_433, 0, 432);
	IDSC(desc_433 + 1, 2, 432);
	IDSC(desc_433 + 34, 42, 432);
	IDSC(desc_433 + 37, 65, 432);
}


#ifdef __cplusplus
}
#endif
