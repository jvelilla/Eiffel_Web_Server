/*
 * Class TIME_UTILITY
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_85 [] = {446,84,0xFFFF};
static EIF_TYPE_INDEX gen_type1_85 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_85 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_85 [] = {0,0xFFFF};


static struct desc_info desc_85[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 346, NULL},
	{1, (BODY_INDEX)-1, 446, gen_type0_85},
	{2, (BODY_INDEX)-1, 333, NULL},
	{3, (BODY_INDEX)-1, 333, NULL},
	{4, (BODY_INDEX)-1, 333, NULL},
	{5, (BODY_INDEX)-1, 333, NULL},
	{6, (BODY_INDEX)-1, 333, NULL},
	{7, (BODY_INDEX)-1, 333, NULL},
	{8, (BODY_INDEX)-1, 333, NULL},
	{9, (BODY_INDEX)-1, 333, NULL},
	{10, (BODY_INDEX)-1, 84, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_85},
	{14, (BODY_INDEX)-1, 0, gen_type2_85},
	{15, (BODY_INDEX)-1, 84, NULL},
	{16, (BODY_INDEX)-1, 84, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_85},
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
	{28, (BODY_INDEX)-1, 84, NULL},
	{29, (BODY_INDEX)-1, 336, NULL},
	{30, (BODY_INDEX)-1, 84, NULL},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1459, (BODY_INDEX)-1, 387, NULL},
	{1460, (BODY_INDEX)-1, 387, NULL},
	{1461, (BODY_INDEX)-1, 42, NULL},
	{1462, (BODY_INDEX)-1, 346, NULL},
};

extern void Init85(void);
void Init85(void)
{
	IDSC(desc_85, 0, 84);
	IDSC(desc_85 + 1, 4, 84);
	IDSC(desc_85 + 34, 466, 84);
}


#ifdef __cplusplus
}
#endif
