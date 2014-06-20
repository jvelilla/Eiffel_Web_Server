/*
 * Class BOX [NATURAL_16]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_881 [] = {459,880,415,0xFFFF};
static EIF_TYPE_INDEX gen_type1_881 [] = {880,415,0xFFFF};
static EIF_TYPE_INDEX gen_type2_881 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_881 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_881 [] = {880,415,0xFFFF};
static EIF_TYPE_INDEX gen_type5_881 [] = {880,415,0xFFFF};
static EIF_TYPE_INDEX gen_type6_881 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type7_881 [] = {880,415,0xFFFF};
static EIF_TYPE_INDEX gen_type8_881 [] = {880,415,0xFFFF};
static EIF_TYPE_INDEX gen_type9_881 [] = {871,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type10_881 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_881[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 359, NULL},
	{1, (BODY_INDEX)-1, 459, gen_type0_881},
	{2, (BODY_INDEX)-1, 346, NULL},
	{3, (BODY_INDEX)-1, 346, NULL},
	{4, (BODY_INDEX)-1, 346, NULL},
	{5, (BODY_INDEX)-1, 346, NULL},
	{6, (BODY_INDEX)-1, 346, NULL},
	{7, (BODY_INDEX)-1, 346, NULL},
	{8, (BODY_INDEX)-1, 346, NULL},
	{9, (BODY_INDEX)-1, 346, NULL},
	{10, (BODY_INDEX)-1, 880, gen_type1_881},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type2_881},
	{14, (BODY_INDEX)-1, 0, gen_type3_881},
	{15, (BODY_INDEX)-1, 880, gen_type4_881},
	{16, (BODY_INDEX)-1, 880, gen_type5_881},
	{17, (BODY_INDEX)-1, 0, gen_type6_881},
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
	{28, (BODY_INDEX)-1, 880, gen_type7_881},
	{29, (BODY_INDEX)-1, 349, NULL},
	{30, (BODY_INDEX)-1, 880, gen_type8_881},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 346, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 346, NULL},
	{2801, (BODY_INDEX)-1, 346, NULL},
	{2802, 0, 346, NULL},
	{2803, (BODY_INDEX)-1, 346, NULL},
	{2799, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{2800, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 871, gen_type9_881},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type10_881},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 346, NULL},
};

extern void Init881(void);
void Init881(void)
{
	IDSC(desc_881, 0, 880);
	IDSC(desc_881 + 1, 4, 880);
	IDSC(desc_881 + 34, 364, 880);
	IDSC(desc_881 + 43, 444, 880);
}


#ifdef __cplusplus
}
#endif
