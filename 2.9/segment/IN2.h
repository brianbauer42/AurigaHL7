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


#ifndef __IN2_v29_H__
#define __IN2_v29_H__

#include "../../common/Util.h"
#include "../datatype/CP.h"
#include "../datatype/CWE.h"
#include "../datatype/CX.h"
#include "../datatype/DDI.h"
#include "../datatype/DT.h"
#include "../datatype/ID.h"
#include "../datatype/JCC.h"
#include "../datatype/PTA.h"
#include "../datatype/RMC.h"
#include "../datatype/ST.h"
#include "../datatype/XCN.h"
#include "../datatype/XON.h"
#include "../datatype/XPN.h"
#include "../datatype/XTN.h"

namespace HL7_29 {

/* IN2 */
class IN2 : public HL7Segment {
 public:
  IN2() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    IN2_1,
    IN2_2,
    IN2_3,
    IN2_4,
    IN2_5,
    IN2_6,
    IN2_7,
    IN2_8,
    IN2_9,
    IN2_10,
    IN2_11,
    IN2_12,
    IN2_13,
    IN2_14,
    IN2_15,
    IN2_16,
    IN2_17,
    IN2_18,
    IN2_19,
    IN2_20,
    IN2_21,
    IN2_22,
    IN2_23,
    IN2_24,
    IN2_25,
    IN2_26,
    IN2_27,
    IN2_28,
    IN2_29,
    IN2_30,
    IN2_31,
    IN2_32,
    IN2_33,
    IN2_34,
    IN2_35,
    IN2_36,
    IN2_37,
    IN2_38,
    IN2_39,
    IN2_40,
    IN2_41,
    IN2_42,
    IN2_43,
    IN2_44,
    IN2_45,
    IN2_46,
    IN2_47,
    IN2_48,
    IN2_49,
    IN2_50,
    IN2_51,
    IN2_52,
    IN2_53,
    IN2_54,
    IN2_55,
    IN2_56,
    IN2_57,
    IN2_58,
    IN2_59,
    IN2_60,
    IN2_61,
    IN2_62,
    IN2_63,
    IN2_64,
    IN2_65,
    IN2_66,
    IN2_67,
    IN2_68,
    IN2_69,
    IN2_70,
    IN2_71,
    IN2_72,
    IN2_73,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "IN2"; }
  IN2* create() const { return new IN2(); }

 private:
  void init() {
    setName("IN2");
    /* Init members */
    addObject<CX>(IN2_1, "IN2.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(IN2_2, "IN2.2", HL7::initialized, HL7::repetition_off);
    addObject<XCN>(IN2_3, "IN2.3", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(IN2_4, "IN2.4", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(IN2_5, "IN2.5", HL7::initialized, HL7::repetition_off);
    addObject<ST>(IN2_6, "IN2.6", HL7::initialized, HL7::repetition_off);
    addObject<XPN>(IN2_7, "IN2.7", HL7::initialized, HL7::repetition_off);
    addObject<ST>(IN2_8, "IN2.8", HL7::initialized, HL7::repetition_off);
    addObject<XPN>(IN2_9, "IN2.9", HL7::initialized, HL7::repetition_off);
    addObject<ST>(IN2_10, "IN2.10", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(IN2_11, "IN2.11", HL7::initialized, HL7::repetition_off);
    addObject<ST>(IN2_12, "IN2.12", HL7::initialized, HL7::repetition_off);
    addObject<ST>(IN2_13, "IN2.13", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(IN2_14, "IN2.14", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(IN2_15, "IN2.15", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(IN2_16, "IN2.16", HL7::initialized, HL7::repetition_off);
    addObject<DT>(IN2_17, "IN2.17", HL7::initialized, HL7::repetition_off);
    addObject<ID>(IN2_18, "IN2.18", HL7::initialized, HL7::repetition_off);
    addObject<ID>(IN2_19, "IN2.19", HL7::initialized, HL7::repetition_off);
    addObject<ID>(IN2_20, "IN2.20", HL7::initialized, HL7::repetition_off);
    addObject<ST>(IN2_21, "IN2.21", HL7::initialized, HL7::repetition_off);
    addObject<XPN>(IN2_22, "IN2.22", HL7::initialized, HL7::repetition_off);
    addObject<ST>(IN2_23, "IN2.23", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(IN2_24, "IN2.24", HL7::initialized, HL7::repetition_off);
    addObject<CX>(IN2_25, "IN2.25", HL7::initialized, HL7::repetition_off);
    addObject<CX>(IN2_26, "IN2.26", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(IN2_27, "IN2.27", HL7::initialized, HL7::repetition_off);
    addObject<RMC>(IN2_28, "IN2.28", HL7::initialized, HL7::repetition_off);
    addObject<PTA>(IN2_29, "IN2.29", HL7::initialized, HL7::repetition_off);
    addObject<DDI>(IN2_30, "IN2.30", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(IN2_31, "IN2.31", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(IN2_32, "IN2.32", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(IN2_33, "IN2.33", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(IN2_34, "IN2.34", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(IN2_35, "IN2.35", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(IN2_36, "IN2.36", HL7::initialized, HL7::repetition_off);
    addObject<ID>(IN2_37, "IN2.37", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(IN2_38, "IN2.38", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(IN2_39, "IN2.39", HL7::initialized, HL7::repetition_off);
    addObject<XPN>(IN2_40, "IN2.40", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(IN2_41, "IN2.41", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(IN2_42, "IN2.42", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(IN2_43, "IN2.43", HL7::initialized, HL7::repetition_off);
    addObject<DT>(IN2_44, "IN2.44", HL7::initialized, HL7::repetition_off);
    addObject<DT>(IN2_45, "IN2.45", HL7::initialized, HL7::repetition_off);
    addObject<ST>(IN2_46, "IN2.46", HL7::initialized, HL7::repetition_off);
    addObject<JCC>(IN2_47, "IN2.47", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(IN2_48, "IN2.48", HL7::initialized, HL7::repetition_off);
    addObject<XPN>(IN2_49, "IN2.49", HL7::initialized, HL7::repetition_off);
    addObject<XTN>(IN2_50, "IN2.50", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(IN2_51, "IN2.51", HL7::initialized, HL7::repetition_off);
    addObject<XPN>(IN2_52, "IN2.52", HL7::initialized, HL7::repetition_off);
    addObject<XTN>(IN2_53, "IN2.53", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(IN2_54, "IN2.54", HL7::initialized, HL7::repetition_off);
    addObject<DT>(IN2_55, "IN2.55", HL7::initialized, HL7::repetition_off);
    addObject<DT>(IN2_56, "IN2.56", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(IN2_57, "IN2.57", HL7::initialized, HL7::repetition_off);
    addObject<XTN>(IN2_58, "IN2.58", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(IN2_59, "IN2.59", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(IN2_60, "IN2.60", HL7::initialized, HL7::repetition_off);
    addObject<CX>(IN2_61, "IN2.61", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(IN2_62, "IN2.62", HL7::initialized, HL7::repetition_off);
    addObject<XTN>(IN2_63, "IN2.63", HL7::initialized, HL7::repetition_off);
    addObject<XTN>(IN2_64, "IN2.64", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(IN2_65, "IN2.65", HL7::initialized, HL7::repetition_off);
    addObject<ID>(IN2_66, "IN2.66", HL7::initialized, HL7::repetition_off);
    addObject<ID>(IN2_67, "IN2.67", HL7::initialized, HL7::repetition_off);
    addObject<ID>(IN2_68, "IN2.68", HL7::initialized, HL7::repetition_off);
    addObject<XON>(IN2_69, "IN2.69", HL7::initialized, HL7::repetition_off);
    addObject<XON>(IN2_70, "IN2.70", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(IN2_71, "IN2.71", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(IN2_72, "IN2.72", HL7::initialized, HL7::repetition_off);
    addObject<CP>(IN2_73, "IN2.73", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Insured's Employee ID
   */

  CX* getIN2_1(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, IN2_1);
  }

  CX* getInsuredsEmployeeID(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, IN2_1);
  }

  bool isIN2_1(size_t index = 0) {
    try {
      return this->getObject(index, IN2_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInsuredsEmployeeID(size_t index = 0) {
    try {
      return this->getObject(index, IN2_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Insured's Social Security Number
   */

  ST* getIN2_2(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IN2_2);
  }

  ST* getInsuredsSocialSecurityNumber(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IN2_2);
  }

  bool isIN2_2(size_t index = 0) {
    try {
      return this->getObject(index, IN2_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInsuredsSocialSecurityNumber(size_t index = 0) {
    try {
      return this->getObject(index, IN2_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Insured's Employer's Name and ID
   */

  XCN* getIN2_3(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, IN2_3);
  }

  XCN* getInsuredsEmployersNameandID(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, IN2_3);
  }

  bool isIN2_3(size_t index = 0) {
    try {
      return this->getObject(index, IN2_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInsuredsEmployersNameandID(size_t index = 0) {
    try {
      return this->getObject(index, IN2_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Employer Information Data
   */

  CWE* getIN2_4(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN2_4);
  }

  CWE* getEmployerInformationData(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN2_4);
  }

  bool isIN2_4(size_t index = 0) {
    try {
      return this->getObject(index, IN2_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEmployerInformationData(size_t index = 0) {
    try {
      return this->getObject(index, IN2_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Mail Claim Party
   */

  CWE* getIN2_5(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN2_5);
  }

  CWE* getMailClaimParty(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN2_5);
  }

  bool isIN2_5(size_t index = 0) {
    try {
      return this->getObject(index, IN2_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMailClaimParty(size_t index = 0) {
    try {
      return this->getObject(index, IN2_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Medicare Health Ins Card Number
   */

  ST* getIN2_6(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IN2_6);
  }

  ST* getMedicareHealthInsCardNumber(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IN2_6);
  }

  bool isIN2_6(size_t index = 0) {
    try {
      return this->getObject(index, IN2_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMedicareHealthInsCardNumber(size_t index = 0) {
    try {
      return this->getObject(index, IN2_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Medicaid Case Name
   */

  XPN* getIN2_7(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, IN2_7);
  }

  XPN* getMedicaidCaseName(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, IN2_7);
  }

  bool isIN2_7(size_t index = 0) {
    try {
      return this->getObject(index, IN2_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMedicaidCaseName(size_t index = 0) {
    try {
      return this->getObject(index, IN2_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Medicaid Case Number
   */

  ST* getIN2_8(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IN2_8);
  }

  ST* getMedicaidCaseNumber(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IN2_8);
  }

  bool isIN2_8(size_t index = 0) {
    try {
      return this->getObject(index, IN2_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMedicaidCaseNumber(size_t index = 0) {
    try {
      return this->getObject(index, IN2_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Military Sponsor Name
   */

  XPN* getIN2_9(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, IN2_9);
  }

  XPN* getMilitarySponsorName(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, IN2_9);
  }

  bool isIN2_9(size_t index = 0) {
    try {
      return this->getObject(index, IN2_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMilitarySponsorName(size_t index = 0) {
    try {
      return this->getObject(index, IN2_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Military ID Number
   */

  ST* getIN2_10(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IN2_10);
  }

  ST* getMilitaryIDNumber(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IN2_10);
  }

  bool isIN2_10(size_t index = 0) {
    try {
      return this->getObject(index, IN2_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMilitaryIDNumber(size_t index = 0) {
    try {
      return this->getObject(index, IN2_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Dependent Of Military Recipient
   */

  CWE* getIN2_11(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN2_11);
  }

  CWE* getDependentOfMilitaryRecipient(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN2_11);
  }

  bool isIN2_11(size_t index = 0) {
    try {
      return this->getObject(index, IN2_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDependentOfMilitaryRecipient(size_t index = 0) {
    try {
      return this->getObject(index, IN2_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Military Organization
   */

  ST* getIN2_12(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IN2_12);
  }

  ST* getMilitaryOrganization(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IN2_12);
  }

  bool isIN2_12(size_t index = 0) {
    try {
      return this->getObject(index, IN2_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMilitaryOrganization(size_t index = 0) {
    try {
      return this->getObject(index, IN2_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Military Station
   */

  ST* getIN2_13(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IN2_13);
  }

  ST* getMilitaryStation(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IN2_13);
  }

  bool isIN2_13(size_t index = 0) {
    try {
      return this->getObject(index, IN2_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMilitaryStation(size_t index = 0) {
    try {
      return this->getObject(index, IN2_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Military Service
   */

  CWE* getIN2_14(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN2_14);
  }

  CWE* getMilitaryService(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN2_14);
  }

  bool isIN2_14(size_t index = 0) {
    try {
      return this->getObject(index, IN2_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMilitaryService(size_t index = 0) {
    try {
      return this->getObject(index, IN2_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Military Rank/Grade
   */

  CWE* getIN2_15(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN2_15);
  }

  CWE* getMilitaryRankGrade(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN2_15);
  }

  bool isIN2_15(size_t index = 0) {
    try {
      return this->getObject(index, IN2_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMilitaryRankGrade(size_t index = 0) {
    try {
      return this->getObject(index, IN2_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Military Status
   */

  CWE* getIN2_16(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN2_16);
  }

  CWE* getMilitaryStatus(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN2_16);
  }

  bool isIN2_16(size_t index = 0) {
    try {
      return this->getObject(index, IN2_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMilitaryStatus(size_t index = 0) {
    try {
      return this->getObject(index, IN2_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Military Retire Date
   */

  DT* getIN2_17(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, IN2_17);
  }

  DT* getMilitaryRetireDate(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, IN2_17);
  }

  bool isIN2_17(size_t index = 0) {
    try {
      return this->getObject(index, IN2_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMilitaryRetireDate(size_t index = 0) {
    try {
      return this->getObject(index, IN2_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Military Non-Avail Cert On File
   */

  ID* getIN2_18(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, IN2_18);
  }

  ID* getMilitaryNonAvailCertOnFile(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, IN2_18);
  }

  bool isIN2_18(size_t index = 0) {
    try {
      return this->getObject(index, IN2_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMilitaryNonAvailCertOnFile(size_t index = 0) {
    try {
      return this->getObject(index, IN2_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Baby Coverage
   */

  ID* getIN2_19(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, IN2_19);
  }

  ID* getBabyCoverage(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, IN2_19);
  }

  bool isIN2_19(size_t index = 0) {
    try {
      return this->getObject(index, IN2_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBabyCoverage(size_t index = 0) {
    try {
      return this->getObject(index, IN2_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Combine Baby Bill
   */

  ID* getIN2_20(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, IN2_20);
  }

  ID* getCombineBabyBill(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, IN2_20);
  }

  bool isIN2_20(size_t index = 0) {
    try {
      return this->getObject(index, IN2_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCombineBabyBill(size_t index = 0) {
    try {
      return this->getObject(index, IN2_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Blood Deductible
   */

  ST* getIN2_21(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IN2_21);
  }

  ST* getBloodDeductible(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IN2_21);
  }

  bool isIN2_21(size_t index = 0) {
    try {
      return this->getObject(index, IN2_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBloodDeductible(size_t index = 0) {
    try {
      return this->getObject(index, IN2_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Special Coverage Approval Name
   */

  XPN* getIN2_22(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, IN2_22);
  }

  XPN* getSpecialCoverageApprovalName(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, IN2_22);
  }

  bool isIN2_22(size_t index = 0) {
    try {
      return this->getObject(index, IN2_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSpecialCoverageApprovalName(size_t index = 0) {
    try {
      return this->getObject(index, IN2_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Special Coverage Approval Title
   */

  ST* getIN2_23(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IN2_23);
  }

  ST* getSpecialCoverageApprovalTitle(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IN2_23);
  }

  bool isIN2_23(size_t index = 0) {
    try {
      return this->getObject(index, IN2_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSpecialCoverageApprovalTitle(size_t index = 0) {
    try {
      return this->getObject(index, IN2_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Non-Covered Insurance Code
   */

  CWE* getIN2_24(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN2_24);
  }

  CWE* getNonCoveredInsuranceCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN2_24);
  }

  bool isIN2_24(size_t index = 0) {
    try {
      return this->getObject(index, IN2_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNonCoveredInsuranceCode(size_t index = 0) {
    try {
      return this->getObject(index, IN2_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Payor ID
   */

  CX* getIN2_25(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, IN2_25);
  }

  CX* getPayorID(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, IN2_25);
  }

  bool isIN2_25(size_t index = 0) {
    try {
      return this->getObject(index, IN2_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPayorID(size_t index = 0) {
    try {
      return this->getObject(index, IN2_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Payor Subscriber ID
   */

  CX* getIN2_26(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, IN2_26);
  }

  CX* getPayorSubscriberID(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, IN2_26);
  }

  bool isIN2_26(size_t index = 0) {
    try {
      return this->getObject(index, IN2_26) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPayorSubscriberID(size_t index = 0) {
    try {
      return this->getObject(index, IN2_26) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Eligibility Source
   */

  CWE* getIN2_27(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN2_27);
  }

  CWE* getEligibilitySource(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN2_27);
  }

  bool isIN2_27(size_t index = 0) {
    try {
      return this->getObject(index, IN2_27) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEligibilitySource(size_t index = 0) {
    try {
      return this->getObject(index, IN2_27) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Room Coverage Type/Amount
   */

  RMC* getIN2_28(size_t index = 0) {
    return (RMC*)this->getObjectSafe(index, IN2_28);
  }

  RMC* getRoomCoverageTypeAmount(size_t index = 0) {
    return (RMC*)this->getObjectSafe(index, IN2_28);
  }

  bool isIN2_28(size_t index = 0) {
    try {
      return this->getObject(index, IN2_28) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRoomCoverageTypeAmount(size_t index = 0) {
    try {
      return this->getObject(index, IN2_28) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Policy Type/Amount
   */

  PTA* getIN2_29(size_t index = 0) {
    return (PTA*)this->getObjectSafe(index, IN2_29);
  }

  PTA* getPolicyTypeAmount(size_t index = 0) {
    return (PTA*)this->getObjectSafe(index, IN2_29);
  }

  bool isIN2_29(size_t index = 0) {
    try {
      return this->getObject(index, IN2_29) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPolicyTypeAmount(size_t index = 0) {
    try {
      return this->getObject(index, IN2_29) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Daily Deductible
   */

  DDI* getIN2_30(size_t index = 0) {
    return (DDI*)this->getObjectSafe(index, IN2_30);
  }

  DDI* getDailyDeductible(size_t index = 0) {
    return (DDI*)this->getObjectSafe(index, IN2_30);
  }

  bool isIN2_30(size_t index = 0) {
    try {
      return this->getObject(index, IN2_30) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDailyDeductible(size_t index = 0) {
    try {
      return this->getObject(index, IN2_30) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Living Dependency
   */

  CWE* getIN2_31(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN2_31);
  }

  CWE* getLivingDependency(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN2_31);
  }

  bool isIN2_31(size_t index = 0) {
    try {
      return this->getObject(index, IN2_31) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLivingDependency(size_t index = 0) {
    try {
      return this->getObject(index, IN2_31) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Ambulatory Status
   */

  CWE* getIN2_32(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN2_32);
  }

  CWE* getAmbulatoryStatus(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN2_32);
  }

  bool isIN2_32(size_t index = 0) {
    try {
      return this->getObject(index, IN2_32) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAmbulatoryStatus(size_t index = 0) {
    try {
      return this->getObject(index, IN2_32) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Citizenship
   */

  CWE* getIN2_33(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN2_33);
  }

  CWE* getCitizenship(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN2_33);
  }

  bool isIN2_33(size_t index = 0) {
    try {
      return this->getObject(index, IN2_33) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCitizenship(size_t index = 0) {
    try {
      return this->getObject(index, IN2_33) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Primary Language
   */

  CWE* getIN2_34(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN2_34);
  }

  CWE* getPrimaryLanguage(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN2_34);
  }

  bool isIN2_34(size_t index = 0) {
    try {
      return this->getObject(index, IN2_34) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPrimaryLanguage(size_t index = 0) {
    try {
      return this->getObject(index, IN2_34) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Living Arrangement
   */

  CWE* getIN2_35(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN2_35);
  }

  CWE* getLivingArrangement(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN2_35);
  }

  bool isIN2_35(size_t index = 0) {
    try {
      return this->getObject(index, IN2_35) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLivingArrangement(size_t index = 0) {
    try {
      return this->getObject(index, IN2_35) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Publicity Code
   */

  CWE* getIN2_36(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN2_36);
  }

  CWE* getPublicityCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN2_36);
  }

  bool isIN2_36(size_t index = 0) {
    try {
      return this->getObject(index, IN2_36) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPublicityCode(size_t index = 0) {
    try {
      return this->getObject(index, IN2_36) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Protection Indicator
   */

  ID* getIN2_37(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, IN2_37);
  }

  ID* getProtectionIndicator(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, IN2_37);
  }

  bool isIN2_37(size_t index = 0) {
    try {
      return this->getObject(index, IN2_37) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProtectionIndicator(size_t index = 0) {
    try {
      return this->getObject(index, IN2_37) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Student Indicator
   */

  CWE* getIN2_38(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN2_38);
  }

  CWE* getStudentIndicator(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN2_38);
  }

  bool isIN2_38(size_t index = 0) {
    try {
      return this->getObject(index, IN2_38) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStudentIndicator(size_t index = 0) {
    try {
      return this->getObject(index, IN2_38) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Religion
   */

  CWE* getIN2_39(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN2_39);
  }

  CWE* getReligion(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN2_39);
  }

  bool isIN2_39(size_t index = 0) {
    try {
      return this->getObject(index, IN2_39) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isReligion(size_t index = 0) {
    try {
      return this->getObject(index, IN2_39) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Mother's Maiden Name
   */

  XPN* getIN2_40(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, IN2_40);
  }

  XPN* getMothersMaidenName(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, IN2_40);
  }

  bool isIN2_40(size_t index = 0) {
    try {
      return this->getObject(index, IN2_40) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMothersMaidenName(size_t index = 0) {
    try {
      return this->getObject(index, IN2_40) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Nationality
   */

  CWE* getIN2_41(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN2_41);
  }

  CWE* getNationality(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN2_41);
  }

  bool isIN2_41(size_t index = 0) {
    try {
      return this->getObject(index, IN2_41) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNationality(size_t index = 0) {
    try {
      return this->getObject(index, IN2_41) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Ethnic Group
   */

  CWE* getIN2_42(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN2_42);
  }

  CWE* getEthnicGroup(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN2_42);
  }

  bool isIN2_42(size_t index = 0) {
    try {
      return this->getObject(index, IN2_42) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEthnicGroup(size_t index = 0) {
    try {
      return this->getObject(index, IN2_42) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Marital Status
   */

  CWE* getIN2_43(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN2_43);
  }

  CWE* getMaritalStatus(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN2_43);
  }

  bool isIN2_43(size_t index = 0) {
    try {
      return this->getObject(index, IN2_43) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMaritalStatus(size_t index = 0) {
    try {
      return this->getObject(index, IN2_43) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Insured's Employment Start Date
   */

  DT* getIN2_44(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, IN2_44);
  }

  DT* getInsuredsEmploymentStartDate(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, IN2_44);
  }

  bool isIN2_44(size_t index = 0) {
    try {
      return this->getObject(index, IN2_44) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInsuredsEmploymentStartDate(size_t index = 0) {
    try {
      return this->getObject(index, IN2_44) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Employment Stop Date
   */

  DT* getIN2_45(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, IN2_45);
  }

  DT* getEmploymentStopDate(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, IN2_45);
  }

  bool isIN2_45(size_t index = 0) {
    try {
      return this->getObject(index, IN2_45) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEmploymentStopDate(size_t index = 0) {
    try {
      return this->getObject(index, IN2_45) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Job Title
   */

  ST* getIN2_46(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IN2_46);
  }

  ST* getJobTitle(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IN2_46);
  }

  bool isIN2_46(size_t index = 0) {
    try {
      return this->getObject(index, IN2_46) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isJobTitle(size_t index = 0) {
    try {
      return this->getObject(index, IN2_46) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Job Code/Class
   */

  JCC* getIN2_47(size_t index = 0) {
    return (JCC*)this->getObjectSafe(index, IN2_47);
  }

  JCC* getJobCodeClass(size_t index = 0) {
    return (JCC*)this->getObjectSafe(index, IN2_47);
  }

  bool isIN2_47(size_t index = 0) {
    try {
      return this->getObject(index, IN2_47) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isJobCodeClass(size_t index = 0) {
    try {
      return this->getObject(index, IN2_47) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Job Status
   */

  CWE* getIN2_48(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN2_48);
  }

  CWE* getJobStatus(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN2_48);
  }

  bool isIN2_48(size_t index = 0) {
    try {
      return this->getObject(index, IN2_48) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isJobStatus(size_t index = 0) {
    try {
      return this->getObject(index, IN2_48) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Employer Contact Person Name
   */

  XPN* getIN2_49(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, IN2_49);
  }

  XPN* getEmployerContactPersonName(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, IN2_49);
  }

  bool isIN2_49(size_t index = 0) {
    try {
      return this->getObject(index, IN2_49) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEmployerContactPersonName(size_t index = 0) {
    try {
      return this->getObject(index, IN2_49) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Employer Contact Person Phone Number
   */

  XTN* getIN2_50(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, IN2_50);
  }

  XTN* getEmployerContactPersonPhoneNumber(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, IN2_50);
  }

  bool isIN2_50(size_t index = 0) {
    try {
      return this->getObject(index, IN2_50) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEmployerContactPersonPhoneNumber(size_t index = 0) {
    try {
      return this->getObject(index, IN2_50) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Employer Contact Reason
   */

  CWE* getIN2_51(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN2_51);
  }

  CWE* getEmployerContactReason(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN2_51);
  }

  bool isIN2_51(size_t index = 0) {
    try {
      return this->getObject(index, IN2_51) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEmployerContactReason(size_t index = 0) {
    try {
      return this->getObject(index, IN2_51) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Insured's Contact Person's Name
   */

  XPN* getIN2_52(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, IN2_52);
  }

  XPN* getInsuredsContactPersonsName(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, IN2_52);
  }

  bool isIN2_52(size_t index = 0) {
    try {
      return this->getObject(index, IN2_52) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInsuredsContactPersonsName(size_t index = 0) {
    try {
      return this->getObject(index, IN2_52) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Insured's Contact Person Phone Number
   */

  XTN* getIN2_53(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, IN2_53);
  }

  XTN* getInsuredsContactPersonPhoneNumber(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, IN2_53);
  }

  bool isIN2_53(size_t index = 0) {
    try {
      return this->getObject(index, IN2_53) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInsuredsContactPersonPhoneNumber(size_t index = 0) {
    try {
      return this->getObject(index, IN2_53) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Insured's Contact Person Reason
   */

  CWE* getIN2_54(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN2_54);
  }

  CWE* getInsuredsContactPersonReason(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN2_54);
  }

  bool isIN2_54(size_t index = 0) {
    try {
      return this->getObject(index, IN2_54) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInsuredsContactPersonReason(size_t index = 0) {
    try {
      return this->getObject(index, IN2_54) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Relationship to the Patient Start Date
   */

  DT* getIN2_55(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, IN2_55);
  }

  DT* getRelationshiptothePatientStartDate(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, IN2_55);
  }

  bool isIN2_55(size_t index = 0) {
    try {
      return this->getObject(index, IN2_55) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRelationshiptothePatientStartDate(size_t index = 0) {
    try {
      return this->getObject(index, IN2_55) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Relationship to the Patient Stop Date
   */

  DT* getIN2_56(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, IN2_56);
  }

  DT* getRelationshiptothePatientStopDate(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, IN2_56);
  }

  bool isIN2_56(size_t index = 0) {
    try {
      return this->getObject(index, IN2_56) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRelationshiptothePatientStopDate(size_t index = 0) {
    try {
      return this->getObject(index, IN2_56) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Insurance Co Contact Reason
   */

  CWE* getIN2_57(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN2_57);
  }

  CWE* getInsuranceCoContactReason(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN2_57);
  }

  bool isIN2_57(size_t index = 0) {
    try {
      return this->getObject(index, IN2_57) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInsuranceCoContactReason(size_t index = 0) {
    try {
      return this->getObject(index, IN2_57) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Insurance Co Contact Phone Number
   */

  XTN* getIN2_58(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, IN2_58);
  }

  XTN* getInsuranceCoContactPhoneNumber(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, IN2_58);
  }

  bool isIN2_58(size_t index = 0) {
    try {
      return this->getObject(index, IN2_58) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInsuranceCoContactPhoneNumber(size_t index = 0) {
    try {
      return this->getObject(index, IN2_58) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Policy Scope
   */

  CWE* getIN2_59(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN2_59);
  }

  CWE* getPolicyScope(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN2_59);
  }

  bool isIN2_59(size_t index = 0) {
    try {
      return this->getObject(index, IN2_59) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPolicyScope(size_t index = 0) {
    try {
      return this->getObject(index, IN2_59) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Policy Source
   */

  CWE* getIN2_60(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN2_60);
  }

  CWE* getPolicySource(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN2_60);
  }

  bool isIN2_60(size_t index = 0) {
    try {
      return this->getObject(index, IN2_60) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPolicySource(size_t index = 0) {
    try {
      return this->getObject(index, IN2_60) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Patient Member Number
   */

  CX* getIN2_61(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, IN2_61);
  }

  CX* getPatientMemberNumber(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, IN2_61);
  }

  bool isIN2_61(size_t index = 0) {
    try {
      return this->getObject(index, IN2_61) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPatientMemberNumber(size_t index = 0) {
    try {
      return this->getObject(index, IN2_61) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Guarantor's Relationship to Insured
   */

  CWE* getIN2_62(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN2_62);
  }

  CWE* getGuarantorsRelationshiptoInsured(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN2_62);
  }

  bool isIN2_62(size_t index = 0) {
    try {
      return this->getObject(index, IN2_62) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGuarantorsRelationshiptoInsured(size_t index = 0) {
    try {
      return this->getObject(index, IN2_62) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Insured's Phone Number - Home
   */

  XTN* getIN2_63(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, IN2_63);
  }

  XTN* getInsuredsPhoneNumberHome(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, IN2_63);
  }

  bool isIN2_63(size_t index = 0) {
    try {
      return this->getObject(index, IN2_63) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInsuredsPhoneNumberHome(size_t index = 0) {
    try {
      return this->getObject(index, IN2_63) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Insured's Employer Phone Number
   */

  XTN* getIN2_64(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, IN2_64);
  }

  XTN* getInsuredsEmployerPhoneNumber(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, IN2_64);
  }

  bool isIN2_64(size_t index = 0) {
    try {
      return this->getObject(index, IN2_64) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInsuredsEmployerPhoneNumber(size_t index = 0) {
    try {
      return this->getObject(index, IN2_64) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Military Handicapped Program
   */

  CWE* getIN2_65(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN2_65);
  }

  CWE* getMilitaryHandicappedProgram(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN2_65);
  }

  bool isIN2_65(size_t index = 0) {
    try {
      return this->getObject(index, IN2_65) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMilitaryHandicappedProgram(size_t index = 0) {
    try {
      return this->getObject(index, IN2_65) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Suspend Flag
   */

  ID* getIN2_66(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, IN2_66);
  }

  ID* getSuspendFlag(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, IN2_66);
  }

  bool isIN2_66(size_t index = 0) {
    try {
      return this->getObject(index, IN2_66) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSuspendFlag(size_t index = 0) {
    try {
      return this->getObject(index, IN2_66) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Copay Limit Flag
   */

  ID* getIN2_67(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, IN2_67);
  }

  ID* getCopayLimitFlag(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, IN2_67);
  }

  bool isIN2_67(size_t index = 0) {
    try {
      return this->getObject(index, IN2_67) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCopayLimitFlag(size_t index = 0) {
    try {
      return this->getObject(index, IN2_67) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Stoploss Limit Flag
   */

  ID* getIN2_68(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, IN2_68);
  }

  ID* getStoplossLimitFlag(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, IN2_68);
  }

  bool isIN2_68(size_t index = 0) {
    try {
      return this->getObject(index, IN2_68) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStoplossLimitFlag(size_t index = 0) {
    try {
      return this->getObject(index, IN2_68) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Insured Organization Name and ID
   */

  XON* getIN2_69(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, IN2_69);
  }

  XON* getInsuredOrganizationNameandID(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, IN2_69);
  }

  bool isIN2_69(size_t index = 0) {
    try {
      return this->getObject(index, IN2_69) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInsuredOrganizationNameandID(size_t index = 0) {
    try {
      return this->getObject(index, IN2_69) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Insured Employer Organization Name and ID
   */

  XON* getIN2_70(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, IN2_70);
  }

  XON* getInsuredEmployerOrganizationNameandID(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, IN2_70);
  }

  bool isIN2_70(size_t index = 0) {
    try {
      return this->getObject(index, IN2_70) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInsuredEmployerOrganizationNameandID(size_t index = 0) {
    try {
      return this->getObject(index, IN2_70) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Race
   */

  CWE* getIN2_71(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN2_71);
  }

  CWE* getRace(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN2_71);
  }

  bool isIN2_71(size_t index = 0) {
    try {
      return this->getObject(index, IN2_71) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRace(size_t index = 0) {
    try {
      return this->getObject(index, IN2_71) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Patient's Relationship to Insured
   */

  CWE* getIN2_72(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN2_72);
  }

  CWE* getPatientsRelationshiptoInsured(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN2_72);
  }

  bool isIN2_72(size_t index = 0) {
    try {
      return this->getObject(index, IN2_72) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPatientsRelationshiptoInsured(size_t index = 0) {
    try {
      return this->getObject(index, IN2_72) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Co-Pay Amount
   */

  CP* getIN2_73(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, IN2_73);
  }

  CP* getCoPayAmount(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, IN2_73);
  }

  bool isIN2_73(size_t index = 0) {
    try {
      return this->getObject(index, IN2_73) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCoPayAmount(size_t index = 0) {
    try {
      return this->getObject(index, IN2_73) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of IN2 */

} /* End of namespace HL7_29 */
#endif /* __IN2_v29_H__ */
