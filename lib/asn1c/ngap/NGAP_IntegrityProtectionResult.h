/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../support/ngap-r16.1.0/38413-g10.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#ifndef	_NGAP_IntegrityProtectionResult_H_
#define	_NGAP_IntegrityProtectionResult_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NGAP_IntegrityProtectionResult {
	NGAP_IntegrityProtectionResult_performed	= 0,
	NGAP_IntegrityProtectionResult_not_performed	= 1
	/*
	 * Enumeration is extensible
	 */
} e_NGAP_IntegrityProtectionResult;

/* NGAP_IntegrityProtectionResult */
typedef long	 NGAP_IntegrityProtectionResult_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_NGAP_IntegrityProtectionResult_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_NGAP_IntegrityProtectionResult;
extern const asn_INTEGER_specifics_t asn_SPC_IntegrityProtectionResult_specs_1;
asn_struct_free_f IntegrityProtectionResult_free;
asn_struct_print_f IntegrityProtectionResult_print;
asn_constr_check_f IntegrityProtectionResult_constraint;
per_type_decoder_f IntegrityProtectionResult_decode_aper;
per_type_encoder_f IntegrityProtectionResult_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_IntegrityProtectionResult_H_ */
#include <asn_internal.h>
