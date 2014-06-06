/*
 * Class PROCESS_TIMER
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_64 [] = {450,63,0xFFFF};
static EIF_TYPE_INDEX gen_type1_64 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_64 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_64 [] = {0,0xFFFF};


static struct desc_info desc_64[] = {
	{(BODY_INDEX) 1114, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 350, NULL},
	{1, (BODY_INDEX)-1, 450, gen_type0_64},
	{2, (BODY_INDEX)-1, 337, NULL},
	{3, (BODY_INDEX)-1, 337, NULL},
	{4, (BODY_INDEX)-1, 337, NULL},
	{5, (BODY_INDEX)-1, 337, NULL},
	{6, (BODY_INDEX)-1, 337, NULL},
	{7, (BODY_INDEX)-1, 337, NULL},
	{8, (BODY_INDEX)-1, 337, NULL},
	{9, (BODY_INDEX)-1, 337, NULL},
	{10, (BODY_INDEX)-1, 63, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_64},
	{14, (BODY_INDEX)-1, 0, gen_type2_64},
	{15, (BODY_INDEX)-1, 63, NULL},
	{16, (BODY_INDEX)-1, 63, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_64},
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
	{28, (BODY_INDEX)-1, 63, NULL},
	{29, (BODY_INDEX)-1, 340, NULL},
	{30, (BODY_INDEX)-1, 63, NULL},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 337, NULL},
	{1115, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1116, 8, 337, NULL},
	{1117, (BODY_INDEX)-1, 337, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 337, NULL},
	{1118, 12, 391, NULL},
	{1119, 0, 75, NULL},
	{1120, (BODY_INDEX)-1, 391, NULL},
};

extern void Init64(void);
void Init64(void)
{
	IDSC(desc_64, 0, 63);
	IDSC(desc_64 + 1, 4, 63);
	IDSC(desc_64 + 34, 320, 63);
}


#ifdef __cplusplus
}
#endif
