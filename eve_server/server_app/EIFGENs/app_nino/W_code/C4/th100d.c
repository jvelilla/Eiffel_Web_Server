/*
 * Class THREAD
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_100 [] = {450,99,0xFFFF};
static EIF_TYPE_INDEX gen_type1_100 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_100 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_100 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_100 [] = {787,337,0xFFFF};


static struct desc_info desc_100[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 350, NULL},
	{1, (BODY_INDEX)-1, 450, gen_type0_100},
	{2, (BODY_INDEX)-1, 337, NULL},
	{3, (BODY_INDEX)-1, 337, NULL},
	{4, (BODY_INDEX)-1, 337, NULL},
	{5, (BODY_INDEX)-1, 337, NULL},
	{6, (BODY_INDEX)-1, 337, NULL},
	{7, (BODY_INDEX)-1, 337, NULL},
	{8, (BODY_INDEX)-1, 337, NULL},
	{9, (BODY_INDEX)-1, 337, NULL},
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
	{20, (BODY_INDEX)-1, 38, NULL},
	{21, (BODY_INDEX)-1, 350, NULL},
	{22, (BODY_INDEX)-1, 350, NULL},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 37, NULL},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 99, NULL},
	{29, (BODY_INDEX)-1, 340, NULL},
	{30, (BODY_INDEX)-1, 99, NULL},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1617, (BODY_INDEX)-1, 340, NULL},
	{1618, (BODY_INDEX)-1, 340, NULL},
	{1619, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1620, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1628, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1629, 16, 340, NULL},
	{1630, 8, 337, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1631, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1632, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1633, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1634, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1635, (BODY_INDEX)-1, 337, NULL},
	{1636, (BODY_INDEX)-1, 337, NULL},
	{1637, (BODY_INDEX)-1, 337, NULL},
	{1638, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1639, (BODY_INDEX)-1, 337, NULL},
	{1621, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1622, 0, 305, NULL},
	{1623, (BODY_INDEX)-1, 787, gen_type4_100},
	{1624, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1625, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1626, (BODY_INDEX)-1, 337, NULL},
	{1627, (BODY_INDEX)-1, 340, NULL},
};

extern void Init100(void);
void Init100(void)
{
	IDSC(desc_100, 0, 99);
	IDSC(desc_100 + 1, 4, 99);
	IDSC(desc_100 + 34, 455, 99);
	IDSC(desc_100 + 36, 463, 99);
	IDSC(desc_100 + 38, 410, 99);
}


#ifdef __cplusplus
}
#endif
