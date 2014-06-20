/*
 * Class THREAD_ENVIRONMENT
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_102 [] = {459,101,0xFFFF};
static EIF_TYPE_INDEX gen_type1_102 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_102 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_102 [] = {0,0xFFFF};


static struct desc_info desc_102[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 359, NULL},
	{1, (BODY_INDEX)-1, 459, gen_type0_102},
	{2, (BODY_INDEX)-1, 346, NULL},
	{3, (BODY_INDEX)-1, 346, NULL},
	{4, (BODY_INDEX)-1, 346, NULL},
	{5, (BODY_INDEX)-1, 346, NULL},
	{6, (BODY_INDEX)-1, 346, NULL},
	{7, (BODY_INDEX)-1, 346, NULL},
	{8, (BODY_INDEX)-1, 346, NULL},
	{9, (BODY_INDEX)-1, 346, NULL},
	{10, (BODY_INDEX)-1, 101, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_102},
	{14, (BODY_INDEX)-1, 0, gen_type2_102},
	{15, (BODY_INDEX)-1, 101, NULL},
	{16, (BODY_INDEX)-1, 101, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_102},
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
	{28, (BODY_INDEX)-1, 101, NULL},
	{29, (BODY_INDEX)-1, 349, NULL},
	{30, (BODY_INDEX)-1, 101, NULL},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1654, (BODY_INDEX)-1, 349, NULL},
	{1655, (BODY_INDEX)-1, 349, NULL},
};

extern void Init102(void);
void Init102(void)
{
	IDSC(desc_102, 0, 101);
	IDSC(desc_102 + 1, 4, 101);
	IDSC(desc_102 + 34, 459, 101);
}


#ifdef __cplusplus
}
#endif
