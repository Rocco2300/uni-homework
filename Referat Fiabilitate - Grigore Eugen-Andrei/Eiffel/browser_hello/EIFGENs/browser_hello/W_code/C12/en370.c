/*
 * Code for class ENCODING_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F370_7703(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F370_7704(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F370_7705(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F370_7706(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F370_7707(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F370_7708(EIF_REFERENCE);
extern EIF_TYPED_VALUE F370_7709(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F370_7710(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F370_7711(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F370_7712(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F370_7713(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F370_7714(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F370_7715(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F370_7716(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F370_7717(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F370_7718(EIF_REFERENCE);
extern void EIF_Minit370(void);

#ifdef __cplusplus
}
#endif

#include <windows.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F370_7714
static EIF_INTEGER_32 inline_F370_7714 (EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	return WideCharToMultiByte (arg1, 0, arg2, arg3, NULL, 0, NULL, NULL);
	;
}
#define INLINE_F370_7714
#endif
#ifndef INLINE_F370_7715
static EIF_INTEGER_32 inline_F370_7715 (EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	return MultiByteToWideChar (arg1, 0, arg2, arg3, NULL, 0);
	;
}
#define INLINE_F370_7715
#endif
#ifndef INLINE_F370_7716
static void inline_F370_7716 (EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4, EIF_INTEGER_32 arg5, EIF_BOOLEAN* arg6, EIF_BOOLEAN* arg7)
{
	DWORD dw;
				BOOL l_lost = EIF_FALSE;
				LPBOOL lpUsedDefaultChar = NULL;
				DWORD dwFlags = WC_NO_BEST_FIT_CHARS;

				if (arg1 == CP_UTF7 || arg1 == CP_UTF8) {
					lpUsedDefaultChar = NULL;
				} else {
					lpUsedDefaultChar = &l_lost;
				}
				
				/* For following values, dwFlags = 0 is required by MSDN
				 * See http://msdn.microsoft.com/en-us/library/windows/desktop/dd374130(v=vs.85).aspx
				 */
				if (arg1 == 50220 || arg1 == 50221 || arg1 == 50222 || arg1 == 50225 || arg1 == 50227 || arg1 == 50229 || arg1 == 65000 || arg1 == 42) {
					dwFlags = 0;
				} else if (arg1 == 65001 || arg1 == 54936) {
					dwFlags = 0;
				} else if (arg1 >= 57002 && arg1 <= 57011) {
					dwFlags = 0;
				}
				
				WideCharToMultiByte ((UINT) arg1, dwFlags, (LPCWSTR) arg2,
					(int) arg3, (LPSTR) arg4, (int) arg5, (LPCCH) NULL, lpUsedDefaultChar);
					
				dw = GetLastError();
				if (dw == ERROR_INSUFFICIENT_BUFFER || dw == ERROR_INVALID_FLAGS || dw == ERROR_INVALID_PARAMETER) {
					*arg6 = 0;
				}
				*arg7 = (l_lost ? EIF_TRUE : EIF_FALSE);
	;
}
#define INLINE_F370_7716
#endif
#ifndef INLINE_F370_7717
static void inline_F370_7717 (EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4, EIF_INTEGER_32 arg5, EIF_BOOLEAN* arg6)
{
	DWORD dw;
    
	MultiByteToWideChar ((UINT) arg1, (DWORD) 0, (LPCCH) arg2,
		(int) arg3, (LPWSTR) arg4, (int) arg5);
	dw = GetLastError();
	if (dw == ERROR_INSUFFICIENT_BUFFER || dw == ERROR_INVALID_FLAGS || dw == ERROR_INVALID_PARAMETER || dw == ERROR_NO_UNICODE_TRANSLATION) {
		*arg6 = 0;
	}
	;
}
#define INLINE_F370_7717
#endif
#ifndef INLINE_F370_7718
static EIF_INTEGER_32 inline_F370_7718 (void)
{
	return sizeof(WCHAR);
	;
}
#define INLINE_F370_7718
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ENCODING_IMP}.convert_to */
void F370_7703 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "convert_to";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc5 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(14);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,ur1);
	RTLR(4,Current);
	RTLR(5,ur2);
	RTLR(6,tr1);
	RTLR(7,loc1);
	RTLR(8,loc2);
	RTLR(9,loc3);
	RTLR(10,tr2);
	RTLR(11,loc6);
	RTLR(12,loc7);
	RTLR(13,tr3);
	RTLIU(14);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_BOOL, &loc4);
	RTLU(SK_BOOL, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	
	RTEAA(l_feature_name, 369, Current, 7, 3, 13508);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(369, Current, 13508);
	RTCC(arg1, 369, l_feature_name, 1, eif_new_type(307, 0x01), 0x01);
	RTCC(arg2, 369, l_feature_name, 2, eif_new_type(301, 0x01), 0x01);
	RTCC(arg3, 369, l_feature_name, 3, eif_new_type(307, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_from_code_page_valid", EX_PRE);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5937, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_to_code_page_valid", EX_PRE);
		ur1 = RTCCL(arg3);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5937, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("code_page_convertible", EX_PRE);
		ur1 = RTCCL(arg1);
		ur2 = RTCCL(arg3);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5939, dtype))(Current, ur1x, ur2x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(4);
		RTCT("a_from_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 5955, 0x04000000, 1); /* last_conversion_lost_data */
	*(EIF_BOOLEAN *)(Current + RTWA(5955, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(6);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4656, "is_empty", arg2))(arg2)).it_b);
	if (tb1) {
		RTHOOK(7);
		RTDBGAA(Current, dtype, 5941, 0x04000000, 1); /* last_conversion_successful */
		*(EIF_BOOLEAN *)(Current + RTWA(5941, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(8);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4653, "is_string_8", arg2))(arg2)).it_b);
		if (tb1) {
			RTHOOK(9);
			RTDBGAA(Current, dtype, 5936, 0xF800012D, 0); /* last_converted_string */
			tr1 = RTMS_EX_H("",0,0);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + RTWA(5936, dtype)) = (EIF_REFERENCE) tr1;
		} else {
			RTHOOK(10);
			RTDBGAA(Current, dtype, 5936, 0xF800012D, 0); /* last_converted_string */
			tr1 = RTMS32_EX_H("",0,0);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + RTWA(5936, dtype)) = (EIF_REFERENCE) tr1;
		}
		RTHOOK(11);
		RTDBGAA(Current, dtype, 5942, 0x04000000, 1); /* last_was_wide_string */
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4654, "is_string_32", arg2))(arg2)).it_b);
		*(EIF_BOOLEAN *)(Current + RTWA(5942, dtype)) = (EIF_BOOLEAN) tb1;
	} else {
		RTHOOK(12);
		RTDBGAL(1, 0xF8000133, 0, 0); /* loc1 */
		ur1 = RTCCL(arg1);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5945, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(13);
		RTDBGAL(2, 0xF8000133, 0, 0); /* loc2 */
		ur1 = RTCCL(arg3);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5945, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc2 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(14);
		RTDBGAL(4, 0x04000000, 1, 0); /* loc4 */
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5949, dtype))(Current, ur1x)).it_b);
		loc4 = (EIF_BOOLEAN) tb1;
		RTHOOK(15);
		RTDBGAL(5, 0x04000000, 1, 0); /* loc5 */
		ur1 = RTCCL(arg3);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5949, dtype))(Current, ur1x)).it_b);
		loc5 = (EIF_BOOLEAN) tb1;
		RTHOOK(16);
		RTDBGAA(Current, dtype, 5941, 0x04000000, 1); /* last_conversion_successful */
		*(EIF_BOOLEAN *)(Current + RTWA(5941, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(17);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5947, dtype))(Current, ur1x)).it_b);
		if (tb1) {
			RTHOOK(18);
			RTDBGAL(3, 0xF8000132, 0, 0); /* loc3 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4698, "as_string_32", arg2))(arg2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc3 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(19);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(691, dtype))(Current)).it_b);
			if ((EIF_BOOLEAN)(loc4 == tb1)) {
				RTHOOK(20);
				RTDBGAL(3, 0xF8000132, 0, 0); /* loc3 */
				ur1 = RTCCL(loc3);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(690, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc3 = (EIF_REFERENCE) RTCCL(tr1);
			}
			RTHOOK(21);
			ur1 = RTCCL(arg3);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5948, dtype))(Current, ur1x)).it_b);
			if (tb1) {
				RTHOOK(22);
				RTDBGAL(3, 0xF8000132, 0, 0); /* loc3 */
				ur1 = RTCCL(loc3);
				tr1 = RTLN(eif_new_type(370, 0x01).id);
				tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5961, 370))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc3 = (EIF_REFERENCE) RTCCL(tr2);
				RTHOOK(23);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(691, dtype))(Current)).it_b);
				if ((EIF_BOOLEAN)(loc5 == tb1)) {
					RTHOOK(24);
					RTDBGAL(6, 0xF8000132, 0, 0); /* loc6 */
					ur1 = RTCCL(loc3);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(689, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					loc6 = (EIF_REFERENCE) RTCCL(tr1);
				} else {
					RTHOOK(25);
					RTDBGAL(6, 0xF8000132, 0, 0); /* loc6 */
					loc6 = (EIF_REFERENCE) RTCCL(loc3);
				}
				RTHOOK(26);
				RTDBGAA(Current, dtype, 5936, 0xF800012D, 0); /* last_converted_string */
				tr1 = RTCCL(loc6);
				RTAR(Current, tr1);
				*(EIF_REFERENCE *)(Current + RTWA(5936, dtype)) = (EIF_REFERENCE) tr1;
			} else {
				RTHOOK(27);
				ur1 = RTCCL(arg3);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5947, dtype))(Current, ur1x)).it_b);
				if (tb1) {
					RTHOOK(28);
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(691, dtype))(Current)).it_b);
					if ((EIF_BOOLEAN)(loc5 == tb1)) {
						RTHOOK(29);
						RTDBGAL(6, 0xF8000132, 0, 0); /* loc6 */
						ur1 = RTCCL(loc3);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(690, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						loc6 = (EIF_REFERENCE) RTCCL(tr1);
					} else {
						RTHOOK(30);
						RTDBGAL(6, 0xF8000132, 0, 0); /* loc6 */
						loc6 = (EIF_REFERENCE) RTCCL(loc3);
					}
					RTHOOK(31);
					RTDBGAA(Current, dtype, 5936, 0xF800012D, 0); /* last_converted_string */
					tr1 = RTCCL(loc6);
					RTAR(Current, tr1);
					*(EIF_REFERENCE *)(Current + RTWA(5936, dtype)) = (EIF_REFERENCE) tr1;
					RTHOOK(32);
					RTDBGAA(Current, dtype, 5942, 0x04000000, 1); /* last_was_wide_string */
					*(EIF_BOOLEAN *)(Current + RTWA(5942, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				} else {
					RTHOOK(33);
					RTDBGAL(7, 0xF8000135, 0, 0); /* loc7 */
					ur1 = RTCCL(loc2);
					ur2 = RTCCL(loc3);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5943, dtype))(Current, ur1x, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					loc7 = (EIF_REFERENCE) RTCCL(tr1);
					RTHOOK(34);
					RTDBGAA(Current, dtype, 5936, 0xF800012D, 0); /* last_converted_string */
					tr1 = RTCCL(loc7);
					RTAR(Current, tr1);
					*(EIF_REFERENCE *)(Current + RTWA(5936, dtype)) = (EIF_REFERENCE) tr1;
				}
			}
		} else {
			RTHOOK(35);
			ur1 = RTCCL(arg1);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5948, dtype))(Current, ur1x)).it_b);
			if (tb1) {
				RTHOOK(36);
				RTDBGAL(3, 0xF8000132, 0, 0); /* loc3 */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4698, "as_string_32", arg2))(arg2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc3 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(37);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(691, dtype))(Current)).it_b);
				if ((EIF_BOOLEAN)(loc4 == tb1)) {
					RTHOOK(38);
					RTDBGAL(3, 0xF8000132, 0, 0); /* loc3 */
					ur1 = RTCCL(loc3);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(689, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					loc3 = (EIF_REFERENCE) RTCCL(tr1);
				}
				RTHOOK(39);
				ur1 = RTCCL(arg3);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5947, dtype))(Current, ur1x)).it_b);
				if (tb1) {
					RTHOOK(40);
					RTDBGAL(3, 0xF8000132, 0, 0); /* loc3 */
					ur1 = RTCCL(loc3);
					tr1 = RTLN(eif_new_type(370, 0x01).id);
					tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5960, 370))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					loc3 = (EIF_REFERENCE) RTCCL(tr2);
					RTHOOK(41);
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(691, dtype))(Current)).it_b);
					if ((EIF_BOOLEAN)(loc5 == tb1)) {
						RTHOOK(42);
						RTDBGAL(6, 0xF8000132, 0, 0); /* loc6 */
						ur1 = RTCCL(loc3);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(690, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						loc6 = (EIF_REFERENCE) RTCCL(tr1);
					} else {
						RTHOOK(43);
						RTDBGAL(6, 0xF8000132, 0, 0); /* loc6 */
						loc6 = (EIF_REFERENCE) RTCCL(loc3);
					}
					RTHOOK(44);
					RTDBGAA(Current, dtype, 5936, 0xF800012D, 0); /* last_converted_string */
					tr1 = RTCCL(loc6);
					RTAR(Current, tr1);
					*(EIF_REFERENCE *)(Current + RTWA(5936, dtype)) = (EIF_REFERENCE) tr1;
					RTHOOK(45);
					RTDBGAA(Current, dtype, 5942, 0x04000000, 1); /* last_was_wide_string */
					*(EIF_BOOLEAN *)(Current + RTWA(5942, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				} else {
					RTHOOK(46);
					ur1 = RTCCL(arg3);
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5948, dtype))(Current, ur1x)).it_b);
					if (tb1) {
						RTHOOK(47);
						tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(691, dtype))(Current)).it_b);
						if ((EIF_BOOLEAN)(loc5 == tb1)) {
							RTHOOK(48);
							RTDBGAL(6, 0xF8000132, 0, 0); /* loc6 */
							ur1 = RTCCL(loc3);
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(689, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							loc6 = (EIF_REFERENCE) RTCCL(tr1);
						} else {
							RTHOOK(49);
							RTDBGAL(6, 0xF8000132, 0, 0); /* loc6 */
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							loc6 = (EIF_REFERENCE) RTCCL(tr1);
						}
						RTHOOK(50);
						RTDBGAA(Current, dtype, 5936, 0xF800012D, 0); /* last_converted_string */
						tr1 = RTCCL(loc6);
						RTAR(Current, tr1);
						*(EIF_REFERENCE *)(Current + RTWA(5936, dtype)) = (EIF_REFERENCE) tr1;
					} else {
						RTHOOK(51);
						RTDBGAL(6, 0xF8000132, 0, 0); /* loc6 */
						ur1 = RTCCL(loc3);
						tr1 = RTLN(eif_new_type(370, 0x01).id);
						tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5960, 370))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						loc6 = (EIF_REFERENCE) RTCCL(tr2);
						RTHOOK(52);
						RTDBGAL(7, 0xF8000135, 0, 0); /* loc7 */
						ur1 = RTCCL(loc2);
						ur2 = RTCCL(loc6);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5943, dtype))(Current, ur1x, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						loc7 = (EIF_REFERENCE) RTCCL(tr1);
						RTHOOK(53);
						RTDBGAA(Current, dtype, 5936, 0xF800012D, 0); /* last_converted_string */
						tr1 = RTCCL(loc7);
						RTAR(Current, tr1);
						*(EIF_REFERENCE *)(Current + RTWA(5936, dtype)) = (EIF_REFERENCE) tr1;
					}
				}
			} else {
				RTHOOK(54);
				RTDBGAL(3, 0xF8000132, 0, 0); /* loc3 */
				ur1 = RTCCL(loc1);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4655, "is_valid_as_string_8", arg2))(arg2)).it_b);
				if (tb1) {
					RTHOOK(55);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4692, "to_string_8", arg2))(arg2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					tr1 = RTCCL(tr1);
				} else {
					RTHOOK(56);
					ur2 = RTCCL(arg2);
					tr2 = RTLN(eif_new_type(21, 0x00).id);
					tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(335, 21))(tr2, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					tr1 = RTCCL(tr3);
				}
				ur2 = RTCCL(tr1);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5944, dtype))(Current, ur1x, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc3 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(57);
				ur1 = RTCCL(arg3);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5947, dtype))(Current, ur1x)).it_b);
				if (tb1) {
					RTHOOK(58);
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(691, dtype))(Current)).it_b);
					if ((EIF_BOOLEAN)(loc5 == tb1)) {
						RTHOOK(59);
						RTDBGAL(6, 0xF8000132, 0, 0); /* loc6 */
						ur1 = RTCCL(loc3);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(690, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						loc6 = (EIF_REFERENCE) RTCCL(tr1);
					} else {
						RTHOOK(60);
						RTDBGAL(6, 0xF8000132, 0, 0); /* loc6 */
						loc6 = (EIF_REFERENCE) RTCCL(loc3);
					}
					RTHOOK(61);
					RTDBGAA(Current, dtype, 5936, 0xF800012D, 0); /* last_converted_string */
					tr1 = RTCCL(loc6);
					RTAR(Current, tr1);
					*(EIF_REFERENCE *)(Current + RTWA(5936, dtype)) = (EIF_REFERENCE) tr1;
					RTHOOK(62);
					RTDBGAA(Current, dtype, 5942, 0x04000000, 1); /* last_was_wide_string */
					*(EIF_BOOLEAN *)(Current + RTWA(5942, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				} else {
					RTHOOK(63);
					ur1 = RTCCL(arg3);
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5948, dtype))(Current, ur1x)).it_b);
					if (tb1) {
						RTHOOK(64);
						RTDBGAL(3, 0xF8000132, 0, 0); /* loc3 */
						ur1 = RTCCL(loc3);
						tr1 = RTLN(eif_new_type(370, 0x01).id);
						tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5961, 370))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						loc3 = (EIF_REFERENCE) RTCCL(tr2);
						RTHOOK(65);
						tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(691, dtype))(Current)).it_b);
						if ((EIF_BOOLEAN)(loc5 == tb1)) {
							RTHOOK(66);
							RTDBGAL(6, 0xF8000132, 0, 0); /* loc6 */
							ur1 = RTCCL(loc3);
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(689, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							loc6 = (EIF_REFERENCE) RTCCL(tr1);
						} else {
							RTHOOK(67);
							RTDBGAL(6, 0xF8000132, 0, 0); /* loc6 */
							loc6 = (EIF_REFERENCE) RTCCL(loc3);
						}
						RTHOOK(68);
						RTDBGAA(Current, dtype, 5936, 0xF800012D, 0); /* last_converted_string */
						tr1 = RTCCL(loc6);
						RTAR(Current, tr1);
						*(EIF_REFERENCE *)(Current + RTWA(5936, dtype)) = (EIF_REFERENCE) tr1;
					} else {
						RTHOOK(69);
						RTDBGAL(7, 0xF8000135, 0, 0); /* loc7 */
						ur1 = RTCCL(loc2);
						ur2 = RTCCL(loc3);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5943, dtype))(Current, ur1x, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						loc7 = (EIF_REFERENCE) RTCCL(tr1);
						RTHOOK(70);
						RTDBGAA(Current, dtype, 5936, 0xF800012D, 0); /* last_converted_string */
						tr1 = RTCCL(loc7);
						RTAR(Current, tr1);
						*(EIF_REFERENCE *)(Current + RTWA(5936, dtype)) = (EIF_REFERENCE) tr1;
					}
				}
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(71);
		RTCT("success_implies_not_void", EX_POST);
		tb1 = '\01';
		tb2 = *(EIF_BOOLEAN *)(Current + RTWA(5941, dtype));
		if (tb2) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5934, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tb1 = (EIF_BOOLEAN)(tr1 != NULL);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(72);
		RTCT("success_implies_not_void", EX_POST);
		tb1 = '\01';
		tb2 = *(EIF_BOOLEAN *)(Current + RTWA(5941, dtype));
		if (tb2) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5936, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tb1 = (EIF_BOOLEAN)(tr1 != NULL);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(73);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(12);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef arg3
#undef arg2
#undef arg1
}

/* {ENCODING_IMP}.wide_char_to_multi_byte */
EIF_TYPED_VALUE F370_7704 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "wide_char_to_multi_byte";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_TYPED_VALUE up4x = {{0}, SK_POINTER};
#define up4 up4x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc2);
	RTLR(3,ur1);
	RTLR(4,Current);
	RTLR(5,tr1);
	RTLR(6,loc3);
	RTLR(7,Result);
	RTLIU(8);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 369, Current, 3, 2, 13509);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(369, Current, 13509);
	RTCC(arg1, 369, l_feature_name, 1, eif_new_type(307, 0x01), 0x01);
	RTCC(arg2, 369, l_feature_name, 2, eif_new_type(306, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(2, 0xF80000D9, 0, 0); /* loc2 */
	ur1 = RTCCL(arg2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(681, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4704, "to_integer", arg1))(arg1)).it_i4);
	ui4_1 = ti4_1;
	tp1 = *(EIF_POINTER *)(loc2 + RTVA(2402, "item", loc2));
	up1 = tp1;
	ti4_2 = *(EIF_INTEGER_32 *)(arg2 + RTVA(4797, "count", arg2));
	ui4_2 = ti4_2;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5950, dtype))(Current, ui4_1x, up1x, ui4_2x)).it_i4);
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	RTDBGAL(3, 0xF80000D9, 0, 0); /* loc3 */
	tr1 = RTLN(eif_new_type(217, 0x01).id);
	ui4_1 = loc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2396, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(3,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4704, "to_integer", arg1))(arg1)).it_i4);
	ui4_1 = ti4_1;
	tp1 = *(EIF_POINTER *)(loc2 + RTVA(2402, "item", loc2));
	up1 = tp1;
	ti4_2 = *(EIF_INTEGER_32 *)(arg2 + RTVA(4797, "count", arg2));
	ui4_2 = ti4_2;
	tp2 = *(EIF_POINTER *)(loc3 + RTVA(2402, "item", loc3));
	up2 = tp2;
	ui4_3 = loc1;
	up3 = (EIF_BOOLEAN *) &(*(EIF_BOOLEAN *)(Current + RTWA(5941, dtype)));
	up4 = (EIF_BOOLEAN *) &(*(EIF_BOOLEAN *)(Current + RTWA(5955, dtype)));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5952, dtype))(Current, ui4_1x, up1x, ui4_2x, up2x, ui4_3x, up3x, up4x);
	RTHOOK(5);
	RTDBGAL(0, 0xF8000135, 0,0); /* Result */
	tp1 = *(EIF_POINTER *)(loc3 + RTVA(2402, "item", loc3));
	up1 = tp1;
	ui4_1 = loc1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(682, dtype))(Current, up1x, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef up3
#undef up4
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef arg2
#undef arg1
}

/* {ENCODING_IMP}.multi_byte_to_wide_char */
EIF_TYPED_VALUE F370_7705 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "multi_byte_to_wide_char";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc2);
	RTLR(3,ur1);
	RTLR(4,Current);
	RTLR(5,tr1);
	RTLR(6,loc3);
	RTLR(7,Result);
	RTLIU(8);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 369, Current, 3, 2, 13510);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(369, Current, 13510);
	RTCC(arg1, 369, l_feature_name, 1, eif_new_type(307, 0x01), 0x01);
	RTCC(arg2, 369, l_feature_name, 2, eif_new_type(309, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(2, 0xF80000D9, 0, 0); /* loc2 */
	ur1 = RTCCL(arg2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(680, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4704, "to_integer", arg1))(arg1)).it_i4);
	ui4_1 = ti4_1;
	tp1 = *(EIF_POINTER *)(loc2 + RTVA(2402, "item", loc2));
	up1 = tp1;
	ti4_2 = *(EIF_INTEGER_32 *)(arg2 + RTVA(4877, "count", arg2));
	ui4_2 = ti4_2;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5951, dtype))(Current, ui4_1x, up1x, ui4_2x)).it_i4);
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	RTDBGAL(3, 0xF80000D9, 0, 0); /* loc3 */
	tr1 = RTLN(eif_new_type(217, 0x01).id);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5954, dtype))(Current)).it_i4);
	ui4_1 = (EIF_INTEGER_32) (loc1 * ti4_1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2396, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(3,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4704, "to_integer", arg1))(arg1)).it_i4);
	ui4_1 = ti4_1;
	tp1 = *(EIF_POINTER *)(loc2 + RTVA(2402, "item", loc2));
	up1 = tp1;
	ti4_2 = *(EIF_INTEGER_32 *)(arg2 + RTVA(4877, "count", arg2));
	ui4_2 = ti4_2;
	tp2 = *(EIF_POINTER *)(loc3 + RTVA(2402, "item", loc3));
	up2 = tp2;
	ui4_3 = loc1;
	up3 = (EIF_BOOLEAN *) &(*(EIF_BOOLEAN *)(Current + RTWA(5941, dtype)));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5953, dtype))(Current, ui4_1x, up1x, ui4_2x, up2x, ui4_3x, up3x);
	RTHOOK(5);
	RTDBGAL(0, 0xF8000132, 0,0); /* Result */
	tp1 = *(EIF_POINTER *)(loc3 + RTVA(2402, "item", loc3));
	up1 = tp1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5954, dtype))(Current)).it_i4);
	ui4_1 = (EIF_INTEGER_32) (loc1 * ti4_1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(683, dtype))(Current, up1x, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef up3
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef arg2
#undef arg1
}

/* {ENCODING_IMP}.is_code_page_valid */
EIF_TYPED_VALUE F370_7706 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_code_page_valid";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 369, Current, 0, 1, 13511);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(369, Current, 13511);
	RTCC(arg1, 369, l_feature_name, 1, eif_new_type(307, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4656, "is_empty", arg1))(arg1)).it_b);
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		RTHOOK(2);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5946, dtype))(Current, ur1x)).it_b);
		Result = (EIF_BOOLEAN) tb1;
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
#undef ur1
#undef arg1
}

/* {ENCODING_IMP}.is_code_page_convertible */
EIF_TYPED_VALUE F370_7707 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "is_code_page_convertible";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 369, Current, 0, 2, 13512);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(369, Current, 13512);
	RTCC(arg1, 369, l_feature_name, 1, eif_new_type(307, 0x01), 0x01);
	RTCC(arg2, 369, l_feature_name, 2, eif_new_type(307, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg2
#undef arg1
}

/* {ENCODING_IMP}.last_conversion_lost_data */
EIF_TYPED_VALUE F370_7708 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(5955,Dtype(Current)));
	return r;
}


/* {ENCODING_IMP}.platform_code_page_from_name */
EIF_TYPED_VALUE F370_7709 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "platform_code_page_from_name";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
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
	RTLR(3,loc1);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLR(6,Result);
	RTLIU(7);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 369, Current, 1, 1, 13514);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(369, Current, 13514);
	RTCC(arg1, 369, l_feature_name, 1, eif_new_type(307, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_code_page_name_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_code_page_name_not_empty", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4656, "is_empty", arg1))(arg1)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_code_page_valid", EX_PRE);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5937, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	RTCT0("from_precondition", EX_CHECK);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(676, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(4,1);
	ur1 = RTCCL(arg1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4073, "item", tr1))(tr1, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	loc1 = RTCCL(tr2);
	if (EIF_TEST(loc1)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(5);
	RTDBGAL(0, 0xF8000133, 0,0); /* Result */
	Result = (EIF_REFERENCE) RTCCL(loc1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef arg1
}

/* {ENCODING_IMP}.is_known_code_page */
EIF_TYPED_VALUE F370_7710 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_known_code_page";
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
	
	RTEAA(l_feature_name, 369, Current, 0, 1, 13515);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(369, Current, 13515);
	RTCC(arg1, 369, l_feature_name, 1, eif_new_type(307, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_code_page_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_code_page_not_empty", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4656, "is_empty", arg1))(arg1)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(676, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	ur1 = RTCCL(arg1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3791, "has", tr1))(tr1, ur1x)).it_b);
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
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

/* {ENCODING_IMP}.is_two_byte_code_page */
EIF_TYPED_VALUE F370_7711 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_two_byte_code_page";
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
	
	RTEAA(l_feature_name, 369, Current, 0, 1, 13516);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(369, Current, 13516);
	RTCC(arg1, 369, l_feature_name, 1, eif_new_type(307, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_code_page_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_code_page_not_empty", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4656, "is_empty", arg1))(arg1)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(677, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	ur1 = RTCCL(arg1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3791, "has", tr1))(tr1, ur1x)).it_b);
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
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

/* {ENCODING_IMP}.is_four_bype_code_page */
EIF_TYPED_VALUE F370_7712 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_four_bype_code_page";
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
	
	RTEAA(l_feature_name, 369, Current, 0, 1, 13517);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(369, Current, 13517);
	RTCC(arg1, 369, l_feature_name, 1, eif_new_type(307, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_code_page_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_code_page_not_empty", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4656, "is_empty", arg1))(arg1)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(678, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	ur1 = RTCCL(arg1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3791, "has", tr1))(tr1, ur1x)).it_b);
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
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

/* {ENCODING_IMP}.is_big_endian_code_page */
EIF_TYPED_VALUE F370_7713 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_big_endian_code_page";
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
	
	RTEAA(l_feature_name, 369, Current, 0, 1, 13518);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(369, Current, 13518);
	RTCC(arg1, 369, l_feature_name, 1, eif_new_type(307, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_code_page_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_code_page_not_empty", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4656, "is_empty", arg1))(arg1)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(679, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	ur1 = RTCCL(arg1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3791, "has", tr1))(tr1, ur1x)).it_b);
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
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

/* {ENCODING_IMP}.cwin_widechartomultibyte_buffer_length */
EIF_TYPED_VALUE F370_7714 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "cwin_widechartomultibyte_buffer_length";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_p
#define arg3 arg3x.it_i4
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 369, Current, 0, 3, 13519);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(369, Current, 13519);
	RTIV(Current, RTAL);
	Result = inline_F370_7714 ((EIF_INTEGER_32) arg1, (EIF_POINTER) arg2, (EIF_INTEGER_32) arg3);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg3
#undef arg2
#undef arg1
}

/* {ENCODING_IMP}.cwin_multibytetowidechar_buffer_length */
EIF_TYPED_VALUE F370_7715 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "cwin_multibytetowidechar_buffer_length";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_p
#define arg3 arg3x.it_i4
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 369, Current, 0, 3, 13520);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(369, Current, 13520);
	RTIV(Current, RTAL);
	Result = inline_F370_7715 ((EIF_INTEGER_32) arg1, (EIF_POINTER) arg2, (EIF_INTEGER_32) arg3);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg3
#undef arg2
#undef arg1
}

/* {ENCODING_IMP}.cwin_wide_char_to_multi_byte */
void F370_7716 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x)
{
	GTCX
	char *l_feature_name = "cwin_wide_char_to_multi_byte";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_p
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_p
#define arg5 arg5x.it_i4
#define arg6 arg6x.it_p
#define arg7 arg7x.it_p
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg7x.type & SK_HEAD) == SK_REF) arg7x.it_p = * (EIF_BOOLEAN* *) arg7x.it_r;
	if ((arg6x.type & SK_HEAD) == SK_REF) arg6x.it_p = * (EIF_BOOLEAN* *) arg6x.it_r;
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_i4 = * (EIF_INTEGER_32 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_p = * (EIF_POINTER *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_POINTER,&arg4);
	RTLU(SK_INT32,&arg5);
	RTLU(SK_POINTER,&arg6);
	RTLU(SK_POINTER,&arg7);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 369, Current, 0, 7, 13521);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(369, Current, 13521);
	RTIV(Current, RTAL);
	inline_F370_7716 ((EIF_INTEGER_32) arg1, (EIF_POINTER) arg2, (EIF_INTEGER_32) arg3, (EIF_POINTER) arg4, (EIF_INTEGER_32) arg5, (EIF_BOOLEAN*) arg6, (EIF_BOOLEAN*) arg7);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(9);
	RTEE;
#undef arg7
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {ENCODING_IMP}.cwin_multi_byte_to_wide_char */
void F370_7717 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x)
{
	GTCX
	char *l_feature_name = "cwin_multi_byte_to_wide_char";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_p
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_p
#define arg5 arg5x.it_i4
#define arg6 arg6x.it_p
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg6x.type & SK_HEAD) == SK_REF) arg6x.it_p = * (EIF_BOOLEAN* *) arg6x.it_r;
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_i4 = * (EIF_INTEGER_32 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_p = * (EIF_POINTER *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_POINTER,&arg4);
	RTLU(SK_INT32,&arg5);
	RTLU(SK_POINTER,&arg6);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 369, Current, 0, 6, 13522);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(369, Current, 13522);
	RTIV(Current, RTAL);
	inline_F370_7717 ((EIF_INTEGER_32) arg1, (EIF_POINTER) arg2, (EIF_INTEGER_32) arg3, (EIF_POINTER) arg4, (EIF_INTEGER_32) arg5, (EIF_BOOLEAN*) arg6);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(8);
	RTEE;
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {ENCODING_IMP}.wchar_length */
EIF_TYPED_VALUE F370_7718 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "wchar_length";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 369, Current, 0, 0, 13523);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(369, Current, 13523);
	RTIV(Current, RTAL);
	Result = inline_F370_7718 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

void EIF_Minit370 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif