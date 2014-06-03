/*
 * Class WGI_NINO_CONNECTOR
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_82 [] = {446,81,0xFFFF};
static EIF_TYPE_INDEX gen_type1_82 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_82 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_82 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_82 [] = {485,0xFFF9,1,325,80,0xFFFF};
static EIF_TYPE_INDEX gen_type5_82 [] = {485,0xFFF9,1,325,80,0xFFFF};


static struct desc_info desc_82[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 346, NULL},
	{1, (BODY_INDEX)-1, 446, gen_type0_82},
	{2, (BODY_INDEX)-1, 333, NULL},
	{3, (BODY_INDEX)-1, 333, NULL},
	{4, (BODY_INDEX)-1, 333, NULL},
	{5, (BODY_INDEX)-1, 333, NULL},
	{6, (BODY_INDEX)-1, 333, NULL},
	{7, (BODY_INDEX)-1, 333, NULL},
	{8, (BODY_INDEX)-1, 333, NULL},
	{9, (BODY_INDEX)-1, 333, NULL},
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
	{20, (BODY_INDEX)-1, 37, NULL},
	{21, (BODY_INDEX)-1, 346, NULL},
	{22, (BODY_INDEX)-1, 346, NULL},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 36, NULL},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 81, NULL},
	{29, (BODY_INDEX)-1, 336, NULL},
	{30, (BODY_INDEX)-1, 81, NULL},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1420, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1421, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1424, 0, 75, NULL},
	{1425, 8, 9, NULL},
	{1426, (BODY_INDEX)-1, 8, NULL},
	{1427, 16, 342, NULL},
	{1428, 40, 333, NULL},
	{1429, 44, 387, NULL},
	{1430, 24, 485, gen_type4_82},
	{1431, 32, 485, gen_type5_82},
	{1432, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1433, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1434, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1435, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1436, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1422, (BODY_INDEX)-1, 346, NULL},
	{1423, (BODY_INDEX)-1, 346, NULL},
};

extern void Init82(void);
void Init82(void)
{
	IDSC(desc_82, 0, 81);
	IDSC(desc_82 + 1, 4, 81);
	IDSC(desc_82 + 34, 287, 81);
	IDSC(desc_82 + 49, 147, 81);
}


#ifdef __cplusplus
}
#endif
