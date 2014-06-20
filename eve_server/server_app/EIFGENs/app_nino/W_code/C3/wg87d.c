/*
 * Class WGI_NINO_CONNECTOR
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_87 [] = {459,86,0xFFFF};
static EIF_TYPE_INDEX gen_type1_87 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_87 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_87 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_87 [] = {496,0xFFF9,1,338,85,0xFFFF};
static EIF_TYPE_INDEX gen_type5_87 [] = {496,0xFFF9,1,338,85,0xFFFF};


static struct desc_info desc_87[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 359, NULL},
	{1, (BODY_INDEX)-1, 459, gen_type0_87},
	{2, (BODY_INDEX)-1, 346, NULL},
	{3, (BODY_INDEX)-1, 346, NULL},
	{4, (BODY_INDEX)-1, 346, NULL},
	{5, (BODY_INDEX)-1, 346, NULL},
	{6, (BODY_INDEX)-1, 346, NULL},
	{7, (BODY_INDEX)-1, 346, NULL},
	{8, (BODY_INDEX)-1, 346, NULL},
	{9, (BODY_INDEX)-1, 346, NULL},
	{10, (BODY_INDEX)-1, 86, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_87},
	{14, (BODY_INDEX)-1, 0, gen_type2_87},
	{15, (BODY_INDEX)-1, 86, NULL},
	{16, (BODY_INDEX)-1, 86, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_87},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 42, NULL},
	{21, (BODY_INDEX)-1, 359, NULL},
	{22, (BODY_INDEX)-1, 359, NULL},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 41, NULL},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 86, NULL},
	{29, (BODY_INDEX)-1, 349, NULL},
	{30, (BODY_INDEX)-1, 86, NULL},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1477, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1478, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1481, 0, 80, NULL},
	{1465, 8, 8, NULL},
	{1466, (BODY_INDEX)-1, 9, NULL},
	{1467, 16, 355, NULL},
	{1468, 40, 346, NULL},
	{1469, 44, 400, NULL},
	{1470, 24, 496, gen_type4_87},
	{1471, 32, 496, gen_type5_87},
	{1472, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1473, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1474, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1475, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1476, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1479, (BODY_INDEX)-1, 359, NULL},
	{1480, (BODY_INDEX)-1, 359, NULL},
};

extern void Init87(void);
void Init87(void)
{
	IDSC(desc_87, 0, 86);
	IDSC(desc_87 + 1, 4, 86);
	IDSC(desc_87 + 34, 294, 86);
	IDSC(desc_87 + 49, 147, 86);
}


#ifdef __cplusplus
}
#endif
