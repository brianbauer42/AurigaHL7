/*
 * hacca - C Toolkit for the HL7 Protocol
 *
 * Warning: This file was automatically generated by [hawk], please do not edit.
 *          Thu 25 Jun 18:59:08 CEST 2020
 *
 * R. Carbone (rocco@tecsiel.it)
 * Jun 2020
 *
 * SPDX-License-Identifier: BSD-2-Clause-FreeBSD
 *
 * This file was developed as part of the ongoing activities related
 * to the design, implementation and execution of interoperability tests
 * between hacca-based versus AurigaHL7-based applications.
 *
 * In more details I decided to extend AurigaHL7 C++ Library with header files
 * implementing HL7 structures of the version 2.8.1 of the protocol (April 2014)
 * because the version 2.4 distributed with AurigaHL7 is a bit outdated (October 2000).
 *
 * All files in this fork was automatically generated by hacca-based tool [hawk]
 * and strictly follow the syntax and convention originally defined
 * by Auriga HL7 C++ Library just as form of continuity, convenience
 * and respect for their superb work.
 */


#ifndef __CER_v281_H__
#define __CER_v281_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/DTM.h"
#include "../datatype/ED.h"
#include "../datatype/EI.h"
#include "../datatype/ID.h"
#include "../datatype/SI.h"
#include "../datatype/ST.h"
#include "../datatype/XCN.h"
#include "../datatype/XON.h"

namespace HL7_281 {

/* Certificate Detail */
class CER : public HL7Segment {
 public:
  CER() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    CER_1,
    CER_2,
    CER_3,
    CER_4,
    CER_5,
    CER_6,
    CER_7,
    CER_8,
    CER_9,
    CER_10,
    CER_11,
    CER_12,
    CER_13,
    CER_14,
    CER_15,
    CER_16,
    CER_17,
    CER_18,
    CER_19,
    CER_20,
    CER_21,
    CER_22,
    CER_23,
    CER_24,
    CER_25,
    CER_26,
    CER_27,
    CER_28,
    CER_29,
    CER_30,
    CER_31,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "CER"; }
  CER* create() const { return new CER(); }

 private:
  void init() {
    setName("CER");
    /* Init members */
    addObject<SI>(CER_1, "CER.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CER_2, "CER.2", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CER_3, "CER.3", HL7::initialized, HL7::repetition_off);
    addObject<XON>(CER_4, "CER.4", HL7::initialized, HL7::repetition_off);
    addObject<XCN>(CER_5, "CER.5", HL7::initialized, HL7::repetition_off);
    addObject<ED>(CER_6, "CER.6", HL7::initialized, HL7::repetition_off);
    addObject<ID>(CER_7, "CER.7", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(CER_8, "CER.8", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(CER_9, "CER.9", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(CER_10, "CER.10", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(CER_11, "CER.11", HL7::initialized, HL7::repetition_off);
    addObject<EI>(CER_12, "CER.12", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CER_13, "CER.13", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(CER_14, "CER.14", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(CER_15, "CER.15", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(CER_16, "CER.16", HL7::initialized, HL7::repetition_off);
    addObject<ID>(CER_17, "CER.17", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(CER_18, "CER.18", HL7::initialized, HL7::repetition_off);
    addObject<ID>(CER_19, "CER.19", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(CER_20, "CER.20", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(CER_21, "CER.21", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(CER_22, "CER.22", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(CER_23, "CER.23", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(CER_24, "CER.24", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(CER_25, "CER.25", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(CER_26, "CER.26", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(CER_27, "CER.27", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(CER_28, "CER.28", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(CER_29, "CER.29", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(CER_30, "CER.30", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(CER_31, "CER.31", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Set ID - CER
   */

  SI* getCER_1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, CER_1);
  }

  SI* getSetIDCER(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, CER_1);
  }

  bool isCER_1(size_t index = 0) {
    try {
      return this->getObject(index, CER_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSetIDCER(size_t index = 0) {
    try {
      return this->getObject(index, CER_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Serial Number
   */

  ST* getCER_2(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, CER_2);
  }

  ST* getSerialNumber(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, CER_2);
  }

  bool isCER_2(size_t index = 0) {
    try {
      return this->getObject(index, CER_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSerialNumber(size_t index = 0) {
    try {
      return this->getObject(index, CER_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Version
   */

  ST* getCER_3(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, CER_3);
  }

  ST* getVersion(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, CER_3);
  }

  bool isCER_3(size_t index = 0) {
    try {
      return this->getObject(index, CER_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isVersion(size_t index = 0) {
    try {
      return this->getObject(index, CER_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Granting Authority
   */

  XON* getCER_4(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, CER_4);
  }

  XON* getGrantingAuthority(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, CER_4);
  }

  bool isCER_4(size_t index = 0) {
    try {
      return this->getObject(index, CER_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGrantingAuthority(size_t index = 0) {
    try {
      return this->getObject(index, CER_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Issuing Authority
   */

  XCN* getCER_5(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, CER_5);
  }

  XCN* getIssuingAuthority(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, CER_5);
  }

  bool isCER_5(size_t index = 0) {
    try {
      return this->getObject(index, CER_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIssuingAuthority(size_t index = 0) {
    try {
      return this->getObject(index, CER_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Signature
   */

  ED* getCER_6(size_t index = 0) {
    return (ED*)this->getObjectSafe(index, CER_6);
  }

  ED* getSignature(size_t index = 0) {
    return (ED*)this->getObjectSafe(index, CER_6);
  }

  bool isCER_6(size_t index = 0) {
    try {
      return this->getObject(index, CER_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSignature(size_t index = 0) {
    try {
      return this->getObject(index, CER_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Granting Country
   */

  ID* getCER_7(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, CER_7);
  }

  ID* getGrantingCountry(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, CER_7);
  }

  bool isCER_7(size_t index = 0) {
    try {
      return this->getObject(index, CER_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGrantingCountry(size_t index = 0) {
    try {
      return this->getObject(index, CER_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Granting State/Province
   */

  CWE* getCER_8(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CER_8);
  }

  CWE* getGrantingStateProvince(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CER_8);
  }

  bool isCER_8(size_t index = 0) {
    try {
      return this->getObject(index, CER_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGrantingStateProvince(size_t index = 0) {
    try {
      return this->getObject(index, CER_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Granting County/Parish
   */

  CWE* getCER_9(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CER_9);
  }

  CWE* getGrantingCountyParish(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CER_9);
  }

  bool isCER_9(size_t index = 0) {
    try {
      return this->getObject(index, CER_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGrantingCountyParish(size_t index = 0) {
    try {
      return this->getObject(index, CER_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Certificate Type
   */

  CWE* getCER_10(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CER_10);
  }

  CWE* getCertificateType(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CER_10);
  }

  bool isCER_10(size_t index = 0) {
    try {
      return this->getObject(index, CER_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCertificateType(size_t index = 0) {
    try {
      return this->getObject(index, CER_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Certificate Domain
   */

  CWE* getCER_11(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CER_11);
  }

  CWE* getCertificateDomain(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CER_11);
  }

  bool isCER_11(size_t index = 0) {
    try {
      return this->getObject(index, CER_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCertificateDomain(size_t index = 0) {
    try {
      return this->getObject(index, CER_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Subject ID
   */

  EI* getCER_12(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, CER_12);
  }

  EI* getSubjectID(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, CER_12);
  }

  bool isCER_12(size_t index = 0) {
    try {
      return this->getObject(index, CER_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSubjectID(size_t index = 0) {
    try {
      return this->getObject(index, CER_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Subject Name
   */

  ST* getCER_13(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, CER_13);
  }

  ST* getSubjectName(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, CER_13);
  }

  bool isCER_13(size_t index = 0) {
    try {
      return this->getObject(index, CER_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSubjectName(size_t index = 0) {
    try {
      return this->getObject(index, CER_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Subject Directory Attribute Extension
   */

  CWE* getCER_14(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CER_14);
  }

  CWE* getSubjectDirectoryAttributeExtension(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CER_14);
  }

  bool isCER_14(size_t index = 0) {
    try {
      return this->getObject(index, CER_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSubjectDirectoryAttributeExtension(size_t index = 0) {
    try {
      return this->getObject(index, CER_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Subject Public Key Info
   */

  CWE* getCER_15(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CER_15);
  }

  CWE* getSubjectPublicKeyInfo(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CER_15);
  }

  bool isCER_15(size_t index = 0) {
    try {
      return this->getObject(index, CER_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSubjectPublicKeyInfo(size_t index = 0) {
    try {
      return this->getObject(index, CER_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Authority Key Identifier
   */

  CWE* getCER_16(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CER_16);
  }

  CWE* getAuthorityKeyIdentifier(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CER_16);
  }

  bool isCER_16(size_t index = 0) {
    try {
      return this->getObject(index, CER_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAuthorityKeyIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, CER_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Basic Constraint
   */

  ID* getCER_17(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, CER_17);
  }

  ID* getBasicConstraint(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, CER_17);
  }

  bool isCER_17(size_t index = 0) {
    try {
      return this->getObject(index, CER_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBasicConstraint(size_t index = 0) {
    try {
      return this->getObject(index, CER_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * CRL Distribution Point
   */

  CWE* getCER_18(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CER_18);
  }

  CWE* getCRLDistributionPoint(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CER_18);
  }

  bool isCER_18(size_t index = 0) {
    try {
      return this->getObject(index, CER_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCRLDistributionPoint(size_t index = 0) {
    try {
      return this->getObject(index, CER_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Jurisdiction Country
   */

  ID* getCER_19(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, CER_19);
  }

  ID* getJurisdictionCountry(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, CER_19);
  }

  bool isCER_19(size_t index = 0) {
    try {
      return this->getObject(index, CER_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isJurisdictionCountry(size_t index = 0) {
    try {
      return this->getObject(index, CER_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Jurisdiction State/Province
   */

  CWE* getCER_20(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CER_20);
  }

  CWE* getJurisdictionStateProvince(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CER_20);
  }

  bool isCER_20(size_t index = 0) {
    try {
      return this->getObject(index, CER_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isJurisdictionStateProvince(size_t index = 0) {
    try {
      return this->getObject(index, CER_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Jurisdiction County/Parish
   */

  CWE* getCER_21(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CER_21);
  }

  CWE* getJurisdictionCountyParish(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CER_21);
  }

  bool isCER_21(size_t index = 0) {
    try {
      return this->getObject(index, CER_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isJurisdictionCountyParish(size_t index = 0) {
    try {
      return this->getObject(index, CER_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Jurisdiction Breadth
   */

  CWE* getCER_22(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CER_22);
  }

  CWE* getJurisdictionBreadth(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CER_22);
  }

  bool isCER_22(size_t index = 0) {
    try {
      return this->getObject(index, CER_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isJurisdictionBreadth(size_t index = 0) {
    try {
      return this->getObject(index, CER_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Granting Date
   */

  DTM* getCER_23(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, CER_23);
  }

  DTM* getGrantingDate(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, CER_23);
  }

  bool isCER_23(size_t index = 0) {
    try {
      return this->getObject(index, CER_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGrantingDate(size_t index = 0) {
    try {
      return this->getObject(index, CER_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Issuing Date
   */

  DTM* getCER_24(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, CER_24);
  }

  DTM* getIssuingDate(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, CER_24);
  }

  bool isCER_24(size_t index = 0) {
    try {
      return this->getObject(index, CER_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIssuingDate(size_t index = 0) {
    try {
      return this->getObject(index, CER_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Activation Date
   */

  DTM* getCER_25(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, CER_25);
  }

  DTM* getActivationDate(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, CER_25);
  }

  bool isCER_25(size_t index = 0) {
    try {
      return this->getObject(index, CER_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isActivationDate(size_t index = 0) {
    try {
      return this->getObject(index, CER_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Inactivation Date
   */

  DTM* getCER_26(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, CER_26);
  }

  DTM* getInactivationDate(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, CER_26);
  }

  bool isCER_26(size_t index = 0) {
    try {
      return this->getObject(index, CER_26) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInactivationDate(size_t index = 0) {
    try {
      return this->getObject(index, CER_26) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Expiration Date
   */

  DTM* getCER_27(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, CER_27);
  }

  DTM* getExpirationDate(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, CER_27);
  }

  bool isCER_27(size_t index = 0) {
    try {
      return this->getObject(index, CER_27) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isExpirationDate(size_t index = 0) {
    try {
      return this->getObject(index, CER_27) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Renewal Date
   */

  DTM* getCER_28(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, CER_28);
  }

  DTM* getRenewalDate(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, CER_28);
  }

  bool isCER_28(size_t index = 0) {
    try {
      return this->getObject(index, CER_28) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRenewalDate(size_t index = 0) {
    try {
      return this->getObject(index, CER_28) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Revocation Date
   */

  DTM* getCER_29(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, CER_29);
  }

  DTM* getRevocationDate(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, CER_29);
  }

  bool isCER_29(size_t index = 0) {
    try {
      return this->getObject(index, CER_29) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRevocationDate(size_t index = 0) {
    try {
      return this->getObject(index, CER_29) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Revocation Reason Code
   */

  CWE* getCER_30(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CER_30);
  }

  CWE* getRevocationReasonCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CER_30);
  }

  bool isCER_30(size_t index = 0) {
    try {
      return this->getObject(index, CER_30) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRevocationReasonCode(size_t index = 0) {
    try {
      return this->getObject(index, CER_30) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Certificate Status Code
   */

  CWE* getCER_31(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CER_31);
  }

  CWE* getCertificateStatusCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CER_31);
  }

  bool isCER_31(size_t index = 0) {
    try {
      return this->getObject(index, CER_31) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCertificateStatusCode(size_t index = 0) {
    try {
      return this->getObject(index, CER_31) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of CER */

} /* End of namespace HL7_281 */
#endif /* __CER_v281_H__ */
