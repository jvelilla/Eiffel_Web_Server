/*
 * Class FINITE [NATURAL_32]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_444 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type1_444 [] = {0xFF11,180,0xFF12,443,133,0xFFFF};
static EIF_TYPE_INDEX gen_type2_444 [] = {0xFF11,443,133,0xFFFF};
static EIF_TYPE_INDEX gen_type3_444 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_444 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_444 [] = {0xFF11,443,133,0xFFFF};
static EIF_TYPE_INDEX gen_type6_444 [] = {0xFF11,443,133,0xFFFF};
static EIF_TYPE_INDEX gen_type7_444 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_444 [] = {0xFF11,11,0xFFFF};
static EIF_TYPE_INDEX gen_type9_444 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type10_444 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type11_444 [] = {0xFF11,10,0xFFFF};
static EIF_TYPE_INDEX gen_type12_444 [] = {443,133,0xFFFF};
static EIF_TYPE_INDEX gen_type13_444 [] = {0xFF11,443,133,0xFFFF};
static EIF_TYPE_INDEX gen_type14_444 [] = {0xFF11,435,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type15_444 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_444[] = {
	{(BODY_INDEX) 1486, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 170, gen_type0_444},
	{1, (BODY_INDEX)-1, 180, gen_type1_444},
	{2, (BODY_INDEX)-1, 157, NULL},
	{3, (BODY_INDEX)-1, 157, NULL},
	{4, (BODY_INDEX)-1, 157, NULL},
	{5, (BODY_INDEX)-1, 157, NULL},
	{6, (BODY_INDEX)-1, 157, NULL},
	{7, (BODY_INDEX)-1, 157, NULL},
	{8, (BODY_INDEX)-1, 157, NULL},
	{9, (BODY_INDEX)-1, 157, NULL},
	{10, (BODY_INDEX)-1, 443, gen_type2_444},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_444},
	{14, (BODY_INDEX)-1, 0, gen_type4_444},
	{15, (BODY_INDEX)-1, 443, gen_type5_444},
	{16, (BODY_INDEX)-1, 443, gen_type6_444},
	{17, (BODY_INDEX)-1, 0, gen_type7_444},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 11, gen_type8_444},
	{21, (BODY_INDEX)-1, 170, gen_type9_444},
	{22, (BODY_INDEX)-1, 170, gen_type10_444},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 10, gen_type11_444},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 443, gen_type12_444},
	{29, (BODY_INDEX)-1, 160, NULL},
	{30, (BODY_INDEX)-1, 443, gen_type13_444},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 157, NULL},
	{1487, (BODY_INDEX)-1, 157, NULL},
	{1197, (BODY_INDEX)-1, 157, NULL},
	{1198, 0, 157, NULL},
	{1199, (BODY_INDEX)-1, 157, NULL},
	{1200, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1201, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 435, gen_type14_444},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type15_444},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 121, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 157, NULL},
};

extern void Init444(void);
void Init444(void)
{
	IDSC(desc_444, 0, 443);
	IDSC(desc_444 + 1, 2, 443);
	IDSC(desc_444 + 34, 187, 443);
	IDSC(desc_444 + 43, 185, 443);
	IDSC(desc_444 + 44, 210, 443);
}


#ifdef __cplusplus
}
#endif
