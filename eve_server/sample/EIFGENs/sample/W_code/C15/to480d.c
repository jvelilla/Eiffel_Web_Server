/*
 * Class TO_SPECIAL [CHARACTER_8]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_480 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type1_480 [] = {0xFF11,180,0xFF12,479,151,0xFFFF};
static EIF_TYPE_INDEX gen_type2_480 [] = {0xFF11,479,151,0xFFFF};
static EIF_TYPE_INDEX gen_type3_480 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_480 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_480 [] = {0xFF11,479,151,0xFFFF};
static EIF_TYPE_INDEX gen_type6_480 [] = {0xFF11,479,151,0xFFFF};
static EIF_TYPE_INDEX gen_type7_480 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_480 [] = {0xFF11,11,0xFFFF};
static EIF_TYPE_INDEX gen_type9_480 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type10_480 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type11_480 [] = {0xFF11,10,0xFFFF};
static EIF_TYPE_INDEX gen_type12_480 [] = {479,151,0xFFFF};
static EIF_TYPE_INDEX gen_type13_480 [] = {0xFF11,479,151,0xFFFF};
static EIF_TYPE_INDEX gen_type14_480 [] = {0xFF11,480,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type15_480 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type16_480 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type17_480 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_480[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 170, gen_type0_480},
	{1, (BODY_INDEX)-1, 180, gen_type1_480},
	{2, (BODY_INDEX)-1, 154, NULL},
	{3, (BODY_INDEX)-1, 154, NULL},
	{4, (BODY_INDEX)-1, 154, NULL},
	{5, (BODY_INDEX)-1, 154, NULL},
	{6, (BODY_INDEX)-1, 154, NULL},
	{7, (BODY_INDEX)-1, 154, NULL},
	{8, (BODY_INDEX)-1, 154, NULL},
	{9, (BODY_INDEX)-1, 154, NULL},
	{10, (BODY_INDEX)-1, 479, gen_type2_480},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_480},
	{14, (BODY_INDEX)-1, 0, gen_type4_480},
	{15, (BODY_INDEX)-1, 479, gen_type5_480},
	{16, (BODY_INDEX)-1, 479, gen_type6_480},
	{17, (BODY_INDEX)-1, 0, gen_type7_480},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 11, gen_type8_480},
	{21, (BODY_INDEX)-1, 170, gen_type9_480},
	{22, (BODY_INDEX)-1, 170, gen_type10_480},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 10, gen_type11_480},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 479, gen_type12_480},
	{29, (BODY_INDEX)-1, 160, NULL},
	{30, (BODY_INDEX)-1, 479, gen_type13_480},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{2415, 0, 480, gen_type14_480},
	{2416, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{2417, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{2418, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type15_480},
	{2419, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type16_480},
	{2420, (BODY_INDEX)-1, 154, NULL},
	{2421, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{2422, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type17_480},
};

extern void Init480(void);
void Init480(void)
{
	IDSC(desc_480, 0, 479);
	IDSC(desc_480 + 1, 2, 479);
	IDSC(desc_480 + 34, 48, 479);
}


#ifdef __cplusplus
}
#endif
