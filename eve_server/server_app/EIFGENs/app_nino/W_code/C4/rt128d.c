/*
 * Class RT_EXTENSION
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_128 [] = {459,127,0xFFFF};
static EIF_TYPE_INDEX gen_type1_128 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_128 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_128 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_128 [] = {0xFFF9,0,338,0xFFFF};
static EIF_TYPE_INDEX gen_type5_128 [] = {472,0xFFF9,0,338,0xFFFF};
static EIF_TYPE_INDEX gen_type6_128 [] = {0xFFF9,4,338,0,400,400,400,0xFFFF};
static EIF_TYPE_INDEX gen_type7_128 [] = {0xFFF9,5,338,0,400,400,400,400,0xFFFF};
static EIF_TYPE_INDEX gen_type8_128 [] = {442,0xFFFF};
static EIF_TYPE_INDEX gen_type9_128 [] = {458,442,0xFFFF};


static struct desc_info desc_128[] = {
	{(BODY_INDEX) 1896, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 359, NULL},
	{1, (BODY_INDEX)-1, 459, gen_type0_128},
	{2, (BODY_INDEX)-1, 346, NULL},
	{3, (BODY_INDEX)-1, 346, NULL},
	{4, (BODY_INDEX)-1, 346, NULL},
	{5, (BODY_INDEX)-1, 346, NULL},
	{6, (BODY_INDEX)-1, 346, NULL},
	{7, (BODY_INDEX)-1, 346, NULL},
	{8, (BODY_INDEX)-1, 346, NULL},
	{9, (BODY_INDEX)-1, 346, NULL},
	{10, (BODY_INDEX)-1, 127, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_128},
	{14, (BODY_INDEX)-1, 0, gen_type2_128},
	{15, (BODY_INDEX)-1, 127, NULL},
	{16, (BODY_INDEX)-1, 127, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_128},
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
	{28, (BODY_INDEX)-1, 127, NULL},
	{29, (BODY_INDEX)-1, 349, NULL},
	{30, (BODY_INDEX)-1, 127, NULL},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1881, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1882, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1891, (BODY_INDEX)-1, 400, NULL},
	{1892, (BODY_INDEX)-1, 400, NULL},
	{1893, (BODY_INDEX)-1, 400, NULL},
	{1894, (BODY_INDEX)-1, 400, NULL},
	{1895, (BODY_INDEX)-1, 400, NULL},
	{1883, (BODY_INDEX)-1, 400, NULL},
	{1884, (BODY_INDEX)-1, 359, NULL},
	{1885, (BODY_INDEX)-1, 346, NULL},
	{1886, (BODY_INDEX)-1, 346, NULL},
	{1887, (BODY_INDEX)-1, 346, NULL},
	{1888, (BODY_INDEX)-1, 346, NULL},
	{1889, (BODY_INDEX)-1, 0, NULL},
	{1890, (BODY_INDEX)-1, 0, NULL},
	{1897, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1898, (BODY_INDEX)-1, 338, gen_type4_128},
	{1899, (BODY_INDEX)-1, 472, gen_type5_128},
	{1900, (BODY_INDEX)-1, 338, gen_type6_128},
	{1901, (BODY_INDEX)-1, 338, gen_type7_128},
	{1902, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1903, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1904, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1905, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1906, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1907, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1908, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1909, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1910, (BODY_INDEX)-1, 442, NULL},
	{1911, (BODY_INDEX)-1, 442, gen_type8_128},
	{1912, (BODY_INDEX)-1, 40, NULL},
	{1913, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1914, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1915, (BODY_INDEX)-1, 458, gen_type9_128},
	{1916, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1917, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1918, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1919, (BODY_INDEX)-1, 400, NULL},
};

extern void Init128(void);
void Init128(void)
{
	IDSC(desc_128, 0, 127);
	IDSC(desc_128 + 1, 4, 127);
	IDSC(desc_128 + 34, 259, 127);
	IDSC(desc_128 + 36, 111, 127);
	IDSC(desc_128 + 49, 15, 127);
}


#ifdef __cplusplus
}
#endif
