/*
 * Class LINEAR [G#1]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_192 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type1_192 [] = {0xFF11,180,0xFF12,191,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type2_192 [] = {0xFF11,191,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type3_192 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_192 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_192 [] = {0xFF11,191,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type6_192 [] = {0xFF11,191,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type7_192 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_192 [] = {0xFF11,11,0xFFFF};
static EIF_TYPE_INDEX gen_type9_192 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type10_192 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type11_192 [] = {0xFF11,10,0xFFFF};
static EIF_TYPE_INDEX gen_type12_192 [] = {191,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type13_192 [] = {0xFF11,191,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type14_192 [] = {0xFF11,191,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type15_192 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type16_192 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type17_192 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_192[] = {
	{(BODY_INDEX) 1280, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 170, gen_type0_192},
	{1, (BODY_INDEX)-1, 180, gen_type1_192},
	{2, (BODY_INDEX)-1, 157, NULL},
	{3, (BODY_INDEX)-1, 157, NULL},
	{4, (BODY_INDEX)-1, 157, NULL},
	{5, (BODY_INDEX)-1, 157, NULL},
	{6, (BODY_INDEX)-1, 157, NULL},
	{7, (BODY_INDEX)-1, 157, NULL},
	{8, (BODY_INDEX)-1, 157, NULL},
	{9, (BODY_INDEX)-1, 157, NULL},
	{10, (BODY_INDEX)-1, 191, gen_type2_192},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_192},
	{14, (BODY_INDEX)-1, 0, gen_type4_192},
	{15, (BODY_INDEX)-1, 191, gen_type5_192},
	{16, (BODY_INDEX)-1, 191, gen_type6_192},
	{17, (BODY_INDEX)-1, 0, gen_type7_192},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 11, gen_type8_192},
	{21, (BODY_INDEX)-1, 170, gen_type9_192},
	{22, (BODY_INDEX)-1, 170, gen_type10_192},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 10, gen_type11_192},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 191, gen_type12_192},
	{29, (BODY_INDEX)-1, 160, NULL},
	{30, (BODY_INDEX)-1, 191, gen_type13_192},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1277, (BODY_INDEX)-1, 157, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 157, NULL},
	{1157, (BODY_INDEX)-1, 157, NULL},
	{1158, 0, 157, NULL},
	{1159, (BODY_INDEX)-1, 157, NULL},
	{1160, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1161, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1289, (BODY_INDEX)-1, 191, gen_type14_192},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type15_192},
	{1278, (BODY_INDEX)-1, 121, NULL},
	{1279, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 121, NULL},
	{1281, (BODY_INDEX)-1, 121, NULL},
	{1282, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type16_192},
	{1283, (BODY_INDEX)-1, 157, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 157, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type17_192},
	{1284, (BODY_INDEX)-1, 157, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1285, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1286, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1287, (BODY_INDEX)-1, 157, NULL},
	{1288, (BODY_INDEX)-1, 157, NULL},
};

extern void Init192(void);
void Init192(void)
{
	IDSC(desc_192, 0, 191);
	IDSC(desc_192 + 1, 2, 191);
	IDSC(desc_192 + 34, 187, 191);
	IDSC(desc_192 + 43, 45, 191);
	IDSC(desc_192 + 52, 129, 191);
}


#ifdef __cplusplus
}
#endif
