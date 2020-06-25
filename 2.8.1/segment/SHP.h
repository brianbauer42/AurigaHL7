/*
 * hacca - C Toolkit for the HL7 Protocol
 *
 * Warning: This file was automatically generated by [hawk], please do not edit.
 *          Thu 25 Jun 19:00:34 CEST 2020
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


#ifndef __SHP_v281_H__
#define __SHP_v281_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/DTM.h"
#include "../datatype/EI.h"
#include "../datatype/NM.h"
#include "../datatype/TX.h"

namespace HL7_281 {

/* Shipment */
class SHP : public HL7Segment {
 public:
  SHP() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    SHP_1,
    SHP_2,
    SHP_3,
    SHP_4,
    SHP_5,
    SHP_6,
    SHP_7,
    SHP_8,
    SHP_9,
    SHP_10,
    SHP_11,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "SHP"; }
  SHP* create() const { return new SHP(); }

 private:
  void init() {
    setName("SHP");
    /* Init members */
    addObject<EI>(SHP_1, "SHP.1", HL7::initialized, HL7::repetition_off);
    addObject<EI>(SHP_2, "SHP.2", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(SHP_3, "SHP.3", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(SHP_4, "SHP.4", HL7::initialized, HL7::repetition_off);
    addObject<TX>(SHP_5, "SHP.5", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(SHP_6, "SHP.6", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(SHP_7, "SHP.7", HL7::initialized, HL7::repetition_off);
    addObject<NM>(SHP_8, "SHP.8", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(SHP_9, "SHP.9", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(SHP_10, "SHP.10", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(SHP_11, "SHP.11", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Shipment ID
   */

  EI* getSHP_1(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, SHP_1);
  }

  EI* getShipmentID(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, SHP_1);
  }

  bool isSHP_1(size_t index = 0) {
    try {
      return this->getObject(index, SHP_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isShipmentID(size_t index = 0) {
    try {
      return this->getObject(index, SHP_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Internal Shipment ID
   */

  EI* getSHP_2(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, SHP_2);
  }

  EI* getInternalShipmentID(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, SHP_2);
  }

  bool isSHP_2(size_t index = 0) {
    try {
      return this->getObject(index, SHP_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInternalShipmentID(size_t index = 0) {
    try {
      return this->getObject(index, SHP_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Shipment Status
   */

  CWE* getSHP_3(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SHP_3);
  }

  CWE* getShipmentStatus(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SHP_3);
  }

  bool isSHP_3(size_t index = 0) {
    try {
      return this->getObject(index, SHP_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isShipmentStatus(size_t index = 0) {
    try {
      return this->getObject(index, SHP_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Shipment Status Date/Time
   */

  DTM* getSHP_4(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, SHP_4);
  }

  DTM* getShipmentStatusDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, SHP_4);
  }

  bool isSHP_4(size_t index = 0) {
    try {
      return this->getObject(index, SHP_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isShipmentStatusDateTime(size_t index = 0) {
    try {
      return this->getObject(index, SHP_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Shipment Status Reason
   */

  TX* getSHP_5(size_t index = 0) {
    return (TX*)this->getObjectSafe(index, SHP_5);
  }

  TX* getShipmentStatusReason(size_t index = 0) {
    return (TX*)this->getObjectSafe(index, SHP_5);
  }

  bool isSHP_5(size_t index = 0) {
    try {
      return this->getObject(index, SHP_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isShipmentStatusReason(size_t index = 0) {
    try {
      return this->getObject(index, SHP_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Shipment Priority
   */

  CWE* getSHP_6(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SHP_6);
  }

  CWE* getShipmentPriority(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SHP_6);
  }

  bool isSHP_6(size_t index = 0) {
    try {
      return this->getObject(index, SHP_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isShipmentPriority(size_t index = 0) {
    try {
      return this->getObject(index, SHP_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Shipment Confidentiality
   */

  CWE* getSHP_7(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SHP_7);
  }

  CWE* getShipmentConfidentiality(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SHP_7);
  }

  bool isSHP_7(size_t index = 0) {
    try {
      return this->getObject(index, SHP_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isShipmentConfidentiality(size_t index = 0) {
    try {
      return this->getObject(index, SHP_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Number of Packages in Shipment
   */

  NM* getSHP_8(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, SHP_8);
  }

  NM* getNumberofPackagesinShipment(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, SHP_8);
  }

  bool isSHP_8(size_t index = 0) {
    try {
      return this->getObject(index, SHP_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNumberofPackagesinShipment(size_t index = 0) {
    try {
      return this->getObject(index, SHP_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Shipment Condition
   */

  CWE* getSHP_9(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SHP_9);
  }

  CWE* getShipmentCondition(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SHP_9);
  }

  bool isSHP_9(size_t index = 0) {
    try {
      return this->getObject(index, SHP_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isShipmentCondition(size_t index = 0) {
    try {
      return this->getObject(index, SHP_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Shipment Handling Code
   */

  CWE* getSHP_10(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SHP_10);
  }

  CWE* getShipmentHandlingCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SHP_10);
  }

  bool isSHP_10(size_t index = 0) {
    try {
      return this->getObject(index, SHP_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isShipmentHandlingCode(size_t index = 0) {
    try {
      return this->getObject(index, SHP_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Shipment Risk Code
   */

  CWE* getSHP_11(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SHP_11);
  }

  CWE* getShipmentRiskCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SHP_11);
  }

  bool isSHP_11(size_t index = 0) {
    try {
      return this->getObject(index, SHP_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isShipmentRiskCode(size_t index = 0) {
    try {
      return this->getObject(index, SHP_11) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of SHP */

} /* End of namespace HL7_281 */
#endif /* __SHP_v281_H__ */
