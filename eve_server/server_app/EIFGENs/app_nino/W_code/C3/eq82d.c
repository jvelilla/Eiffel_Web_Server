/*
 * Class EQA_TEST_SET
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_82 [] = {441,81,0xFFFF};
static EIF_TYPE_INDEX gen_type1_82 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_82 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_82 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_82 [] = {26,0xFFFF};
static EIF_TYPE_INDEX gen_type5_82 [] = {24,0xFFFF};
static EIF_TYPE_INDEX gen_type6_82 [] = {26,0xFFFF};


static struct desc_info desc_82[] = {
	{(BODY_INDEX) 1428, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 341, NULL},
	{1, (BODY_INDEX)-1, 441, gen_type0_82},
	{2, (BODY_INDEX)-1, 328, NULL},
	{3, (BODY_INDEX)-1, 328, NULL},
	{4, (BODY_INDEX)-1, 328, NULL},
	{5, (BODY_INDEX)-1, 328, NULL},
	{6, (BODY_INDEX)-1, 328, NULL},
	{7, (BODY_INDEX)-1, 328, NULL},
	{8, (BODY_INDEX)-1, 328, NULL},
	{9, (BODY_INDEX)-1, 328, NULL},
	{10, (BODY_INDEX)-1, 81, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_82},
	{14, (BODY_INDEX)-1, 0, gen_type2_82},
	{15, (BODY_INDEX)-1, 81, NULL},
	{16, (BODY_INDEX)-1, 81, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_82},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 36, NULL},
	{21, (BODY_INDEX)-1, 341, NULL},
	{22, (BODY_INDEX)-1, 341, NULL},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 35, NULL},
	{1429, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 81, NULL},
	{29, (BODY_INDEX)-1, 331, NULL},
	{30, (BODY_INDEX)-1, 81, NULL},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1430, (BODY_INDEX)-1, 26, gen_type4_82},
	{1431, 0, 24, gen_type5_82},
	{1432, 8, 39, NULL},
	{1433, (BODY_INDEX)-1, 336, NULL},
	{1434, (BODY_INDEX)-1, 328, NULL},
	{1435, 24, 328, NULL},
	{1436, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1437, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1438, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1439, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1440, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1441, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1442, 16, 26, gen_type6_82},
	{1443, (BODY_INDEX)-1, 26, NULL},
	{1424, (BODY_INDEX)-1, 24, NULL},
	{1425, (BODY_INDEX)-1, 341, NULL},
	{1426, (BODY_INDEX)-1, 341, NULL},
	{1427, (BODY_INDEX)-1, 341, NULL},
};

extern void Init82(void);
void Init82(void)
{
	IDSC(desc_82, 0, 81);
	IDSC(desc_82 + 1, 4, 81);
	IDSC(desc_82 + 34, 45, 81);
}


#ifdef __cplusplus
}
#endif
