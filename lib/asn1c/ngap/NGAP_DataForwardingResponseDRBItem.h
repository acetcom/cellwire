/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../support/ngap-r16.1.0/38413-g10.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#ifndef	_NGAP_DataForwardingResponseDRBItem_H_
#define	_NGAP_DataForwardingResponseDRBItem_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NGAP_DRB-ID.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NGAP_UPTransportLayerInformation;
struct NGAP_ProtocolExtensionContainer;

/* NGAP_DataForwardingResponseDRBItem */
typedef struct NGAP_DataForwardingResponseDRBItem {
	NGAP_DRB_ID_t	 dRB_ID;
	struct NGAP_UPTransportLayerInformation	*dLForwardingUP_TNLInformation;	/* OPTIONAL */
	struct NGAP_UPTransportLayerInformation	*uLForwardingUP_TNLInformation;	/* OPTIONAL */
	struct NGAP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGAP_DataForwardingResponseDRBItem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_DataForwardingResponseDRBItem;
extern asn_SEQUENCE_specifics_t asn_SPC_NGAP_DataForwardingResponseDRBItem_specs_1;
extern asn_TYPE_member_t asn_MBR_NGAP_DataForwardingResponseDRBItem_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_DataForwardingResponseDRBItem_H_ */
#include <asn_internal.h>
