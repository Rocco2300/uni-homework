/*
 * Code for class WGI_CGI_CONNECTOR [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F853_3902(EIF_REFERENCE);
extern EIF_TYPED_VALUE F853_3903(EIF_REFERENCE);
extern void F853_3904(EIF_REFERENCE);
extern void EIF_Minit853(void);

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

/* {WGI_CGI_CONNECTOR}.name */
RTOID (F853_3902)


EIF_TYPED_VALUE F853_3902 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F853_3902,3866,RTMS_EX_H("CGI",3,4409161));
}

/* {WGI_CGI_CONNECTOR}.version */
RTOID (F853_3903)


EIF_TYPED_VALUE F853_3903 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F853_3903,3867,RTMS_EX_H("0.1",3,3157553));
}

/* {WGI_CGI_CONNECTOR}.launch */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F853_3904 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "launch";
	RTEX;
	RTED;
	EIF_REFERENCE EIF_VOLATILE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc3 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN EIF_VOLATILE loc4 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	RTS_SDX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr2 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr3 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTDT;
	RTLD;
	RTXD;
	RTLXD;
	
	RTLI(11);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,ur1);
	RTLR(6,ur2);
	RTLR(7,ur3);
	RTLR(8,loc2);
	RTLR(9,loc3);
	RTLR(10,saved_except);
	RTLIU(11);
	RTXSLS;
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_BOOL, &loc4);
	RTLXL;
	
	RTEAA(l_feature_name, 852, Current, 4, 0, 3867);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(852, Current, 3867);
	RTIV(Current, RTAL);
	RTE_T
	RTHOOK(1);
	if ((EIF_BOOLEAN) !loc4) {
		RTHOOK(2);
		RTDBGAL(1, 0xF8000045, 0, 0); /* loc1 */
		tr1 = RTLN(eif_new_type(69, 0x01).id);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2204, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(2,1);
		tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2785, "starting_environment", tr2))(tr2)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ur1 = RTCCL(tr3);
		tr2 = RTLN(eif_new_type(383, 0x01).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(6160, Dtype(tr2)))(tr2);
		RTNHOOK(2,2);
		ur2 = RTCCL(tr2);
		ur3 = RTCCL(Current);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(1040, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
		RTNHOOK(2,3);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(3);
		RTDBGAL(2, 0xF8000066, 0, 0); /* loc2 */
		tr1 = RTLN(eif_new_type(102, 0x01).id);
		tr2 = RTLN(eif_new_type(382, 0x01).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(6159, Dtype(tr2)))(tr2);
		RTNHOOK(3,1);
		ur1 = RTCCL(tr2);
		tr3 = RTLN(eif_new_type(381, 0x01).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(6157, Dtype(tr3)))(tr3);
		RTNHOOK(3,2);
		ur2 = RTCCL(tr3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(1409, Dtype(tr1)))(tr1, ur1x, ur2x);
		RTNHOOK(3,3);
		loc2 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(4);
		RTDBGAL(3, 0xF8000040, 0, 0); /* loc3 */
		tr1 = RTLNSMART(RTWCT(3423, dtype, Dftype(Current)).id);
		ur1 = RTCCL(loc1);
		ur2 = RTCCL(loc2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(969, Dtype(tr1)))(tr1, ur1x, ur2x);
		RTNHOOK(4,1);
		loc3 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(5);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(973, "execute", loc3))(loc3);
		RTHOOK(6);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1390, "push", loc2))(loc2);
		RTHOOK(7);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(976, "clean", loc3))(loc3);
	} else {
		RTHOOK(8);
		if ((EIF_BOOLEAN)(loc3 != NULL)) {
			RTHOOK(9);
			tr1 = RTLN(eif_new_type(75, 0x01).id);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
			RTNHOOK(9,1);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1140, "last_exception", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(974, "execute_rescue", loc3))(loc3, ur1x);
			RTHOOK(10);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(976, "clean", loc3))(loc3);
		} else {
			RTHOOK(11);
			tr1 = RTLN(eif_new_type(263, 0x01).id);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
			RTNHOOK(11,1);
			ur1 = RTCCL(loc1);
			ur2 = RTCCL(loc2);
			tr2 = RTLN(eif_new_type(75, 0x01).id);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr2)))(tr2);
			RTNHOOK(11,2);
			tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1140, "last_exception", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur3 = RTCCL(tr3);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3430, "execute", tr1))(tr1, ur1x, ur2x, ur3x);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTLXE;
	RTXSC;
	RTS_SRR
	RTHOOK(12);
	if ((EIF_BOOLEAN) !loc4) {
		RTHOOK(13);
		RTDBGAL(4, 0x04000000, 1, 0); /* loc4 */
		loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(14);
		RTTS;
		RTPS;
		RTER;
	}
	RTMD(0);
	/* NOTREACHED */
	RTE_EE
	RTHOOK(15);
	RTDBGLE;
	RTMD(0);
	RTEOK;
	RTLE;
	RTLO(6);
#undef up1
#undef up2
#undef ur1
#undef ur2
#undef ur3
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

void EIF_Minit853 (void)
{
	GTCX
	RTOTS (3902,F853_3902)
	RTOTS (3903,F853_3903)
}


#ifdef __cplusplus
}
#endif
