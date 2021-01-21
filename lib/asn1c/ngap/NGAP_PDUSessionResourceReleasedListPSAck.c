/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../support/ngap-r16.1.0/38413-g10.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#include "NGAP_PDUSessionResourceReleasedListPSAck.h"

#include "NGAP_PDUSessionResourceReleasedItemPSAck.h"
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NGAP_PDUSessionResourceReleasedListPSAck_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 8,  8,  1,  256 }	/* (SIZE(1..256)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_NGAP_PDUSessionResourceReleasedListPSAck_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NGAP_PDUSessionResourceReleasedItemPSAck,
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
		""
		},
};
static const ber_tlv_tag_t asn_DEF_NGAP_PDUSessionResourceReleasedListPSAck_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_NGAP_PDUSessionResourceReleasedListPSAck_specs_1 = {
	sizeof(struct NGAP_PDUSessionResourceReleasedListPSAck),
	offsetof(struct NGAP_PDUSessionResourceReleasedListPSAck, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_NGAP_PDUSessionResourceReleasedListPSAck = {
	"PDUSessionResourceReleasedListPSAck",
	"PDUSessionResourceReleasedListPSAck",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_NGAP_PDUSessionResourceReleasedListPSAck_tags_1,
	sizeof(asn_DEF_NGAP_PDUSessionResourceReleasedListPSAck_tags_1)
		/sizeof(asn_DEF_NGAP_PDUSessionResourceReleasedListPSAck_tags_1[0]), /* 1 */
	asn_DEF_NGAP_PDUSessionResourceReleasedListPSAck_tags_1,	/* Same as above */
	sizeof(asn_DEF_NGAP_PDUSessionResourceReleasedListPSAck_tags_1)
		/sizeof(asn_DEF_NGAP_PDUSessionResourceReleasedListPSAck_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NGAP_PDUSessionResourceReleasedListPSAck_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_NGAP_PDUSessionResourceReleasedListPSAck_1,
	1,	/* Single element */
	&asn_SPC_NGAP_PDUSessionResourceReleasedListPSAck_specs_1	/* Additional specs */
};

