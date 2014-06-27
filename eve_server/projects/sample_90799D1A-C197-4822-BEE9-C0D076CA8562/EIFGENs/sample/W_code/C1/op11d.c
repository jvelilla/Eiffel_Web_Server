/*
 * Class OPERATING_ENVIRONMENT
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_11 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type1_11 [] = {0xFF11,180,0xFF12,10,0xFFFF};
static EIF_TYPE_INDEX gen_type2_11 [] = {0xFF11,10,0xFFFF};
static EIF_TYPE_INDEX gen_type3_11 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_11 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_11 [] = {0xFF11,10,0xFFFF};
static EIF_TYPE_INDEX gen_type6_11 [] = {0xFF11,10,0xFFFF};
static EIF_TYPE_INDEX gen_type7_11 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_11 [] = {0xFF11,11,0xFFFF};
static EIF_TYPE_INDEX gen_type9_11 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type10_11 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type11_11 [] = {0xFF11,10,0xFFFF};
static EIF_TYPE_INDEX gen_type12_11 [] = {0xFF11,10,0xFFFF};
static EIF_TYPE_INDEX gen_type13_11 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type14_11 [] = {0xFF11,170,0xFFFF};


static struct desc_info desc_11[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 170, gen_type0_11},
	{1, (BODY_INDEX)-1, 180, gen_type1_11},
	{2, (BODY_INDEX)-1, 157, NULL},
	{3, (BODY_INDEX)-1, 157, NULL},
	{4, (BODY_INDEX)-1, 157, NULL},
	{5, (BODY_INDEX)-1, 157, NULL},
	{6, (BODY_INDEX)-1, 157, NULL},
	{7, (BODY_INDEX)-1, 157, NULL},
	{8, (BODY_INDEX)-1, 157, NULL},
	{9, (BODY_INDEX)-1, 157, NULL},
	{10, (BODY_INDEX)-1, 10, gen_type2_11},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_11},
	{14, (BODY_INDEX)-1, 0, gen_type4_11},
	{15, (BODY_INDEX)-1, 10, gen_type5_11},
	{16, (BODY_INDEX)-1, 10, gen_type6_11},
	{17, (BODY_INDEX)-1, 0, gen_type7_11},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 11, gen_type8_11},
	{21, (BODY_INDEX)-1, 170, gen_type9_11},
	{22, (BODY_INDEX)-1, 170, gen_type10_11},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 10, gen_type11_11},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 10, NULL},
	{29, (BODY_INDEX)-1, 160, NULL},
	{30, (BODY_INDEX)-1, 10, gen_type12_11},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{395, (BODY_INDEX)-1, 154, NULL},
	{396, (BODY_INDEX)-1, 170, gen_type13_11},
	{397, (BODY_INDEX)-1, 157, NULL},
	{398, (BODY_INDEX)-1, 157, NULL},
	{399, (BODY_INDEX)-1, 157, NULL},
	{400, (BODY_INDEX)-1, 154, NULL},
	{401, (BODY_INDEX)-1, 170, gen_type14_11},
};

extern void Init11(void);
void Init11(void)
{
	IDSC(desc_11, 0, 10);
	IDSC(desc_11 + 1, 2, 10);
	IDSC(desc_11 + 34, 37, 10);
}


#ifdef __cplusplus
}
#endif
