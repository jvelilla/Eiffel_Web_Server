/*
 * Class ERROR
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_437 [] = {459,436,0xFFFF};
static EIF_TYPE_INDEX gen_type1_437 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_437 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_437 [] = {0,0xFFFF};


static struct desc_info desc_437[] = {
	{(BODY_INDEX) 14733, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 359, NULL},
	{1, (BODY_INDEX)-1, 459, gen_type0_437},
	{2, (BODY_INDEX)-1, 346, NULL},
	{3, (BODY_INDEX)-1, 346, NULL},
	{4, (BODY_INDEX)-1, 346, NULL},
	{5, (BODY_INDEX)-1, 346, NULL},
	{6, (BODY_INDEX)-1, 346, NULL},
	{7, (BODY_INDEX)-1, 346, NULL},
	{8, (BODY_INDEX)-1, 346, NULL},
	{9, (BODY_INDEX)-1, 346, NULL},
	{10, (BODY_INDEX)-1, 436, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_437},
	{14, (BODY_INDEX)-1, 0, gen_type2_437},
	{15, (BODY_INDEX)-1, 436, NULL},
	{16, (BODY_INDEX)-1, 436, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_437},
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
	{28, (BODY_INDEX)-1, 436, NULL},
	{29, (BODY_INDEX)-1, 349, NULL},
	{30, (BODY_INDEX)-1, 436, NULL},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 400, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 355, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 353, NULL},
	{14729, 0, 436, NULL},
	{14730, (BODY_INDEX)-1, 358, NULL},
	{14732, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{14731, (BODY_INDEX)-1, 359, NULL},
};

extern void Init437(void);
void Init437(void)
{
	IDSC(desc_437, 0, 436);
	IDSC(desc_437 + 1, 4, 436);
	IDSC(desc_437 + 34, 375, 436);
	IDSC(desc_437 + 41, 106, 436);
}


#ifdef __cplusplus
}
#endif
