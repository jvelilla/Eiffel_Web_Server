/*
 * Class CONTAINER [REAL_32]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_365 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type1_365 [] = {0xFF11,180,0xFF12,364,145,0xFFFF};
static EIF_TYPE_INDEX gen_type2_365 [] = {0xFF11,364,145,0xFFFF};
static EIF_TYPE_INDEX gen_type3_365 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_365 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_365 [] = {0xFF11,364,145,0xFFFF};
static EIF_TYPE_INDEX gen_type6_365 [] = {0xFF11,364,145,0xFFFF};
static EIF_TYPE_INDEX gen_type7_365 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_365 [] = {0xFF11,11,0xFFFF};
static EIF_TYPE_INDEX gen_type9_365 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type10_365 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type11_365 [] = {0xFF11,10,0xFFFF};
static EIF_TYPE_INDEX gen_type12_365 [] = {364,145,0xFFFF};
static EIF_TYPE_INDEX gen_type13_365 [] = {0xFF11,364,145,0xFFFF};
static EIF_TYPE_INDEX gen_type14_365 [] = {0xFF11,361,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type15_365 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_365[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 170, gen_type0_365},
	{1, (BODY_INDEX)-1, 180, gen_type1_365},
	{2, (BODY_INDEX)-1, 157, NULL},
	{3, (BODY_INDEX)-1, 157, NULL},
	{4, (BODY_INDEX)-1, 157, NULL},
	{5, (BODY_INDEX)-1, 157, NULL},
	{6, (BODY_INDEX)-1, 157, NULL},
	{7, (BODY_INDEX)-1, 157, NULL},
	{8, (BODY_INDEX)-1, 157, NULL},
	{9, (BODY_INDEX)-1, 157, NULL},
	{10, (BODY_INDEX)-1, 364, gen_type2_365},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_365},
	{14, (BODY_INDEX)-1, 0, gen_type4_365},
	{15, (BODY_INDEX)-1, 364, gen_type5_365},
	{16, (BODY_INDEX)-1, 364, gen_type6_365},
	{17, (BODY_INDEX)-1, 0, gen_type7_365},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 11, gen_type8_365},
	{21, (BODY_INDEX)-1, 170, gen_type9_365},
	{22, (BODY_INDEX)-1, 170, gen_type10_365},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 10, gen_type11_365},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 364, gen_type12_365},
	{29, (BODY_INDEX)-1, 160, NULL},
	{30, (BODY_INDEX)-1, 364, gen_type13_365},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 157, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 157, NULL},
	{1187, (BODY_INDEX)-1, 157, NULL},
	{1188, 0, 157, NULL},
	{1189, (BODY_INDEX)-1, 157, NULL},
	{1190, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1191, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 361, gen_type14_365},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type15_365},
};

extern void Init365(void);
void Init365(void)
{
	IDSC(desc_365, 0, 364);
	IDSC(desc_365 + 1, 2, 364);
	IDSC(desc_365 + 34, 187, 364);
}


#ifdef __cplusplus
}
#endif
