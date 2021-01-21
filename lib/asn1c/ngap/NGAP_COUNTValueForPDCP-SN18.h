/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../support/ngap-r16.1.0/38413-g10.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#ifndef	_NGAP_COUNTValueForPDCP_SN18_H_
#define	_NGAP_COUNTValueForPDCP_SN18_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NGAP_ProtocolExtensionContainer;

/* NGAP_COUNTValueForPDCP-SN18 */
typedef struct NGAP_COUNTValueForPDCP_SN18 {
	long	 pDCP_SN18;
	long	 hFN_PDCP_SN18;
	struct NGAP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGAP_COUNTValueForPDCP_SN18_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_COUNTValueForPDCP_SN18;
extern asn_SEQUENCE_specifics_t asn_SPC_NGAP_COUNTValueForPDCP_SN18_specs_1;
extern asn_TYPE_member_t asn_MBR_NGAP_COUNTValueForPDCP_SN18_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_COUNTValueForPDCP_SN18_H_ */
#include <asn_internal.h>
