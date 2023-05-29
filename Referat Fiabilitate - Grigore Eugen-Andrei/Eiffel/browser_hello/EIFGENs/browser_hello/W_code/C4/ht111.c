/*
 * Code for class HTTP_CONSTANTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F111_1698(EIF_REFERENCE);
extern EIF_TYPED_VALUE F111_1699(EIF_REFERENCE);
extern EIF_TYPED_VALUE F111_1700(EIF_REFERENCE);
extern EIF_TYPED_VALUE F111_1701(EIF_REFERENCE);
extern EIF_TYPED_VALUE F111_1702(EIF_REFERENCE);
extern EIF_TYPED_VALUE F111_1703(EIF_REFERENCE);
extern void EIF_Minit111(void);

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

/* {HTTP_CONSTANTS}.default_http_port */
EIF_TYPED_VALUE F111_1698 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 80L);
	return r;
}

/* {HTTP_CONSTANTS}.default_https_port */
EIF_TYPED_VALUE F111_1699 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 443L);
	return r;
}

/* {HTTP_CONSTANTS}.http_version_1_0 */
RTOID (F111_1700)


EIF_TYPED_VALUE F111_1700 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F111_1700,1671,RTMS_EX_H("HTTP/1.0",8,303094320));
}

/* {HTTP_CONSTANTS}.http_version_1_1 */
RTOID (F111_1701)


EIF_TYPED_VALUE F111_1701 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F111_1701,1672,RTMS_EX_H("HTTP/1.1",8,303094321));
}

/* {HTTP_CONSTANTS}.crlf */
RTOID (F111_1702)


EIF_TYPED_VALUE F111_1702 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F111_1702,1673,RTMS_EX_H("\015\012",2,3338));
}

/* {HTTP_CONSTANTS}.default_bufsize */
EIF_TYPED_VALUE F111_1703 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 16384L);
	return r;
}

void EIF_Minit111 (void)
{
	GTCX
	RTOTS (1700,F111_1700)
	RTOTS (1701,F111_1701)
	RTOTS (1702,F111_1702)
}


#ifdef __cplusplus
}
#endif
