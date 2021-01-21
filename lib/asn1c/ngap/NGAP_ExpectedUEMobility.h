/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../support/ngap-r16.1.0/38413-g10.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#ifndef	_NGAP_ExpectedUEMobility_H_
#define	_NGAP_ExpectedUEMobility_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NGAP_ExpectedUEMobility {
	NGAP_ExpectedUEMobility_stationary	= 0,
	NGAP_ExpectedUEMobility_mobile	= 1
	/*
	 * Enumeration is extensible
	 */
} e_NGAP_ExpectedUEMobility;

/* NGAP_ExpectedUEMobility */
typedef long	 NGAP_ExpectedUEMobility_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_NGAP_ExpectedUEMobility_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_NGAP_ExpectedUEMobility;
extern const asn_INTEGER_specifics_t asn_SPC_ExpectedUEMobility_specs_1;
asn_struct_free_f ExpectedUEMobility_free;
asn_struct_print_f ExpectedUEMobility_print;
asn_constr_check_f ExpectedUEMobility_constraint;
per_type_decoder_f ExpectedUEMobility_decode_aper;
per_type_encoder_f ExpectedUEMobility_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_ExpectedUEMobility_H_ */
#include <asn_internal.h>
