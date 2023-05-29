/*
 * Code for class HTTP_DATE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F318_6355(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F318_6356(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F318_6357(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F318_6358(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F318_6359(EIF_REFERENCE);
extern EIF_TYPED_VALUE F318_6360(EIF_REFERENCE);
extern EIF_TYPED_VALUE F318_6361(EIF_REFERENCE);
extern EIF_TYPED_VALUE F318_6362(EIF_REFERENCE);
extern EIF_TYPED_VALUE F318_6363(EIF_REFERENCE);
extern EIF_TYPED_VALUE F318_6364(EIF_REFERENCE);
extern EIF_TYPED_VALUE F318_6365(EIF_REFERENCE);
extern EIF_TYPED_VALUE F318_6366(EIF_REFERENCE);
extern EIF_TYPED_VALUE F318_6367(EIF_REFERENCE);
extern EIF_TYPED_VALUE F318_6368(EIF_REFERENCE);
extern EIF_TYPED_VALUE F318_6369(EIF_REFERENCE);
extern EIF_TYPED_VALUE F318_6370(EIF_REFERENCE);
extern EIF_TYPED_VALUE F318_6371(EIF_REFERENCE);
extern EIF_TYPED_VALUE F318_6372(EIF_REFERENCE);
extern void F318_6373(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F318_6374(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F318_6375(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F318_6376(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F318_6377(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F318_6378(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F318_6379(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F318_6380(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F318_6381(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F318_6382(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F318_6383(EIF_REFERENCE);
extern void F318_6384(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F318_6385(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F318_6386(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F318_6387(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F318_6388(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F318_6389(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F318_6390(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F318_6391(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F318_6392(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F318_6393(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit318(void);

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

/* {HTTP_DATE}.make_from_timestamp */
void F318_6355 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make_from_timestamp";
	RTEX;
#define arg1 arg1x.it_i8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i8 = * (EIF_INTEGER_64 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 317, Current, 0, 1, 9724);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(317, Current, 9724);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 5092, 0x24000000, 1); /* internal_timestamp */
	*(EIF_INTEGER_64 *)(Current + RTWA(5092, dtype)) = (EIF_INTEGER_64) arg1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 5088, 0xF800018A, 0); /* date_time */
	tr1 = RTLNSMART(RTWCT(5088, dtype, Dftype(Current)).id);
	ti4_1 = (EIF_INTEGER_32) arg1;
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(6389, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(2,1);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5088, dtype)) = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ui4_1
#undef arg1
}

/* {HTTP_DATE}.make_from_string */
void F318_6356 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make_from_string";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLR(5,loc2);
	RTLR(6,loc3);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 317, Current, 3, 1, 9725);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(317, Current, 9725);
	RTCC(arg1, 317, l_feature_name, 1, eif_new_type(301, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ur1 = RTCCL(arg1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5117, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr1);
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		RTDBGAA(Current, dtype, 5088, 0xF800018A, 0); /* date_time */
		tr1 = RTCCL(loc1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(5088, dtype)) = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(3);
		ur1 = RTCCL(arg1);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5118, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc2 = RTCCL(tr1);
		if (EIF_TEST(loc2)) {
			RTHOOK(4);
			RTDBGAA(Current, dtype, 5088, 0xF800018A, 0); /* date_time */
			tr1 = RTCCL(loc2);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + RTWA(5088, dtype)) = (EIF_REFERENCE) tr1;
		} else {
			RTHOOK(5);
			ur1 = RTCCL(arg1);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5119, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc3 = RTCCL(tr1);
			if (EIF_TEST(loc3)) {
				RTHOOK(6);
				RTDBGAA(Current, dtype, 5088, 0xF800018A, 0); /* date_time */
				tr1 = RTCCL(loc3);
				RTAR(Current, tr1);
				*(EIF_REFERENCE *)(Current + RTWA(5088, dtype)) = (EIF_REFERENCE) tr1;
			} else {
				RTHOOK(7);
				RTDBGAA(Current, dtype, 5087, 0x04000000, 1); /* has_error */
				*(EIF_BOOLEAN *)(Current + RTWA(5087, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				RTHOOK(8);
				RTDBGAA(Current, dtype, 5088, 0xF800018A, 0); /* date_time */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5091, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				tr1 = RTCCL(tr1);
				RTAR(Current, tr1);
				*(EIF_REFERENCE *)(Current + RTWA(5088, dtype)) = (EIF_REFERENCE) tr1;
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef ur1
#undef arg1
}

/* {HTTP_DATE}.make_from_rfc3339_string */
void F318_6357 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make_from_rfc3339_string";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 317, Current, 1, 1, 9726);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(317, Current, 9726);
	RTCC(arg1, 317, l_feature_name, 1, eif_new_type(301, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ur1 = RTCCL(arg1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5119, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr1);
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		RTDBGAA(Current, dtype, 5088, 0xF800018A, 0); /* date_time */
		tr1 = RTCCL(loc1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(5088, dtype)) = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(3);
		RTDBGAA(Current, dtype, 5087, 0x04000000, 1); /* has_error */
		*(EIF_BOOLEAN *)(Current + RTWA(5087, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(4);
		RTDBGAA(Current, dtype, 5088, 0xF800018A, 0); /* date_time */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5091, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTCCL(tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(5088, dtype)) = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ur1
#undef arg1
}

/* {HTTP_DATE}.make_from_date_time */
void F318_6358 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make_from_date_time";
	RTEX;
#define arg1 arg1x.it_r
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 317, Current, 0, 1, 9727);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(317, Current, 9727);
	RTCC(arg1, 317, l_feature_name, 1, eif_new_type(394, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 5088, 0xF800018A, 0); /* date_time */
	tr1 = RTCCL(arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5088, dtype)) = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {HTTP_DATE}.make_now_utc */
void F318_6359 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make_now_utc";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 317, Current, 0, 0, 9728);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(317, Current, 9728);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 5088, 0xF800018A, 0); /* date_time */
	tr1 = RTLNSMART(RTWCT(5088, dtype, Dftype(Current)).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(6384, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5088, dtype)) = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {HTTP_DATE}.has_error */
EIF_TYPED_VALUE F318_6360 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(5087,Dtype(Current)));
	return r;
}


/* {HTTP_DATE}.date_time */
EIF_TYPED_VALUE F318_6361 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5088,Dtype(Current)));
	return r;
}


/* {HTTP_DATE}.string */
EIF_TYPED_VALUE F318_6362 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "string";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 317, Current, 0, 0, 9731);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(317, Current, 9731);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF8000135, 0,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5095, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
}

/* {HTTP_DATE}.timestamp */
EIF_TYPED_VALUE F318_6363 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "timestamp";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_INT64, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 317, Current, 0, 0, 9732);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(317, Current, 9732);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x24000000, 1,0); /* Result */
	ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5092, dtype));
	Result = (EIF_INTEGER_64) ti8_1;
	RTHOOK(2);
	if ((EIF_BOOLEAN)(Result == (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L))) {
		RTHOOK(3);
		RTDBGAL(0, 0x24000000, 1,0); /* Result */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5088, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5091, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ur1 = RTCCL(tr2);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6398, "definite_duration", tr1))(tr1, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ti8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2314, "seconds_count", tr2))(tr2)).it_i8);
		Result = (EIF_INTEGER_64) ti8_1;
		RTHOOK(4);
		RTDBGAA(Current, dtype, 5092, 0x24000000, 1); /* internal_timestamp */
		*(EIF_INTEGER_64 *)(Current + RTWA(5092, dtype)) = (EIF_INTEGER_64) Result;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT64; r.it_i8 = Result; return r; }
#undef up1
#undef up2
#undef ur1
}

/* {HTTP_DATE}.epoch */
RTOID (F318_6364)
EIF_TYPED_VALUE F318_6364 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "epoch";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F318_6364);
	dtype = Dtype(Current);

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 317, Current, 0, 0, 9733);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(317, Current, 9733);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(0, 0xF800018A, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(394, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(6389, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui4_1
#undef Result
}

/* {HTTP_DATE}.internal_timestamp */
EIF_TYPED_VALUE F318_6365 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT64;
	r.it_i8 = *(EIF_INTEGER_64 *)(Current + RTWA(5092,Dtype(Current)));
	return r;
}


/* {HTTP_DATE}.internal_rfc1123_string */
EIF_TYPED_VALUE F318_6366 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5093,Dtype(Current)));
	return r;
}


/* {HTTP_DATE}.yyyy_mmm_dd_string */
EIF_TYPED_VALUE F318_6367 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "yyyy_mmm_dd_string";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLR(3,ur1);
	RTLR(4,ur2);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 317, Current, 0, 0, 9736);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(317, Current, 9736);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF8000135, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(309, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 11L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4639, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5088, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	ur2 = RTCCL(Result);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5104, dtype))(Current, ur1x, ur2x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
}

/* {HTTP_DATE}.rfc1123_string */
EIF_TYPED_VALUE F318_6368 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "rfc1123_string";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,ur2);
	RTLR(5,Result);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 317, Current, 1, 0, 9737);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(317, Current, 9737);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000135, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5093, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		RTHOOK(3);
		RTDBGAL(1, 0xF8000135, 0, 0); /* loc1 */
		tr1 = RTLNSMART(RTWCT(5093, dtype, Dftype(Current)).id);
		ui4_1 = ((EIF_INTEGER_32) 32L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4639, Dtype(tr1)))(tr1, ui4_1x);
		RTNHOOK(3,1);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5088, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		ur2 = RTCCL(loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5105, dtype))(Current, ur1x, ur2x);
		RTHOOK(5);
		RTDBGAA(Current, dtype, 5093, 0xF8000135, 0); /* internal_rfc1123_string */
		tr1 = RTCCL(loc1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(5093, dtype)) = (EIF_REFERENCE) tr1;
	}
	RTHOOK(6);
	RTDBGAL(0, 0xF8000135, 0,0); /* Result */
	Result = (EIF_REFERENCE) RTCCL(loc1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
}

/* {HTTP_DATE}.rfc850_string */
EIF_TYPED_VALUE F318_6369 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "rfc850_string";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLR(3,ur1);
	RTLR(4,ur2);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 317, Current, 0, 0, 9738);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(317, Current, 9738);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF8000135, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(309, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 32L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4639, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5088, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	ur2 = RTCCL(Result);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5106, dtype))(Current, ur1x, ur2x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
}

/* {HTTP_DATE}.iso8601_string */
EIF_TYPED_VALUE F318_6370 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "iso8601_string";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLR(3,ur1);
	RTLR(4,ur2);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 317, Current, 0, 0, 9739);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(317, Current, 9739);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF8000135, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(309, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 25L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4639, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5088, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	ur2 = RTCCL(Result);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5108, dtype))(Current, ur1x, ur2x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
}

/* {HTTP_DATE}.rfc3339_string */
EIF_TYPED_VALUE F318_6371 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "rfc3339_string";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLR(3,ur1);
	RTLR(4,ur2);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 317, Current, 0, 0, 9740);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(317, Current, 9740);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF8000135, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(309, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 25L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4639, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5088, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	ur2 = RTCCL(Result);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5108, dtype))(Current, ur1x, ur2x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
}

/* {HTTP_DATE}.ansi_c_string */
EIF_TYPED_VALUE F318_6372 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "ansi_c_string";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLR(3,ur1);
	RTLR(4,ur2);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 317, Current, 0, 0, 9741);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(317, Current, 9741);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF8000135, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(309, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 32L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4639, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5088, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	ur2 = RTCCL(Result);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5109, dtype))(Current, ur1x, ur2x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
}

/* {HTTP_DATE}.append_to_yyyy_mmm_dd_string */
void F318_6373 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "append_to_yyyy_mmm_dd_string";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,ur2);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 317, Current, 0, 1, 9742);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(317, Current, 9742);
	RTCC(arg1, 317, l_feature_name, 1, eif_new_type(303, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5088, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	ur2 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5104, dtype))(Current, ur1x, ur2x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef arg1
}

/* {HTTP_DATE}.append_to_rfc1123_string */
void F318_6374 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "append_to_rfc1123_string";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,ur2);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 317, Current, 0, 1, 9743);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(317, Current, 9743);
	RTCC(arg1, 317, l_feature_name, 1, eif_new_type(303, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5088, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	ur2 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5105, dtype))(Current, ur1x, ur2x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef arg1
}

/* {HTTP_DATE}.append_rfc850_string */
void F318_6375 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "append_rfc850_string";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,ur2);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 317, Current, 0, 1, 9744);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(317, Current, 9744);
	RTCC(arg1, 317, l_feature_name, 1, eif_new_type(303, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5088, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	ur2 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5106, dtype))(Current, ur1x, ur2x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef arg1
}

/* {HTTP_DATE}.append_to_ansi_c_string */
void F318_6376 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "append_to_ansi_c_string";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,ur2);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 317, Current, 0, 1, 9745);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(317, Current, 9745);
	RTCC(arg1, 317, l_feature_name, 1, eif_new_type(303, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5088, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	ur2 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5109, dtype))(Current, ur1x, ur2x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef arg1
}

/* {HTTP_DATE}.append_date_time_to_yyyy_mmm_dd_string */
void F318_6377 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "append_date_time_to_yyyy_mmm_dd_string";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 317, Current, 0, 2, 9746);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(317, Current, 9746);
	RTCC(arg1, 317, l_feature_name, 1, eif_new_type(394, 0x01), 0x01);
	RTCC(arg2, 317, l_feature_name, 2, eif_new_type(303, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1302, "year", arg1))(arg1)).it_i4);
	ui4_1 = ti4_1;
	ur1 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5116, dtype))(Current, ui4_1x, ur1x);
	RTHOOK(2);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 32L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4738, "append_code", arg2))(arg2, uu4_1x);
	RTHOOK(3);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1301, "month", arg1))(arg1)).it_i4);
	ui4_1 = ti4_1;
	ur1 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5115, dtype))(Current, ui4_1x, ur1x);
	RTHOOK(4);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 32L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4738, "append_code", arg2))(arg2, uu4_1x);
	RTHOOK(5);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1300, "day", arg1))(arg1)).it_i4);
	ui4_1 = ti4_1;
	ur1 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5110, dtype))(Current, ui4_1x, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
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

/* {HTTP_DATE}.append_date_time_to_rfc1123_string */
void F318_6378 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "append_date_time_to_rfc1123_string";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
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
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,Current);
	RTLR(5,ur2);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 317, Current, 0, 2, 9747);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(317, Current, 9747);
	RTCC(arg1, 317, l_feature_name, 1, eif_new_type(394, 0x01), 0x01);
	RTCC(arg2, 317, l_feature_name, 2, eif_new_type(303, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1319, "date", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6301, "day_of_the_week", tr1))(tr1)).it_i4);
	ui4_1 = ti4_1;
	ur1 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5113, dtype))(Current, ui4_1x, ur1x);
	RTHOOK(2);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 44L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4738, "append_code", arg2))(arg2, uu4_1x);
	RTHOOK(3);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 32L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4738, "append_code", arg2))(arg2, uu4_1x);
	RTHOOK(4);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1300, "day", arg1))(arg1)).it_i4);
	ui4_1 = ti4_1;
	ur1 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5110, dtype))(Current, ui4_1x, ur1x);
	RTHOOK(5);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 32L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4738, "append_code", arg2))(arg2, uu4_1x);
	RTHOOK(6);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1301, "month", arg1))(arg1)).it_i4);
	ui4_1 = ti4_1;
	ur1 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5115, dtype))(Current, ui4_1x, ur1x);
	RTHOOK(7);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 32L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4738, "append_code", arg2))(arg2, uu4_1x);
	RTHOOK(8);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1302, "year", arg1))(arg1)).it_i4);
	ui4_1 = ti4_1;
	ur1 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5116, dtype))(Current, ui4_1x, ur1x);
	RTHOOK(9);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 32L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4738, "append_code", arg2))(arg2, uu4_1x);
	RTHOOK(10);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1318, "time", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	ur2 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5111, dtype))(Current, ur1x, ur2x);
	RTHOOK(11);
	tr1 = RTMS_EX_H(" GMT",4,541543764);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4749, "append", arg2))(arg2, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef uu4_1
#undef arg2
#undef arg1
}

/* {HTTP_DATE}.append_date_time_to_rfc850_string */
void F318_6379 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "append_date_time_to_rfc850_string";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
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
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,Current);
	RTLR(5,ur2);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 317, Current, 0, 2, 9748);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(317, Current, 9748);
	RTCC(arg1, 317, l_feature_name, 1, eif_new_type(394, 0x01), 0x01);
	RTCC(arg2, 317, l_feature_name, 2, eif_new_type(303, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1319, "date", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6301, "day_of_the_week", tr1))(tr1)).it_i4);
	ui4_1 = ti4_1;
	ur1 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5114, dtype))(Current, ui4_1x, ur1x);
	RTHOOK(2);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 44L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4738, "append_code", arg2))(arg2, uu4_1x);
	RTHOOK(3);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 32L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4738, "append_code", arg2))(arg2, uu4_1x);
	RTHOOK(4);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1300, "day", arg1))(arg1)).it_i4);
	ui4_1 = ti4_1;
	ur1 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5110, dtype))(Current, ui4_1x, ur1x);
	RTHOOK(5);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 45L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4738, "append_code", arg2))(arg2, uu4_1x);
	RTHOOK(6);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1301, "month", arg1))(arg1)).it_i4);
	ui4_1 = ti4_1;
	ur1 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5115, dtype))(Current, ui4_1x, ur1x);
	RTHOOK(7);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 45L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4738, "append_code", arg2))(arg2, uu4_1x);
	RTHOOK(8);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1302, "year", arg1))(arg1)).it_i4);
	ui4_1 = (EIF_INTEGER_32) (ti4_1 % ((EIF_INTEGER_32) 100L));
	ur1 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5116, dtype))(Current, ui4_1x, ur1x);
	RTHOOK(9);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 32L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4738, "append_code", arg2))(arg2, uu4_1x);
	RTHOOK(10);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1318, "time", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	ur2 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5111, dtype))(Current, ur1x, ur2x);
	RTHOOK(11);
	tr1 = RTMS_EX_H(" GMT",4,541543764);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4749, "append", arg2))(arg2, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef uu4_1
#undef arg2
#undef arg1
}

/* {HTTP_DATE}.append_date_time_to_iso8601_string */
void F318_6380 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "append_date_time_to_iso8601_string";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
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
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLR(5,ur2);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 317, Current, 0, 2, 9749);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(317, Current, 9749);
	RTCC(arg1, 317, l_feature_name, 1, eif_new_type(394, 0x01), 0x01);
	RTCC(arg2, 317, l_feature_name, 2, eif_new_type(303, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1302, "year", arg1))(arg1)).it_i4);
	ui4_1 = ti4_1;
	ur1 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5116, dtype))(Current, ui4_1x, ur1x);
	RTHOOK(2);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 45L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4738, "append_code", arg2))(arg2, uu4_1x);
	RTHOOK(3);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1301, "month", arg1))(arg1)).it_i4);
	ui4_1 = ti4_1;
	ur1 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5110, dtype))(Current, ui4_1x, ur1x);
	RTHOOK(4);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 45L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4738, "append_code", arg2))(arg2, uu4_1x);
	RTHOOK(5);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1300, "day", arg1))(arg1)).it_i4);
	ui4_1 = ti4_1;
	ur1 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5110, dtype))(Current, ui4_1x, ur1x);
	RTHOOK(6);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 84L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4738, "append_code", arg2))(arg2, uu4_1x);
	RTHOOK(7);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1318, "time", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	ur2 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5112, dtype))(Current, ur1x, ur2x);
	RTHOOK(8);
	tr1 = RTMS_EX_H("Z",1,90);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4749, "append", arg2))(arg2, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef uu4_1
#undef arg2
#undef arg1
}

/* {HTTP_DATE}.append_date_time_to_rfc3339_string */
void F318_6381 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "append_date_time_to_rfc3339_string";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
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
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLR(5,ur2);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 317, Current, 0, 2, 9750);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(317, Current, 9750);
	RTCC(arg1, 317, l_feature_name, 1, eif_new_type(394, 0x01), 0x01);
	RTCC(arg2, 317, l_feature_name, 2, eif_new_type(303, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1302, "year", arg1))(arg1)).it_i4);
	ui4_1 = ti4_1;
	ur1 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5116, dtype))(Current, ui4_1x, ur1x);
	RTHOOK(2);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 45L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4738, "append_code", arg2))(arg2, uu4_1x);
	RTHOOK(3);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1301, "month", arg1))(arg1)).it_i4);
	ui4_1 = ti4_1;
	ur1 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5110, dtype))(Current, ui4_1x, ur1x);
	RTHOOK(4);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 45L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4738, "append_code", arg2))(arg2, uu4_1x);
	RTHOOK(5);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1300, "day", arg1))(arg1)).it_i4);
	ui4_1 = ti4_1;
	ur1 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5110, dtype))(Current, ui4_1x, ur1x);
	RTHOOK(6);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 84L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4738, "append_code", arg2))(arg2, uu4_1x);
	RTHOOK(7);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1318, "time", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	ur2 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5112, dtype))(Current, ur1x, ur2x);
	RTHOOK(8);
	tr1 = RTMS_EX_H("Z",1,90);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4749, "append", arg2))(arg2, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef uu4_1
#undef arg2
#undef arg1
}

/* {HTTP_DATE}.append_date_time_to_ansi_c_string */
void F318_6382 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "append_date_time_to_ansi_c_string";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
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
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,Current);
	RTLR(5,ur2);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 317, Current, 0, 2, 9751);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(317, Current, 9751);
	RTCC(arg1, 317, l_feature_name, 1, eif_new_type(394, 0x01), 0x01);
	RTCC(arg2, 317, l_feature_name, 2, eif_new_type(303, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1319, "date", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6301, "day_of_the_week", tr1))(tr1)).it_i4);
	ui4_1 = ti4_1;
	ur1 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5113, dtype))(Current, ui4_1x, ur1x);
	RTHOOK(2);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 32L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4738, "append_code", arg2))(arg2, uu4_1x);
	RTHOOK(3);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1301, "month", arg1))(arg1)).it_i4);
	ui4_1 = ti4_1;
	ur1 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5115, dtype))(Current, ui4_1x, ur1x);
	RTHOOK(4);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 32L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4738, "append_code", arg2))(arg2, uu4_1x);
	RTHOOK(5);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 32L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4738, "append_code", arg2))(arg2, uu4_1x);
	RTHOOK(6);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1300, "day", arg1))(arg1)).it_i4);
	ui4_1 = ti4_1;
	ur1 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5116, dtype))(Current, ui4_1x, ur1x);
	RTHOOK(7);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 32L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4738, "append_code", arg2))(arg2, uu4_1x);
	RTHOOK(8);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1318, "time", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	ur2 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5111, dtype))(Current, ur1x, ur2x);
	RTHOOK(9);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 32L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4738, "append_code", arg2))(arg2, uu4_1x);
	RTHOOK(10);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1302, "year", arg1))(arg1)).it_i4);
	ui4_1 = ti4_1;
	ur1 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5116, dtype))(Current, ui4_1x, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef uu4_1
#undef arg2
#undef arg1
}

/* {HTTP_DATE}.debug_output */
EIF_TYPED_VALUE F318_6383 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "debug_output";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLR(4,ur1);
	RTLR(5,ur2);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 317, Current, 1, 0, 9752);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(317, Current, 9752);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5093, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr1);
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		RTDBGAL(0, 0xF8000135, 0,0); /* Result */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4857, "string", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		RTHOOK(3);
		RTDBGAL(0, 0xF8000135, 0,0); /* Result */
		tr1 = RTLN(eif_new_type(309, 0x01).id);
		ui4_1 = ((EIF_INTEGER_32) 32L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4639, Dtype(tr1)))(tr1, ui4_1x);
		RTNHOOK(3,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5088, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		ur2 = RTCCL(Result);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5105, dtype))(Current, ur1x, ur2x);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
}

/* {HTTP_DATE}.append_2_digits_integer_to */
void F318_6384 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "append_2_digits_integer_to";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,arg2);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 317, Current, 0, 2, 9753);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(317, Current, 9753);
	RTCC(arg2, 317, l_feature_name, 2, eif_new_type(303, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_not_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((EIF_BOOLEAN) (arg1 <= ((EIF_INTEGER_32) 9L))) {
		RTHOOK(3);
		uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 48L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4738, "append_code", arg2))(arg2, uu4_1x);
	}
	RTHOOK(4);
	ui4_1 = arg1;
	ur1 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5116, dtype))(Current, ui4_1x, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
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

/* {HTTP_DATE}.append_2_digits_time_to */
void F318_6385 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "append_2_digits_time_to";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 317, Current, 0, 2, 9754);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(317, Current, 9754);
	RTCC(arg1, 317, l_feature_name, 1, eif_new_type(391, 0x01), 0x01);
	RTCC(arg2, 317, l_feature_name, 2, eif_new_type(303, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1268, "hour", arg1))(arg1)).it_i4);
	ui4_1 = ti4_1;
	ur1 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5110, dtype))(Current, ui4_1x, ur1x);
	RTHOOK(2);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 58L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4738, "append_code", arg2))(arg2, uu4_1x);
	RTHOOK(3);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1269, "minute", arg1))(arg1)).it_i4);
	ui4_1 = ti4_1;
	ur1 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5110, dtype))(Current, ui4_1x, ur1x);
	RTHOOK(4);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 58L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4738, "append_code", arg2))(arg2, uu4_1x);
	RTHOOK(5);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1270, "second", arg1))(arg1)).it_i4);
	ui4_1 = ti4_1;
	ur1 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5110, dtype))(Current, ui4_1x, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
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

/* {HTTP_DATE}.append_2_digits_fine_time_to */
void F318_6386 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "append_2_digits_fine_time_to";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REAL_64 loc2 = (EIF_REAL_64) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLR(4,loc1);
	RTLR(5,tr1);
	RTLR(6,loc3);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REAL64, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 317, Current, 3, 2, 9755);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(317, Current, 9755);
	RTCC(arg1, 317, l_feature_name, 1, eif_new_type(391, 0x01), 0x01);
	RTCC(arg2, 317, l_feature_name, 2, eif_new_type(303, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1268, "hour", arg1))(arg1)).it_i4);
	ui4_1 = ti4_1;
	ur1 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5110, dtype))(Current, ui4_1x, ur1x);
	RTHOOK(2);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 58L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4738, "append_code", arg2))(arg2, uu4_1x);
	RTHOOK(3);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1269, "minute", arg1))(arg1)).it_i4);
	ui4_1 = ti4_1;
	ur1 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5110, dtype))(Current, ui4_1x, ur1x);
	RTHOOK(4);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 58L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4738, "append_code", arg2))(arg2, uu4_1x);
	RTHOOK(5);
	RTDBGAL(1, 0xF8000180, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(384, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 2L);
	ui4_2 = ((EIF_INTEGER_32) 2L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6161, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
	RTNHOOK(5,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(6173, "show_trailing_zeros", loc1))(loc1);
	RTHOOK(7);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(6172, "show_zero", loc1))(loc1);
	RTHOOK(8);
	RTDBGAL(2, 0x20000000, 1, 0); /* loc2 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1270, "second", arg1))(arg1)).it_i4);
	tr8_1 = (EIF_REAL_64) (ti4_1);
	tr8_2 = *(EIF_REAL_64 *)(arg1 + RTVA(1277, "fractional_second", arg1));
	loc2 = (EIF_REAL_64) (EIF_REAL_64) (tr8_1 + (EIF_REAL_64) (tr8_2 * (EIF_REAL_64) 0.01));
	RTHOOK(9);
	RTDBGAL(3, 0xF8000135, 0, 0); /* loc3 */
	ur8_1 = loc2;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6176, "formatted", loc1))(loc1, ur8_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(10);
	tr1 = RTMS_EX_H(".00",3,3026992);
	ur1 = tr1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4687, "ends_with_general", loc3))(loc3, ur1x)).it_b);
	if (tb1) {
		RTHOOK(11);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1270, "second", arg1))(arg1)).it_i4);
		ui4_1 = ti4_1;
		ur1 = RTCCL(arg2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5110, dtype))(Current, ui4_1x, ur1x);
	} else {
		RTHOOK(12);
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 10L));
		if ((EIF_BOOLEAN) (loc2 < tr8_1)) {
			RTHOOK(13);
			uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 48L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4738, "append_code", arg2))(arg2, uu4_1x);
		}
		RTHOOK(14);
		ur1 = RTCCL(loc3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4749, "append", arg2))(arg2, ur1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef up1
#undef ur1
#undef ur8_1
#undef ui4_1
#undef ui4_2
#undef uu4_1
#undef arg2
#undef arg1
}

/* {HTTP_DATE}.append_day_ddd_to */
void F318_6387 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "append_day_ddd_to";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 317, Current, 0, 2, 9756);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(317, Current, 9756);
	RTCC(arg2, 317, l_feature_name, 2, eif_new_type(303, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("1 <= d and d <= 7", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= arg1) && (EIF_BOOLEAN) (arg1 <= ((EIF_INTEGER_32) 7L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	switch (arg1) {
		case 1L:
			RTHOOK(3);
			tr1 = RTMS_EX_H("Sun",3,5469550);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4749, "append", arg2))(arg2, ur1x);
			break;
		case 2L:
			RTHOOK(4);
			tr1 = RTMS_EX_H("Mon",3,5074798);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4749, "append", arg2))(arg2, ur1x);
			break;
		case 3L:
			RTHOOK(5);
			tr1 = RTMS_EX_H("Tue",3,5535077);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4749, "append", arg2))(arg2, ur1x);
			break;
		case 4L:
			RTHOOK(6);
			tr1 = RTMS_EX_H("Wed",3,5727588);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4749, "append", arg2))(arg2, ur1x);
			break;
		case 5L:
			RTHOOK(7);
			tr1 = RTMS_EX_H("Thu",3,5531765);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4749, "append", arg2))(arg2, ur1x);
			break;
		case 6L:
			RTHOOK(8);
			tr1 = RTMS_EX_H("Fri",3,4616809);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4749, "append", arg2))(arg2, ur1x);
			break;
		case 7L:
			RTHOOK(9);
			tr1 = RTMS_EX_H("Sat",3,5464436);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4749, "append", arg2))(arg2, ur1x);
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef ur1
#undef arg2
#undef arg1
}

/* {HTTP_DATE}.append_day_name_to */
void F318_6388 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "append_day_name_to";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 317, Current, 0, 2, 9757);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(317, Current, 9757);
	RTCC(arg2, 317, l_feature_name, 2, eif_new_type(303, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("1 <= d and d <= 7", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= arg1) && (EIF_BOOLEAN) (arg1 <= ((EIF_INTEGER_32) 7L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	switch (arg1) {
		case 1L:
			RTHOOK(3);
			tr1 = RTMS_EX_H("Sunday",6,2016155513);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4749, "append", arg2))(arg2, ur1x);
			break;
		case 2L:
			RTHOOK(4);
			tr1 = RTMS_EX_H("Monday",6,2004312953);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4749, "append", arg2))(arg2, ur1x);
			break;
		case 3L:
			RTHOOK(5);
			tr1 = RTMS_EX_H("Tuesday",7,1495753593);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4749, "append", arg2))(arg2, ur1x);
			break;
		case 4L:
			RTHOOK(6);
			tr1 = RTMS_EX_H("Wednesday",9,1804915065);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4749, "append", arg2))(arg2, ur1x);
			break;
		case 5L:
			RTHOOK(7);
			tr1 = RTMS_EX_H("Thursday",8,844137593);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4749, "append", arg2))(arg2, ur1x);
			break;
		case 6L:
			RTHOOK(8);
			tr1 = RTMS_EX_H("Friday",6,1906687353);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4749, "append", arg2))(arg2, ur1x);
			break;
		case 7L:
			RTHOOK(9);
			tr1 = RTMS_EX_H("Saturday",8,1596931193);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4749, "append", arg2))(arg2, ur1x);
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef ur1
#undef arg2
#undef arg1
}

/* {HTTP_DATE}.append_month_mmm_to */
void F318_6389 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "append_month_mmm_to";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 317, Current, 0, 2, 9758);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(317, Current, 9758);
	RTCC(arg2, 317, l_feature_name, 2, eif_new_type(303, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("1 <= m and m <= 12", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= arg1) && (EIF_BOOLEAN) (arg1 <= ((EIF_INTEGER_32) 12L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	switch (arg1) {
		case 1L:
			RTHOOK(3);
			tr1 = RTMS_EX_H("Jan",3,4874606);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4749, "append", arg2))(arg2, ur1x);
			break;
		case 2L:
			RTHOOK(4);
			tr1 = RTMS_EX_H("Feb",3,4613474);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4749, "append", arg2))(arg2, ur1x);
			break;
		case 3L:
			RTHOOK(5);
			tr1 = RTMS_EX_H("Mar",3,5071218);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4749, "append", arg2))(arg2, ur1x);
			break;
		case 4L:
			RTHOOK(6);
			tr1 = RTMS_EX_H("Apr",3,4288626);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4749, "append", arg2))(arg2, ur1x);
			break;
		case 5L:
			RTHOOK(7);
			tr1 = RTMS_EX_H("May",3,5071225);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4749, "append", arg2))(arg2, ur1x);
			break;
		case 6L:
			RTHOOK(8);
			tr1 = RTMS_EX_H("Jun",3,4879726);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4749, "append", arg2))(arg2, ur1x);
			break;
		case 7L:
			RTHOOK(9);
			tr1 = RTMS_EX_H("Jul",3,4879724);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4749, "append", arg2))(arg2, ur1x);
			break;
		case 8L:
			RTHOOK(10);
			tr1 = RTMS_EX_H("Aug",3,4289895);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4749, "append", arg2))(arg2, ur1x);
			break;
		case 9L:
			RTHOOK(11);
			tr1 = RTMS_EX_H("Sep",3,5465456);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4749, "append", arg2))(arg2, ur1x);
			break;
		case 10L:
			RTHOOK(12);
			tr1 = RTMS_EX_H("Oct",3,5202804);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4749, "append", arg2))(arg2, ur1x);
			break;
		case 11L:
			RTHOOK(13);
			tr1 = RTMS_EX_H("Nov",3,5140342);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4749, "append", arg2))(arg2, ur1x);
			break;
		case 12L:
			RTHOOK(14);
			tr1 = RTMS_EX_H("Dec",3,4482403);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4749, "append", arg2))(arg2, ur1x);
			break;
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
#undef arg2
#undef arg1
}

/* {HTTP_DATE}.append_integer_to */
void F318_6390 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "append_integer_to";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(6);
	RTLR(0,arg2);
	RTLR(1,loc1);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLR(4,ur1);
	RTLR(5,Current);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 317, Current, 2, 2, 9720);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(317, Current, 9720);
	RTCC(arg2, 317, l_feature_name, 2, eif_new_type(303, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = RTCCL(arg2);
	loc1 = RTRV(eif_new_type(306, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		ui4_1 = arg1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4741, "append_integer", loc1))(loc1, ui4_1x);
	} else {
		RTHOOK(3);
		loc2 = RTCCL(arg2);
		loc2 = RTRV(eif_new_type(309, 0x01),loc2);
		if (EIF_TEST(loc2)) {
			RTHOOK(4);
			ui4_1 = arg1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4741, "append_integer", loc2))(loc2, ui4_1x);
		} else {
			RTHOOK(5);
			tr1 = eif_out__i4_s1(arg1);
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4749, "append", arg2))(arg2, ur1x);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef arg2
#undef arg1
}

/* {HTTP_DATE}.string_to_date_time */
EIF_TYPED_VALUE F318_6391 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "string_to_date_time";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc12 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc13 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc14 = (EIF_BOOLEAN) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_TYPED_VALUE ui4_5x = {{0}, SK_INT32};
#define ui4_5 ui4_5x.it_i4
	EIF_TYPED_VALUE ui4_6x = {{0}, SK_INT32};
#define ui4_6 ui4_6x.it_i4
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_BOOLEAN tb6;
	EIF_BOOLEAN tb7;
	EIF_BOOLEAN tb8;
	EIF_BOOLEAN tb9;
	EIF_BOOLEAN tb10;
	EIF_BOOLEAN tb11;
	EIF_BOOLEAN tb12;
	EIF_BOOLEAN tb13;
	EIF_BOOLEAN tb14;
	EIF_BOOLEAN tb15;
	EIF_BOOLEAN tb16;
	EIF_BOOLEAN tb17;
	EIF_BOOLEAN tb18;
	EIF_BOOLEAN tb19;
	EIF_BOOLEAN tb20;
	EIF_BOOLEAN tb21;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,loc3);
	RTLR(5,tr2);
	RTLR(6,ur1);
	RTLR(7,Result);
	RTLR(8,Current);
	RTLIU(9);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_INT32, &loc9);
	RTLU(SK_INT32, &loc10);
	RTLU(SK_INT32, &loc11);
	RTLU(SK_INT32, &loc12);
	RTLU(SK_INT32, &loc13);
	RTLU(SK_BOOL, &loc14);
	
	RTEAA(l_feature_name, 317, Current, 14, 1, 9721);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(317, Current, 9721);
	RTCC(arg1, 317, l_feature_name, 1, eif_new_type(301, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
	loc12 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(2);
	RTDBGAL(13, 0x10000000, 1, 0); /* loc13 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4678, "count", arg1))(arg1)).it_i4);
	loc13 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	RTDBGAL(1, 0xF8000132, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(306, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 4L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4639, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(3,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	for (;;) {
		RTHOOK(4);
		tb1 = '\01';
		if (!(EIF_BOOLEAN) (loc12 > loc13)) {
			ui4_1 = loc12;
			tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
			tr1 = RTLN(eif_new_type(290, 0x00).id);
			*(EIF_CHARACTER_32 *)tr1 = tw1;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4510, "is_space", tr1))(tr1)).it_b);
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) break;
		RTHOOK(5);
		RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
		loc12++;
	}
	RTHOOK(6);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(4766, "wipe_out", loc1))(loc1);
	for (;;) {
		RTHOOK(7);
		tb2 = '\01';
		if (!(EIF_BOOLEAN) (loc12 > loc13)) {
			ui4_1 = loc12;
			tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
			tr1 = RTLN(eif_new_type(290, 0x00).id);
			*(EIF_CHARACTER_32 *)tr1 = tw1;
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4504, "is_alpha", tr1))(tr1)).it_b);
			tb2 = (EIF_BOOLEAN) !tb3;
		}
		if (tb2) break;
		RTHOOK(8);
		ui4_1 = loc12;
		tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
		uw1 = tw1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3782, "extend", loc1))(loc1, uw1x);
		RTHOOK(9);
		RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
		loc12++;
	}
	RTHOOK(10);
	tb3 = '\0';
	if ((EIF_BOOLEAN) (loc12 <= loc13)) {
		ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(4797, "count", loc1));
		tb3 = (EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 3L));
	}
	if (tb3) {
		RTHOOK(11);
		RTDBGAL(2, 0xF8000132, 0, 0); /* loc2 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4700, "as_lower", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc2 = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		RTHOOK(12);
		RTDBGAL(14, 0x04000000, 1, 0); /* loc14 */
		loc14 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	for (;;) {
		RTHOOK(13);
		tb3 = '\01';
		if (!(EIF_BOOLEAN) (loc12 > loc13)) {
			ui4_1 = loc12;
			tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
			tr1 = RTLN(eif_new_type(290, 0x00).id);
			*(EIF_CHARACTER_32 *)tr1 = tw1;
			tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4510, "is_space", tr1))(tr1)).it_b);
			tb3 = (EIF_BOOLEAN) !tb4;
		}
		if (tb3) break;
		RTHOOK(14);
		RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
		loc12++;
	}
	RTHOOK(15);
	tb4 = '\0';
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !loc14 && (EIF_BOOLEAN) (loc12 <= loc13))) {
		ui4_1 = loc12;
		tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
		tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) ',';
		tb4 = (EIF_BOOLEAN)(tw1 == tw2);
	}
	if (tb4) {
		RTHOOK(16);
		RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
		loc12++;
		for (;;) {
			RTHOOK(17);
			tb4 = '\01';
			if (!(EIF_BOOLEAN) (loc12 > loc13)) {
				ui4_1 = loc12;
				tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
				tr1 = RTLN(eif_new_type(290, 0x00).id);
				*(EIF_CHARACTER_32 *)tr1 = tw1;
				tb5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4510, "is_space", tr1))(tr1)).it_b);
				tb4 = (EIF_BOOLEAN) !tb5;
			}
			if (tb4) break;
			RTHOOK(18);
			RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
			loc12++;
		}
		RTHOOK(19);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(4766, "wipe_out", loc1))(loc1);
		for (;;) {
			RTHOOK(20);
			tb5 = '\01';
			if (!(EIF_BOOLEAN) (loc12 > loc13)) {
				ui4_1 = loc12;
				tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
				tb6 = EIF_TEST(isdigit(tw1));
				tb5 = (EIF_BOOLEAN) !tb6;
			}
			if (tb5) break;
			RTHOOK(21);
			ui4_1 = loc12;
			tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
			uw1 = tw1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3782, "extend", loc1))(loc1, uw1x);
			RTHOOK(22);
			RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
			loc12++;
		}
		RTHOOK(23);
		tb6 = '\0';
		if ((EIF_BOOLEAN) (loc12 <= loc13)) {
			ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(4797, "count", loc1));
			tb6 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
		}
		if (tb6) {
			if (RTAL & CK_CHECK) {
				RTHOOK(24);
				RTCT("t.is_integer", EX_CHECK);
				tb6 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4670, "is_integer", loc1))(loc1)).it_b);
				if (tb6) {
					RTCK;
				} else {
					RTCF;
				}
			}
			RTHOOK(25);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4704, "to_integer", loc1))(loc1)).it_i4);
			loc4 = (EIF_INTEGER_32) ti4_1;
		} else {
			RTHOOK(26);
			RTDBGAL(14, 0x04000000, 1, 0); /* loc14 */
			loc14 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	} else {
		RTHOOK(27);
		RTDBGAL(14, 0x04000000, 1, 0); /* loc14 */
		loc14 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTHOOK(28);
	ui4_1 = loc12;
	tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
	tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '-';
	if ((EIF_BOOLEAN)(tw1 == tw2)) {
		RTHOOK(29);
		RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
		loc12++;
	} else {
		for (;;) {
			RTHOOK(30);
			tb6 = '\01';
			if (!(EIF_BOOLEAN) (loc12 > loc13)) {
				ui4_1 = loc12;
				tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
				tr1 = RTLN(eif_new_type(290, 0x00).id);
				*(EIF_CHARACTER_32 *)tr1 = tw1;
				tb7 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4510, "is_space", tr1))(tr1)).it_b);
				tb6 = (EIF_BOOLEAN) !tb7;
			}
			if (tb6) break;
			RTHOOK(31);
			RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
			loc12++;
		}
	}
	RTHOOK(32);
	if ((EIF_BOOLEAN) !loc14) {
		RTHOOK(33);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(4766, "wipe_out", loc1))(loc1);
		for (;;) {
			RTHOOK(34);
			tb7 = '\01';
			if (!(EIF_BOOLEAN) (loc12 > loc13)) {
				ui4_1 = loc12;
				tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
				tr1 = RTLN(eif_new_type(290, 0x00).id);
				*(EIF_CHARACTER_32 *)tr1 = tw1;
				tb8 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4504, "is_alpha", tr1))(tr1)).it_b);
				tb7 = (EIF_BOOLEAN) !tb8;
			}
			if (tb7) break;
			RTHOOK(35);
			ui4_1 = loc12;
			tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
			uw1 = tw1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3782, "extend", loc1))(loc1, uw1x);
			RTHOOK(36);
			RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
			loc12++;
		}
		RTHOOK(37);
		tb8 = '\0';
		if ((EIF_BOOLEAN) (loc12 <= loc13)) {
			ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(4797, "count", loc1));
			tb8 = (EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 3L));
		}
		if (tb8) {
			RTHOOK(38);
			RTDBGAL(3, 0xF8000132, 0, 0); /* loc3 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4701, "as_upper", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc3 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(39);
			ti4_1 = *(EIF_INTEGER_32 *)(loc3 + RTVA(4797, "count", loc3));
			if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 3L))) {
				RTHOOK(40);
				ui4_1 = ((EIF_INTEGER_32) 3L);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4757, "keep_head", loc3))(loc3, ui4_1x);
			}
			RTHOOK(41);
			tr1 = RTMS_EX_H("JAN",3,4866382);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4698, "as_string_32", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr2);
			tb8 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4783, "same_string", loc3))(loc3, ur1x)).it_b);
			if (tb8) {
				RTHOOK(42);
				RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
				loc10 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			} else {
				RTHOOK(43);
				tr1 = RTMS_EX_H("FEB",3,4605250);
				tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4698, "as_string_32", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur1 = RTCCL(tr2);
				tb8 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4783, "same_string", loc3))(loc3, ur1x)).it_b);
				if (tb8) {
					RTHOOK(44);
					RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
					loc10 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
				} else {
					RTHOOK(45);
					tr1 = RTMS_EX_H("MAR",3,5062994);
					tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4698, "as_string_32", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					ur1 = RTCCL(tr2);
					tb8 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4783, "same_string", loc3))(loc3, ur1x)).it_b);
					if (tb8) {
						RTHOOK(46);
						RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
						loc10 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
					} else {
						RTHOOK(47);
						tr1 = RTMS_EX_H("APR",3,4280402);
						tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4698, "as_string_32", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						ur1 = RTCCL(tr2);
						tb8 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4783, "same_string", loc3))(loc3, ur1x)).it_b);
						if (tb8) {
							RTHOOK(48);
							RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
							loc10 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
						} else {
							RTHOOK(49);
							tr1 = RTMS_EX_H("MAY",3,5063001);
							tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4698, "as_string_32", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							ur1 = RTCCL(tr2);
							tb8 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4783, "same_string", loc3))(loc3, ur1x)).it_b);
							if (tb8) {
								RTHOOK(50);
								RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
								loc10 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
							} else {
								RTHOOK(51);
								tr1 = RTMS_EX_H("JUN",3,4871502);
								tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4698, "as_string_32", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
								ur1 = RTCCL(tr2);
								tb8 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4783, "same_string", loc3))(loc3, ur1x)).it_b);
								if (tb8) {
									RTHOOK(52);
									RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
									loc10 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 6L);
								} else {
									RTHOOK(53);
									tr1 = RTMS_EX_H("JUL",3,4871500);
									tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4698, "as_string_32", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
									ur1 = RTCCL(tr2);
									tb8 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4783, "same_string", loc3))(loc3, ur1x)).it_b);
									if (tb8) {
										RTHOOK(54);
										RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
										loc10 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 7L);
									} else {
										RTHOOK(55);
										tr1 = RTMS_EX_H("AUG",3,4281671);
										tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4698, "as_string_32", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
										ur1 = RTCCL(tr2);
										tb8 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4783, "same_string", loc3))(loc3, ur1x)).it_b);
										if (tb8) {
											RTHOOK(56);
											RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
											loc10 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
										} else {
											RTHOOK(57);
											tr1 = RTMS_EX_H("SEP",3,5457232);
											tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4698, "as_string_32", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
											ur1 = RTCCL(tr2);
											tb8 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4783, "same_string", loc3))(loc3, ur1x)).it_b);
											if (tb8) {
												RTHOOK(58);
												RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
												loc10 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 9L);
											} else {
												RTHOOK(59);
												tr1 = RTMS_EX_H("OCT",3,5194580);
												tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4698, "as_string_32", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
												ur1 = RTCCL(tr2);
												tb8 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4783, "same_string", loc3))(loc3, ur1x)).it_b);
												if (tb8) {
													RTHOOK(60);
													RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
													loc10 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 10L);
												} else {
													RTHOOK(61);
													tr1 = RTMS_EX_H("NOV",3,5132118);
													tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4698, "as_string_32", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
													ur1 = RTCCL(tr2);
													tb8 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4783, "same_string", loc3))(loc3, ur1x)).it_b);
													if (tb8) {
														RTHOOK(62);
														RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
														loc10 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 11L);
													} else {
														RTHOOK(63);
														tr1 = RTMS_EX_H("DEC",3,4474179);
														tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4698, "as_string_32", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
														ur1 = RTCCL(tr2);
														tb8 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4783, "same_string", loc3))(loc3, ur1x)).it_b);
														if (tb8) {
															RTHOOK(64);
															RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
															loc10 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 12L);
														} else {
															RTHOOK(65);
															RTDBGAL(14, 0x04000000, 1, 0); /* loc14 */
															loc14 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		} else {
			RTHOOK(66);
			RTDBGAL(14, 0x04000000, 1, 0); /* loc14 */
			loc14 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	}
	RTHOOK(67);
	ui4_1 = loc12;
	tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
	tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '-';
	if ((EIF_BOOLEAN)(tw1 == tw2)) {
		RTHOOK(68);
		RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
		loc12++;
	} else {
		for (;;) {
			RTHOOK(69);
			tb8 = '\01';
			if (!(EIF_BOOLEAN) (loc12 > loc13)) {
				ui4_1 = loc12;
				tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
				tr1 = RTLN(eif_new_type(290, 0x00).id);
				*(EIF_CHARACTER_32 *)tr1 = tw1;
				tb9 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4510, "is_space", tr1))(tr1)).it_b);
				tb8 = (EIF_BOOLEAN) !tb9;
			}
			if (tb8) break;
			RTHOOK(70);
			RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
			loc12++;
		}
	}
	RTHOOK(71);
	if ((EIF_BOOLEAN) !loc14) {
		RTHOOK(72);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(4766, "wipe_out", loc1))(loc1);
		for (;;) {
			RTHOOK(73);
			tb9 = '\01';
			if (!(EIF_BOOLEAN) (loc12 > loc13)) {
				ui4_1 = loc12;
				tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
				tb10 = EIF_TEST(isdigit(tw1));
				tb9 = (EIF_BOOLEAN) !tb10;
			}
			if (tb9) break;
			RTHOOK(74);
			ui4_1 = loc12;
			tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
			uw1 = tw1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3782, "extend", loc1))(loc1, uw1x);
			RTHOOK(75);
			RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
			loc12++;
		}
		RTHOOK(76);
		tb10 = '\0';
		if ((EIF_BOOLEAN) (loc12 <= loc13)) {
			ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(4797, "count", loc1));
			tb10 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
		}
		if (tb10) {
			if (RTAL & CK_CHECK) {
				RTHOOK(77);
				RTCT("t.count = 4 or t.count = 2 and t.is_integer", EX_CHECK);
				tb10 = '\01';
				ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(4797, "count", loc1));
				if (!(EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 4L))) {
					tb11 = '\0';
					ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(4797, "count", loc1));
					if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L))) {
						tb12 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4670, "is_integer", loc1))(loc1)).it_b);
						tb11 = tb12;
					}
					tb10 = tb11;
				}
				if (tb10) {
					RTCK;
				} else {
					RTCF;
				}
			}
			RTHOOK(78);
			RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4704, "to_integer", loc1))(loc1)).it_i4);
			loc5 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(79);
			ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(4797, "count", loc1));
			if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L))) {
				RTHOOK(80);
				RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
				loc5 += ((EIF_INTEGER_32) 1900L);
			}
		} else {
			RTHOOK(81);
			RTDBGAL(14, 0x04000000, 1, 0); /* loc14 */
			loc14 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	}
	for (;;) {
		RTHOOK(82);
		tb10 = '\01';
		if (!(EIF_BOOLEAN) (loc12 > loc13)) {
			ui4_1 = loc12;
			tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
			tr1 = RTLN(eif_new_type(290, 0x00).id);
			*(EIF_CHARACTER_32 *)tr1 = tw1;
			tb11 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4510, "is_space", tr1))(tr1)).it_b);
			tb10 = (EIF_BOOLEAN) !tb11;
		}
		if (tb10) break;
		RTHOOK(83);
		RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
		loc12++;
	}
	RTHOOK(84);
	if ((EIF_BOOLEAN) !loc14) {
		RTHOOK(85);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(4766, "wipe_out", loc1))(loc1);
		for (;;) {
			RTHOOK(86);
			tb11 = '\01';
			if (!(EIF_BOOLEAN) (loc12 > loc13)) {
				ui4_1 = loc12;
				tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
				tb12 = EIF_TEST(isdigit(tw1));
				tb11 = (EIF_BOOLEAN) !tb12;
			}
			if (tb11) break;
			RTHOOK(87);
			ui4_1 = loc12;
			tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
			uw1 = tw1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3782, "extend", loc1))(loc1, uw1x);
			RTHOOK(88);
			RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
			loc12++;
		}
		RTHOOK(89);
		tb12 = '\0';
		tb13 = '\0';
		if ((EIF_BOOLEAN) (loc12 <= loc13)) {
			ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(4797, "count", loc1));
			tb13 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
		}
		if (tb13) {
			ui4_1 = loc12;
			tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
			tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) ':';
			tb12 = (EIF_BOOLEAN)(tw1 == tw2);
		}
		if (tb12) {
			if (RTAL & CK_CHECK) {
				RTHOOK(90);
				RTCT("t.count = 2 and t.is_integer", EX_CHECK);
				tb12 = '\0';
				ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(4797, "count", loc1));
				if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L))) {
					tb13 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4670, "is_integer", loc1))(loc1)).it_b);
					tb12 = tb13;
				}
				if (tb12) {
					RTCK;
				} else {
					RTCF;
				}
			}
			RTHOOK(91);
			RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4704, "to_integer", loc1))(loc1)).it_i4);
			loc6 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(92);
			RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
			loc12++;
		} else {
			RTHOOK(93);
			RTDBGAL(14, 0x04000000, 1, 0); /* loc14 */
			loc14 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	}
	RTHOOK(94);
	if ((EIF_BOOLEAN) !loc14) {
		RTHOOK(95);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(4766, "wipe_out", loc1))(loc1);
		for (;;) {
			RTHOOK(96);
			tb12 = '\01';
			if (!(EIF_BOOLEAN) (loc12 > loc13)) {
				ui4_1 = loc12;
				tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
				tb13 = EIF_TEST(isdigit(tw1));
				tb12 = (EIF_BOOLEAN) !tb13;
			}
			if (tb12) break;
			RTHOOK(97);
			ui4_1 = loc12;
			tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
			uw1 = tw1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3782, "extend", loc1))(loc1, uw1x);
			RTHOOK(98);
			RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
			loc12++;
		}
		RTHOOK(99);
		tb13 = '\0';
		tb14 = '\0';
		if ((EIF_BOOLEAN) (loc12 <= loc13)) {
			ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(4797, "count", loc1));
			tb14 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
		}
		if (tb14) {
			ui4_1 = loc12;
			tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
			tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) ':';
			tb13 = (EIF_BOOLEAN)(tw1 == tw2);
		}
		if (tb13) {
			if (RTAL & CK_CHECK) {
				RTHOOK(100);
				RTCT("t.count = 2 and t.is_integer", EX_CHECK);
				tb13 = '\0';
				ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(4797, "count", loc1));
				if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L))) {
					tb14 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4670, "is_integer", loc1))(loc1)).it_b);
					tb13 = tb14;
				}
				if (tb13) {
					RTCK;
				} else {
					RTCF;
				}
			}
			RTHOOK(101);
			RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4704, "to_integer", loc1))(loc1)).it_i4);
			loc7 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(102);
			RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
			loc12++;
		} else {
			RTHOOK(103);
			RTDBGAL(14, 0x04000000, 1, 0); /* loc14 */
			loc14 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	}
	RTHOOK(104);
	if ((EIF_BOOLEAN) !loc14) {
		RTHOOK(105);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(4766, "wipe_out", loc1))(loc1);
		for (;;) {
			RTHOOK(106);
			tb13 = '\01';
			if (!(EIF_BOOLEAN) (loc12 > loc13)) {
				ui4_1 = loc12;
				tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
				tb14 = EIF_TEST(isdigit(tw1));
				tb13 = (EIF_BOOLEAN) !tb14;
			}
			if (tb13) break;
			RTHOOK(107);
			ui4_1 = loc12;
			tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
			uw1 = tw1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3782, "extend", loc1))(loc1, uw1x);
			RTHOOK(108);
			RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
			loc12++;
		}
		RTHOOK(109);
		tb14 = '\0';
		if ((EIF_BOOLEAN) (loc12 <= loc13)) {
			ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(4797, "count", loc1));
			tb14 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
		}
		if (tb14) {
			if (RTAL & CK_CHECK) {
				RTHOOK(110);
				RTCT("t.count = 2 and t.is_integer", EX_CHECK);
				tb14 = '\0';
				ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(4797, "count", loc1));
				if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L))) {
					tb15 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4670, "is_integer", loc1))(loc1)).it_b);
					tb14 = tb15;
				}
				if (tb14) {
					RTCK;
				} else {
					RTCF;
				}
			}
			RTHOOK(111);
			RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4704, "to_integer", loc1))(loc1)).it_i4);
			loc8 = (EIF_INTEGER_32) ti4_1;
		} else {
			RTHOOK(112);
			RTDBGAL(14, 0x04000000, 1, 0); /* loc14 */
			loc14 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	}
	RTHOOK(113);
	tb14 = '\0';
	if ((EIF_BOOLEAN) !loc14) {
		ui4_1 = loc12;
		tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
		tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '.';
		tb14 = (EIF_BOOLEAN)(tw1 == tw2);
	}
	if (tb14) {
		RTHOOK(114);
		RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
		loc12++;
		RTHOOK(115);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(4766, "wipe_out", loc1))(loc1);
		for (;;) {
			RTHOOK(116);
			tb14 = '\01';
			if (!(EIF_BOOLEAN) (loc12 > loc13)) {
				ui4_1 = loc12;
				tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
				tb15 = EIF_TEST(isdigit(tw1));
				tb14 = (EIF_BOOLEAN) !tb15;
			}
			if (tb14) break;
			RTHOOK(117);
			ui4_1 = loc12;
			tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
			uw1 = tw1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3782, "extend", loc1))(loc1, uw1x);
			RTHOOK(118);
			RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
			loc12++;
		}
		RTHOOK(119);
		tb15 = '\0';
		if ((EIF_BOOLEAN) (loc12 <= loc13)) {
			ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(4797, "count", loc1));
			tb15 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
		}
		if (tb15) {
			if (RTAL & CK_CHECK) {
				RTHOOK(120);
				RTCT("t.is_integer", EX_CHECK);
				tb15 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4670, "is_integer", loc1))(loc1)).it_b);
				if (tb15) {
					RTCK;
				} else {
					RTCF;
				}
			}
			RTHOOK(121);
			RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4704, "to_integer", loc1))(loc1)).it_i4);
			loc9 = (EIF_INTEGER_32) ti4_1;
		} else {
			RTHOOK(122);
			RTDBGAL(14, 0x04000000, 1, 0); /* loc14 */
			loc14 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	}
	RTHOOK(123);
	if ((EIF_BOOLEAN) !loc14) {
		for (;;) {
			RTHOOK(124);
			tb15 = '\01';
			if (!(EIF_BOOLEAN) (loc12 > loc13)) {
				ui4_1 = loc12;
				tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
				tr1 = RTLN(eif_new_type(290, 0x00).id);
				*(EIF_CHARACTER_32 *)tr1 = tw1;
				tb16 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4510, "is_space", tr1))(tr1)).it_b);
				tb15 = (EIF_BOOLEAN) !tb16;
			}
			if (tb15) break;
			RTHOOK(125);
			RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
			loc12++;
		}
		RTHOOK(126);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(4766, "wipe_out", loc1))(loc1);
		for (;;) {
			RTHOOK(127);
			tb16 = '\01';
			if (!(EIF_BOOLEAN) (loc12 > loc13)) {
				ui4_1 = loc12;
				tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
				tr1 = RTLN(eif_new_type(290, 0x00).id);
				*(EIF_CHARACTER_32 *)tr1 = tw1;
				tb17 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4504, "is_alpha", tr1))(tr1)).it_b);
				tb16 = (EIF_BOOLEAN) !tb17;
			}
			if (tb16) break;
			RTHOOK(128);
			ui4_1 = loc12;
			tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
			tr1 = RTLN(eif_new_type(290, 0x00).id);
			*(EIF_CHARACTER_32 *)tr1 = tw1;
			tw2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4498, "as_upper", tr1))(tr1)).it_c4);
			uw1 = tw2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3782, "extend", loc1))(loc1, uw1x);
			RTHOOK(129);
			RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
			loc12++;
		}
		RTHOOK(130);
		tb17 = '\01';
		tb18 = '\01';
		tr1 = RTMS_EX_H("GMT",3,4672852);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4698, "as_string_32", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr2);
		tb19 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4783, "same_string", loc1))(loc1, ur1x)).it_b);
		if (!tb19) {
			tr1 = RTMS_EX_H("UTC",3,5592131);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4698, "as_string_32", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr2);
			tb19 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4783, "same_string", loc1))(loc1, ur1x)).it_b);
			tb18 = tb19;
		}
		if (!tb18) {
			tb18 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4656, "is_empty", loc1))(loc1)).it_b);
			tb17 = tb18;
		}
		if (tb17) {
			for (;;) {
				RTHOOK(131);
				tb17 = '\01';
				if (!(EIF_BOOLEAN) (loc12 > loc13)) {
					ui4_1 = loc12;
					tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
					tr1 = RTLN(eif_new_type(290, 0x00).id);
					*(EIF_CHARACTER_32 *)tr1 = tw1;
					tb18 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4510, "is_space", tr1))(tr1)).it_b);
					tb17 = (EIF_BOOLEAN) !tb18;
				}
				if (tb17) break;
				RTHOOK(132);
				RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
				loc12++;
			}
			RTHOOK(133);
			if ((EIF_BOOLEAN) (loc12 <= loc13)) {
				RTHOOK(134);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(4766, "wipe_out", loc1))(loc1);
				RTHOOK(135);
				ui4_1 = loc12;
				tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
				tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '+';
				if ((EIF_BOOLEAN)(tw1 == tw2)) {
					RTHOOK(136);
					ui4_1 = loc12;
					tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
					uw1 = tw1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3782, "extend", loc1))(loc1, uw1x);
				} else {
					RTHOOK(137);
					ui4_1 = loc12;
					tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
					tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '-';
					if ((EIF_BOOLEAN)(tw1 == tw2)) {
						RTHOOK(138);
						ui4_1 = loc12;
						tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
						uw1 = tw1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3782, "extend", loc1))(loc1, uw1x);
					} else {
						RTHOOK(139);
						RTDBGAL(14, 0x04000000, 1, 0); /* loc14 */
						loc14 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					}
				}
				RTHOOK(140);
				if ((EIF_BOOLEAN) !loc14) {
					RTHOOK(141);
					RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
					loc12++;
					for (;;) {
						RTHOOK(142);
						tb18 = '\01';
						if (!(EIF_BOOLEAN) (loc12 > loc13)) {
							ui4_1 = loc12;
							tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
							tr1 = RTLN(eif_new_type(290, 0x00).id);
							*(EIF_CHARACTER_32 *)tr1 = tw1;
							tb19 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4510, "is_space", tr1))(tr1)).it_b);
							tb18 = (EIF_BOOLEAN) !tb19;
						}
						if (tb18) break;
						RTHOOK(143);
						RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
						loc12++;
					}
					for (;;) {
						RTHOOK(144);
						tb19 = '\01';
						if (!(EIF_BOOLEAN) (loc12 > loc13)) {
							ui4_1 = loc12;
							tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
							tb20 = EIF_TEST(isdigit(tw1));
							tb19 = (EIF_BOOLEAN) !tb20;
						}
						if (tb19) break;
						RTHOOK(145);
						ui4_1 = loc12;
						tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
						tr1 = RTLN(eif_new_type(290, 0x00).id);
						*(EIF_CHARACTER_32 *)tr1 = tw1;
						tw2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4498, "as_upper", tr1))(tr1)).it_c4);
						uw1 = tw2;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3782, "extend", loc1))(loc1, uw1x);
						RTHOOK(146);
						RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
						loc12++;
					}
					RTHOOK(147);
					RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4704, "to_integer", loc1))(loc1)).it_i4);
					loc11 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 * ((EIF_INTEGER_32) 60L));
					RTHOOK(148);
					tb20 = '\0';
					if ((EIF_BOOLEAN) (loc12 <= loc13)) {
						ui4_1 = loc12;
						tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
						tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) ':';
						tb20 = (EIF_BOOLEAN)(tw1 == tw2);
					}
					if (tb20) {
						RTHOOK(149);
						RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
						loc12++;
						RTHOOK(150);
						(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(4766, "wipe_out", loc1))(loc1);
						for (;;) {
							RTHOOK(151);
							tb20 = '\01';
							if (!(EIF_BOOLEAN) (loc12 > loc13)) {
								ui4_1 = loc12;
								tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
								tb21 = EIF_TEST(isdigit(tw1));
								tb20 = (EIF_BOOLEAN) !tb21;
							}
							if (tb20) break;
							RTHOOK(152);
							ui4_1 = loc12;
							tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
							tr1 = RTLN(eif_new_type(290, 0x00).id);
							*(EIF_CHARACTER_32 *)tr1 = tw1;
							tw2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4498, "as_upper", tr1))(tr1)).it_c4);
							uw1 = tw2;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3782, "extend", loc1))(loc1, uw1x);
							RTHOOK(153);
							RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
							loc12++;
						}
						RTHOOK(154);
						RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
						tr1 = RTLN(eif_new_type(338, 0x00).id);
						*(EIF_INTEGER_32 *)tr1 = loc11;
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5448, "sign", tr1))(tr1)).it_i4);
						ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4704, "to_integer", loc1))(loc1)).it_i4);
						loc11 += (EIF_INTEGER_32) (ti4_1 * ti4_2);
					}
				}
			}
		} else {
			RTHOOK(155);
			RTDBGAL(14, 0x04000000, 1, 0); /* loc14 */
			loc14 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	}
	RTHOOK(156);
	if ((EIF_BOOLEAN) !loc14) {
		if (RTAL & CK_CHECK) {
			RTHOOK(157);
			RTCT("valid_yyyy", EX_CHECK);
			if ((EIF_BOOLEAN) (((EIF_INTEGER_32) 0L) < loc5)) {
				RTCK;
			} else {
				RTCF;
			}
			RTHOOK(158);
			RTCT("valid_dd", EX_CHECK);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (((EIF_INTEGER_32) 0L) < loc4) && (EIF_BOOLEAN) (loc4 <= ((EIF_INTEGER_32) 31L)))) {
				RTCK;
			} else {
				RTCF;
			}
			RTHOOK(159);
			RTCT("valid_mo", EX_CHECK);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (((EIF_INTEGER_32) 0L) < loc10) && (EIF_BOOLEAN) (loc10 <= ((EIF_INTEGER_32) 12L)))) {
				RTCK;
			} else {
				RTCF;
			}
			RTHOOK(160);
			RTCT("valid_hh", EX_CHECK);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (((EIF_INTEGER_32) 0L) <= loc6) && (EIF_BOOLEAN) (loc6 <= ((EIF_INTEGER_32) 23L)))) {
				RTCK;
			} else {
				RTCF;
			}
			RTHOOK(161);
			RTCT("valid_mi", EX_CHECK);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (((EIF_INTEGER_32) 0L) <= loc7) && (EIF_BOOLEAN) (loc7 <= ((EIF_INTEGER_32) 59L)))) {
				RTCK;
			} else {
				RTCF;
			}
			RTHOOK(162);
			RTCT("valid_ss", EX_CHECK);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (((EIF_INTEGER_32) 0L) <= loc8) && (EIF_BOOLEAN) (loc8 <= ((EIF_INTEGER_32) 59L)))) {
				RTCK;
			} else {
				RTCF;
			}
		}
		RTHOOK(163);
		RTDBGAL(0, 0xF800018A, 0,0); /* Result */
		tr1 = RTLN(eif_new_type(394, 0x01).id);
		ui4_1 = loc5;
		ui4_2 = loc10;
		ui4_3 = loc4;
		ui4_4 = loc6;
		ui4_5 = loc7;
		ui4_6 = loc8;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6379, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ui4_5x, ui4_6x);
		RTNHOOK(163,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(164);
		if ((EIF_BOOLEAN)(loc11 != ((EIF_INTEGER_32) 0L))) {
			RTHOOK(165);
			ui4_1 = (EIF_INTEGER_32) -loc11;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6401, "minute_add", Result))(Result, ui4_1x);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(166);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(17);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef ui4_5
#undef ui4_6
#undef uw1
#undef arg1
}

/* {HTTP_DATE}.ansi_c_string_to_date_time */
EIF_TYPED_VALUE F318_6392 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "ansi_c_string_to_date_time";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc12 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc13 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc14 = (EIF_BOOLEAN) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_TYPED_VALUE ui4_5x = {{0}, SK_INT32};
#define ui4_5 ui4_5x.it_i4
	EIF_TYPED_VALUE ui4_6x = {{0}, SK_INT32};
#define ui4_6 ui4_6x.it_i4
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_BOOLEAN tb6;
	EIF_BOOLEAN tb7;
	EIF_BOOLEAN tb8;
	EIF_BOOLEAN tb9;
	EIF_BOOLEAN tb10;
	EIF_BOOLEAN tb11;
	EIF_BOOLEAN tb12;
	EIF_BOOLEAN tb13;
	EIF_BOOLEAN tb14;
	EIF_BOOLEAN tb15;
	EIF_BOOLEAN tb16;
	EIF_BOOLEAN tb17;
	EIF_BOOLEAN tb18;
	EIF_BOOLEAN tb19;
	EIF_BOOLEAN tb20;
	EIF_BOOLEAN tb21;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,loc3);
	RTLR(5,ur1);
	RTLR(6,tr2);
	RTLR(7,Result);
	RTLR(8,Current);
	RTLIU(9);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_INT32, &loc9);
	RTLU(SK_INT32, &loc10);
	RTLU(SK_INT32, &loc11);
	RTLU(SK_INT32, &loc12);
	RTLU(SK_INT32, &loc13);
	RTLU(SK_BOOL, &loc14);
	
	RTEAA(l_feature_name, 317, Current, 14, 1, 9722);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(317, Current, 9722);
	RTCC(arg1, 317, l_feature_name, 1, eif_new_type(301, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
	loc12 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(2);
	RTDBGAL(13, 0x10000000, 1, 0); /* loc13 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4678, "count", arg1))(arg1)).it_i4);
	loc13 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	RTDBGAL(1, 0xF8000132, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(306, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 4L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4639, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(3,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	for (;;) {
		RTHOOK(4);
		tb1 = '\01';
		if (!(EIF_BOOLEAN) (loc12 > loc13)) {
			ui4_1 = loc12;
			tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
			tr1 = RTLN(eif_new_type(290, 0x00).id);
			*(EIF_CHARACTER_32 *)tr1 = tw1;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4510, "is_space", tr1))(tr1)).it_b);
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) break;
		RTHOOK(5);
		RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
		loc12++;
	}
	RTHOOK(6);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(4766, "wipe_out", loc1))(loc1);
	for (;;) {
		RTHOOK(7);
		tb2 = '\01';
		if (!(EIF_BOOLEAN) (loc12 > loc13)) {
			ui4_1 = loc12;
			tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
			tr1 = RTLN(eif_new_type(290, 0x00).id);
			*(EIF_CHARACTER_32 *)tr1 = tw1;
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4504, "is_alpha", tr1))(tr1)).it_b);
			tb2 = (EIF_BOOLEAN) !tb3;
		}
		if (tb2) break;
		RTHOOK(8);
		ui4_1 = loc12;
		tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
		uw1 = tw1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3782, "extend", loc1))(loc1, uw1x);
		RTHOOK(9);
		RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
		loc12++;
	}
	RTHOOK(10);
	tb3 = '\0';
	if ((EIF_BOOLEAN) (loc12 <= loc13)) {
		ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(4797, "count", loc1));
		tb3 = (EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 3L));
	}
	if (tb3) {
		RTHOOK(11);
		RTDBGAL(2, 0xF8000132, 0, 0); /* loc2 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4700, "as_lower", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc2 = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		RTHOOK(12);
		RTDBGAL(14, 0x04000000, 1, 0); /* loc14 */
		loc14 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	for (;;) {
		RTHOOK(13);
		tb3 = '\01';
		if (!(EIF_BOOLEAN) (loc12 > loc13)) {
			ui4_1 = loc12;
			tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
			tr1 = RTLN(eif_new_type(290, 0x00).id);
			*(EIF_CHARACTER_32 *)tr1 = tw1;
			tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4510, "is_space", tr1))(tr1)).it_b);
			tb3 = (EIF_BOOLEAN) !tb4;
		}
		if (tb3) break;
		RTHOOK(14);
		RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
		loc12++;
	}
	RTHOOK(15);
	if ((EIF_BOOLEAN) !loc14) {
		RTHOOK(16);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(4766, "wipe_out", loc1))(loc1);
		for (;;) {
			RTHOOK(17);
			tb4 = '\01';
			if (!(EIF_BOOLEAN) (loc12 > loc13)) {
				ui4_1 = loc12;
				tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
				tr1 = RTLN(eif_new_type(290, 0x00).id);
				*(EIF_CHARACTER_32 *)tr1 = tw1;
				tb5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4504, "is_alpha", tr1))(tr1)).it_b);
				tb4 = (EIF_BOOLEAN) !tb5;
			}
			if (tb4) break;
			RTHOOK(18);
			ui4_1 = loc12;
			tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
			uw1 = tw1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3782, "extend", loc1))(loc1, uw1x);
			RTHOOK(19);
			RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
			loc12++;
		}
		RTHOOK(20);
		tb5 = '\0';
		if ((EIF_BOOLEAN) (loc12 <= loc13)) {
			ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(4797, "count", loc1));
			tb5 = (EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 3L));
		}
		if (tb5) {
			RTHOOK(21);
			RTDBGAL(3, 0xF8000132, 0, 0); /* loc3 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4701, "as_upper", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc3 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(22);
			ti4_1 = *(EIF_INTEGER_32 *)(loc3 + RTVA(4797, "count", loc3));
			if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 3L))) {
				RTHOOK(23);
				ui4_1 = ((EIF_INTEGER_32) 3L);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4757, "keep_head", loc3))(loc3, ui4_1x);
			}
			RTHOOK(24);
			tr1 = RTMS_EX_H("JAN",3,4866382);
			ur1 = tr1;
			tb5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4684, "same_string_general", loc3))(loc3, ur1x)).it_b);
			if (tb5) {
				RTHOOK(25);
				RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
				loc10 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			} else {
				RTHOOK(26);
				tr1 = RTMS_EX_H("FEB",3,4605250);
				ur1 = tr1;
				tb5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4684, "same_string_general", loc3))(loc3, ur1x)).it_b);
				if (tb5) {
					RTHOOK(27);
					RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
					loc10 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
				} else {
					RTHOOK(28);
					tr1 = RTMS_EX_H("MAR",3,5062994);
					ur1 = tr1;
					tb5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4684, "same_string_general", loc3))(loc3, ur1x)).it_b);
					if (tb5) {
						RTHOOK(29);
						RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
						loc10 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
					} else {
						RTHOOK(30);
						tr1 = RTMS_EX_H("APR",3,4280402);
						ur1 = tr1;
						tb5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4684, "same_string_general", loc3))(loc3, ur1x)).it_b);
						if (tb5) {
							RTHOOK(31);
							RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
							loc10 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
						} else {
							RTHOOK(32);
							tr1 = RTMS_EX_H("MAY",3,5063001);
							ur1 = tr1;
							tb5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4684, "same_string_general", loc3))(loc3, ur1x)).it_b);
							if (tb5) {
								RTHOOK(33);
								RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
								loc10 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
							} else {
								RTHOOK(34);
								tr1 = RTMS_EX_H("JUN",3,4871502);
								ur1 = tr1;
								tb5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4684, "same_string_general", loc3))(loc3, ur1x)).it_b);
								if (tb5) {
									RTHOOK(35);
									RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
									loc10 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 6L);
								} else {
									RTHOOK(36);
									tr1 = RTMS_EX_H("JUL",3,4871500);
									ur1 = tr1;
									tb5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4684, "same_string_general", loc3))(loc3, ur1x)).it_b);
									if (tb5) {
										RTHOOK(37);
										RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
										loc10 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 7L);
									} else {
										RTHOOK(38);
										tr1 = RTMS_EX_H("AUG",3,4281671);
										ur1 = tr1;
										tb5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4684, "same_string_general", loc3))(loc3, ur1x)).it_b);
										if (tb5) {
											RTHOOK(39);
											RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
											loc10 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
										} else {
											RTHOOK(40);
											tr1 = RTMS_EX_H("SEP",3,5457232);
											ur1 = tr1;
											tb5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4684, "same_string_general", loc3))(loc3, ur1x)).it_b);
											if (tb5) {
												RTHOOK(41);
												RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
												loc10 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 9L);
											} else {
												RTHOOK(42);
												tr1 = RTMS_EX_H("OCT",3,5194580);
												ur1 = tr1;
												tb5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4684, "same_string_general", loc3))(loc3, ur1x)).it_b);
												if (tb5) {
													RTHOOK(43);
													RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
													loc10 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 10L);
												} else {
													RTHOOK(44);
													tr1 = RTMS_EX_H("NOV",3,5132118);
													ur1 = tr1;
													tb5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4684, "same_string_general", loc3))(loc3, ur1x)).it_b);
													if (tb5) {
														RTHOOK(45);
														RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
														loc10 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 11L);
													} else {
														RTHOOK(46);
														tr1 = RTMS_EX_H("DEC",3,4474179);
														ur1 = tr1;
														tb5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4684, "same_string_general", loc3))(loc3, ur1x)).it_b);
														if (tb5) {
															RTHOOK(47);
															RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
															loc10 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 12L);
														} else {
															RTHOOK(48);
															RTDBGAL(14, 0x04000000, 1, 0); /* loc14 */
															loc14 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		} else {
			RTHOOK(49);
			RTDBGAL(14, 0x04000000, 1, 0); /* loc14 */
			loc14 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	}
	for (;;) {
		RTHOOK(50);
		tb5 = '\01';
		if (!(EIF_BOOLEAN) (loc12 > loc13)) {
			ui4_1 = loc12;
			tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
			tr1 = RTLN(eif_new_type(290, 0x00).id);
			*(EIF_CHARACTER_32 *)tr1 = tw1;
			tb6 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4510, "is_space", tr1))(tr1)).it_b);
			tb5 = (EIF_BOOLEAN) !tb6;
		}
		if (tb5) break;
		RTHOOK(51);
		RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
		loc12++;
	}
	RTHOOK(52);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !loc14 && (EIF_BOOLEAN) (loc12 <= loc13))) {
		RTHOOK(53);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(4766, "wipe_out", loc1))(loc1);
		for (;;) {
			RTHOOK(54);
			tb6 = '\01';
			if (!(EIF_BOOLEAN) (loc12 > loc13)) {
				ui4_1 = loc12;
				tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
				tb7 = EIF_TEST(isdigit(tw1));
				tb6 = (EIF_BOOLEAN) !tb7;
			}
			if (tb6) break;
			RTHOOK(55);
			ui4_1 = loc12;
			tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
			uw1 = tw1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3782, "extend", loc1))(loc1, uw1x);
			RTHOOK(56);
			RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
			loc12++;
		}
		RTHOOK(57);
		tb7 = '\0';
		if ((EIF_BOOLEAN) (loc12 <= loc13)) {
			ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(4797, "count", loc1));
			tb7 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
		}
		if (tb7) {
			if (RTAL & CK_CHECK) {
				RTHOOK(58);
				RTCT("t.is_integer", EX_CHECK);
				tb7 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4670, "is_integer", loc1))(loc1)).it_b);
				if (tb7) {
					RTCK;
				} else {
					RTCF;
				}
			}
			RTHOOK(59);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4704, "to_integer", loc1))(loc1)).it_i4);
			loc4 = (EIF_INTEGER_32) ti4_1;
		} else {
			RTHOOK(60);
			RTDBGAL(14, 0x04000000, 1, 0); /* loc14 */
			loc14 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	} else {
		RTHOOK(61);
		RTDBGAL(14, 0x04000000, 1, 0); /* loc14 */
		loc14 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	for (;;) {
		RTHOOK(62);
		tb7 = '\01';
		if (!(EIF_BOOLEAN) (loc12 > loc13)) {
			ui4_1 = loc12;
			tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
			tr1 = RTLN(eif_new_type(290, 0x00).id);
			*(EIF_CHARACTER_32 *)tr1 = tw1;
			tb8 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4510, "is_space", tr1))(tr1)).it_b);
			tb7 = (EIF_BOOLEAN) !tb8;
		}
		if (tb7) break;
		RTHOOK(63);
		RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
		loc12++;
	}
	RTHOOK(64);
	if ((EIF_BOOLEAN) !loc14) {
		RTHOOK(65);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(4766, "wipe_out", loc1))(loc1);
		for (;;) {
			RTHOOK(66);
			tb8 = '\01';
			if (!(EIF_BOOLEAN) (loc12 > loc13)) {
				ui4_1 = loc12;
				tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
				tb9 = EIF_TEST(isdigit(tw1));
				tb8 = (EIF_BOOLEAN) !tb9;
			}
			if (tb8) break;
			RTHOOK(67);
			ui4_1 = loc12;
			tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
			uw1 = tw1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3782, "extend", loc1))(loc1, uw1x);
			RTHOOK(68);
			RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
			loc12++;
		}
		RTHOOK(69);
		tb9 = '\0';
		tb10 = '\0';
		if ((EIF_BOOLEAN) (loc12 <= loc13)) {
			ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(4797, "count", loc1));
			tb10 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
		}
		if (tb10) {
			ui4_1 = loc12;
			tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
			tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) ':';
			tb9 = (EIF_BOOLEAN)(tw1 == tw2);
		}
		if (tb9) {
			if (RTAL & CK_CHECK) {
				RTHOOK(70);
				RTCT("t.count = 2 and t.is_integer", EX_CHECK);
				tb9 = '\0';
				ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(4797, "count", loc1));
				if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L))) {
					tb10 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4670, "is_integer", loc1))(loc1)).it_b);
					tb9 = tb10;
				}
				if (tb9) {
					RTCK;
				} else {
					RTCF;
				}
			}
			RTHOOK(71);
			RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4704, "to_integer", loc1))(loc1)).it_i4);
			loc6 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(72);
			RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
			loc12++;
		} else {
			RTHOOK(73);
			RTDBGAL(14, 0x04000000, 1, 0); /* loc14 */
			loc14 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	}
	RTHOOK(74);
	if ((EIF_BOOLEAN) !loc14) {
		RTHOOK(75);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(4766, "wipe_out", loc1))(loc1);
		for (;;) {
			RTHOOK(76);
			tb9 = '\01';
			if (!(EIF_BOOLEAN) (loc12 > loc13)) {
				ui4_1 = loc12;
				tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
				tb10 = EIF_TEST(isdigit(tw1));
				tb9 = (EIF_BOOLEAN) !tb10;
			}
			if (tb9) break;
			RTHOOK(77);
			ui4_1 = loc12;
			tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
			uw1 = tw1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3782, "extend", loc1))(loc1, uw1x);
			RTHOOK(78);
			RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
			loc12++;
		}
		RTHOOK(79);
		tb10 = '\0';
		tb11 = '\0';
		if ((EIF_BOOLEAN) (loc12 <= loc13)) {
			ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(4797, "count", loc1));
			tb11 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
		}
		if (tb11) {
			ui4_1 = loc12;
			tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
			tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) ':';
			tb10 = (EIF_BOOLEAN)(tw1 == tw2);
		}
		if (tb10) {
			if (RTAL & CK_CHECK) {
				RTHOOK(80);
				RTCT("t.count = 2 and t.is_integer", EX_CHECK);
				tb10 = '\0';
				ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(4797, "count", loc1));
				if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L))) {
					tb11 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4670, "is_integer", loc1))(loc1)).it_b);
					tb10 = tb11;
				}
				if (tb10) {
					RTCK;
				} else {
					RTCF;
				}
			}
			RTHOOK(81);
			RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4704, "to_integer", loc1))(loc1)).it_i4);
			loc7 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(82);
			RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
			loc12++;
		} else {
			RTHOOK(83);
			RTDBGAL(14, 0x04000000, 1, 0); /* loc14 */
			loc14 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	}
	RTHOOK(84);
	if ((EIF_BOOLEAN) !loc14) {
		RTHOOK(85);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(4766, "wipe_out", loc1))(loc1);
		for (;;) {
			RTHOOK(86);
			tb10 = '\01';
			if (!(EIF_BOOLEAN) (loc12 > loc13)) {
				ui4_1 = loc12;
				tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
				tb11 = EIF_TEST(isdigit(tw1));
				tb10 = (EIF_BOOLEAN) !tb11;
			}
			if (tb10) break;
			RTHOOK(87);
			ui4_1 = loc12;
			tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
			uw1 = tw1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3782, "extend", loc1))(loc1, uw1x);
			RTHOOK(88);
			RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
			loc12++;
		}
		RTHOOK(89);
		tb11 = '\0';
		if ((EIF_BOOLEAN) (loc12 <= loc13)) {
			ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(4797, "count", loc1));
			tb11 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
		}
		if (tb11) {
			if (RTAL & CK_CHECK) {
				RTHOOK(90);
				RTCT("t.count = 2 and t.is_integer", EX_CHECK);
				tb11 = '\0';
				ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(4797, "count", loc1));
				if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L))) {
					tb12 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4670, "is_integer", loc1))(loc1)).it_b);
					tb11 = tb12;
				}
				if (tb11) {
					RTCK;
				} else {
					RTCF;
				}
			}
			RTHOOK(91);
			RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4704, "to_integer", loc1))(loc1)).it_i4);
			loc8 = (EIF_INTEGER_32) ti4_1;
		} else {
			RTHOOK(92);
			RTDBGAL(14, 0x04000000, 1, 0); /* loc14 */
			loc14 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	}
	RTHOOK(93);
	tb11 = '\0';
	if ((EIF_BOOLEAN) !loc14) {
		ui4_1 = loc12;
		tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
		tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '.';
		tb11 = (EIF_BOOLEAN)(tw1 == tw2);
	}
	if (tb11) {
		RTHOOK(94);
		RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
		loc12++;
		RTHOOK(95);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(4766, "wipe_out", loc1))(loc1);
		for (;;) {
			RTHOOK(96);
			tb11 = '\01';
			if (!(EIF_BOOLEAN) (loc12 > loc13)) {
				ui4_1 = loc12;
				tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
				tb12 = EIF_TEST(isdigit(tw1));
				tb11 = (EIF_BOOLEAN) !tb12;
			}
			if (tb11) break;
			RTHOOK(97);
			ui4_1 = loc12;
			tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
			uw1 = tw1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3782, "extend", loc1))(loc1, uw1x);
			RTHOOK(98);
			RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
			loc12++;
		}
		RTHOOK(99);
		tb12 = '\0';
		if ((EIF_BOOLEAN) (loc12 <= loc13)) {
			ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(4797, "count", loc1));
			tb12 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
		}
		if (tb12) {
			if (RTAL & CK_CHECK) {
				RTHOOK(100);
				RTCT("t.is_integer", EX_CHECK);
				tb12 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4670, "is_integer", loc1))(loc1)).it_b);
				if (tb12) {
					RTCK;
				} else {
					RTCF;
				}
			}
			RTHOOK(101);
			RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4704, "to_integer", loc1))(loc1)).it_i4);
			loc9 = (EIF_INTEGER_32) ti4_1;
		} else {
			RTHOOK(102);
			RTDBGAL(14, 0x04000000, 1, 0); /* loc14 */
			loc14 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	}
	for (;;) {
		RTHOOK(103);
		tb12 = '\01';
		if (!(EIF_BOOLEAN) (loc12 > loc13)) {
			ui4_1 = loc12;
			tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
			tr1 = RTLN(eif_new_type(290, 0x00).id);
			*(EIF_CHARACTER_32 *)tr1 = tw1;
			tb13 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4510, "is_space", tr1))(tr1)).it_b);
			tb12 = (EIF_BOOLEAN) !tb13;
		}
		if (tb12) break;
		RTHOOK(104);
		RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
		loc12++;
	}
	RTHOOK(105);
	if ((EIF_BOOLEAN) !loc14) {
		RTHOOK(106);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(4766, "wipe_out", loc1))(loc1);
		for (;;) {
			RTHOOK(107);
			tb13 = '\01';
			if (!(EIF_BOOLEAN) (loc12 > loc13)) {
				ui4_1 = loc12;
				tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
				tb14 = EIF_TEST(isdigit(tw1));
				tb13 = (EIF_BOOLEAN) !tb14;
			}
			if (tb13) break;
			RTHOOK(108);
			ui4_1 = loc12;
			tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
			uw1 = tw1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3782, "extend", loc1))(loc1, uw1x);
			RTHOOK(109);
			RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
			loc12++;
		}
		RTHOOK(110);
		ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(4797, "count", loc1));
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
			if (RTAL & CK_CHECK) {
				RTHOOK(111);
				RTCT("t.count = 4 or t.count = 2 and t.is_integer", EX_CHECK);
				tb14 = '\01';
				ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(4797, "count", loc1));
				if (!(EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 4L))) {
					tb15 = '\0';
					ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(4797, "count", loc1));
					if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L))) {
						tb16 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4670, "is_integer", loc1))(loc1)).it_b);
						tb15 = tb16;
					}
					tb14 = tb15;
				}
				if (tb14) {
					RTCK;
				} else {
					RTCF;
				}
			}
			RTHOOK(112);
			RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4704, "to_integer", loc1))(loc1)).it_i4);
			loc5 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(113);
			ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(4797, "count", loc1));
			if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L))) {
				RTHOOK(114);
				RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
				loc5 += ((EIF_INTEGER_32) 1900L);
			}
		} else {
			RTHOOK(115);
			RTDBGAL(14, 0x04000000, 1, 0); /* loc14 */
			loc14 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	}
	for (;;) {
		RTHOOK(116);
		tb14 = '\01';
		if (!(EIF_BOOLEAN) (loc12 > loc13)) {
			ui4_1 = loc12;
			tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
			tr1 = RTLN(eif_new_type(290, 0x00).id);
			*(EIF_CHARACTER_32 *)tr1 = tw1;
			tb15 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4510, "is_space", tr1))(tr1)).it_b);
			tb14 = (EIF_BOOLEAN) !tb15;
		}
		if (tb14) break;
		RTHOOK(117);
		RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
		loc12++;
	}
	RTHOOK(118);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc12 <= loc13) && (EIF_BOOLEAN) !loc14)) {
		for (;;) {
			RTHOOK(119);
			tb15 = '\01';
			if (!(EIF_BOOLEAN) (loc12 > loc13)) {
				ui4_1 = loc12;
				tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
				tr1 = RTLN(eif_new_type(290, 0x00).id);
				*(EIF_CHARACTER_32 *)tr1 = tw1;
				tb16 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4510, "is_space", tr1))(tr1)).it_b);
				tb15 = (EIF_BOOLEAN) !tb16;
			}
			if (tb15) break;
			RTHOOK(120);
			RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
			loc12++;
		}
		RTHOOK(121);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(4766, "wipe_out", loc1))(loc1);
		for (;;) {
			RTHOOK(122);
			tb16 = '\01';
			if (!(EIF_BOOLEAN) (loc12 > loc13)) {
				ui4_1 = loc12;
				tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
				tr1 = RTLN(eif_new_type(290, 0x00).id);
				*(EIF_CHARACTER_32 *)tr1 = tw1;
				tb17 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4504, "is_alpha", tr1))(tr1)).it_b);
				tb16 = (EIF_BOOLEAN) !tb17;
			}
			if (tb16) break;
			RTHOOK(123);
			ui4_1 = loc12;
			tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
			tr1 = RTLN(eif_new_type(290, 0x00).id);
			*(EIF_CHARACTER_32 *)tr1 = tw1;
			tw2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4498, "as_upper", tr1))(tr1)).it_c4);
			uw1 = tw2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3782, "extend", loc1))(loc1, uw1x);
			RTHOOK(124);
			RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
			loc12++;
		}
		RTHOOK(125);
		tb17 = '\01';
		tr1 = RTMS_EX_H("GMT",3,4672852);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4698, "as_string_32", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr2);
		tb18 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4783, "same_string", loc1))(loc1, ur1x)).it_b);
		if (!tb18) {
			tr1 = RTMS_EX_H("UTC",3,5592131);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4698, "as_string_32", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr2);
			tb18 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4783, "same_string", loc1))(loc1, ur1x)).it_b);
			tb17 = tb18;
		}
		if (tb17) {
			for (;;) {
				RTHOOK(126);
				tb17 = '\01';
				if (!(EIF_BOOLEAN) (loc12 > loc13)) {
					ui4_1 = loc12;
					tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
					tr1 = RTLN(eif_new_type(290, 0x00).id);
					*(EIF_CHARACTER_32 *)tr1 = tw1;
					tb18 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4510, "is_space", tr1))(tr1)).it_b);
					tb17 = (EIF_BOOLEAN) !tb18;
				}
				if (tb17) break;
				RTHOOK(127);
				RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
				loc12++;
			}
			RTHOOK(128);
			if ((EIF_BOOLEAN) (loc12 <= loc13)) {
				RTHOOK(129);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(4766, "wipe_out", loc1))(loc1);
				RTHOOK(130);
				ui4_1 = loc12;
				tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
				tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '+';
				if ((EIF_BOOLEAN)(tw1 == tw2)) {
					RTHOOK(131);
					ui4_1 = loc12;
					tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
					uw1 = tw1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3782, "extend", loc1))(loc1, uw1x);
				} else {
					RTHOOK(132);
					ui4_1 = loc12;
					tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
					tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '-';
					if ((EIF_BOOLEAN)(tw1 == tw2)) {
						RTHOOK(133);
						ui4_1 = loc12;
						tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
						uw1 = tw1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3782, "extend", loc1))(loc1, uw1x);
					} else {
						RTHOOK(134);
						RTDBGAL(14, 0x04000000, 1, 0); /* loc14 */
						loc14 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					}
				}
				RTHOOK(135);
				if ((EIF_BOOLEAN) !loc14) {
					RTHOOK(136);
					RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
					loc12++;
					for (;;) {
						RTHOOK(137);
						tb18 = '\01';
						if (!(EIF_BOOLEAN) (loc12 > loc13)) {
							ui4_1 = loc12;
							tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
							tr1 = RTLN(eif_new_type(290, 0x00).id);
							*(EIF_CHARACTER_32 *)tr1 = tw1;
							tb19 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4510, "is_space", tr1))(tr1)).it_b);
							tb18 = (EIF_BOOLEAN) !tb19;
						}
						if (tb18) break;
						RTHOOK(138);
						RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
						loc12++;
					}
					for (;;) {
						RTHOOK(139);
						tb19 = '\01';
						if (!(EIF_BOOLEAN) (loc12 > loc13)) {
							ui4_1 = loc12;
							tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
							tb20 = EIF_TEST(isdigit(tw1));
							tb19 = (EIF_BOOLEAN) !tb20;
						}
						if (tb19) break;
						RTHOOK(140);
						ui4_1 = loc12;
						tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
						tr1 = RTLN(eif_new_type(290, 0x00).id);
						*(EIF_CHARACTER_32 *)tr1 = tw1;
						tw2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4498, "as_upper", tr1))(tr1)).it_c4);
						uw1 = tw2;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3782, "extend", loc1))(loc1, uw1x);
						RTHOOK(141);
						RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
						loc12++;
					}
					RTHOOK(142);
					RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4704, "to_integer", loc1))(loc1)).it_i4);
					loc11 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 * ((EIF_INTEGER_32) 60L));
					RTHOOK(143);
					tb20 = '\0';
					if ((EIF_BOOLEAN) (loc12 <= loc13)) {
						ui4_1 = loc12;
						tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
						tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) ':';
						tb20 = (EIF_BOOLEAN)(tw1 == tw2);
					}
					if (tb20) {
						RTHOOK(144);
						RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
						loc12++;
						RTHOOK(145);
						(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(4766, "wipe_out", loc1))(loc1);
						for (;;) {
							RTHOOK(146);
							tb20 = '\01';
							if (!(EIF_BOOLEAN) (loc12 > loc13)) {
								ui4_1 = loc12;
								tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
								tb21 = EIF_TEST(isdigit(tw1));
								tb20 = (EIF_BOOLEAN) !tb21;
							}
							if (tb20) break;
							RTHOOK(147);
							ui4_1 = loc12;
							tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
							tr1 = RTLN(eif_new_type(290, 0x00).id);
							*(EIF_CHARACTER_32 *)tr1 = tw1;
							tw2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4498, "as_upper", tr1))(tr1)).it_c4);
							uw1 = tw2;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3782, "extend", loc1))(loc1, uw1x);
							RTHOOK(148);
							RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
							loc12++;
						}
						RTHOOK(149);
						RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
						tr1 = RTLN(eif_new_type(338, 0x00).id);
						*(EIF_INTEGER_32 *)tr1 = loc11;
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5448, "sign", tr1))(tr1)).it_i4);
						ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4704, "to_integer", loc1))(loc1)).it_i4);
						loc11 += (EIF_INTEGER_32) (ti4_1 * ti4_2);
					}
				}
			}
		} else {
			RTHOOK(150);
			RTDBGAL(14, 0x04000000, 1, 0); /* loc14 */
			loc14 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	}
	RTHOOK(151);
	if ((EIF_BOOLEAN) !loc14) {
		if (RTAL & CK_CHECK) {
			RTHOOK(152);
			RTCT("valid_yyyy", EX_CHECK);
			if ((EIF_BOOLEAN) (((EIF_INTEGER_32) 0L) < loc5)) {
				RTCK;
			} else {
				RTCF;
			}
			RTHOOK(153);
			RTCT("valid_dd", EX_CHECK);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (((EIF_INTEGER_32) 0L) < loc4) && (EIF_BOOLEAN) (loc4 <= ((EIF_INTEGER_32) 31L)))) {
				RTCK;
			} else {
				RTCF;
			}
			RTHOOK(154);
			RTCT("valid_mo", EX_CHECK);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (((EIF_INTEGER_32) 0L) < loc10) && (EIF_BOOLEAN) (loc10 <= ((EIF_INTEGER_32) 12L)))) {
				RTCK;
			} else {
				RTCF;
			}
			RTHOOK(155);
			RTCT("valid_hh", EX_CHECK);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (((EIF_INTEGER_32) 0L) <= loc6) && (EIF_BOOLEAN) (loc6 <= ((EIF_INTEGER_32) 23L)))) {
				RTCK;
			} else {
				RTCF;
			}
			RTHOOK(156);
			RTCT("valid_mi", EX_CHECK);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (((EIF_INTEGER_32) 0L) <= loc7) && (EIF_BOOLEAN) (loc7 <= ((EIF_INTEGER_32) 59L)))) {
				RTCK;
			} else {
				RTCF;
			}
			RTHOOK(157);
			RTCT("valid_ss", EX_CHECK);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (((EIF_INTEGER_32) 0L) <= loc8) && (EIF_BOOLEAN) (loc8 <= ((EIF_INTEGER_32) 59L)))) {
				RTCK;
			} else {
				RTCF;
			}
		}
		RTHOOK(158);
		RTDBGAL(0, 0xF800018A, 0,0); /* Result */
		tr1 = RTLN(eif_new_type(394, 0x01).id);
		ui4_1 = loc5;
		ui4_2 = loc10;
		ui4_3 = loc4;
		ui4_4 = loc6;
		ui4_5 = loc7;
		ui4_6 = loc8;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6379, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ui4_5x, ui4_6x);
		RTNHOOK(158,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(159);
		if ((EIF_BOOLEAN)(loc11 != ((EIF_INTEGER_32) 0L))) {
			RTHOOK(160);
			ui4_1 = (EIF_INTEGER_32) -loc11;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6401, "minute_add", Result))(Result, ui4_1x);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(161);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(17);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef ui4_5
#undef ui4_6
#undef uw1
#undef arg1
}

/* {HTTP_DATE}.rfc3339_string_to_date_time */
EIF_TYPED_VALUE F318_6393 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "rfc3339_string_to_date_time";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc12 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc13 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc14 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc15 = (EIF_BOOLEAN) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_TYPED_VALUE ui4_5x = {{0}, SK_INT32};
#define ui4_5 ui4_5x.it_i4
	EIF_TYPED_VALUE ui4_6x = {{0}, SK_INT32};
#define ui4_6 ui4_6x.it_i4
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,loc10);
	RTLR(3,Result);
	RTLR(4,Current);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_INT32, &loc9);
	RTLU(SK_REF, &loc10);
	RTLU(SK_INT32, &loc11);
	RTLU(SK_INT32, &loc12);
	RTLU(SK_INT32, &loc13);
	RTLU(SK_INT32, &loc14);
	RTLU(SK_BOOL, &loc15);
	
	RTEAA(l_feature_name, 317, Current, 15, 1, 9723);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(317, Current, 9723);
	RTCC(arg1, 317, l_feature_name, 1, eif_new_type(301, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		RTHOOK(2);
		RTDBGAL(14, 0x10000000, 1, 0); /* loc14 */
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'T';
		uw1 = tw1;
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4643, "index_of", arg1))(arg1, uw1x, ui4_1x)).it_i4);
		loc14 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(3);
		if ((EIF_BOOLEAN) (loc14 > ((EIF_INTEGER_32) 0L))) {
			RTHOOK(4);
			RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
			loc11 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			RTHOOK(5);
			RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
			tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '-';
			uw1 = tw1;
			ui4_1 = loc11;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4643, "index_of", arg1))(arg1, uw1x, ui4_1x)).it_i4);
			loc12 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(6);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc12 > loc11) && (EIF_BOOLEAN) (loc12 < loc14))) {
				RTHOOK(7);
				RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
				ui4_1 = loc11;
				ui4_2 = (EIF_INTEGER_32) (loc12 - ((EIF_INTEGER_32) 1L));
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4719, "substring", arg1))(arg1, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4704, "to_integer", tr1))(tr1)).it_i4);
				loc1 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(8);
				RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
				loc11 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc12 + ((EIF_INTEGER_32) 1L));
				RTHOOK(9);
				RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '-';
				uw1 = tw1;
				ui4_1 = loc11;
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4643, "index_of", arg1))(arg1, uw1x, ui4_1x)).it_i4);
				loc12 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(10);
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc12 > loc11) && (EIF_BOOLEAN) (loc12 < loc14))) {
					RTHOOK(11);
					RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
					ui4_1 = loc11;
					ui4_2 = (EIF_INTEGER_32) (loc12 - ((EIF_INTEGER_32) 1L));
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4719, "substring", arg1))(arg1, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4704, "to_integer", tr1))(tr1)).it_i4);
					loc2 = (EIF_INTEGER_32) ti4_1;
					RTHOOK(12);
					RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
					ui4_1 = (EIF_INTEGER_32) (loc12 + ((EIF_INTEGER_32) 1L));
					ui4_2 = (EIF_INTEGER_32) (loc14 - ((EIF_INTEGER_32) 1L));
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4719, "substring", arg1))(arg1, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4704, "to_integer", tr1))(tr1)).it_i4);
					loc3 = (EIF_INTEGER_32) ti4_1;
				} else {
					RTHOOK(13);
					RTDBGAL(15, 0x04000000, 1, 0); /* loc15 */
					loc15 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				}
			} else {
				RTHOOK(14);
				RTDBGAL(15, 0x04000000, 1, 0); /* loc15 */
				loc15 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
			RTHOOK(15);
			RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
			loc11 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc14 + ((EIF_INTEGER_32) 1L));
			RTHOOK(16);
			RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
			tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) ':';
			uw1 = tw1;
			ui4_1 = loc11;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4643, "index_of", arg1))(arg1, uw1x, ui4_1x)).it_i4);
			loc12 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(17);
			if ((EIF_BOOLEAN) (loc12 > loc11)) {
				RTHOOK(18);
				RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
				ui4_1 = loc11;
				ui4_2 = (EIF_INTEGER_32) (loc12 - ((EIF_INTEGER_32) 1L));
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4719, "substring", arg1))(arg1, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4704, "to_integer", tr1))(tr1)).it_i4);
				loc4 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(19);
				RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
				loc11 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc12 + ((EIF_INTEGER_32) 1L));
				RTHOOK(20);
				RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) ':';
				uw1 = tw1;
				ui4_1 = loc11;
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4643, "index_of", arg1))(arg1, uw1x, ui4_1x)).it_i4);
				loc12 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(21);
				if ((EIF_BOOLEAN) (loc12 > loc11)) {
					RTHOOK(22);
					RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
					ui4_1 = loc11;
					ui4_2 = (EIF_INTEGER_32) (loc12 - ((EIF_INTEGER_32) 1L));
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4719, "substring", arg1))(arg1, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4704, "to_integer", tr1))(tr1)).it_i4);
					loc5 = (EIF_INTEGER_32) ti4_1;
					RTHOOK(23);
					RTDBGAL(13, 0x10000000, 1, 0); /* loc13 */
					loc13 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc12 + ((EIF_INTEGER_32) 1L));
					for (;;) {
						RTHOOK(24);
						tb1 = '\01';
						tb2 = '\01';
						tb3 = '\01';
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4678, "count", arg1))(arg1)).it_i4);
						if (!(EIF_BOOLEAN) (loc13 > ti4_1)) {
							ui4_1 = loc13;
							tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
							tr1 = RTLN(eif_new_type(290, 0x00).id);
							*(EIF_CHARACTER_32 *)tr1 = tw1;
							tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4504, "is_alpha", tr1))(tr1)).it_b);
							tb3 = tb4;
						}
						if (!tb3) {
							ui4_1 = loc13;
							tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
							tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '+';
							tb2 = (EIF_BOOLEAN)(tw1 == tw2);
						}
						if (!tb2) {
							ui4_1 = loc13;
							tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
							tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '-';
							tb1 = (EIF_BOOLEAN)(tw1 == tw2);
						}
						if (tb1) break;
						RTHOOK(25);
						RTDBGAL(13, 0x10000000, 1, 0); /* loc13 */
						loc13++;
					}
					RTHOOK(26);
					RTDBGAL(10, 0xF800012D, 0, 0); /* loc10 */
					ui4_1 = (EIF_INTEGER_32) (loc12 + ((EIF_INTEGER_32) 1L));
					ui4_2 = (EIF_INTEGER_32) (loc13 - ((EIF_INTEGER_32) 1L));
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4719, "substring", arg1))(arg1, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					loc10 = (EIF_REFERENCE) RTCCL(tr1);
					RTHOOK(27);
					RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
					tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '.';
					uw1 = tw1;
					ui4_1 = ((EIF_INTEGER_32) 1L);
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4643, "index_of", loc10))(loc10, uw1x, ui4_1x)).it_i4);
					loc12 = (EIF_INTEGER_32) ti4_1;
					RTHOOK(28);
					if ((EIF_BOOLEAN) (loc12 > ((EIF_INTEGER_32) 0L))) {
						RTHOOK(29);
						RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
						ui4_1 = (EIF_INTEGER_32) (loc12 - ((EIF_INTEGER_32) 1L));
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4720, "head", loc10))(loc10, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4704, "to_integer", tr1))(tr1)).it_i4);
						loc6 = (EIF_INTEGER_32) ti4_1;
						RTHOOK(30);
						RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
						ui4_1 = (EIF_INTEGER_32) (loc12 + ((EIF_INTEGER_32) 1L));
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4678, "count", loc10))(loc10)).it_i4);
						ui4_2 = ti4_1;
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4719, "substring", loc10))(loc10, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4704, "to_integer", tr1))(tr1)).it_i4);
						loc7 = (EIF_INTEGER_32) ti4_1;
					} else {
						RTHOOK(31);
						RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4704, "to_integer", loc10))(loc10)).it_i4);
						loc6 = (EIF_INTEGER_32) ti4_1;
					}
					RTHOOK(32);
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4678, "count", arg1))(arg1)).it_i4);
					if ((EIF_BOOLEAN) (loc13 <= ti4_1)) {
						RTHOOK(33);
						ui4_1 = loc13;
						tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
						tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '+';
						if ((EIF_BOOLEAN)(tw1 == tw2)) {
							RTHOOK(34);
							RTDBGAL(10, 0xF800012D, 0, 0); /* loc10 */
							ui4_1 = (EIF_INTEGER_32) (loc13 + ((EIF_INTEGER_32) 1L));
							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4678, "count", arg1))(arg1)).it_i4);
							ui4_2 = ti4_1;
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4719, "substring", arg1))(arg1, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							loc10 = (EIF_REFERENCE) RTCCL(tr1);
							RTHOOK(35);
							RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
							tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) ':';
							uw1 = tw1;
							ui4_1 = ((EIF_INTEGER_32) 1L);
							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4643, "index_of", loc10))(loc10, uw1x, ui4_1x)).it_i4);
							loc12 = (EIF_INTEGER_32) ti4_1;
							RTHOOK(36);
							if ((EIF_BOOLEAN) (loc12 > ((EIF_INTEGER_32) 0L))) {
								RTHOOK(37);
								RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
								ui4_1 = (EIF_INTEGER_32) (loc12 - ((EIF_INTEGER_32) 1L));
								tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4720, "head", loc10))(loc10, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
								ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4704, "to_integer", tr1))(tr1)).it_i4);
								loc8 = (EIF_INTEGER_32) (EIF_INTEGER_32) -ti4_1;
								RTHOOK(38);
								RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
								ui4_1 = (EIF_INTEGER_32) (loc12 + ((EIF_INTEGER_32) 1L));
								ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4678, "count", loc10))(loc10)).it_i4);
								ui4_2 = ti4_1;
								tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4719, "substring", loc10))(loc10, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
								ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4704, "to_integer", tr1))(tr1)).it_i4);
								loc9 = (EIF_INTEGER_32) (EIF_INTEGER_32) -ti4_1;
							} else {
								RTHOOK(39);
								RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
								ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4704, "to_integer", loc10))(loc10)).it_i4);
								loc8 = (EIF_INTEGER_32) (EIF_INTEGER_32) -ti4_1;
							}
						} else {
							RTHOOK(40);
							ui4_1 = loc13;
							tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
							tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '-';
							if ((EIF_BOOLEAN)(tw1 == tw2)) {
								RTHOOK(41);
								RTDBGAL(10, 0xF800012D, 0, 0); /* loc10 */
								ui4_1 = (EIF_INTEGER_32) (loc13 + ((EIF_INTEGER_32) 1L));
								ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4678, "count", arg1))(arg1)).it_i4);
								ui4_2 = ti4_1;
								tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4719, "substring", arg1))(arg1, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
								loc10 = (EIF_REFERENCE) RTCCL(tr1);
								RTHOOK(42);
								RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
								tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) ':';
								uw1 = tw1;
								ui4_1 = ((EIF_INTEGER_32) 1L);
								ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4643, "index_of", loc10))(loc10, uw1x, ui4_1x)).it_i4);
								loc12 = (EIF_INTEGER_32) ti4_1;
								RTHOOK(43);
								if ((EIF_BOOLEAN) (loc12 > ((EIF_INTEGER_32) 0L))) {
									RTHOOK(44);
									RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
									ui4_1 = (EIF_INTEGER_32) (loc12 - ((EIF_INTEGER_32) 1L));
									tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4720, "head", loc10))(loc10, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
									ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4704, "to_integer", tr1))(tr1)).it_i4);
									loc8 = (EIF_INTEGER_32) (EIF_INTEGER_32) ti4_1;
									RTHOOK(45);
									RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
									ui4_1 = (EIF_INTEGER_32) (loc12 + ((EIF_INTEGER_32) 1L));
									ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4678, "count", loc10))(loc10)).it_i4);
									ui4_2 = ti4_1;
									tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4719, "substring", loc10))(loc10, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
									ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4704, "to_integer", tr1))(tr1)).it_i4);
									loc9 = (EIF_INTEGER_32) (EIF_INTEGER_32) ti4_1;
								} else {
									RTHOOK(46);
									RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
									ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4704, "to_integer", loc10))(loc10)).it_i4);
									loc8 = (EIF_INTEGER_32) (EIF_INTEGER_32) ti4_1;
								}
							} else {
								RTHOOK(47);
								ui4_1 = loc13;
								tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4642, "item", arg1))(arg1, ui4_1x)).it_c4);
								tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'Z';
								if ((EIF_BOOLEAN)(tw1 == tw2)) {
								}
							}
						}
					}
				} else {
					RTHOOK(48);
					RTDBGAL(15, 0x04000000, 1, 0); /* loc15 */
					loc15 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				}
			} else {
				RTHOOK(49);
				RTDBGAL(15, 0x04000000, 1, 0); /* loc15 */
				loc15 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
			RTHOOK(50);
			if ((EIF_BOOLEAN) !loc15) {
				RTHOOK(51);
				RTDBGAL(0, 0xF800018A, 0,0); /* Result */
				tr1 = RTLN(eif_new_type(394, 0x01).id);
				ui4_1 = loc1;
				ui4_2 = loc2;
				ui4_3 = loc3;
				ui4_4 = loc4;
				ui4_5 = loc5;
				ui4_6 = loc6;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6379, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ui4_5x, ui4_6x);
				RTNHOOK(51,1);
				Result = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(52);
				if ((EIF_BOOLEAN)(loc7 != ((EIF_INTEGER_32) 0L))) {
					RTHOOK(53);
					tr8_1 = (EIF_REAL_64) (loc7);
					ur8_1 = tr8_1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1274, "set_fractionals", Result))(Result, ur8_1x);
					RTHOOK(54);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1318, "time", Result))(Result)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					tr8_1 = (EIF_REAL_64) (loc7);
					ur8_1 = tr8_1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1274, "set_fractionals", tr1))(tr1, ur8_1x);
				}
				RTHOOK(55);
				if ((EIF_BOOLEAN)(loc8 != ((EIF_INTEGER_32) 0L))) {
					RTHOOK(56);
					ui4_1 = loc8;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6400, "hour_add", Result))(Result, ui4_1x);
				}
				RTHOOK(57);
				if ((EIF_BOOLEAN)(loc9 != ((EIF_INTEGER_32) 0L))) {
					RTHOOK(58);
					ui4_1 = loc9;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6401, "minute_add", Result))(Result, ui4_1x);
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(59);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(18);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur8_1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef ui4_5
#undef ui4_6
#undef uw1
#undef arg1
}

void EIF_Minit318 (void)
{
	GTCX
	RTOTS (6364,F318_6364)
}


#ifdef __cplusplus
}
#endif
