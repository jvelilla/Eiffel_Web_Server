/*
 * Class WSF_TO_WGI_SERVICE
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_82 [] = {459,81,0xFFFF};
static EIF_TYPE_INDEX gen_type1_82 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_82 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_82 [] = {0,0xFFFF};


static struct desc_info desc_82[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 359, NULL},
	{1, (BODY_INDEX)-1, 459, gen_type0_82},
	{2, (BODY_INDEX)-1, 346, NULL},
	{3, (BODY_INDEX)-1, 346, NULL},
	{4, (BODY_INDEX)-1, 346, NULL},
	{5, (BODY_INDEX)-1, 346, NULL},
	{6, (BODY_INDEX)-1, 346, NULL},
	{7, (BODY_INDEX)-1, 346, NULL},
	{8, (BODY_INDEX)-1, 346, NULL},
	{9, (BODY_INDEX)-1, 346, NULL},
	{10, (BODY_INDEX)-1, 81, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_82},
	{14, (BODY_INDEX)-1, 0, gen_type2_82},
	{15, (BODY_INDEX)-1, 81, NULL},
	{16, (BODY_INDEX)-1, 81, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_82},
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
	{28, (BODY_INDEX)-1, 81, NULL},
	{29, (BODY_INDEX)-1, 349, NULL},
	{30, (BODY_INDEX)-1, 81, NULL},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1442, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1443, 0, 215, NULL},
	{1441, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init82(void);
void Init82(void)
{
	IDSC(desc_82, 0, 81);
	IDSC(desc_82 + 1, 4, 81);
	IDSC(desc_82 + 34, 150, 81);
	IDSC(desc_82 + 36, 152, 81);
}


#ifdef __cplusplus
}
#endif
