/*
 * Code for class WSF_STANDALONE_SERVICE_LAUNCHER [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F842_2311(EIF_REFERENCE);
extern void F842_2312(EIF_REFERENCE);
extern void F842_2313(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F842_2314(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F842_2315(EIF_REFERENCE);
extern EIF_TYPED_VALUE F842_2316(EIF_REFERENCE);
extern EIF_TYPED_VALUE F842_2317(EIF_REFERENCE);
extern void F842_2318(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F842_2319(EIF_REFERENCE);
extern EIF_TYPED_VALUE F842_2320(EIF_REFERENCE);
extern EIF_TYPED_VALUE F842_2321(EIF_REFERENCE);
extern EIF_TYPED_VALUE F842_2322(EIF_REFERENCE);
extern EIF_TYPED_VALUE F842_2323(EIF_REFERENCE);
extern EIF_TYPED_VALUE F842_2324(EIF_REFERENCE);
extern EIF_TYPED_VALUE F842_2325(EIF_REFERENCE);
extern EIF_TYPED_VALUE F842_2326(EIF_REFERENCE);
extern EIF_TYPED_VALUE F842_2327(EIF_REFERENCE);
extern EIF_TYPED_VALUE F842_2328(EIF_REFERENCE);
extern EIF_TYPED_VALUE F842_2329(EIF_REFERENCE);
extern EIF_TYPED_VALUE F842_2330(EIF_REFERENCE);
extern EIF_TYPED_VALUE F842_2331(EIF_REFERENCE);
extern EIF_TYPED_VALUE F842_2332(EIF_REFERENCE);
extern EIF_TYPED_VALUE F842_2333(EIF_REFERENCE);
extern EIF_TYPED_VALUE F842_2334(EIF_REFERENCE);
extern EIF_TYPED_VALUE F842_2335(EIF_REFERENCE);
extern EIF_TYPED_VALUE F842_2336(EIF_REFERENCE);
extern EIF_TYPED_VALUE F842_2337(EIF_REFERENCE);
extern void EIF_Minit842(void);
extern EIF_REFERENCE _A842_60_2();

#ifdef __cplusplus
}
#endif

#include "eif_misc.h"
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

/* {WSF_STANDALONE_SERVICE_LAUNCHER}.initialize */
void F842_2311 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "initialize";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE uu8_1x = {{0}, SK_UINT64};
#define uu8_1 uu8_1x.it_n8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_NATURAL_64 tu8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(17);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc3);
	RTLR(3,loc4);
	RTLR(4,ur1);
	RTLR(5,loc5);
	RTLR(6,loc6);
	RTLR(7,loc7);
	RTLR(8,tr2);
	RTLR(9,loc2);
	RTLR(10,loc8);
	RTLR(11,ur2);
	RTLR(12,loc9);
	RTLR(13,loc1);
	RTLR(14,tr3);
	RTLR(15,tr4);
	RTLR(16,tr5);
	RTLIU(17);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_REF, &loc8);
	RTLU(SK_REF, &loc9);
	
	RTEAA(l_feature_name, 841, Current, 9, 0, 2283);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(841, Current, 2283);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 2055, 0xF8000245, 0); /* on_launched_actions */
	tr1 = RTLNSMART(RTWCT(2055, dtype, dftype).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(2055, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 2056, 0xF8000245, 0); /* on_stopped_actions */
	tr1 = RTLNSMART(RTWCT(2056, dtype, dftype).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(2056, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 2058, 0x10000000, 1); /* port_number */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(653, 364))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(2058, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 2063, 0x10000000, 1); /* max_concurrent_connections */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(654, 364))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(2063, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 2065, 0x10000000, 1); /* max_tcp_clients */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(655, 364))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(2065, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(6);
	RTDBGAA(Current, dtype, 2066, 0x3C000000, 1); /* socket_timeout_ns */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(657, 364))(Current)).it_i4);
	ui4_1 = ti4_1;
	tu8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1074, dtype))(Current, ui4_1x)).it_n8);
	*(EIF_NATURAL_64 *)(Current + RTWA(2066, dtype)) = (EIF_NATURAL_64) tu8_1;
	RTHOOK(7);
	RTDBGAA(Current, dtype, 2067, 0x3C000000, 1); /* socket_recv_timeout_ns */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(658, 364))(Current)).it_i4);
	ui4_1 = ti4_1;
	tu8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1074, dtype))(Current, ui4_1x)).it_n8);
	*(EIF_NATURAL_64 *)(Current + RTWA(2067, dtype)) = (EIF_NATURAL_64) tu8_1;
	RTHOOK(8);
	RTDBGAA(Current, dtype, 2068, 0x3C000000, 1); /* keep_alive_timeout_ns */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(659, 364))(Current)).it_i4);
	ui4_1 = ti4_1;
	tu8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1074, dtype))(Current, ui4_1x)).it_n8);
	*(EIF_NATURAL_64 *)(Current + RTWA(2068, dtype)) = (EIF_NATURAL_64) tu8_1;
	RTHOOK(9);
	RTDBGAA(Current, dtype, 2069, 0x10000000, 1); /* max_keep_alive_requests */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(660, 364))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(2069, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(10);
	RTDBGAA(Current, dtype, 2061, 0x04000000, 1); /* verbose */
	*(EIF_BOOLEAN *)(Current + RTWA(2061, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(11);
	RTDBGAA(Current, dtype, 2062, 0x10000000, 1); /* verbose_level */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1991, dtype))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(2062, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(12);
	RTDBGAA(Current, dtype, 2060, 0xF8000133, 0); /* base_url */
	*(EIF_REFERENCE *)(Current + RTWA(2060, dtype)) = (EIF_REFERENCE) NULL;
	RTHOOK(13);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2050, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc3 = RTCCL(tr1);
	if (EIF_TEST(loc3)) {
		RTHOOK(14);
		tr1 = RTMS_EX_H("server_name",11,666602853);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4043, "option", loc3))(loc3, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc4 = RTCCL(tr1);
		loc4 = RTRV(eif_new_type(301, 0x01),loc4);
		if (EIF_TEST(loc4)) {
			RTHOOK(15);
			RTDBGAA(Current, dtype, 2059, 0xF8000133, 0); /* server_name */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4692, "to_string_8", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr1 = RTCCL(tr1);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + RTWA(2059, dtype)) = (EIF_REFERENCE) tr1;
		}
		RTHOOK(16);
		tb1 = '\0';
		tr1 = RTMS_EX_H("base",4,1650553701);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4043, "option", loc3))(loc3, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc5 = RTCCL(tr1);
		loc5 = RTRV(eif_new_type(301, 0x01),loc5);
		if (EIF_TEST(loc5)) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4655, "is_valid_as_string_8", loc5))(loc5)).it_b);
			tb1 = tb2;
		}
		if (tb1) {
			RTHOOK(17);
			RTDBGAA(Current, dtype, 2060, 0xF8000133, 0); /* base_url */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4692, "to_string_8", loc5))(loc5)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr1 = RTCCL(tr1);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + RTWA(2060, dtype)) = (EIF_REFERENCE) tr1;
		}
		RTHOOK(18);
		RTDBGAA(Current, dtype, 2061, 0x04000000, 1); /* verbose */
		tr1 = RTMS_EX_H("verbose",7,1112830821);
		ur1 = tr1;
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(2061, dtype));
		ub1 = tb1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4051, "option_boolean_value", loc3))(loc3, ur1x, ub1x)).it_b);
		*(EIF_BOOLEAN *)(Current + RTWA(2061, dtype)) = (EIF_BOOLEAN) tb1;
		RTHOOK(19);
		tr1 = RTMS_EX_H("verbose_level",13,2007371628);
		ur1 = tr1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4045, "has_integer_option", loc3))(loc3, ur1x)).it_b);
		if (tb1) {
			RTHOOK(20);
			RTDBGAA(Current, dtype, 2062, 0x10000000, 1); /* verbose_level */
			tr1 = RTMS_EX_H("verbose_level",13,2007371628);
			ur1 = tr1;
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2062, dtype));
			ui4_1 = ti4_1;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4048, "option_integer_value", loc3))(loc3, ur1x, ui4_1x)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(2062, dtype)) = (EIF_INTEGER_32) ti4_1;
		} else {
			RTHOOK(21);
			tr1 = RTMS_EX_H("verbose_level",13,2007371628);
			ur1 = tr1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4043, "option", loc3))(loc3, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc6 = RTCCL(tr1);
			loc6 = RTRV(eif_new_type(301, 0x01),loc6);
			if (EIF_TEST(loc6)) {
				RTHOOK(22);
				RTDBGAA(Current, dtype, 2062, 0x10000000, 1); /* verbose_level */
				*(EIF_INTEGER_32 *)(Current + RTWA(2062, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
				RTHOOK(23);
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '+';
				uw1 = tw1;
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4717, "split", loc6))(loc6, uw1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3485, "new_cursor", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc7 = (EIF_REFERENCE) RTCCL(tr2);
				for (;;) {
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3299, "after", loc7))(loc7)).it_b);
					if (tb1) break;
					RTHOOK(24);
					RTDBGAL(2, 0xF800012D, 0, 0); /* loc2 */
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3298, "item", loc7))(loc7)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					loc2 = (EIF_REFERENCE) RTCCL(tr1);
					RTHOOK(25);
					tr1 = RTMS_EX_H("alert",5,1819332724);
					ur1 = tr1;
					tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4681, "is_case_insensitive_equal", loc2))(loc2, ur1x)).it_b);
					if (tb2) {
						RTHOOK(26);
						RTDBGAA(Current, dtype, 2062, 0x10000000, 1); /* verbose_level */
						ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2062, dtype));
						ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1987, dtype))(Current)).it_i4);
						ui4_1 = ti4_2;
						ti4_3 = eif_bit_or(ti4_1,ui4_1);
						*(EIF_INTEGER_32 *)(Current + RTWA(2062, dtype)) = (EIF_INTEGER_32) ti4_3;
					} else {
						RTHOOK(27);
						tr1 = RTMS_EX_H("critical",8,1394383468);
						ur1 = tr1;
						tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4681, "is_case_insensitive_equal", loc2))(loc2, ur1x)).it_b);
						if (tb2) {
							RTHOOK(28);
							RTDBGAA(Current, dtype, 2062, 0x10000000, 1); /* verbose_level */
							ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2062, dtype));
							ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1988, dtype))(Current)).it_i4);
							ui4_1 = ti4_2;
							ti4_3 = eif_bit_or(ti4_1,ui4_1);
							*(EIF_INTEGER_32 *)(Current + RTWA(2062, dtype)) = (EIF_INTEGER_32) ti4_3;
						} else {
							RTHOOK(29);
							tr1 = RTMS_EX_H("error",5,1920877938);
							ur1 = tr1;
							tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4681, "is_case_insensitive_equal", loc2))(loc2, ur1x)).it_b);
							if (tb2) {
								RTHOOK(30);
								RTDBGAA(Current, dtype, 2062, 0x10000000, 1); /* verbose_level */
								ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2062, dtype));
								ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1989, dtype))(Current)).it_i4);
								ui4_1 = ti4_2;
								ti4_3 = eif_bit_or(ti4_1,ui4_1);
								*(EIF_INTEGER_32 *)(Current + RTWA(2062, dtype)) = (EIF_INTEGER_32) ti4_3;
							} else {
								RTHOOK(31);
								tr1 = RTMS_EX_H("warning",7,1809215079);
								ur1 = tr1;
								tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4681, "is_case_insensitive_equal", loc2))(loc2, ur1x)).it_b);
								if (tb2) {
									RTHOOK(32);
									RTDBGAA(Current, dtype, 2062, 0x10000000, 1); /* verbose_level */
									ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2062, dtype));
									ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1990, dtype))(Current)).it_i4);
									ui4_1 = ti4_2;
									ti4_3 = eif_bit_or(ti4_1,ui4_1);
									*(EIF_INTEGER_32 *)(Current + RTWA(2062, dtype)) = (EIF_INTEGER_32) ti4_3;
								} else {
									RTHOOK(33);
									tr1 = RTMS_EX_H("notice",6,22705253);
									ur1 = tr1;
									tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4681, "is_case_insensitive_equal", loc2))(loc2, ur1x)).it_b);
									if (tb2) {
										RTHOOK(34);
										RTDBGAA(Current, dtype, 2062, 0x10000000, 1); /* verbose_level */
										ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2062, dtype));
										ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1991, dtype))(Current)).it_i4);
										ui4_1 = ti4_2;
										ti4_3 = eif_bit_or(ti4_1,ui4_1);
										*(EIF_INTEGER_32 *)(Current + RTWA(2062, dtype)) = (EIF_INTEGER_32) ti4_3;
									} else {
										RTHOOK(35);
										tr1 = RTMS_EX_H("information",11,684350830);
										ur1 = tr1;
										tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4681, "is_case_insensitive_equal", loc2))(loc2, ur1x)).it_b);
										if (tb2) {
											RTHOOK(36);
											RTDBGAA(Current, dtype, 2062, 0x10000000, 1); /* verbose_level */
											ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2062, dtype));
											ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1992, dtype))(Current)).it_i4);
											ui4_1 = ti4_2;
											ti4_3 = eif_bit_or(ti4_1,ui4_1);
											*(EIF_INTEGER_32 *)(Current + RTWA(2062, dtype)) = (EIF_INTEGER_32) ti4_3;
										} else {
											RTHOOK(37);
											tr1 = RTMS_EX_H("debug",5,1701719399);
											ur1 = tr1;
											tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4681, "is_case_insensitive_equal", loc2))(loc2, ur1x)).it_b);
											if (tb2) {
												RTHOOK(38);
												RTDBGAA(Current, dtype, 2062, 0x10000000, 1); /* verbose_level */
												ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2062, dtype));
												ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1993, dtype))(Current)).it_i4);
												ui4_1 = ti4_2;
												ti4_3 = eif_bit_or(ti4_1,ui4_1);
												*(EIF_INTEGER_32 *)(Current + RTWA(2062, dtype)) = (EIF_INTEGER_32) ti4_3;
											}
										}
									}
								}
							}
						}
					}
					RTHOOK(39);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3300, "forth", loc7))(loc7);
				}
			}
		}
		RTHOOK(40);
		RTDBGAA(Current, dtype, 2058, 0x10000000, 1); /* port_number */
		tr1 = RTMS_EX_H("port",4,1886351988);
		ur1 = tr1;
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2058, dtype));
		ui4_1 = ti4_1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4048, "option_integer_value", loc3))(loc3, ur1x, ui4_1x)).it_i4);
		*(EIF_INTEGER_32 *)(Current + RTWA(2058, dtype)) = (EIF_INTEGER_32) ti4_1;
		RTHOOK(41);
		tr1 = RTMS_EX_H("force_single_threaded",21,1502362724);
		ur1 = tr1;
		ub1 = (EIF_BOOLEAN) 0;
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4051, "option_boolean_value", loc3))(loc3, ur1x, ub1x)).it_b);
		if (tb2) {
			RTHOOK(42);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2053, dtype))(Current, ui4_1x);
		}
		RTHOOK(43);
		RTDBGAA(Current, dtype, 2063, 0x10000000, 1); /* max_concurrent_connections */
		tr1 = RTMS_EX_H("max_concurrent_connections",26,1230961267);
		ur1 = tr1;
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2063, dtype));
		ui4_1 = ti4_1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4048, "option_integer_value", loc3))(loc3, ur1x, ui4_1x)).it_i4);
		*(EIF_INTEGER_32 *)(Current + RTWA(2063, dtype)) = (EIF_INTEGER_32) ti4_1;
		RTHOOK(44);
		RTDBGAA(Current, dtype, 2065, 0x10000000, 1); /* max_tcp_clients */
		tr1 = RTMS_EX_H("max_tcp_clients",15,516799603);
		ur1 = tr1;
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2065, dtype));
		ui4_1 = ti4_1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4048, "option_integer_value", loc3))(loc3, ur1x, ui4_1x)).it_i4);
		*(EIF_INTEGER_32 *)(Current + RTWA(2065, dtype)) = (EIF_INTEGER_32) ti4_1;
		RTHOOK(45);
		RTDBGAA(Current, dtype, 2066, 0x3C000000, 1); /* socket_timeout_ns */
		tr1 = RTMS_EX_H("socket_timeout",14,1196250996);
		ur1 = tr1;
		tu8_1 = *(EIF_NATURAL_64 *)(Current + RTWA(2066, dtype));
		uu8_1 = tu8_1;
		tu8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4050, "option_timeout_ns_value", loc3))(loc3, ur1x, uu8_1x)).it_n8);
		*(EIF_NATURAL_64 *)(Current + RTWA(2066, dtype)) = (EIF_NATURAL_64) tu8_1;
		RTHOOK(46);
		RTDBGAA(Current, dtype, 2067, 0x3C000000, 1); /* socket_recv_timeout_ns */
		tr1 = RTMS_EX_H("socket_recv_timeout",19,1063776372);
		ur1 = tr1;
		tu8_1 = *(EIF_NATURAL_64 *)(Current + RTWA(2067, dtype));
		uu8_1 = tu8_1;
		tu8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4050, "option_timeout_ns_value", loc3))(loc3, ur1x, uu8_1x)).it_n8);
		*(EIF_NATURAL_64 *)(Current + RTWA(2067, dtype)) = (EIF_NATURAL_64) tu8_1;
		RTHOOK(47);
		RTDBGAA(Current, dtype, 2068, 0x3C000000, 1); /* keep_alive_timeout_ns */
		tr1 = RTMS_EX_H("keep_alive_timeout",18,1770730612);
		ur1 = tr1;
		tu8_1 = *(EIF_NATURAL_64 *)(Current + RTWA(2068, dtype));
		uu8_1 = tu8_1;
		tu8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4050, "option_timeout_ns_value", loc3))(loc3, ur1x, uu8_1x)).it_n8);
		*(EIF_NATURAL_64 *)(Current + RTWA(2068, dtype)) = (EIF_NATURAL_64) tu8_1;
		RTHOOK(48);
		RTDBGAA(Current, dtype, 2069, 0x10000000, 1); /* max_keep_alive_requests */
		tr1 = RTMS_EX_H("max_keep_alive_requests",23,2099809651);
		ur1 = tr1;
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2069, dtype));
		ui4_1 = ti4_1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4048, "option_integer_value", loc3))(loc3, ur1x, ui4_1x)).it_i4);
		*(EIF_INTEGER_32 *)(Current + RTWA(2069, dtype)) = (EIF_INTEGER_32) ti4_1;
		RTHOOK(49);
		RTDBGAA(Current, dtype, 2070, 0x10000000, 1); /* max_bind_attempts */
		tr1 = RTMS_EX_H("max_bind_attempts",17,297265523);
		ur1 = tr1;
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2070, dtype));
		ui4_1 = ti4_1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4048, "option_integer_value", loc3))(loc3, ur1x, ui4_1x)).it_i4);
		*(EIF_INTEGER_32 *)(Current + RTWA(2070, dtype)) = (EIF_INTEGER_32) ti4_1;
		RTHOOK(50);
		RTDBGAA(Current, dtype, 2071, 0x04000000, 1); /* is_reuse_address_allowed */
		tr1 = RTMS_EX_H("allow_reuse_address",19,1119915123);
		ur1 = tr1;
		tb2 = *(EIF_BOOLEAN *)(Current + RTWA(2071, dtype));
		ub1 = tb2;
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4051, "option_boolean_value", loc3))(loc3, ur1x, ub1x)).it_b);
		*(EIF_BOOLEAN *)(Current + RTWA(2071, dtype)) = (EIF_BOOLEAN) tb2;
		RTHOOK(51);
		tb2 = '\0';
		tr1 = RTMS_EX_H("is_secure",9,95754853);
		ur1 = tr1;
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2073, dtype))(Current)).it_b);
		ub1 = tb3;
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4051, "option_boolean_value", loc3))(loc3, ur1x, ub1x)).it_b);
		if (tb3) {
			tr1 = RTMS_EX_H("secure_protocol",15,1206537068);
			ur1 = tr1;
			tr2 = RTMS_EX_H("tls_1_2",7,65568050);
			ur2 = tr2;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4047, "option_string_32_value", loc3))(loc3, ur1x, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc8 = tr1;
			tb2 = EIF_TEST(loc8);
		}
		if (tb2) {
			RTHOOK(52);
			RTDBGAA(Current, dtype, 2074, 0xF8000120, 0); /* secure_settings */
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,3,288,0xFF01,305,305,305,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLNTS(typres0.id, 4, 0);
			}
			((EIF_TYPED_VALUE *)tr1+1)->it_r = loc8;
			RTAR(tr1,loc8);
			tr2 = RTMS_EX_H("secure_certificate",18,1851522661);
			ur1 = tr2;
			ur2 = NULL;
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4047, "option_string_32_value", loc3))(loc3, ur1x, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			((EIF_TYPED_VALUE *)tr1+2)->it_r = tr2;
			RTAR(tr1,tr2);
			tr2 = RTMS_EX_H("secure_certificate_key",22,683621753);
			ur1 = tr2;
			ur2 = NULL;
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4047, "option_string_32_value", loc3))(loc3, ur1x, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			((EIF_TYPED_VALUE *)tr1+3)->it_r = tr2;
			RTAR(tr1,tr2);
			tr1 = RTCCL(tr1);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + RTWA(2074, dtype)) = (EIF_REFERENCE) tr1;
		} else {
			RTHOOK(53);
			tb2 = '\0';
			tr1 = RTMS_EX_H("ssl_enabled",11,1038852964);
			ur1 = tr1;
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2073, dtype))(Current)).it_b);
			ub1 = tb3;
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4051, "option_boolean_value", loc3))(loc3, ur1x, ub1x)).it_b);
			if (tb3) {
				tr1 = RTMS_EX_H("ssl_protocol",12,1752529772);
				ur1 = tr1;
				tr2 = RTMS_EX_H("tls_1_2",7,65568050);
				ur2 = tr2;
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4047, "option_string_32_value", loc3))(loc3, ur1x, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc9 = tr1;
				tb2 = EIF_TEST(loc9);
			}
			if (tb2) {
				RTHOOK(54);
				RTDBGAA(Current, dtype, 2074, 0xF8000120, 0); /* secure_settings */
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,3,288,0xFF01,305,305,305,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					tr1 = RTLNTS(typres0.id, 4, 0);
				}
				((EIF_TYPED_VALUE *)tr1+1)->it_r = loc9;
				RTAR(tr1,loc9);
				tr2 = RTMS_EX_H("ssl_ca_crt",10,1862360692);
				ur1 = tr2;
				ur2 = NULL;
				tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4047, "option_string_32_value", loc3))(loc3, ur1x, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				((EIF_TYPED_VALUE *)tr1+2)->it_r = tr2;
				RTAR(tr1,tr2);
				tr2 = RTMS_EX_H("ssl_ca_key",10,1862881657);
				ur1 = tr2;
				ur2 = NULL;
				tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4047, "option_string_32_value", loc3))(loc3, ur1x, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				((EIF_TYPED_VALUE *)tr1+3)->it_r = tr2;
				RTAR(tr1,tr2);
				tr1 = RTCCL(tr1);
				RTAR(Current, tr1);
				*(EIF_REFERENCE *)(Current + RTWA(2074, dtype)) = (EIF_REFERENCE) tr1;
			}
		}
		RTHOOK(55);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2073, dtype))(Current)).it_b);
		if (tb2) {
			RTHOOK(56);
			tr1 = RTMS_EX_H("secure_port",11,2038705268);
			ur1 = tr1;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4045, "has_integer_option", loc3))(loc3, ur1x)).it_b);
			if (tb2) {
				RTHOOK(57);
				RTDBGAA(Current, dtype, 2058, 0x10000000, 1); /* port_number */
				tr1 = RTMS_EX_H("secure_port",11,2038705268);
				ur1 = tr1;
				ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2058, dtype));
				ui4_1 = ti4_1;
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4048, "option_integer_value", loc3))(loc3, ur1x, ui4_1x)).it_i4);
				*(EIF_INTEGER_32 *)(Current + RTWA(2058, dtype)) = (EIF_INTEGER_32) ti4_1;
			}
		}
	}
	RTHOOK(58);
	RTDBGAL(1, 0xF800034A, 0, 0); /* loc1 */
	tr1 = RTLNSMART(RTWCT(2075, dtype, dftype).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2002, Dtype(tr1)))(tr1);
	RTNHOOK(58,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(59);
	RTDBGAA(Current, dtype, 2075, 0xF800034A, 0); /* connector */
	tr1 = RTCCL(loc1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(2075, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(60);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2015, "on_launched_actions", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,288,0xFF01,0,0xFFFF};
		EIF_TYPE typres0;
		typarr0[4] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
	RTAR(tr2,Current);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	{
		static EIF_TYPE_INDEX typarr0[] = {636,338,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr4 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr4) = 1L;
		memset(tr4, 0, RT_SPECIAL_VISIBLE_SIZE(tr4));
	}
	*((EIF_INTEGER_32 *)tr4+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	tr3 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(5231, Dtype(tr4)))(tr4).it_r;
	
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,411,0xFF01,0xFFF9,1,288,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(2075, dtype, dftype);
			typarr0[6] = l_type.annotations | 0xFF00;
			typarr0[7] = l_type.id;
		}
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr5= RTLNRW(typres0.id, 0, (EIF_POINTER) _A842_60_2, (EIF_POINTER)(0),2057, tr3, 0, 1, -1, tr2, 1);
	}
	ur1 = RTCCL(tr5);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3782, "extend", tr1))(tr1, ur1x);
	RTHOOK(61);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2060, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2017, "set_base", loc1))(loc1, ur1x);
	RTHOOK(62);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2011, "configuration", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2054, dtype))(Current, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(63);
		RTCT("connector_attached", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2075, dtype));
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(64);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(11);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef uu8_1
#undef ui4_1
#undef uw1
#undef ub1
}

/* {WSF_STANDALONE_SERVICE_LAUNCHER}.force_single_threaded */
void F842_2312 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "force_single_threaded";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
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
	
	RTEAA(l_feature_name, 841, Current, 0, 0, 2284);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(841, Current, 2284);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2053, dtype))(Current, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("single_threaded", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2064, dtype))(Current)).it_b);
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
#undef ui4_1
}

/* {WSF_STANDALONE_SERVICE_LAUNCHER}.set_max_concurrent_connections */
void F842_2313 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_max_concurrent_connections";
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
	
	RTEAA(l_feature_name, 841, Current, 0, 1, 2285);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(841, Current, 2285);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("v_positive_or_zero", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 2063, 0x10000000, 1); /* max_concurrent_connections */
	*(EIF_INTEGER_32 *)(Current + RTWA(2063, dtype)) = (EIF_INTEGER_32) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("max_concurrent_connections_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2063, dtype));
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

/* {WSF_STANDALONE_SERVICE_LAUNCHER}.update_configuration */
void F842_2314 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "update_configuration";
	RTEX;
#define arg1 arg1x.it_r
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	RTS_SDC;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE uu8_1x = {{0}, SK_UINT64};
#define uu8_1 uu8_1x.it_n8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_64 tu8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 841, Current, 0, 1, 2286);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(841, Current, 2286);
	RTCC(arg1, 841, l_feature_name, 1, RTWCTT(2011, RTWCT(2075, dtype, Dftype(Current)).id), 0x00);
	uarg1 = (EIF_BOOLEAN) RTS_OU (arg1);
	uarg = uarg1;
	if (uarg) {
		RTS_RC;
		RTS_RS (arg1);
		RTS_RW;
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(2061, dtype));
	ub1 = tb1;
	if (RTS_CI (EIF_FALSE, arg1)) {
		RTS_BI (arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6264, "set_is_verbose", arg1))(arg1, ub1x);
		RTS_EI;
	} else {
		RTS_AC (1, arg1);
		RTS_AA (ub1x, it_b, SK_BOOL, 1);
		RTS_CALL (6264, SK_VOID);
	}
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2062, dtype));
	ui4_1 = ti4_1;
	if (RTS_CI (EIF_FALSE, arg1)) {
		RTS_BI (arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6265, "set_verbose_level", arg1))(arg1, ui4_1x);
		RTS_EI;
	} else {
		RTS_AC (1, arg1);
		RTS_AA (ui4_1x, it_i4, SK_INT32, 1);
		RTS_CALL (6265, SK_VOID);
	}
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2074, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	if (RTS_CI (EIF_FALSE, arg1)) {
		RTS_BI (arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6248, "set_secure_settings", arg1))(arg1, ur1x);
		RTS_EI;
	} else {
		RTS_AC (1, arg1);
		RTS_AA (ur1x, it_r, SK_REF, 1);
		RTS_CALL (6248, SK_VOID);
	}
	RTHOOK(4);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2059, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	if (RTS_CI (EIF_FALSE, arg1)) {
		RTS_BI (arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6249, "set_http_server_name", arg1))(arg1, ur1x);
		RTS_EI;
	} else {
		RTS_AC (1, arg1);
		RTS_AA (ur1x, it_r, SK_REF, 1);
		RTS_CALL (6249, SK_VOID);
	}
	RTHOOK(5);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2058, dtype));
	ui4_1 = ti4_1;
	if (RTS_CI (EIF_FALSE, arg1)) {
		RTS_BI (arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6251, "set_http_server_port", arg1))(arg1, ui4_1x);
		RTS_EI;
	} else {
		RTS_AC (1, arg1);
		RTS_AA (ui4_1x, it_i4, SK_INT32, 1);
		RTS_CALL (6251, SK_VOID);
	}
	RTHOOK(6);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2070, dtype));
	ui4_1 = ti4_1;
	if (RTS_CI (EIF_FALSE, arg1)) {
		RTS_BI (arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6252, "set_max_bind_attempts", arg1))(arg1, ui4_1x);
		RTS_EI;
	} else {
		RTS_AC (1, arg1);
		RTS_AA (ui4_1x, it_i4, SK_INT32, 1);
		RTS_CALL (6252, SK_VOID);
	}
	RTHOOK(7);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(2071, dtype));
	ub1 = tb1;
	if (RTS_CI (EIF_FALSE, arg1)) {
		RTS_BI (arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6253, "set_is_reuse_address_allowed", arg1))(arg1, ub1x);
		RTS_EI;
	} else {
		RTS_AC (1, arg1);
		RTS_AA (ub1x, it_b, SK_BOOL, 1);
		RTS_CALL (6253, SK_VOID);
	}
	RTHOOK(8);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2063, dtype));
	ui4_1 = ti4_1;
	if (RTS_CI (EIF_FALSE, arg1)) {
		RTS_BI (arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6255, "set_max_concurrent_connections", arg1))(arg1, ui4_1x);
		RTS_EI;
	} else {
		RTS_AC (1, arg1);
		RTS_AA (ui4_1x, it_i4, SK_INT32, 1);
		RTS_CALL (6255, SK_VOID);
	}
	RTHOOK(9);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2065, dtype));
	ui4_1 = ti4_1;
	if (RTS_CI (EIF_FALSE, arg1)) {
		RTS_BI (arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6254, "set_max_tcp_clients", arg1))(arg1, ui4_1x);
		RTS_EI;
	} else {
		RTS_AC (1, arg1);
		RTS_AA (ui4_1x, it_i4, SK_INT32, 1);
		RTS_CALL (6254, SK_VOID);
	}
	RTHOOK(10);
	tu8_1 = *(EIF_NATURAL_64 *)(Current + RTWA(2066, dtype));
	uu8_1 = tu8_1;
	if (RTS_CI (EIF_FALSE, arg1)) {
		RTS_BI (arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6256, "set_socket_timeout_ns", arg1))(arg1, uu8_1x);
		RTS_EI;
	} else {
		RTS_AC (1, arg1);
		RTS_AA (uu8_1x, it_n8, SK_UINT64, 1);
		RTS_CALL (6256, SK_VOID);
	}
	RTHOOK(11);
	tu8_1 = *(EIF_NATURAL_64 *)(Current + RTWA(2067, dtype));
	uu8_1 = tu8_1;
	if (RTS_CI (EIF_FALSE, arg1)) {
		RTS_BI (arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6257, "set_socket_recv_timeout_ns", arg1))(arg1, uu8_1x);
		RTS_EI;
	} else {
		RTS_AC (1, arg1);
		RTS_AA (uu8_1x, it_n8, SK_UINT64, 1);
		RTS_CALL (6257, SK_VOID);
	}
	RTHOOK(12);
	tu8_1 = *(EIF_NATURAL_64 *)(Current + RTWA(2068, dtype));
	uu8_1 = tu8_1;
	if (RTS_CI (EIF_FALSE, arg1)) {
		RTS_BI (arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6258, "set_keep_alive_timeout_ns", arg1))(arg1, uu8_1x);
		RTS_EI;
	} else {
		RTS_AC (1, arg1);
		RTS_AA (uu8_1x, it_n8, SK_UINT64, 1);
		RTS_CALL (6258, SK_VOID);
	}
	RTHOOK(13);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2069, dtype));
	ui4_1 = ti4_1;
	if (RTS_CI (EIF_FALSE, arg1)) {
		RTS_BI (arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6262, "set_max_keep_alive_requests", arg1))(arg1, ui4_1x);
		RTS_EI;
	} else {
		RTS_AC (1, arg1);
		RTS_AA (ui4_1x, it_i4, SK_INT32, 1);
		RTS_CALL (6262, SK_VOID);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTDBGLE;
	RTMD(0);
	if (uarg) {
		RTS_RD;
	}
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef uu8_1
#undef ui4_1
#undef ub1
#undef arg1
}

/* {WSF_STANDALONE_SERVICE_LAUNCHER}.launch */
void F842_2315 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "launch";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLR(6,loc2);
	RTLR(7,loc3);
	RTLIU(8);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 841, Current, 3, 0, 2287);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(841, Current, 2287);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("launchable", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2046, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(1, 0xF800034A, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2075, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2060, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2017, "set_base", loc1))(loc1, ur1x);
	if (
		WDBG(841,"ew_standalone")
	) {
		RTHOOK(4);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(2061, dtype));
		if (tb1) {
			RTHOOK(5);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(5,1);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(509, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			tr1 = RTMS_EX_H("Launching standalone web server on port ",40,1197913888);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2058, dtype));
			tr3 = eif_out__i4_s1(ti4_1);
			ur1 = RTCCL(tr3);
			tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4867, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr3);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3021, "put_string", tr2))(tr2, ur1x);
			RTHOOK(6);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2073, dtype))(Current)).it_b);
			if (tb1) {
				RTHOOK(7);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(7,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(509, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				tr1 = RTMS_EX_H("\012 https://",10,852671535);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3021, "put_string", tr2))(tr2, ur1x);
			} else {
				RTHOOK(8);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(8,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(509, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				tr1 = RTMS_EX_H("\012 http://",9,1366933039);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3021, "put_string", tr2))(tr2, ur1x);
			}
			RTHOOK(9);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2059, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc2 = RTCCL(tr1);
			if (EIF_TEST(loc2)) {
				RTHOOK(10);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(10,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(509, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				ur1 = RTCCL(loc2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3021, "put_string", tr2))(tr2, ur1x);
			} else {
				RTHOOK(11);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(11,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(509, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				tr1 = RTMS_EX_H("localhost",9,185724020);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3021, "put_string", tr2))(tr2, ur1x);
			}
			RTHOOK(12);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(12,1);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(509, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			tr1 = RTMS_EX_H(":",1,58);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2058, dtype));
			tr3 = eif_out__i4_s1(ti4_1);
			ur1 = RTCCL(tr3);
			tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4867, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr3);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3021, "put_string", tr2))(tr2, ur1x);
			RTHOOK(13);
			tb1 = '\0';
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2060, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc3 = RTCCL(tr1);
			if (EIF_TEST(loc3)) {
				tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4656, "is_empty", loc3))(loc3)).it_b);
				tb1 = (EIF_BOOLEAN) !tb2;
			}
			if (tb1) {
				RTHOOK(14);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(14,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(509, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				tr1 = RTMS_EX_H("\012",1,10);
				ur1 = tr1;
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4867, "plus", loc3))(loc3, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur1 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3021, "put_string", tr2))(tr2, ur1x);
			} else {
				RTHOOK(15);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(15,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(509, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				tr1 = RTMS_EX_H("/\012",2,12042);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3021, "put_string", tr2))(tr2, ur1x);
			}
		}
	}
	RTHOOK(16);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2011, "configuration", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2054, dtype))(Current, ur1x);
	RTHOOK(17);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2027, "launch", loc1))(loc1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef up2
#undef ur1
}

/* {WSF_STANDALONE_SERVICE_LAUNCHER}.on_launched_actions */
EIF_TYPED_VALUE F842_2316 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(2055,Dtype(Current)));
	return r;
}


/* {WSF_STANDALONE_SERVICE_LAUNCHER}.on_stopped_actions */
EIF_TYPED_VALUE F842_2317 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(2056,Dtype(Current)));
	return r;
}


/* {WSF_STANDALONE_SERVICE_LAUNCHER}.on_launched */
void F842_2318 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "on_launched";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 841, Current, 0, 1, 2290);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(841, Current, 2290);
	RTCC(arg1, 841, l_feature_name, 1, RTWCT(2075, dtype, Dftype(Current)), 0x00);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2055, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,288,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(2075, dtype, Dftype(Current));
			typarr0[4] = l_type.annotations | 0xFF00;
			typarr0[5] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = arg1;
	RTAR(tr2,arg1);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4297, "call", tr1))(tr1, ur1x);
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
#undef arg1
}

/* {WSF_STANDALONE_SERVICE_LAUNCHER}.port_number */
EIF_TYPED_VALUE F842_2319 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(2058,Dtype(Current)));
	return r;
}


/* {WSF_STANDALONE_SERVICE_LAUNCHER}.server_name */
EIF_TYPED_VALUE F842_2320 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(2059,Dtype(Current)));
	return r;
}


/* {WSF_STANDALONE_SERVICE_LAUNCHER}.base_url */
EIF_TYPED_VALUE F842_2321 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(2060,Dtype(Current)));
	return r;
}


/* {WSF_STANDALONE_SERVICE_LAUNCHER}.verbose */
EIF_TYPED_VALUE F842_2322 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(2061,Dtype(Current)));
	return r;
}


/* {WSF_STANDALONE_SERVICE_LAUNCHER}.verbose_level */
EIF_TYPED_VALUE F842_2323 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(2062,Dtype(Current)));
	return r;
}


/* {WSF_STANDALONE_SERVICE_LAUNCHER}.max_concurrent_connections */
EIF_TYPED_VALUE F842_2324 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(2063,Dtype(Current)));
	return r;
}


/* {WSF_STANDALONE_SERVICE_LAUNCHER}.single_threaded */
EIF_TYPED_VALUE F842_2325 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "single_threaded";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 841, Current, 0, 0, 2297);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(841, Current, 2297);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2063, dtype));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 1L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {WSF_STANDALONE_SERVICE_LAUNCHER}.max_tcp_clients */
EIF_TYPED_VALUE F842_2326 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(2065,Dtype(Current)));
	return r;
}


/* {WSF_STANDALONE_SERVICE_LAUNCHER}.socket_timeout_ns */
EIF_TYPED_VALUE F842_2327 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT64;
	r.it_n8 = *(EIF_NATURAL_64 *)(Current + RTWA(2066,Dtype(Current)));
	return r;
}


/* {WSF_STANDALONE_SERVICE_LAUNCHER}.socket_recv_timeout_ns */
EIF_TYPED_VALUE F842_2328 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT64;
	r.it_n8 = *(EIF_NATURAL_64 *)(Current + RTWA(2067,Dtype(Current)));
	return r;
}


/* {WSF_STANDALONE_SERVICE_LAUNCHER}.keep_alive_timeout_ns */
EIF_TYPED_VALUE F842_2329 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT64;
	r.it_n8 = *(EIF_NATURAL_64 *)(Current + RTWA(2068,Dtype(Current)));
	return r;
}


/* {WSF_STANDALONE_SERVICE_LAUNCHER}.max_keep_alive_requests */
EIF_TYPED_VALUE F842_2330 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(2069,Dtype(Current)));
	return r;
}


/* {WSF_STANDALONE_SERVICE_LAUNCHER}.max_bind_attempts */
EIF_TYPED_VALUE F842_2331 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(2070,Dtype(Current)));
	return r;
}


/* {WSF_STANDALONE_SERVICE_LAUNCHER}.is_reuse_address_allowed */
EIF_TYPED_VALUE F842_2332 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(2071,Dtype(Current)));
	return r;
}


/* {WSF_STANDALONE_SERVICE_LAUNCHER}.is_secure_connection_supported */
EIF_TYPED_VALUE F842_2333 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_secure_connection_supported";
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 841, Current, 0, 0, 2305);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(841, Current, 2305);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(652, 364))(Current)).it_b);
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {WSF_STANDALONE_SERVICE_LAUNCHER}.is_secure */
EIF_TYPED_VALUE F842_2334 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_secure";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLIU(4);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 841, Current, 2, 0, 2306);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(841, Current, 2306);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = '\0';
	tb2 = '\0';
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2074, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr1);
	if (EIF_TEST(loc1)) {
		tr1 = eif_boxed_item(loc1,1);
		loc2 = RTCCL(tr1);
		tb2 = EIF_TEST(loc2);
	}
	if (tb2) {
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4657, "is_whitespace", loc2))(loc2)).it_b);
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
}

/* {WSF_STANDALONE_SERVICE_LAUNCHER}.secure_settings */
EIF_TYPED_VALUE F842_2335 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(2074,Dtype(Current)));
	return r;
}


/* {WSF_STANDALONE_SERVICE_LAUNCHER}.connector */
EIF_TYPED_VALUE F842_2336 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(2075,Dtype(Current)));
	return r;
}


/* {WSF_STANDALONE_SERVICE_LAUNCHER}.launchable */
EIF_TYPED_VALUE F842_2337 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "launchable";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 841, Current, 0, 0, 2309);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(841, Current, 2309);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = '\0';
	tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2046, 845))(Current)).it_b);
	if (tb2) {
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2058, dtype));
		tb1 = (EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 0L));
	}
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

void EIF_Minit842 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
