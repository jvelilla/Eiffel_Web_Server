/*
 * Class CURSOR
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_252 [] = {441,251,0xFFFF};
static EIF_TYPE_INDEX gen_type1_252 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_252 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_252 [] = {0,0xFFFF};


static struct desc_info desc_252[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 341, NULL},
	{1, (BODY_INDEX)-1, 441, gen_type0_252},
	{2, (BODY_INDEX)-1, 328, NULL},
	{3, (BODY_INDEX)-1, 328, NULL},
	{4, (BODY_INDEX)-1, 328, NULL},
	{5, (BODY_INDEX)-1, 328, NULL},
	{6, (BODY_INDEX)-1, 328, NULL},
	{7, (BODY_INDEX)-1, 328, NULL},
	{8, (BODY_INDEX)-1, 328, NULL},
	{9, (BODY_INDEX)-1, 328, NULL},
	{10, (BODY_INDEX)-1, 251, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_252},
	{14, (BODY_INDEX)-1, 0, gen_type2_252},
	{15, (BODY_INDEX)-1, 251, NULL},
	{16, (BODY_INDEX)-1, 251, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_252},
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
	{28, (BODY_INDEX)-1, 251, NULL},
	{29, (BODY_INDEX)-1, 331, NULL},
	{30, (BODY_INDEX)-1, 251, NULL},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init252(void);
void Init252(void)
{
	IDSC(desc_252, 0, 251);
	IDSC(desc_252 + 1, 4, 251);
}


#ifdef __cplusplus
}
#endif
