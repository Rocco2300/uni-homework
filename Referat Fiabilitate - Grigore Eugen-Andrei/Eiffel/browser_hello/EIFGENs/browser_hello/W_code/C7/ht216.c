/*
 * Code for class HTML_ENCODER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F216_2718(EIF_REFERENCE);
extern EIF_TYPED_VALUE F216_2719(EIF_REFERENCE);
extern EIF_TYPED_VALUE F216_2720(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F216_2721(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F216_2722(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F216_2723(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F216_2724(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F216_2725(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F216_2726(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F216_2727(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F216_2728(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit216(void);

#ifdef __cplusplus
}
#endif

#include <ctype.h>
#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {HTML_ENCODER}.name */
EIF_TYPED_VALUE F216_2718 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "name";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLR(2,ur1);
	RTLR(3,Result);
	RTLR(4,Current);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 215, Current, 0, 0, 2689);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(215, Current, 2689);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF8000133, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(308, 0x01).id);
	tr2 = RTMS_EX_H("HTML-encoded",12,1587695716);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4845, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
}

/* {HTML_ENCODER}.has_error */
EIF_TYPED_VALUE F216_2719 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(2393,Dtype(Current)));
	return r;
}


/* {HTML_ENCODER}.encoded_string */
EIF_TYPED_VALUE F216_2720 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "encoded_string";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLR(6,Result);
	RTLIU(7);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 215, Current, 0, 1, 2691);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(215, Current, 2691);
	RTCC(arg1, 215, l_feature_name, 1, eif_new_type(304, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_unencoded_string", EX_PRE);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1373, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		tr1 = arg1;
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(2);
	RTDBGAL(0, 0xF8000135, 0,0); /* Result */
	ur1 = RTCCL(arg1);
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2386, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr3);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("unchanged", EX_POST);
		RTCO(tr2);
		if (RTEQ(arg1, tr1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("valid_encoded_string", EX_POST);
		ur1 = RTCCL(Result);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1374, dtype))(Current, ur1x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef arg1
}

/* {HTML_ENCODER}.general_encoded_string */
EIF_TYPED_VALUE F216_2721 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "general_encoded_string";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_CHARACTER_8 loc4 = (EIF_CHARACTER_8) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_UINT32, &loc3);
	RTLU(SK_CHAR8, &loc4);
	
	RTEAA(l_feature_name, 215, Current, 4, 1, 2692);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(215, Current, 2692);
	RTCC(arg1, 215, l_feature_name, 1, eif_new_type(301, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 2393, 0x04000000, 1); /* has_error */
	*(EIF_BOOLEAN *)(Current + RTWA(2393, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(2);
	RTDBGAL(0, 0xF8000135, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(309, 0x01).id);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4678, "count", arg1))(arg1)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4678, "count", arg1))(arg1)).it_i4);
	ui4_1 = (EIF_INTEGER_32) (ti4_1 + (EIF_INTEGER_32) (ti4_2 / ((EIF_INTEGER_32) 10L)));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4639, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4678, "count", arg1))(arg1)).it_i4);
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(6);
		RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
		ui4_1 = loc1;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4641, "code", arg1))(arg1, ui4_1x)).it_n4);
		loc3 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(7);
		tr1 = RTLN(eif_new_type(350, 0x00).id);
		*(EIF_NATURAL_32 *)tr1 = loc3;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5674, "is_valid_character_8_code", tr1))(tr1)).it_b);
		if (tb1) {
			RTHOOK(8);
			RTDBGAL(4, 0x08000000, 1, 0); /* loc4 */
			tc1 = (EIF_CHARACTER_8) loc3;
			loc4 = (EIF_CHARACTER_8) tc1;
			RTHOOK(9);
			switch (loc4) {
				case (EIF_CHARACTER_8) '\011':
				case (EIF_CHARACTER_8) '\012':
				case (EIF_CHARACTER_8) '\015':
					RTHOOK(10);
					uc1 = loc4;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3782, "extend", Result))(Result, uc1x);
					break;
				case (EIF_CHARACTER_8) '\"':
					RTHOOK(11);
					tr1 = RTMS_EX_H("&quot;",6,2045817403);
					ur1 = tr1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4903, "append_string", Result))(Result, ur1x);
					break;
				case (EIF_CHARACTER_8) '&':
					RTHOOK(12);
					tr1 = RTMS_EX_H("&amp;",5,1634853947);
					ur1 = tr1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4903, "append_string", Result))(Result, ur1x);
					break;
				case (EIF_CHARACTER_8) '\'':
					RTHOOK(13);
					tr1 = RTMS_EX_H("&#39;",5,590851387);
					ur1 = tr1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4903, "append_string", Result))(Result, ur1x);
					break;
				case (EIF_CHARACTER_8) '<':
					RTHOOK(14);
					tr1 = RTMS_EX_H("&lt;",4,644641851);
					ur1 = tr1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4903, "append_string", Result))(Result, ur1x);
					break;
				case (EIF_CHARACTER_8) '>':
					RTHOOK(15);
					tr1 = RTMS_EX_H("&gt;",4,644314171);
					ur1 = tr1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4903, "append_string", Result))(Result, ur1x);
					break;
				default:
					RTHOOK(16);
					if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc3 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 31L)) || (EIF_BOOLEAN)(loc3 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 127L)))) {
					} else {
						RTHOOK(17);
						if ((EIF_BOOLEAN) (loc3 >= (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L))) {
							RTHOOK(18);
							tr1 = RTMS_EX_H("&#",2,9763);
							ur1 = tr1;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4901, "append", Result))(Result, ur1x);
							RTHOOK(19);
							tr1 = eif_out__u4_s1(loc3);
							ur1 = RTCCL(tr1);
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4901, "append", Result))(Result, ur1x);
							RTHOOK(20);
							uc1 = (EIF_CHARACTER_8) ';';
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3782, "extend", Result))(Result, uc1x);
						} else {
							RTHOOK(21);
							uc1 = loc4;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3782, "extend", Result))(Result, uc1x);
						}
					}
					break;
			}
		} else {
			RTHOOK(22);
			tr1 = RTMS_EX_H("&#",2,9763);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4901, "append", Result))(Result, ur1x);
			RTHOOK(23);
			tr1 = eif_out__u4_s1(loc3);
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4901, "append", Result))(Result, ur1x);
			RTHOOK(24);
			uc1 = (EIF_CHARACTER_8) ';';
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3782, "extend", Result))(Result, uc1x);
		}
		RTHOOK(25);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(26);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef uc1
#undef arg1
}

/* {HTML_ENCODER}.decoded_string */
EIF_TYPED_VALUE F216_2722 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "decoded_string";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc3 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLR(6,Result);
	RTLR(7,loc4);
	RTLR(8,ur2);
	RTLIU(9);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_CHAR8, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 215, Current, 4, 1, 2693);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(215, Current, 2693);
	RTCC(arg1, 215, l_feature_name, 1, eif_new_type(307, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_encoded_string", EX_PRE);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1374, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		tr1 = arg1;
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(2);
	RTDBGAA(Current, dtype, 2393, 0x04000000, 1); /* has_error */
	*(EIF_BOOLEAN *)(Current + RTWA(2393, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(3);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4877, "count", arg1));
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	RTDBGAL(0, 0xF8000132, 0,0); /* Result */
	tr3 = RTLN(eif_new_type(306, 0x01).id);
	ui4_1 = loc2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4639, Dtype(tr3)))(tr3, ui4_1x);
	RTNHOOK(4,1);
	Result = (EIF_REFERENCE) RTCCL(tr3);
	RTHOOK(5);
	RTDBGAL(4, 0xF80002A1, 0, 0); /* loc4 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,673,338,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr3 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(1201, Dtype(tr3)))(tr3, ui4_1x);
	RTNHOOK(5,1);
	loc4 = (EIF_REFERENCE) RTCCL(tr3);
	RTHOOK(6);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(7);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(8);
		RTDBGAL(3, 0x08000000, 1, 0); /* loc3 */
		ui4_1 = loc1;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4063, "item", arg1))(arg1, ui4_1x)).it_c1);
		loc3 = (EIF_CHARACTER_8) tc1;
		RTHOOK(9);
		if ((EIF_BOOLEAN)(loc3 == (EIF_CHARACTER_8) '&')) {
			RTHOOK(10);
			ui4_1 = loc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1202, "replace", loc4))(loc4, ui4_1x);
			RTHOOK(11);
			ur1 = RTCCL(arg1);
			ur2 = RTCCL(loc4);
			tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(2388, dtype))(Current, ur1x, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr3);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_string", Result))(Result, ur1x);
			RTHOOK(12);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1200, "item", loc4))(loc4)).it_i4);
			loc1 = (EIF_INTEGER_32) ti4_1;
		} else {
			RTHOOK(13);
			tw1 = (EIF_CHARACTER_32) loc3;
			uw1 = tw1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4827, "append_character", Result))(Result, uw1x);
			RTHOOK(14);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1++;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(15);
		RTCT("unchanged", EX_POST);
		RTCO(tr2);
		if (RTEQ(arg1, tr1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(16);
		RTCT("valid_unencoded_string", EX_POST);
		ur1 = RTCCL(Result);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1373, dtype))(Current, ur1x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(17);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef uw1
#undef arg1
}

/* {HTML_ENCODER}.general_decoded_string */
EIF_TYPED_VALUE F216_2723 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "general_decoded_string";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_NATURAL_32 loc5 = (EIF_NATURAL_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_32 tw1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLR(4,loc4);
	RTLR(5,ur1);
	RTLR(6,ur2);
	RTLIU(7);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_UINT32, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_UINT32, &loc5);
	
	RTEAA(l_feature_name, 215, Current, 5, 1, 2694);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(215, Current, 2694);
	RTCC(arg1, 215, l_feature_name, 1, eif_new_type(301, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 2393, 0x04000000, 1); /* has_error */
	*(EIF_BOOLEAN *)(Current + RTWA(2393, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(2);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4678, "count", arg1))(arg1)).it_i4);
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	RTDBGAL(0, 0xF8000132, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(306, 0x01).id);
	ui4_1 = loc2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4639, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(3,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAL(4, 0xF80002A1, 0, 0); /* loc4 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,673,338,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(1201, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(4,1);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
	tu4_1 = (EIF_NATURAL_32) (EIF_CHARACTER_8) '&';
	loc5 = (EIF_NATURAL_32) tu4_1;
	RTHOOK(6);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(7);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(8);
		RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
		ui4_1 = loc1;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4641, "code", arg1))(arg1, ui4_1x)).it_n4);
		loc3 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(9);
		if ((EIF_BOOLEAN)(loc3 == loc5)) {
			RTHOOK(10);
			ui4_1 = loc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1202, "replace", loc4))(loc4, ui4_1x);
			RTHOOK(11);
			ur1 = RTCCL(arg1);
			ur2 = RTCCL(loc4);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(2388, dtype))(Current, ur1x, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4749, "append_string_general", Result))(Result, ur1x);
			RTHOOK(12);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1200, "item", loc4))(loc4)).it_i4);
			loc1 = (EIF_INTEGER_32) ti4_1;
		} else {
			RTHOOK(13);
			tw1 = (EIF_CHARACTER_32) loc3;
			uw1 = tw1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4827, "append_character", Result))(Result, uw1x);
			RTHOOK(14);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1++;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(8);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef uw1
#undef arg1
}

/* {HTML_ENCODER}.next_entity */
EIF_TYPED_VALUE F216_2724 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "next_entity";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc2 = (EIF_NATURAL_32) 0;
	EIF_BOOLEAN loc3 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_NATURAL_32 loc6 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc7 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc8 = (EIF_NATURAL_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc5);
	RTLR(3,tr1);
	RTLR(4,Current);
	RTLR(5,Result);
	RTLR(6,ur1);
	RTLIU(7);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_UINT32, &loc2);
	RTLU(SK_BOOL, &loc3);
	RTLU(SK_BOOL, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_UINT32, &loc6);
	RTLU(SK_UINT32, &loc7);
	RTLU(SK_UINT32, &loc8);
	
	RTEAA(l_feature_name, 215, Current, 8, 2, 2695);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(215, Current, 2695);
	RTCC(arg1, 215, l_feature_name, 1, eif_new_type(301, 0x01), 0x01);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,673,338,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg2, 215, l_feature_name, 2, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(6, 0x38000000, 1, 0); /* loc6 */
	tu4_1 = (EIF_NATURAL_32) (EIF_CHARACTER_8) '#';
	loc6 = (EIF_NATURAL_32) tu4_1;
	RTHOOK(2);
	RTDBGAL(7, 0x38000000, 1, 0); /* loc7 */
	tu4_1 = (EIF_NATURAL_32) (EIF_CHARACTER_8) 'x';
	loc7 = (EIF_NATURAL_32) tu4_1;
	RTHOOK(3);
	RTDBGAL(8, 0x38000000, 1, 0); /* loc8 */
	tu4_1 = (EIF_NATURAL_32) (EIF_CHARACTER_8) ';';
	loc8 = (EIF_NATURAL_32) tu4_1;
	RTHOOK(4);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1200, "item", arg2))(arg2)).it_i4);
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	RTDBGAL(5, 0xF8000132, 0, 0); /* loc5 */
	tr1 = RTLN(eif_new_type(306, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(4640, Dtype(tr1)))(tr1);
	RTNHOOK(5,1);
	loc5 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1++;
	RTHOOK(7);
	RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
	ui4_1 = loc1;
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4641, "code", arg1))(arg1, ui4_1x)).it_n4);
	loc2 = (EIF_NATURAL_32) tu4_1;
	RTHOOK(8);
	if ((EIF_BOOLEAN)(loc2 == loc6)) {
		RTHOOK(9);
		RTDBGAL(3, 0x04000000, 1, 0); /* loc3 */
		loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(10);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
		RTHOOK(11);
		RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
		ui4_1 = loc1;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4641, "code", arg1))(arg1, ui4_1x)).it_n4);
		loc2 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(12);
		if ((EIF_BOOLEAN)(loc2 == loc7)) {
			RTHOOK(13);
			RTDBGAL(4, 0x04000000, 1, 0); /* loc4 */
			loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			RTHOOK(14);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1++;
			RTHOOK(15);
			RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
			ui4_1 = loc1;
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4641, "code", arg1))(arg1, ui4_1x)).it_n4);
			loc2 = (EIF_NATURAL_32) tu4_1;
		}
	}
	RTHOOK(16);
	if (loc3) {
		RTHOOK(17);
		if (loc4) {
			for (;;) {
				RTHOOK(18);
				tb1 = '\01';
				uu4_1 = loc2;
				tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2391, dtype))(Current, uu4_1x)).it_b);
				if (!(EIF_BOOLEAN) !tb2) {
					tb1 = (EIF_BOOLEAN)(loc2 == loc8);
				}
				if (tb1) break;
				RTHOOK(19);
				uu4_1 = loc2;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4738, "append_code", loc5))(loc5, uu4_1x);
				RTHOOK(20);
				RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
				loc1++;
				RTHOOK(21);
				RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
				ui4_1 = loc1;
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4641, "code", arg1))(arg1, ui4_1x)).it_n4);
				loc2 = (EIF_NATURAL_32) tu4_1;
			}
		} else {
			for (;;) {
				RTHOOK(22);
				tb2 = '\01';
				uu4_1 = loc2;
				tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2392, dtype))(Current, uu4_1x)).it_b);
				if (!(EIF_BOOLEAN) !tb3) {
					tb2 = (EIF_BOOLEAN)(loc2 == loc8);
				}
				if (tb2) break;
				RTHOOK(23);
				uu4_1 = loc2;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4738, "append_code", loc5))(loc5, uu4_1x);
				RTHOOK(24);
				RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
				loc1++;
				RTHOOK(25);
				RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
				ui4_1 = loc1;
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4641, "code", arg1))(arg1, ui4_1x)).it_n4);
				loc2 = (EIF_NATURAL_32) tu4_1;
			}
		}
	} else {
		for (;;) {
			RTHOOK(26);
			tb3 = '\01';
			uu4_1 = loc2;
			tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2390, dtype))(Current, uu4_1x)).it_b);
			if (!(EIF_BOOLEAN) !tb4) {
				tb3 = (EIF_BOOLEAN)(loc2 == loc8);
			}
			if (tb3) break;
			RTHOOK(27);
			uu4_1 = loc2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4738, "append_code", loc5))(loc5, uu4_1x);
			RTHOOK(28);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1++;
			RTHOOK(29);
			RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
			ui4_1 = loc1;
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4641, "code", arg1))(arg1, ui4_1x)).it_n4);
			loc2 = (EIF_NATURAL_32) tu4_1;
		}
	}
	RTHOOK(30);
	if ((EIF_BOOLEAN)(loc2 == loc8)) {
		RTHOOK(31);
		if (loc3) {
			RTHOOK(32);
			if (loc4) {
				RTHOOK(33);
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'x';
				uw1 = tw1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4819, "prepend_character", loc5))(loc5, uw1x);
				RTHOOK(34);
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '#';
				uw1 = tw1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4819, "prepend_character", loc5))(loc5, uw1x);
				RTHOOK(35);
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '&';
				uw1 = tw1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4819, "prepend_character", loc5))(loc5, uw1x);
				RTHOOK(36);
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) ';';
				uw1 = tw1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4827, "append_character", loc5))(loc5, uw1x);
				RTHOOK(37);
				RTDBGAL(0, 0xF8000132, 0,0); /* Result */
				Result = (EIF_REFERENCE) RTCCL(loc5);
			} else {
				RTHOOK(38);
				tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4670, "is_integer", loc5))(loc5)).it_b);
				if (tb4) {
					RTHOOK(39);
					RTDBGAL(0, 0xF8000132, 0,0); /* Result */
					tr1 = RTLN(eif_new_type(306, 0x01).id);
					ui4_1 = ((EIF_INTEGER_32) 1L);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4639, Dtype(tr1)))(tr1, ui4_1x);
					RTNHOOK(39,1);
					Result = (EIF_REFERENCE) RTCCL(tr1);
					RTHOOK(40);
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4710, "to_natural_32", loc5))(loc5)).it_n4);
					uu4_1 = tu4_1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4738, "append_code", Result))(Result, uu4_1x);
				} else {
					RTHOOK(41);
					tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '&';
					uw1 = tw1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4819, "prepend_character", loc5))(loc5, uw1x);
					RTHOOK(42);
					tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) ';';
					uw1 = tw1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4827, "append_character", loc5))(loc5, uw1x);
					RTHOOK(43);
					RTDBGAL(0, 0xF8000132, 0,0); /* Result */
					Result = (EIF_REFERENCE) RTCCL(loc5);
				}
			}
		} else {
			RTHOOK(44);
			ur1 = RTCCL(loc5);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2389, dtype))(Current, ur1x);
			RTHOOK(45);
			RTDBGAL(0, 0xF8000132, 0,0); /* Result */
			Result = (EIF_REFERENCE) RTCCL(loc5);
		}
		RTHOOK(46);
		ui4_1 = (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1202, "replace", arg2))(arg2, ui4_1x);
	} else {
		RTHOOK(47);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1200, "item", arg2))(arg2)).it_i4);
		ui4_1 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1202, "replace", arg2))(arg2, ui4_1x);
		RTHOOK(48);
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '&';
		uw1 = tw1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4819, "prepend_character", loc5))(loc5, uw1x);
		RTHOOK(49);
		RTDBGAA(Current, dtype, 2393, 0x04000000, 1); /* has_error */
		*(EIF_BOOLEAN *)(Current + RTWA(2393, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(50);
		RTDBGAL(0, 0xF8000132, 0,0); /* Result */
		Result = (EIF_REFERENCE) RTCCL(loc5);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(51);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(12);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ui4_1
#undef uu4_1
#undef uw1
#undef arg2
#undef arg1
}

/* {HTML_ENCODER}.resolve_entity */
void F216_2725 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "resolve_entity";
	RTEX;
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_BOOL, &loc1);
	
	RTEAA(l_feature_name, 215, Current, 1, 1, 2696);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(215, Current, 2696);
	RTCC(arg1, 215, l_feature_name, 1, eif_new_type(306, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
	tr1 = RTLN(eif_new_type(290, 0x00).id);
	*(EIF_CHARACTER_32 *)tr1 = tw1;
	tw2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4500, "as_lower", tr1))(tr1)).it_c4);
	switch (tw2) {
		case (EIF_CHARACTER_8) 'a':
			RTHOOK(3);
			tb1 = '\0';
			tb2 = '\0';
			ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4797, "count", arg1));
			if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 3L))) {
				ui4_1 = ((EIF_INTEGER_32) 2L);
				tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
				tr1 = RTLN(eif_new_type(290, 0x00).id);
				*(EIF_CHARACTER_32 *)tr1 = tw1;
				tw2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4500, "as_lower", tr1))(tr1)).it_c4);
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'm';
				tb2 = (EIF_BOOLEAN)(tw2 == tw1);
			}
			if (tb2) {
				ui4_1 = ((EIF_INTEGER_32) 3L);
				tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
				tr1 = RTLN(eif_new_type(290, 0x00).id);
				*(EIF_CHARACTER_32 *)tr1 = tw1;
				tw2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4500, "as_lower", tr1))(tr1)).it_c4);
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'p';
				tb1 = (EIF_BOOLEAN)(tw2 == tw1);
			}
			if (tb1) {
				RTHOOK(4);
				RTDBGAL(1, 0x04000000, 1, 0); /* loc1 */
				loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				RTHOOK(5);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(4766, "wipe_out", arg1))(arg1);
				RTHOOK(6);
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '&';
				uw1 = tw1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4827, "append_character", arg1))(arg1, uw1x);
			} else {
				RTHOOK(7);
				tb1 = '\0';
				tb2 = '\0';
				tb3 = '\0';
				ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4797, "count", arg1));
				if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 4L))) {
					ui4_1 = ((EIF_INTEGER_32) 2L);
					tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
					tr1 = RTLN(eif_new_type(290, 0x00).id);
					*(EIF_CHARACTER_32 *)tr1 = tw1;
					tw2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4500, "as_lower", tr1))(tr1)).it_c4);
					tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'p';
					tb3 = (EIF_BOOLEAN)(tw2 == tw1);
				}
				if (tb3) {
					ui4_1 = ((EIF_INTEGER_32) 3L);
					tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
					tr1 = RTLN(eif_new_type(290, 0x00).id);
					*(EIF_CHARACTER_32 *)tr1 = tw1;
					tw2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4500, "as_lower", tr1))(tr1)).it_c4);
					tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'o';
					tb2 = (EIF_BOOLEAN)(tw2 == tw1);
				}
				if (tb2) {
					ui4_1 = ((EIF_INTEGER_32) 4L);
					tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
					tr1 = RTLN(eif_new_type(290, 0x00).id);
					*(EIF_CHARACTER_32 *)tr1 = tw1;
					tw2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4500, "as_lower", tr1))(tr1)).it_c4);
					tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 's';
					tb1 = (EIF_BOOLEAN)(tw2 == tw1);
				}
				if (tb1) {
					RTHOOK(8);
					RTDBGAL(1, 0x04000000, 1, 0); /* loc1 */
					loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					RTHOOK(9);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(4766, "wipe_out", arg1))(arg1);
					RTHOOK(10);
					tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\'';
					uw1 = tw1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4827, "append_character", arg1))(arg1, uw1x);
				}
			}
			break;
		case (EIF_CHARACTER_8) 'q':
			RTHOOK(11);
			tb1 = '\0';
			tb2 = '\0';
			tb3 = '\0';
			ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4797, "count", arg1));
			if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 4L))) {
				ui4_1 = ((EIF_INTEGER_32) 2L);
				tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
				tr1 = RTLN(eif_new_type(290, 0x00).id);
				*(EIF_CHARACTER_32 *)tr1 = tw1;
				tw2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4500, "as_lower", tr1))(tr1)).it_c4);
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'u';
				tb3 = (EIF_BOOLEAN)(tw2 == tw1);
			}
			if (tb3) {
				ui4_1 = ((EIF_INTEGER_32) 3L);
				tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
				tr1 = RTLN(eif_new_type(290, 0x00).id);
				*(EIF_CHARACTER_32 *)tr1 = tw1;
				tw2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4500, "as_lower", tr1))(tr1)).it_c4);
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'o';
				tb2 = (EIF_BOOLEAN)(tw2 == tw1);
			}
			if (tb2) {
				ui4_1 = ((EIF_INTEGER_32) 4L);
				tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
				tr1 = RTLN(eif_new_type(290, 0x00).id);
				*(EIF_CHARACTER_32 *)tr1 = tw1;
				tw2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4500, "as_lower", tr1))(tr1)).it_c4);
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 't';
				tb1 = (EIF_BOOLEAN)(tw2 == tw1);
			}
			if (tb1) {
				RTHOOK(12);
				RTDBGAL(1, 0x04000000, 1, 0); /* loc1 */
				loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				RTHOOK(13);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(4766, "wipe_out", arg1))(arg1);
				RTHOOK(14);
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\"';
				uw1 = tw1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4827, "append_character", arg1))(arg1, uw1x);
			}
			break;
		case (EIF_CHARACTER_8) 'l':
			RTHOOK(15);
			tb1 = '\0';
			ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4797, "count", arg1));
			if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L))) {
				ui4_1 = ((EIF_INTEGER_32) 2L);
				tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
				tr1 = RTLN(eif_new_type(290, 0x00).id);
				*(EIF_CHARACTER_32 *)tr1 = tw1;
				tw2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4500, "as_lower", tr1))(tr1)).it_c4);
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 't';
				tb1 = (EIF_BOOLEAN)(tw2 == tw1);
			}
			if (tb1) {
				RTHOOK(16);
				RTDBGAL(1, 0x04000000, 1, 0); /* loc1 */
				loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				RTHOOK(17);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(4766, "wipe_out", arg1))(arg1);
				RTHOOK(18);
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '<';
				uw1 = tw1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4827, "append_character", arg1))(arg1, uw1x);
			}
			break;
		case (EIF_CHARACTER_8) 'g':
			RTHOOK(19);
			tb1 = '\0';
			ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4797, "count", arg1));
			if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L))) {
				ui4_1 = ((EIF_INTEGER_32) 2L);
				tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
				tr1 = RTLN(eif_new_type(290, 0x00).id);
				*(EIF_CHARACTER_32 *)tr1 = tw1;
				tw2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4500, "as_lower", tr1))(tr1)).it_c4);
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 't';
				tb1 = (EIF_BOOLEAN)(tw2 == tw1);
			}
			if (tb1) {
				RTHOOK(20);
				RTDBGAL(1, 0x04000000, 1, 0); /* loc1 */
				loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				RTHOOK(21);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(4766, "wipe_out", arg1))(arg1);
				RTHOOK(22);
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '>';
				uw1 = tw1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4827, "append_character", arg1))(arg1, uw1x);
			}
			break;
	}
	RTHOOK(23);
	if ((EIF_BOOLEAN) !loc1) {
		RTHOOK(24);
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '&';
		uw1 = tw1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4819, "prepend_character", arg1))(arg1, uw1x);
		RTHOOK(25);
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) ';';
		uw1 = tw1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4827, "append_character", arg1))(arg1, uw1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(26);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef ui4_1
#undef uw1
#undef arg1
}

/* {HTML_ENCODER}.valid_entity_character */
EIF_TYPED_VALUE F216_2726 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "valid_entity_character";
	RTEX;
	EIF_CHARACTER_8 loc1 = (EIF_CHARACTER_8) 0;
#define arg1 arg1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_UINT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_CHAR8, &loc1);
	
	RTEAA(l_feature_name, 215, Current, 1, 1, 2697);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(215, Current, 2697);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLN(eif_new_type(350, 0x00).id);
	*(EIF_NATURAL_32 *)tr1 = arg1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5674, "is_valid_character_8_code", tr1))(tr1)).it_b);
	if (tb1) {
		RTHOOK(2);
		RTDBGAL(1, 0x08000000, 1, 0); /* loc1 */
		tc1 = (EIF_CHARACTER_8) arg1;
		loc1 = (EIF_CHARACTER_8) tc1;
		RTHOOK(3);
		switch (loc1) {
			case (EIF_CHARACTER_8) 'a':
			case (EIF_CHARACTER_8) 'b':
			case (EIF_CHARACTER_8) 'c':
			case (EIF_CHARACTER_8) 'd':
			case (EIF_CHARACTER_8) 'e':
			case (EIF_CHARACTER_8) 'f':
			case (EIF_CHARACTER_8) 'g':
			case (EIF_CHARACTER_8) 'h':
			case (EIF_CHARACTER_8) 'i':
			case (EIF_CHARACTER_8) 'j':
			case (EIF_CHARACTER_8) 'k':
			case (EIF_CHARACTER_8) 'l':
			case (EIF_CHARACTER_8) 'm':
			case (EIF_CHARACTER_8) 'n':
			case (EIF_CHARACTER_8) 'o':
			case (EIF_CHARACTER_8) 'p':
			case (EIF_CHARACTER_8) 'q':
			case (EIF_CHARACTER_8) 'r':
			case (EIF_CHARACTER_8) 's':
			case (EIF_CHARACTER_8) 't':
			case (EIF_CHARACTER_8) 'u':
			case (EIF_CHARACTER_8) 'v':
			case (EIF_CHARACTER_8) 'w':
			case (EIF_CHARACTER_8) 'x':
			case (EIF_CHARACTER_8) 'y':
			case (EIF_CHARACTER_8) 'z':
				RTHOOK(4);
				RTDBGAL(0, 0x04000000, 1,0); /* Result */
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				break;
			case (EIF_CHARACTER_8) 'A':
			case (EIF_CHARACTER_8) 'B':
			case (EIF_CHARACTER_8) 'C':
			case (EIF_CHARACTER_8) 'D':
			case (EIF_CHARACTER_8) 'E':
			case (EIF_CHARACTER_8) 'F':
			case (EIF_CHARACTER_8) 'G':
			case (EIF_CHARACTER_8) 'H':
			case (EIF_CHARACTER_8) 'I':
			case (EIF_CHARACTER_8) 'J':
			case (EIF_CHARACTER_8) 'K':
			case (EIF_CHARACTER_8) 'L':
			case (EIF_CHARACTER_8) 'M':
			case (EIF_CHARACTER_8) 'N':
			case (EIF_CHARACTER_8) 'O':
			case (EIF_CHARACTER_8) 'P':
			case (EIF_CHARACTER_8) 'Q':
			case (EIF_CHARACTER_8) 'R':
			case (EIF_CHARACTER_8) 'S':
			case (EIF_CHARACTER_8) 'T':
			case (EIF_CHARACTER_8) 'U':
			case (EIF_CHARACTER_8) 'V':
			case (EIF_CHARACTER_8) 'W':
			case (EIF_CHARACTER_8) 'X':
			case (EIF_CHARACTER_8) 'Y':
			case (EIF_CHARACTER_8) 'Z':
				RTHOOK(5);
				RTDBGAL(0, 0x04000000, 1,0); /* Result */
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				break;
			case (EIF_CHARACTER_8) '0':
			case (EIF_CHARACTER_8) '1':
			case (EIF_CHARACTER_8) '2':
			case (EIF_CHARACTER_8) '3':
			case (EIF_CHARACTER_8) '4':
			case (EIF_CHARACTER_8) '5':
			case (EIF_CHARACTER_8) '6':
			case (EIF_CHARACTER_8) '7':
			case (EIF_CHARACTER_8) '8':
			case (EIF_CHARACTER_8) '9':
				RTHOOK(6);
				RTDBGAL(0, 0x04000000, 1,0); /* Result */
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				break;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

/* {HTML_ENCODER}.is_hexa_digit */
EIF_TYPED_VALUE F216_2727 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_hexa_digit";
	RTEX;
#define arg1 arg1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_UINT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 215, Current, 0, 1, 2698);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(215, Current, 2698);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = '\0';
	tr1 = RTLN(eif_new_type(350, 0x00).id);
	*(EIF_NATURAL_32 *)tr1 = arg1;
	tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5674, "is_valid_character_8_code", tr1))(tr1)).it_b);
	if (tb2) {
		tc1 = (EIF_CHARACTER_8) arg1;
		tr1 = RTLN(eif_new_type(293, 0x00).id);
		*(EIF_CHARACTER_8 *)tr1 = tc1;
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4540, "is_hexa_digit", tr1))(tr1)).it_b);
		tb1 = tb2;
	}
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
#undef arg1
}

/* {HTML_ENCODER}.is_digit */
EIF_TYPED_VALUE F216_2728 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_digit";
	RTEX;
#define arg1 arg1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_UINT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 215, Current, 0, 1, 2688);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(215, Current, 2688);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = '\0';
	tr1 = RTLN(eif_new_type(350, 0x00).id);
	*(EIF_NATURAL_32 *)tr1 = arg1;
	tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5674, "is_valid_character_8_code", tr1))(tr1)).it_b);
	if (tb2) {
		tc1 = (EIF_CHARACTER_8) arg1;
		tb2 = EIF_TEST(isdigit(tc1));
		tb1 = tb2;
	}
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
#undef arg1
}

void EIF_Minit216 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
