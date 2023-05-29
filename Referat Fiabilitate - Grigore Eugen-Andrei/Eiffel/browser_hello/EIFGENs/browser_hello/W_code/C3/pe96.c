/*
 * Code for class PERCENT_ENCODER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F96_1457(EIF_REFERENCE);
extern EIF_TYPED_VALUE F96_1458(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F96_1459(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F96_1460(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F96_1461(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F96_1462(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F96_1463(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F96_1464(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F96_1465(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F96_1466(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F96_1467(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F96_1468(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F96_1469(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F96_1470(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F96_1471(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F96_1472(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F96_1473(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F96_1474(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F96_1475(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F96_1476(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F96_1477(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F96_1478(EIF_REFERENCE);
extern EIF_TYPED_VALUE F96_1479(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F96_1480(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F96_1481(EIF_REFERENCE);
extern void EIF_Minit96(void);

#ifdef __cplusplus
}
#endif

#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {PERCENT_ENCODER}.has_error */
EIF_TYPED_VALUE F96_1457 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(1346,Dtype(Current)));
	return r;
}


/* {PERCENT_ENCODER}.percent_encoded_string */
EIF_TYPED_VALUE F96_1458 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "percent_encoded_string";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,ur1);
	RTLR(4,ur2);
	RTLR(5,Current);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 95, Current, 0, 1, 1451);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(95, Current, 1451);
	RTCC(arg1, 95, l_feature_name, 1, eif_new_type(301, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF8000135, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(309, 0x01).id);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4678, "count", arg1))(arg1)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4639, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	ur1 = RTCCL(arg1);
	ur2 = RTCCL(Result);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1348, dtype))(Current, ur1x, ur2x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ur2
#undef ui4_1
#undef arg1
}

/* {PERCENT_ENCODER}.append_percent_encoded_string_to */
void F96_1459 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "append_percent_encoded_string_to";
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_UINT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	
	RTEAA(l_feature_name, 95, Current, 3, 2, 1452);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(95, Current, 1452);
	RTCC(arg1, 95, l_feature_name, 1, eif_new_type(301, 0x01), 0x01);
	RTCC(arg2, 95, l_feature_name, 2, eif_new_type(303, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 1346, 0x04000000, 1); /* has_error */
	*(EIF_BOOLEAN *)(Current + RTWA(1346, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(2);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4678, "count", arg1))(arg1)).it_i4);
	loc3 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN) (loc2 > loc3)) break;
		RTHOOK(5);
		RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
		ui4_1 = loc2;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4641, "code", arg1))(arg1, ui4_1x)).it_n4);
		loc1 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(6);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_NATURAL_32) ((EIF_INTEGER_32) 48L) <= loc1) && (EIF_BOOLEAN) (loc1 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 57L))) || (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_NATURAL_32) ((EIF_INTEGER_32) 65L) <= loc1) && (EIF_BOOLEAN) (loc1 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 90L)))) || (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_NATURAL_32) ((EIF_INTEGER_32) 97L) <= loc1) && (EIF_BOOLEAN) (loc1 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 122L))))) {
			RTHOOK(7);
			uu4_1 = loc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4738, "append_code", arg2))(arg2, uu4_1x);
		} else {
			RTHOOK(8);
			switch (loc1) {
				case 45U:
				case 46U:
				case 95U:
				case 126U:
					RTHOOK(9);
					uu4_1 = loc1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4738, "append_code", arg2))(arg2, uu4_1x);
					break;
				case 33U:
				case 36U:
				case 37U:
				case 38U:
				case 39U:
				case 40U:
				case 41U:
				case 42U:
				case 43U:
				case 44U:
				case 58U:
				case 59U:
				case 61U:
				case 64U:
					RTHOOK(10);
					uu4_1 = loc1;
					ur1 = RTCCL(arg2);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1351, dtype))(Current, uu4_1x, ur1x);
					break;
				default:
					RTHOOK(11);
					uu4_1 = loc1;
					ur1 = RTCCL(arg2);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1351, dtype))(Current, uu4_1x, ur1x);
					break;
			}
		}
		RTHOOK(12);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef ur1
#undef ui4_1
#undef uu4_1
#undef arg2
#undef arg1
}

/* {PERCENT_ENCODER}.partial_encoded_string */
EIF_TYPED_VALUE F96_1460 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "partial_encoded_string";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLR(4,ur1);
	RTLR(5,ur2);
	RTLR(6,ur3);
	RTLR(7,Current);
	RTLIU(8);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 95, Current, 0, 2, 1453);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(95, Current, 1453);
	RTCC(arg1, 95, l_feature_name, 1, eif_new_type(301, 0x01), 0x01);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,517,293,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg2, 95, l_feature_name, 2, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF8000135, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(309, 0x01).id);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4678, "count", arg1))(arg1)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4639, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	ur1 = RTCCL(arg1);
	ur2 = RTCCL(Result);
	ur3 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1350, dtype))(Current, ur1x, ur2x, ur3x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ur2
#undef ur3
#undef ui4_1
#undef arg2
#undef arg1
}

/* {PERCENT_ENCODER}.append_partial_percent_encoded_string_to */
void F96_1461 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "append_partial_percent_encoded_string_to";
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_CHARACTER_8 loc2 = (EIF_CHARACTER_8) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLR(5,loc5);
	RTLR(6,ur1);
	RTLR(7,loc6);
	RTLIU(8);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_UINT32, &loc1);
	RTLU(SK_CHAR8, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	
	RTEAA(l_feature_name, 95, Current, 6, 3, 1454);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(95, Current, 1454);
	RTCC(arg1, 95, l_feature_name, 1, eif_new_type(301, 0x01), 0x01);
	RTCC(arg2, 95, l_feature_name, 2, eif_new_type(303, 0x01), 0x01);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,517,293,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg3, 95, l_feature_name, 3, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 1346, 0x04000000, 1); /* has_error */
	*(EIF_BOOLEAN *)(Current + RTWA(1346, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(2);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4678, "count", arg1))(arg1)).it_i4);
	loc4 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN) (loc3 > loc4)) break;
		RTHOOK(5);
		RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
		ui4_1 = loc3;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4641, "code", arg1))(arg1, ui4_1x)).it_n4);
		loc1 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(6);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_NATURAL_32) ((EIF_INTEGER_32) 48L) <= loc1) && (EIF_BOOLEAN) (loc1 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 57L))) || (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_NATURAL_32) ((EIF_INTEGER_32) 65L) <= loc1) && (EIF_BOOLEAN) (loc1 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 90L)))) || (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_NATURAL_32) ((EIF_INTEGER_32) 97L) <= loc1) && (EIF_BOOLEAN) (loc1 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 122L))))) {
			RTHOOK(7);
			uu4_1 = loc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4738, "append_code", arg2))(arg2, uu4_1x);
		} else {
			RTHOOK(8);
			switch (loc1) {
				case 45U:
				case 46U:
				case 95U:
				case 126U:
					RTHOOK(9);
					uu4_1 = loc1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4738, "append_code", arg2))(arg2, uu4_1x);
					break;
				case 33U:
				case 36U:
				case 37U:
				case 38U:
				case 39U:
				case 40U:
				case 41U:
				case 42U:
				case 43U:
				case 44U:
				case 58U:
				case 59U:
				case 61U:
				case 64U:
					if (RTAL & CK_CHECK) {
						RTHOOK(10);
						RTCT("c.is_valid_character_8_code", EX_CHECK);
						tr1 = RTLN(eif_new_type(350, 0x00).id);
						*(EIF_NATURAL_32 *)tr1 = loc1;
						tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5674, "is_valid_character_8_code", tr1))(tr1)).it_b);
						if (tb1) {
							RTCK;
						} else {
							RTCF;
						}
					}
					RTHOOK(11);
					RTDBGAL(2, 0x08000000, 1, 0); /* loc2 */
					tc1 = (EIF_CHARACTER_8) loc1;
					loc2 = (EIF_CHARACTER_8) tc1;
					RTHOOK(12);
					RTNHOOK(12,1);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3485, "new_cursor", arg3))(arg3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					loc5 = (EIF_REFERENCE) RTCCL(tr1);
					tb1 = EIF_FALSE;
					for (;;) {
						if (tb1) break;
						tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3299, "after", loc5))(loc5)).it_b);
						if (tb2) break;
						RTHOOK(13);
						tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3298, "item", loc5))(loc5)).it_c1);
						tb1 = (EIF_BOOLEAN)(tc1 == loc2);
						RTNHOOK(13,1);
						(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3300, "forth", loc5))(loc5);
					}
					if (tb1) {
						RTHOOK(14);
						uu4_1 = loc1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4738, "append_code", arg2))(arg2, uu4_1x);
					} else {
						RTHOOK(15);
						uu4_1 = loc1;
						ur1 = RTCCL(arg2);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1351, dtype))(Current, uu4_1x, ur1x);
					}
					break;
				default:
					RTHOOK(16);
					tr1 = RTLN(eif_new_type(350, 0x00).id);
					*(EIF_NATURAL_32 *)tr1 = loc1;
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5674, "is_valid_character_8_code", tr1))(tr1)).it_b);
					if (tb1) {
						RTHOOK(17);
						RTDBGAL(2, 0x08000000, 1, 0); /* loc2 */
						tc1 = (EIF_CHARACTER_8) loc1;
						loc2 = (EIF_CHARACTER_8) tc1;
						RTHOOK(18);
						RTNHOOK(18,1);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3485, "new_cursor", arg3))(arg3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						loc6 = (EIF_REFERENCE) RTCCL(tr1);
						tb1 = EIF_FALSE;
						for (;;) {
							if (tb1) break;
							tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3299, "after", loc6))(loc6)).it_b);
							if (tb2) break;
							RTHOOK(19);
							tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3298, "item", loc6))(loc6)).it_c1);
							tb1 = (EIF_BOOLEAN)(tc1 == loc2);
							RTNHOOK(19,1);
							(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3300, "forth", loc6))(loc6);
						}
						if (tb1) {
							RTHOOK(20);
							uu4_1 = loc1;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4738, "append_code", arg2))(arg2, uu4_1x);
						} else {
							RTHOOK(21);
							uu4_1 = loc1;
							ur1 = RTCCL(arg2);
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1351, dtype))(Current, uu4_1x, ur1x);
						}
					} else {
						RTHOOK(22);
						uu4_1 = loc1;
						ur1 = RTCCL(arg2);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1351, dtype))(Current, uu4_1x, ur1x);
					}
					break;
			}
		}
		RTHOOK(23);
		RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
		loc3++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(24);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(11);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef uu4_1
#undef arg3
#undef arg2
#undef arg1
}

/* {PERCENT_ENCODER}.append_percent_encoded_character_code_to */
void F96_1462 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "append_percent_encoded_character_code_to";
	RTEX;
#define arg1 arg1x.it_n4
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 95, Current, 0, 2, 1455);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(95, Current, 1455);
	RTCC(arg2, 95, l_feature_name, 2, eif_new_type(303, 0x01), 0x01);
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4678, "count", arg2))(arg2)).it_i4);
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	if ((EIF_BOOLEAN) (arg1 > (EIF_NATURAL_32) ((EIF_INTEGER_32) 255L))) {
		RTHOOK(2);
		uu4_1 = arg1;
		ur1 = RTCCL(arg2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1353, dtype))(Current, uu4_1x, ur1x);
	} else {
		RTHOOK(3);
		if ((EIF_BOOLEAN) (arg1 > (EIF_NATURAL_32) ((EIF_INTEGER_32) 127L))) {
			RTHOOK(4);
			uu4_1 = arg1;
			ur1 = RTCCL(arg2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1353, dtype))(Current, uu4_1x, ur1x);
		} else {
			RTHOOK(5);
			uu4_1 = arg1;
			ur1 = RTCCL(arg2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1352, dtype))(Current, uu4_1x, ur1x);
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("appended", EX_POST);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4678, "count", arg2))(arg2)).it_i4);
		RTCO(tr1);
		if ((EIF_BOOLEAN) (ti4_2 > ti4_1)) {
			RTCK;
		} else {
			RTCF;
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
#undef ur1
#undef uu4_1
#undef arg2
#undef arg1
}

/* {PERCENT_ENCODER}.append_percent_encoded_ascii_character_code_to */
void F96_1463 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "append_percent_encoded_ascii_character_code_to";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_n4
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(5);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLR(4,tr2);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 95, Current, 1, 2, 1456);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(95, Current, 1456);
	RTCC(arg2, 95, l_feature_name, 2, eif_new_type(303, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_extended_ascii", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 255L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4678, "count", arg2))(arg2)).it_i4);
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(2);
	if ((EIF_BOOLEAN) (arg1 > (EIF_NATURAL_32) ((EIF_INTEGER_32) 255L))) {
		RTHOOK(3);
		uu4_1 = arg1;
		ur1 = RTCCL(arg2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1353, dtype))(Current, uu4_1x, ur1x);
	} else {
		RTHOOK(4);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		ti4_2 = (EIF_INTEGER_32) arg1;
		loc1 = (EIF_INTEGER_32) ti4_2;
		RTHOOK(5);
		uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 37L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4738, "append_code", arg2))(arg2, uu4_1x);
		RTHOOK(6);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1367, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(6,1);
		ui4_1 = ((EIF_INTEGER_32) 4L);
		ti4_2 = eif_bit_shift_right(loc1,ui4_1);
		ui4_1 = ti4_2;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4063, "item", tr2))(tr2, ui4_1x)).it_n4);
		uu4_1 = tu4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4738, "append_code", arg2))(arg2, uu4_1x);
		RTHOOK(7);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1367, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(7,1);
		ui4_1 = ((EIF_INTEGER_32) 15L);
		ti4_2 = eif_bit_and(loc1,ui4_1);
		ui4_1 = ti4_2;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4063, "item", tr2))(tr2, ui4_1x)).it_n4);
		uu4_1 = tu4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4738, "append_code", arg2))(arg2, uu4_1x);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("appended", EX_POST);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4678, "count", arg2))(arg2)).it_i4);
		RTCO(tr1);
		if ((EIF_BOOLEAN) (ti4_2 > ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef uu4_1
#undef arg2
#undef arg1
}

/* {PERCENT_ENCODER}.append_percent_encoded_unicode_character_code_to */
void F96_1464 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "append_percent_encoded_unicode_character_code_to";
	RTEX;
#define arg1 arg1x.it_n4
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 95, Current, 0, 2, 1457);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(95, Current, 1457);
	RTCC(arg2, 95, l_feature_name, 2, eif_new_type(303, 0x01), 0x01);
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4678, "count", arg2))(arg2)).it_i4);
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	if ((EIF_BOOLEAN) (arg1 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 127L))) {
		RTHOOK(2);
		uu4_1 = arg1;
		ur1 = RTCCL(arg2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1352, dtype))(Current, uu4_1x, ur1x);
	} else {
		RTHOOK(3);
		if ((EIF_BOOLEAN) (arg1 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 2047L))) {
			RTHOOK(4);
			ui4_1 = ((EIF_INTEGER_32) 6L);
			tu4_1 = eif_bit_shift_right(arg1,ui4_1);
			uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 192L);
			tu4_2 = eif_bit_or(tu4_1,uu4_1);
			uu4_1 = tu4_2;
			ur1 = RTCCL(arg2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1352, dtype))(Current, uu4_1x, ur1x);
			RTHOOK(5);
			uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
			tu4_1 = eif_bit_and(arg1,uu4_1);
			uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
			tu4_2 = eif_bit_or(tu4_1,uu4_1);
			uu4_1 = tu4_2;
			ur1 = RTCCL(arg2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1352, dtype))(Current, uu4_1x, ur1x);
		} else {
			RTHOOK(6);
			if ((EIF_BOOLEAN) (arg1 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 65535L))) {
				RTHOOK(7);
				ui4_1 = ((EIF_INTEGER_32) 12L);
				tu4_1 = eif_bit_shift_right(arg1,ui4_1);
				uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 224L);
				tu4_2 = eif_bit_or(tu4_1,uu4_1);
				uu4_1 = tu4_2;
				ur1 = RTCCL(arg2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1352, dtype))(Current, uu4_1x, ur1x);
				RTHOOK(8);
				ui4_1 = ((EIF_INTEGER_32) 6L);
				tu4_1 = eif_bit_shift_right(arg1,ui4_1);
				uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
				tu4_2 = eif_bit_and(tu4_1,uu4_1);
				uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
				tu4_1 = eif_bit_or(tu4_2,uu4_1);
				uu4_1 = tu4_1;
				ur1 = RTCCL(arg2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1352, dtype))(Current, uu4_1x, ur1x);
				RTHOOK(9);
				uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
				tu4_1 = eif_bit_and(arg1,uu4_1);
				uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
				tu4_2 = eif_bit_or(tu4_1,uu4_1);
				uu4_1 = tu4_2;
				ur1 = RTCCL(arg2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1352, dtype))(Current, uu4_1x, ur1x);
			} else {
				RTHOOK(10);
				ui4_1 = ((EIF_INTEGER_32) 18L);
				tu4_1 = eif_bit_shift_right(arg1,ui4_1);
				uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 240L);
				tu4_2 = eif_bit_or(tu4_1,uu4_1);
				uu4_1 = tu4_2;
				ur1 = RTCCL(arg2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1352, dtype))(Current, uu4_1x, ur1x);
				RTHOOK(11);
				ui4_1 = ((EIF_INTEGER_32) 12L);
				tu4_1 = eif_bit_shift_right(arg1,ui4_1);
				uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
				tu4_2 = eif_bit_and(tu4_1,uu4_1);
				uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
				tu4_1 = eif_bit_or(tu4_2,uu4_1);
				uu4_1 = tu4_1;
				ur1 = RTCCL(arg2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1352, dtype))(Current, uu4_1x, ur1x);
				RTHOOK(12);
				ui4_1 = ((EIF_INTEGER_32) 6L);
				tu4_1 = eif_bit_shift_right(arg1,ui4_1);
				uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
				tu4_2 = eif_bit_and(tu4_1,uu4_1);
				uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
				tu4_1 = eif_bit_or(tu4_2,uu4_1);
				uu4_1 = tu4_1;
				ur1 = RTCCL(arg2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1352, dtype))(Current, uu4_1x, ur1x);
				RTHOOK(13);
				uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
				tu4_1 = eif_bit_and(arg1,uu4_1);
				uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
				tu4_2 = eif_bit_or(tu4_1,uu4_1);
				uu4_1 = tu4_2;
				ur1 = RTCCL(arg2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1352, dtype))(Current, uu4_1x, ur1x);
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(14);
		RTCT("appended", EX_POST);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4678, "count", arg2))(arg2)).it_i4);
		RTCO(tr1);
		if ((EIF_BOOLEAN) (ti4_2 > ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef ur1
#undef ui4_1
#undef uu4_1
#undef arg2
#undef arg1
}

/* {PERCENT_ENCODER}.percent_decoded_string */
EIF_TYPED_VALUE F96_1465 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "percent_decoded_string";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,ur1);
	RTLR(4,ur2);
	RTLR(5,Current);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 95, Current, 0, 1, 1458);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(95, Current, 1458);
	RTCC(arg1, 95, l_feature_name, 1, eif_new_type(301, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF8000132, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(306, 0x01).id);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4678, "count", arg1))(arg1)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4639, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	ur1 = RTCCL(arg1);
	ur2 = RTCCL(Result);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1356, dtype))(Current, ur1x, ur2x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ur2
#undef ui4_1
#undef arg1
}

/* {PERCENT_ENCODER}.percent_decoded_utf_8_string */
EIF_TYPED_VALUE F96_1466 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "percent_decoded_utf_8_string";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,ur1);
	RTLR(4,ur2);
	RTLR(5,Current);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 95, Current, 0, 1, 1459);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(95, Current, 1459);
	RTCC(arg1, 95, l_feature_name, 1, eif_new_type(301, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF8000135, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(309, 0x01).id);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4678, "count", arg1))(arg1)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4639, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	ur1 = RTCCL(arg1);
	ur2 = RTCCL(Result);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1356, dtype))(Current, ur1x, ur2x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ur2
#undef ui4_1
#undef arg1
}

/* {PERCENT_ENCODER}.append_percent_decoded_string_to */
void F96_1467 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "append_percent_decoded_string_to";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc5 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,loc6);
	RTLR(4,loc4);
	RTLR(5,tr1);
	RTLR(6,ur1);
	RTLR(7,ur2);
	RTLIU(8);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_UINT32, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_BOOL, &loc5);
	RTLU(SK_REF, &loc6);
	
	RTEAA(l_feature_name, 95, Current, 6, 2, 1460);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(95, Current, 1460);
	RTCC(arg1, 95, l_feature_name, 1, eif_new_type(301, 0x01), 0x01);
	RTCC(arg2, 95, l_feature_name, 2, eif_new_type(303, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 1346, 0x04000000, 1); /* has_error */
	*(EIF_BOOLEAN *)(Current + RTWA(1346, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(2);
	RTDBGAL(5, 0x04000000, 1, 0); /* loc5 */
	loc6 = RTCCL(arg2);
	loc6 = RTRV(eif_new_type(306, 0x01),loc6);
	loc5 = (EIF_BOOLEAN) EIF_TEST(loc6);
	RTHOOK(3);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(4);
	RTDBGAL(4, 0xF80002A1, 0, 0); /* loc4 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,673,338,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = loc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(1201, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(4,1);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4678, "count", arg1))(arg1)).it_i4);
	loc2 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(6);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(7);
		RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
		ui4_1 = loc1;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4641, "code", arg1))(arg1, ui4_1x)).it_n4);
		loc3 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(8);
		switch (loc3) {
			case 43U:
				RTHOOK(9);
				uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 32L);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4738, "append_code", arg2))(arg2, uu4_1x);
				break;
			case 37U:
				RTHOOK(10);
				if ((EIF_BOOLEAN)(loc1 == loc2)) {
					RTHOOK(11);
					RTDBGAA(Current, dtype, 1346, 0x04000000, 1); /* has_error */
					*(EIF_BOOLEAN *)(Current + RTWA(1346, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					RTHOOK(12);
					uu4_1 = loc3;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4738, "append_code", arg2))(arg2, uu4_1x);
				} else {
					RTHOOK(13);
					if (loc5) {
						RTHOOK(14);
						ui4_1 = loc1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1202, "replace", loc4))(loc4, ui4_1x);
						RTHOOK(15);
						RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
						ur1 = RTCCL(arg1);
						ur2 = RTCCL(loc4);
						tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1358, dtype))(Current, ur1x, ur2x)).it_n4);
						loc3 = (EIF_NATURAL_32) tu4_1;
						RTHOOK(16);
						uu4_1 = loc3;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4738, "append_code", arg2))(arg2, uu4_1x);
						RTHOOK(17);
						RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1200, "item", loc4))(loc4)).it_i4);
						loc1 = (EIF_INTEGER_32) ti4_1;
					} else {
						RTHOOK(18);
						ui4_1 = loc1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1202, "replace", loc4))(loc4, ui4_1x);
						RTHOOK(19);
						RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
						ur1 = RTCCL(arg1);
						ur2 = RTCCL(loc4);
						tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1357, dtype))(Current, ur1x, ur2x)).it_n4);
						loc3 = (EIF_NATURAL_32) tu4_1;
						RTHOOK(20);
						uu4_1 = loc3;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4738, "append_code", arg2))(arg2, uu4_1x);
						RTHOOK(21);
						RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1200, "item", loc4))(loc4)).it_i4);
						loc1 = (EIF_INTEGER_32) ti4_1;
					}
				}
				break;
			default:
				RTHOOK(22);
				if ((EIF_BOOLEAN) (loc3 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 127L))) {
					RTHOOK(23);
					uu4_1 = loc3;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4738, "append_code", arg2))(arg2, uu4_1x);
				} else {
					RTHOOK(24);
					if (loc5) {
						RTHOOK(25);
						uu4_1 = loc3;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4738, "append_code", arg2))(arg2, uu4_1x);
					} else {
						RTHOOK(26);
						uu4_1 = loc3;
						ur1 = RTCCL(arg2);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1351, dtype))(Current, uu4_1x, ur1x);
					}
				}
				break;
		}
		RTHOOK(27);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(28);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(10);
	RTEE;
#undef ur1
#undef ur2
#undef ui4_1
#undef uu4_1
#undef arg2
#undef arg1
}

/* {PERCENT_ENCODER}.next_percent_decoded_character_code */
EIF_TYPED_VALUE F96_1468 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "next_percent_decoded_character_code";
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_NATURAL_32 loc5 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc6 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc8 = (EIF_BOOLEAN) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,Current);
	RTLIU(5);
	RTLU (SK_UINT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_UINT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_BOOL, &loc4);
	RTLU(SK_UINT32, &loc5);
	RTLU(SK_UINT32, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_BOOL, &loc8);
	
	RTEAA(l_feature_name, 95, Current, 8, 2, 1461);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(95, Current, 1461);
	RTCC(arg1, 95, l_feature_name, 1, eif_new_type(301, 0x01), 0x01);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,673,338,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg2, 95, l_feature_name, 2, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_start", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1200, "item", arg2))(arg2)).it_i4);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4678, "count", arg1))(arg1)).it_i4);
		RTTE((EIF_BOOLEAN) (ti4_1 <= ti4_2), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_percent_char", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1200, "item", arg2))(arg2)).it_i4);
		ui4_1 = ti4_1;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4641, "code", arg1))(arg1, ui4_1x)).it_n4);
		RTTE((EIF_BOOLEAN)(tu4_1 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 37L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1200, "item", arg2))(arg2)).it_i4);
	loc7 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
	ui4_1 = (EIF_INTEGER_32) (loc7 + ((EIF_INTEGER_32) 1L));
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4641, "code", arg1))(arg1, ui4_1x)).it_n4);
	loc1 = (EIF_NATURAL_32) tu4_1;
	RTHOOK(5);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 85L)) || (EIF_BOOLEAN)(loc1 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 117L)))) {
		RTHOOK(6);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc7 + ((EIF_INTEGER_32) 2L));
		RTHOOK(7);
		RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4678, "count", arg1))(arg1)).it_i4);
		loc3 = (EIF_INTEGER_32) ti4_1;
		for (;;) {
			RTHOOK(8);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 > loc3) || loc4)) break;
			RTHOOK(9);
			RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
			ui4_1 = loc2;
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4641, "code", arg1))(arg1, ui4_1x)).it_n4);
			loc1 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(10);
			RTDBGAL(8, 0x04000000, 1, 0); /* loc8 */
			loc8 = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_NATURAL_32) ((EIF_INTEGER_32) 48L) <= loc1) && (EIF_BOOLEAN) (loc1 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 57L)));
			RTHOOK(11);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc8 || (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_NATURAL_32) ((EIF_INTEGER_32) 97L) <= loc1) && (EIF_BOOLEAN) (loc1 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 102L)))) || (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_NATURAL_32) ((EIF_INTEGER_32) 65L) <= loc1) && (EIF_BOOLEAN) (loc1 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 70L))))) {
				RTHOOK(12);
				RTDBGAL(6, 0x38000000, 1, 0); /* loc6 */
				loc6 *= (EIF_NATURAL_32) ((EIF_INTEGER_32) 16L);
				RTHOOK(13);
				if (loc8) {
					RTHOOK(14);
					RTDBGAL(6, 0x38000000, 1, 0); /* loc6 */
					loc6 += (EIF_NATURAL_32) (loc1 - (EIF_NATURAL_32) ((EIF_INTEGER_32) 48L));
				} else {
					RTHOOK(15);
					if ((EIF_BOOLEAN) (loc1 > (EIF_NATURAL_32) ((EIF_INTEGER_32) 70L))) {
						RTHOOK(16);
						RTDBGAL(6, 0x38000000, 1, 0); /* loc6 */
						loc6 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) (loc6 + (EIF_NATURAL_32) (loc1 - (EIF_NATURAL_32) ((EIF_INTEGER_32) 97L))) + (EIF_NATURAL_32) ((EIF_INTEGER_32) 10L));
					} else {
						RTHOOK(17);
						RTDBGAL(6, 0x38000000, 1, 0); /* loc6 */
						loc6 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) (loc6 + (EIF_NATURAL_32) (loc1 - (EIF_NATURAL_32) ((EIF_INTEGER_32) 65L))) + (EIF_NATURAL_32) ((EIF_INTEGER_32) 10L));
					}
				}
				RTHOOK(18);
				RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
				loc2++;
			} else {
				RTHOOK(19);
				RTDBGAL(4, 0x04000000, 1, 0); /* loc4 */
				loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				RTHOOK(20);
				RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
				loc2--;
			}
		}
		RTHOOK(21);
		ui4_1 = loc2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1202, "replace", arg2))(arg2, ui4_1x);
		RTHOOK(22);
		RTDBGAL(0, 0x38000000, 1,0); /* Result */
		Result = (EIF_NATURAL_32) loc6;
	} else {
		RTHOOK(23);
		RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
		ui4_1 = (EIF_INTEGER_32) (loc7 + ((EIF_INTEGER_32) 1L));
		ui4_2 = (EIF_INTEGER_32) (loc7 + ((EIF_INTEGER_32) 2L));
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4719, "substring", arg1))(arg1, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1369, dtype))(Current, ur1x)).it_n4);
		loc5 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(24);
		RTDBGAL(0, 0x38000000, 1,0); /* Result */
		Result = (EIF_NATURAL_32) loc5;
		RTHOOK(25);
		ui4_1 = (EIF_INTEGER_32) (loc7 + ((EIF_INTEGER_32) 2L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1202, "replace", arg2))(arg2, ui4_1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(26);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(12);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg2
#undef arg1
}

/* {PERCENT_ENCODER}.next_percent_decoded_unicode_character_code */
EIF_TYPED_VALUE F96_1469 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "next_percent_decoded_unicode_character_code";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc4 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc5 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc6 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc7 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc8);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLR(5,ur1);
	RTLR(6,ur2);
	RTLIU(7);
	RTLU (SK_UINT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_UINT32, &loc3);
	RTLU(SK_UINT32, &loc4);
	RTLU(SK_UINT32, &loc5);
	RTLU(SK_UINT32, &loc6);
	RTLU(SK_UINT32, &loc7);
	RTLU(SK_REF, &loc8);
	
	RTEAA(l_feature_name, 95, Current, 8, 2, 1462);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(95, Current, 1462);
	RTCC(arg1, 95, l_feature_name, 1, eif_new_type(301, 0x01), 0x01);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,673,338,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg2, 95, l_feature_name, 2, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_start", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1200, "item", arg2))(arg2)).it_i4);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4678, "count", arg1))(arg1)).it_i4);
		RTTE((EIF_BOOLEAN) (ti4_1 <= ti4_2), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_percent_char", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1200, "item", arg2))(arg2)).it_i4);
		ui4_1 = ti4_1;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4641, "code", arg1))(arg1, ui4_1x)).it_n4);
		RTTE((EIF_BOOLEAN)(tu4_1 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 37L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(8, 0xF80002A1, 0, 0); /* loc8 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,673,338,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1200, "item", arg2))(arg2)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(1201, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(3,1);
	loc8 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
	ur1 = RTCCL(arg1);
	ur2 = RTCCL(loc8);
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1357, dtype))(Current, ur1x, ur2x)).it_n4);
	loc4 = (EIF_NATURAL_32) tu4_1;
	RTHOOK(5);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1200, "item", loc8))(loc8)).it_i4);
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(6);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4678, "count", arg1))(arg1)).it_i4);
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(7);
	RTDBGAL(0, 0x38000000, 1,0); /* Result */
	Result = (EIF_NATURAL_32) loc4;
	RTHOOK(8);
	ui4_1 = loc2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1202, "replace", arg2))(arg2, ui4_1x);
	RTHOOK(9);
	if ((EIF_BOOLEAN) (loc4 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 127L))) {
		RTHOOK(10);
		RTDBGAL(0, 0x38000000, 1,0); /* Result */
		Result = (EIF_NATURAL_32) loc4;
	} else {
		RTHOOK(11);
		if ((EIF_BOOLEAN) (loc4 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 223L))) {
			RTHOOK(12);
			if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 2L)) <= loc1)) {
				RTHOOK(13);
				RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
				ui4_1 = (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4641, "code", arg1))(arg1, ui4_1x)).it_n4);
				loc3 = (EIF_NATURAL_32) tu4_1;
				RTHOOK(14);
				if ((EIF_BOOLEAN)(loc3 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 37L))) {
					RTHOOK(15);
					ui4_1 = (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1202, "replace", loc8))(loc8, ui4_1x);
					RTHOOK(16);
					RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
					ur1 = RTCCL(arg1);
					ur2 = RTCCL(loc8);
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1357, dtype))(Current, ur1x, ur2x)).it_n4);
					loc5 = (EIF_NATURAL_32) tu4_1;
					RTHOOK(17);
					RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1200, "item", loc8))(loc8)).it_i4);
					loc2 = (EIF_INTEGER_32) ti4_1;
					RTHOOK(18);
					RTDBGAL(0, 0x38000000, 1,0); /* Result */
					uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 31L);
					tu4_1 = eif_bit_and(loc4,uu4_1);
					ui4_1 = ((EIF_INTEGER_32) 6L);
					tu4_2 = eif_bit_shift_left(tu4_1,ui4_1);
					uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
					tu4_1 = eif_bit_and(loc5,uu4_1);
					uu4_1 = tu4_1;
					tu4_3 = eif_bit_or(tu4_2,uu4_1);
					Result = (EIF_NATURAL_32) tu4_3;
					RTHOOK(19);
					ui4_1 = loc2;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1202, "replace", arg2))(arg2, ui4_1x);
				}
			}
		} else {
			RTHOOK(20);
			if ((EIF_BOOLEAN) (loc4 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 239L))) {
				RTHOOK(21);
				if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 2L)) <= loc1)) {
					RTHOOK(22);
					RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
					ui4_1 = (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4641, "code", arg1))(arg1, ui4_1x)).it_n4);
					loc3 = (EIF_NATURAL_32) tu4_1;
					RTHOOK(23);
					if ((EIF_BOOLEAN)(loc3 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 37L))) {
						RTHOOK(24);
						ui4_1 = (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1202, "replace", loc8))(loc8, ui4_1x);
						RTHOOK(25);
						RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
						ur1 = RTCCL(arg1);
						ur2 = RTCCL(loc8);
						tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1357, dtype))(Current, ur1x, ur2x)).it_n4);
						loc5 = (EIF_NATURAL_32) tu4_1;
						RTHOOK(26);
						RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1200, "item", loc8))(loc8)).it_i4);
						loc2 = (EIF_INTEGER_32) ti4_1;
						RTHOOK(27);
						if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 2L)) <= loc1)) {
							RTHOOK(28);
							RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
							ui4_1 = (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
							tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4641, "code", arg1))(arg1, ui4_1x)).it_n4);
							loc3 = (EIF_NATURAL_32) tu4_1;
							RTHOOK(29);
							if ((EIF_BOOLEAN)(loc3 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 37L))) {
								RTHOOK(30);
								ui4_1 = (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1202, "replace", loc8))(loc8, ui4_1x);
								RTHOOK(31);
								RTDBGAL(6, 0x38000000, 1, 0); /* loc6 */
								ur1 = RTCCL(arg1);
								ur2 = RTCCL(loc8);
								tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1357, dtype))(Current, ur1x, ur2x)).it_n4);
								loc6 = (EIF_NATURAL_32) tu4_1;
								RTHOOK(32);
								RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
								ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1200, "item", loc8))(loc8)).it_i4);
								loc2 = (EIF_INTEGER_32) ti4_1;
								RTHOOK(33);
								RTDBGAL(0, 0x38000000, 1,0); /* Result */
								uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 15L);
								tu4_1 = eif_bit_and(loc4,uu4_1);
								ui4_1 = ((EIF_INTEGER_32) 12L);
								tu4_2 = eif_bit_shift_left(tu4_1,ui4_1);
								uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
								tu4_1 = eif_bit_and(loc5,uu4_1);
								ui4_1 = ((EIF_INTEGER_32) 6L);
								tu4_3 = eif_bit_shift_left(tu4_1,ui4_1);
								uu4_1 = tu4_3;
								tu4_1 = eif_bit_or(tu4_2,uu4_1);
								uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
								tu4_2 = eif_bit_and(loc6,uu4_1);
								uu4_1 = tu4_2;
								tu4_3 = eif_bit_or(tu4_1,uu4_1);
								Result = (EIF_NATURAL_32) tu4_3;
								RTHOOK(34);
								ui4_1 = loc2;
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1202, "replace", arg2))(arg2, ui4_1x);
							}
						}
					}
				}
			} else {
				RTHOOK(35);
				if ((EIF_BOOLEAN) (loc4 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 247L))) {
					RTHOOK(36);
					if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 2L)) <= loc1)) {
						RTHOOK(37);
						RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
						ui4_1 = (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
						tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4641, "code", arg1))(arg1, ui4_1x)).it_n4);
						loc3 = (EIF_NATURAL_32) tu4_1;
						RTHOOK(38);
						if ((EIF_BOOLEAN)(loc3 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 37L))) {
							RTHOOK(39);
							ui4_1 = (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1202, "replace", loc8))(loc8, ui4_1x);
							RTHOOK(40);
							RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
							ur1 = RTCCL(arg1);
							ur2 = RTCCL(loc8);
							tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1357, dtype))(Current, ur1x, ur2x)).it_n4);
							loc5 = (EIF_NATURAL_32) tu4_1;
							RTHOOK(41);
							RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1200, "item", loc8))(loc8)).it_i4);
							loc2 = (EIF_INTEGER_32) ti4_1;
							RTHOOK(42);
							if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 2L)) <= loc1)) {
								RTHOOK(43);
								RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
								ui4_1 = (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
								tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4641, "code", arg1))(arg1, ui4_1x)).it_n4);
								loc3 = (EIF_NATURAL_32) tu4_1;
								RTHOOK(44);
								if ((EIF_BOOLEAN)(loc3 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 37L))) {
									RTHOOK(45);
									ui4_1 = (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
									(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1202, "replace", loc8))(loc8, ui4_1x);
									RTHOOK(46);
									RTDBGAL(6, 0x38000000, 1, 0); /* loc6 */
									ur1 = RTCCL(arg1);
									ur2 = RTCCL(loc8);
									tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1357, dtype))(Current, ur1x, ur2x)).it_n4);
									loc6 = (EIF_NATURAL_32) tu4_1;
									RTHOOK(47);
									RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
									ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1200, "item", loc8))(loc8)).it_i4);
									loc2 = (EIF_INTEGER_32) ti4_1;
									RTHOOK(48);
									if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 2L)) <= loc1)) {
										RTHOOK(49);
										RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
										ui4_1 = (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
										tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4641, "code", arg1))(arg1, ui4_1x)).it_n4);
										loc3 = (EIF_NATURAL_32) tu4_1;
										RTHOOK(50);
										if ((EIF_BOOLEAN)(loc3 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 37L))) {
											RTHOOK(51);
											ui4_1 = (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
											(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1202, "replace", loc8))(loc8, ui4_1x);
											RTHOOK(52);
											RTDBGAL(7, 0x38000000, 1, 0); /* loc7 */
											ur1 = RTCCL(arg1);
											ur2 = RTCCL(loc8);
											tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1357, dtype))(Current, ur1x, ur2x)).it_n4);
											loc7 = (EIF_NATURAL_32) tu4_1;
											RTHOOK(53);
											RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
											ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1200, "item", loc8))(loc8)).it_i4);
											loc2 = (EIF_INTEGER_32) ti4_1;
											RTHOOK(54);
											ui4_1 = loc2;
											(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1202, "replace", arg2))(arg2, ui4_1x);
											RTHOOK(55);
											RTDBGAL(0, 0x38000000, 1,0); /* Result */
											uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 7L);
											tu4_1 = eif_bit_and(loc4,uu4_1);
											ui4_1 = ((EIF_INTEGER_32) 18L);
											tu4_2 = eif_bit_shift_left(tu4_1,ui4_1);
											uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
											tu4_1 = eif_bit_and(loc5,uu4_1);
											ui4_1 = ((EIF_INTEGER_32) 12L);
											tu4_3 = eif_bit_shift_left(tu4_1,ui4_1);
											uu4_1 = tu4_3;
											tu4_1 = eif_bit_or(tu4_2,uu4_1);
											uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
											tu4_2 = eif_bit_and(loc6,uu4_1);
											ui4_1 = ((EIF_INTEGER_32) 6L);
											tu4_3 = eif_bit_shift_left(tu4_2,ui4_1);
											uu4_1 = tu4_3;
											tu4_2 = eif_bit_or(tu4_1,uu4_1);
											uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
											tu4_1 = eif_bit_and(loc7,uu4_1);
											uu4_1 = tu4_1;
											tu4_3 = eif_bit_or(tu4_2,uu4_1);
											Result = (EIF_NATURAL_32) tu4_3;
										}
									}
								}
							}
						}
					}
				} else {
					RTHOOK(56);
					RTDBGAL(0, 0x38000000, 1,0); /* Result */
					Result = (EIF_NATURAL_32) loc4;
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(57);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(12);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
#undef ur1
#undef ur2
#undef ui4_1
#undef uu4_1
#undef arg2
#undef arg1
}

/* {PERCENT_ENCODER}.is_hexa_decimal_character */
EIF_TYPED_VALUE F96_1470 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_hexa_decimal_character";
	RTEX;
#define arg1 arg1x.it_c4
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c4 = * (EIF_CHARACTER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_CHAR32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 95, Current, 0, 1, 1463);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(95, Current, 1463);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = '\01';
	tb2 = '\01';
	tb3 = '\0';
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'a';
	if ((EIF_BOOLEAN) (tw1 <= arg1)) {
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'f';
		tb3 = (EIF_BOOLEAN) (arg1 <= tw1);
	}
	if (!tb3) {
		tb3 = '\0';
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'A';
		if ((EIF_BOOLEAN) (tw1 <= arg1)) {
			tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'F';
			tb3 = (EIF_BOOLEAN) (arg1 <= tw1);
		}
		tb2 = tb3;
	}
	if (!tb2) {
		tb2 = '\0';
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '0';
		if ((EIF_BOOLEAN) (tw1 <= arg1)) {
			tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '9';
			tb2 = (EIF_BOOLEAN) (arg1 <= tw1);
		}
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

/* {PERCENT_ENCODER}.is_alpha_or_digit_character */
EIF_TYPED_VALUE F96_1471 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_alpha_or_digit_character";
	RTEX;
#define arg1 arg1x.it_c4
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c4 = * (EIF_CHARACTER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_CHAR32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 95, Current, 0, 1, 1464);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(95, Current, 1464);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = '\01';
	tb2 = '\01';
	tb3 = '\0';
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'a';
	if ((EIF_BOOLEAN) (tw1 <= arg1)) {
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'z';
		tb3 = (EIF_BOOLEAN) (arg1 <= tw1);
	}
	if (!tb3) {
		tb3 = '\0';
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'A';
		if ((EIF_BOOLEAN) (tw1 <= arg1)) {
			tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'Z';
			tb3 = (EIF_BOOLEAN) (arg1 <= tw1);
		}
		tb2 = tb3;
	}
	if (!tb2) {
		tb2 = '\0';
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '0';
		if ((EIF_BOOLEAN) (tw1 <= arg1)) {
			tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '9';
			tb2 = (EIF_BOOLEAN) (arg1 <= tw1);
		}
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

/* {PERCENT_ENCODER}.is_alpha_character */
EIF_TYPED_VALUE F96_1472 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_alpha_character";
	RTEX;
#define arg1 arg1x.it_c4
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c4 = * (EIF_CHARACTER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_CHAR32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 95, Current, 0, 1, 1465);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(95, Current, 1465);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = '\01';
	tb2 = '\0';
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'a';
	if ((EIF_BOOLEAN) (tw1 <= arg1)) {
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'z';
		tb2 = (EIF_BOOLEAN) (arg1 <= tw1);
	}
	if (!tb2) {
		tb2 = '\0';
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'A';
		if ((EIF_BOOLEAN) (tw1 <= arg1)) {
			tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'Z';
			tb2 = (EIF_BOOLEAN) (arg1 <= tw1);
		}
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

/* {PERCENT_ENCODER}.is_digit_character */
EIF_TYPED_VALUE F96_1473 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_digit_character";
	RTEX;
#define arg1 arg1x.it_c4
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c4 = * (EIF_CHARACTER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_CHAR32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 95, Current, 0, 1, 1466);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(95, Current, 1466);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = '\0';
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '0';
	if ((EIF_BOOLEAN) (tw1 <= arg1)) {
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '9';
		tb1 = (EIF_BOOLEAN) (arg1 <= tw1);
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

/* {PERCENT_ENCODER}.is_unreserved_character */
EIF_TYPED_VALUE F96_1474 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_unreserved_character";
	RTEX;
#define arg1 arg1x.it_c4
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c4 = * (EIF_CHARACTER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_CHAR32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 95, Current, 0, 1, 1467);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(95, Current, 1467);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\01';
	tb2 = '\01';
	tb3 = '\0';
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'a';
	if ((EIF_BOOLEAN) (tw1 <= arg1)) {
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'z';
		tb3 = (EIF_BOOLEAN) (arg1 <= tw1);
	}
	if (!tb3) {
		tb3 = '\0';
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'A';
		if ((EIF_BOOLEAN) (tw1 <= arg1)) {
			tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'Z';
			tb3 = (EIF_BOOLEAN) (arg1 <= tw1);
		}
		tb2 = tb3;
	}
	if (!tb2) {
		tb2 = '\0';
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '0';
		if ((EIF_BOOLEAN) (tw1 <= arg1)) {
			tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '9';
			tb2 = (EIF_BOOLEAN) (arg1 <= tw1);
		}
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(2);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		RTHOOK(3);
		switch (arg1) {
			case (EIF_CHARACTER_8) '-':
			case (EIF_CHARACTER_8) '.':
			case (EIF_CHARACTER_8) '_':
			case (EIF_CHARACTER_8) '~':
				RTHOOK(4);
				RTDBGAL(0, 0x04000000, 1,0); /* Result */
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				break;
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
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

/* {PERCENT_ENCODER}.is_reserved_character */
EIF_TYPED_VALUE F96_1475 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_reserved_character";
	RTEX;
#define arg1 arg1x.it_c4
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c4 = * (EIF_CHARACTER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_CHAR32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 95, Current, 0, 1, 1468);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(95, Current, 1468);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = '\01';
	uw1 = arg1;
	tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1365, dtype))(Current, uw1x)).it_b);
	if (!tb2) {
		uw1 = arg1;
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1366, dtype))(Current, uw1x)).it_b);
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
#undef uw1
#undef arg1
}

/* {PERCENT_ENCODER}.is_gen_delims_character */
EIF_TYPED_VALUE F96_1476 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_gen_delims_character";
	RTEX;
#define arg1 arg1x.it_c4
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c4 = * (EIF_CHARACTER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_CHAR32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 95, Current, 0, 1, 1469);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(95, Current, 1469);
	RTIV(Current, RTAL);
	RTHOOK(1);
	switch (arg1) {
		case (EIF_CHARACTER_8) '#':
		case (EIF_CHARACTER_8) '/':
		case (EIF_CHARACTER_8) ':':
		case (EIF_CHARACTER_8) '\?':
		case (EIF_CHARACTER_8) '@':
		case (EIF_CHARACTER_8) '[':
		case (EIF_CHARACTER_8) ']':
			RTHOOK(2);
			RTDBGAL(0, 0x04000000, 1,0); /* Result */
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

/* {PERCENT_ENCODER}.is_sub_delims_character */
EIF_TYPED_VALUE F96_1477 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_sub_delims_character";
	RTEX;
#define arg1 arg1x.it_c4
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c4 = * (EIF_CHARACTER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_CHAR32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 95, Current, 0, 1, 1470);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(95, Current, 1470);
	RTIV(Current, RTAL);
	RTHOOK(1);
	switch (arg1) {
		case (EIF_CHARACTER_8) '!':
		case (EIF_CHARACTER_8) '$':
		case (EIF_CHARACTER_8) '&':
		case (EIF_CHARACTER_8) '\'':
		case (EIF_CHARACTER_8) '(':
		case (EIF_CHARACTER_8) ')':
		case (EIF_CHARACTER_8) '*':
		case (EIF_CHARACTER_8) '+':
		case (EIF_CHARACTER_8) ',':
		case (EIF_CHARACTER_8) ';':
		case (EIF_CHARACTER_8) '=':
			RTHOOK(2);
			RTDBGAL(0, 0x04000000, 1,0); /* Result */
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

/* {PERCENT_ENCODER}.hex_digit */
RTOID (F96_1478)
EIF_TYPED_VALUE F96_1478 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "hex_digit";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F96_1478);
	dtype = Dtype(Current);

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 95, Current, 0, 0, 1471);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(95, Current, 1471);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(0, 0xF8000302, 0,0); /* Result */
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	ui4_1 = ((EIF_INTEGER_32) 16L);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,770,350,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		if (ui4_1< 0) {
			eraise ("non_negative_argument", EN_RT_CHECK);
		}
		tr1 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_NATURAL_32), EIF_TRUE);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5224, Dtype(tr1)))(tr1, uu4_1x, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	uu4_1 = ((EIF_NATURAL_32) 48U);
	ui4_1 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5234, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(3);
	uu4_1 = ((EIF_NATURAL_32) 49U);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5234, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(4);
	uu4_1 = ((EIF_NATURAL_32) 50U);
	ui4_1 = ((EIF_INTEGER_32) 2L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5234, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(5);
	uu4_1 = ((EIF_NATURAL_32) 51U);
	ui4_1 = ((EIF_INTEGER_32) 3L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5234, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(6);
	uu4_1 = ((EIF_NATURAL_32) 52U);
	ui4_1 = ((EIF_INTEGER_32) 4L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5234, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(7);
	uu4_1 = ((EIF_NATURAL_32) 53U);
	ui4_1 = ((EIF_INTEGER_32) 5L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5234, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(8);
	uu4_1 = ((EIF_NATURAL_32) 54U);
	ui4_1 = ((EIF_INTEGER_32) 6L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5234, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(9);
	uu4_1 = ((EIF_NATURAL_32) 55U);
	ui4_1 = ((EIF_INTEGER_32) 7L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5234, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(10);
	uu4_1 = ((EIF_NATURAL_32) 56U);
	ui4_1 = ((EIF_INTEGER_32) 8L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5234, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(11);
	uu4_1 = ((EIF_NATURAL_32) 57U);
	ui4_1 = ((EIF_INTEGER_32) 9L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5234, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(12);
	uu4_1 = ((EIF_NATURAL_32) 65U);
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5234, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(13);
	uu4_1 = ((EIF_NATURAL_32) 66U);
	ui4_1 = ((EIF_INTEGER_32) 11L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5234, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(14);
	uu4_1 = ((EIF_NATURAL_32) 67U);
	ui4_1 = ((EIF_INTEGER_32) 12L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5234, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(15);
	uu4_1 = ((EIF_NATURAL_32) 68U);
	ui4_1 = ((EIF_INTEGER_32) 13L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5234, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(16);
	uu4_1 = ((EIF_NATURAL_32) 69U);
	ui4_1 = ((EIF_INTEGER_32) 14L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5234, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(17);
	uu4_1 = ((EIF_NATURAL_32) 70U);
	ui4_1 = ((EIF_INTEGER_32) 15L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5234, "put", Result))(Result, uu4_1x, ui4_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(18);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui4_1
#undef uu4_1
#undef Result
}

/* {PERCENT_ENCODER}.is_hexa_decimal */
EIF_TYPED_VALUE F96_1479 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_hexa_decimal";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 95, Current, 1, 1, 1472);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(95, Current, 1472);
	RTCC(arg1, 95, l_feature_name, 1, eif_new_type(301, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF800007A, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1370, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	ur1 = RTCCL(arg1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1630, 119))(Current)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1661, "parse_string_with_type", loc1))(loc1, ur1x, ui4_1x);
	RTHOOK(3);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1667, "is_integral_integer", loc1))(loc1)).it_b);
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef arg1
}

/* {PERCENT_ENCODER}.hexadecimal_string_to_natural_32 */
EIF_TYPED_VALUE F96_1480 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "hexadecimal_string_to_natural_32";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,tr1);
	RTLIU(5);
	RTLU (SK_UINT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 95, Current, 1, 1, 1473);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(95, Current, 1473);
	RTCC(arg1, 95, l_feature_name, 1, eif_new_type(301, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_hexa", EX_PRE);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1368, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(1, 0xF800007A, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1370, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	ur1 = RTCCL(arg1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1620, 119))(Current)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1661, "parse_string_with_type", loc1))(loc1, ur1x, ui4_1x);
	RTHOOK(4);
	RTDBGAL(0, 0x38000000, 1,0); /* Result */
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1675, "parsed_natural_32", loc1))(loc1)).it_n4);
	Result = (EIF_NATURAL_32) tu4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef arg1
}

/* {PERCENT_ENCODER}.ctoi_convertor */
RTOID (F96_1481)
EIF_TYPED_VALUE F96_1481 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "ctoi_convertor";
	RTEX;
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F96_1481);
	dtype = Dtype(Current);

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 95, Current, 0, 0, 1474);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(95, Current, 1474);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(0, 0xF800007A, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(122, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(1665, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	ub1 = (EIF_BOOLEAN) 0;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1658, "set_leading_separators_acceptable", Result))(Result, ub1x);
	RTHOOK(3);
	ub1 = (EIF_BOOLEAN) 0;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1657, "set_trailing_separators_acceptable", Result))(Result, ub1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("ctoi_convertor_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ub1
#undef Result
}

void EIF_Minit96 (void)
{
	GTCX
	RTOTS (1478,F96_1478)
	RTOTS (1481,F96_1481)
}


#ifdef __cplusplus
}
#endif
