/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../support/ngap-r16.1.0/38413-g10.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#ifndef	_NGAP_UEContextRequest_H_
#define	_NGAP_UEContextRequest_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NGAP_UEContextRequest {
	NGAP_UEContextRequest_requested	= 0
	/*
	 * Enumeration is extensible
	 */
} e_NGAP_UEContextRequest;

/* NGAP_UEContextRequest */
typedef long	 NGAP_UEContextRequest_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_UEContextRequest;
asn_struct_free_f NGAP_UEContextRequest_free;
asn_struct_print_f NGAP_UEContextRequest_print;
asn_constr_check_f NGAP_UEContextRequest_constraint;
per_type_decoder_f NGAP_UEContextRequest_decode_aper;
per_type_encoder_f NGAP_UEContextRequest_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_UEContextRequest_H_ */
#include <asn_internal.h>
