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


#ifndef __PCR_v29_H__
#define __PCR_v29_H__

#include "../../common/Util.h"
#include "../datatype/CQ.h"
#include "../datatype/CWE.h"
#include "../datatype/DTM.h"
#include "../datatype/ID.h"
#include "../datatype/IS.h"
#include "../datatype/ST.h"

namespace HL7_29 {

/* PCR */
class PCR : public HL7Segment {
 public:
  PCR() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    PCR_1,
    PCR_2,
    PCR_3,
    PCR_4,
    PCR_5,
    PCR_6,
    PCR_7,
    PCR_8,
    PCR_9,
    PCR_10,
    PCR_11,
    PCR_12,
    PCR_13,
    PCR_14,
    PCR_15,
    PCR_16,
    PCR_17,
    PCR_18,
    PCR_19,
    PCR_20,
    PCR_21,
    PCR_22,
    PCR_23,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "PCR"; }
  PCR* create() const { return new PCR(); }

 private:
  void init() {
    setName("PCR");
    /* Init members */
    addObject<CWE>(PCR_1, "PCR.1", HL7::initialized, HL7::repetition_off);
    addObject<IS>(PCR_2, "PCR.2", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PCR_3, "PCR.3", HL7::initialized, HL7::repetition_off);
    addObject<CQ>(PCR_4, "PCR.4", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(PCR_5, "PCR.5", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(PCR_6, "PCR.6", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(PCR_7, "PCR.7", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(PCR_8, "PCR.8", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PCR_9, "PCR.9", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PCR_10, "PCR.10", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PCR_11, "PCR.11", HL7::initialized, HL7::repetition_off);
    addObject<ST>(PCR_12, "PCR.12", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PCR_13, "PCR.13", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PCR_14, "PCR.14", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PCR_15, "PCR.15", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PCR_16, "PCR.16", HL7::initialized, HL7::repetition_off);
    addObject<ID>(PCR_17, "PCR.17", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(PCR_18, "PCR.18", HL7::initialized, HL7::repetition_off);
    addObject<ID>(PCR_19, "PCR.19", HL7::initialized, HL7::repetition_off);
    addObject<ID>(PCR_20, "PCR.20", HL7::initialized, HL7::repetition_off);
    addObject<ID>(PCR_21, "PCR.21", HL7::initialized, HL7::repetition_off);
    addObject<ID>(PCR_22, "PCR.22", HL7::initialized, HL7::repetition_off);
    addObject<ID>(PCR_23, "PCR.23", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Implicated Product
   */

  CWE* getPCR_1(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PCR_1);
  }

  CWE* getImplicatedProduct(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PCR_1);
  }

  bool isPCR_1(size_t index = 0) {
    try {
      return this->getObject(index, PCR_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isImplicatedProduct(size_t index = 0) {
    try {
      return this->getObject(index, PCR_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Generic Product
   */

  IS* getPCR_2(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PCR_2);
  }

  IS* getGenericProduct(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PCR_2);
  }

  bool isPCR_2(size_t index = 0) {
    try {
      return this->getObject(index, PCR_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGenericProduct(size_t index = 0) {
    try {
      return this->getObject(index, PCR_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Product Class
   */

  CWE* getPCR_3(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PCR_3);
  }

  CWE* getProductClass(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PCR_3);
  }

  bool isPCR_3(size_t index = 0) {
    try {
      return this->getObject(index, PCR_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProductClass(size_t index = 0) {
    try {
      return this->getObject(index, PCR_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Total Duration Of Therapy
   */

  CQ* getPCR_4(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, PCR_4);
  }

  CQ* getTotalDurationOfTherapy(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, PCR_4);
  }

  bool isPCR_4(size_t index = 0) {
    try {
      return this->getObject(index, PCR_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTotalDurationOfTherapy(size_t index = 0) {
    try {
      return this->getObject(index, PCR_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Product Manufacture Date
   */

  DTM* getPCR_5(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, PCR_5);
  }

  DTM* getProductManufactureDate(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, PCR_5);
  }

  bool isPCR_5(size_t index = 0) {
    try {
      return this->getObject(index, PCR_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProductManufactureDate(size_t index = 0) {
    try {
      return this->getObject(index, PCR_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Product Expiration Date
   */

  DTM* getPCR_6(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, PCR_6);
  }

  DTM* getProductExpirationDate(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, PCR_6);
  }

  bool isPCR_6(size_t index = 0) {
    try {
      return this->getObject(index, PCR_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProductExpirationDate(size_t index = 0) {
    try {
      return this->getObject(index, PCR_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Product Implantation Date
   */

  DTM* getPCR_7(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, PCR_7);
  }

  DTM* getProductImplantationDate(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, PCR_7);
  }

  bool isPCR_7(size_t index = 0) {
    try {
      return this->getObject(index, PCR_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProductImplantationDate(size_t index = 0) {
    try {
      return this->getObject(index, PCR_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Product Explantation Date
   */

  DTM* getPCR_8(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, PCR_8);
  }

  DTM* getProductExplantationDate(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, PCR_8);
  }

  bool isPCR_8(size_t index = 0) {
    try {
      return this->getObject(index, PCR_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProductExplantationDate(size_t index = 0) {
    try {
      return this->getObject(index, PCR_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Single Use Device
   */

  CWE* getPCR_9(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PCR_9);
  }

  CWE* getSingleUseDevice(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PCR_9);
  }

  bool isPCR_9(size_t index = 0) {
    try {
      return this->getObject(index, PCR_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSingleUseDevice(size_t index = 0) {
    try {
      return this->getObject(index, PCR_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Indication For Product Use
   */

  CWE* getPCR_10(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PCR_10);
  }

  CWE* getIndicationForProductUse(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PCR_10);
  }

  bool isPCR_10(size_t index = 0) {
    try {
      return this->getObject(index, PCR_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIndicationForProductUse(size_t index = 0) {
    try {
      return this->getObject(index, PCR_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Product Problem
   */

  CWE* getPCR_11(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PCR_11);
  }

  CWE* getProductProblem(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PCR_11);
  }

  bool isPCR_11(size_t index = 0) {
    try {
      return this->getObject(index, PCR_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProductProblem(size_t index = 0) {
    try {
      return this->getObject(index, PCR_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Product Serial/Lot Number
   */

  ST* getPCR_12(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PCR_12);
  }

  ST* getProductSerialLotNumber(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PCR_12);
  }

  bool isPCR_12(size_t index = 0) {
    try {
      return this->getObject(index, PCR_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProductSerialLotNumber(size_t index = 0) {
    try {
      return this->getObject(index, PCR_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Product Available For Inspection
   */

  CWE* getPCR_13(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PCR_13);
  }

  CWE* getProductAvailableForInspection(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PCR_13);
  }

  bool isPCR_13(size_t index = 0) {
    try {
      return this->getObject(index, PCR_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProductAvailableForInspection(size_t index = 0) {
    try {
      return this->getObject(index, PCR_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Product Evaluation Performed
   */

  CWE* getPCR_14(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PCR_14);
  }

  CWE* getProductEvaluationPerformed(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PCR_14);
  }

  bool isPCR_14(size_t index = 0) {
    try {
      return this->getObject(index, PCR_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProductEvaluationPerformed(size_t index = 0) {
    try {
      return this->getObject(index, PCR_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Product Evaluation Status
   */

  CWE* getPCR_15(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PCR_15);
  }

  CWE* getProductEvaluationStatus(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PCR_15);
  }

  bool isPCR_15(size_t index = 0) {
    try {
      return this->getObject(index, PCR_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProductEvaluationStatus(size_t index = 0) {
    try {
      return this->getObject(index, PCR_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Product Evaluation Results
   */

  CWE* getPCR_16(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PCR_16);
  }

  CWE* getProductEvaluationResults(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PCR_16);
  }

  bool isPCR_16(size_t index = 0) {
    try {
      return this->getObject(index, PCR_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProductEvaluationResults(size_t index = 0) {
    try {
      return this->getObject(index, PCR_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Evaluated Product Source
   */

  ID* getPCR_17(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PCR_17);
  }

  ID* getEvaluatedProductSource(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PCR_17);
  }

  bool isPCR_17(size_t index = 0) {
    try {
      return this->getObject(index, PCR_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEvaluatedProductSource(size_t index = 0) {
    try {
      return this->getObject(index, PCR_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Date Product Returned To Manufacturer
   */

  DTM* getPCR_18(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, PCR_18);
  }

  DTM* getDateProductReturnedToManufacturer(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, PCR_18);
  }

  bool isPCR_18(size_t index = 0) {
    try {
      return this->getObject(index, PCR_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDateProductReturnedToManufacturer(size_t index = 0) {
    try {
      return this->getObject(index, PCR_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Device Operator Qualifications
   */

  ID* getPCR_19(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PCR_19);
  }

  ID* getDeviceOperatorQualifications(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PCR_19);
  }

  bool isPCR_19(size_t index = 0) {
    try {
      return this->getObject(index, PCR_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDeviceOperatorQualifications(size_t index = 0) {
    try {
      return this->getObject(index, PCR_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Relatedness Assessment
   */

  ID* getPCR_20(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PCR_20);
  }

  ID* getRelatednessAssessment(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PCR_20);
  }

  bool isPCR_20(size_t index = 0) {
    try {
      return this->getObject(index, PCR_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRelatednessAssessment(size_t index = 0) {
    try {
      return this->getObject(index, PCR_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Action Taken In Response To The Event
   */

  ID* getPCR_21(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PCR_21);
  }

  ID* getActionTakenInResponseToTheEvent(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PCR_21);
  }

  bool isPCR_21(size_t index = 0) {
    try {
      return this->getObject(index, PCR_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isActionTakenInResponseToTheEvent(size_t index = 0) {
    try {
      return this->getObject(index, PCR_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Event Causality Observations
   */

  ID* getPCR_22(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PCR_22);
  }

  ID* getEventCausalityObservations(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PCR_22);
  }

  bool isPCR_22(size_t index = 0) {
    try {
      return this->getObject(index, PCR_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEventCausalityObservations(size_t index = 0) {
    try {
      return this->getObject(index, PCR_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Indirect Exposure Mechanism
   */

  ID* getPCR_23(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PCR_23);
  }

  ID* getIndirectExposureMechanism(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PCR_23);
  }

  bool isPCR_23(size_t index = 0) {
    try {
      return this->getObject(index, PCR_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIndirectExposureMechanism(size_t index = 0) {
    try {
      return this->getObject(index, PCR_23) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of PCR */

} /* End of namespace HL7_29 */
#endif /* __PCR_v29_H__ */
