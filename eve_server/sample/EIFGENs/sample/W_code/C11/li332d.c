/*
 * Class LINKABLE [G#1]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_332 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type1_332 [] = {0xFF11,180,0xFF12,331,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type2_332 [] = {0xFF11,331,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type3_332 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_332 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_332 [] = {0xFF11,331,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type6_332 [] = {0xFF11,331,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type7_332 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_332 [] = {0xFF11,11,0xFFFF};
static EIF_TYPE_INDEX gen_type9_332 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type10_332 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type11_332 [] = {0xFF11,10,0xFFFF};
static EIF_TYPE_INDEX gen_type12_332 [] = {331,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type13_332 [] = {0xFF11,331,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type14_332 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type15_332 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type16_332 [] = {331,0xFFF8,1,0xFFFF};


static struct desc_info desc_332[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 170, gen_type0_332},
	{1, (BODY_INDEX)-1, 180, gen_type1_332},
	{2, (BODY_INDEX)-1, 154, NULL},
	{3, (BODY_INDEX)-1, 154, NULL},
	{4, (BODY_INDEX)-1, 154, NULL},
	{5, (BODY_INDEX)-1, 154, NULL},
	{6, (BODY_INDEX)-1, 154, NULL},
	{7, (BODY_INDEX)-1, 154, NULL},
	{8, (BODY_INDEX)-1, 154, NULL},
	{9, (BODY_INDEX)-1, 154, NULL},
	{10, (BODY_INDEX)-1, 331, gen_type2_332},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_332},
	{14, (BODY_INDEX)-1, 0, gen_type4_332},
	{15, (BODY_INDEX)-1, 331, gen_type5_332},
	{16, (BODY_INDEX)-1, 331, gen_type6_332},
	{17, (BODY_INDEX)-1, 0, gen_type7_332},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 11, gen_type8_332},
	{21, (BODY_INDEX)-1, 170, gen_type9_332},
	{22, (BODY_INDEX)-1, 170, gen_type10_332},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 10, gen_type11_332},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 331, gen_type12_332},
	{29, (BODY_INDEX)-1, 160, NULL},
	{30, (BODY_INDEX)-1, 331, gen_type13_332},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{623, 0, (EIF_TYPE_INDEX)-1, gen_type14_332},
	{624, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{625, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type15_332},
	{638, 8, 331, gen_type16_332},
	{639, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{640, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init332(void);
void Init332(void)
{
	IDSC(desc_332, 0, 331);
	IDSC(desc_332 + 1, 2, 331);
	IDSC(desc_332 + 34, 78, 331);
	IDSC(desc_332 + 38, 195, 331);
}


#ifdef __cplusplus
}
#endif
