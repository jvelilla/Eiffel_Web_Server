/*
 * Class CELL [NATURAL_64]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_462 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type1_462 [] = {0xFF11,180,0xFF12,461,130,0xFFFF};
static EIF_TYPE_INDEX gen_type2_462 [] = {0xFF11,461,130,0xFFFF};
static EIF_TYPE_INDEX gen_type3_462 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_462 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_462 [] = {0xFF11,461,130,0xFFFF};
static EIF_TYPE_INDEX gen_type6_462 [] = {0xFF11,461,130,0xFFFF};
static EIF_TYPE_INDEX gen_type7_462 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_462 [] = {0xFF11,11,0xFFFF};
static EIF_TYPE_INDEX gen_type9_462 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type10_462 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type11_462 [] = {0xFF11,10,0xFFFF};
static EIF_TYPE_INDEX gen_type12_462 [] = {461,130,0xFFFF};
static EIF_TYPE_INDEX gen_type13_462 [] = {0xFF11,461,130,0xFFFF};
static EIF_TYPE_INDEX gen_type14_462 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type15_462 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_462[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 170, gen_type0_462},
	{1, (BODY_INDEX)-1, 180, gen_type1_462},
	{2, (BODY_INDEX)-1, 157, NULL},
	{3, (BODY_INDEX)-1, 157, NULL},
	{4, (BODY_INDEX)-1, 157, NULL},
	{5, (BODY_INDEX)-1, 157, NULL},
	{6, (BODY_INDEX)-1, 157, NULL},
	{7, (BODY_INDEX)-1, 157, NULL},
	{8, (BODY_INDEX)-1, 157, NULL},
	{9, (BODY_INDEX)-1, 157, NULL},
	{10, (BODY_INDEX)-1, 461, gen_type2_462},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_462},
	{14, (BODY_INDEX)-1, 0, gen_type4_462},
	{15, (BODY_INDEX)-1, 461, gen_type5_462},
	{16, (BODY_INDEX)-1, 461, gen_type6_462},
	{17, (BODY_INDEX)-1, 0, gen_type7_462},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 11, gen_type8_462},
	{21, (BODY_INDEX)-1, 170, gen_type9_462},
	{22, (BODY_INDEX)-1, 170, gen_type10_462},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 10, gen_type11_462},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 461, gen_type12_462},
	{29, (BODY_INDEX)-1, 160, NULL},
	{30, (BODY_INDEX)-1, 461, gen_type13_462},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{629, 0, (EIF_TYPE_INDEX)-1, gen_type14_462},
	{630, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{631, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type15_462},
};

extern void Init462(void);
void Init462(void)
{
	IDSC(desc_462, 0, 461);
	IDSC(desc_462 + 1, 2, 461);
	IDSC(desc_462 + 34, 78, 461);
}


#ifdef __cplusplus
}
#endif
