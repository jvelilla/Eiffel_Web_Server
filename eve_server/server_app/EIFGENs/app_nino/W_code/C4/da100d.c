/*
 * Class DATE_TIME_MEASUREMENT
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_100 [] = {459,99,0xFFFF};
static EIF_TYPE_INDEX gen_type1_100 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_100 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_100 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_100 [] = {472,359,0xFFFF};
static EIF_TYPE_INDEX gen_type5_100 [] = {472,359,0xFFFF};
static EIF_TYPE_INDEX gen_type6_100 [] = {472,359,0xFFFF};
static EIF_TYPE_INDEX gen_type7_100 [] = {472,359,0xFFFF};
static EIF_TYPE_INDEX gen_type8_100 [] = {518,400,0xFFFF};


static struct desc_info desc_100[] = {
	{(BODY_INDEX) 1641, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 359, NULL},
	{1, (BODY_INDEX)-1, 459, gen_type0_100},
	{2, (BODY_INDEX)-1, 346, NULL},
	{3, (BODY_INDEX)-1, 346, NULL},
	{4, (BODY_INDEX)-1, 346, NULL},
	{5, (BODY_INDEX)-1, 346, NULL},
	{6, (BODY_INDEX)-1, 346, NULL},
	{7, (BODY_INDEX)-1, 346, NULL},
	{8, (BODY_INDEX)-1, 346, NULL},
	{9, (BODY_INDEX)-1, 346, NULL},
	{10, (BODY_INDEX)-1, 99, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_100},
	{14, (BODY_INDEX)-1, 0, gen_type2_100},
	{15, (BODY_INDEX)-1, 99, NULL},
	{16, (BODY_INDEX)-1, 99, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_100},
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
	{28, (BODY_INDEX)-1, 99, NULL},
	{29, (BODY_INDEX)-1, 349, NULL},
	{30, (BODY_INDEX)-1, 99, NULL},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1597, (BODY_INDEX)-1, 400, NULL},
	{1598, (BODY_INDEX)-1, 400, NULL},
	{1599, (BODY_INDEX)-1, 47, NULL},
	{1600, (BODY_INDEX)-1, 359, NULL},
	{1626, (BODY_INDEX)-1, 400, NULL},
	{1627, (BODY_INDEX)-1, 400, NULL},
	{1628, (BODY_INDEX)-1, 400, NULL},
	{1629, (BODY_INDEX)-1, 400, NULL},
	{1630, (BODY_INDEX)-1, 400, NULL},
	{1631, (BODY_INDEX)-1, 400, NULL},
	{1632, (BODY_INDEX)-1, 359, NULL},
	{1633, (BODY_INDEX)-1, 472, gen_type4_100},
	{1634, (BODY_INDEX)-1, 472, gen_type5_100},
	{1635, (BODY_INDEX)-1, 472, gen_type6_100},
	{1636, (BODY_INDEX)-1, 472, gen_type7_100},
	{1637, (BODY_INDEX)-1, 346, NULL},
	{1638, (BODY_INDEX)-1, 346, NULL},
	{1639, (BODY_INDEX)-1, 518, gen_type8_100},
	{1601, (BODY_INDEX)-1, 400, NULL},
	{1602, (BODY_INDEX)-1, 400, NULL},
	{1603, (BODY_INDEX)-1, 400, NULL},
	{1604, (BODY_INDEX)-1, 400, NULL},
	{1605, (BODY_INDEX)-1, 400, NULL},
	{1606, (BODY_INDEX)-1, 359, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 98, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 95, NULL},
	{1642, (BODY_INDEX)-1, 400, NULL},
	{1643, (BODY_INDEX)-1, 400, NULL},
	{1644, (BODY_INDEX)-1, 400, NULL},
	{1645, (BODY_INDEX)-1, 400, NULL},
	{1646, (BODY_INDEX)-1, 400, NULL},
	{1647, (BODY_INDEX)-1, 400, NULL},
	{1648, (BODY_INDEX)-1, 421, NULL},
};

extern void Init100(void);
void Init100(void)
{
	IDSC(desc_100, 0, 99);
	IDSC(desc_100 + 1, 4, 99);
	IDSC(desc_100 + 34, 462, 99);
	IDSC(desc_100 + 38, 412, 99);
	IDSC(desc_100 + 52, 424, 99);
	IDSC(desc_100 + 58, 334, 99);
}


#ifdef __cplusplus
}
#endif