/*
 * Class WGI_NINO_RESPONSE_STREAM
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_113 [] = {446,112,0xFFFF};
static EIF_TYPE_INDEX gen_type1_113 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_113 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_113 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_113 [] = {458,0,0xFFF9,0,325,0xFFFF};


static struct desc_info desc_113[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 346, NULL},
	{1, (BODY_INDEX)-1, 446, gen_type0_113},
	{2, (BODY_INDEX)-1, 333, NULL},
	{3, (BODY_INDEX)-1, 333, NULL},
	{4, (BODY_INDEX)-1, 333, NULL},
	{5, (BODY_INDEX)-1, 333, NULL},
	{6, (BODY_INDEX)-1, 333, NULL},
	{7, (BODY_INDEX)-1, 333, NULL},
	{8, (BODY_INDEX)-1, 333, NULL},
	{9, (BODY_INDEX)-1, 333, NULL},
	{10, (BODY_INDEX)-1, 112, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_113},
	{14, (BODY_INDEX)-1, 0, gen_type2_113},
	{15, (BODY_INDEX)-1, 112, NULL},
	{16, (BODY_INDEX)-1, 112, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_113},
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
	{28, (BODY_INDEX)-1, 112, NULL},
	{29, (BODY_INDEX)-1, 336, NULL},
	{30, (BODY_INDEX)-1, 112, NULL},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1774, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1778, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1775, 0, 458, gen_type4_113},
	{1776, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1779, 34, 333, NULL},
	{1780, 33, 333, NULL},
	{1781, 32, 333, NULL},
	{1782, (BODY_INDEX)-1, 333, NULL},
	{1783, (BODY_INDEX)-1, 333, NULL},
	{1784, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1785, 36, 387, NULL},
	{1786, 24, 342, NULL},
	{1795, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1788, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1789, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1790, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1791, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1792, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1777, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1793, 8, 52, NULL},
	{1794, 16, 53, NULL},
	{1786, 24, 342, NULL},
	{1785, 36, 387, NULL},
	{1781, 32, 333, NULL},
	{1780, 33, 333, NULL},
	{1779, 34, 333, NULL},
};

extern void Init113(void);
void Init113(void)
{
	IDSC(desc_113, 0, 112);
	IDSC(desc_113 + 1, 4, 112);
	IDSC(desc_113 + 34, 283, 112);
	IDSC(desc_113 + 52, 444, 112);
}


#ifdef __cplusplus
}
#endif
