/*
 * Class ITERABLE [REAL_64]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_315 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type1_315 [] = {0xFF11,180,0xFF12,314,145,0xFFFF};
static EIF_TYPE_INDEX gen_type2_315 [] = {0xFF11,314,145,0xFFFF};
static EIF_TYPE_INDEX gen_type3_315 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_315 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_315 [] = {0xFF11,314,145,0xFFFF};
static EIF_TYPE_INDEX gen_type6_315 [] = {0xFF11,314,145,0xFFFF};
static EIF_TYPE_INDEX gen_type7_315 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_315 [] = {0xFF11,11,0xFFFF};
static EIF_TYPE_INDEX gen_type9_315 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type10_315 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type11_315 [] = {0xFF11,10,0xFFFF};
static EIF_TYPE_INDEX gen_type12_315 [] = {314,145,0xFFFF};
static EIF_TYPE_INDEX gen_type13_315 [] = {0xFF11,314,145,0xFFFF};
static EIF_TYPE_INDEX gen_type14_315 [] = {0xFF11,315,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type15_315 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_315[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 170, gen_type0_315},
	{1, (BODY_INDEX)-1, 180, gen_type1_315},
	{2, (BODY_INDEX)-1, 154, NULL},
	{3, (BODY_INDEX)-1, 154, NULL},
	{4, (BODY_INDEX)-1, 154, NULL},
	{5, (BODY_INDEX)-1, 154, NULL},
	{6, (BODY_INDEX)-1, 154, NULL},
	{7, (BODY_INDEX)-1, 154, NULL},
	{8, (BODY_INDEX)-1, 154, NULL},
	{9, (BODY_INDEX)-1, 154, NULL},
	{10, (BODY_INDEX)-1, 314, gen_type2_315},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_315},
	{14, (BODY_INDEX)-1, 0, gen_type4_315},
	{15, (BODY_INDEX)-1, 314, gen_type5_315},
	{16, (BODY_INDEX)-1, 314, gen_type6_315},
	{17, (BODY_INDEX)-1, 0, gen_type7_315},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 11, gen_type8_315},
	{21, (BODY_INDEX)-1, 170, gen_type9_315},
	{22, (BODY_INDEX)-1, 170, gen_type10_315},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 10, gen_type11_315},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 314, gen_type12_315},
	{29, (BODY_INDEX)-1, 160, NULL},
	{30, (BODY_INDEX)-1, 314, gen_type13_315},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 315, gen_type14_315},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type15_315},
};

extern void Init315(void);
void Init315(void)
{
	IDSC(desc_315, 0, 314);
	IDSC(desc_315 + 1, 2, 314);
	IDSC(desc_315 + 34, 65, 314);
}


#ifdef __cplusplus
}
#endif
