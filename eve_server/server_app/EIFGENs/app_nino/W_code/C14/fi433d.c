/*
 * Class FIND_SEPARATOR_FACILITY
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_433 [] = {446,432,0xFFFF};
static EIF_TYPE_INDEX gen_type1_433 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_433 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_433 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_433 [] = {0xFFF9,2,325,346,346,0xFFFF};


static struct desc_info desc_433[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 346, NULL},
	{1, (BODY_INDEX)-1, 446, gen_type0_433},
	{2, (BODY_INDEX)-1, 333, NULL},
	{3, (BODY_INDEX)-1, 333, NULL},
	{4, (BODY_INDEX)-1, 333, NULL},
	{5, (BODY_INDEX)-1, 333, NULL},
	{6, (BODY_INDEX)-1, 333, NULL},
	{7, (BODY_INDEX)-1, 333, NULL},
	{8, (BODY_INDEX)-1, 333, NULL},
	{9, (BODY_INDEX)-1, 333, NULL},
	{10, (BODY_INDEX)-1, 432, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_433},
	{14, (BODY_INDEX)-1, 0, gen_type2_433},
	{15, (BODY_INDEX)-1, 432, NULL},
	{16, (BODY_INDEX)-1, 432, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_433},
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
	{28, (BODY_INDEX)-1, 432, NULL},
	{29, (BODY_INDEX)-1, 336, NULL},
	{30, (BODY_INDEX)-1, 432, NULL},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{934, (BODY_INDEX)-1, 330, NULL},
	{935, (BODY_INDEX)-1, 387, NULL},
	{930, (BODY_INDEX)-1, 387, NULL},
	{931, (BODY_INDEX)-1, 387, NULL},
	{932, (BODY_INDEX)-1, 387, NULL},
	{933, (BODY_INDEX)-1, 387, NULL},
	{1521, (BODY_INDEX)-1, 333, NULL},
	{1522, (BODY_INDEX)-1, 333, NULL},
	{1523, (BODY_INDEX)-1, 333, NULL},
	{1524, (BODY_INDEX)-1, 333, NULL},
	{1525, (BODY_INDEX)-1, 333, NULL},
	{1526, (BODY_INDEX)-1, 333, NULL},
	{1527, (BODY_INDEX)-1, 333, NULL},
	{1528, (BODY_INDEX)-1, 333, NULL},
	{1529, (BODY_INDEX)-1, 333, NULL},
	{1530, (BODY_INDEX)-1, 333, NULL},
	{1531, (BODY_INDEX)-1, 333, NULL},
	{1532, (BODY_INDEX)-1, 333, NULL},
	{1533, (BODY_INDEX)-1, 333, NULL},
	{1534, (BODY_INDEX)-1, 333, NULL},
	{1535, (BODY_INDEX)-1, 333, NULL},
	{1536, (BODY_INDEX)-1, 333, NULL},
	{1537, (BODY_INDEX)-1, 333, NULL},
	{1538, (BODY_INDEX)-1, 333, NULL},
	{1539, (BODY_INDEX)-1, 333, NULL},
	{1514, (BODY_INDEX)-1, 333, NULL},
	{1515, (BODY_INDEX)-1, 333, NULL},
	{1516, (BODY_INDEX)-1, 333, NULL},
	{1517, (BODY_INDEX)-1, 333, NULL},
	{1518, (BODY_INDEX)-1, 333, NULL},
	{1519, (BODY_INDEX)-1, 333, NULL},
	{1520, (BODY_INDEX)-1, 333, NULL},
	{15447, (BODY_INDEX)-1, 346, NULL},
	{15448, (BODY_INDEX)-1, 387, NULL},
	{15449, (BODY_INDEX)-1, 325, gen_type4_433},
	{15450, (BODY_INDEX)-1, 333, NULL},
};

extern void Init433(void);
void Init433(void)
{
	IDSC(desc_433, 0, 432);
	IDSC(desc_433 + 1, 4, 432);
	IDSC(desc_433 + 34, 467, 432);
	IDSC(desc_433 + 40, 465, 432);
	IDSC(desc_433 + 66, 425, 432);
}


#ifdef __cplusplus
}
#endif