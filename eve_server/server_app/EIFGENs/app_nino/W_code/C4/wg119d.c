/*
 * Class WGI_NINO_RESPONSE_STREAM
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_119 [] = {459,118,0xFFFF};
static EIF_TYPE_INDEX gen_type1_119 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_119 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_119 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_119 [] = {471,0,0xFFF9,0,338,0xFFFF};


static struct desc_info desc_119[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 359, NULL},
	{1, (BODY_INDEX)-1, 459, gen_type0_119},
	{2, (BODY_INDEX)-1, 346, NULL},
	{3, (BODY_INDEX)-1, 346, NULL},
	{4, (BODY_INDEX)-1, 346, NULL},
	{5, (BODY_INDEX)-1, 346, NULL},
	{6, (BODY_INDEX)-1, 346, NULL},
	{7, (BODY_INDEX)-1, 346, NULL},
	{8, (BODY_INDEX)-1, 346, NULL},
	{9, (BODY_INDEX)-1, 346, NULL},
	{10, (BODY_INDEX)-1, 118, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_119},
	{14, (BODY_INDEX)-1, 0, gen_type2_119},
	{15, (BODY_INDEX)-1, 118, NULL},
	{16, (BODY_INDEX)-1, 118, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_119},
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
	{28, (BODY_INDEX)-1, 118, NULL},
	{29, (BODY_INDEX)-1, 349, NULL},
	{30, (BODY_INDEX)-1, 118, NULL},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1822, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1831, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1823, 0, 471, gen_type4_119},
	{1824, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1832, 34, 346, NULL},
	{1833, 33, 346, NULL},
	{1834, 32, 346, NULL},
	{1835, (BODY_INDEX)-1, 346, NULL},
	{1836, (BODY_INDEX)-1, 346, NULL},
	{1837, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1838, 36, 400, NULL},
	{1839, 24, 355, NULL},
	{1843, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1841, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1842, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1825, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1826, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1827, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1830, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1828, 8, 56, NULL},
	{1829, 16, 58, NULL},
	{1839, 24, 355, NULL},
	{1838, 36, 400, NULL},
	{1834, 32, 346, NULL},
	{1833, 33, 346, NULL},
	{1832, 34, 346, NULL},
};

extern void Init119(void);
void Init119(void)
{
	IDSC(desc_119, 0, 118);
	IDSC(desc_119 + 1, 4, 118);
	IDSC(desc_119 + 34, 289, 118);
	IDSC(desc_119 + 52, 456, 118);
}


#ifdef __cplusplus
}
#endif
