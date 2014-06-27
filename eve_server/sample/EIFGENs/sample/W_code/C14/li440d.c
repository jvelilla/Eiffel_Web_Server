/*
 * Class LINEAR [NATURAL_16]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_440 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type1_440 [] = {0xFF11,180,0xFF12,439,136,0xFFFF};
static EIF_TYPE_INDEX gen_type2_440 [] = {0xFF11,439,136,0xFFFF};
static EIF_TYPE_INDEX gen_type3_440 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_440 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_440 [] = {0xFF11,439,136,0xFFFF};
static EIF_TYPE_INDEX gen_type6_440 [] = {0xFF11,439,136,0xFFFF};
static EIF_TYPE_INDEX gen_type7_440 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_440 [] = {0xFF11,11,0xFFFF};
static EIF_TYPE_INDEX gen_type9_440 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type10_440 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type11_440 [] = {0xFF11,10,0xFFFF};
static EIF_TYPE_INDEX gen_type12_440 [] = {439,136,0xFFFF};
static EIF_TYPE_INDEX gen_type13_440 [] = {0xFF11,439,136,0xFFFF};
static EIF_TYPE_INDEX gen_type14_440 [] = {0xFF11,439,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type15_440 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type16_440 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type17_440 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_440[] = {
	{(BODY_INDEX) 1370, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 170, gen_type0_440},
	{1, (BODY_INDEX)-1, 180, gen_type1_440},
	{2, (BODY_INDEX)-1, 154, NULL},
	{3, (BODY_INDEX)-1, 154, NULL},
	{4, (BODY_INDEX)-1, 154, NULL},
	{5, (BODY_INDEX)-1, 154, NULL},
	{6, (BODY_INDEX)-1, 154, NULL},
	{7, (BODY_INDEX)-1, 154, NULL},
	{8, (BODY_INDEX)-1, 154, NULL},
	{9, (BODY_INDEX)-1, 154, NULL},
	{10, (BODY_INDEX)-1, 439, gen_type2_440},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_440},
	{14, (BODY_INDEX)-1, 0, gen_type4_440},
	{15, (BODY_INDEX)-1, 439, gen_type5_440},
	{16, (BODY_INDEX)-1, 439, gen_type6_440},
	{17, (BODY_INDEX)-1, 0, gen_type7_440},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 11, gen_type8_440},
	{21, (BODY_INDEX)-1, 170, gen_type9_440},
	{22, (BODY_INDEX)-1, 170, gen_type10_440},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 10, gen_type11_440},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 439, gen_type12_440},
	{29, (BODY_INDEX)-1, 160, NULL},
	{30, (BODY_INDEX)-1, 439, gen_type13_440},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1367, (BODY_INDEX)-1, 154, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 154, NULL},
	{1191, (BODY_INDEX)-1, 154, NULL},
	{1192, 0, 154, NULL},
	{1193, (BODY_INDEX)-1, 154, NULL},
	{1194, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1195, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1379, (BODY_INDEX)-1, 439, gen_type14_440},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type15_440},
	{1368, (BODY_INDEX)-1, 121, NULL},
	{1369, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 121, NULL},
	{1371, (BODY_INDEX)-1, 121, NULL},
	{1372, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type16_440},
	{1373, (BODY_INDEX)-1, 154, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 154, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type17_440},
	{1374, (BODY_INDEX)-1, 154, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1375, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1376, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1377, (BODY_INDEX)-1, 154, NULL},
	{1378, (BODY_INDEX)-1, 154, NULL},
};

extern void Init440(void);
void Init440(void)
{
	IDSC(desc_440, 0, 439);
	IDSC(desc_440 + 1, 2, 439);
	IDSC(desc_440 + 34, 184, 439);
	IDSC(desc_440 + 43, 44, 439);
	IDSC(desc_440 + 52, 126, 439);
}


#ifdef __cplusplus
}
#endif
