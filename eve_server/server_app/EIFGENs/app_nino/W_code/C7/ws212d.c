/*
 * Class WSF_CALLBACK_SERVICE
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_212 [] = {450,211,0xFFFF};
static EIF_TYPE_INDEX gen_type1_212 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_212 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_212 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_212 [] = {452,0,0xFFF9,2,329,361,145,0xFFFF};


static struct desc_info desc_212[] = {
	{(BODY_INDEX) 2692, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 350, NULL},
	{1, (BODY_INDEX)-1, 450, gen_type0_212},
	{2, (BODY_INDEX)-1, 337, NULL},
	{3, (BODY_INDEX)-1, 337, NULL},
	{4, (BODY_INDEX)-1, 337, NULL},
	{5, (BODY_INDEX)-1, 337, NULL},
	{6, (BODY_INDEX)-1, 337, NULL},
	{7, (BODY_INDEX)-1, 337, NULL},
	{8, (BODY_INDEX)-1, 337, NULL},
	{9, (BODY_INDEX)-1, 337, NULL},
	{10, (BODY_INDEX)-1, 211, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_212},
	{14, (BODY_INDEX)-1, 0, gen_type2_212},
	{15, (BODY_INDEX)-1, 211, NULL},
	{16, (BODY_INDEX)-1, 211, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_212},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 38, NULL},
	{21, (BODY_INDEX)-1, 350, NULL},
	{22, (BODY_INDEX)-1, 350, NULL},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 37, NULL},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 211, NULL},
	{29, (BODY_INDEX)-1, 340, NULL},
	{30, (BODY_INDEX)-1, 211, NULL},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{2695, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{2691, (BODY_INDEX)-1, 76, NULL},
	{2693, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{2694, 0, 452, gen_type4_212},
};

extern void Init212(void);
void Init212(void)
{
	IDSC(desc_212, 0, 211);
	IDSC(desc_212 + 1, 4, 211);
	IDSC(desc_212 + 34, 36, 211);
	IDSC(desc_212 + 36, 146, 211);
}


#ifdef __cplusplus
}
#endif
