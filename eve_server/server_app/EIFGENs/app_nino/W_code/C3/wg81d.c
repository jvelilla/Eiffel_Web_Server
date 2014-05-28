/*
 * Class WGI_NINO_CONNECTOR
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_81 [] = {441,80,0xFFFF};
static EIF_TYPE_INDEX gen_type1_81 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_81 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_81 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_81 [] = {478,0xFFF9,1,320,79,0xFFFF};
static EIF_TYPE_INDEX gen_type5_81 [] = {478,0xFFF9,1,320,79,0xFFFF};


static struct desc_info desc_81[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 341, NULL},
	{1, (BODY_INDEX)-1, 441, gen_type0_81},
	{2, (BODY_INDEX)-1, 328, NULL},
	{3, (BODY_INDEX)-1, 328, NULL},
	{4, (BODY_INDEX)-1, 328, NULL},
	{5, (BODY_INDEX)-1, 328, NULL},
	{6, (BODY_INDEX)-1, 328, NULL},
	{7, (BODY_INDEX)-1, 328, NULL},
	{8, (BODY_INDEX)-1, 328, NULL},
	{9, (BODY_INDEX)-1, 328, NULL},
	{10, (BODY_INDEX)-1, 80, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_81},
	{14, (BODY_INDEX)-1, 0, gen_type2_81},
	{15, (BODY_INDEX)-1, 80, NULL},
	{16, (BODY_INDEX)-1, 80, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_81},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 36, NULL},
	{21, (BODY_INDEX)-1, 341, NULL},
	{22, (BODY_INDEX)-1, 341, NULL},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 35, NULL},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 80, NULL},
	{29, (BODY_INDEX)-1, 331, NULL},
	{30, (BODY_INDEX)-1, 80, NULL},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1423, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1407, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1410, 0, 74, NULL},
	{1411, 8, 9, NULL},
	{1412, (BODY_INDEX)-1, 8, NULL},
	{1413, 16, 337, NULL},
	{1414, 40, 328, NULL},
	{1415, 44, 382, NULL},
	{1416, 24, 478, gen_type4_81},
	{1417, 32, 478, gen_type5_81},
	{1418, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1419, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1420, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1421, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1422, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1408, (BODY_INDEX)-1, 341, NULL},
	{1409, (BODY_INDEX)-1, 341, NULL},
};

extern void Init81(void);
void Init81(void)
{
	IDSC(desc_81, 0, 80);
	IDSC(desc_81 + 1, 4, 80);
	IDSC(desc_81 + 34, 286, 80);
	IDSC(desc_81 + 49, 147, 80);
}


#ifdef __cplusplus
}
#endif
