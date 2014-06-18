/*
 * Code for class WSF_ROUTER_SELF_DOCUMENTATION_MESSAGE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ws304.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WSF_ROUTER_SELF_DOCUMENTATION_MESSAGE}.make */
void F611_13225 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_0_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 200L);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg2;
	RTLE;
}

/* {WSF_ROUTER_SELF_DOCUMENTATION_MESSAGE}.make_with_resource */
void F611_13226 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,arg3);
	RTLR(4,loc1);
	RTLR(5,tr1);
	
	RTGC;
	F611_13225(Current, arg1, arg2);
	if ((EIF_BOOLEAN)(arg3 != NULL)) {
		tr1 = *(EIF_REFERENCE *)(RTCV(arg2) + _REFACS_2_);
		loc1 = tr1;
		if (EIF_TEST(loc1)) {
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R15106[Dtype(loc1)-887])(RTCV(loc1), arg3);
			tr1 = F885_17049(RTCV(tr1));
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
		} else {
			RTAR(Current, arg3);
			*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) arg3;
		}
	}
	RTLE;
}

/* {WSF_ROUTER_SELF_DOCUMENTATION_MESSAGE}.request */
EIF_REFERENCE F611_13228 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {WSF_ROUTER_SELF_DOCUMENTATION_MESSAGE}.router */
EIF_REFERENCE F611_13229 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {WSF_ROUTER_SELF_DOCUMENTATION_MESSAGE}.resource */
EIF_REFERENCE F611_13230 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {WSF_ROUTER_SELF_DOCUMENTATION_MESSAGE}.header */
EIF_REFERENCE F611_13231 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {WSF_ROUTER_SELF_DOCUMENTATION_MESSAGE}.footer */
EIF_REFERENCE F611_13232 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_4_);
}


/* {WSF_ROUTER_SELF_DOCUMENTATION_MESSAGE}.custom_style_url */
EIF_REFERENCE F611_13233 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_5_);
}


/* {WSF_ROUTER_SELF_DOCUMENTATION_MESSAGE}.send_to */
void F611_13238 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCFDT;
	RTLD;
	
	RTLI(16);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,loc5);
	RTLR(4,Current);
	RTLR(5,tr2);
	RTLR(6,loc6);
	RTLR(7,loc7);
	RTLR(8,loc3);
	RTLR(9,loc8);
	RTLR(10,loc4);
	RTLR(11,loc9);
	RTLR(12,loc10);
	RTLR(13,loc11);
	RTLR(14,loc12);
	RTLR(15,arg1);
	
	RTGC;
	tr1 = RTLNS(648, 648, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F649_12064(RTCV(tr1));
	loc1 = (EIF_REFERENCE) tr1;
	F649_12113(RTCV(loc1));
	tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F889_17162(RTCV(tr1), ((EIF_INTEGER_32) 1024L));
	loc2 = (EIF_REFERENCE) tr1;
	tr1 = RTMS_EX_H("<html>",6,2072091710);
	F893_17377(RTCV(loc2), tr1);
	tr1 = RTMS_EX_H("<head>",6,1819644990);
	F893_17377(RTCV(loc2), tr1);
	tr1 = RTMS_EX_H("<title>Documentation</title>",28,69010494);
	F893_17377(RTCV(loc2), tr1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	loc5 = tr1;
	if (EIF_TEST(loc5)) {
		tr1 = RTMS_EX_H("<link rel=\"stylesheet\" type=\"text/css\" href=\"",45,1003324450);
		tr1 = F893_17379(RTCV(tr1), loc5);
		tr2 = RTMS_EX_H("\"/>\012",4,573521418);
		tr1 = F893_17379(RTCV(tr1), tr2);
		F893_17377(RTCV(loc2), tr1);
	} else {
		tr1 = RTMS_EX_H("<style type=\"text/css\">\012\011.mappingresource { color: #00f; }\012\011.mappingdoc { color: #900; float: right}\012\011.handlerdoc { white-space: pre; }\012\011ul.mapping { margin: 0; padding: 5px; list-style-type: none; }\012\011ul.mapping>li { margin-bottom: 5px; padding-left: 5px; border-left: solid 3px #ccc; border-top: dotted 1px #ccc; }\012\011div#footer { padding: 10px; width: 100%; margin-top: 20px;  border-top: 1px dotted #999; color: #999; text-align: center; }\012</style>",449,677317182);
		F893_17377(RTCV(loc2), tr1);
	}
	tr1 = RTMS_EX_H("</head><body>",13,1338951230);
	F893_17377(RTCV(loc2), tr1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	loc6 = tr1;
	if (EIF_TEST(loc6)) {
		F893_17377(RTCV(loc2), loc6);
	}
	tr1 = RTMS_EX_H("<h1>Documentation</h1>\012",23,1395557898);
	F893_17377(RTCV(loc2), tr1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr1 = *(EIF_REFERENCE *)(RTCV(tr1) + _REFACS_2_);
	loc7 = tr1;
	if (EIF_TEST(loc7)) {
		loc3 = F885_17049(RTCV(loc7));
	} else {
		tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F885_16993(RTCV(tr1));
		loc3 = (EIF_REFERENCE) tr1;
	}
	tb1 = '\0';
	if (F611_13240(Current)) {
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = RTMS_EX_H("api",3,6385769);
		tr1 = F902_18660(RTCV(tr1), tr2);
		loc8 = tr1;
		loc8 = RTRV(eif_non_attached_type(981),loc8);
		tb1 = EIF_TEST(loc8);
	}
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(RTCV(loc8));
		loc4 = F885_17049(RTCV(tr1));
		tb1 = F324_9603(RTCV(loc4));
		if (tb1) {
			loc4 = (EIF_REFERENCE) NULL;
		}
	}
	if ((EIF_BOOLEAN)(loc4 != NULL)) {
		if (F611_13240(Current)) {
			tr1 = RTMS_EX_H("<a href=\"",9,99169058);
			tr2 = RTMS_EX_H("",0,0);
			tr2 = F611_13241(Current, tr2);
			tr1 = F893_17379(RTCV(tr1), tr2);
			tr2 = RTMS_EX_H("\">Index</a><br/>",16,286242878);
			tr1 = F893_17379(RTCV(tr1), tr2);
			F893_17377(RTCV(loc2), tr1);
		}
		tb1 = '\0';
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr1 = F645_11958(RTCV(tr1), loc4, NULL);
		loc9 = tr1;
		if (EIF_TEST(loc9)) {
			tb2 = F316_9603(RTCV(loc9));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
			tr1 = RTMS_EX_H("<h2>Information related to <code>",33,1732866110);
			tr1 = F893_17379(RTCV(tr1), loc4);
			tr2 = RTMS_EX_H("</code></h2>",12,1811484222);
			tr1 = F893_17379(RTCV(tr1), tr2);
			F893_17377(RTCV(loc2), tr1);
			loc10 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R11074[Dtype(loc9)-644])(RTCV(loc9));
			for (;;) {
				tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9799[Dtype(loc10)-646])(RTCV(loc10));
				if (tb1) break;
				tr1 = RTMS_EX_H("<ul class=\"mapping\">",20,1073798718);
				F893_17377(RTCV(loc2), tr1);
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9798[Dtype(loc10)-646])(RTCV(loc10));
				tr1 = *(EIF_REFERENCE *)(RTCV(tr1));
				tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9798[Dtype(loc10)-646])(RTCV(loc10));
				tr2 = *(EIF_REFERENCE *)(RTCV(tr2) + _REFACS_1_);
				F611_13239(Current, loc2, tr1, tr2);
				tr1 = RTMS_EX_H("</ul>",5,796685374);
				F893_17377(RTCV(loc2), tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) R9800[Dtype(loc10)-646])(RTCV(loc10));
			}
		}
	} else {
		tr1 = RTMS_EX_H("<h2>Router</h2><ul class=\"mapping\">",35,120727358);
		F893_17377(RTCV(loc2), tr1);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		loc11 = F645_11967(RTCV(tr1));
		for (;;) {
			tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9799[Dtype(loc11)-646])(RTCV(loc11));
			if (tb2) break;
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9798[Dtype(loc11)-646])(RTCV(loc11));
			tr1 = *(EIF_REFERENCE *)(RTCV(tr1));
			tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9798[Dtype(loc11)-646])(RTCV(loc11));
			tr2 = *(EIF_REFERENCE *)(RTCV(tr2) + _REFACS_1_);
			F611_13239(Current, loc2, tr1, tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R9800[Dtype(loc11)-646])(RTCV(loc11));
		}
		tr1 = RTMS_EX_H("</ul>",5,796685374);
		F893_17377(RTCV(loc2), tr1);
	}
	tr1 = RTMS_EX_H("<div id=\"footer\">",17,2085632830);
	F893_17377(RTCV(loc2), tr1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	loc12 = tr1;
	if (EIF_TEST(loc12)) {
		F893_17377(RTCV(loc2), loc12);
	} else {
		tr1 = RTMS_EX_H("-- Self generated documentation --\012",35,553444874);
		F893_17377(RTCV(loc2), tr1);
	}
	tr1 = RTMS_EX_H("</div>\012",7,1996802058);
	F893_17377(RTCV(loc2), tr1);
	tr1 = RTMS_EX_H("</body></html>",14,971807294);
	F893_17377(RTCV(loc2), tr1);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc2)+ _LNGOFF_1_1_0_2_);
	F649_12103(RTCV(loc1), ti4_1);
	F649_12140(RTCV(loc1));
	F116_8564(RTCV(arg1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_0_0_0_));
	tr1 = F649_12073(RTCV(loc1));
	F116_8572(RTCV(arg1), tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R8321[Dtype(arg1)-115])(RTCV(arg1), loc2);
	RTLE;
}

/* {WSF_ROUTER_SELF_DOCUMENTATION_MESSAGE}.append_documentation_to */
void F611_13239 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(15);
	RTLR(0,loc5);
	RTLR(1,arg2);
	RTLR(2,loc3);
	RTLR(3,arg3);
	RTLR(4,loc2);
	RTLR(5,Current);
	RTLR(6,tr1);
	RTLR(7,loc1);
	RTLR(8,arg1);
	RTLR(9,loc6);
	RTLR(10,tr2);
	RTLR(11,tr3);
	RTLR(12,loc7);
	RTLR(13,loc8);
	RTLR(14,loc9);
	
	RTGC;
	loc5 = arg2;
	loc5 = RTRV(eif_non_attached_type(969),loc5);
	if (EIF_TEST(loc5)) {
		loc3 = F970_18877(RTCV(loc5), arg3);
	}
	tb1 = '\01';
	if (!(EIF_BOOLEAN)(loc3 == NULL)) {
		tb2 = *(EIF_BOOLEAN *)(RTCV(loc3)+ _CHROFF_2_0_);
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		loc2 = *(EIF_REFERENCE *)(RTCV(tr1) + _REFACS_2_);
		if ((EIF_BOOLEAN)(loc2 == NULL)) {
			loc2 = RTMS_EX_H("",0,0);
		}
		loc1 = (EIF_REFERENCE) NULL;
		tr1 = RTMS_EX_H("<li>",4,1013737790);
		F893_17377(RTCV(arg1), tr1);
		tr1 = RTMS_EX_H("<code>",6,1987575614);
		F893_17377(RTCV(arg1), tr1);
		if (F611_13240(Current)) {
			tr1 = RTMS_EX_H("<a class=\"mappingresource\" href=\"",33,503262498);
			F893_17377(RTCV(arg1), tr1);
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16651[Dtype(arg2)-970])(RTCV(arg2));
			tr1 = F885_17049(RTCV(tr1));
			tr1 = F611_13241(Current, tr1);
			F893_17377(RTCV(arg1), tr1);
			tr1 = RTMS_EX_H("\">",2,8766);
			F893_17377(RTCV(arg1), tr1);
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16651[Dtype(arg2)-970])(RTCV(arg2));
			F893_17377(RTCV(arg1), tr1);
			tr1 = RTMS_EX_H("</a>",4,1009738046);
			F893_17377(RTCV(arg1), tr1);
		} else {
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16651[Dtype(arg2)-970])(RTCV(arg2));
			F893_17377(RTCV(arg1), tr1);
		}
		tr1 = RTMS_EX_H("</code>",7,2096288062);
		F893_17377(RTCV(arg1), tr1);
		if ((EIF_BOOLEAN)(arg3 != NULL)) {
			tr1 = RTMS_EX_H(" [",2,8283);
			F893_17377(RTCV(arg1), tr1);
			loc6 = F646_12034(RTCV(arg3));
			for (;;) {
				tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9799[Dtype(loc6)-646])(RTCV(loc6));
				if (tb1) break;
				F893_17391(RTCV(arg1), (EIF_CHARACTER_8) ' ');
				tb2 = '\0';
				if ((EIF_BOOLEAN)(loc1 != NULL)) {
					tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9798[Dtype(loc6)-646])(RTCV(loc6));
					tr2 = RTMS_EX_H("GET",3,4670804);
					tb3 = F889_17185(RTCV(tr1), tr2);
					tb2 = tb3;
				}
				if (tb2) {
					tr1 = RTMS_EX_H("<a href=\"",9,99169058);
					tr1 = F893_17379(RTCV(tr1), loc2);
					tr1 = F893_17379(RTCV(tr1), loc1);
					tr2 = RTMS_EX_H("\">",2,8766);
					tr1 = F893_17379(RTCV(tr1), tr2);
					tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9798[Dtype(loc6)-646])(RTCV(loc6));
					tr1 = F893_17379(RTCV(tr1), tr2);
					tr2 = RTMS_EX_H("</a>",4,1009738046);
					tr1 = F893_17379(RTCV(tr1), tr2);
					F893_17377(RTCV(arg1), tr1);
				} else {
					tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9798[Dtype(loc6)-646])(RTCV(loc6));
					F893_17377(RTCV(arg1), tr1);
				}
				F893_17391(RTCV(arg1), (EIF_CHARACTER_8) ',');
				(FUNCTION_CAST(void, (EIF_REFERENCE)) R9800[Dtype(loc6)-646])(RTCV(loc6));
			}
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_1_1_0_2_);
			tc1 = F893_17342(RTCV(arg1), ti4_1);
			if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) ',')) {
				ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_1_1_0_2_);
				F893_17364(RTCV(arg1), (EIF_CHARACTER_8) ' ', ti4_1);
			} else {
				F893_17391(RTCV(arg1), (EIF_CHARACTER_8) ' ');
			}
			F893_17391(RTCV(arg1), (EIF_CHARACTER_8) ']');
		} else {
			tr1 = RTMS_EX_H(" [ * ]",6,603245149);
			F893_17377(RTCV(arg1), tr1);
		}
		tr1 = RTMS_EX_H(" <em class=\"mappingdoc\">",24,743309886);
		tr2 = RTOUCR(183,F611_13242,(Current));
		tr3 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16653[Dtype(arg2)-970])(RTCV(arg2));
		tr2 = F537_11492(RTCV(tr2), tr3);
		tr1 = F893_17379(RTCV(tr1), tr2);
		tr2 = RTMS_EX_H("</em> ",6,1819983904);
		tr1 = F893_17379(RTCV(tr1), tr2);
		F893_17377(RTCV(arg1), tr1);
		tb2 = '\0';
		if ((EIF_BOOLEAN)(loc3 != NULL)) {
			tb3 = F18_3798(RTCV(loc3));
			tb2 = (EIF_BOOLEAN) !tb3;
		}
		if (tb2) {
			tr1 = RTMS_EX_H("\012<ul class=\"handlerdoc\">",24,1139533118);
			F893_17377(RTCV(arg1), tr1);
			loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			tr1 = *(EIF_REFERENCE *)(RTCV(loc3) + _REFACS_1_);
			loc7 = F682_12245(RTCV(tr1));
			for (;;) {
				tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9799[Dtype(loc7)-646])(RTCV(loc7));
				if (tb2) break;
				if ((EIF_BOOLEAN) !loc4) {
					tr1 = RTMS_EX_H("<br/>",5,1652111166);
					F893_17377(RTCV(arg1), tr1);
				} else {
					loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				}
				tr1 = RTOUCR(183,F611_13242,(Current));
				tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9798[Dtype(loc7)-646])(RTCV(loc7));
				tr1 = F537_11493(RTCV(tr1), tr2);
				F893_17377(RTCV(arg1), tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) R9800[Dtype(loc7)-646])(RTCV(loc7));
			}
			tr1 = RTMS_EX_H("\012</ul>\012",7,679079178);
			F893_17377(RTCV(arg1), tr1);
		} else {
		}
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16652[Dtype(arg2)-971])(RTCV(arg2));
		loc8 = tr1;
		loc8 = RTRV(eif_non_attached_type(513),loc8);
		if (EIF_TEST(loc8)) {
			tr1 = RTMS_EX_H("\012<ul>\012",6,1990149642);
			F893_17377(RTCV(arg1), tr1);
			tr1 = *(EIF_REFERENCE *)(RTCV(loc8));
			loc9 = F645_11967(RTCV(tr1));
			for (;;) {
				tb3 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9799[Dtype(loc9)-646])(RTCV(loc9));
				if (tb3) break;
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9798[Dtype(loc9)-646])(RTCV(loc9));
				tr1 = *(EIF_REFERENCE *)(RTCV(tr1));
				tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9798[Dtype(loc9)-646])(RTCV(loc9));
				tr2 = *(EIF_REFERENCE *)(RTCV(tr2) + _REFACS_1_);
				F611_13239(Current, arg1, tr1, tr2);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) R9800[Dtype(loc9)-646])(RTCV(loc9));
			}
			tr1 = RTMS_EX_H("\012</ul>\012",7,679079178);
			F893_17377(RTCV(arg1), tr1);
		}
		tr1 = RTMS_EX_H("</li>\012",6,1937162250);
		F893_17377(RTCV(arg1), tr1);
	} else {
	}
	RTLE;
}

/* {WSF_ROUTER_SELF_DOCUMENTATION_MESSAGE}.doc_url_supported */
EIF_BOOLEAN F611_13240 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_2_) != NULL);
}

/* {WSF_ROUTER_SELF_DOCUMENTATION_MESSAGE}.doc_url */
EIF_REFERENCE F611_13241 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,arg1);
	RTLR(5,tr3);
	RTLR(6,Result);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tr1 = *(EIF_REFERENCE *)(Current);
		tr1 = F902_18679(RTCV(tr1), loc1);
		tr2 = RTMS_EX_H("\?api=",5,1635240765);
		tr1 = F893_17379(RTCV(tr1), tr2);
		tr2 = RTOUCR(184,F611_13243,(Current));
		tr3 = F885_17052(RTCV(arg1));
		tr2 = F538_11502(RTCV(tr2), tr3);
		Result = F893_17379(RTCV(tr1), tr2);
	} else {
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = RTMS_EX_H("",0,0);
		Result = F902_18679(RTCV(tr1), tr2);
	}
	RTLE;
	return Result;
}

/* {WSF_ROUTER_SELF_DOCUMENTATION_MESSAGE}.html_encoder */
static EIF_REFERENCE F611_13242_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(183)

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(536, 536, _OBJSIZ_0_1_0_0_0_0_0_0_);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F611_13242 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(183,F611_13242_body,(Current));
}

/* {WSF_ROUTER_SELF_DOCUMENTATION_MESSAGE}.url_encoder */
static EIF_REFERENCE F611_13243_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(184)

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(537, 537, _OBJSIZ_0_1_0_0_0_0_0_0_);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F611_13243 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(184,F611_13243_body,(Current));
}

void EIF_Minit304 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
