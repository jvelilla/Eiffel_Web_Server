/*
 * Class WGI_NINO_CONNECTOR
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_85 [] = {454,84,0xFFFF};
static EIF_TYPE_INDEX gen_type1_85 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_85 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_85 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_85 [] = {493,0xFFF9,1,333,83,0xFFFF};
static EIF_TYPE_INDEX gen_type5_85 [] = {493,0xFFF9,1,333,83,0xFFFF};


static struct desc_info desc_85[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 354, NULL},
	{1, (BODY_INDEX)-1, 454, gen_type0_85},
	{2, (BODY_INDEX)-1, 341, NULL},
	{3, (BODY_INDEX)-1, 341, NULL},
	{4, (BODY_INDEX)-1, 341, NULL},
	{5, (BODY_INDEX)-1, 341, NULL},
	{6, (BODY_INDEX)-1, 341, NULL},
	{7, (BODY_INDEX)-1, 341, NULL},
	{8, (BODY_INDEX)-1, 341, NULL},
	{9, (BODY_INDEX)-1, 341, NULL},
	{10, (BODY_INDEX)-1, 84, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_85},
	{14, (BODY_INDEX)-1, 0, gen_type2_85},
	{15, (BODY_INDEX)-1, 84, NULL},
	{16, (BODY_INDEX)-1, 84, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_85},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 40, NULL},
	{21, (BODY_INDEX)-1, 354, NULL},
	{22, (BODY_INDEX)-1, 354, NULL},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 39, NULL},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 84, NULL},
	{29, (BODY_INDEX)-1, 344, NULL},
	{30, (BODY_INDEX)-1, 84, NULL},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1451, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1452, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1455, 0, 78, NULL},
	{1456, 8, 8, NULL},
	{1457, (BODY_INDEX)-1, 9, NULL},
	{1458, 16, 350, NULL},
	{1459, 40, 341, NULL},
	{1460, 44, 395, NULL},
	{1461, 24, 493, gen_type4_85},
	{1462, 32, 493, gen_type5_85},
	{1463, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1447, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1448, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1449, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1450, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1453, (BODY_INDEX)-1, 354, NULL},
	{1454, (BODY_INDEX)-1, 354, NULL},
};

extern void Init85(void);
void Init85(void)
{
	IDSC(desc_85, 0, 84);
	IDSC(desc_85 + 1, 4, 84);
	IDSC(desc_85 + 34, 290, 84);
	IDSC(desc_85 + 49, 147, 84);
}


#ifdef __cplusplus
}
#endif
