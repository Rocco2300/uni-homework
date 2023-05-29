/*
 * Code for class WSF_MULTIPART_FORM_DATA_HANDLER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F379_7908(EIF_REFERENCE);
extern EIF_TYPED_VALUE F379_7909(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F379_7910(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F379_7911(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F379_7912(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F379_7913(EIF_REFERENCE);
extern void EIF_Minit379(void);

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WSF_MULTIPART_FORM_DATA_HANDLER}.make */
void F379_7908 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 378, Current, 0, 0, 13711);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(378, Current, 13711);
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {WSF_MULTIPART_FORM_DATA_HANDLER}.valid_content_type */
EIF_TYPED_VALUE F379_7909 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "valid_content_type";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 378, Current, 0, 1, 13712);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(378, Current, 13712);
	RTCC(arg1, 378, l_feature_name, 1, eif_new_type(320, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1469, 107))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5211, "same_simple_type", arg1))(arg1, ur1x)).it_b);
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ur1
#undef arg1
}

/* {WSF_MULTIPART_FORM_DATA_HANDLER}.handle */
void F379_7910 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "handle";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_r
#define arg4 arg4x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ur4x = {{0}, SK_REF};
#define ur4 ur4x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(11);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,arg4);
	RTLR(4,ur1);
	RTLR(5,Current);
	RTLR(6,loc1);
	RTLR(7,tr1);
	RTLR(8,ur2);
	RTLR(9,ur3);
	RTLR(10,ur4);
	RTLIU(11);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_REF,&arg4);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 378, Current, 1, 4, 13713);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(378, Current, 13713);
	RTCC(arg1, 378, l_feature_name, 1, eif_new_type(320, 0x01), 0x01);
	RTCC(arg2, 378, l_feature_name, 2, eif_new_type(376, 0x01), 0x01);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,662,0xFF01,327,0xFF01,301,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg3, 378, l_feature_name, 3, typres0, 0x01);
	}
	if (arg4) {
		{
			static EIF_TYPE_INDEX typarr0[] = {585,307,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			RTCC(arg4, 378, l_feature_name, 4, typres0, 0x00);
		}
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_content_type", EX_PRE);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1388, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(1, 0xF8000133, 0, 0); /* loc1 */
	ur1 = RTCCL(arg2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6133, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	if ((EIF_BOOLEAN)(arg4 != NULL)) {
		RTHOOK(4);
		ur1 = RTCCL(loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1202, "replace", arg4))(arg4, ur1x);
	}
	RTHOOK(5);
	ur1 = RTCCL(arg2);
	ur2 = RTCCL(arg1);
	ur3 = RTCCL(loc1);
	ur4 = RTCCL(arg3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6135, dtype))(Current, ur1x, ur2x, ur3x, ur4x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ur4
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {WSF_MULTIPART_FORM_DATA_HANDLER}.analyze_multipart_form */
void F379_7911 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "analyze_multipart_form";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc9 = (EIF_BOOLEAN) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_r
#define arg4 arg4x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_NATURAL_64 tu8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(15);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,arg4);
	RTLR(4,loc6);
	RTLR(5,tr1);
	RTLR(6,ur1);
	RTLR(7,loc4);
	RTLR(8,loc7);
	RTLR(9,ur2);
	RTLR(10,ur3);
	RTLR(11,Current);
	RTLR(12,tr2);
	RTLR(13,tr3);
	RTLR(14,loc8);
	RTLIU(15);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_REF,&arg4);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_REF, &loc8);
	RTLU(SK_BOOL, &loc9);
	
	RTEAA(l_feature_name, 378, Current, 9, 4, 13714);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(378, Current, 13714);
	RTCC(arg1, 378, l_feature_name, 1, eif_new_type(376, 0x01), 0x01);
	RTCC(arg2, 378, l_feature_name, 2, eif_new_type(320, 0x01), 0x01);
	RTCC(arg3, 378, l_feature_name, 3, eif_new_type(307, 0x01), 0x01);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,662,0xFF01,327,0xFF01,301,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg4, 378, l_feature_name, 4, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_content_type_valid", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(arg2 != NULL)) {
			tb2 = *(EIF_BOOLEAN *)(arg2 + RTVA(5202, "has_error", arg2));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("s_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg3 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("same_content_length", EX_PRE);
		tb1 = '\01';
		tu8_1 = *(EIF_NATURAL_64 *)(arg1 + RTVA(6041, "content_length_value", arg1));
		if ((EIF_BOOLEAN) (tu8_1 > (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L))) {
			tu8_1 = *(EIF_NATURAL_64 *)(arg1 + RTVA(6041, "content_length_value", arg1));
			ti4_1 = (EIF_INTEGER_32) tu8_1;
			ti4_2 = *(EIF_INTEGER_32 *)(arg3 + RTVA(4877, "count", arg3));
			tb1 = (EIF_BOOLEAN) (ti4_1 <= ti4_2);
		}
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(4);
		RTCT("vars_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg4 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	RTDBGAL(6, 0xF8000133, 0, 0); /* loc6 */
	tr1 = RTMS_EX_H("boundary",8,1971217529);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5206, "parameter", arg2))(arg2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc6 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(loc6 != NULL)) {
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4656, "is_empty", loc6))(loc6)).it_b);
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		RTHOOK(7);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		ur1 = RTCCL(loc6);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4689, "substring_index", arg3))(arg3, ur1x, ui4_1x)).it_i4);
		loc1 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(8);
		if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 1L))) {
			RTHOOK(9);
			RTDBGAL(4, 0xF8000133, 0, 0); /* loc4 */
			ui4_1 = ((EIF_INTEGER_32) 1L);
			ui4_2 = (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L));
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4719, "substring", arg3))(arg3, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc4 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(10);
			RTDBGAL(6, 0xF8000133, 0, 0); /* loc6 */
			ur1 = RTCCL(loc6);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4867, "plus", loc4))(loc4, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc6 = (EIF_REFERENCE) RTCCL(tr1);
		} else {
			RTHOOK(11);
			RTDBGAL(4, 0xF8000133, 0, 0); /* loc4 */
			tr1 = RTMS_EX_H("",0,0);
			loc4 = (EIF_REFERENCE) tr1;
		}
		RTHOOK(12);
		RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
		ti4_1 = *(EIF_INTEGER_32 *)(loc6 + RTVA(4877, "count", loc6));
		loc5 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(13);
		RTDBGAL(9, 0x04000000, 1, 0); /* loc9 */
		ui4_1 = (EIF_INTEGER_32) (loc5 + ((EIF_INTEGER_32) 1L));
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4063, "item", arg3))(arg3, ui4_1x)).it_c1);
		loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\015');
		RTHOOK(14);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + loc5) + ((EIF_INTEGER_32) 1L));
		RTHOOK(15);
		if (loc9) {
			RTHOOK(16);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2++;
		}
		RTHOOK(17);
		RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
		loc3 = (EIF_INTEGER_32) loc2;
		for (;;) {
			RTHOOK(18);
			if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L))) break;
			RTHOOK(19);
			RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
			ur1 = RTCCL(loc6);
			ui4_1 = loc2;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4689, "substring_index", arg3))(arg3, ur1x, ui4_1x)).it_i4);
			loc3 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(20);
			if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 0L))) {
				RTHOOK(21);
				if (loc9) {
					RTHOOK(22);
					RTDBGAL(7, 0xF8000133, 0, 0); /* loc7 */
					ui4_1 = loc2;
					ui4_2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L)) - ((EIF_INTEGER_32) 2L));
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4719, "substring", arg3))(arg3, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					loc7 = (EIF_REFERENCE) RTCCL(tr1);
				} else {
					RTHOOK(23);
					RTDBGAL(7, 0xF8000133, 0, 0); /* loc7 */
					ui4_1 = loc2;
					ui4_2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L)) - ((EIF_INTEGER_32) 1L));
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4719, "substring", arg3))(arg3, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					loc7 = (EIF_REFERENCE) RTCCL(tr1);
				}
				RTHOOK(24);
				ur1 = RTCCL(arg1);
				ur2 = RTCCL(loc7);
				ur3 = RTCCL(arg4);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6136, dtype))(Current, ur1x, ur2x, ur3x);
				RTHOOK(25);
				ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 + loc5) + ((EIF_INTEGER_32) 1L));
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4067, "valid_index", arg3))(arg3, ui4_1x)).it_b);
				if (tb1) {
					RTHOOK(26);
					if (loc9) {
						RTHOOK(27);
						tb1 = '\0';
						ui4_1 = (EIF_INTEGER_32) (loc3 + loc5);
						tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4063, "item", arg3))(arg3, ui4_1x)).it_c1);
						if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\015')) {
							ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 + loc5) + ((EIF_INTEGER_32) 1L));
							tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4063, "item", arg3))(arg3, ui4_1x)).it_c1);
							tb1 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\012');
						}
						if (tb1) {
						} else {
							RTHOOK(28);
							RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
							loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
						}
					} else {
						RTHOOK(29);
						ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 + loc5) + ((EIF_INTEGER_32) 1L));
						tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4063, "item", arg3))(arg3, ui4_1x)).it_c1);
						if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\012')) {
						} else {
							RTHOOK(30);
							RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
							loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
						}
					}
				} else {
					RTHOOK(31);
					RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
					loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
					RTHOOK(32);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6000, "error_handler", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					ui4_1 = ((EIF_INTEGER_32) 0L);
					tr2 = RTMS_EX_H("Invalid form data",17,534563937);
					ur1 = tr2;
					tr3 = RTMS_EX_H("Invalid ending for form data from input",39,714666356);
					ur2 = tr3;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5018, "add_custom_error", tr1))(tr1, ui4_1x, ur1x, ur2x);
				}
				RTHOOK(33);
				if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
					RTHOOK(34);
					RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
					loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 + loc5) + ((EIF_INTEGER_32) 1L));
					RTHOOK(35);
					if (loc9) {
						RTHOOK(36);
						RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
						loc2++;
					}
				}
			} else {
				RTHOOK(37);
				if (loc9) {
					RTHOOK(38);
					RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
					loc2++;
				}
				RTHOOK(39);
				RTDBGAL(8, 0xF8000135, 0, 0); /* loc8 */
				ui4_1 = (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L));
				ti4_1 = *(EIF_INTEGER_32 *)(arg3 + RTVA(4877, "count", arg3));
				ui4_2 = ti4_1;
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4719, "substring", arg3))(arg3, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4692, "to_string_8", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc8 = (EIF_REFERENCE) RTCCL(tr2);
				RTHOOK(40);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(4760, "right_adjust", loc8))(loc8);
				RTHOOK(41);
				tb1 = '\0';
				ti4_1 = *(EIF_INTEGER_32 *)(arg3 + RTVA(4877, "count", arg3));
				if ((EIF_BOOLEAN) (loc2 >= ti4_1)) {
					ur1 = RTCCL(loc8);
					tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4862, "same_string", loc4))(loc4, ur1x)).it_b);
					tb1 = (EIF_BOOLEAN) !tb2;
				}
				if (tb1) {
					RTHOOK(42);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6000, "error_handler", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					ui4_1 = ((EIF_INTEGER_32) 0L);
					tr2 = RTMS_EX_H("Invalid form data",17,534563937);
					ur1 = tr2;
					tr3 = RTMS_EX_H("Invalid ending for form data from input",39,714666356);
					ur2 = tr3;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5018, "add_custom_error", tr1))(tr1, ui4_1x, ur1x, ur2x);
				}
				RTHOOK(43);
				RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
				loc2 = (EIF_INTEGER_32) loc3;
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(44);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(15);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ui4_1
#undef ui4_2
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {WSF_MULTIPART_FORM_DATA_HANDLER}.analyze_multipart_form_input */
void F379_7912 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "analyze_multipart_form_input";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	struct eif_ex_21 sloc14;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) sloc14.data;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	memset (&sloc14.overhead, 0, OVERHEAD + 0);
	sloc14.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc14.overhead, eif_new_type(21, 0x00).id);
	RTLI(18);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,loc10);
	RTLR(4,tr1);
	RTLR(5,loc11);
	RTLR(6,loc12);
	RTLR(7,ur1);
	RTLR(8,loc6);
	RTLR(9,loc7);
	RTLR(10,loc8);
	RTLR(11,Current);
	RTLR(12,loc9);
	RTLR(13,loc14);
	RTLR(14,loc13);
	RTLR(15,ur2);
	RTLR(16,tr2);
	RTLR(17,ur3);
	RTLIU(18);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_REF, &loc8);
	RTLU(SK_REF, &loc9);
	RTLU(SK_REF, &loc10);
	RTLU(SK_REF, &loc11);
	RTLU(SK_REF, &loc12);
	RTLU(SK_REF, &loc13);
	RTLU(SK_REF, &loc14);
	
	RTEAA(l_feature_name, 378, Current, 14, 3, 13715);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(378, Current, 13715);
	RTCC(arg1, 378, l_feature_name, 1, eif_new_type(376, 0x01), 0x01);
	RTCC(arg2, 378, l_feature_name, 2, eif_new_type(307, 0x01), 0x01);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,662,0xFF01,327,0xFF01,301,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg3, 378, l_feature_name, 3, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_not_empty", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(arg2 != NULL)) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4656, "is_empty", arg2))(arg2)).it_b);
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	wstdinit(loc14,loc14);
	RTLXI(loc14);
	RTHOOK(2);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	ti4_1 = *(EIF_INTEGER_32 *)(arg2 + RTVA(4877, "count", arg2));
	loc1 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc3 > loc1) || (EIF_BOOLEAN)(loc10 != NULL))) break;
		RTHOOK(5);
		ui4_1 = loc3;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4063, "item", arg2))(arg2, ui4_1x)).it_c1);
		switch (tc1) {
			case (EIF_CHARACTER_8) '\015':
				RTHOOK(6);
				tb1 = '\0';
				tb2 = '\0';
				tb3 = '\0';
				if ((EIF_BOOLEAN) (loc1 >= (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 3L)))) {
					ui4_1 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
					tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4063, "item", arg2))(arg2, ui4_1x)).it_c1);
					tb3 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\012');
				}
				if (tb3) {
					ui4_1 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 2L));
					tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4063, "item", arg2))(arg2, ui4_1x)).it_c1);
					tb2 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\015');
				}
				if (tb2) {
					ui4_1 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 3L));
					tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4063, "item", arg2))(arg2, ui4_1x)).it_c1);
					tb1 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\012');
				}
				if (tb1) {
					RTHOOK(7);
					RTDBGAL(10, 0xF8000133, 0, 0); /* loc10 */
					ui4_1 = ((EIF_INTEGER_32) 1L);
					ui4_2 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4719, "substring", arg2))(arg2, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					loc10 = (EIF_REFERENCE) RTCCL(tr1);
					RTHOOK(8);
					RTDBGAL(11, 0xF8000133, 0, 0); /* loc11 */
					ui4_1 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 4L));
					ui4_2 = loc1;
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4719, "substring", arg2))(arg2, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					loc11 = (EIF_REFERENCE) RTCCL(tr1);
				}
				break;
			case (EIF_CHARACTER_8) '\012':
				RTHOOK(9);
				tb1 = '\0';
				if ((EIF_BOOLEAN) (loc1 >= (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L)))) {
					ui4_1 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
					tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4063, "item", arg2))(arg2, ui4_1x)).it_c1);
					tb1 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\012');
				}
				if (tb1) {
					RTHOOK(10);
					RTDBGAL(10, 0xF8000133, 0, 0); /* loc10 */
					ui4_1 = ((EIF_INTEGER_32) 1L);
					ui4_2 = loc3;
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4719, "substring", arg2))(arg2, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					loc10 = (EIF_REFERENCE) RTCCL(tr1);
					RTHOOK(11);
					RTDBGAL(11, 0xF8000133, 0, 0); /* loc11 */
					ui4_1 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 2L));
					ui4_2 = loc1;
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4719, "substring", arg2))(arg2, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					loc11 = (EIF_REFERENCE) RTCCL(tr1);
				}
				break;
		}
		RTHOOK(12);
		RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
		loc3++;
	}
	RTHOOK(13);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc10 != NULL) && (EIF_BOOLEAN)(loc11 != NULL))) {
		RTHOOK(14);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		RTHOOK(15);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		ti4_1 = *(EIF_INTEGER_32 *)(loc10 + RTVA(4877, "count", loc10));
		loc1 = (EIF_INTEGER_32) ti4_1;
		for (;;) {
			RTHOOK(16);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN) (loc2 > loc1))) break;
			RTHOOK(17);
			RTDBGAL(12, 0xF8000133, 0, 0); /* loc12 */
			loc12 = (EIF_REFERENCE) NULL;
			RTHOOK(18);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			loc4 = (EIF_INTEGER_32) loc2;
			RTHOOK(19);
			RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
			uc1 = (EIF_CHARACTER_8) '\012';
			ui4_1 = loc4;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4855, "index_of", loc10))(loc10, uc1x, ui4_1x)).it_i4);
			loc3 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(20);
			if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 0L))) {
				RTHOOK(21);
				ui4_1 = (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4063, "item", loc10))(loc10, ui4_1x)).it_c1);
				if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\015')) {
					RTHOOK(22);
					RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
					loc3--;
					RTHOOK(23);
					RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
					loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 2L));
				} else {
					RTHOOK(24);
					RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
					loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
				}
			}
			RTHOOK(25);
			if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 0L))) {
				RTHOOK(26);
				RTDBGAL(12, 0xF8000133, 0, 0); /* loc12 */
				ui4_1 = loc4;
				ui4_2 = (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4719, "substring", loc10))(loc10, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc12 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(27);
				tr1 = RTMS_EX_H("Content-Disposition: form-data",30,1482817121);
				ur1 = tr1;
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4865, "starts_with", loc12))(loc12, ur1x)).it_b);
				if (tb1) {
					RTHOOK(28);
					RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
					tr1 = RTMS_EX_H("name=",5,1635404093);
					ur1 = tr1;
					ui4_1 = ((EIF_INTEGER_32) 1L);
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4689, "substring_index", loc12))(loc12, ur1x, ui4_1x)).it_i4);
					loc3 = (EIF_INTEGER_32) ti4_1;
					RTHOOK(29);
					if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 0L))) {
						RTHOOK(30);
						RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
						loc3 += ((EIF_INTEGER_32) 4L);
						RTHOOK(31);
						tb1 = '\0';
						ui4_1 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
						tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4067, "valid_index", loc12))(loc12, ui4_1x)).it_b);
						if (tb2) {
							ui4_1 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
							tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4063, "item", loc12))(loc12, ui4_1x)).it_c1);
							tb1 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\"');
						}
						if (tb1) {
							RTHOOK(32);
							RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
							loc3++;
							RTHOOK(33);
							RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
							uc1 = (EIF_CHARACTER_8) '\"';
							ui4_1 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4855, "index_of", loc12))(loc12, uc1x, ui4_1x)).it_i4);
							loc5 = (EIF_INTEGER_32) ti4_1;
						} else {
							RTHOOK(34);
							RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
							uc1 = (EIF_CHARACTER_8) ';';
							ui4_1 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4855, "index_of", loc12))(loc12, uc1x, ui4_1x)).it_i4);
							loc5 = (EIF_INTEGER_32) ti4_1;
							RTHOOK(35);
							if ((EIF_BOOLEAN)(loc5 == ((EIF_INTEGER_32) 0L))) {
								RTHOOK(36);
								RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
								ti4_1 = *(EIF_INTEGER_32 *)(loc12 + RTVA(4877, "count", loc12));
								loc5 = (EIF_INTEGER_32) ti4_1;
							}
						}
						RTHOOK(37);
						RTDBGAL(6, 0xF8000133, 0, 0); /* loc6 */
						ui4_1 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
						ui4_2 = (EIF_INTEGER_32) (loc5 - ((EIF_INTEGER_32) 1L));
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4719, "substring", loc10))(loc10, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						loc6 = (EIF_REFERENCE) RTCCL(tr1);
					}
					RTHOOK(38);
					RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
					tr1 = RTMS_EX_H("filename=",9,2103120189);
					ur1 = tr1;
					ui4_1 = ((EIF_INTEGER_32) 1L);
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4689, "substring_index", loc12))(loc12, ur1x, ui4_1x)).it_i4);
					loc3 = (EIF_INTEGER_32) ti4_1;
					RTHOOK(39);
					if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 0L))) {
						RTHOOK(40);
						RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
						loc3 += ((EIF_INTEGER_32) 8L);
						RTHOOK(41);
						tb1 = '\0';
						ui4_1 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
						tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4067, "valid_index", loc12))(loc12, ui4_1x)).it_b);
						if (tb2) {
							ui4_1 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
							tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4063, "item", loc12))(loc12, ui4_1x)).it_c1);
							tb1 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\"');
						}
						if (tb1) {
							RTHOOK(42);
							RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
							loc3++;
							RTHOOK(43);
							RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
							uc1 = (EIF_CHARACTER_8) '\"';
							ui4_1 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4855, "index_of", loc12))(loc12, uc1x, ui4_1x)).it_i4);
							loc5 = (EIF_INTEGER_32) ti4_1;
						} else {
							RTHOOK(44);
							RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
							uc1 = (EIF_CHARACTER_8) ';';
							ui4_1 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4855, "index_of", loc12))(loc12, uc1x, ui4_1x)).it_i4);
							loc5 = (EIF_INTEGER_32) ti4_1;
							RTHOOK(45);
							if ((EIF_BOOLEAN)(loc5 == ((EIF_INTEGER_32) 0L))) {
								RTHOOK(46);
								RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
								ti4_1 = *(EIF_INTEGER_32 *)(loc12 + RTVA(4877, "count", loc12));
								loc5 = (EIF_INTEGER_32) ti4_1;
							}
						}
						RTHOOK(47);
						RTDBGAL(7, 0xF8000133, 0, 0); /* loc7 */
						ui4_1 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
						ui4_2 = (EIF_INTEGER_32) (loc5 - ((EIF_INTEGER_32) 1L));
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4719, "substring", loc10))(loc10, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						loc7 = (EIF_REFERENCE) RTCCL(tr1);
					}
				} else {
					RTHOOK(48);
					tr1 = RTMS_EX_H("Content-Type: ",14,597285920);
					ur1 = tr1;
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4865, "starts_with", loc12))(loc12, ur1x)).it_b);
					if (tb1) {
						RTHOOK(49);
						RTDBGAL(8, 0xF8000133, 0, 0); /* loc8 */
						ui4_1 = ((EIF_INTEGER_32) 15L);
						ti4_1 = *(EIF_INTEGER_32 *)(loc12 + RTVA(4877, "count", loc12));
						ui4_2 = ti4_1;
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4719, "substring", loc12))(loc12, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						loc8 = (EIF_REFERENCE) RTCCL(tr1);
					}
				}
			} else {
				RTHOOK(50);
				RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
				loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			}
		}
		RTHOOK(51);
		if ((EIF_BOOLEAN)(loc6 != NULL)) {
			RTHOOK(52);
			tb1 = '\0';
			if ((EIF_BOOLEAN)(loc7 != NULL)) {
				tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4656, "is_empty", loc7))(loc7)).it_b);
				tb1 = (EIF_BOOLEAN) !tb2;
			}
			if (tb1) {
				RTHOOK(53);
				if ((EIF_BOOLEAN)(loc8 == NULL)) {
					RTHOOK(54);
					RTDBGAL(8, 0xF8000133, 0, 0); /* loc8 */
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6137, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					loc8 = (EIF_REFERENCE) RTCCL(tr1);
				}
				RTHOOK(55);
				RTDBGAL(9, 0xF8000130, 0, 0); /* loc9 */
				ur1 = RTCCL(loc6);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(349, "utf_8_string_8_to_string_32", loc14))(loc14, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc9 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(56);
				RTDBGAL(13, 0xF800014C, 0, 0); /* loc13 */
				tr1 = RTLN(eif_new_type(332, 0x01).id);
				ur1 = RTCCL(loc9);
				ur2 = RTCCL(loc7);
				tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(351, "utf_8_string_8_to_escaped_string_32", loc14))(loc14, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur2 = RTCCL(tr2);
				ur3 = RTCCL(loc8);
				ti4_1 = *(EIF_INTEGER_32 *)(loc11 + RTVA(4877, "count", loc11));
				ui4_1 = ti4_1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5362, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x, ui4_1x);
				RTNHOOK(56,1);
				loc13 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(57);
				ur1 = RTCCL(loc9);
				ur2 = RTCCL(loc13);
				ur3 = RTCCL(arg3);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5986, dtype))(Current, ur1x, ur2x, ur3x);
				RTHOOK(58);
				ur1 = RTCCL(loc13);
				ur2 = RTCCL(loc11);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6119, "save_uploaded_file", arg1))(arg1, ur1x, ur2x);
			} else {
				RTHOOK(59);
				ur1 = RTCCL(loc6);
				ur2 = RTCCL(loc11);
				ur3 = RTCCL(arg3);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5984, dtype))(Current, ur1x, ur2x, ur3x);
			}
		} else {
			RTHOOK(60);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6000, "error_handler", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ui4_1 = ((EIF_INTEGER_32) 0L);
			tr2 = RTMS_EX_H("unamed multipart entry",22,97040249);
			ur1 = tr2;
			ur2 = NULL;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5018, "add_custom_error", tr1))(tr1, ui4_1x, ur1x, ur2x);
		}
	} else {
		RTHOOK(61);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6000, "error_handler", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = ((EIF_INTEGER_32) 0L);
		tr2 = RTMS_EX_H("missformed multipart entry",26,1788966777);
		ur1 = tr2;
		ur2 = NULL;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5018, "add_custom_error", tr1))(tr1, ui4_1x, ur1x, ur2x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(62);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(19);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ui4_1
#undef ui4_2
#undef uc1
#undef arg3
#undef arg2
#undef arg1
}

/* {WSF_MULTIPART_FORM_DATA_HANDLER}.default_content_type */
RTOID (F379_7913)


EIF_TYPED_VALUE F379_7913 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F379_7913,13717,RTMS_EX_H("text/plain",10,1054604142));
}

void EIF_Minit379 (void)
{
	GTCX
	RTOTS (7913,F379_7913)
}


#ifdef __cplusplus
}
#endif
