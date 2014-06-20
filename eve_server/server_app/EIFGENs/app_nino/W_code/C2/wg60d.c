/*
 * Class WGI_NINO_ERROR_STREAM
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_60 [] = {459,59,0xFFFF};
static EIF_TYPE_INDEX gen_type1_60 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_60 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_60 [] = {0,0xFFFF};


static struct desc_info desc_60[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 359, NULL},
	{1, (BODY_INDEX)-1, 459, gen_type0_60},
	{2, (BODY_INDEX)-1, 346, NULL},
	{3, (BODY_INDEX)-1, 346, NULL},
	{4, (BODY_INDEX)-1, 346, NULL},
	{5, (BODY_INDEX)-1, 346, NULL},
	{6, (BODY_INDEX)-1, 346, NULL},
	{7, (BODY_INDEX)-1, 346, NULL},
	{8, (BODY_INDEX)-1, 346, NULL},
	{9, (BODY_INDEX)-1, 346, NULL},
	{10, (BODY_INDEX)-1, 59, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_60},
	{14, (BODY_INDEX)-1, 0, gen_type2_60},
	{15, (BODY_INDEX)-1, 59, NULL},
	{16, (BODY_INDEX)-1, 59, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_60},
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
	{28, (BODY_INDEX)-1, 59, NULL},
	{29, (BODY_INDEX)-1, 349, NULL},
	{30, (BODY_INDEX)-1, 59, NULL},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1085, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1080, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1081, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1082, 0, 355, NULL},
	{1083, 8, 327, NULL},
	{1084, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init60(void);
void Init60(void)
{
	IDSC(desc_60, 0, 59);
	IDSC(desc_60 + 1, 4, 59);
	IDSC(desc_60 + 34, 385, 59);
	IDSC(desc_60 + 39, 452, 59);
}


#ifdef __cplusplus
}
#endif
