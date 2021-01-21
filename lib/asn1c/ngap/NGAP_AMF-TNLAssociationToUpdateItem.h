/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../support/ngap-r16.1.0/38413-g10.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#ifndef	_NGAP_AMF_TNLAssociationToUpdateItem_H_
#define	_NGAP_AMF_TNLAssociationToUpdateItem_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NGAP_CPTransportLayerInformation.h"
#include "NGAP_TNLAssociationUsage.h"
#include "NGAP_TNLAddressWeightFactor.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NGAP_ProtocolExtensionContainer;

/* NGAP_AMF-TNLAssociationToUpdateItem */
typedef struct NGAP_AMF_TNLAssociationToUpdateItem {
	NGAP_CPTransportLayerInformation_t	 aMF_TNLAssociationAddress;
	NGAP_TNLAssociationUsage_t	*tNLAssociationUsage;	/* OPTIONAL */
	NGAP_TNLAddressWeightFactor_t	*tNLAddressWeightFactor;	/* OPTIONAL */
	struct NGAP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGAP_AMF_TNLAssociationToUpdateItem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_AMF_TNLAssociationToUpdateItem;
extern asn_SEQUENCE_specifics_t asn_SPC_NGAP_AMF_TNLAssociationToUpdateItem_specs_1;
extern asn_TYPE_member_t asn_MBR_NGAP_AMF_TNLAssociationToUpdateItem_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_AMF_TNLAssociationToUpdateItem_H_ */
#include <asn_internal.h>
