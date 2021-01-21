/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "../support/s1ap-r16.1.0/36413-g10.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#ifndef	_S1AP_TargetID_H_
#define	_S1AP_TargetID_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1AP_TargetID_PR {
	S1AP_TargetID_PR_NOTHING,	/* No components present */
	S1AP_TargetID_PR_targeteNB_ID,
	S1AP_TargetID_PR_targetRNC_ID,
	S1AP_TargetID_PR_cGI,
	/* Extensions may appear below */
	S1AP_TargetID_PR_targetgNgRanNode_ID
} S1AP_TargetID_PR;

/* Forward declarations */
struct S1AP_TargeteNB_ID;
struct S1AP_TargetRNC_ID;
struct S1AP_CGI;
struct S1AP_TargetNgRanNode_ID;

/* S1AP_TargetID */
typedef struct S1AP_TargetID {
	S1AP_TargetID_PR present;
	union S1AP_TargetID_u {
		struct S1AP_TargeteNB_ID	*targeteNB_ID;
		struct S1AP_TargetRNC_ID	*targetRNC_ID;
		struct S1AP_CGI	*cGI;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
		struct S1AP_TargetNgRanNode_ID	*targetgNgRanNode_ID;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1AP_TargetID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_TargetID;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_TargetID_H_ */
#include <asn_internal.h>
