/*
 * Class FINITE [REAL_32]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_370 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type1_370 [] = {0xFF11,180,0xFF12,369,145,0xFFFF};
static EIF_TYPE_INDEX gen_type2_370 [] = {0xFF11,369,145,0xFFFF};
static EIF_TYPE_INDEX gen_type3_370 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_370 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_370 [] = {0xFF11,369,145,0xFFFF};
static EIF_TYPE_INDEX gen_type6_370 [] = {0xFF11,369,145,0xFFFF};
static EIF_TYPE_INDEX gen_type7_370 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_370 [] = {0xFF11,11,0xFFFF};
static EIF_TYPE_INDEX gen_type9_370 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type10_370 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type11_370 [] = {0xFF11,10,0xFFFF};
static EIF_TYPE_INDEX gen_type12_370 [] = {369,145,0xFFFF};
static EIF_TYPE_INDEX gen_type13_370 [] = {0xFF11,369,145,0xFFFF};
static EIF_TYPE_INDEX gen_type14_370 [] = {0xFF11,361,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type15_370 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_370[] = {
	{(BODY_INDEX) 1482, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 170, gen_type0_370},
	{1, (BODY_INDEX)-1, 180, gen_type1_370},
	{2, (BODY_INDEX)-1, 157, NULL},
	{3, (BODY_INDEX)-1, 157, NULL},
	{4, (BODY_INDEX)-1, 157, NULL},
	{5, (BODY_INDEX)-1, 157, NULL},
	{6, (BODY_INDEX)-1, 157, NULL},
	{7, (BODY_INDEX)-1, 157, NULL},
	{8, (BODY_INDEX)-1, 157, NULL},
	{9, (BODY_INDEX)-1, 157, NULL},
	{10, (BODY_INDEX)-1, 369, gen_type2_370},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_370},
	{14, (BODY_INDEX)-1, 0, gen_type4_370},
	{15, (BODY_INDEX)-1, 369, gen_type5_370},
	{16, (BODY_INDEX)-1, 369, gen_type6_370},
	{17, (BODY_INDEX)-1, 0, gen_type7_370},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 11, gen_type8_370},
	{21, (BODY_INDEX)-1, 170, gen_type9_370},
	{22, (BODY_INDEX)-1, 170, gen_type10_370},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 10, gen_type11_370},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 369, gen_type12_370},
	{29, (BODY_INDEX)-1, 160, NULL},
	{30, (BODY_INDEX)-1, 369, gen_type13_370},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 157, NULL},
	{1483, (BODY_INDEX)-1, 157, NULL},
	{1187, (BODY_INDEX)-1, 157, NULL},
	{1188, 0, 157, NULL},
	{1189, (BODY_INDEX)-1, 157, NULL},
	{1190, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1191, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 361, gen_type14_370},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type15_370},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 121, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 157, NULL},
};

extern void Init370(void);
void Init370(void)
{
	IDSC(desc_370, 0, 369);
	IDSC(desc_370 + 1, 2, 369);
	IDSC(desc_370 + 34, 187, 369);
	IDSC(desc_370 + 43, 185, 369);
	IDSC(desc_370 + 44, 210, 369);
}


#ifdef __cplusplus
}
#endif
