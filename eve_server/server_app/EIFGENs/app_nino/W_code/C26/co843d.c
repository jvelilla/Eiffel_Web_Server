/*
 * Class CONTAINER [BOOLEAN]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_843 [] = {441,842,328,0xFFFF};
static EIF_TYPE_INDEX gen_type1_843 [] = {842,328,0xFFFF};
static EIF_TYPE_INDEX gen_type2_843 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_843 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_843 [] = {842,328,0xFFFF};
static EIF_TYPE_INDEX gen_type5_843 [] = {842,328,0xFFFF};
static EIF_TYPE_INDEX gen_type6_843 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type7_843 [] = {842,328,0xFFFF};
static EIF_TYPE_INDEX gen_type8_843 [] = {842,328,0xFFFF};
static EIF_TYPE_INDEX gen_type9_843 [] = {840,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type10_843 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_843[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 341, NULL},
	{1, (BODY_INDEX)-1, 441, gen_type0_843},
	{2, (BODY_INDEX)-1, 328, NULL},
	{3, (BODY_INDEX)-1, 328, NULL},
	{4, (BODY_INDEX)-1, 328, NULL},
	{5, (BODY_INDEX)-1, 328, NULL},
	{6, (BODY_INDEX)-1, 328, NULL},
	{7, (BODY_INDEX)-1, 328, NULL},
	{8, (BODY_INDEX)-1, 328, NULL},
	{9, (BODY_INDEX)-1, 328, NULL},
	{10, (BODY_INDEX)-1, 842, gen_type1_843},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type2_843},
	{14, (BODY_INDEX)-1, 0, gen_type3_843},
	{15, (BODY_INDEX)-1, 842, gen_type4_843},
	{16, (BODY_INDEX)-1, 842, gen_type5_843},
	{17, (BODY_INDEX)-1, 0, gen_type6_843},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 36, NULL},
	{21, (BODY_INDEX)-1, 341, NULL},
	{22, (BODY_INDEX)-1, 341, NULL},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 35, NULL},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 842, gen_type7_843},
	{29, (BODY_INDEX)-1, 331, NULL},
	{30, (BODY_INDEX)-1, 842, gen_type8_843},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 328, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 328, NULL},
	{2760, (BODY_INDEX)-1, 328, NULL},
	{2761, 0, 328, NULL},
	{2762, (BODY_INDEX)-1, 328, NULL},
	{2763, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{2764, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 840, gen_type9_843},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type10_843},
};

extern void Init843(void);
void Init843(void)
{
	IDSC(desc_843, 0, 842);
	IDSC(desc_843 + 1, 4, 842);
	IDSC(desc_843 + 34, 352, 842);
}


#ifdef __cplusplus
}
#endif
