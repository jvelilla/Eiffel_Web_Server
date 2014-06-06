/*
 * Class WSF_ROUTER_ITEM
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_360 [] = {450,359,0xFFFF};
static EIF_TYPE_INDEX gen_type1_360 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_360 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_360 [] = {0,0xFFFF};


static struct desc_info desc_360[] = {
	{(BODY_INDEX) 10876, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 350, NULL},
	{1, (BODY_INDEX)-1, 450, gen_type0_360},
	{2, (BODY_INDEX)-1, 337, NULL},
	{3, (BODY_INDEX)-1, 337, NULL},
	{4, (BODY_INDEX)-1, 337, NULL},
	{5, (BODY_INDEX)-1, 337, NULL},
	{6, (BODY_INDEX)-1, 337, NULL},
	{7, (BODY_INDEX)-1, 337, NULL},
	{8, (BODY_INDEX)-1, 337, NULL},
	{9, (BODY_INDEX)-1, 337, NULL},
	{10, (BODY_INDEX)-1, 359, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_360},
	{14, (BODY_INDEX)-1, 0, gen_type2_360},
	{15, (BODY_INDEX)-1, 359, NULL},
	{16, (BODY_INDEX)-1, 359, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_360},
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
	{28, (BODY_INDEX)-1, 359, NULL},
	{29, (BODY_INDEX)-1, 340, NULL},
	{30, (BODY_INDEX)-1, 359, NULL},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{10870, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{10871, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{10872, 0, 367, NULL},
	{10873, 8, 286, NULL},
	{10875, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{10874, (BODY_INDEX)-1, 350, NULL},
};

extern void Init360(void);
void Init360(void)
{
	IDSC(desc_360, 0, 359);
	IDSC(desc_360 + 1, 4, 359);
	IDSC(desc_360 + 34, 407, 359);
	IDSC(desc_360 + 39, 106, 359);
}


#ifdef __cplusplus
}
#endif
