/*
 * Class CELL [NATURAL_64]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_425 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type1_425 [] = {0xFF11,180,0xFF12,424,130,0xFFFF};
static EIF_TYPE_INDEX gen_type2_425 [] = {0xFF11,424,130,0xFFFF};
static EIF_TYPE_INDEX gen_type3_425 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_425 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_425 [] = {0xFF11,424,130,0xFFFF};
static EIF_TYPE_INDEX gen_type6_425 [] = {0xFF11,424,130,0xFFFF};
static EIF_TYPE_INDEX gen_type7_425 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_425 [] = {0xFF11,11,0xFFFF};
static EIF_TYPE_INDEX gen_type9_425 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type10_425 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type11_425 [] = {0xFF11,10,0xFFFF};
static EIF_TYPE_INDEX gen_type12_425 [] = {424,130,0xFFFF};
static EIF_TYPE_INDEX gen_type13_425 [] = {0xFF11,424,130,0xFFFF};
static EIF_TYPE_INDEX gen_type14_425 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type15_425 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_425[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 170, gen_type0_425},
	{1, (BODY_INDEX)-1, 180, gen_type1_425},
	{2, (BODY_INDEX)-1, 154, NULL},
	{3, (BODY_INDEX)-1, 154, NULL},
	{4, (BODY_INDEX)-1, 154, NULL},
	{5, (BODY_INDEX)-1, 154, NULL},
	{6, (BODY_INDEX)-1, 154, NULL},
	{7, (BODY_INDEX)-1, 154, NULL},
	{8, (BODY_INDEX)-1, 154, NULL},
	{9, (BODY_INDEX)-1, 154, NULL},
	{10, (BODY_INDEX)-1, 424, gen_type2_425},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_425},
	{14, (BODY_INDEX)-1, 0, gen_type4_425},
	{15, (BODY_INDEX)-1, 424, gen_type5_425},
	{16, (BODY_INDEX)-1, 424, gen_type6_425},
	{17, (BODY_INDEX)-1, 0, gen_type7_425},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 11, gen_type8_425},
	{21, (BODY_INDEX)-1, 170, gen_type9_425},
	{22, (BODY_INDEX)-1, 170, gen_type10_425},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 10, gen_type11_425},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 424, gen_type12_425},
	{29, (BODY_INDEX)-1, 160, NULL},
	{30, (BODY_INDEX)-1, 424, gen_type13_425},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{629, 0, (EIF_TYPE_INDEX)-1, gen_type14_425},
	{630, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{631, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type15_425},
};

extern void Init425(void);
void Init425(void)
{
	IDSC(desc_425, 0, 424);
	IDSC(desc_425 + 1, 2, 424);
	IDSC(desc_425 + 34, 78, 424);
}


#ifdef __cplusplus
}
#endif
