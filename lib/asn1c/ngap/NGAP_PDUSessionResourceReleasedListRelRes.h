/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../support/ngap-r16.1.0/38413-g10.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#ifndef	_NGAP_PDUSessionResourceReleasedListRelRes_H_
#define	_NGAP_PDUSessionResourceReleasedListRelRes_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NGAP_PDUSessionResourceReleasedItemRelRes;

/* NGAP_PDUSessionResourceReleasedListRelRes */
typedef struct NGAP_PDUSessionResourceReleasedListRelRes {
	A_SEQUENCE_OF(struct NGAP_PDUSessionResourceReleasedItemRelRes) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGAP_PDUSessionResourceReleasedListRelRes_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_PDUSessionResourceReleasedListRelRes;

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_PDUSessionResourceReleasedListRelRes_H_ */
#include <asn_internal.h>
