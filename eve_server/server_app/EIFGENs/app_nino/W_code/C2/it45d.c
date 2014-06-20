/*
 * Class ITP_AGENT_CREATION_INFO
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_45 [] = {459,44,0xFFFF};
static EIF_TYPE_INDEX gen_type1_45 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_45 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_45 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_45 [] = {536,400,0xFFFF};


static struct desc_info desc_45[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 359, NULL},
	{1, (BODY_INDEX)-1, 459, gen_type0_45},
	{2, (BODY_INDEX)-1, 346, NULL},
	{3, (BODY_INDEX)-1, 346, NULL},
	{4, (BODY_INDEX)-1, 346, NULL},
	{5, (BODY_INDEX)-1, 346, NULL},
	{6, (BODY_INDEX)-1, 346, NULL},
	{7, (BODY_INDEX)-1, 346, NULL},
	{8, (BODY_INDEX)-1, 346, NULL},
	{9, (BODY_INDEX)-1, 346, NULL},
	{10, (BODY_INDEX)-1, 44, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_45},
	{14, (BODY_INDEX)-1, 0, gen_type2_45},
	{15, (BODY_INDEX)-1, 44, NULL},
	{16, (BODY_INDEX)-1, 44, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_45},
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
	{28, (BODY_INDEX)-1, 44, NULL},
	{29, (BODY_INDEX)-1, 349, NULL},
	{30, (BODY_INDEX)-1, 44, NULL},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{873, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{874, 16, 400, NULL},
	{875, 0, 359, NULL},
	{876, 20, 400, NULL},
	{877, 8, 536, gen_type4_45},
};

extern void Init45(void);
void Init45(void)
{
	IDSC(desc_45, 0, 44);
	IDSC(desc_45 + 1, 4, 44);
	IDSC(desc_45 + 34, 51, 44);
}


#ifdef __cplusplus
}
#endif
