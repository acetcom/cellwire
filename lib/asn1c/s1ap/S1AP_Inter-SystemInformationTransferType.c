/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-PDU-Contents"
 * 	found in "../support/s1ap-r16.1.0/36413-g10.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#include "S1AP_Inter-SystemInformationTransferType.h"

#include "S1AP_RIMTransfer.h"
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_S1AP_Inter_SystemInformationTransferType_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  0,  0,  0,  0 }	/* (0..0,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_S1AP_Inter_SystemInformationTransferType_1[] = {
	{ ATF_POINTER, 0, offsetof(struct S1AP_Inter_SystemInformationTransferType, choice.rIMTransfer),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_RIMTransfer,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"rIMTransfer"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_S1AP_Inter_SystemInformationTransferType_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* rIMTransfer */
};
static asn_CHOICE_specifics_t asn_SPC_S1AP_Inter_SystemInformationTransferType_specs_1 = {
	sizeof(struct S1AP_Inter_SystemInformationTransferType),
	offsetof(struct S1AP_Inter_SystemInformationTransferType, _asn_ctx),
	offsetof(struct S1AP_Inter_SystemInformationTransferType, present),
	sizeof(((struct S1AP_Inter_SystemInformationTransferType *)0)->present),
	asn_MAP_S1AP_Inter_SystemInformationTransferType_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0,
	1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_S1AP_Inter_SystemInformationTransferType = {
	"Inter-SystemInformationTransferType",
	"Inter-SystemInformationTransferType",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_S1AP_Inter_SystemInformationTransferType_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_S1AP_Inter_SystemInformationTransferType_1,
	1,	/* Elements count */
	&asn_SPC_S1AP_Inter_SystemInformationTransferType_specs_1	/* Additional specs */
};

