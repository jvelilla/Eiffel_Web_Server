/*
 * Class STRING_SEARCHER
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_128 [] = {446,127,0xFFFF};
static EIF_TYPE_INDEX gen_type1_128 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_128 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_128 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_128 [] = {526,387,0xFFFF};
static EIF_TYPE_INDEX gen_type5_128 [] = {521,387,0xFFFF};
static EIF_TYPE_INDEX gen_type6_128 [] = {447,521,387,0xFFFF};


static struct desc_info desc_128[] = {
	{(BODY_INDEX) 1957, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 346, NULL},
	{1, (BODY_INDEX)-1, 446, gen_type0_128},
	{2, (BODY_INDEX)-1, 333, NULL},
	{3, (BODY_INDEX)-1, 333, NULL},
	{4, (BODY_INDEX)-1, 333, NULL},
	{5, (BODY_INDEX)-1, 333, NULL},
	{6, (BODY_INDEX)-1, 333, NULL},
	{7, (BODY_INDEX)-1, 333, NULL},
	{8, (BODY_INDEX)-1, 333, NULL},
	{9, (BODY_INDEX)-1, 333, NULL},
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
	{20, (BODY_INDEX)-1, 37, NULL},
	{21, (BODY_INDEX)-1, 346, NULL},
	{22, (BODY_INDEX)-1, 346, NULL},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 36, NULL},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 127, NULL},
	{29, (BODY_INDEX)-1, 336, NULL},
	{30, (BODY_INDEX)-1, 127, NULL},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1958, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1950, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 338, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 387, NULL},
	{1951, (BODY_INDEX)-1, 387, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 387, NULL},
	{1952, (BODY_INDEX)-1, 526, gen_type4_128},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 387, NULL},
	{1953, 0, 521, gen_type5_128},
	{1954, 8, 447, gen_type6_128},
	{1955, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1956, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init128(void);
void Init128(void)
{
	IDSC(desc_128, 0, 127);
	IDSC(desc_128 + 1, 4, 127);
	IDSC(desc_128 + 34, 237, 127);
}


#ifdef __cplusplus
}
#endif
