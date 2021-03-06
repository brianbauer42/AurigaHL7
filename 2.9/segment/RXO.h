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


#ifndef __RXO_v29_H__
#define __RXO_v29_H__

#include "../../common/Util.h"
#include "../datatype/CNE.h"
#include "../datatype/CQ.h"
#include "../datatype/CWE.h"
#include "../datatype/EI.h"
#include "../datatype/ID.h"
#include "../datatype/NM.h"
#include "../datatype/PL.h"
#include "../datatype/ST.h"
#include "../datatype/XAD.h"
#include "../datatype/XCN.h"
#include "../datatype/XTN.h"

namespace HL7_29 {

/* RXO */
class RXO : public HL7Segment {
 public:
  RXO() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    RXO_1,
    RXO_2,
    RXO_3,
    RXO_4,
    RXO_5,
    RXO_6,
    RXO_7,
    RXO_8,
    RXO_9,
    RXO_10,
    RXO_11,
    RXO_12,
    RXO_13,
    RXO_14,
    RXO_15,
    RXO_16,
    RXO_17,
    RXO_18,
    RXO_19,
    RXO_20,
    RXO_21,
    RXO_22,
    RXO_23,
    RXO_24,
    RXO_25,
    RXO_26,
    RXO_27,
    RXO_28,
    RXO_29,
    RXO_30,
    RXO_31,
    RXO_32,
    RXO_33,
    RXO_34,
    RXO_35,
    RXO_36,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "RXO"; }
  RXO* create() const { return new RXO(); }

 private:
  void init() {
    setName("RXO");
    /* Init members */
    addObject<CWE>(RXO_1, "RXO.1", HL7::initialized, HL7::repetition_off);
    addObject<NM>(RXO_2, "RXO.2", HL7::initialized, HL7::repetition_off);
    addObject<NM>(RXO_3, "RXO.3", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXO_4, "RXO.4", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXO_5, "RXO.5", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXO_6, "RXO.6", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXO_7, "RXO.7", HL7::initialized, HL7::repetition_off);
    addObject<ST>(RXO_8, "RXO.8", HL7::initialized, HL7::repetition_off);
    addObject<ID>(RXO_9, "RXO.9", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXO_10, "RXO.10", HL7::initialized, HL7::repetition_off);
    addObject<NM>(RXO_11, "RXO.11", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXO_12, "RXO.12", HL7::initialized, HL7::repetition_off);
    addObject<NM>(RXO_13, "RXO.13", HL7::initialized, HL7::repetition_off);
    addObject<XCN>(RXO_14, "RXO.14", HL7::initialized, HL7::repetition_off);
    addObject<XCN>(RXO_15, "RXO.15", HL7::initialized, HL7::repetition_off);
    addObject<ID>(RXO_16, "RXO.16", HL7::initialized, HL7::repetition_off);
    addObject<ST>(RXO_17, "RXO.17", HL7::initialized, HL7::repetition_off);
    addObject<NM>(RXO_18, "RXO.18", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXO_19, "RXO.19", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXO_20, "RXO.20", HL7::initialized, HL7::repetition_off);
    addObject<ST>(RXO_21, "RXO.21", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXO_22, "RXO.22", HL7::initialized, HL7::repetition_off);
    addObject<CQ>(RXO_23, "RXO.23", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXO_24, "RXO.24", HL7::initialized, HL7::repetition_off);
    addObject<NM>(RXO_25, "RXO.25", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXO_26, "RXO.26", HL7::initialized, HL7::repetition_off);
    addObject<ID>(RXO_27, "RXO.27", HL7::initialized, HL7::repetition_off);
    addObject<NM>(RXO_28, "RXO.28", HL7::initialized, HL7::repetition_off);
    addObject<EI>(RXO_29, "RXO.29", HL7::initialized, HL7::repetition_off);
    addObject<EI>(RXO_30, "RXO.30", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(RXO_31, "RXO.31", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXO_32, "RXO.32", HL7::initialized, HL7::repetition_off);
    addObject<XAD>(RXO_33, "RXO.33", HL7::initialized, HL7::repetition_off);
    addObject<PL>(RXO_34, "RXO.34", HL7::initialized, HL7::repetition_off);
    addObject<XAD>(RXO_35, "RXO.35", HL7::initialized, HL7::repetition_off);
    addObject<XTN>(RXO_36, "RXO.36", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Requested Give Code
   */

  CWE* getRXO_1(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXO_1);
  }

  CWE* getRequestedGiveCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXO_1);
  }

  bool isRXO_1(size_t index = 0) {
    try {
      return this->getObject(index, RXO_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRequestedGiveCode(size_t index = 0) {
    try {
      return this->getObject(index, RXO_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Requested Give Amount - Minimum
   */

  NM* getRXO_2(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXO_2);
  }

  NM* getRequestedGiveAmountMinimum(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXO_2);
  }

  bool isRXO_2(size_t index = 0) {
    try {
      return this->getObject(index, RXO_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRequestedGiveAmountMinimum(size_t index = 0) {
    try {
      return this->getObject(index, RXO_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Requested Give Amount - Maximum
   */

  NM* getRXO_3(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXO_3);
  }

  NM* getRequestedGiveAmountMaximum(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXO_3);
  }

  bool isRXO_3(size_t index = 0) {
    try {
      return this->getObject(index, RXO_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRequestedGiveAmountMaximum(size_t index = 0) {
    try {
      return this->getObject(index, RXO_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Requested Give Units
   */

  CWE* getRXO_4(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXO_4);
  }

  CWE* getRequestedGiveUnits(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXO_4);
  }

  bool isRXO_4(size_t index = 0) {
    try {
      return this->getObject(index, RXO_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRequestedGiveUnits(size_t index = 0) {
    try {
      return this->getObject(index, RXO_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Requested Dosage Form
   */

  CWE* getRXO_5(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXO_5);
  }

  CWE* getRequestedDosageForm(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXO_5);
  }

  bool isRXO_5(size_t index = 0) {
    try {
      return this->getObject(index, RXO_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRequestedDosageForm(size_t index = 0) {
    try {
      return this->getObject(index, RXO_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Provider's Pharmacy/Treatment Instructions
   */

  CWE* getRXO_6(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXO_6);
  }

  CWE* getProvidersPharmacyTreatmentInstructions(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXO_6);
  }

  bool isRXO_6(size_t index = 0) {
    try {
      return this->getObject(index, RXO_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProvidersPharmacyTreatmentInstructions(size_t index = 0) {
    try {
      return this->getObject(index, RXO_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Provider's Administration Instructions
   */

  CWE* getRXO_7(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXO_7);
  }

  CWE* getProvidersAdministrationInstructions(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXO_7);
  }

  bool isRXO_7(size_t index = 0) {
    try {
      return this->getObject(index, RXO_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProvidersAdministrationInstructions(size_t index = 0) {
    try {
      return this->getObject(index, RXO_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Deliver-To Location
   */

  ST* getRXO_8(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, RXO_8);
  }

  ST* getDeliverToLocation(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, RXO_8);
  }

  bool isRXO_8(size_t index = 0) {
    try {
      return this->getObject(index, RXO_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDeliverToLocation(size_t index = 0) {
    try {
      return this->getObject(index, RXO_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Allow Substitutions
   */

  ID* getRXO_9(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RXO_9);
  }

  ID* getAllowSubstitutions(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RXO_9);
  }

  bool isRXO_9(size_t index = 0) {
    try {
      return this->getObject(index, RXO_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAllowSubstitutions(size_t index = 0) {
    try {
      return this->getObject(index, RXO_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Requested Dispense Code
   */

  CWE* getRXO_10(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXO_10);
  }

  CWE* getRequestedDispenseCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXO_10);
  }

  bool isRXO_10(size_t index = 0) {
    try {
      return this->getObject(index, RXO_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRequestedDispenseCode(size_t index = 0) {
    try {
      return this->getObject(index, RXO_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Requested Dispense Amount
   */

  NM* getRXO_11(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXO_11);
  }

  NM* getRequestedDispenseAmount(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXO_11);
  }

  bool isRXO_11(size_t index = 0) {
    try {
      return this->getObject(index, RXO_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRequestedDispenseAmount(size_t index = 0) {
    try {
      return this->getObject(index, RXO_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Requested Dispense Units
   */

  CWE* getRXO_12(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXO_12);
  }

  CWE* getRequestedDispenseUnits(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXO_12);
  }

  bool isRXO_12(size_t index = 0) {
    try {
      return this->getObject(index, RXO_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRequestedDispenseUnits(size_t index = 0) {
    try {
      return this->getObject(index, RXO_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Number Of Refills
   */

  NM* getRXO_13(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXO_13);
  }

  NM* getNumberOfRefills(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXO_13);
  }

  bool isRXO_13(size_t index = 0) {
    try {
      return this->getObject(index, RXO_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNumberOfRefills(size_t index = 0) {
    try {
      return this->getObject(index, RXO_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Ordering Provider's DEA Number
   */

  XCN* getRXO_14(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, RXO_14);
  }

  XCN* getOrderingProvidersDEANumber(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, RXO_14);
  }

  bool isRXO_14(size_t index = 0) {
    try {
      return this->getObject(index, RXO_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOrderingProvidersDEANumber(size_t index = 0) {
    try {
      return this->getObject(index, RXO_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Pharmacist/Treatment Supplier's Verifier ID
   */

  XCN* getRXO_15(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, RXO_15);
  }

  XCN* getPharmacistTreatmentSuppliersVerifierID(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, RXO_15);
  }

  bool isRXO_15(size_t index = 0) {
    try {
      return this->getObject(index, RXO_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPharmacistTreatmentSuppliersVerifierID(size_t index = 0) {
    try {
      return this->getObject(index, RXO_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Needs Human Review
   */

  ID* getRXO_16(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RXO_16);
  }

  ID* getNeedsHumanReview(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RXO_16);
  }

  bool isRXO_16(size_t index = 0) {
    try {
      return this->getObject(index, RXO_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNeedsHumanReview(size_t index = 0) {
    try {
      return this->getObject(index, RXO_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Requested Give Per
   */

  ST* getRXO_17(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, RXO_17);
  }

  ST* getRequestedGivePer(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, RXO_17);
  }

  bool isRXO_17(size_t index = 0) {
    try {
      return this->getObject(index, RXO_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRequestedGivePer(size_t index = 0) {
    try {
      return this->getObject(index, RXO_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Requested Give Strength
   */

  NM* getRXO_18(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXO_18);
  }

  NM* getRequestedGiveStrength(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXO_18);
  }

  bool isRXO_18(size_t index = 0) {
    try {
      return this->getObject(index, RXO_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRequestedGiveStrength(size_t index = 0) {
    try {
      return this->getObject(index, RXO_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Requested Give Strength Units
   */

  CWE* getRXO_19(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXO_19);
  }

  CWE* getRequestedGiveStrengthUnits(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXO_19);
  }

  bool isRXO_19(size_t index = 0) {
    try {
      return this->getObject(index, RXO_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRequestedGiveStrengthUnits(size_t index = 0) {
    try {
      return this->getObject(index, RXO_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Indication
   */

  CWE* getRXO_20(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXO_20);
  }

  CWE* getIndication(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXO_20);
  }

  bool isRXO_20(size_t index = 0) {
    try {
      return this->getObject(index, RXO_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIndication(size_t index = 0) {
    try {
      return this->getObject(index, RXO_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Requested Give Rate Amount
   */

  ST* getRXO_21(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, RXO_21);
  }

  ST* getRequestedGiveRateAmount(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, RXO_21);
  }

  bool isRXO_21(size_t index = 0) {
    try {
      return this->getObject(index, RXO_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRequestedGiveRateAmount(size_t index = 0) {
    try {
      return this->getObject(index, RXO_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Requested Give Rate Units
   */

  CWE* getRXO_22(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXO_22);
  }

  CWE* getRequestedGiveRateUnits(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXO_22);
  }

  bool isRXO_22(size_t index = 0) {
    try {
      return this->getObject(index, RXO_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRequestedGiveRateUnits(size_t index = 0) {
    try {
      return this->getObject(index, RXO_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Total Daily Dose
   */

  CQ* getRXO_23(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, RXO_23);
  }

  CQ* getTotalDailyDose(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, RXO_23);
  }

  bool isRXO_23(size_t index = 0) {
    try {
      return this->getObject(index, RXO_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTotalDailyDose(size_t index = 0) {
    try {
      return this->getObject(index, RXO_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Supplementary Code
   */

  CWE* getRXO_24(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXO_24);
  }

  CWE* getSupplementaryCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXO_24);
  }

  bool isRXO_24(size_t index = 0) {
    try {
      return this->getObject(index, RXO_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSupplementaryCode(size_t index = 0) {
    try {
      return this->getObject(index, RXO_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Requested Drug Strength Volume
   */

  NM* getRXO_25(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXO_25);
  }

  NM* getRequestedDrugStrengthVolume(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXO_25);
  }

  bool isRXO_25(size_t index = 0) {
    try {
      return this->getObject(index, RXO_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRequestedDrugStrengthVolume(size_t index = 0) {
    try {
      return this->getObject(index, RXO_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Requested Drug Strength Volume Units
   */

  CWE* getRXO_26(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXO_26);
  }

  CWE* getRequestedDrugStrengthVolumeUnits(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXO_26);
  }

  bool isRXO_26(size_t index = 0) {
    try {
      return this->getObject(index, RXO_26) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRequestedDrugStrengthVolumeUnits(size_t index = 0) {
    try {
      return this->getObject(index, RXO_26) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Pharmacy Order Type
   */

  ID* getRXO_27(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RXO_27);
  }

  ID* getPharmacyOrderType(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RXO_27);
  }

  bool isRXO_27(size_t index = 0) {
    try {
      return this->getObject(index, RXO_27) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPharmacyOrderType(size_t index = 0) {
    try {
      return this->getObject(index, RXO_27) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Dispensing Interval
   */

  NM* getRXO_28(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXO_28);
  }

  NM* getDispensingInterval(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXO_28);
  }

  bool isRXO_28(size_t index = 0) {
    try {
      return this->getObject(index, RXO_28) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDispensingInterval(size_t index = 0) {
    try {
      return this->getObject(index, RXO_28) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Medication Instance Identifier
   */

  EI* getRXO_29(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, RXO_29);
  }

  EI* getMedicationInstanceIdentifier(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, RXO_29);
  }

  bool isRXO_29(size_t index = 0) {
    try {
      return this->getObject(index, RXO_29) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMedicationInstanceIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, RXO_29) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Segment Instance Identifier
   */

  EI* getRXO_30(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, RXO_30);
  }

  EI* getSegmentInstanceIdentifier(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, RXO_30);
  }

  bool isRXO_30(size_t index = 0) {
    try {
      return this->getObject(index, RXO_30) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSegmentInstanceIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, RXO_30) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Mood Code
   */

  CNE* getRXO_31(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, RXO_31);
  }

  CNE* getMoodCode(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, RXO_31);
  }

  bool isRXO_31(size_t index = 0) {
    try {
      return this->getObject(index, RXO_31) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMoodCode(size_t index = 0) {
    try {
      return this->getObject(index, RXO_31) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Dispensing Pharmacy
   */

  CWE* getRXO_32(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXO_32);
  }

  CWE* getDispensingPharmacy(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXO_32);
  }

  bool isRXO_32(size_t index = 0) {
    try {
      return this->getObject(index, RXO_32) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDispensingPharmacy(size_t index = 0) {
    try {
      return this->getObject(index, RXO_32) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Dispensing Pharmacy Address
   */

  XAD* getRXO_33(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, RXO_33);
  }

  XAD* getDispensingPharmacyAddress(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, RXO_33);
  }

  bool isRXO_33(size_t index = 0) {
    try {
      return this->getObject(index, RXO_33) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDispensingPharmacyAddress(size_t index = 0) {
    try {
      return this->getObject(index, RXO_33) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Deliver-to Patient Location
   */

  PL* getRXO_34(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, RXO_34);
  }

  PL* getDelivertoPatientLocation(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, RXO_34);
  }

  bool isRXO_34(size_t index = 0) {
    try {
      return this->getObject(index, RXO_34) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDelivertoPatientLocation(size_t index = 0) {
    try {
      return this->getObject(index, RXO_34) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Deliver-to Address
   */

  XAD* getRXO_35(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, RXO_35);
  }

  XAD* getDelivertoAddress(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, RXO_35);
  }

  bool isRXO_35(size_t index = 0) {
    try {
      return this->getObject(index, RXO_35) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDelivertoAddress(size_t index = 0) {
    try {
      return this->getObject(index, RXO_35) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Pharmacy Phone Number
   */

  XTN* getRXO_36(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, RXO_36);
  }

  XTN* getPharmacyPhoneNumber(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, RXO_36);
  }

  bool isRXO_36(size_t index = 0) {
    try {
      return this->getObject(index, RXO_36) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPharmacyPhoneNumber(size_t index = 0) {
    try {
      return this->getObject(index, RXO_36) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of RXO */

} /* End of namespace HL7_29 */
#endif /* __RXO_v29_H__ */
