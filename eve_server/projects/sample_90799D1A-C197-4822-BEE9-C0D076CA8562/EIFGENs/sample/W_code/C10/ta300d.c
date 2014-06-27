/*
 * Class TABLE_ITERABLE [G#1, G#2]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_300 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type1_300 [] = {0xFF11,180,0xFF12,299,0xFFF8,1,0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX gen_type2_300 [] = {0xFF11,299,0xFFF8,1,0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX gen_type3_300 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_300 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_300 [] = {0xFF11,299,0xFFF8,1,0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX gen_type6_300 [] = {0xFF11,299,0xFFF8,1,0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX gen_type7_300 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_300 [] = {0xFF11,11,0xFFFF};
static EIF_TYPE_INDEX gen_type9_300 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type10_300 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type11_300 [] = {0xFF11,10,0xFFFF};
static EIF_TYPE_INDEX gen_type12_300 [] = {299,0xFFF8,1,0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX gen_type13_300 [] = {0xFF11,299,0xFFF8,1,0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX gen_type14_300 [] = {0xFF11,298,0xFFF8,1,0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX gen_type15_300 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type16_300 [] = {0xFFF8,2,0xFFFF};


static struct desc_info desc_300[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 170, gen_type0_300},
	{1, (BODY_INDEX)-1, 180, gen_type1_300},
	{2, (BODY_INDEX)-1, 157, NULL},
	{3, (BODY_INDEX)-1, 157, NULL},
	{4, (BODY_INDEX)-1, 157, NULL},
	{5, (BODY_INDEX)-1, 157, NULL},
	{6, (BODY_INDEX)-1, 157, NULL},
	{7, (BODY_INDEX)-1, 157, NULL},
	{8, (BODY_INDEX)-1, 157, NULL},
	{9, (BODY_INDEX)-1, 157, NULL},
	{10, (BODY_INDEX)-1, 299, gen_type2_300},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_300},
	{14, (BODY_INDEX)-1, 0, gen_type4_300},
	{15, (BODY_INDEX)-1, 299, gen_type5_300},
	{16, (BODY_INDEX)-1, 299, gen_type6_300},
	{17, (BODY_INDEX)-1, 0, gen_type7_300},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 11, gen_type8_300},
	{21, (BODY_INDEX)-1, 170, gen_type9_300},
	{22, (BODY_INDEX)-1, 170, gen_type10_300},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 10, gen_type11_300},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 299, gen_type12_300},
	{29, (BODY_INDEX)-1, 160, NULL},
	{30, (BODY_INDEX)-1, 299, gen_type13_300},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 298, gen_type14_300},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type15_300},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type16_300},
};

extern void Init300(void);
void Init300(void)
{
	IDSC(desc_300, 0, 299);
	IDSC(desc_300 + 1, 2, 299);
	IDSC(desc_300 + 34, 65, 299);
	IDSC(desc_300 + 36, 167, 299);
}


#ifdef __cplusplus
}
#endif
