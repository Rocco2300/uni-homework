/*
 * Code for class FORMAT_DOUBLE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F385_7986(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F385_7987(EIF_REFERENCE);
extern EIF_TYPED_VALUE F385_7988(EIF_REFERENCE);
extern EIF_TYPED_VALUE F385_7989(EIF_REFERENCE);
extern EIF_TYPED_VALUE F385_7990(EIF_REFERENCE);
extern EIF_TYPED_VALUE F385_7991(EIF_REFERENCE);
extern void F385_7992(EIF_REFERENCE);
extern void F385_7993(EIF_REFERENCE);
extern void F385_7994(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F385_7995(EIF_REFERENCE);
extern void F385_7996(EIF_REFERENCE);
extern void F385_7997(EIF_REFERENCE);
extern void F385_7998(EIF_REFERENCE);
extern void F385_7999(EIF_REFERENCE);
extern void F385_8000(EIF_REFERENCE);
extern void F385_8001(EIF_REFERENCE);
extern void F385_8002(EIF_REFERENCE);
extern void F385_8003(EIF_REFERENCE);
extern EIF_TYPED_VALUE F385_8004(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F385_8005(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F385_8006(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F385_8358(EIF_REFERENCE, int);
extern void EIF_Minit385(void);

#ifdef __cplusplus
}
#endif

#include <math.h>
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

/* {FORMAT_DOUBLE}.make */
void F385_7986 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 384, Current, 0, 2, 13799);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(384, Current, 13799);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("reasonable_field", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("reasonable_decimals", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= arg1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ui4_1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(692, dtype))(Current, ui4_1x);
	RTHOOK(4);
	RTDBGAA(Current, dtype, 6163, 0x10000000, 1); /* decimals */
	*(EIF_INTEGER_32 *)(Current + RTWA(6163, dtype)) = (EIF_INTEGER_32) arg2;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 6166, 0x08000000, 1); /* decimal */
	*(EIF_CHARACTER_8 *)(Current + RTWA(6166, dtype)) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '.';
	RTHOOK(6);
	RTDBGAA(Current, dtype, 6165, 0x04000000, 1); /* trailing_zeros_shown */
	*(EIF_BOOLEAN *)(Current + RTWA(6165, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("blank_fill", EX_POST);
		tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(693, dtype));
		if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) ' ')) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("show_sign_negative", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(705, dtype))(Current)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("no_separator", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(709, dtype))(Current)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("width_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(694, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("right_justified", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(703, dtype))(Current)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("leading_sign", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(710, dtype))(Current)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("decimals_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6163, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(14);
		RTCT("decimal_point", EX_POST);
		tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(6166, dtype));
		if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '.')) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(15);
		RTCT("trailing_zeros_shown", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(6165, dtype));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(16);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef ui4_1
#undef arg2
#undef arg1
}

/* {FORMAT_DOUBLE}.after_decimal_separate */
EIF_TYPED_VALUE F385_7987 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(6162,Dtype(Current)));
	return r;
}


/* {FORMAT_DOUBLE}.decimals */
EIF_TYPED_VALUE F385_7988 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(6163,Dtype(Current)));
	return r;
}


/* {FORMAT_DOUBLE}.zero_not_shown */
EIF_TYPED_VALUE F385_7989 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(6164,Dtype(Current)));
	return r;
}


/* {FORMAT_DOUBLE}.trailing_zeros_shown */
EIF_TYPED_VALUE F385_7990 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(6165,Dtype(Current)));
	return r;
}


/* {FORMAT_DOUBLE}.decimal */
EIF_TYPED_VALUE F385_7991 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = *(EIF_CHARACTER_8 *)(Current + RTWA(6166,Dtype(Current)));
	return r;
}


/* {FORMAT_DOUBLE}.point_decimal */
void F385_7992 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "point_decimal";
	RTEX;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 384, Current, 0, 0, 13805);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(384, Current, 13805);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 6166, 0x08000000, 1); /* decimal */
	*(EIF_CHARACTER_8 *)(Current + RTWA(6166, dtype)) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '.';
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("decimal = \'.\'", EX_POST);
		tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(6166, dtype));
		if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '.')) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {FORMAT_DOUBLE}.comma_decimal */
void F385_7993 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "comma_decimal";
	RTEX;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 384, Current, 0, 0, 13806);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(384, Current, 13806);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 6166, 0x08000000, 1); /* decimal */
	*(EIF_CHARACTER_8 *)(Current + RTWA(6166, dtype)) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) ',';
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("decimal = \',\'", EX_POST);
		tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(6166, dtype));
		if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) ',')) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {FORMAT_DOUBLE}.set_decimals */
void F385_7994 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_decimals";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 384, Current, 0, 1, 13807);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(384, Current, 13807);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("d <= width", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(694, dtype));
		RTTE((EIF_BOOLEAN) (arg1 <= ti4_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 6163, 0x10000000, 1); /* decimals */
	*(EIF_INTEGER_32 *)(Current + RTWA(6163, dtype)) = (EIF_INTEGER_32) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("decimals = d", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6163, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {FORMAT_DOUBLE}.separate_after_decimal */
void F385_7995 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "separate_after_decimal";
	RTEX;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 384, Current, 0, 0, 13808);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(384, Current, 13808);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 6162, 0x04000000, 1); /* after_decimal_separate */
	*(EIF_BOOLEAN *)(Current + RTWA(6162, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("after_decimal_separate", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(6162, dtype));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {FORMAT_DOUBLE}.no_separate_after_decimal */
void F385_7996 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "no_separate_after_decimal";
	RTEX;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 384, Current, 0, 0, 13809);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(384, Current, 13809);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 6162, 0x04000000, 1); /* after_decimal_separate */
	*(EIF_BOOLEAN *)(Current + RTWA(6162, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("not after_decimal_separate", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(6162, dtype));
		if ((EIF_BOOLEAN) !tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {FORMAT_DOUBLE}.underscore_separate */
void F385_7997 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "underscore_separate";
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 384, Current, 0, 0, 13810);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(384, Current, 13810);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 695, 0x08000000, 1); /* separator */
	*(EIF_CHARACTER_8 *)(Current + RTWA(695, dtype)) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '_';
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6170, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("separator = \'_\'", EX_POST);
		tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(695, dtype));
		if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '_')) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("after_decimal_separate", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(6162, dtype));
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
	RTLO(2);
	RTEE;
}

/* {FORMAT_DOUBLE}.comma_separate */
void F385_7998 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "comma_separate";
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 384, Current, 0, 0, 13789);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(384, Current, 13789);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 695, 0x08000000, 1); /* separator */
	*(EIF_CHARACTER_8 *)(Current + RTWA(695, dtype)) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) ',';
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6170, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("separator = \',\'", EX_POST);
		tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(695, dtype));
		if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) ',')) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("after_decimal_separate", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(6162, dtype));
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
	RTLO(2);
	RTEE;
}

/* {FORMAT_DOUBLE}.remove_separator */
void F385_7999 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "remove_separator";
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 384, Current, 0, 0, 13790);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(384, Current, 13790);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 695, 0x08000000, 1); /* separator */
	*(EIF_CHARACTER_8 *)(Current + RTWA(695, dtype)) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '\000';
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6171, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("separator = \'%U\'", EX_POST);
		tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(695, dtype));
		if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\000')) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("not after_decimal_separate", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(6162, dtype));
		if ((EIF_BOOLEAN) !tb1) {
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
	RTLO(2);
	RTEE;
}

/* {FORMAT_DOUBLE}.show_zero */
void F385_8000 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "show_zero";
	RTEX;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 384, Current, 0, 0, 13791);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(384, Current, 13791);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 6164, 0x04000000, 1); /* zero_not_shown */
	*(EIF_BOOLEAN *)(Current + RTWA(6164, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("not zero_not_shown", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(6164, dtype));
		if ((EIF_BOOLEAN) !tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {FORMAT_DOUBLE}.show_trailing_zeros */
void F385_8001 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "show_trailing_zeros";
	RTEX;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 384, Current, 0, 0, 13792);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(384, Current, 13792);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 6165, 0x04000000, 1); /* trailing_zeros_shown */
	*(EIF_BOOLEAN *)(Current + RTWA(6165, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("trailing_zeros_shown_set", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(6165, dtype));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {FORMAT_DOUBLE}.hide_zero */
void F385_8002 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "hide_zero";
	RTEX;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 384, Current, 0, 0, 13793);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(384, Current, 13793);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 6164, 0x04000000, 1); /* zero_not_shown */
	*(EIF_BOOLEAN *)(Current + RTWA(6164, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("zero_not_shown", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(6164, dtype));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {FORMAT_DOUBLE}.hide_trailing_zeros */
void F385_8003 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "hide_trailing_zeros";
	RTEX;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 384, Current, 0, 0, 13794);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(384, Current, 13794);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 6165, 0x04000000, 1); /* trailing_zeros_shown */
	*(EIF_BOOLEAN *)(Current + RTWA(6165, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("trailing_zeros_shown_set", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(6165, dtype));
		if ((EIF_BOOLEAN) !tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {FORMAT_DOUBLE}.formatted */
EIF_TYPED_VALUE F385_8004 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "formatted";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REAL_64 loc2 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc3 = (EIF_REAL_64) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REAL_64 loc6 = (EIF_REAL_64) 0;
#define arg1 arg1x.it_r8
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,loc4);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,loc5);
	RTLR(5,Result);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU(SK_REAL64,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REAL64, &loc2);
	RTLU(SK_REAL64, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REAL64, &loc6);
	
	RTEAA(l_feature_name, 384, Current, 6, 1, 13795);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(384, Current, 13795);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(6, 0x20000000, 1, 0); /* loc6 */
	loc6 = (EIF_REAL_64) arg1;
	RTHOOK(2);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	if ((EIF_BOOLEAN) (arg1 < tr8_1)) {
		RTHOOK(4);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
		RTHOOK(5);
		RTDBGAL(6, 0x20000000, 1, 0); /* loc6 */
		loc6 = (EIF_REAL_64) (EIF_REAL_64) -loc6;
	}
	RTHOOK(6);
	RTDBGAL(6, 0x20000000, 1, 0); /* loc6 */
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 5L));
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6163, dtype));
	tr8_2 = (EIF_REAL_64) ((EIF_INTEGER_32) ((EIF_INTEGER_32) -ti4_1 - ((EIF_INTEGER_32) 1L)));
	loc6 += (EIF_REAL_64) (tr8_1 * (EIF_REAL_64) pow ((EIF_REAL_64) (((EIF_INTEGER_32) 10L)), (EIF_REAL_64) (tr8_2)));
	RTHOOK(7);
	RTDBGAL(2, 0x20000000, 1, 0); /* loc2 */
	ur8_1 = loc6;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(966, dtype))(Current, ur8_1x)).it_r8);
	loc2 = (EIF_REAL_64) tr8_1;
	RTHOOK(8);
	RTDBGAL(3, 0x20000000, 1, 0); /* loc3 */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6163, dtype));
	tr8_1 = (EIF_REAL_64) ((EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)));
	ur8_1 = (EIF_REAL_64) ((EIF_REAL_64) (loc6 - loc2) * (EIF_REAL_64) pow ((EIF_REAL_64) (((EIF_INTEGER_32) 10L)), (EIF_REAL_64) (tr8_1)));
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(966, dtype))(Current, ur8_1x)).it_r8);
	loc3 = (EIF_REAL_64) tr8_1;
	RTHOOK(9);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(709, dtype))(Current)).it_b);
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(10);
		RTDBGAL(4, 0xF8000135, 0, 0); /* loc4 */
		tr1 = eif_out__r8_s1(loc2);
		ur1 = RTCCL(tr1);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(749, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc4 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(11);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(6162, dtype));
		if (tb1) {
			RTHOOK(12);
			RTDBGAL(5, 0xF8000135, 0, 0); /* loc5 */
			ur8_1 = loc3;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6177, dtype))(Current, ur8_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr1);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6178, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc5 = (EIF_REFERENCE) RTCCL(tr1);
		} else {
			RTHOOK(13);
			RTDBGAL(5, 0xF8000135, 0, 0); /* loc5 */
			ur8_1 = loc3;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6177, dtype))(Current, ur8_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc5 = (EIF_REFERENCE) RTCCL(tr1);
		}
	} else {
		RTHOOK(14);
		RTDBGAL(4, 0xF8000135, 0, 0); /* loc4 */
		tr1 = eif_out__r8_s1(loc2);
		loc4 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(15);
		RTDBGAL(5, 0xF8000135, 0, 0); /* loc5 */
		ur8_1 = loc3;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6177, dtype))(Current, ur8_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc5 = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTHOOK(16);
	RTDBGAL(0, 0xF8000135, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(309, 0x01).id);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(694, dtype));
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4639, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(16,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(17);
	tb1 = '\01';
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	if (!(EIF_BOOLEAN)(loc2 != tr8_1)) {
		tb2 = *(EIF_BOOLEAN *)(Current + RTWA(6164, dtype));
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		RTHOOK(18);
		ur1 = RTCCL(loc4);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4901, "append", Result))(Result, ur1x);
	}
	RTHOOK(19);
	uc1 = (EIF_CHARACTER_8) 'e';
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3751, "has", Result))(Result, uc1x)).it_b);
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(20);
		tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(6166, dtype));
		uc1 = tc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3782, "extend", Result))(Result, uc1x);
		RTHOOK(21);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6163, dtype));
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
			RTHOOK(22);
			ur1 = RTCCL(loc5);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4901, "append", Result))(Result, ur1x);
		}
		RTHOOK(23);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(708, dtype))(Current)).it_b);
		if ((EIF_BOOLEAN) !tb1) {
			RTHOOK(24);
			RTDBGAL(0, 0xF8000135, 0,0); /* Result */
			ur1 = RTCCL(Result);
			ui4_1 = loc1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(750, dtype))(Current, ur1x, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			Result = (EIF_REFERENCE) RTCCL(tr1);
		}
	}
	RTHOOK(25);
	tb1 = '\0';
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(696, dtype));
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(741, dtype))(Current)).it_i4);
	if ((EIF_BOOLEAN)(ti4_1 != ti4_2)) {
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(4877, "count", Result));
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(694, dtype));
		tb1 = (EIF_BOOLEAN) (ti4_1 < ti4_2);
	}
	if (tb1) {
		RTHOOK(26);
		RTDBGAL(0, 0xF8000135, 0,0); /* Result */
		ur1 = RTCCL(Result);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(753, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(27);
		RTCT("exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(28);
		RTCT("correct_length", EX_POST);
		tb1 = '\01';
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(704, dtype))(Current)).it_b);
		if (!tb2) {
			ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(4877, "count", Result));
			ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(694, dtype));
			tb1 = (EIF_BOOLEAN) (ti4_1 >= ti4_2);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(29);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(9);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ur8_1
#undef ui4_1
#undef uc1
#undef arg1
}

/* {FORMAT_DOUBLE}.pad_fraction */
EIF_TYPED_VALUE F385_8005 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "pad_fraction";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r8
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU(SK_REAL64,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 384, Current, 1, 1, 13796);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(384, Current, 13796);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF8000135, 0,0); /* Result */
	tr1 = eif_out__r8_s1(arg1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4765, "remove_tail", Result))(Result, ui4_1x);
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(4877, "count", Result));
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6163, dtype));
	if ((EIF_BOOLEAN) (ti4_1 > ti4_2)) {
		RTHOOK(4);
		RTDBGAL(0, 0xF8000135, 0,0); /* Result */
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6163, dtype));
		ui4_2 = ti4_1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4719, "substring", Result))(Result, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		for (;;) {
			RTHOOK(5);
			ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(4877, "count", Result));
			ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6163, dtype));
			if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) break;
			RTHOOK(6);
			uc1 = (EIF_CHARACTER_8) '0';
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4896, "precede", Result))(Result, uc1x);
		}
	}
	RTHOOK(7);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(6165, dtype));
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(8);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		ti4_3 = *(EIF_INTEGER_32 *)(Result + RTVA(4877, "count", Result));
		loc1 = (EIF_INTEGER_32) ti4_3;
		for (;;) {
			RTHOOK(9);
			tb1 = '\01';
			if (!(EIF_BOOLEAN) (loc1 <= ((EIF_INTEGER_32) 1L))) {
				ui4_1 = loc1;
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4063, "item", Result))(Result, ui4_1x)).it_c1);
				tb1 = (EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '0');
			}
			if (tb1) break;
			RTHOOK(10);
			ui4_1 = loc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4762, "remove", Result))(Result, ui4_1x);
			RTHOOK(11);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1--;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("valid_result", EX_POST);
		tb2 = '\01';
		tb3 = *(EIF_BOOLEAN *)(Current + RTWA(6165, dtype));
		if (tb3) {
			ti4_3 = *(EIF_INTEGER_32 *)(Result + RTVA(4877, "count", Result));
			ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(6163, dtype));
			tb2 = (EIF_BOOLEAN)(ti4_3 == ti4_4);
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ui4_1
#undef ui4_2
#undef uc1
#undef arg1
}

/* {FORMAT_DOUBLE}.separate_fraction */
EIF_TYPED_VALUE F385_8006 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "separate_fraction";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 384, Current, 2, 1, 13797);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(384, Current, 13797);
	RTCC(arg1, 384, l_feature_name, 1, eif_new_type(309, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("efficiency", EX_PRE);
		tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(695, dtype));
		RTTE((EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '\000'), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	RTDBGAL(0, 0xF8000135, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(309, 0x01).id);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(694, dtype));
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4639, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(3,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	for (;;) {
		RTHOOK(4);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4877, "count", arg1));
		if ((EIF_BOOLEAN) (loc1 > (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 3L)))) break;
		RTHOOK(5);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		for (;;) {
			RTHOOK(6);
			if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 3L))) break;
			RTHOOK(7);
			ui4_1 = loc1;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4063, "item", arg1))(arg1, ui4_1x)).it_c1);
			uc1 = tc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3782, "extend", Result))(Result, uc1x);
			RTHOOK(8);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1++;
			RTHOOK(9);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2++;
		}
		RTHOOK(10);
		tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(695, dtype));
		uc1 = tc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3782, "extend", Result))(Result, uc1x);
	}
	for (;;) {
		RTHOOK(11);
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4877, "count", arg1));
		if ((EIF_BOOLEAN) (loc1 > ti4_2)) break;
		RTHOOK(12);
		ui4_1 = loc1;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4063, "item", arg1))(arg1, ui4_1x)).it_c1);
		uc1 = tc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3782, "extend", Result))(Result, uc1x);
		RTHOOK(13);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui4_1
#undef uc1
#undef arg1
}

/* {FORMAT_DOUBLE}._invariant */
void F385_8358 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTLD;
	RTDA;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAINV(l_feature_name, 384, Current, 0, 8357);
	RTSA(dtype);
	RTME(dtype, 0);
	RTIT("separate_all", Current);
	tb1 = '\01';
	tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(709, dtype))(Current)).it_b);
	if (tb2) {
		tb2 = *(EIF_BOOLEAN *)(Current + RTWA(6162, dtype));
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTLO(2);
	RTMD(0);
	RTLE;
	RTEE;
}

void EIF_Minit385 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif