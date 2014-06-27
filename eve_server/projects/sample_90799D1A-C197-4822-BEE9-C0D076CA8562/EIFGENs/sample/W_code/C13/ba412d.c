/*
 * Class BAG [CHARACTER_8]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_412 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type1_412 [] = {0xFF11,180,0xFF12,411,154,0xFFFF};
static EIF_TYPE_INDEX gen_type2_412 [] = {0xFF11,411,154,0xFFFF};
static EIF_TYPE_INDEX gen_type3_412 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_412 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_412 [] = {0xFF11,411,154,0xFFFF};
static EIF_TYPE_INDEX gen_type6_412 [] = {0xFF11,411,154,0xFFFF};
static EIF_TYPE_INDEX gen_type7_412 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_412 [] = {0xFF11,11,0xFFFF};
static EIF_TYPE_INDEX gen_type9_412 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type10_412 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type11_412 [] = {0xFF11,10,0xFFFF};
static EIF_TYPE_INDEX gen_type12_412 [] = {411,154,0xFFFF};
static EIF_TYPE_INDEX gen_type13_412 [] = {0xFF11,411,154,0xFFFF};
static EIF_TYPE_INDEX gen_type14_412 [] = {0xFF11,407,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type15_412 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_412[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 170, gen_type0_412},
	{1, (BODY_INDEX)-1, 180, gen_type1_412},
	{2, (BODY_INDEX)-1, 157, NULL},
	{3, (BODY_INDEX)-1, 157, NULL},
	{4, (BODY_INDEX)-1, 157, NULL},
	{5, (BODY_INDEX)-1, 157, NULL},
	{6, (BODY_INDEX)-1, 157, NULL},
	{7, (BODY_INDEX)-1, 157, NULL},
	{8, (BODY_INDEX)-1, 157, NULL},
	{9, (BODY_INDEX)-1, 157, NULL},
	{10, (BODY_INDEX)-1, 411, gen_type2_412},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_412},
	{14, (BODY_INDEX)-1, 0, gen_type4_412},
	{15, (BODY_INDEX)-1, 411, gen_type5_412},
	{16, (BODY_INDEX)-1, 411, gen_type6_412},
	{17, (BODY_INDEX)-1, 0, gen_type7_412},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 11, gen_type8_412},
	{21, (BODY_INDEX)-1, 170, gen_type9_412},
	{22, (BODY_INDEX)-1, 170, gen_type10_412},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 10, gen_type11_412},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 411, gen_type12_412},
	{29, (BODY_INDEX)-1, 160, NULL},
	{30, (BODY_INDEX)-1, 411, gen_type13_412},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 157, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 157, NULL},
	{1192, (BODY_INDEX)-1, 157, NULL},
	{1193, 0, 157, NULL},
	{1194, (BODY_INDEX)-1, 157, NULL},
	{1195, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1196, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 407, gen_type14_412},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type15_412},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 157, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 157, NULL},
	{1613, (BODY_INDEX)-1, 157, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1614, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1615, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 121, NULL},
};

extern void Init412(void);
void Init412(void)
{
	IDSC(desc_412, 0, 411);
	IDSC(desc_412 + 1, 2, 411);
	IDSC(desc_412 + 34, 187, 411);
	IDSC(desc_412 + 43, 181, 411);
	IDSC(desc_412 + 52, 188, 411);
}


#ifdef __cplusplus
}
#endif
