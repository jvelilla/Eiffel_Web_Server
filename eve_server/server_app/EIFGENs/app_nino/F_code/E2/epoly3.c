#include "epoly3.h"
#include "../E1/eoffsets.h"


#ifdef __cplusplus
extern "C" {
#endif

char *(*R9246[19])();
void R9246_init () {
	R9246[0] = (char *(*)()) F803_12675;
	R9246[1] = (char *(*)()) F804_12675_9246;
	R9246[2] = (char *(*)()) F805_12675_9246;
	R9246[3] = (char *(*)()) F806_12675_9246;
	R9246[4] = (char *(*)()) F807_12675_9246;
	R9246[5] = (char *(*)()) F808_12675_9246;
	R9246[6] = (char *(*)()) F809_12675_9246;
	R9246[7] = (char *(*)()) F810_12675_9246;
	R9246[8] = (char *(*)()) F811_12675_9246;
	R9246[9] = (char *(*)()) F812_12675_9246;
	R9246[10] = (char *(*)()) F813_12675_9246;
	R9246[11] = (char *(*)()) F814_12675_9246;
	R9246[12] = (char *(*)()) F815_12675_9246;
	R9246[13] = (char *(*)()) F816_12675_9246;
	R9246[14] = (char *(*)()) F817_12675_9246;
	R9246[15] = (char *(*)()) F803_12675;
	R9246[16] = (char *(*)()) F806_12675_9246;
	{long i; for (i = 17; i < 19; i++) R9246[i] = (char *(*)()) F820_12732;}
}
static void F804_12675_9246 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F804_12675(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F805_12675_9246 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F805_12675(Current, *(EIF_REAL_64 *)arg1);
}
static void F806_12675_9246 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F806_12675(Current, *(EIF_BOOLEAN *)arg1);
}
static void F807_12675_9246 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F807_12675(Current, *(EIF_NATURAL_64 *)arg1);
}
static void F808_12675_9246 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F808_12675(Current, *(EIF_INTEGER_64 *)arg1);
}
static void F809_12675_9246 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F809_12675(Current, *(EIF_NATURAL_32 *)arg1);
}
static void F810_12675_9246 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F810_12675(Current, *(EIF_POINTER *)arg1);
}
static void F811_12675_9246 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F811_12675(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F812_12675_9246 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F812_12675(Current, *(EIF_NATURAL_16 *)arg1);
}
static void F813_12675_9246 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F813_12675(Current, *(EIF_NATURAL_8 *)arg1);
}
static void F814_12675_9246 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F814_12675(Current, *(EIF_CHARACTER_32 *)arg1);
}
static void F815_12675_9246 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F815_12675(Current, *(EIF_INTEGER_16 *)arg1);
}
static void F816_12675_9246 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F816_12675(Current, *(EIF_REAL_32 *)arg1);
}
static void F817_12675_9246 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F817_12675(Current, *(EIF_INTEGER_8 *)arg1);
}

char *(*R9247[85])();
void R9247_init () {
	R9247[0] = (char *(*)()) F737_12397;
	R9247[1] = (char *(*)()) F738_12397;
	R9247[2] = (char *(*)()) F739_12397;
	R9247[3] = (char *(*)()) F740_12397;
	R9247[4] = (char *(*)()) F741_12397;
	R9247[5] = (char *(*)()) F742_12397;
	R9247[6] = (char *(*)()) F743_12397;
	R9247[7] = (char *(*)()) F744_12397;
	R9247[8] = (char *(*)()) F745_12397;
	R9247[9] = (char *(*)()) F746_12397;
	R9247[10] = (char *(*)()) F747_12397;
	R9247[11] = (char *(*)()) F748_12397;
	R9247[12] = (char *(*)()) F749_12397;
	R9247[13] = (char *(*)()) F750_12397;
	R9247[14] = (char *(*)()) F751_12397;
	R9247[30] = (char *(*)()) F737_12397;
	R9247[31] = (char *(*)()) F738_12397;
	R9247[32] = (char *(*)()) F739_12397;
	R9247[33] = (char *(*)()) F740_12397;
	R9247[34] = (char *(*)()) F741_12397;
	R9247[35] = (char *(*)()) F742_12397;
	R9247[36] = (char *(*)()) F743_12397;
	R9247[37] = (char *(*)()) F744_12397;
	R9247[38] = (char *(*)()) F745_12397;
	R9247[39] = (char *(*)()) F746_12397;
	R9247[40] = (char *(*)()) F747_12397;
	R9247[41] = (char *(*)()) F748_12397;
	R9247[42] = (char *(*)()) F749_12397;
	R9247[43] = (char *(*)()) F750_12397;
	R9247[44] = (char *(*)()) F751_12397;
	R9247[60] = (char *(*)()) F797_12820;
	R9247[61] = (char *(*)()) F798_12820;
	R9247[62] = (char *(*)()) F799_12820;
	R9247[63] = (char *(*)()) F800_12820;
	R9247[64] = (char *(*)()) F797_12821;
	R9247[65] = (char *(*)()) F802_12890;
	R9247[66] = (char *(*)()) F803_12684;
	R9247[67] = (char *(*)()) F804_12684;
	R9247[68] = (char *(*)()) F805_12684;
	R9247[69] = (char *(*)()) F806_12684;
	R9247[70] = (char *(*)()) F807_12684;
	R9247[71] = (char *(*)()) F808_12684;
	R9247[72] = (char *(*)()) F809_12684;
	R9247[73] = (char *(*)()) F810_12684;
	R9247[74] = (char *(*)()) F811_12684;
	R9247[75] = (char *(*)()) F812_12684;
	R9247[76] = (char *(*)()) F813_12684;
	R9247[77] = (char *(*)()) F814_12684;
	R9247[78] = (char *(*)()) F815_12684;
	R9247[79] = (char *(*)()) F816_12684;
	R9247[80] = (char *(*)()) F817_12684;
	R9247[81] = (char *(*)()) F818_12712;
	R9247[82] = (char *(*)()) F819_12712;
	{long i; for (i = 83; i < 85; i++) R9247[i] = (char *(*)()) F820_12733;}
}

char *(*R9248[25])();
void R9248_init () {
	R9248[0] = (char *(*)()) F797_12793;
	R9248[1] = (char *(*)()) F798_12793;
	R9248[2] = (char *(*)()) F799_12793;
	R9248[3] = (char *(*)()) F800_12793;
	R9248[4] = (char *(*)()) F797_12793;
	R9248[5] = (char *(*)()) F798_12793;
	R9248[6] = (char *(*)()) F803_12642;
	R9248[7] = (char *(*)()) F804_12642;
	R9248[8] = (char *(*)()) F805_12642;
	R9248[9] = (char *(*)()) F806_12642;
	R9248[10] = (char *(*)()) F807_12642;
	R9248[11] = (char *(*)()) F808_12642;
	R9248[12] = (char *(*)()) F809_12642;
	R9248[13] = (char *(*)()) F810_12642;
	R9248[14] = (char *(*)()) F811_12642;
	R9248[15] = (char *(*)()) F812_12642;
	R9248[16] = (char *(*)()) F813_12642;
	R9248[17] = (char *(*)()) F814_12642;
	R9248[18] = (char *(*)()) F815_12642;
	R9248[19] = (char *(*)()) F816_12642;
	R9248[20] = (char *(*)()) F817_12642;
	R9248[21] = (char *(*)()) F803_12642;
	R9248[22] = (char *(*)()) F806_12642;
	{long i; for (i = 23; i < 25; i++) R9248[i] = (char *(*)()) F803_12642;}
}

static EIF_TYPE_INDEX Y9248_pgtype0[] = {480,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y9248_pgtype1[] = {481,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y9248_pgtype2[] = {482,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y9248_pgtype3[] = {483,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y9248_pgtype4[] = {480,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y9248_pgtype5[] = {481,0xFFF8,1,0xFFFF};
EIF_TYPE_INDEX *Y9248_gen_type [382];
EIF_TYPE_INDEX Y9248 [382];
void Y9248_init (void) {
	Y9248_gen_type [357] = Y9248_pgtype0;
	Y9248_gen_type [358] = Y9248_pgtype1;
	Y9248_gen_type [359] = Y9248_pgtype2;
	Y9248_gen_type [360] = Y9248_pgtype3;
	Y9248_gen_type [361] = Y9248_pgtype4;
	Y9248_gen_type [362] = Y9248_pgtype5;
	{long i; for (i = 0; i < 15; i++) Y9248[i] = 478;};
	{long i; for (i = 297; i < 357; i++) Y9248[i] = 478;};
	Y9248[357] = 480;
	Y9248[358] = 481;
	Y9248[359] = 482;
	Y9248[360] = 483;
	Y9248[361] = 480;
	Y9248[362] = 481;
	{long i; for (i = 363; i < 382; i++) Y9248[i] = 484;};
}

char *(*R9250[25])();
void R9250_init () {
	R9250[0] = (char *(*)()) F797_12812;
	R9250[1] = (char *(*)()) F798_12812;
	R9250[2] = (char *(*)()) F799_12812;
	R9250[3] = (char *(*)()) F800_12812;
	R9250[4] = (char *(*)()) F797_12812;
	R9250[5] = (char *(*)()) F798_12812;
	R9250[6] = (char *(*)()) F803_12667;
	R9250[7] = (char *(*)()) F804_12667;
	R9250[8] = (char *(*)()) F805_12667;
	R9250[9] = (char *(*)()) F806_12667;
	R9250[10] = (char *(*)()) F807_12667;
	R9250[11] = (char *(*)()) F808_12667;
	R9250[12] = (char *(*)()) F809_12667;
	R9250[13] = (char *(*)()) F810_12667;
	R9250[14] = (char *(*)()) F811_12667;
	R9250[15] = (char *(*)()) F812_12667;
	R9250[16] = (char *(*)()) F813_12667;
	R9250[17] = (char *(*)()) F814_12667;
	R9250[18] = (char *(*)()) F815_12667;
	R9250[19] = (char *(*)()) F816_12667;
	R9250[20] = (char *(*)()) F817_12667;
	R9250[21] = (char *(*)()) F803_12667;
	R9250[22] = (char *(*)()) F806_12667;
	{long i; for (i = 23; i < 25; i++) R9250[i] = (char *(*)()) F803_12667;}
}

char *(*R9286[566])();
void R9286_init () {
	{long i; for (i = 0; i < 3; i++) R9286[i] = (char *(*)()) F460_9950_9286;}
	{long i; for (i = 142; i < 146; i++) R9286[i] = (char *(*)()) F602_14059_9286;}
	R9286[337] = (char *(*)()) F797_12789;
	R9286[338] = (char *(*)()) F798_12789_9286;
	R9286[339] = (char *(*)()) F799_12789_9286;
	R9286[340] = (char *(*)()) F800_12789_9286;
	R9286[341] = (char *(*)()) F797_12789;
	R9286[342] = (char *(*)()) F798_12789_9286;
	R9286[343] = (char *(*)()) F803_12636;
	R9286[344] = (char *(*)()) F804_12636_9286;
	R9286[345] = (char *(*)()) F805_12636_9286;
	R9286[346] = (char *(*)()) F806_12636_9286;
	R9286[347] = (char *(*)()) F807_12636_9286;
	R9286[348] = (char *(*)()) F808_12636_9286;
	R9286[349] = (char *(*)()) F809_12636_9286;
	R9286[350] = (char *(*)()) F810_12636_9286;
	R9286[351] = (char *(*)()) F811_12636_9286;
	R9286[352] = (char *(*)()) F812_12636_9286;
	R9286[353] = (char *(*)()) F813_12636_9286;
	R9286[354] = (char *(*)()) F814_12636_9286;
	R9286[355] = (char *(*)()) F815_12636_9286;
	R9286[356] = (char *(*)()) F816_12636_9286;
	R9286[357] = (char *(*)()) F817_12636_9286;
	R9286[358] = (char *(*)()) F803_12636;
	R9286[359] = (char *(*)()) F806_12636_9286;
	{long i; for (i = 360; i < 362; i++) R9286[i] = (char *(*)()) F803_12636;}
	R9286[565] = (char *(*)()) F602_14059_9286;
}
static EIF_REFERENCE F460_9950_9286 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F460_9950(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(993, 993, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F602_14059_9286 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F602_14059(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(829, 829, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F798_12789_9286 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F798_12789(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(832, 832, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F799_12789_9286 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F799_12789(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(1017, 1017, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F800_12789_9286 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F800_12789(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(993, 993, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F804_12636_9286 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F804_12636(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(993, 993, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F805_12636_9286 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F805_12636(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(1014, 1014, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F806_12636_9286 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F806_12636(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(832, 832, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F807_12636_9286 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F807_12636(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(1002, 1002, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F808_12636_9286 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F808_12636(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(990, 990, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F809_12636_9286 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F809_12636(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(1005, 1005, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F810_12636_9286 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F810_12636(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(865, 865, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F811_12636_9286 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F811_12636(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(829, 829, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F812_12636_9286 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F812_12636(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(1008, 1008, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F813_12636_9286 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F813_12636(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(1017, 1017, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F814_12636_9286 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F814_12636(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(826, 826, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F815_12636_9286 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F815_12636(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(996, 996, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F816_12636_9286 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F816_12636(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r4;
	} else {
		Result = RTLNS(1011, 1011, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F817_12636_9286 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F817_12636(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(999, 999, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}

char *(*R9287[757])();
void R9287_init () {
	R9287[0] = (char *(*)()) F269_9737;
	R9287[1] = (char *(*)()) F270_9737;
	R9287[2] = (char *(*)()) F271_9737;
	R9287[3] = (char *(*)()) F272_9737;
	R9287[4] = (char *(*)()) F273_9737;
	R9287[5] = (char *(*)()) F274_9737;
	R9287[6] = (char *(*)()) F275_9737;
	R9287[7] = (char *(*)()) F276_9737;
	R9287[8] = (char *(*)()) F277_9737;
	R9287[9] = (char *(*)()) F278_9737;
	R9287[10] = (char *(*)()) F279_9737;
	R9287[11] = (char *(*)()) F280_9737;
	R9287[12] = (char *(*)()) F281_9737;
	R9287[13] = (char *(*)()) F282_9737;
	R9287[14] = (char *(*)()) F283_9737;
	R9287[15] = (char *(*)()) F284_9903;
	R9287[16] = (char *(*)()) F285_9903;
	R9287[17] = (char *(*)()) F286_9903;
	R9287[18] = (char *(*)()) F287_9903;
	R9287[19] = (char *(*)()) F288_9903;
	R9287[20] = (char *(*)()) F289_9903;
	R9287[21] = (char *(*)()) F290_9903;
	R9287[22] = (char *(*)()) F291_9903;
	R9287[23] = (char *(*)()) F292_9903;
	R9287[24] = (char *(*)()) F293_9903;
	R9287[25] = (char *(*)()) F294_9903;
	R9287[26] = (char *(*)()) F295_9903;
	R9287[27] = (char *(*)()) F296_9903;
	R9287[28] = (char *(*)()) F297_9903;
	R9287[29] = (char *(*)()) F298_9903;
	{long i; for (i = 191; i < 194; i++) R9287[i] = (char *(*)()) F270_9737;}
	R9287[194] = (char *(*)()) F284_9903;
	R9287[195] = (char *(*)()) F285_9903;
	R9287[196] = (char *(*)()) F286_9903;
	R9287[197] = (char *(*)()) F287_9903;
	R9287[198] = (char *(*)()) F288_9903;
	R9287[199] = (char *(*)()) F289_9903;
	R9287[200] = (char *(*)()) F290_9903;
	R9287[201] = (char *(*)()) F291_9903;
	R9287[202] = (char *(*)()) F292_9903;
	R9287[203] = (char *(*)()) F293_9903;
	R9287[204] = (char *(*)()) F294_9903;
	R9287[205] = (char *(*)()) F295_9903;
	R9287[206] = (char *(*)()) F296_9903;
	R9287[207] = (char *(*)()) F297_9903;
	R9287[208] = (char *(*)()) F298_9903;
	{long i; for (i = 333; i < 337; i++) R9287[i] = (char *(*)()) F602_14078;}
	R9287[468] = (char *(*)()) F737_12389;
	R9287[469] = (char *(*)()) F738_12389;
	R9287[470] = (char *(*)()) F739_12389;
	R9287[471] = (char *(*)()) F740_12389;
	R9287[472] = (char *(*)()) F741_12389;
	R9287[473] = (char *(*)()) F742_12389;
	R9287[474] = (char *(*)()) F743_12389;
	R9287[475] = (char *(*)()) F744_12389;
	R9287[476] = (char *(*)()) F745_12389;
	R9287[477] = (char *(*)()) F746_12389;
	R9287[478] = (char *(*)()) F747_12389;
	R9287[479] = (char *(*)()) F748_12389;
	R9287[480] = (char *(*)()) F749_12389;
	R9287[481] = (char *(*)()) F750_12389;
	R9287[482] = (char *(*)()) F751_12389;
	R9287[483] = (char *(*)()) F737_12389;
	R9287[484] = (char *(*)()) F738_12389;
	R9287[485] = (char *(*)()) F739_12389;
	R9287[486] = (char *(*)()) F740_12389;
	R9287[487] = (char *(*)()) F741_12389;
	R9287[488] = (char *(*)()) F742_12389;
	R9287[489] = (char *(*)()) F743_12389;
	R9287[490] = (char *(*)()) F744_12389;
	R9287[491] = (char *(*)()) F745_12389;
	R9287[492] = (char *(*)()) F746_12389;
	R9287[493] = (char *(*)()) F747_12389;
	R9287[494] = (char *(*)()) F748_12389;
	R9287[495] = (char *(*)()) F749_12389;
	R9287[496] = (char *(*)()) F750_12389;
	R9287[497] = (char *(*)()) F751_12389;
	R9287[498] = (char *(*)()) F737_12389;
	R9287[499] = (char *(*)()) F738_12389;
	R9287[500] = (char *(*)()) F739_12389;
	R9287[501] = (char *(*)()) F740_12389;
	R9287[502] = (char *(*)()) F741_12389;
	R9287[503] = (char *(*)()) F742_12389;
	R9287[504] = (char *(*)()) F743_12389;
	R9287[505] = (char *(*)()) F744_12389;
	R9287[506] = (char *(*)()) F745_12389;
	R9287[507] = (char *(*)()) F746_12389;
	R9287[508] = (char *(*)()) F747_12389;
	R9287[509] = (char *(*)()) F748_12389;
	R9287[510] = (char *(*)()) F749_12389;
	R9287[511] = (char *(*)()) F750_12389;
	R9287[512] = (char *(*)()) F751_12389;
	R9287[513] = (char *(*)()) F737_12389;
	R9287[514] = (char *(*)()) F738_12389;
	R9287[515] = (char *(*)()) F739_12389;
	R9287[516] = (char *(*)()) F740_12389;
	R9287[517] = (char *(*)()) F741_12389;
	R9287[518] = (char *(*)()) F742_12389;
	R9287[519] = (char *(*)()) F743_12389;
	R9287[520] = (char *(*)()) F744_12389;
	R9287[521] = (char *(*)()) F745_12389;
	R9287[522] = (char *(*)()) F746_12389;
	R9287[523] = (char *(*)()) F747_12389;
	R9287[524] = (char *(*)()) F748_12389;
	R9287[525] = (char *(*)()) F749_12389;
	R9287[526] = (char *(*)()) F750_12389;
	R9287[527] = (char *(*)()) F751_12389;
	R9287[528] = (char *(*)()) F797_12800;
	R9287[529] = (char *(*)()) F798_12800;
	R9287[530] = (char *(*)()) F799_12800;
	R9287[531] = (char *(*)()) F800_12800;
	R9287[532] = (char *(*)()) F797_12800;
	R9287[533] = (char *(*)()) F798_12800;
	R9287[534] = (char *(*)()) F737_12389;
	R9287[535] = (char *(*)()) F738_12389;
	R9287[536] = (char *(*)()) F739_12389;
	R9287[537] = (char *(*)()) F740_12389;
	R9287[538] = (char *(*)()) F741_12389;
	R9287[539] = (char *(*)()) F742_12389;
	R9287[540] = (char *(*)()) F743_12389;
	R9287[541] = (char *(*)()) F744_12389;
	R9287[542] = (char *(*)()) F745_12389;
	R9287[543] = (char *(*)()) F746_12389;
	R9287[544] = (char *(*)()) F747_12389;
	R9287[545] = (char *(*)()) F748_12389;
	R9287[546] = (char *(*)()) F749_12389;
	R9287[547] = (char *(*)()) F750_12389;
	R9287[548] = (char *(*)()) F751_12389;
	R9287[549] = (char *(*)()) F737_12389;
	R9287[550] = (char *(*)()) F740_12389;
	{long i; for (i = 551; i < 553; i++) R9287[i] = (char *(*)()) F737_12389;}
	R9287[756] = (char *(*)()) F602_14078;
}

char *(*R9288[566])();
void R9288_init () {
	{long i; for (i = 0; i < 3; i++) R9288[i] = (char *(*)()) F460_9958;}
	{long i; for (i = 142; i < 146; i++) R9288[i] = (char *(*)()) F602_14133;}
	R9288[277] = (char *(*)()) F737_12382;
	R9288[278] = (char *(*)()) F738_12382;
	R9288[279] = (char *(*)()) F739_12382;
	R9288[280] = (char *(*)()) F740_12382;
	R9288[281] = (char *(*)()) F741_12382;
	R9288[282] = (char *(*)()) F742_12382;
	R9288[283] = (char *(*)()) F743_12382;
	R9288[284] = (char *(*)()) F744_12382;
	R9288[285] = (char *(*)()) F745_12382;
	R9288[286] = (char *(*)()) F746_12382;
	R9288[287] = (char *(*)()) F747_12382;
	R9288[288] = (char *(*)()) F748_12382;
	R9288[289] = (char *(*)()) F749_12382;
	R9288[290] = (char *(*)()) F750_12382;
	R9288[291] = (char *(*)()) F751_12382;
	R9288[292] = (char *(*)()) F737_12382;
	R9288[293] = (char *(*)()) F738_12382;
	R9288[294] = (char *(*)()) F739_12382;
	R9288[295] = (char *(*)()) F740_12382;
	R9288[296] = (char *(*)()) F741_12382;
	R9288[297] = (char *(*)()) F742_12382;
	R9288[298] = (char *(*)()) F743_12382;
	R9288[299] = (char *(*)()) F744_12382;
	R9288[300] = (char *(*)()) F745_12382;
	R9288[301] = (char *(*)()) F746_12382;
	R9288[302] = (char *(*)()) F747_12382;
	R9288[303] = (char *(*)()) F748_12382;
	R9288[304] = (char *(*)()) F749_12382;
	R9288[305] = (char *(*)()) F750_12382;
	R9288[306] = (char *(*)()) F751_12382;
	R9288[307] = (char *(*)()) F737_12382;
	R9288[308] = (char *(*)()) F738_12382;
	R9288[309] = (char *(*)()) F739_12382;
	R9288[310] = (char *(*)()) F740_12382;
	R9288[311] = (char *(*)()) F741_12382;
	R9288[312] = (char *(*)()) F742_12382;
	R9288[313] = (char *(*)()) F743_12382;
	R9288[314] = (char *(*)()) F744_12382;
	R9288[315] = (char *(*)()) F745_12382;
	R9288[316] = (char *(*)()) F746_12382;
	R9288[317] = (char *(*)()) F747_12382;
	R9288[318] = (char *(*)()) F748_12382;
	R9288[319] = (char *(*)()) F749_12382;
	R9288[320] = (char *(*)()) F750_12382;
	R9288[321] = (char *(*)()) F751_12382;
	R9288[322] = (char *(*)()) F737_12382;
	R9288[323] = (char *(*)()) F738_12382;
	R9288[324] = (char *(*)()) F739_12382;
	R9288[325] = (char *(*)()) F740_12382;
	R9288[326] = (char *(*)()) F741_12382;
	R9288[327] = (char *(*)()) F742_12382;
	R9288[328] = (char *(*)()) F743_12382;
	R9288[329] = (char *(*)()) F744_12382;
	R9288[330] = (char *(*)()) F745_12382;
	R9288[331] = (char *(*)()) F746_12382;
	R9288[332] = (char *(*)()) F747_12382;
	R9288[333] = (char *(*)()) F748_12382;
	R9288[334] = (char *(*)()) F749_12382;
	R9288[335] = (char *(*)()) F750_12382;
	R9288[336] = (char *(*)()) F751_12382;
	R9288[337] = (char *(*)()) F797_12806;
	R9288[338] = (char *(*)()) F798_12806;
	R9288[339] = (char *(*)()) F799_12806;
	R9288[340] = (char *(*)()) F800_12806;
	R9288[341] = (char *(*)()) F797_12806;
	R9288[342] = (char *(*)()) F798_12806;
	R9288[343] = (char *(*)()) F803_12662;
	R9288[344] = (char *(*)()) F804_12662;
	R9288[345] = (char *(*)()) F805_12662;
	R9288[346] = (char *(*)()) F806_12662;
	R9288[347] = (char *(*)()) F807_12662;
	R9288[348] = (char *(*)()) F808_12662;
	R9288[349] = (char *(*)()) F809_12662;
	R9288[350] = (char *(*)()) F810_12662;
	R9288[351] = (char *(*)()) F811_12662;
	R9288[352] = (char *(*)()) F812_12662;
	R9288[353] = (char *(*)()) F813_12662;
	R9288[354] = (char *(*)()) F814_12662;
	R9288[355] = (char *(*)()) F815_12662;
	R9288[356] = (char *(*)()) F816_12662;
	R9288[357] = (char *(*)()) F817_12662;
	R9288[358] = (char *(*)()) F803_12662;
	R9288[359] = (char *(*)()) F806_12662;
	{long i; for (i = 360; i < 362; i++) R9288[i] = (char *(*)()) F803_12662;}
	R9288[565] = (char *(*)()) F602_14133;
}

char *(*R9297[757])();
void R9297_init () {
	R9297[0] = (char *(*)()) F269_9731;
	R9297[1] = (char *(*)()) F270_9731_9297;
	R9297[2] = (char *(*)()) F271_9731_9297;
	R9297[3] = (char *(*)()) F272_9731_9297;
	R9297[4] = (char *(*)()) F273_9731_9297;
	R9297[5] = (char *(*)()) F274_9731_9297;
	R9297[6] = (char *(*)()) F275_9731_9297;
	R9297[7] = (char *(*)()) F276_9731_9297;
	R9297[8] = (char *(*)()) F277_9731_9297;
	R9297[9] = (char *(*)()) F278_9731_9297;
	R9297[10] = (char *(*)()) F279_9731_9297;
	R9297[11] = (char *(*)()) F280_9731_9297;
	R9297[12] = (char *(*)()) F281_9731_9297;
	R9297[13] = (char *(*)()) F282_9731_9297;
	R9297[14] = (char *(*)()) F283_9731_9297;
	R9297[15] = (char *(*)()) F284_9906;
	R9297[16] = (char *(*)()) F285_9906_9297;
	R9297[17] = (char *(*)()) F286_9906_9297;
	R9297[18] = (char *(*)()) F287_9906_9297;
	R9297[19] = (char *(*)()) F288_9906_9297;
	R9297[20] = (char *(*)()) F289_9906_9297;
	R9297[21] = (char *(*)()) F290_9906_9297;
	R9297[22] = (char *(*)()) F291_9906_9297;
	R9297[23] = (char *(*)()) F292_9906_9297;
	R9297[24] = (char *(*)()) F293_9906_9297;
	R9297[25] = (char *(*)()) F294_9906_9297;
	R9297[26] = (char *(*)()) F295_9906_9297;
	R9297[27] = (char *(*)()) F296_9906_9297;
	R9297[28] = (char *(*)()) F297_9906_9297;
	R9297[29] = (char *(*)()) F298_9906_9297;
	{long i; for (i = 191; i < 194; i++) R9297[i] = (char *(*)()) F270_9731_9297;}
	R9297[194] = (char *(*)()) F284_9906;
	R9297[195] = (char *(*)()) F285_9906_9297;
	R9297[196] = (char *(*)()) F286_9906_9297;
	R9297[197] = (char *(*)()) F287_9906_9297;
	R9297[198] = (char *(*)()) F288_9906_9297;
	R9297[199] = (char *(*)()) F289_9906_9297;
	R9297[200] = (char *(*)()) F290_9906_9297;
	R9297[201] = (char *(*)()) F291_9906_9297;
	R9297[202] = (char *(*)()) F292_9906_9297;
	R9297[203] = (char *(*)()) F293_9906_9297;
	R9297[204] = (char *(*)()) F294_9906_9297;
	R9297[205] = (char *(*)()) F295_9906_9297;
	R9297[206] = (char *(*)()) F296_9906_9297;
	R9297[207] = (char *(*)()) F297_9906_9297;
	R9297[208] = (char *(*)()) F298_9906_9297;
	{long i; for (i = 333; i < 337; i++) R9297[i] = (char *(*)()) F292_9906_9297;}
	R9297[468] = (char *(*)()) F284_9906;
	R9297[469] = (char *(*)()) F285_9906_9297;
	R9297[470] = (char *(*)()) F286_9906_9297;
	R9297[471] = (char *(*)()) F287_9906_9297;
	R9297[472] = (char *(*)()) F288_9906_9297;
	R9297[473] = (char *(*)()) F289_9906_9297;
	R9297[474] = (char *(*)()) F290_9906_9297;
	R9297[475] = (char *(*)()) F291_9906_9297;
	R9297[476] = (char *(*)()) F292_9906_9297;
	R9297[477] = (char *(*)()) F293_9906_9297;
	R9297[478] = (char *(*)()) F294_9906_9297;
	R9297[479] = (char *(*)()) F295_9906_9297;
	R9297[480] = (char *(*)()) F296_9906_9297;
	R9297[481] = (char *(*)()) F297_9906_9297;
	R9297[482] = (char *(*)()) F298_9906_9297;
	R9297[483] = (char *(*)()) F284_9906;
	R9297[484] = (char *(*)()) F285_9906_9297;
	R9297[485] = (char *(*)()) F286_9906_9297;
	R9297[486] = (char *(*)()) F287_9906_9297;
	R9297[487] = (char *(*)()) F288_9906_9297;
	R9297[488] = (char *(*)()) F289_9906_9297;
	R9297[489] = (char *(*)()) F290_9906_9297;
	R9297[490] = (char *(*)()) F291_9906_9297;
	R9297[491] = (char *(*)()) F292_9906_9297;
	R9297[492] = (char *(*)()) F293_9906_9297;
	R9297[493] = (char *(*)()) F294_9906_9297;
	R9297[494] = (char *(*)()) F295_9906_9297;
	R9297[495] = (char *(*)()) F296_9906_9297;
	R9297[496] = (char *(*)()) F297_9906_9297;
	R9297[497] = (char *(*)()) F298_9906_9297;
	R9297[498] = (char *(*)()) F284_9906;
	R9297[499] = (char *(*)()) F285_9906_9297;
	R9297[500] = (char *(*)()) F286_9906_9297;
	R9297[501] = (char *(*)()) F287_9906_9297;
	R9297[502] = (char *(*)()) F288_9906_9297;
	R9297[503] = (char *(*)()) F289_9906_9297;
	R9297[504] = (char *(*)()) F290_9906_9297;
	R9297[505] = (char *(*)()) F291_9906_9297;
	R9297[506] = (char *(*)()) F292_9906_9297;
	R9297[507] = (char *(*)()) F293_9906_9297;
	R9297[508] = (char *(*)()) F294_9906_9297;
	R9297[509] = (char *(*)()) F295_9906_9297;
	R9297[510] = (char *(*)()) F296_9906_9297;
	R9297[511] = (char *(*)()) F297_9906_9297;
	R9297[512] = (char *(*)()) F298_9906_9297;
	R9297[513] = (char *(*)()) F284_9906;
	R9297[514] = (char *(*)()) F285_9906_9297;
	R9297[515] = (char *(*)()) F286_9906_9297;
	R9297[516] = (char *(*)()) F287_9906_9297;
	R9297[517] = (char *(*)()) F288_9906_9297;
	R9297[518] = (char *(*)()) F289_9906_9297;
	R9297[519] = (char *(*)()) F290_9906_9297;
	R9297[520] = (char *(*)()) F291_9906_9297;
	R9297[521] = (char *(*)()) F292_9906_9297;
	R9297[522] = (char *(*)()) F293_9906_9297;
	R9297[523] = (char *(*)()) F294_9906_9297;
	R9297[524] = (char *(*)()) F295_9906_9297;
	R9297[525] = (char *(*)()) F296_9906_9297;
	R9297[526] = (char *(*)()) F297_9906_9297;
	R9297[527] = (char *(*)()) F298_9906_9297;
	R9297[528] = (char *(*)()) F284_9906;
	R9297[529] = (char *(*)()) F287_9906_9297;
	R9297[530] = (char *(*)()) F294_9906_9297;
	R9297[531] = (char *(*)()) F285_9906_9297;
	R9297[532] = (char *(*)()) F284_9906;
	R9297[533] = (char *(*)()) F287_9906_9297;
	R9297[534] = (char *(*)()) F803_12668;
	R9297[535] = (char *(*)()) F804_12668_9297;
	R9297[536] = (char *(*)()) F805_12668_9297;
	R9297[537] = (char *(*)()) F806_12668_9297;
	R9297[538] = (char *(*)()) F807_12668_9297;
	R9297[539] = (char *(*)()) F808_12668_9297;
	R9297[540] = (char *(*)()) F809_12668_9297;
	R9297[541] = (char *(*)()) F810_12668_9297;
	R9297[542] = (char *(*)()) F811_12668_9297;
	R9297[543] = (char *(*)()) F812_12668_9297;
	R9297[544] = (char *(*)()) F813_12668_9297;
	R9297[545] = (char *(*)()) F814_12668_9297;
	R9297[546] = (char *(*)()) F815_12668_9297;
	R9297[547] = (char *(*)()) F816_12668_9297;
	R9297[548] = (char *(*)()) F817_12668_9297;
	R9297[549] = (char *(*)()) F803_12668;
	R9297[550] = (char *(*)()) F806_12668_9297;
	{long i; for (i = 551; i < 553; i++) R9297[i] = (char *(*)()) F803_12668;}
	R9297[756] = (char *(*)()) F292_9906_9297;
}
static void F270_9731_9297 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F270_9731(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F271_9731_9297 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F271_9731(Current, *(EIF_REAL_64 *)arg1);
}
static void F272_9731_9297 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F272_9731(Current, *(EIF_BOOLEAN *)arg1);
}
static void F273_9731_9297 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F273_9731(Current, *(EIF_NATURAL_64 *)arg1);
}
static void F274_9731_9297 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F274_9731(Current, *(EIF_INTEGER_64 *)arg1);
}
static void F275_9731_9297 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F275_9731(Current, *(EIF_NATURAL_32 *)arg1);
}
static void F276_9731_9297 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F276_9731(Current, *(EIF_POINTER *)arg1);
}
static void F277_9731_9297 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F277_9731(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F278_9731_9297 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F278_9731(Current, *(EIF_NATURAL_16 *)arg1);
}
static void F279_9731_9297 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F279_9731(Current, *(EIF_NATURAL_8 *)arg1);
}
static void F280_9731_9297 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F280_9731(Current, *(EIF_CHARACTER_32 *)arg1);
}
static void F281_9731_9297 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F281_9731(Current, *(EIF_INTEGER_16 *)arg1);
}
static void F282_9731_9297 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F282_9731(Current, *(EIF_REAL_32 *)arg1);
}
static void F283_9731_9297 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F283_9731(Current, *(EIF_INTEGER_8 *)arg1);
}
static void F285_9906_9297 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F285_9906(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F286_9906_9297 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F286_9906(Current, *(EIF_REAL_64 *)arg1);
}
static void F287_9906_9297 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F287_9906(Current, *(EIF_BOOLEAN *)arg1);
}
static void F288_9906_9297 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F288_9906(Current, *(EIF_NATURAL_64 *)arg1);
}
static void F289_9906_9297 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F289_9906(Current, *(EIF_INTEGER_64 *)arg1);
}
static void F290_9906_9297 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F290_9906(Current, *(EIF_NATURAL_32 *)arg1);
}
static void F291_9906_9297 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F291_9906(Current, *(EIF_POINTER *)arg1);
}
static void F292_9906_9297 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F292_9906(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F293_9906_9297 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F293_9906(Current, *(EIF_NATURAL_16 *)arg1);
}
static void F294_9906_9297 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F294_9906(Current, *(EIF_NATURAL_8 *)arg1);
}
static void F295_9906_9297 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F295_9906(Current, *(EIF_CHARACTER_32 *)arg1);
}
static void F296_9906_9297 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F296_9906(Current, *(EIF_INTEGER_16 *)arg1);
}
static void F297_9906_9297 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F297_9906(Current, *(EIF_REAL_32 *)arg1);
}
static void F298_9906_9297 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F298_9906(Current, *(EIF_INTEGER_8 *)arg1);
}
static void F804_12668_9297 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F804_12668(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F805_12668_9297 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F805_12668(Current, *(EIF_REAL_64 *)arg1);
}
static void F806_12668_9297 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F806_12668(Current, *(EIF_BOOLEAN *)arg1);
}
static void F807_12668_9297 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F807_12668(Current, *(EIF_NATURAL_64 *)arg1);
}
static void F808_12668_9297 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F808_12668(Current, *(EIF_INTEGER_64 *)arg1);
}
static void F809_12668_9297 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F809_12668(Current, *(EIF_NATURAL_32 *)arg1);
}
static void F810_12668_9297 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F810_12668(Current, *(EIF_POINTER *)arg1);
}
static void F811_12668_9297 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F811_12668(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F812_12668_9297 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F812_12668(Current, *(EIF_NATURAL_16 *)arg1);
}
static void F813_12668_9297 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F813_12668(Current, *(EIF_NATURAL_8 *)arg1);
}
static void F814_12668_9297 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F814_12668(Current, *(EIF_CHARACTER_32 *)arg1);
}
static void F815_12668_9297 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F815_12668(Current, *(EIF_INTEGER_16 *)arg1);
}
static void F816_12668_9297 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F816_12668(Current, *(EIF_REAL_32 *)arg1);
}
static void F817_12668_9297 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F817_12668(Current, *(EIF_INTEGER_8 *)arg1);
}

char *(*R9298[566])();
void R9298_init () {
	{long i; for (i = 0; i < 3; i++) R9298[i] = (char *(*)()) F460_9949;}
	{long i; for (i = 143; i < 146; i++) R9298[i] = (char *(*)()) F602_14060;}
	R9298[337] = (char *(*)()) F797_12792;
	R9298[338] = (char *(*)()) F798_12792;
	R9298[339] = (char *(*)()) F799_12792;
	R9298[340] = (char *(*)()) F800_12792;
	R9298[341] = (char *(*)()) F797_12792;
	R9298[342] = (char *(*)()) F798_12792;
	R9298[343] = (char *(*)()) F803_12641;
	R9298[344] = (char *(*)()) F804_12641;
	R9298[345] = (char *(*)()) F805_12641;
	R9298[346] = (char *(*)()) F806_12641;
	R9298[347] = (char *(*)()) F807_12641;
	R9298[348] = (char *(*)()) F808_12641;
	R9298[349] = (char *(*)()) F809_12641;
	R9298[350] = (char *(*)()) F810_12641;
	R9298[351] = (char *(*)()) F811_12641;
	R9298[352] = (char *(*)()) F812_12641;
	R9298[353] = (char *(*)()) F813_12641;
	R9298[354] = (char *(*)()) F814_12641;
	R9298[355] = (char *(*)()) F815_12641;
	R9298[356] = (char *(*)()) F816_12641;
	R9298[357] = (char *(*)()) F817_12641;
	R9298[358] = (char *(*)()) F803_12641;
	R9298[359] = (char *(*)()) F806_12641;
	{long i; for (i = 360; i < 362; i++) R9298[i] = (char *(*)()) F803_12641;}
	R9298[565] = (char *(*)()) F602_14060;
}

char *(*R9301[757])();
void R9301_init () {
	R9301[0] = (char *(*)()) F269_9735;
	R9301[1] = (char *(*)()) F270_9735;
	R9301[2] = (char *(*)()) F271_9735;
	R9301[3] = (char *(*)()) F272_9735;
	R9301[4] = (char *(*)()) F273_9735;
	R9301[5] = (char *(*)()) F274_9735;
	R9301[6] = (char *(*)()) F275_9735;
	R9301[7] = (char *(*)()) F276_9735;
	R9301[8] = (char *(*)()) F277_9735;
	R9301[9] = (char *(*)()) F278_9735;
	R9301[10] = (char *(*)()) F279_9735;
	R9301[11] = (char *(*)()) F280_9735;
	R9301[12] = (char *(*)()) F281_9735;
	R9301[13] = (char *(*)()) F282_9735;
	R9301[14] = (char *(*)()) F283_9735;
	R9301[15] = (char *(*)()) F269_9735;
	R9301[16] = (char *(*)()) F270_9735;
	R9301[17] = (char *(*)()) F271_9735;
	R9301[18] = (char *(*)()) F272_9735;
	R9301[19] = (char *(*)()) F273_9735;
	R9301[20] = (char *(*)()) F274_9735;
	R9301[21] = (char *(*)()) F275_9735;
	R9301[22] = (char *(*)()) F276_9735;
	R9301[23] = (char *(*)()) F277_9735;
	R9301[24] = (char *(*)()) F278_9735;
	R9301[25] = (char *(*)()) F279_9735;
	R9301[26] = (char *(*)()) F280_9735;
	R9301[27] = (char *(*)()) F281_9735;
	R9301[28] = (char *(*)()) F282_9735;
	R9301[29] = (char *(*)()) F283_9735;
	{long i; for (i = 191; i < 194; i++) R9301[i] = (char *(*)()) F270_9735;}
	R9301[194] = (char *(*)()) F269_9735;
	R9301[195] = (char *(*)()) F270_9735;
	R9301[196] = (char *(*)()) F271_9735;
	R9301[197] = (char *(*)()) F272_9735;
	R9301[198] = (char *(*)()) F273_9735;
	R9301[199] = (char *(*)()) F274_9735;
	R9301[200] = (char *(*)()) F275_9735;
	R9301[201] = (char *(*)()) F276_9735;
	R9301[202] = (char *(*)()) F277_9735;
	R9301[203] = (char *(*)()) F278_9735;
	R9301[204] = (char *(*)()) F279_9735;
	R9301[205] = (char *(*)()) F280_9735;
	R9301[206] = (char *(*)()) F281_9735;
	R9301[207] = (char *(*)()) F282_9735;
	R9301[208] = (char *(*)()) F283_9735;
	{long i; for (i = 333; i < 337; i++) R9301[i] = (char *(*)()) F277_9735;}
	R9301[468] = (char *(*)()) F269_9735;
	R9301[469] = (char *(*)()) F270_9735;
	R9301[470] = (char *(*)()) F271_9735;
	R9301[471] = (char *(*)()) F272_9735;
	R9301[472] = (char *(*)()) F273_9735;
	R9301[473] = (char *(*)()) F274_9735;
	R9301[474] = (char *(*)()) F275_9735;
	R9301[475] = (char *(*)()) F276_9735;
	R9301[476] = (char *(*)()) F277_9735;
	R9301[477] = (char *(*)()) F278_9735;
	R9301[478] = (char *(*)()) F279_9735;
	R9301[479] = (char *(*)()) F280_9735;
	R9301[480] = (char *(*)()) F281_9735;
	R9301[481] = (char *(*)()) F282_9735;
	R9301[482] = (char *(*)()) F283_9735;
	R9301[483] = (char *(*)()) F269_9735;
	R9301[484] = (char *(*)()) F270_9735;
	R9301[485] = (char *(*)()) F271_9735;
	R9301[486] = (char *(*)()) F272_9735;
	R9301[487] = (char *(*)()) F273_9735;
	R9301[488] = (char *(*)()) F274_9735;
	R9301[489] = (char *(*)()) F275_9735;
	R9301[490] = (char *(*)()) F276_9735;
	R9301[491] = (char *(*)()) F277_9735;
	R9301[492] = (char *(*)()) F278_9735;
	R9301[493] = (char *(*)()) F279_9735;
	R9301[494] = (char *(*)()) F280_9735;
	R9301[495] = (char *(*)()) F281_9735;
	R9301[496] = (char *(*)()) F282_9735;
	R9301[497] = (char *(*)()) F283_9735;
	R9301[498] = (char *(*)()) F269_9735;
	R9301[499] = (char *(*)()) F270_9735;
	R9301[500] = (char *(*)()) F271_9735;
	R9301[501] = (char *(*)()) F272_9735;
	R9301[502] = (char *(*)()) F273_9735;
	R9301[503] = (char *(*)()) F274_9735;
	R9301[504] = (char *(*)()) F275_9735;
	R9301[505] = (char *(*)()) F276_9735;
	R9301[506] = (char *(*)()) F277_9735;
	R9301[507] = (char *(*)()) F278_9735;
	R9301[508] = (char *(*)()) F279_9735;
	R9301[509] = (char *(*)()) F280_9735;
	R9301[510] = (char *(*)()) F281_9735;
	R9301[511] = (char *(*)()) F282_9735;
	R9301[512] = (char *(*)()) F283_9735;
	R9301[513] = (char *(*)()) F269_9735;
	R9301[514] = (char *(*)()) F270_9735;
	R9301[515] = (char *(*)()) F271_9735;
	R9301[516] = (char *(*)()) F272_9735;
	R9301[517] = (char *(*)()) F273_9735;
	R9301[518] = (char *(*)()) F274_9735;
	R9301[519] = (char *(*)()) F275_9735;
	R9301[520] = (char *(*)()) F276_9735;
	R9301[521] = (char *(*)()) F277_9735;
	R9301[522] = (char *(*)()) F278_9735;
	R9301[523] = (char *(*)()) F279_9735;
	R9301[524] = (char *(*)()) F280_9735;
	R9301[525] = (char *(*)()) F281_9735;
	R9301[526] = (char *(*)()) F282_9735;
	R9301[527] = (char *(*)()) F283_9735;
	R9301[528] = (char *(*)()) F269_9735;
	R9301[529] = (char *(*)()) F272_9735;
	R9301[530] = (char *(*)()) F279_9735;
	R9301[531] = (char *(*)()) F270_9735;
	R9301[532] = (char *(*)()) F269_9735;
	R9301[533] = (char *(*)()) F272_9735;
	R9301[534] = (char *(*)()) F269_9735;
	R9301[535] = (char *(*)()) F270_9735;
	R9301[536] = (char *(*)()) F271_9735;
	R9301[537] = (char *(*)()) F272_9735;
	R9301[538] = (char *(*)()) F273_9735;
	R9301[539] = (char *(*)()) F274_9735;
	R9301[540] = (char *(*)()) F275_9735;
	R9301[541] = (char *(*)()) F276_9735;
	R9301[542] = (char *(*)()) F277_9735;
	R9301[543] = (char *(*)()) F278_9735;
	R9301[544] = (char *(*)()) F279_9735;
	R9301[545] = (char *(*)()) F280_9735;
	R9301[546] = (char *(*)()) F281_9735;
	R9301[547] = (char *(*)()) F282_9735;
	R9301[548] = (char *(*)()) F283_9735;
	R9301[549] = (char *(*)()) F269_9735;
	R9301[550] = (char *(*)()) F272_9735;
	{long i; for (i = 551; i < 553; i++) R9301[i] = (char *(*)()) F269_9735;}
	R9301[756] = (char *(*)()) F277_9735;
}

char *(*R9302[566])();
void R9302_init () {
	{long i; for (i = 0; i < 3; i++) R9302[i] = (char *(*)()) F460_9951;}
	{long i; for (i = 142; i < 146; i++) R9302[i] = (char *(*)()) F602_14076;}
	R9302[307] = (char *(*)()) F767_12451;
	R9302[308] = (char *(*)()) F768_12451;
	R9302[309] = (char *(*)()) F769_12451;
	R9302[310] = (char *(*)()) F770_12451;
	R9302[311] = (char *(*)()) F771_12451;
	R9302[312] = (char *(*)()) F772_12451;
	R9302[313] = (char *(*)()) F773_12451;
	R9302[314] = (char *(*)()) F774_12451;
	R9302[315] = (char *(*)()) F775_12451;
	R9302[316] = (char *(*)()) F776_12451;
	R9302[317] = (char *(*)()) F777_12451;
	R9302[318] = (char *(*)()) F778_12451;
	R9302[319] = (char *(*)()) F779_12451;
	R9302[320] = (char *(*)()) F780_12451;
	R9302[321] = (char *(*)()) F781_12451;
	R9302[322] = (char *(*)()) F767_12451;
	R9302[323] = (char *(*)()) F768_12451;
	R9302[324] = (char *(*)()) F769_12451;
	R9302[325] = (char *(*)()) F770_12451;
	R9302[326] = (char *(*)()) F771_12451;
	R9302[327] = (char *(*)()) F772_12451;
	R9302[328] = (char *(*)()) F773_12451;
	R9302[329] = (char *(*)()) F774_12451;
	R9302[330] = (char *(*)()) F775_12451;
	R9302[331] = (char *(*)()) F776_12451;
	R9302[332] = (char *(*)()) F777_12451;
	R9302[333] = (char *(*)()) F778_12451;
	R9302[334] = (char *(*)()) F779_12451;
	R9302[335] = (char *(*)()) F780_12451;
	R9302[336] = (char *(*)()) F781_12451;
	R9302[337] = (char *(*)()) F797_12798;
	R9302[338] = (char *(*)()) F798_12798;
	R9302[339] = (char *(*)()) F799_12798;
	R9302[340] = (char *(*)()) F800_12798;
	R9302[341] = (char *(*)()) F797_12798;
	R9302[342] = (char *(*)()) F798_12798;
	R9302[343] = (char *(*)()) F767_12451;
	R9302[344] = (char *(*)()) F768_12451;
	R9302[345] = (char *(*)()) F769_12451;
	R9302[346] = (char *(*)()) F770_12451;
	R9302[347] = (char *(*)()) F771_12451;
	R9302[348] = (char *(*)()) F772_12451;
	R9302[349] = (char *(*)()) F773_12451;
	R9302[350] = (char *(*)()) F774_12451;
	R9302[351] = (char *(*)()) F775_12451;
	R9302[352] = (char *(*)()) F776_12451;
	R9302[353] = (char *(*)()) F777_12451;
	R9302[354] = (char *(*)()) F778_12451;
	R9302[355] = (char *(*)()) F779_12451;
	R9302[356] = (char *(*)()) F780_12451;
	R9302[357] = (char *(*)()) F781_12451;
	R9302[358] = (char *(*)()) F767_12451;
	R9302[359] = (char *(*)()) F770_12451;
	{long i; for (i = 360; i < 362; i++) R9302[i] = (char *(*)()) F767_12451;}
	R9302[565] = (char *(*)()) F602_14076;
}

char *(*R9303[85])();
void R9303_init () {
	R9303[0] = (char *(*)()) F737_12383;
	R9303[1] = (char *(*)()) F738_12383;
	R9303[2] = (char *(*)()) F739_12383;
	R9303[3] = (char *(*)()) F740_12383;
	R9303[4] = (char *(*)()) F741_12383;
	R9303[5] = (char *(*)()) F742_12383;
	R9303[6] = (char *(*)()) F743_12383;
	R9303[7] = (char *(*)()) F744_12383;
	R9303[8] = (char *(*)()) F745_12383;
	R9303[9] = (char *(*)()) F746_12383;
	R9303[10] = (char *(*)()) F747_12383;
	R9303[11] = (char *(*)()) F748_12383;
	R9303[12] = (char *(*)()) F749_12383;
	R9303[13] = (char *(*)()) F750_12383;
	R9303[14] = (char *(*)()) F751_12383;
	R9303[15] = (char *(*)()) F737_12383;
	R9303[16] = (char *(*)()) F738_12383;
	R9303[17] = (char *(*)()) F739_12383;
	R9303[18] = (char *(*)()) F740_12383;
	R9303[19] = (char *(*)()) F741_12383;
	R9303[20] = (char *(*)()) F742_12383;
	R9303[21] = (char *(*)()) F743_12383;
	R9303[22] = (char *(*)()) F744_12383;
	R9303[23] = (char *(*)()) F745_12383;
	R9303[24] = (char *(*)()) F746_12383;
	R9303[25] = (char *(*)()) F747_12383;
	R9303[26] = (char *(*)()) F748_12383;
	R9303[27] = (char *(*)()) F749_12383;
	R9303[28] = (char *(*)()) F750_12383;
	R9303[29] = (char *(*)()) F751_12383;
	R9303[30] = (char *(*)()) F737_12383;
	R9303[31] = (char *(*)()) F738_12383;
	R9303[32] = (char *(*)()) F739_12383;
	R9303[33] = (char *(*)()) F740_12383;
	R9303[34] = (char *(*)()) F741_12383;
	R9303[35] = (char *(*)()) F742_12383;
	R9303[36] = (char *(*)()) F743_12383;
	R9303[37] = (char *(*)()) F744_12383;
	R9303[38] = (char *(*)()) F745_12383;
	R9303[39] = (char *(*)()) F746_12383;
	R9303[40] = (char *(*)()) F747_12383;
	R9303[41] = (char *(*)()) F748_12383;
	R9303[42] = (char *(*)()) F749_12383;
	R9303[43] = (char *(*)()) F750_12383;
	R9303[44] = (char *(*)()) F751_12383;
	R9303[45] = (char *(*)()) F737_12383;
	R9303[46] = (char *(*)()) F738_12383;
	R9303[47] = (char *(*)()) F739_12383;
	R9303[48] = (char *(*)()) F740_12383;
	R9303[49] = (char *(*)()) F741_12383;
	R9303[50] = (char *(*)()) F742_12383;
	R9303[51] = (char *(*)()) F743_12383;
	R9303[52] = (char *(*)()) F744_12383;
	R9303[53] = (char *(*)()) F745_12383;
	R9303[54] = (char *(*)()) F746_12383;
	R9303[55] = (char *(*)()) F747_12383;
	R9303[56] = (char *(*)()) F748_12383;
	R9303[57] = (char *(*)()) F749_12383;
	R9303[58] = (char *(*)()) F750_12383;
	R9303[59] = (char *(*)()) F751_12383;
	R9303[60] = (char *(*)()) F797_12807;
	R9303[61] = (char *(*)()) F798_12807;
	R9303[62] = (char *(*)()) F799_12807;
	R9303[63] = (char *(*)()) F800_12807;
	R9303[64] = (char *(*)()) F797_12807;
	R9303[65] = (char *(*)()) F798_12807;
	R9303[66] = (char *(*)()) F803_12663;
	R9303[67] = (char *(*)()) F804_12663;
	R9303[68] = (char *(*)()) F805_12663;
	R9303[69] = (char *(*)()) F806_12663;
	R9303[70] = (char *(*)()) F807_12663;
	R9303[71] = (char *(*)()) F808_12663;
	R9303[72] = (char *(*)()) F809_12663;
	R9303[73] = (char *(*)()) F810_12663;
	R9303[74] = (char *(*)()) F811_12663;
	R9303[75] = (char *(*)()) F812_12663;
	R9303[76] = (char *(*)()) F813_12663;
	R9303[77] = (char *(*)()) F814_12663;
	R9303[78] = (char *(*)()) F815_12663;
	R9303[79] = (char *(*)()) F816_12663;
	R9303[80] = (char *(*)()) F817_12663;
	R9303[81] = (char *(*)()) F803_12663;
	R9303[82] = (char *(*)()) F806_12663;
	{long i; for (i = 83; i < 85; i++) R9303[i] = (char *(*)()) F803_12663;}
}

char *(*R9304[566])();
void R9304_init () {
	{long i; for (i = 0; i < 3; i++) R9304[i] = (char *(*)()) F460_9957;}
	{long i; for (i = 142; i < 146; i++) R9304[i] = (char *(*)()) F602_14135;}
	R9304[337] = (char *(*)()) F797_12808;
	R9304[338] = (char *(*)()) F798_12808;
	R9304[339] = (char *(*)()) F799_12808;
	R9304[340] = (char *(*)()) F800_12808;
	R9304[341] = (char *(*)()) F797_12808;
	R9304[342] = (char *(*)()) F798_12808;
	R9304[343] = (char *(*)()) F803_12664;
	R9304[344] = (char *(*)()) F804_12664;
	R9304[345] = (char *(*)()) F805_12664;
	R9304[346] = (char *(*)()) F806_12664;
	R9304[347] = (char *(*)()) F807_12664;
	R9304[348] = (char *(*)()) F808_12664;
	R9304[349] = (char *(*)()) F809_12664;
	R9304[350] = (char *(*)()) F810_12664;
	R9304[351] = (char *(*)()) F811_12664;
	R9304[352] = (char *(*)()) F812_12664;
	R9304[353] = (char *(*)()) F813_12664;
	R9304[354] = (char *(*)()) F814_12664;
	R9304[355] = (char *(*)()) F815_12664;
	R9304[356] = (char *(*)()) F816_12664;
	R9304[357] = (char *(*)()) F817_12664;
	R9304[358] = (char *(*)()) F803_12664;
	R9304[359] = (char *(*)()) F806_12664;
	{long i; for (i = 360; i < 362; i++) R9304[i] = (char *(*)()) F803_12664;}
	R9304[565] = (char *(*)()) F602_14135;
}

char *(*R9385[424])();
void R9385_init () {
	{long i; for (i = 0; i < 4; i++) R9385[i] = (char *(*)()) F602_14077;}
	R9385[165] = (char *(*)()) F767_12452;
	R9385[166] = (char *(*)()) F768_12452;
	R9385[167] = (char *(*)()) F769_12452;
	R9385[168] = (char *(*)()) F770_12452;
	R9385[169] = (char *(*)()) F771_12452;
	R9385[170] = (char *(*)()) F772_12452;
	R9385[171] = (char *(*)()) F773_12452;
	R9385[172] = (char *(*)()) F774_12452;
	R9385[173] = (char *(*)()) F775_12452;
	R9385[174] = (char *(*)()) F776_12452;
	R9385[175] = (char *(*)()) F777_12452;
	R9385[176] = (char *(*)()) F778_12452;
	R9385[177] = (char *(*)()) F779_12452;
	R9385[178] = (char *(*)()) F780_12452;
	R9385[179] = (char *(*)()) F781_12452;
	R9385[180] = (char *(*)()) F767_12452;
	R9385[181] = (char *(*)()) F768_12452;
	R9385[182] = (char *(*)()) F769_12452;
	R9385[183] = (char *(*)()) F770_12452;
	R9385[184] = (char *(*)()) F771_12452;
	R9385[185] = (char *(*)()) F772_12452;
	R9385[186] = (char *(*)()) F773_12452;
	R9385[187] = (char *(*)()) F774_12452;
	R9385[188] = (char *(*)()) F775_12452;
	R9385[189] = (char *(*)()) F776_12452;
	R9385[190] = (char *(*)()) F777_12452;
	R9385[191] = (char *(*)()) F778_12452;
	R9385[192] = (char *(*)()) F779_12452;
	R9385[193] = (char *(*)()) F780_12452;
	R9385[194] = (char *(*)()) F781_12452;
	R9385[195] = (char *(*)()) F797_12799;
	R9385[196] = (char *(*)()) F798_12799;
	R9385[197] = (char *(*)()) F799_12799;
	R9385[198] = (char *(*)()) F800_12799;
	R9385[199] = (char *(*)()) F797_12799;
	R9385[200] = (char *(*)()) F798_12799;
	R9385[201] = (char *(*)()) F767_12452;
	R9385[202] = (char *(*)()) F768_12452;
	R9385[203] = (char *(*)()) F769_12452;
	R9385[204] = (char *(*)()) F770_12452;
	R9385[205] = (char *(*)()) F771_12452;
	R9385[206] = (char *(*)()) F772_12452;
	R9385[207] = (char *(*)()) F773_12452;
	R9385[208] = (char *(*)()) F774_12452;
	R9385[209] = (char *(*)()) F775_12452;
	R9385[210] = (char *(*)()) F776_12452;
	R9385[211] = (char *(*)()) F777_12452;
	R9385[212] = (char *(*)()) F778_12452;
	R9385[213] = (char *(*)()) F779_12452;
	R9385[214] = (char *(*)()) F780_12452;
	R9385[215] = (char *(*)()) F781_12452;
	R9385[216] = (char *(*)()) F767_12452;
	R9385[217] = (char *(*)()) F770_12452;
	{long i; for (i = 218; i < 220; i++) R9385[i] = (char *(*)()) F767_12452;}
	R9385[423] = (char *(*)()) F602_14077;
}

char *(*R9386[424])();
void R9386_init () {
	{long i; for (i = 0; i < 3; i++) R9386[i] = (char *(*)()) F602_14136;}
	R9386[3] = (char *(*)()) F605_14394;
	R9386[195] = (char *(*)()) F797_12809;
	R9386[196] = (char *(*)()) F798_12809;
	R9386[197] = (char *(*)()) F799_12809;
	R9386[198] = (char *(*)()) F800_12809;
	R9386[199] = (char *(*)()) F797_12809;
	R9386[200] = (char *(*)()) F798_12809;
	R9386[201] = (char *(*)()) F803_12665;
	R9386[202] = (char *(*)()) F804_12665;
	R9386[203] = (char *(*)()) F805_12665;
	R9386[204] = (char *(*)()) F806_12665;
	R9386[205] = (char *(*)()) F807_12665;
	R9386[206] = (char *(*)()) F808_12665;
	R9386[207] = (char *(*)()) F809_12665;
	R9386[208] = (char *(*)()) F810_12665;
	R9386[209] = (char *(*)()) F811_12665;
	R9386[210] = (char *(*)()) F812_12665;
	R9386[211] = (char *(*)()) F813_12665;
	R9386[212] = (char *(*)()) F814_12665;
	R9386[213] = (char *(*)()) F815_12665;
	R9386[214] = (char *(*)()) F816_12665;
	R9386[215] = (char *(*)()) F817_12665;
	R9386[216] = (char *(*)()) F803_12665;
	R9386[217] = (char *(*)()) F806_12665;
	{long i; for (i = 218; i < 220; i++) R9386[i] = (char *(*)()) F803_12665;}
	R9386[423] = (char *(*)()) F1025_20120;
}

char *(*R9387[742])();
void R9387_init () {
	R9387[0] = (char *(*)()) F269_9731;
	R9387[1] = (char *(*)()) F270_9731_9387;
	R9387[2] = (char *(*)()) F271_9731_9387;
	R9387[3] = (char *(*)()) F272_9731_9387;
	R9387[4] = (char *(*)()) F273_9731_9387;
	R9387[5] = (char *(*)()) F274_9731_9387;
	R9387[6] = (char *(*)()) F275_9731_9387;
	R9387[7] = (char *(*)()) F276_9731_9387;
	R9387[8] = (char *(*)()) F277_9731_9387;
	R9387[9] = (char *(*)()) F278_9731_9387;
	R9387[10] = (char *(*)()) F279_9731_9387;
	R9387[11] = (char *(*)()) F280_9731_9387;
	R9387[12] = (char *(*)()) F281_9731_9387;
	R9387[13] = (char *(*)()) F282_9731_9387;
	R9387[14] = (char *(*)()) F283_9731_9387;
	R9387[179] = (char *(*)()) F269_9731;
	R9387[180] = (char *(*)()) F270_9731_9387;
	R9387[181] = (char *(*)()) F271_9731_9387;
	R9387[182] = (char *(*)()) F272_9731_9387;
	R9387[183] = (char *(*)()) F273_9731_9387;
	R9387[184] = (char *(*)()) F274_9731_9387;
	R9387[185] = (char *(*)()) F275_9731_9387;
	R9387[186] = (char *(*)()) F276_9731_9387;
	R9387[187] = (char *(*)()) F277_9731_9387;
	R9387[188] = (char *(*)()) F278_9731_9387;
	R9387[189] = (char *(*)()) F279_9731_9387;
	R9387[190] = (char *(*)()) F280_9731_9387;
	R9387[191] = (char *(*)()) F281_9731_9387;
	R9387[192] = (char *(*)()) F282_9731_9387;
	R9387[193] = (char *(*)()) F283_9731_9387;
	{long i; for (i = 318; i < 322; i++) R9387[i] = (char *(*)()) F277_9731_9387;}
	R9387[453] = (char *(*)()) F269_9731;
	R9387[454] = (char *(*)()) F270_9731_9387;
	R9387[455] = (char *(*)()) F271_9731_9387;
	R9387[456] = (char *(*)()) F272_9731_9387;
	R9387[457] = (char *(*)()) F273_9731_9387;
	R9387[458] = (char *(*)()) F274_9731_9387;
	R9387[459] = (char *(*)()) F275_9731_9387;
	R9387[460] = (char *(*)()) F276_9731_9387;
	R9387[461] = (char *(*)()) F277_9731_9387;
	R9387[462] = (char *(*)()) F278_9731_9387;
	R9387[463] = (char *(*)()) F279_9731_9387;
	R9387[464] = (char *(*)()) F280_9731_9387;
	R9387[465] = (char *(*)()) F281_9731_9387;
	R9387[466] = (char *(*)()) F282_9731_9387;
	R9387[467] = (char *(*)()) F283_9731_9387;
	R9387[468] = (char *(*)()) F269_9731;
	R9387[469] = (char *(*)()) F270_9731_9387;
	R9387[470] = (char *(*)()) F271_9731_9387;
	R9387[471] = (char *(*)()) F272_9731_9387;
	R9387[472] = (char *(*)()) F273_9731_9387;
	R9387[473] = (char *(*)()) F274_9731_9387;
	R9387[474] = (char *(*)()) F275_9731_9387;
	R9387[475] = (char *(*)()) F276_9731_9387;
	R9387[476] = (char *(*)()) F277_9731_9387;
	R9387[477] = (char *(*)()) F278_9731_9387;
	R9387[478] = (char *(*)()) F279_9731_9387;
	R9387[479] = (char *(*)()) F280_9731_9387;
	R9387[480] = (char *(*)()) F281_9731_9387;
	R9387[481] = (char *(*)()) F282_9731_9387;
	R9387[482] = (char *(*)()) F283_9731_9387;
	R9387[483] = (char *(*)()) F269_9731;
	R9387[484] = (char *(*)()) F270_9731_9387;
	R9387[485] = (char *(*)()) F271_9731_9387;
	R9387[486] = (char *(*)()) F272_9731_9387;
	R9387[487] = (char *(*)()) F273_9731_9387;
	R9387[488] = (char *(*)()) F274_9731_9387;
	R9387[489] = (char *(*)()) F275_9731_9387;
	R9387[490] = (char *(*)()) F276_9731_9387;
	R9387[491] = (char *(*)()) F277_9731_9387;
	R9387[492] = (char *(*)()) F278_9731_9387;
	R9387[493] = (char *(*)()) F279_9731_9387;
	R9387[494] = (char *(*)()) F280_9731_9387;
	R9387[495] = (char *(*)()) F281_9731_9387;
	R9387[496] = (char *(*)()) F282_9731_9387;
	R9387[497] = (char *(*)()) F283_9731_9387;
	R9387[498] = (char *(*)()) F269_9731;
	R9387[499] = (char *(*)()) F270_9731_9387;
	R9387[500] = (char *(*)()) F271_9731_9387;
	R9387[501] = (char *(*)()) F272_9731_9387;
	R9387[502] = (char *(*)()) F273_9731_9387;
	R9387[503] = (char *(*)()) F274_9731_9387;
	R9387[504] = (char *(*)()) F275_9731_9387;
	R9387[505] = (char *(*)()) F276_9731_9387;
	R9387[506] = (char *(*)()) F277_9731_9387;
	R9387[507] = (char *(*)()) F278_9731_9387;
	R9387[508] = (char *(*)()) F279_9731_9387;
	R9387[509] = (char *(*)()) F280_9731_9387;
	R9387[510] = (char *(*)()) F281_9731_9387;
	R9387[511] = (char *(*)()) F282_9731_9387;
	R9387[512] = (char *(*)()) F283_9731_9387;
	R9387[513] = (char *(*)()) F269_9731;
	R9387[514] = (char *(*)()) F272_9731_9387;
	R9387[515] = (char *(*)()) F279_9731_9387;
	R9387[516] = (char *(*)()) F270_9731_9387;
	R9387[517] = (char *(*)()) F269_9731;
	R9387[518] = (char *(*)()) F272_9731_9387;
	R9387[519] = (char *(*)()) F269_9731;
	R9387[520] = (char *(*)()) F270_9731_9387;
	R9387[521] = (char *(*)()) F271_9731_9387;
	R9387[522] = (char *(*)()) F272_9731_9387;
	R9387[523] = (char *(*)()) F273_9731_9387;
	R9387[524] = (char *(*)()) F274_9731_9387;
	R9387[525] = (char *(*)()) F275_9731_9387;
	R9387[526] = (char *(*)()) F276_9731_9387;
	R9387[527] = (char *(*)()) F277_9731_9387;
	R9387[528] = (char *(*)()) F278_9731_9387;
	R9387[529] = (char *(*)()) F279_9731_9387;
	R9387[530] = (char *(*)()) F280_9731_9387;
	R9387[531] = (char *(*)()) F281_9731_9387;
	R9387[532] = (char *(*)()) F282_9731_9387;
	R9387[533] = (char *(*)()) F283_9731_9387;
	R9387[534] = (char *(*)()) F269_9731;
	R9387[535] = (char *(*)()) F272_9731_9387;
	{long i; for (i = 536; i < 538; i++) R9387[i] = (char *(*)()) F269_9731;}
	R9387[741] = (char *(*)()) F277_9731_9387;
}
static void F270_9731_9387 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F270_9731(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F271_9731_9387 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F271_9731(Current, *(EIF_REAL_64 *)arg1);
}
static void F272_9731_9387 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F272_9731(Current, *(EIF_BOOLEAN *)arg1);
}
static void F273_9731_9387 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F273_9731(Current, *(EIF_NATURAL_64 *)arg1);
}
static void F274_9731_9387 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F274_9731(Current, *(EIF_INTEGER_64 *)arg1);
}
static void F275_9731_9387 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F275_9731(Current, *(EIF_NATURAL_32 *)arg1);
}
static void F276_9731_9387 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F276_9731(Current, *(EIF_POINTER *)arg1);
}
static void F277_9731_9387 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F277_9731(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F278_9731_9387 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F278_9731(Current, *(EIF_NATURAL_16 *)arg1);
}
static void F279_9731_9387 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F279_9731(Current, *(EIF_NATURAL_8 *)arg1);
}
static void F280_9731_9387 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F280_9731(Current, *(EIF_CHARACTER_32 *)arg1);
}
static void F281_9731_9387 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F281_9731(Current, *(EIF_INTEGER_16 *)arg1);
}
static void F282_9731_9387 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F282_9731(Current, *(EIF_REAL_32 *)arg1);
}
static void F283_9731_9387 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F283_9731(Current, *(EIF_INTEGER_8 *)arg1);
}

char *(*R9400[563])();
void R9400_init () {
	R9400[0] = (char *(*)()) F463_9944;
	R9400[1] = (char *(*)()) F464_9944_9400;
	R9400[2] = (char *(*)()) F465_9944_9400;
	R9400[3] = (char *(*)()) F466_9944_9400;
	R9400[4] = (char *(*)()) F467_9944_9400;
	R9400[5] = (char *(*)()) F468_9944_9400;
	R9400[6] = (char *(*)()) F469_9944_9400;
	R9400[7] = (char *(*)()) F470_9944_9400;
	R9400[8] = (char *(*)()) F471_9944_9400;
	R9400[9] = (char *(*)()) F472_9944_9400;
	R9400[10] = (char *(*)()) F473_9944_9400;
	R9400[11] = (char *(*)()) F474_9944_9400;
	R9400[12] = (char *(*)()) F475_9944_9400;
	R9400[13] = (char *(*)()) F476_9944_9400;
	R9400[14] = (char *(*)()) F477_9944_9400;
	{long i; for (i = 139; i < 143; i++) R9400[i] = (char *(*)()) F471_9944_9400;}
	R9400[274] = (char *(*)()) F463_9944;
	R9400[275] = (char *(*)()) F464_9944_9400;
	R9400[276] = (char *(*)()) F465_9944_9400;
	R9400[277] = (char *(*)()) F466_9944_9400;
	R9400[278] = (char *(*)()) F467_9944_9400;
	R9400[279] = (char *(*)()) F468_9944_9400;
	R9400[280] = (char *(*)()) F469_9944_9400;
	R9400[281] = (char *(*)()) F470_9944_9400;
	R9400[282] = (char *(*)()) F471_9944_9400;
	R9400[283] = (char *(*)()) F472_9944_9400;
	R9400[284] = (char *(*)()) F473_9944_9400;
	R9400[285] = (char *(*)()) F474_9944_9400;
	R9400[286] = (char *(*)()) F475_9944_9400;
	R9400[287] = (char *(*)()) F476_9944_9400;
	R9400[288] = (char *(*)()) F477_9944_9400;
	R9400[289] = (char *(*)()) F463_9944;
	R9400[290] = (char *(*)()) F464_9944_9400;
	R9400[291] = (char *(*)()) F465_9944_9400;
	R9400[292] = (char *(*)()) F466_9944_9400;
	R9400[293] = (char *(*)()) F467_9944_9400;
	R9400[294] = (char *(*)()) F468_9944_9400;
	R9400[295] = (char *(*)()) F469_9944_9400;
	R9400[296] = (char *(*)()) F470_9944_9400;
	R9400[297] = (char *(*)()) F471_9944_9400;
	R9400[298] = (char *(*)()) F472_9944_9400;
	R9400[299] = (char *(*)()) F473_9944_9400;
	R9400[300] = (char *(*)()) F474_9944_9400;
	R9400[301] = (char *(*)()) F475_9944_9400;
	R9400[302] = (char *(*)()) F476_9944_9400;
	R9400[303] = (char *(*)()) F477_9944_9400;
	R9400[304] = (char *(*)()) F463_9944;
	R9400[305] = (char *(*)()) F464_9944_9400;
	R9400[306] = (char *(*)()) F465_9944_9400;
	R9400[307] = (char *(*)()) F466_9944_9400;
	R9400[308] = (char *(*)()) F467_9944_9400;
	R9400[309] = (char *(*)()) F468_9944_9400;
	R9400[310] = (char *(*)()) F469_9944_9400;
	R9400[311] = (char *(*)()) F470_9944_9400;
	R9400[312] = (char *(*)()) F471_9944_9400;
	R9400[313] = (char *(*)()) F472_9944_9400;
	R9400[314] = (char *(*)()) F473_9944_9400;
	R9400[315] = (char *(*)()) F474_9944_9400;
	R9400[316] = (char *(*)()) F475_9944_9400;
	R9400[317] = (char *(*)()) F476_9944_9400;
	R9400[318] = (char *(*)()) F477_9944_9400;
	R9400[319] = (char *(*)()) F463_9944;
	R9400[320] = (char *(*)()) F464_9944_9400;
	R9400[321] = (char *(*)()) F465_9944_9400;
	R9400[322] = (char *(*)()) F466_9944_9400;
	R9400[323] = (char *(*)()) F467_9944_9400;
	R9400[324] = (char *(*)()) F468_9944_9400;
	R9400[325] = (char *(*)()) F469_9944_9400;
	R9400[326] = (char *(*)()) F470_9944_9400;
	R9400[327] = (char *(*)()) F471_9944_9400;
	R9400[328] = (char *(*)()) F472_9944_9400;
	R9400[329] = (char *(*)()) F473_9944_9400;
	R9400[330] = (char *(*)()) F474_9944_9400;
	R9400[331] = (char *(*)()) F475_9944_9400;
	R9400[332] = (char *(*)()) F476_9944_9400;
	R9400[333] = (char *(*)()) F477_9944_9400;
	R9400[334] = (char *(*)()) F463_9944;
	R9400[335] = (char *(*)()) F466_9944_9400;
	R9400[336] = (char *(*)()) F473_9944_9400;
	R9400[337] = (char *(*)()) F464_9944_9400;
	R9400[338] = (char *(*)()) F801_12872;
	R9400[339] = (char *(*)()) F802_12887_9400;
	R9400[340] = (char *(*)()) F803_12671;
	R9400[341] = (char *(*)()) F804_12671_9400;
	R9400[342] = (char *(*)()) F805_12671_9400;
	R9400[343] = (char *(*)()) F806_12671_9400;
	R9400[344] = (char *(*)()) F807_12671_9400;
	R9400[345] = (char *(*)()) F808_12671_9400;
	R9400[346] = (char *(*)()) F809_12671_9400;
	R9400[347] = (char *(*)()) F810_12671_9400;
	R9400[348] = (char *(*)()) F811_12671_9400;
	R9400[349] = (char *(*)()) F812_12671_9400;
	R9400[350] = (char *(*)()) F813_12671_9400;
	R9400[351] = (char *(*)()) F814_12671_9400;
	R9400[352] = (char *(*)()) F815_12671_9400;
	R9400[353] = (char *(*)()) F816_12671_9400;
	R9400[354] = (char *(*)()) F817_12671_9400;
	R9400[355] = (char *(*)()) F803_12671;
	R9400[356] = (char *(*)()) F806_12671_9400;
	{long i; for (i = 357; i < 359; i++) R9400[i] = (char *(*)()) F803_12671;}
	R9400[562] = (char *(*)()) F471_9944_9400;
}
static void F464_9944_9400 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F464_9944(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F465_9944_9400 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F465_9944(Current, *(EIF_REAL_64 *)arg1);
}
static void F466_9944_9400 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F466_9944(Current, *(EIF_BOOLEAN *)arg1);
}
static void F467_9944_9400 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F467_9944(Current, *(EIF_NATURAL_64 *)arg1);
}
static void F468_9944_9400 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F468_9944(Current, *(EIF_INTEGER_64 *)arg1);
}
static void F469_9944_9400 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F469_9944(Current, *(EIF_NATURAL_32 *)arg1);
}
static void F470_9944_9400 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F470_9944(Current, *(EIF_POINTER *)arg1);
}
static void F471_9944_9400 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F471_9944(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F472_9944_9400 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F472_9944(Current, *(EIF_NATURAL_16 *)arg1);
}
static void F473_9944_9400 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F473_9944(Current, *(EIF_NATURAL_8 *)arg1);
}
static void F474_9944_9400 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F474_9944(Current, *(EIF_CHARACTER_32 *)arg1);
}
static void F475_9944_9400 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F475_9944(Current, *(EIF_INTEGER_16 *)arg1);
}
static void F476_9944_9400 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F476_9944(Current, *(EIF_REAL_32 *)arg1);
}
static void F477_9944_9400 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F477_9944(Current, *(EIF_INTEGER_8 *)arg1);
}
static void F802_12887_9400 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F802_12887(Current, *(EIF_BOOLEAN *)arg1);
}
static void F804_12671_9400 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F804_12671(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F805_12671_9400 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F805_12671(Current, *(EIF_REAL_64 *)arg1);
}
static void F806_12671_9400 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F806_12671(Current, *(EIF_BOOLEAN *)arg1);
}
static void F807_12671_9400 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F807_12671(Current, *(EIF_NATURAL_64 *)arg1);
}
static void F808_12671_9400 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F808_12671(Current, *(EIF_INTEGER_64 *)arg1);
}
static void F809_12671_9400 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F809_12671(Current, *(EIF_NATURAL_32 *)arg1);
}
static void F810_12671_9400 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F810_12671(Current, *(EIF_POINTER *)arg1);
}
static void F811_12671_9400 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F811_12671(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F812_12671_9400 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F812_12671(Current, *(EIF_NATURAL_16 *)arg1);
}
static void F813_12671_9400 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F813_12671(Current, *(EIF_NATURAL_8 *)arg1);
}
static void F814_12671_9400 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F814_12671(Current, *(EIF_CHARACTER_32 *)arg1);
}
static void F815_12671_9400 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F815_12671(Current, *(EIF_INTEGER_16 *)arg1);
}
static void F816_12671_9400 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F816_12671(Current, *(EIF_REAL_32 *)arg1);
}
static void F817_12671_9400 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F817_12671(Current, *(EIF_INTEGER_8 *)arg1);
}

char *(*R9401[85])();
void R9401_init () {
	R9401[0] = (char *(*)()) F737_12393;
	R9401[1] = (char *(*)()) F738_12393;
	R9401[2] = (char *(*)()) F739_12393;
	R9401[3] = (char *(*)()) F740_12393;
	R9401[4] = (char *(*)()) F741_12393;
	R9401[5] = (char *(*)()) F742_12393;
	R9401[6] = (char *(*)()) F743_12393;
	R9401[7] = (char *(*)()) F744_12393;
	R9401[8] = (char *(*)()) F745_12393;
	R9401[9] = (char *(*)()) F746_12393;
	R9401[10] = (char *(*)()) F747_12393;
	R9401[11] = (char *(*)()) F748_12393;
	R9401[12] = (char *(*)()) F749_12393;
	R9401[13] = (char *(*)()) F750_12393;
	R9401[14] = (char *(*)()) F751_12393;
	R9401[15] = (char *(*)()) F737_12393;
	R9401[16] = (char *(*)()) F738_12393;
	R9401[17] = (char *(*)()) F739_12393;
	R9401[18] = (char *(*)()) F740_12393;
	R9401[19] = (char *(*)()) F741_12393;
	R9401[20] = (char *(*)()) F742_12393;
	R9401[21] = (char *(*)()) F743_12393;
	R9401[22] = (char *(*)()) F744_12393;
	R9401[23] = (char *(*)()) F745_12393;
	R9401[24] = (char *(*)()) F746_12393;
	R9401[25] = (char *(*)()) F747_12393;
	R9401[26] = (char *(*)()) F748_12393;
	R9401[27] = (char *(*)()) F749_12393;
	R9401[28] = (char *(*)()) F750_12393;
	R9401[29] = (char *(*)()) F751_12393;
	R9401[30] = (char *(*)()) F737_12393;
	R9401[31] = (char *(*)()) F738_12393;
	R9401[32] = (char *(*)()) F739_12393;
	R9401[33] = (char *(*)()) F740_12393;
	R9401[34] = (char *(*)()) F741_12393;
	R9401[35] = (char *(*)()) F742_12393;
	R9401[36] = (char *(*)()) F743_12393;
	R9401[37] = (char *(*)()) F744_12393;
	R9401[38] = (char *(*)()) F745_12393;
	R9401[39] = (char *(*)()) F746_12393;
	R9401[40] = (char *(*)()) F747_12393;
	R9401[41] = (char *(*)()) F748_12393;
	R9401[42] = (char *(*)()) F749_12393;
	R9401[43] = (char *(*)()) F750_12393;
	R9401[44] = (char *(*)()) F751_12393;
	R9401[45] = (char *(*)()) F737_12393;
	R9401[46] = (char *(*)()) F738_12393;
	R9401[47] = (char *(*)()) F739_12393;
	R9401[48] = (char *(*)()) F740_12393;
	R9401[49] = (char *(*)()) F741_12393;
	R9401[50] = (char *(*)()) F742_12393;
	R9401[51] = (char *(*)()) F743_12393;
	R9401[52] = (char *(*)()) F744_12393;
	R9401[53] = (char *(*)()) F745_12393;
	R9401[54] = (char *(*)()) F746_12393;
	R9401[55] = (char *(*)()) F747_12393;
	R9401[56] = (char *(*)()) F748_12393;
	R9401[57] = (char *(*)()) F749_12393;
	R9401[58] = (char *(*)()) F750_12393;
	R9401[59] = (char *(*)()) F751_12393;
	R9401[60] = (char *(*)()) F737_12393;
	R9401[61] = (char *(*)()) F740_12393;
	R9401[62] = (char *(*)()) F747_12393;
	R9401[63] = (char *(*)()) F738_12393;
	R9401[64] = (char *(*)()) F455_9643;
	R9401[65] = (char *(*)()) F456_9643;
	R9401[66] = (char *(*)()) F803_12678;
	R9401[67] = (char *(*)()) F804_12678;
	R9401[68] = (char *(*)()) F805_12678;
	R9401[69] = (char *(*)()) F806_12678;
	R9401[70] = (char *(*)()) F807_12678;
	R9401[71] = (char *(*)()) F808_12678;
	R9401[72] = (char *(*)()) F809_12678;
	R9401[73] = (char *(*)()) F810_12678;
	R9401[74] = (char *(*)()) F811_12678;
	R9401[75] = (char *(*)()) F812_12678;
	R9401[76] = (char *(*)()) F813_12678;
	R9401[77] = (char *(*)()) F814_12678;
	R9401[78] = (char *(*)()) F815_12678;
	R9401[79] = (char *(*)()) F816_12678;
	R9401[80] = (char *(*)()) F817_12678;
	R9401[81] = (char *(*)()) F455_9643;
	R9401[82] = (char *(*)()) F456_9643;
	{long i; for (i = 83; i < 85; i++) R9401[i] = (char *(*)()) F820_12728;}
}

char *(*R9580[10])();
void R9580_init () {
	R9580[0] = (char *(*)()) F121_10163;
	R9580[1] = (char *(*)()) F122_10163_9580;
	R9580[2] = (char *(*)()) F123_10163_9580;
	R9580[3] = (char *(*)()) F124_10163_9580;
	R9580[4] = (char *(*)()) F125_10163_9580;
	R9580[5] = (char *(*)()) F126_10163_9580;
	R9580[6] = (char *(*)()) F121_10163;
	R9580[7] = (char *(*)()) F122_10163_9580;
	R9580[8] = (char *(*)()) F124_10163_9580;
	R9580[9] = (char *(*)()) F126_10163_9580;
}
static EIF_REFERENCE F122_10163_9580 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F122_10163(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(832, 832, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F123_10163_9580 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F123_10163(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(1002, 1002, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F124_10163_9580 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F124_10163(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(1017, 1017, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F125_10163_9580 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F125_10163(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(826, 826, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F126_10163_9580 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F126_10163(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(993, 993, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}

char *(*R9581[10])();
void R9581_init () {
	R9581[0] = (char *(*)()) F121_10164;
	R9581[1] = (char *(*)()) F122_10164_9581;
	R9581[2] = (char *(*)()) F123_10164_9581;
	R9581[3] = (char *(*)()) F124_10164_9581;
	R9581[4] = (char *(*)()) F125_10164_9581;
	R9581[5] = (char *(*)()) F126_10164_9581;
	R9581[6] = (char *(*)()) F121_10164;
	R9581[7] = (char *(*)()) F122_10164_9581;
	R9581[8] = (char *(*)()) F124_10164_9581;
	R9581[9] = (char *(*)()) F126_10164_9581;
}
static void F122_10164_9581 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F122_10164(Current, *(EIF_BOOLEAN *)arg1);
}
static void F123_10164_9581 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F123_10164(Current, *(EIF_NATURAL_64 *)arg1);
}
static void F124_10164_9581 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F124_10164(Current, *(EIF_NATURAL_8 *)arg1);
}
static void F125_10164_9581 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F125_10164(Current, *(EIF_CHARACTER_32 *)arg1);
}
static void F126_10164_9581 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F126_10164(Current, *(EIF_INTEGER_32 *)arg1);
}

char *(*R9691[4])();
void R9691_init () {
	R9691[0] = (char *(*)()) F127_10387;
	R9691[1] = (char *(*)()) F128_10387;
	R9691[2] = (char *(*)()) F129_10387;
	R9691[3] = (char *(*)()) F130_10387;
}

char *(*R9692[4])();
void R9692_init () {
	R9692[0] = (char *(*)()) F127_10388;
	R9692[1] = (char *(*)()) F128_10388;
	R9692[2] = (char *(*)()) F129_10388;
	R9692[3] = (char *(*)()) F130_10388;
}

char *(*R9700[563])();
void R9700_init () {
	R9700[0] = (char *(*)()) F529_10408;
	R9700[2] = (char *(*)()) F531_10453;
	R9700[3] = (char *(*)()) F532_10484;
	R9700[4] = (char *(*)()) F533_10514;
	R9700[6] = (char *(*)()) F535_10542;
	R9700[294] = (char *(*)()) F823_16622;
	{long i; for (i = 296; i < 299; i++) R9700[i] = (char *(*)()) F825_16808;}
	{long i; for (i = 299; i < 302; i++) R9700[i] = (char *(*)()) F828_16847;}
	{long i; for (i = 358; i < 360; i++) R9700[i] = (char *(*)()) F887_17117;}
	{long i; for (i = 360; i < 362; i++) R9700[i] = (char *(*)()) F889_17189;}
	R9700[363] = (char *(*)()) F887_17117;
	{long i; for (i = 364; i < 367; i++) R9700[i] = (char *(*)()) F889_17189;}
	R9700[369] = (char *(*)()) F898_18484;
	R9700[375] = (char *(*)()) F904_18741;
	R9700[376] = (char *(*)()) F905_18778;
	R9700[377] = (char *(*)()) F906_18778;
	R9700[378] = (char *(*)()) F907_18778;
	R9700[379] = (char *(*)()) F908_18778;
	R9700[380] = (char *(*)()) F909_18778;
	R9700[381] = (char *(*)()) F910_18778;
	R9700[382] = (char *(*)()) F911_18778;
	R9700[383] = (char *(*)()) F912_18778;
	R9700[384] = (char *(*)()) F913_18778;
	R9700[385] = (char *(*)()) F914_18778;
	R9700[386] = (char *(*)()) F915_18778;
	R9700[387] = (char *(*)()) F916_18778;
	R9700[388] = (char *(*)()) F917_18778;
	R9700[389] = (char *(*)()) F918_18778;
	R9700[390] = (char *(*)()) F919_18778;
	R9700[391] = (char *(*)()) F920_18778;
	R9700[392] = (char *(*)()) F921_18778;
	R9700[393] = (char *(*)()) F922_18778;
	R9700[394] = (char *(*)()) F923_18778;
	R9700[395] = (char *(*)()) F924_18778;
	R9700[396] = (char *(*)()) F925_18778;
	R9700[397] = (char *(*)()) F926_18778;
	R9700[398] = (char *(*)()) F927_18778;
	R9700[399] = (char *(*)()) F928_18778;
	R9700[400] = (char *(*)()) F929_18778;
	R9700[401] = (char *(*)()) F930_18778;
	R9700[402] = (char *(*)()) F931_18778;
	R9700[403] = (char *(*)()) F932_18778;
	R9700[404] = (char *(*)()) F933_18778;
	R9700[405] = (char *(*)()) F934_18778;
	R9700[406] = (char *(*)()) F935_18778;
	R9700[407] = (char *(*)()) F936_18778;
	R9700[408] = (char *(*)()) F937_18778;
	R9700[409] = (char *(*)()) F938_18778;
	R9700[410] = (char *(*)()) F939_18778;
	R9700[411] = (char *(*)()) F940_18778;
	R9700[412] = (char *(*)()) F941_18778;
	R9700[413] = (char *(*)()) F942_18778;
	R9700[414] = (char *(*)()) F943_18778;
	R9700[415] = (char *(*)()) F944_18778;
	R9700[416] = (char *(*)()) F945_18778;
	R9700[417] = (char *(*)()) F946_18778;
	R9700[418] = (char *(*)()) F947_18778;
	R9700[419] = (char *(*)()) F948_18778;
	R9700[420] = (char *(*)()) F949_18778;
	R9700[421] = (char *(*)()) F950_18778;
	R9700[460] = (char *(*)()) F989_19078;
	R9700[461] = (char *(*)()) F990_19136_9700;
	R9700[462] = (char *(*)()) F991_19136_9700;
	R9700[463] = (char *(*)()) F992_19172;
	R9700[464] = (char *(*)()) F993_19231_9700;
	R9700[465] = (char *(*)()) F994_19231_9700;
	R9700[466] = (char *(*)()) F995_19267;
	R9700[467] = (char *(*)()) F996_19326_9700;
	R9700[468] = (char *(*)()) F997_19326_9700;
	R9700[469] = (char *(*)()) F998_19362;
	R9700[470] = (char *(*)()) F999_19421_9700;
	R9700[471] = (char *(*)()) F1000_19421_9700;
	R9700[472] = (char *(*)()) F1001_19457;
	R9700[473] = (char *(*)()) F1002_19512_9700;
	R9700[474] = (char *(*)()) F1003_19512_9700;
	R9700[475] = (char *(*)()) F1004_19547;
	R9700[476] = (char *(*)()) F1005_19602_9700;
	R9700[477] = (char *(*)()) F1006_19602_9700;
	R9700[478] = (char *(*)()) F1007_19637;
	R9700[479] = (char *(*)()) F1008_19693_9700;
	R9700[480] = (char *(*)()) F1009_19693_9700;
	R9700[481] = (char *(*)()) F1010_19732;
	R9700[482] = (char *(*)()) F1011_19762_9700;
	R9700[483] = (char *(*)()) F1012_19762_9700;
	R9700[484] = (char *(*)()) F1013_19791;
	R9700[485] = (char *(*)()) F1014_19821_9700;
	R9700[486] = (char *(*)()) F1015_19821_9700;
	R9700[487] = (char *(*)()) F1016_19846;
	R9700[488] = (char *(*)()) F1017_19902_9700;
	R9700[489] = (char *(*)()) F1018_19902_9700;
	R9700[555] = (char *(*)()) F1084_20920;
	R9700[557] = (char *(*)()) F1086_20959;
	R9700[562] = (char *(*)()) F1091_21069;
}
static EIF_BOOLEAN F990_19136_9700 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F990_19136(Current, *(EIF_INTEGER_64 *)arg1);
}
static EIF_BOOLEAN F991_19136_9700 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F991_19136(Current, *(EIF_INTEGER_64 *)arg1);
}
static EIF_BOOLEAN F993_19231_9700 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F993_19231(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F994_19231_9700 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F994_19231(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F996_19326_9700 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F996_19326(Current, *(EIF_INTEGER_16 *)arg1);
}
static EIF_BOOLEAN F997_19326_9700 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F997_19326(Current, *(EIF_INTEGER_16 *)arg1);
}
static EIF_BOOLEAN F999_19421_9700 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F999_19421(Current, *(EIF_INTEGER_8 *)arg1);
}
static EIF_BOOLEAN F1000_19421_9700 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F1000_19421(Current, *(EIF_INTEGER_8 *)arg1);
}
static EIF_BOOLEAN F1002_19512_9700 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F1002_19512(Current, *(EIF_NATURAL_64 *)arg1);
}
static EIF_BOOLEAN F1003_19512_9700 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F1003_19512(Current, *(EIF_NATURAL_64 *)arg1);
}
static EIF_BOOLEAN F1005_19602_9700 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F1005_19602(Current, *(EIF_NATURAL_32 *)arg1);
}
static EIF_BOOLEAN F1006_19602_9700 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F1006_19602(Current, *(EIF_NATURAL_32 *)arg1);
}
static EIF_BOOLEAN F1008_19693_9700 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F1008_19693(Current, *(EIF_NATURAL_16 *)arg1);
}
static EIF_BOOLEAN F1009_19693_9700 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F1009_19693(Current, *(EIF_NATURAL_16 *)arg1);
}
static EIF_BOOLEAN F1011_19762_9700 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F1011_19762(Current, *(EIF_REAL_32 *)arg1);
}
static EIF_BOOLEAN F1012_19762_9700 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F1012_19762(Current, *(EIF_REAL_32 *)arg1);
}
static EIF_BOOLEAN F1014_19821_9700 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F1014_19821(Current, *(EIF_REAL_64 *)arg1);
}
static EIF_BOOLEAN F1015_19821_9700 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F1015_19821(Current, *(EIF_REAL_64 *)arg1);
}
static EIF_BOOLEAN F1017_19902_9700 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F1017_19902(Current, *(EIF_NATURAL_8 *)arg1);
}
static EIF_BOOLEAN F1018_19902_9700 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F1018_19902(Current, *(EIF_NATURAL_8 *)arg1);
}

char *(*R9701[558])();
void R9701_init () {
	{long i; for (i = 0; i < 2; i++) R9701[i] = (char *(*)()) F534_10529;}
	R9701[289] = (char *(*)()) F534_10529;
	{long i; for (i = 291; i < 297; i++) R9701[i] = (char *(*)()) F534_10529;}
	{long i; for (i = 351; i < 362; i++) R9701[i] = (char *(*)()) F534_10529;}
	R9701[364] = (char *(*)()) F534_10529;
	R9701[370] = (char *(*)()) F534_10529;
	R9701[371] = (char *(*)()) F905_18779;
	R9701[372] = (char *(*)()) F906_18779;
	R9701[373] = (char *(*)()) F907_18779;
	R9701[374] = (char *(*)()) F908_18779;
	R9701[375] = (char *(*)()) F909_18779;
	R9701[376] = (char *(*)()) F910_18779;
	R9701[377] = (char *(*)()) F911_18779;
	R9701[378] = (char *(*)()) F912_18779;
	R9701[379] = (char *(*)()) F913_18779;
	R9701[380] = (char *(*)()) F914_18779;
	R9701[381] = (char *(*)()) F915_18779;
	R9701[382] = (char *(*)()) F916_18779;
	R9701[383] = (char *(*)()) F917_18779;
	R9701[384] = (char *(*)()) F918_18779;
	R9701[385] = (char *(*)()) F919_18779;
	R9701[386] = (char *(*)()) F920_18779;
	R9701[387] = (char *(*)()) F921_18779;
	R9701[388] = (char *(*)()) F922_18779;
	R9701[389] = (char *(*)()) F923_18779;
	R9701[390] = (char *(*)()) F924_18779;
	R9701[391] = (char *(*)()) F925_18779;
	R9701[392] = (char *(*)()) F926_18779;
	R9701[393] = (char *(*)()) F927_18779;
	R9701[394] = (char *(*)()) F928_18779;
	R9701[395] = (char *(*)()) F929_18779;
	R9701[396] = (char *(*)()) F930_18779;
	R9701[397] = (char *(*)()) F931_18779;
	R9701[398] = (char *(*)()) F932_18779;
	R9701[399] = (char *(*)()) F933_18779;
	R9701[400] = (char *(*)()) F934_18779;
	R9701[401] = (char *(*)()) F935_18779;
	R9701[402] = (char *(*)()) F936_18779;
	R9701[403] = (char *(*)()) F937_18779;
	R9701[404] = (char *(*)()) F938_18779;
	R9701[405] = (char *(*)()) F939_18779;
	R9701[406] = (char *(*)()) F940_18779;
	R9701[407] = (char *(*)()) F941_18779;
	R9701[408] = (char *(*)()) F942_18779;
	R9701[409] = (char *(*)()) F943_18779;
	R9701[410] = (char *(*)()) F944_18779;
	R9701[411] = (char *(*)()) F945_18779;
	R9701[412] = (char *(*)()) F946_18779;
	R9701[413] = (char *(*)()) F947_18779;
	R9701[414] = (char *(*)()) F948_18779;
	R9701[415] = (char *(*)()) F949_18779;
	R9701[416] = (char *(*)()) F950_18779;
	{long i; for (i = 455; i < 485; i++) R9701[i] = (char *(*)()) F534_10529;}
	R9701[550] = (char *(*)()) F534_10529;
	R9701[552] = (char *(*)()) F534_10529;
	R9701[557] = (char *(*)()) F534_10529;
}

char *(*R9795[8])();
void R9795_init () {
	R9795[0] = (char *(*)()) F1084_20921;
	R9795[2] = (char *(*)()) F1086_20960;
	R9795[7] = (char *(*)()) F1091_21071;
}

char *(*R9798[29])();
void R9798_init () {
	R9798[0] = (char *(*)()) F647_11983_9798;
	R9798[5] = (char *(*)()) F652_12189;
	R9798[6] = (char *(*)()) F653_12189_9798;
	R9798[7] = (char *(*)()) F654_12189_9798;
	R9798[8] = (char *(*)()) F655_12189_9798;
	R9798[9] = (char *(*)()) F656_12189_9798;
	R9798[10] = (char *(*)()) F657_12189_9798;
	R9798[11] = (char *(*)()) F658_12189_9798;
	R9798[12] = (char *(*)()) F659_12189_9798;
	R9798[13] = (char *(*)()) F660_12189_9798;
	R9798[14] = (char *(*)()) F661_12189_9798;
	R9798[15] = (char *(*)()) F662_12189_9798;
	R9798[16] = (char *(*)()) F663_12189_9798;
	R9798[17] = (char *(*)()) F664_12189_9798;
	R9798[18] = (char *(*)()) F665_12189_9798;
	R9798[19] = (char *(*)()) F666_12189_9798;
	R9798[20] = (char *(*)()) F667_12212;
	R9798[21] = (char *(*)()) F668_12212;
	R9798[22] = (char *(*)()) F669_12212_9798;
	R9798[23] = (char *(*)()) F670_12212_9798;
	R9798[24] = (char *(*)()) F671_12212_9798;
	R9798[25] = (char *(*)()) F672_12217;
	R9798[26] = (char *(*)()) F673_12217_9798;
	R9798[27] = (char *(*)()) F674_12217_9798;
	R9798[28] = (char *(*)()) F675_12217_9798;
}
static EIF_REFERENCE F647_11983_9798 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F647_11983(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(826, 826, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F653_12189_9798 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F653_12189(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(993, 993, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F654_12189_9798 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F654_12189(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(1014, 1014, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F655_12189_9798 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F655_12189(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(832, 832, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F656_12189_9798 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F656_12189(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(1002, 1002, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F657_12189_9798 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F657_12189(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(990, 990, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F658_12189_9798 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F658_12189(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(1005, 1005, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F659_12189_9798 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F659_12189(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(865, 865, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F660_12189_9798 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F660_12189(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(829, 829, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F661_12189_9798 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F661_12189(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(1008, 1008, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F662_12189_9798 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F662_12189(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(1017, 1017, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F663_12189_9798 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F663_12189(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(826, 826, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F664_12189_9798 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F664_12189(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(996, 996, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F665_12189_9798 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F665_12189(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r4;
	} else {
		Result = RTLNS(1011, 1011, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F666_12189_9798 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F666_12189(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(999, 999, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F669_12212_9798 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F669_12212(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(993, 993, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F670_12212_9798 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F670_12212(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(993, 993, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F671_12212_9798 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F671_12212(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(1005, 1005, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F673_12217_9798 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F673_12217(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(832, 832, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F674_12217_9798 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F674_12217(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(1017, 1017, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F675_12217_9798 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F675_12217(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(993, 993, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}

char *(*R9799[29])();
void R9799_init () {
	R9799[0] = (char *(*)()) F647_11986;
	R9799[5] = (char *(*)()) F652_12201;
	R9799[6] = (char *(*)()) F653_12201;
	R9799[7] = (char *(*)()) F654_12201;
	R9799[8] = (char *(*)()) F655_12201;
	R9799[9] = (char *(*)()) F656_12201;
	R9799[10] = (char *(*)()) F657_12201;
	R9799[11] = (char *(*)()) F658_12201;
	R9799[12] = (char *(*)()) F659_12201;
	R9799[13] = (char *(*)()) F660_12201;
	R9799[14] = (char *(*)()) F661_12201;
	R9799[15] = (char *(*)()) F662_12201;
	R9799[16] = (char *(*)()) F663_12201;
	R9799[17] = (char *(*)()) F664_12201;
	R9799[18] = (char *(*)()) F665_12201;
	R9799[19] = (char *(*)()) F666_12201;
	R9799[20] = (char *(*)()) F667_12214;
	R9799[21] = (char *(*)()) F668_12214;
	R9799[22] = (char *(*)()) F669_12214;
	R9799[23] = (char *(*)()) F670_12214;
	R9799[24] = (char *(*)()) F671_12214;
	R9799[25] = (char *(*)()) F672_12218;
	R9799[26] = (char *(*)()) F673_12218;
	R9799[27] = (char *(*)()) F674_12218;
	R9799[28] = (char *(*)()) F675_12218;
}

char *(*R9800[29])();
void R9800_init () {
	R9800[0] = (char *(*)()) F647_11988;
	R9800[5] = (char *(*)()) F652_12209;
	R9800[6] = (char *(*)()) F653_12209;
	R9800[7] = (char *(*)()) F654_12209;
	R9800[8] = (char *(*)()) F655_12209;
	R9800[9] = (char *(*)()) F656_12209;
	R9800[10] = (char *(*)()) F657_12209;
	R9800[11] = (char *(*)()) F658_12209;
	R9800[12] = (char *(*)()) F659_12209;
	R9800[13] = (char *(*)()) F660_12209;
	R9800[14] = (char *(*)()) F661_12209;
	R9800[15] = (char *(*)()) F662_12209;
	R9800[16] = (char *(*)()) F663_12209;
	R9800[17] = (char *(*)()) F664_12209;
	R9800[18] = (char *(*)()) F665_12209;
	R9800[19] = (char *(*)()) F666_12209;
	R9800[20] = (char *(*)()) F667_12215;
	R9800[21] = (char *(*)()) F668_12215;
	R9800[22] = (char *(*)()) F669_12215;
	R9800[23] = (char *(*)()) F670_12215;
	R9800[24] = (char *(*)()) F671_12215;
	R9800[25] = (char *(*)()) F672_12220;
	R9800[26] = (char *(*)()) F673_12220;
	R9800[27] = (char *(*)()) F674_12220;
	R9800[28] = (char *(*)()) F675_12220;
}

char *(*R9804[5])();
void R9804_init () {
	R9804[0] = (char *(*)()) F667_12213;
	R9804[1] = (char *(*)()) F668_12213_9804;
	R9804[2] = (char *(*)()) F669_12213;
	R9804[3] = (char *(*)()) F670_12213_9804;
	R9804[4] = (char *(*)()) F671_12213_9804;
}
static EIF_REFERENCE F668_12213_9804 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F668_12213(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(993, 993, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F670_12213_9804 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F670_12213(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(993, 993, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F671_12213_9804 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F671_12213(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(865, 865, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}

char *(*R10304[10])();
void R10304_init () {
	{long i; for (i = 0; i < 7; i++) R10304[i] = (char *(*)()) F513_11059;}
	R10304[7] = (char *(*)()) F520_11106;
	R10304[9] = (char *(*)()) F513_11059;
}

char *(*R10335[3])();
void R10335_init () {
	R10335[0] = (char *(*)()) F520_11107;
	R10335[2] = (char *(*)()) F522_11131;
}

char *(*R10388[350])();
void R10388_init () {
	R10388[0] = (char *(*)()) F546_11157;
	R10388[1] = (char *(*)()) F547_11157;
	R10388[2] = (char *(*)()) F548_11157;
	R10388[3] = (char *(*)()) F549_11157;
	R10388[4] = (char *(*)()) F550_11157;
	R10388[5] = (char *(*)()) F551_11157;
	R10388[6] = (char *(*)()) F552_11157;
	R10388[7] = (char *(*)()) F553_11157;
	R10388[8] = (char *(*)()) F554_11157;
	R10388[9] = (char *(*)()) F555_11157;
	R10388[10] = (char *(*)()) F556_11157;
	R10388[11] = (char *(*)()) F557_11157;
	R10388[12] = (char *(*)()) F558_11157;
	R10388[13] = (char *(*)()) F559_11157;
	R10388[14] = (char *(*)()) F560_11157;
	{long i; for (i = 22; i < 24; i++) R10388[i] = (char *(*)()) F556_11157;}
	R10388[176] = (char *(*)()) F546_11157;
	R10388[177] = (char *(*)()) F547_11157;
	R10388[178] = (char *(*)()) F548_11157;
	R10388[179] = (char *(*)()) F549_11157;
	R10388[180] = (char *(*)()) F550_11157;
	R10388[181] = (char *(*)()) F551_11157;
	R10388[182] = (char *(*)()) F552_11157;
	R10388[183] = (char *(*)()) F553_11157;
	R10388[184] = (char *(*)()) F554_11157;
	R10388[185] = (char *(*)()) F555_11157;
	R10388[186] = (char *(*)()) F556_11157;
	R10388[187] = (char *(*)()) F557_11157;
	R10388[188] = (char *(*)()) F558_11157;
	R10388[189] = (char *(*)()) F559_11157;
	R10388[190] = (char *(*)()) F560_11157;
	R10388[257] = (char *(*)()) F546_11157;
	R10388[258] = (char *(*)()) F547_11157;
	R10388[259] = (char *(*)()) F548_11157;
	R10388[260] = (char *(*)()) F549_11157;
	R10388[261] = (char *(*)()) F550_11157;
	R10388[262] = (char *(*)()) F551_11157;
	R10388[263] = (char *(*)()) F552_11157;
	R10388[264] = (char *(*)()) F553_11157;
	R10388[265] = (char *(*)()) F554_11157;
	R10388[266] = (char *(*)()) F555_11157;
	R10388[267] = (char *(*)()) F556_11157;
	R10388[268] = (char *(*)()) F557_11157;
	R10388[269] = (char *(*)()) F558_11157;
	R10388[270] = (char *(*)()) F559_11157;
	R10388[271] = (char *(*)()) F560_11157;
	R10388[272] = (char *(*)()) F546_11157;
	R10388[273] = (char *(*)()) F549_11157;
	{long i; for (i = 274; i < 276; i++) R10388[i] = (char *(*)()) F546_11157;}
	R10388[346] = (char *(*)()) F557_11157;
	{long i; for (i = 347; i < 350; i++) R10388[i] = (char *(*)()) F554_11157;}
}

char *(*R10389[350])();
void R10389_init () {
	R10389[0] = (char *(*)()) F546_11158;
	R10389[1] = (char *(*)()) F547_11158_10389;
	R10389[2] = (char *(*)()) F548_11158_10389;
	R10389[3] = (char *(*)()) F549_11158_10389;
	R10389[4] = (char *(*)()) F550_11158_10389;
	R10389[5] = (char *(*)()) F551_11158_10389;
	R10389[6] = (char *(*)()) F552_11158_10389;
	R10389[7] = (char *(*)()) F553_11158_10389;
	R10389[8] = (char *(*)()) F554_11158_10389;
	R10389[9] = (char *(*)()) F555_11158_10389;
	R10389[10] = (char *(*)()) F556_11158_10389;
	R10389[11] = (char *(*)()) F557_11158_10389;
	R10389[12] = (char *(*)()) F558_11158_10389;
	R10389[13] = (char *(*)()) F559_11158_10389;
	R10389[14] = (char *(*)()) F560_11158_10389;
	{long i; for (i = 22; i < 24; i++) R10389[i] = (char *(*)()) F556_11158_10389;}
	R10389[176] = (char *(*)()) F546_11158;
	R10389[177] = (char *(*)()) F547_11158_10389;
	R10389[178] = (char *(*)()) F548_11158_10389;
	R10389[179] = (char *(*)()) F549_11158_10389;
	R10389[180] = (char *(*)()) F550_11158_10389;
	R10389[181] = (char *(*)()) F551_11158_10389;
	R10389[182] = (char *(*)()) F552_11158_10389;
	R10389[183] = (char *(*)()) F553_11158_10389;
	R10389[184] = (char *(*)()) F554_11158_10389;
	R10389[185] = (char *(*)()) F555_11158_10389;
	R10389[186] = (char *(*)()) F556_11158_10389;
	R10389[187] = (char *(*)()) F557_11158_10389;
	R10389[188] = (char *(*)()) F558_11158_10389;
	R10389[189] = (char *(*)()) F559_11158_10389;
	R10389[190] = (char *(*)()) F560_11158_10389;
	R10389[257] = (char *(*)()) F546_11158;
	R10389[258] = (char *(*)()) F547_11158_10389;
	R10389[259] = (char *(*)()) F548_11158_10389;
	R10389[260] = (char *(*)()) F549_11158_10389;
	R10389[261] = (char *(*)()) F550_11158_10389;
	R10389[262] = (char *(*)()) F551_11158_10389;
	R10389[263] = (char *(*)()) F552_11158_10389;
	R10389[264] = (char *(*)()) F553_11158_10389;
	R10389[265] = (char *(*)()) F554_11158_10389;
	R10389[266] = (char *(*)()) F555_11158_10389;
	R10389[267] = (char *(*)()) F556_11158_10389;
	R10389[268] = (char *(*)()) F557_11158_10389;
	R10389[269] = (char *(*)()) F558_11158_10389;
	R10389[270] = (char *(*)()) F559_11158_10389;
	R10389[271] = (char *(*)()) F560_11158_10389;
	R10389[272] = (char *(*)()) F546_11158;
	R10389[273] = (char *(*)()) F549_11158_10389;
	{long i; for (i = 274; i < 276; i++) R10389[i] = (char *(*)()) F546_11158;}
	R10389[346] = (char *(*)()) F557_11158_10389;
	{long i; for (i = 347; i < 350; i++) R10389[i] = (char *(*)()) F554_11158_10389;}
}
static void F547_11158_10389 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F547_11158(Current, *(EIF_INTEGER_32 *)arg1, arg2);
}
static void F548_11158_10389 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F548_11158(Current, *(EIF_REAL_64 *)arg1, arg2);
}
static void F549_11158_10389 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F549_11158(Current, *(EIF_BOOLEAN *)arg1, arg2);
}
static void F550_11158_10389 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F550_11158(Current, *(EIF_NATURAL_64 *)arg1, arg2);
}
static void F551_11158_10389 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F551_11158(Current, *(EIF_INTEGER_64 *)arg1, arg2);
}
static void F552_11158_10389 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F552_11158(Current, *(EIF_NATURAL_32 *)arg1, arg2);
}
static void F553_11158_10389 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F553_11158(Current, *(EIF_POINTER *)arg1, arg2);
}
static void F554_11158_10389 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F554_11158(Current, *(EIF_CHARACTER_8 *)arg1, arg2);
}
static void F555_11158_10389 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F555_11158(Current, *(EIF_NATURAL_16 *)arg1, arg2);
}
static void F556_11158_10389 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F556_11158(Current, *(EIF_NATURAL_8 *)arg1, arg2);
}
static void F557_11158_10389 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F557_11158(Current, *(EIF_CHARACTER_32 *)arg1, arg2);
}
static void F558_11158_10389 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F558_11158(Current, *(EIF_INTEGER_16 *)arg1, arg2);
}
static void F559_11158_10389 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F559_11158(Current, *(EIF_REAL_32 *)arg1, arg2);
}
static void F560_11158_10389 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F560_11158(Current, *(EIF_INTEGER_8 *)arg1, arg2);
}

char *(*R10394[350])();
void R10394_init () {
	R10394[0] = (char *(*)()) F546_11163;
	R10394[1] = (char *(*)()) F547_11163;
	R10394[2] = (char *(*)()) F548_11163;
	R10394[3] = (char *(*)()) F549_11163;
	R10394[4] = (char *(*)()) F550_11163;
	R10394[5] = (char *(*)()) F551_11163;
	R10394[6] = (char *(*)()) F552_11163;
	R10394[7] = (char *(*)()) F553_11163;
	R10394[8] = (char *(*)()) F554_11163;
	R10394[9] = (char *(*)()) F555_11163;
	R10394[10] = (char *(*)()) F556_11163;
	R10394[11] = (char *(*)()) F557_11163;
	R10394[12] = (char *(*)()) F558_11163;
	R10394[13] = (char *(*)()) F559_11163;
	R10394[14] = (char *(*)()) F560_11163;
	{long i; for (i = 22; i < 24; i++) R10394[i] = (char *(*)()) F556_11163;}
	R10394[176] = (char *(*)()) F546_11163;
	R10394[177] = (char *(*)()) F547_11163;
	R10394[178] = (char *(*)()) F548_11163;
	R10394[179] = (char *(*)()) F549_11163;
	R10394[180] = (char *(*)()) F550_11163;
	R10394[181] = (char *(*)()) F551_11163;
	R10394[182] = (char *(*)()) F552_11163;
	R10394[183] = (char *(*)()) F553_11163;
	R10394[184] = (char *(*)()) F554_11163;
	R10394[185] = (char *(*)()) F555_11163;
	R10394[186] = (char *(*)()) F556_11163;
	R10394[187] = (char *(*)()) F557_11163;
	R10394[188] = (char *(*)()) F558_11163;
	R10394[189] = (char *(*)()) F559_11163;
	R10394[190] = (char *(*)()) F560_11163;
	R10394[257] = (char *(*)()) F546_11163;
	R10394[258] = (char *(*)()) F547_11163;
	R10394[259] = (char *(*)()) F548_11163;
	R10394[260] = (char *(*)()) F549_11163;
	R10394[261] = (char *(*)()) F550_11163;
	R10394[262] = (char *(*)()) F551_11163;
	R10394[263] = (char *(*)()) F552_11163;
	R10394[264] = (char *(*)()) F553_11163;
	R10394[265] = (char *(*)()) F554_11163;
	R10394[266] = (char *(*)()) F555_11163;
	R10394[267] = (char *(*)()) F556_11163;
	R10394[268] = (char *(*)()) F557_11163;
	R10394[269] = (char *(*)()) F558_11163;
	R10394[270] = (char *(*)()) F559_11163;
	R10394[271] = (char *(*)()) F560_11163;
	R10394[272] = (char *(*)()) F546_11163;
	R10394[273] = (char *(*)()) F549_11163;
	{long i; for (i = 274; i < 276; i++) R10394[i] = (char *(*)()) F546_11163;}
	R10394[346] = (char *(*)()) F557_11163;
	{long i; for (i = 347; i < 350; i++) R10394[i] = (char *(*)()) F554_11163;}
}


#ifdef __cplusplus
}
#endif
