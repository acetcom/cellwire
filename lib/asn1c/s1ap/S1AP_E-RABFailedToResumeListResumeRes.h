/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-PDU-Contents"
 * 	found in "../support/s1ap-r16.1.0/36413-g10.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#ifndef	_S1AP_E_RABFailedToResumeListResumeRes_H_
#define	_S1AP_E_RABFailedToResumeListResumeRes_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S1AP_E-RAB-IE-ContainerList.h"

#ifdef __cplusplus
extern "C" {
#endif

/* S1AP_E-RABFailedToResumeListResumeRes */
typedef S1AP_E_RAB_IE_ContainerList_1199P9_t	 S1AP_E_RABFailedToResumeListResumeRes_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_E_RABFailedToResumeListResumeRes;
asn_struct_free_f S1AP_E_RABFailedToResumeListResumeRes_free;
asn_struct_print_f S1AP_E_RABFailedToResumeListResumeRes_print;
asn_constr_check_f S1AP_E_RABFailedToResumeListResumeRes_constraint;
per_type_decoder_f S1AP_E_RABFailedToResumeListResumeRes_decode_aper;
per_type_encoder_f S1AP_E_RABFailedToResumeListResumeRes_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_E_RABFailedToResumeListResumeRes_H_ */
#include <asn_internal.h>
