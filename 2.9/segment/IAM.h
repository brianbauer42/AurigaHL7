/*
 * hacca - C Toolkit and Applications for the HL7 2.x Protocols
 *           http://github.com/rcarbone/hacca
 *           http://hub.docker.com/repository/docker/roccocarbone/hacca
 *
 * Warning: This file was automatically generated, please do not edit.
 *
 * R. Carbone (rocco@tecsiel.it)
 * Jul 2020
 *
 * SPDX-License-Identifier: BSD-2-Clause-FreeBSD
 */


#ifndef __IAM_v29_H__
#define __IAM_v29_H__

#include "../../common/Util.h"
#include "../datatype/CNE.h"
#include "../datatype/CWE.h"
#include "../datatype/DT.h"
#include "../datatype/DTM.h"
#include "../datatype/EI.h"
#include "../datatype/SI.h"
#include "../datatype/ST.h"
#include "../datatype/XCN.h"
#include "../datatype/XON.h"
#include "../datatype/XPN.h"

namespace HL7_29 {

/* IAM */
class IAM : public HL7Segment {
 public:
  IAM() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    IAM_1,
    IAM_2,
    IAM_3,
    IAM_4,
    IAM_5,
    IAM_6,
    IAM_7,
    IAM_8,
    IAM_9,
    IAM_10,
    IAM_11,
    IAM_12,
    IAM_13,
    IAM_14,
    IAM_15,
    IAM_16,
    IAM_17,
    IAM_18,
    IAM_19,
    IAM_20,
    IAM_21,
    IAM_22,
    IAM_23,
    IAM_24,
    IAM_25,
    IAM_26,
    IAM_27,
    IAM_28,
    IAM_29,
    IAM_30,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "IAM"; }
  IAM* create() const { return new IAM(); }

 private:
  void init() {
    setName("IAM");
    /* Init members */
    addObject<SI>(IAM_1, "IAM.1", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(IAM_2, "IAM.2", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(IAM_3, "IAM.3", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(IAM_4, "IAM.4", HL7::initialized, HL7::repetition_off);
    addObject<ST>(IAM_5, "IAM.5", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(IAM_6, "IAM.6", HL7::initialized, HL7::repetition_off);
    addObject<EI>(IAM_7, "IAM.7", HL7::initialized, HL7::repetition_off);
    addObject<ST>(IAM_8, "IAM.8", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(IAM_9, "IAM.9", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(IAM_10, "IAM.10", HL7::initialized, HL7::repetition_off);
    addObject<DT>(IAM_11, "IAM.11", HL7::initialized, HL7::repetition_off);
    addObject<ST>(IAM_12, "IAM.12", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(IAM_13, "IAM.13", HL7::initialized, HL7::repetition_off);
    addObject<XPN>(IAM_14, "IAM.14", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(IAM_15, "IAM.15", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(IAM_16, "IAM.16", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(IAM_17, "IAM.17", HL7::initialized, HL7::repetition_off);
    addObject<XCN>(IAM_18, "IAM.18", HL7::initialized, HL7::repetition_off);
    addObject<XON>(IAM_19, "IAM.19", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(IAM_20, "IAM.20", HL7::initialized, HL7::repetition_off);
    addObject<XCN>(IAM_21, "IAM.21", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(IAM_22, "IAM.22", HL7::initialized, HL7::repetition_off);
    addObject<XCN>(IAM_23, "IAM.23", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(IAM_24, "IAM.24", HL7::initialized, HL7::repetition_off);
    addObject<XCN>(IAM_25, "IAM.25", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(IAM_26, "IAM.26", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(IAM_27, "IAM.27", HL7::initialized, HL7::repetition_off);
    addObject<XON>(IAM_28, "IAM.28", HL7::initialized, HL7::repetition_off);
    addObject<XON>(IAM_29, "IAM.29", HL7::initialized, HL7::repetition_off);
    addObject<XON>(IAM_30, "IAM.30", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Set ID - IAM
   */

  SI* getIAM_1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, IAM_1);
  }

  SI* getSetIDIAM(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, IAM_1);
  }

  bool isIAM_1(size_t index = 0) {
    try {
      return this->getObject(index, IAM_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSetIDIAM(size_t index = 0) {
    try {
      return this->getObject(index, IAM_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Allergen Type Code
   */

  CWE* getIAM_2(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IAM_2);
  }

  CWE* getAllergenTypeCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IAM_2);
  }

  bool isIAM_2(size_t index = 0) {
    try {
      return this->getObject(index, IAM_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAllergenTypeCode(size_t index = 0) {
    try {
      return this->getObject(index, IAM_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Allergen Code/Mnemonic/Description
   */

  CWE* getIAM_3(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IAM_3);
  }

  CWE* getAllergenCodeMnemonicDescription(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IAM_3);
  }

  bool isIAM_3(size_t index = 0) {
    try {
      return this->getObject(index, IAM_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAllergenCodeMnemonicDescription(size_t index = 0) {
    try {
      return this->getObject(index, IAM_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Allergy Severity Code
   */

  CWE* getIAM_4(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IAM_4);
  }

  CWE* getAllergySeverityCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IAM_4);
  }

  bool isIAM_4(size_t index = 0) {
    try {
      return this->getObject(index, IAM_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAllergySeverityCode(size_t index = 0) {
    try {
      return this->getObject(index, IAM_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Allergy Reaction Code
   */

  ST* getIAM_5(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IAM_5);
  }

  ST* getAllergyReactionCode(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IAM_5);
  }

  bool isIAM_5(size_t index = 0) {
    try {
      return this->getObject(index, IAM_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAllergyReactionCode(size_t index = 0) {
    try {
      return this->getObject(index, IAM_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Allergy Action Code
   */

  CNE* getIAM_6(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, IAM_6);
  }

  CNE* getAllergyActionCode(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, IAM_6);
  }

  bool isIAM_6(size_t index = 0) {
    try {
      return this->getObject(index, IAM_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAllergyActionCode(size_t index = 0) {
    try {
      return this->getObject(index, IAM_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Allergy Unique Identifier
   */

  EI* getIAM_7(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, IAM_7);
  }

  EI* getAllergyUniqueIdentifier(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, IAM_7);
  }

  bool isIAM_7(size_t index = 0) {
    try {
      return this->getObject(index, IAM_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAllergyUniqueIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, IAM_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Action Reason
   */

  ST* getIAM_8(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IAM_8);
  }

  ST* getActionReason(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IAM_8);
  }

  bool isIAM_8(size_t index = 0) {
    try {
      return this->getObject(index, IAM_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isActionReason(size_t index = 0) {
    try {
      return this->getObject(index, IAM_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Sensitivity to Causative Agent Code
   */

  CWE* getIAM_9(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IAM_9);
  }

  CWE* getSensitivitytoCausativeAgentCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IAM_9);
  }

  bool isIAM_9(size_t index = 0) {
    try {
      return this->getObject(index, IAM_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSensitivitytoCausativeAgentCode(size_t index = 0) {
    try {
      return this->getObject(index, IAM_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Allergen Group Code/Mnemonic/Description
   */

  CWE* getIAM_10(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IAM_10);
  }

  CWE* getAllergenGroupCodeMnemonicDescription(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IAM_10);
  }

  bool isIAM_10(size_t index = 0) {
    try {
      return this->getObject(index, IAM_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAllergenGroupCodeMnemonicDescription(size_t index = 0) {
    try {
      return this->getObject(index, IAM_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Onset Date
   */

  DT* getIAM_11(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, IAM_11);
  }

  DT* getOnsetDate(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, IAM_11);
  }

  bool isIAM_11(size_t index = 0) {
    try {
      return this->getObject(index, IAM_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOnsetDate(size_t index = 0) {
    try {
      return this->getObject(index, IAM_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Onset Date Text
   */

  ST* getIAM_12(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IAM_12);
  }

  ST* getOnsetDateText(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IAM_12);
  }

  bool isIAM_12(size_t index = 0) {
    try {
      return this->getObject(index, IAM_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOnsetDateText(size_t index = 0) {
    try {
      return this->getObject(index, IAM_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Reported Date/Time
   */

  DTM* getIAM_13(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, IAM_13);
  }

  DTM* getReportedDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, IAM_13);
  }

  bool isIAM_13(size_t index = 0) {
    try {
      return this->getObject(index, IAM_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isReportedDateTime(size_t index = 0) {
    try {
      return this->getObject(index, IAM_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Reported By
   */

  XPN* getIAM_14(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, IAM_14);
  }

  XPN* getReportedBy(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, IAM_14);
  }

  bool isIAM_14(size_t index = 0) {
    try {
      return this->getObject(index, IAM_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isReportedBy(size_t index = 0) {
    try {
      return this->getObject(index, IAM_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Relationship to Patient Code
   */

  CWE* getIAM_15(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IAM_15);
  }

  CWE* getRelationshiptoPatientCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IAM_15);
  }

  bool isIAM_15(size_t index = 0) {
    try {
      return this->getObject(index, IAM_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRelationshiptoPatientCode(size_t index = 0) {
    try {
      return this->getObject(index, IAM_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Alert Device Code
   */

  CWE* getIAM_16(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IAM_16);
  }

  CWE* getAlertDeviceCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IAM_16);
  }

  bool isIAM_16(size_t index = 0) {
    try {
      return this->getObject(index, IAM_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlertDeviceCode(size_t index = 0) {
    try {
      return this->getObject(index, IAM_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Allergy Clinical Status Code
   */

  CWE* getIAM_17(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IAM_17);
  }

  CWE* getAllergyClinicalStatusCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IAM_17);
  }

  bool isIAM_17(size_t index = 0) {
    try {
      return this->getObject(index, IAM_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAllergyClinicalStatusCode(size_t index = 0) {
    try {
      return this->getObject(index, IAM_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Statused by Person
   */

  XCN* getIAM_18(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, IAM_18);
  }

  XCN* getStatusedbyPerson(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, IAM_18);
  }

  bool isIAM_18(size_t index = 0) {
    try {
      return this->getObject(index, IAM_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStatusedbyPerson(size_t index = 0) {
    try {
      return this->getObject(index, IAM_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Statused by Organization
   */

  XON* getIAM_19(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, IAM_19);
  }

  XON* getStatusedbyOrganization(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, IAM_19);
  }

  bool isIAM_19(size_t index = 0) {
    try {
      return this->getObject(index, IAM_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStatusedbyOrganization(size_t index = 0) {
    try {
      return this->getObject(index, IAM_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Statused at Date/Time
   */

  DTM* getIAM_20(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, IAM_20);
  }

  DTM* getStatusedatDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, IAM_20);
  }

  bool isIAM_20(size_t index = 0) {
    try {
      return this->getObject(index, IAM_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStatusedatDateTime(size_t index = 0) {
    try {
      return this->getObject(index, IAM_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Inactivated by Person
   */

  XCN* getIAM_21(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, IAM_21);
  }

  XCN* getInactivatedbyPerson(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, IAM_21);
  }

  bool isIAM_21(size_t index = 0) {
    try {
      return this->getObject(index, IAM_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInactivatedbyPerson(size_t index = 0) {
    try {
      return this->getObject(index, IAM_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Inactivated Date/Time
   */

  DTM* getIAM_22(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, IAM_22);
  }

  DTM* getInactivatedDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, IAM_22);
  }

  bool isIAM_22(size_t index = 0) {
    try {
      return this->getObject(index, IAM_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInactivatedDateTime(size_t index = 0) {
    try {
      return this->getObject(index, IAM_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Initially Recorded by Person
   */

  XCN* getIAM_23(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, IAM_23);
  }

  XCN* getInitiallyRecordedbyPerson(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, IAM_23);
  }

  bool isIAM_23(size_t index = 0) {
    try {
      return this->getObject(index, IAM_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInitiallyRecordedbyPerson(size_t index = 0) {
    try {
      return this->getObject(index, IAM_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Initially Recorded Date/Time
   */

  DTM* getIAM_24(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, IAM_24);
  }

  DTM* getInitiallyRecordedDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, IAM_24);
  }

  bool isIAM_24(size_t index = 0) {
    try {
      return this->getObject(index, IAM_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInitiallyRecordedDateTime(size_t index = 0) {
    try {
      return this->getObject(index, IAM_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Modified by Person
   */

  XCN* getIAM_25(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, IAM_25);
  }

  XCN* getModifiedbyPerson(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, IAM_25);
  }

  bool isIAM_25(size_t index = 0) {
    try {
      return this->getObject(index, IAM_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isModifiedbyPerson(size_t index = 0) {
    try {
      return this->getObject(index, IAM_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Modified Date/Time
   */

  DTM* getIAM_26(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, IAM_26);
  }

  DTM* getModifiedDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, IAM_26);
  }

  bool isIAM_26(size_t index = 0) {
    try {
      return this->getObject(index, IAM_26) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isModifiedDateTime(size_t index = 0) {
    try {
      return this->getObject(index, IAM_26) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Clinician Identified Code
   */

  CWE* getIAM_27(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IAM_27);
  }

  CWE* getClinicianIdentifiedCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IAM_27);
  }

  bool isIAM_27(size_t index = 0) {
    try {
      return this->getObject(index, IAM_27) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isClinicianIdentifiedCode(size_t index = 0) {
    try {
      return this->getObject(index, IAM_27) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Initially Recorded by Organization
   */

  XON* getIAM_28(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, IAM_28);
  }

  XON* getInitiallyRecordedbyOrganization(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, IAM_28);
  }

  bool isIAM_28(size_t index = 0) {
    try {
      return this->getObject(index, IAM_28) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInitiallyRecordedbyOrganization(size_t index = 0) {
    try {
      return this->getObject(index, IAM_28) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Modified by Organization
   */

  XON* getIAM_29(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, IAM_29);
  }

  XON* getModifiedbyOrganization(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, IAM_29);
  }

  bool isIAM_29(size_t index = 0) {
    try {
      return this->getObject(index, IAM_29) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isModifiedbyOrganization(size_t index = 0) {
    try {
      return this->getObject(index, IAM_29) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Inactivated by Organization
   */

  XON* getIAM_30(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, IAM_30);
  }

  XON* getInactivatedbyOrganization(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, IAM_30);
  }

  bool isIAM_30(size_t index = 0) {
    try {
      return this->getObject(index, IAM_30) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInactivatedbyOrganization(size_t index = 0) {
    try {
      return this->getObject(index, IAM_30) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of IAM */

} /* End of namespace HL7_29 */
#endif /* __IAM_v29_H__ */
