/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../support/ngap-r16.1.0/38413-g10.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#include "NGAP_LastVisitedCellItem.h"

#include "NGAP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_NGAP_LastVisitedCellItem_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NGAP_LastVisitedCellItem, lastVisitedCellInformation),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NGAP_LastVisitedCellInformation,
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
		"lastVisitedCellInformation"
		},
	{ ATF_POINTER, 1, offsetof(struct NGAP_LastVisitedCellItem, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NGAP_ProtocolExtensionContainer_7027P73,
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
		"iE-Extensions"
		},
};
static const int asn_MAP_NGAP_LastVisitedCellItem_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_NGAP_LastVisitedCellItem_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NGAP_LastVisitedCellItem_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* lastVisitedCellInformation */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_NGAP_LastVisitedCellItem_specs_1 = {
	sizeof(struct NGAP_LastVisitedCellItem),
	offsetof(struct NGAP_LastVisitedCellItem, _asn_ctx),
	asn_MAP_NGAP_LastVisitedCellItem_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_NGAP_LastVisitedCellItem_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NGAP_LastVisitedCellItem = {
	"LastVisitedCellItem",
	"LastVisitedCellItem",
	&asn_OP_SEQUENCE,
	asn_DEF_NGAP_LastVisitedCellItem_tags_1,
	sizeof(asn_DEF_NGAP_LastVisitedCellItem_tags_1)
		/sizeof(asn_DEF_NGAP_LastVisitedCellItem_tags_1[0]), /* 1 */
	asn_DEF_NGAP_LastVisitedCellItem_tags_1,	/* Same as above */
	sizeof(asn_DEF_NGAP_LastVisitedCellItem_tags_1)
		/sizeof(asn_DEF_NGAP_LastVisitedCellItem_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NGAP_LastVisitedCellItem_1,
	2,	/* Elements count */
	&asn_SPC_NGAP_LastVisitedCellItem_specs_1	/* Additional specs */
};

