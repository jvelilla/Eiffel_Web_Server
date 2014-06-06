/*
 * Class WGI_NINO_CONNECTOR
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_83 [] = {450,82,0xFFFF};
static EIF_TYPE_INDEX gen_type1_83 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_83 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_83 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_83 [] = {489,0xFFF9,1,329,81,0xFFFF};
static EIF_TYPE_INDEX gen_type5_83 [] = {489,0xFFF9,1,329,81,0xFFFF};


static struct desc_info desc_83[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 350, NULL},
	{1, (BODY_INDEX)-1, 450, gen_type0_83},
	{2, (BODY_INDEX)-1, 337, NULL},
	{3, (BODY_INDEX)-1, 337, NULL},
	{4, (BODY_INDEX)-1, 337, NULL},
	{5, (BODY_INDEX)-1, 337, NULL},
	{6, (BODY_INDEX)-1, 337, NULL},
	{7, (BODY_INDEX)-1, 337, NULL},
	{8, (BODY_INDEX)-1, 337, NULL},
	{9, (BODY_INDEX)-1, 337, NULL},
	{10, (BODY_INDEX)-1, 82, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_83},
	{14, (BODY_INDEX)-1, 0, gen_type2_83},
	{15, (BODY_INDEX)-1, 82, NULL},
	{16, (BODY_INDEX)-1, 82, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_83},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 38, NULL},
	{21, (BODY_INDEX)-1, 350, NULL},
	{22, (BODY_INDEX)-1, 350, NULL},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 37, NULL},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 82, NULL},
	{29, (BODY_INDEX)-1, 340, NULL},
	{30, (BODY_INDEX)-1, 82, NULL},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1434, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1435, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1438, 0, 76, NULL},
	{1439, 8, 8, NULL},
	{1440, (BODY_INDEX)-1, 9, NULL},
	{1441, 16, 346, NULL},
	{1442, 40, 337, NULL},
	{1443, 44, 391, NULL},
	{1444, 24, 489, gen_type4_83},
	{1428, 32, 489, gen_type5_83},
	{1429, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1430, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1431, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1432, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1433, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1436, (BODY_INDEX)-1, 350, NULL},
	{1437, (BODY_INDEX)-1, 350, NULL},
};

extern void Init83(void);
void Init83(void)
{
	IDSC(desc_83, 0, 82);
	IDSC(desc_83 + 1, 4, 82);
	IDSC(desc_83 + 34, 288, 82);
	IDSC(desc_83 + 49, 147, 82);
}


#ifdef __cplusplus
}
#endif
