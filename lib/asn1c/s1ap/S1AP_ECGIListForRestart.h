/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "../support/s1ap-r16.1.0/36413-g10.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#ifndef	_S1AP_ECGIListForRestart_H_
#define	_S1AP_ECGIListForRestart_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct S1AP_EUTRAN_CGI;

/* S1AP_ECGIListForRestart */
typedef struct S1AP_ECGIListForRestart {
	A_SEQUENCE_OF(struct S1AP_EUTRAN_CGI) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1AP_ECGIListForRestart_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_ECGIListForRestart;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_ECGIListForRestart_H_ */
#include <asn_internal.h>
