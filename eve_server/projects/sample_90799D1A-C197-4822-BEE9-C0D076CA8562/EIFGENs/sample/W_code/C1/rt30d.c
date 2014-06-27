/*
 * Class RT_EXTENSION_GENERAL
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_30 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type1_30 [] = {0xFF11,180,0xFF12,29,0xFFFF};
static EIF_TYPE_INDEX gen_type2_30 [] = {0xFF11,29,0xFFFF};
static EIF_TYPE_INDEX gen_type3_30 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_30 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_30 [] = {0xFF11,29,0xFFFF};
static EIF_TYPE_INDEX gen_type6_30 [] = {0xFF11,29,0xFFFF};
static EIF_TYPE_INDEX gen_type7_30 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_30 [] = {0xFF11,11,0xFFFF};
static EIF_TYPE_INDEX gen_type9_30 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type10_30 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type11_30 [] = {0xFF11,10,0xFFFF};
static EIF_TYPE_INDEX gen_type12_30 [] = {0xFF11,29,0xFFFF};


static struct desc_info desc_30[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 170, gen_type0_30},
	{1, (BODY_INDEX)-1, 180, gen_type1_30},
	{2, (BODY_INDEX)-1, 157, NULL},
	{3, (BODY_INDEX)-1, 157, NULL},
	{4, (BODY_INDEX)-1, 157, NULL},
	{5, (BODY_INDEX)-1, 157, NULL},
	{6, (BODY_INDEX)-1, 157, NULL},
	{7, (BODY_INDEX)-1, 157, NULL},
	{8, (BODY_INDEX)-1, 157, NULL},
	{9, (BODY_INDEX)-1, 157, NULL},
	{10, (BODY_INDEX)-1, 29, gen_type2_30},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_30},
	{14, (BODY_INDEX)-1, 0, gen_type4_30},
	{15, (BODY_INDEX)-1, 29, gen_type5_30},
	{16, (BODY_INDEX)-1, 29, gen_type6_30},
	{17, (BODY_INDEX)-1, 0, gen_type7_30},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 11, gen_type8_30},
	{21, (BODY_INDEX)-1, 170, gen_type9_30},
	{22, (BODY_INDEX)-1, 170, gen_type10_30},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 10, gen_type11_30},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 29, NULL},
	{29, (BODY_INDEX)-1, 160, NULL},
	{30, (BODY_INDEX)-1, 29, gen_type12_30},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{720, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{721, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{722, (BODY_INDEX)-1, 121, NULL},
	{723, (BODY_INDEX)-1, 121, NULL},
	{724, (BODY_INDEX)-1, 121, NULL},
	{725, (BODY_INDEX)-1, 121, NULL},
	{726, (BODY_INDEX)-1, 121, NULL},
	{727, (BODY_INDEX)-1, 121, NULL},
	{728, (BODY_INDEX)-1, 170, NULL},
	{729, (BODY_INDEX)-1, 157, NULL},
	{730, (BODY_INDEX)-1, 157, NULL},
	{731, (BODY_INDEX)-1, 157, NULL},
	{732, (BODY_INDEX)-1, 157, NULL},
	{733, (BODY_INDEX)-1, 0, NULL},
	{734, (BODY_INDEX)-1, 0, NULL},
};

extern void Init30(void);
void Init30(void)
{
	IDSC(desc_30, 0, 29);
	IDSC(desc_30 + 1, 2, 29);
	IDSC(desc_30 + 34, 159, 29);
	IDSC(desc_30 + 36, 79, 29);
}


#ifdef __cplusplus
}
#endif
