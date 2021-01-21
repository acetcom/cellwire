/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../support/ngap-r16.1.0/38413-g10.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#ifndef	_NGAP_BroadcastCancelledAreaList_H_
#define	_NGAP_BroadcastCancelledAreaList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NGAP_BroadcastCancelledAreaList_PR {
	NGAP_BroadcastCancelledAreaList_PR_NOTHING,	/* No components present */
	NGAP_BroadcastCancelledAreaList_PR_cellIDCancelledEUTRA,
	NGAP_BroadcastCancelledAreaList_PR_tAICancelledEUTRA,
	NGAP_BroadcastCancelledAreaList_PR_emergencyAreaIDCancelledEUTRA,
	NGAP_BroadcastCancelledAreaList_PR_cellIDCancelledNR,
	NGAP_BroadcastCancelledAreaList_PR_tAICancelledNR,
	NGAP_BroadcastCancelledAreaList_PR_emergencyAreaIDCancelledNR,
	NGAP_BroadcastCancelledAreaList_PR_choice_Extensions
} NGAP_BroadcastCancelledAreaList_PR;

/* Forward declarations */
struct NGAP_CellIDCancelledEUTRA;
struct NGAP_TAICancelledEUTRA;
struct NGAP_EmergencyAreaIDCancelledEUTRA;
struct NGAP_CellIDCancelledNR;
struct NGAP_TAICancelledNR;
struct NGAP_EmergencyAreaIDCancelledNR;
struct NGAP_ProtocolIE_SingleContainer;

/* NGAP_BroadcastCancelledAreaList */
typedef struct NGAP_BroadcastCancelledAreaList {
	NGAP_BroadcastCancelledAreaList_PR present;
	union NGAP_BroadcastCancelledAreaList_u {
		struct NGAP_CellIDCancelledEUTRA	*cellIDCancelledEUTRA;
		struct NGAP_TAICancelledEUTRA	*tAICancelledEUTRA;
		struct NGAP_EmergencyAreaIDCancelledEUTRA	*emergencyAreaIDCancelledEUTRA;
		struct NGAP_CellIDCancelledNR	*cellIDCancelledNR;
		struct NGAP_TAICancelledNR	*tAICancelledNR;
		struct NGAP_EmergencyAreaIDCancelledNR	*emergencyAreaIDCancelledNR;
		struct NGAP_ProtocolIE_SingleContainer	*choice_Extensions;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGAP_BroadcastCancelledAreaList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_BroadcastCancelledAreaList;

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_BroadcastCancelledAreaList_H_ */
#include <asn_internal.h>
