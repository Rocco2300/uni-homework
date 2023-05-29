/*
 * Code for class HTTPD_DEBUG_FACILITIES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F187_2352(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F187_2353(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit187(void);

#ifdef __cplusplus
}
#endif

#include "eif_scoop.h"
#include "eif_helpers.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F187_2353
static EIF_INTEGER_32 inline_F187_2353 (EIF_OBJECT arg1)
{
	return (EIF_INTEGER_32) (RTS_PID(eif_access(arg1)))
	;
}
#define INLINE_F187_2353
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {HTTPD_DEBUG_FACILITIES}.dbglog */
void F187_2352 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "dbglog";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
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
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,loc1);
	RTLR(4,Current);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 186, Current, 1, 1, 2335);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(186, Current, 2335);
	RTCC(arg1, 186, l_feature_name, 1, eif_new_type(307, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not m.ends_with_general (\"%N\")", EX_PRE);
		tr1 = RTMS_EX_H("\012",1,10);
		ur1 = tr1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4687, "ends_with_general", arg1))(arg1, ur1x)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (
		WDBG(186,"dbglog")
	) {
		RTHOOK(2);
		RTDBGAL(1, 0xF8000135, 0, 0); /* loc1 */
		tr1 = RTLN(eif_new_type(309, 0x01).id);
		ui4_1 = ((EIF_INTEGER_32) 24L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4639, Dtype(tr1)))(tr1, ui4_1x);
		RTNHOOK(2,1);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(3);
		tr1 = RTMS_EX_H("[EWF/DBG] <#",12,1239445795);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4901, "append", loc1))(loc1, ur1x);
		RTHOOK(4);
		ur1 = RTCCL(Current);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2088, dtype))(Current, ur1x)).it_i4);
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4741, "append_integer", loc1))(loc1, ui4_1x);
		RTHOOK(5);
		tr1 = RTMS_EX_H("> ",2,15904);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4901, "append", loc1))(loc1, ur1x);
		RTHOOK(6);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4901, "append", loc1))(loc1, ur1x);
		RTHOOK(7);
		tr1 = RTLN(eif_new_type(309, 0x01).id);
		uc1 = (EIF_CHARACTER_8) ' ';
		ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(4877, "count", loc1));
		ui4_1 = ((EIF_INTEGER_32) 0L);
		ti4_2 = eif_max_int32 ((EIF_INTEGER_32) (((EIF_INTEGER_32) 46L) - ti4_1),ui4_1);
		ui4_1 = ti4_2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(4844, Dtype(tr1)))(tr1, uc1x, ui4_1x);
		RTNHOOK(7,1);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4901, "append", loc1))(loc1, ur1x);
		RTHOOK(8);
		tr1 = RTMS_EX_H(" | ",3,2128928);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4901, "append", loc1))(loc1, ur1x);
		RTHOOK(9);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4901, "append", loc1))(loc1, ur1x);
		RTHOOK(10);
		tr1 = RTMS_EX_H("\012",1,10);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4901, "append", loc1))(loc1, ur1x);
		RTHOOK(11);
		ur1 = RTCCL(loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	}
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
#undef ui4_1
#undef uc1
#undef arg1
}

/* {HTTPD_DEBUG_FACILITIES}.processor_id_from_object */
EIF_TYPED_VALUE F187_2353 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "processor_id_from_object";
	RTEX;
#define arg1 arg1x.it_r
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 186, Current, 0, 1, 2336);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(186, Current, 2336);
	uarg1 = (EIF_BOOLEAN) RTS_OU (arg1);
	uarg = uarg1;
	if (uarg) {
		RTS_RC;
		RTS_RS (arg1);
		RTS_RW;
	}
	RTIV(Current, RTAL);
	{
		EIF_OBJECT larg1 = &arg1;
		Result = inline_F187_2353 ((EIF_OBJECT) larg1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	if (uarg) {
		RTS_RD;
	}
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

void EIF_Minit187 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
