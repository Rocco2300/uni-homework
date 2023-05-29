/*
 * Code for class HTTP_STATUS_CODE_MESSAGES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F112_1704(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F112_1705(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit112(void);

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

/* {HTTP_STATUS_CODE_MESSAGES}.is_valid_http_status_code */
EIF_TYPED_VALUE F112_1704 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_valid_http_status_code";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 111, Current, 0, 1, 1675);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(111, Current, 1675);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1496, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1556, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= ti4_1) && (EIF_BOOLEAN) (arg1 <= ti4_2));
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

/* {HTTP_STATUS_CODE_MESSAGES}.http_status_code_message */
EIF_TYPED_VALUE F112_1705 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "http_status_code_message";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 111, Current, 0, 1, 1674);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(111, Current, 1674);
	RTIV(Current, RTAL);
	RTHOOK(1);
	switch (arg1) {
		case 100L:
			RTHOOK(2);
			RTDBGAL(0, 0xF8000135, 0,0); /* Result */
			tr1 = RTMS_EX_H("Continue",8,2035097445);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 101L:
			RTHOOK(3);
			RTDBGAL(0, 0xF8000135, 0,0); /* Result */
			tr1 = RTMS_EX_H("Switching Protocols",19,99036275);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 102L:
			RTHOOK(4);
			RTDBGAL(0, 0xF8000135, 0,0); /* Result */
			tr1 = RTMS_EX_H("Processing",10,1807591271);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 200L:
			RTHOOK(5);
			RTDBGAL(0, 0xF8000135, 0,0); /* Result */
			tr1 = RTMS_EX_H("OK",2,20299);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 201L:
			RTHOOK(6);
			RTDBGAL(0, 0xF8000135, 0,0); /* Result */
			tr1 = RTMS_EX_H("Created",7,1222454116);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 202L:
			RTHOOK(7);
			RTDBGAL(0, 0xF8000135, 0,0); /* Result */
			tr1 = RTMS_EX_H("Accepted",8,385886052);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 203L:
			RTHOOK(8);
			RTDBGAL(0, 0xF8000135, 0,0); /* Result */
			tr1 = RTMS_EX_H("Non-Authoritative Information",29,225469550);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 204L:
			RTHOOK(9);
			RTDBGAL(0, 0xF8000135, 0,0); /* Result */
			tr1 = RTMS_EX_H("No Content",10,440539764);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 205L:
			RTHOOK(10);
			RTDBGAL(0, 0xF8000135, 0,0); /* Result */
			tr1 = RTMS_EX_H("Reset Content",13,1200807028);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 206L:
			RTHOOK(11);
			RTDBGAL(0, 0xF8000135, 0,0); /* Result */
			tr1 = RTMS_EX_H("Partial Content",15,993868660);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 207L:
			RTHOOK(12);
			RTDBGAL(0, 0xF8000135, 0,0); /* Result */
			tr1 = RTMS_EX_H("Multi-Status",12,1677333619);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 300L:
			RTHOOK(13);
			RTDBGAL(0, 0xF8000135, 0,0); /* Result */
			tr1 = RTMS_EX_H("Multiple Choices",16,1134913651);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 301L:
			RTHOOK(14);
			RTDBGAL(0, 0xF8000135, 0,0); /* Result */
			tr1 = RTMS_EX_H("Moved Permanently",17,478838905);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 302L:
			RTHOOK(15);
			RTDBGAL(0, 0xF8000135, 0,0); /* Result */
			tr1 = RTMS_EX_H("Found",5,1870504548);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 303L:
			RTHOOK(16);
			RTDBGAL(0, 0xF8000135, 0,0); /* Result */
			tr1 = RTMS_EX_H("See Other",9,1935819122);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 304L:
			RTHOOK(17);
			RTDBGAL(0, 0xF8000135, 0,0); /* Result */
			tr1 = RTMS_EX_H("Not Modified",12,104637284);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 305L:
			RTHOOK(18);
			RTDBGAL(0, 0xF8000135, 0,0); /* Result */
			tr1 = RTMS_EX_H("Use Proxy",9,2023926393);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 306L:
			RTHOOK(19);
			RTDBGAL(0, 0xF8000135, 0,0); /* Result */
			tr1 = RTMS_EX_H("Switch Proxy",12,1183095161);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 307L:
			RTHOOK(20);
			RTDBGAL(0, 0xF8000135, 0,0); /* Result */
			tr1 = RTMS_EX_H("Temporary Redirect",18,1809363828);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 400L:
			RTHOOK(21);
			RTDBGAL(0, 0xF8000135, 0,0); /* Result */
			tr1 = RTMS_EX_H("Bad Request",11,480473204);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 401L:
			RTHOOK(22);
			RTDBGAL(0, 0xF8000135, 0,0); /* Result */
			tr1 = RTMS_EX_H("Unauthorized",12,2043467108);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 402L:
			RTHOOK(23);
			RTDBGAL(0, 0xF8000135, 0,0); /* Result */
			tr1 = RTMS_EX_H("Payment Required",16,595669604);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 403L:
			RTHOOK(24);
			RTDBGAL(0, 0xF8000135, 0,0); /* Result */
			tr1 = RTMS_EX_H("Forbidden",9,1133290094);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 404L:
			RTHOOK(25);
			RTDBGAL(0, 0xF8000135, 0,0); /* Result */
			tr1 = RTMS_EX_H("Not Found",9,519938148);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 405L:
			RTHOOK(26);
			RTDBGAL(0, 0xF8000135, 0,0); /* Result */
			tr1 = RTMS_EX_H("Method Not Allowed",18,1556186724);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 406L:
			RTHOOK(27);
			RTDBGAL(0, 0xF8000135, 0,0); /* Result */
			tr1 = RTMS_EX_H("Not Acceptable",14,1326595941);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 407L:
			RTHOOK(28);
			RTDBGAL(0, 0xF8000135, 0,0); /* Result */
			tr1 = RTMS_EX_H("Proxy Authentication Required",29,295093604);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 408L:
			RTHOOK(29);
			RTDBGAL(0, 0xF8000135, 0,0); /* Result */
			tr1 = RTMS_EX_H("Request Timeout",15,1729348212);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 409L:
			RTHOOK(30);
			RTDBGAL(0, 0xF8000135, 0,0); /* Result */
			tr1 = RTMS_EX_H("Conflict",8,2084989300);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 410L:
			RTHOOK(31);
			RTDBGAL(0, 0xF8000135, 0,0); /* Result */
			tr1 = RTMS_EX_H("Gone",4,1198485093);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 411L:
			RTHOOK(32);
			RTDBGAL(0, 0xF8000135, 0,0); /* Result */
			tr1 = RTMS_EX_H("Length Required",15,1215469156);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 412L:
			RTHOOK(33);
			RTDBGAL(0, 0xF8000135, 0,0); /* Result */
			tr1 = RTMS_EX_H("Precondition Failed",19,99381604);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 413L:
			RTHOOK(34);
			RTDBGAL(0, 0xF8000135, 0,0); /* Result */
			tr1 = RTMS_EX_H("Request Entity Too Large",24,255904869);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 414L:
			RTHOOK(35);
			RTDBGAL(0, 0xF8000135, 0,0); /* Result */
			tr1 = RTMS_EX_H("Request-URI Too Long",20,1098108775);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 415L:
			RTHOOK(36);
			RTDBGAL(0, 0xF8000135, 0,0); /* Result */
			tr1 = RTMS_EX_H("Unsupported Media Type",22,1806357861);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 416L:
			RTHOOK(37);
			RTDBGAL(0, 0xF8000135, 0,0); /* Result */
			tr1 = RTMS_EX_H("Requested Range Not Satisfiable",31,2118876005);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 417L:
			RTHOOK(38);
			RTDBGAL(0, 0xF8000135, 0,0); /* Result */
			tr1 = RTMS_EX_H("Expectation Failed",18,1777869668);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 418L:
			RTHOOK(39);
			RTDBGAL(0, 0xF8000135, 0,0); /* Result */
			tr1 = RTMS_EX_H("I\'m a teapot",12,2019786356);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 421L:
			RTHOOK(40);
			RTDBGAL(0, 0xF8000135, 0,0); /* Result */
			tr1 = RTMS_EX_H("There are too many connections from your internet address",57,608721779);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 422L:
			RTHOOK(41);
			RTDBGAL(0, 0xF8000135, 0,0); /* Result */
			tr1 = RTMS_EX_H("Unprocessable Entity",20,458227577);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 423L:
			RTHOOK(42);
			RTDBGAL(0, 0xF8000135, 0,0); /* Result */
			tr1 = RTMS_EX_H("Locked",6,1818257252);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 424L:
			RTHOOK(43);
			RTDBGAL(0, 0xF8000135, 0,0); /* Result */
			tr1 = RTMS_EX_H("Failed Dependency",17,1405794681);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 425L:
			RTHOOK(44);
			RTDBGAL(0, 0xF8000135, 0,0); /* Result */
			tr1 = RTMS_EX_H("Unordered Collection",20,184548974);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 426L:
			RTHOOK(45);
			RTDBGAL(0, 0xF8000135, 0,0); /* Result */
			tr1 = RTMS_EX_H("Upgrade Required",16,1938052964);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 449L:
			RTHOOK(46);
			RTDBGAL(0, 0xF8000135, 0,0); /* Result */
			tr1 = RTMS_EX_H("Retry With",10,1852474984);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 450L:
			RTHOOK(47);
			RTDBGAL(0, 0xF8000135, 0,0); /* Result */
			tr1 = RTMS_EX_H("Blocked by Windows Parental Controls",36,1954523251);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 500L:
			RTHOOK(48);
			RTDBGAL(0, 0xF8000135, 0,0); /* Result */
			tr1 = RTMS_EX_H("Internal Server Error",21,1474060146);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 501L:
			RTHOOK(49);
			RTDBGAL(0, 0xF8000135, 0,0); /* Result */
			tr1 = RTMS_EX_H("Not Implemented",15,748386148);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 502L:
			RTHOOK(50);
			RTDBGAL(0, 0xF8000135, 0,0); /* Result */
			tr1 = RTMS_EX_H("Bad Gateway",11,1111329657);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 503L:
			RTHOOK(51);
			RTDBGAL(0, 0xF8000135, 0,0); /* Result */
			tr1 = RTMS_EX_H("Service Unavailable",19,706765669);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 504L:
			RTHOOK(52);
			RTDBGAL(0, 0xF8000135, 0,0); /* Result */
			tr1 = RTMS_EX_H("Gateway Timeout",15,1652483444);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 505L:
			RTHOOK(53);
			RTDBGAL(0, 0xF8000135, 0,0); /* Result */
			tr1 = RTMS_EX_H("HTTP Version Not Supported",26,648490084);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 506L:
			RTHOOK(54);
			RTDBGAL(0, 0xF8000135, 0,0); /* Result */
			tr1 = RTMS_EX_H("Variant Also Negotiates",23,1399311731);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 507L:
			RTHOOK(55);
			RTDBGAL(0, 0xF8000135, 0,0); /* Result */
			tr1 = RTMS_EX_H("Insufficient Storage",20,958966629);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 509L:
			RTHOOK(56);
			RTDBGAL(0, 0xF8000135, 0,0); /* Result */
			tr1 = RTMS_EX_H("Bandwidth Limit Exceeded",24,843410532);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 510L:
			RTHOOK(57);
			RTDBGAL(0, 0xF8000135, 0,0); /* Result */
			tr1 = RTMS_EX_H("Not Extended",12,502999396);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 530L:
			RTHOOK(58);
			RTDBGAL(0, 0xF8000135, 0,0); /* Result */
			tr1 = RTMS_EX_H("User access denied",18,1732144484);
			Result = (EIF_REFERENCE) tr1;
			break;
		default:
			RTHOOK(59);
			RTDBGAL(0, 0xF8000135, 0,0); /* Result */
			Result = (EIF_REFERENCE) NULL;
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(60);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef arg1
}

void EIF_Minit112 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
