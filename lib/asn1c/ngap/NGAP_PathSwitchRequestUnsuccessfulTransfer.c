/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../support/ngap-r16.1.0/38413-g10.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#include "NGAP_PathSwitchRequestUnsuccessfulTransfer.h"

#include "NGAP_ProtocolExtensionContainer.h"
static asn_TYPE_member_t asn_MBR_NGAP_PathSwitchRequestUnsuccessfulTransfer_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NGAP_PathSwitchRequestUnsuccessfulTransfer, cause),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NGAP_Cause,
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
		"cause"
		},
	{ ATF_POINTER, 1, offsetof(struct NGAP_PathSwitchRequestUnsuccessfulTransfer, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NGAP_ProtocolExtensionContainer_7027P86,
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
static const int asn_MAP_NGAP_PathSwitchRequestUnsuccessfulTransfer_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_NGAP_PathSwitchRequestUnsuccessfulTransfer_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NGAP_PathSwitchRequestUnsuccessfulTransfer_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cause */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* iE-Extensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_NGAP_PathSwitchRequestUnsuccessfulTransfer_specs_1 = {
	sizeof(struct NGAP_PathSwitchRequestUnsuccessfulTransfer),
	offsetof(struct NGAP_PathSwitchRequestUnsuccessfulTransfer, _asn_ctx),
	asn_MAP_NGAP_PathSwitchRequestUnsuccessfulTransfer_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_NGAP_PathSwitchRequestUnsuccessfulTransfer_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NGAP_PathSwitchRequestUnsuccessfulTransfer = {
	"PathSwitchRequestUnsuccessfulTransfer",
	"PathSwitchRequestUnsuccessfulTransfer",
	&asn_OP_SEQUENCE,
	asn_DEF_NGAP_PathSwitchRequestUnsuccessfulTransfer_tags_1,
	sizeof(asn_DEF_NGAP_PathSwitchRequestUnsuccessfulTransfer_tags_1)
		/sizeof(asn_DEF_NGAP_PathSwitchRequestUnsuccessfulTransfer_tags_1[0]), /* 1 */
	asn_DEF_NGAP_PathSwitchRequestUnsuccessfulTransfer_tags_1,	/* Same as above */
	sizeof(asn_DEF_NGAP_PathSwitchRequestUnsuccessfulTransfer_tags_1)
		/sizeof(asn_DEF_NGAP_PathSwitchRequestUnsuccessfulTransfer_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NGAP_PathSwitchRequestUnsuccessfulTransfer_1,
	2,	/* Elements count */
	&asn_SPC_NGAP_PathSwitchRequestUnsuccessfulTransfer_specs_1	/* Additional specs */
};

