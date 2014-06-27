/*
 * Class DATA_EXCEPTION
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_64 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type1_64 [] = {0xFF11,180,0xFF12,63,0xFFFF};
static EIF_TYPE_INDEX gen_type2_64 [] = {0xFF11,63,0xFFFF};
static EIF_TYPE_INDEX gen_type3_64 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_64 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_64 [] = {0xFF11,63,0xFFFF};
static EIF_TYPE_INDEX gen_type6_64 [] = {0xFF11,63,0xFFFF};
static EIF_TYPE_INDEX gen_type7_64 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_64 [] = {0xFF11,11,0xFFFF};
static EIF_TYPE_INDEX gen_type9_64 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type10_64 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type11_64 [] = {0xFF11,10,0xFFFF};
static EIF_TYPE_INDEX gen_type12_64 [] = {0xFF11,63,0xFFFF};
static EIF_TYPE_INDEX gen_type13_64 [] = {0xFF11,20,0xFFFF};
static EIF_TYPE_INDEX gen_type14_64 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type15_64 [] = {0xFF11,165,0xFFFF};
static EIF_TYPE_INDEX gen_type16_64 [] = {0xFF11,43,0xFFFF};
static EIF_TYPE_INDEX gen_type17_64 [] = {0xFF11,43,0xFFFF};


static struct desc_info desc_64[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 170, gen_type0_64},
	{1, (BODY_INDEX)-1, 180, gen_type1_64},
	{2, (BODY_INDEX)-1, 157, NULL},
	{3, (BODY_INDEX)-1, 157, NULL},
	{4, (BODY_INDEX)-1, 157, NULL},
	{5, (BODY_INDEX)-1, 157, NULL},
	{6, (BODY_INDEX)-1, 157, NULL},
	{7, (BODY_INDEX)-1, 157, NULL},
	{8, (BODY_INDEX)-1, 157, NULL},
	{9, (BODY_INDEX)-1, 157, NULL},
	{10, (BODY_INDEX)-1, 63, gen_type2_64},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_64},
	{14, (BODY_INDEX)-1, 0, gen_type4_64},
	{15, (BODY_INDEX)-1, 63, gen_type5_64},
	{16, (BODY_INDEX)-1, 63, gen_type6_64},
	{17, (BODY_INDEX)-1, 0, gen_type7_64},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 11, gen_type8_64},
	{920, (BODY_INDEX)-1, 170, gen_type9_64},
	{22, (BODY_INDEX)-1, 170, gen_type10_64},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 10, gen_type11_64},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 63, NULL},
	{29, (BODY_INDEX)-1, 160, NULL},
	{30, (BODY_INDEX)-1, 63, gen_type12_64},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{892, (BODY_INDEX)-1, 20, gen_type13_64},
	{931, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{932, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{933, (BODY_INDEX)-1, 170, gen_type14_64},
	{934, (BODY_INDEX)-1, 165, gen_type15_64},
	{935, (BODY_INDEX)-1, 170, NULL},
	{936, (BODY_INDEX)-1, 162, NULL},
	{937, (BODY_INDEX)-1, 170, NULL},
	{938, (BODY_INDEX)-1, 169, NULL},
	{939, (BODY_INDEX)-1, 121, NULL},
	{940, (BODY_INDEX)-1, 43, gen_type16_64},
	{941, (BODY_INDEX)-1, 43, gen_type17_64},
	{942, 0, 170, NULL},
	{943, 8, 170, NULL},
	{944, 44, 121, NULL},
	{945, (BODY_INDEX)-1, 170, NULL},
	{946, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{947, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{948, (BODY_INDEX)-1, 157, NULL},
	{949, (BODY_INDEX)-1, 157, NULL},
	{918, (BODY_INDEX)-1, 157, NULL},
	{919, (BODY_INDEX)-1, 157, NULL},
	{921, 16, 43, NULL},
	{922, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{923, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{924, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{925, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{926, 24, 89, NULL},
	{927, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{928, 40, 157, NULL},
	{929, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{930, 32, 170, NULL},
};

extern void Init64(void);
void Init64(void)
{
	IDSC(desc_64, 0, 63);
	IDSC(desc_64 + 1, 2, 63);
	IDSC(desc_64 + 34, 114, 63);
	IDSC(desc_64 + 35, 30, 63);
}


#ifdef __cplusplus
}
#endif
