/*
 * Class WSF_TO_WGI_SERVICE
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_80 [] = {454,79,0xFFFF};
static EIF_TYPE_INDEX gen_type1_80 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_80 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_80 [] = {0,0xFFFF};


static struct desc_info desc_80[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 354, NULL},
	{1, (BODY_INDEX)-1, 454, gen_type0_80},
	{2, (BODY_INDEX)-1, 341, NULL},
	{3, (BODY_INDEX)-1, 341, NULL},
	{4, (BODY_INDEX)-1, 341, NULL},
	{5, (BODY_INDEX)-1, 341, NULL},
	{6, (BODY_INDEX)-1, 341, NULL},
	{7, (BODY_INDEX)-1, 341, NULL},
	{8, (BODY_INDEX)-1, 341, NULL},
	{9, (BODY_INDEX)-1, 341, NULL},
	{10, (BODY_INDEX)-1, 79, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_80},
	{14, (BODY_INDEX)-1, 0, gen_type2_80},
	{15, (BODY_INDEX)-1, 79, NULL},
	{16, (BODY_INDEX)-1, 79, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_80},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 40, NULL},
	{21, (BODY_INDEX)-1, 354, NULL},
	{22, (BODY_INDEX)-1, 354, NULL},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 39, NULL},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 79, NULL},
	{29, (BODY_INDEX)-1, 344, NULL},
	{30, (BODY_INDEX)-1, 79, NULL},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1423, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1424, 0, 212, NULL},
	{1425, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init80(void);
void Init80(void)
{
	IDSC(desc_80, 0, 79);
	IDSC(desc_80 + 1, 4, 79);
	IDSC(desc_80 + 34, 150, 79);
	IDSC(desc_80 + 36, 152, 79);
}


#ifdef __cplusplus
}
#endif
