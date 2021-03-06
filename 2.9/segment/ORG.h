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


#ifndef __ORG_v29_H__
#define __ORG_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/CX.h"
#include "../datatype/DR.h"
#include "../datatype/ID.h"
#include "../datatype/SI.h"

namespace HL7_29 {

/* ORG */
class ORG : public HL7Segment {
 public:
  ORG() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    ORG_1,
    ORG_2,
    ORG_3,
    ORG_4,
    ORG_5,
    ORG_6,
    ORG_7,
    ORG_8,
    ORG_9,
    ORG_10,
    ORG_11,
    ORG_12,
    ORG_13,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "ORG"; }
  ORG* create() const { return new ORG(); }

 private:
  void init() {
    setName("ORG");
    /* Init members */
    addObject<SI>(ORG_1, "ORG.1", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(ORG_2, "ORG.2", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(ORG_3, "ORG.3", HL7::initialized, HL7::repetition_off);
    addObject<ID>(ORG_4, "ORG.4", HL7::initialized, HL7::repetition_off);
    addObject<CX>(ORG_5, "ORG.5", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(ORG_6, "ORG.6", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(ORG_7, "ORG.7", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(ORG_8, "ORG.8", HL7::initialized, HL7::repetition_off);
    addObject<DR>(ORG_9, "ORG.9", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(ORG_10, "ORG.10", HL7::initialized, HL7::repetition_off);
    addObject<ID>(ORG_11, "ORG.11", HL7::initialized, HL7::repetition_off);
    addObject<ID>(ORG_12, "ORG.12", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(ORG_13, "ORG.13", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Set ID – ORG
   */

  SI* getORG_1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, ORG_1);
  }

  SI* getSetIDORG(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, ORG_1);
  }

  bool isORG_1(size_t index = 0) {
    try {
      return this->getObject(index, ORG_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSetIDORG(size_t index = 0) {
    try {
      return this->getObject(index, ORG_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Organization Unit Code
   */

  CWE* getORG_2(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ORG_2);
  }

  CWE* getOrganizationUnitCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ORG_2);
  }

  bool isORG_2(size_t index = 0) {
    try {
      return this->getObject(index, ORG_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOrganizationUnitCode(size_t index = 0) {
    try {
      return this->getObject(index, ORG_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Organization Unit Type Code
   */

  CWE* getORG_3(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ORG_3);
  }

  CWE* getOrganizationUnitTypeCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ORG_3);
  }

  bool isORG_3(size_t index = 0) {
    try {
      return this->getObject(index, ORG_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOrganizationUnitTypeCode(size_t index = 0) {
    try {
      return this->getObject(index, ORG_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Primary Org Unit Indicator
   */

  ID* getORG_4(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, ORG_4);
  }

  ID* getPrimaryOrgUnitIndicator(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, ORG_4);
  }

  bool isORG_4(size_t index = 0) {
    try {
      return this->getObject(index, ORG_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPrimaryOrgUnitIndicator(size_t index = 0) {
    try {
      return this->getObject(index, ORG_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Practitioner Org Unit Identifier
   */

  CX* getORG_5(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, ORG_5);
  }

  CX* getPractitionerOrgUnitIdentifier(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, ORG_5);
  }

  bool isORG_5(size_t index = 0) {
    try {
      return this->getObject(index, ORG_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPractitionerOrgUnitIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, ORG_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Health Care Provider Type Code
   */

  CWE* getORG_6(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ORG_6);
  }

  CWE* getHealthCareProviderTypeCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ORG_6);
  }

  bool isORG_6(size_t index = 0) {
    try {
      return this->getObject(index, ORG_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isHealthCareProviderTypeCode(size_t index = 0) {
    try {
      return this->getObject(index, ORG_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Health Care Provider Classification Code
   */

  CWE* getORG_7(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ORG_7);
  }

  CWE* getHealthCareProviderClassificationCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ORG_7);
  }

  bool isORG_7(size_t index = 0) {
    try {
      return this->getObject(index, ORG_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isHealthCareProviderClassificationCode(size_t index = 0) {
    try {
      return this->getObject(index, ORG_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Health Care Provider Area of Specialization
   */

  CWE* getORG_8(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ORG_8);
  }

  CWE* getHealthCareProviderAreaofSpecialization(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ORG_8);
  }

  bool isORG_8(size_t index = 0) {
    try {
      return this->getObject(index, ORG_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isHealthCareProviderAreaofSpecialization(size_t index = 0) {
    try {
      return this->getObject(index, ORG_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Effective Date Range
   */

  DR* getORG_9(size_t index = 0) {
    return (DR*)this->getObjectSafe(index, ORG_9);
  }

  DR* getEffectiveDateRange(size_t index = 0) {
    return (DR*)this->getObjectSafe(index, ORG_9);
  }

  bool isORG_9(size_t index = 0) {
    try {
      return this->getObject(index, ORG_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEffectiveDateRange(size_t index = 0) {
    try {
      return this->getObject(index, ORG_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Employment Status Code
   */

  CWE* getORG_10(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ORG_10);
  }

  CWE* getEmploymentStatusCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ORG_10);
  }

  bool isORG_10(size_t index = 0) {
    try {
      return this->getObject(index, ORG_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEmploymentStatusCode(size_t index = 0) {
    try {
      return this->getObject(index, ORG_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Board Approval Indicator
   */

  ID* getORG_11(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, ORG_11);
  }

  ID* getBoardApprovalIndicator(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, ORG_11);
  }

  bool isORG_11(size_t index = 0) {
    try {
      return this->getObject(index, ORG_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBoardApprovalIndicator(size_t index = 0) {
    try {
      return this->getObject(index, ORG_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Primary Care Physician Indicator
   */

  ID* getORG_12(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, ORG_12);
  }

  ID* getPrimaryCarePhysicianIndicator(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, ORG_12);
  }

  bool isORG_12(size_t index = 0) {
    try {
      return this->getObject(index, ORG_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPrimaryCarePhysicianIndicator(size_t index = 0) {
    try {
      return this->getObject(index, ORG_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Cost Center Code
   */

  CWE* getORG_13(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ORG_13);
  }

  CWE* getCostCenterCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ORG_13);
  }

  bool isORG_13(size_t index = 0) {
    try {
      return this->getObject(index, ORG_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCostCenterCode(size_t index = 0) {
    try {
      return this->getObject(index, ORG_13) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of ORG */

} /* End of namespace HL7_29 */
#endif /* __ORG_v29_H__ */
