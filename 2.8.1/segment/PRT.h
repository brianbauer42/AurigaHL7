/*
 * hacca - C Toolkit for the HL7 Protocol
 *
 * Warning: This file was automatically generated by [hawk], please do not edit.
 *          Thu 25 Jun 19:00:08 CEST 2020
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


#ifndef __PRT_v281_H__
#define __PRT_v281_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/DTM.h"
#include "../datatype/EI.h"
#include "../datatype/ID.h"
#include "../datatype/PL.h"
#include "../datatype/XAD.h"
#include "../datatype/XCN.h"
#include "../datatype/XON.h"
#include "../datatype/XTN.h"

namespace HL7_281 {

/* Participation Information */
class PRT : public HL7Segment {
 public:
  PRT() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    PRT_1,
    PRT_2,
    PRT_3,
    PRT_4,
    PRT_5,
    PRT_6,
    PRT_7,
    PRT_8,
    PRT_9,
    PRT_10,
    PRT_11,
    PRT_12,
    PRT_13,
    PRT_14,
    PRT_15,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "PRT"; }
  PRT* create() const { return new PRT(); }

 private:
  void init() {
    setName("PRT");
    /* Init members */
    addObject<EI>(PRT_1, "PRT.1", HL7::initialized, HL7::repetition_off);
    addObject<ID>(PRT_2, "PRT.2", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PRT_3, "PRT.3", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PRT_4, "PRT.4", HL7::initialized, HL7::repetition_off);
    addObject<XCN>(PRT_5, "PRT.5", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PRT_6, "PRT.6", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PRT_7, "PRT.7", HL7::initialized, HL7::repetition_off);
    addObject<XON>(PRT_8, "PRT.8", HL7::initialized, HL7::repetition_off);
    addObject<PL>(PRT_9, "PRT.9", HL7::initialized, HL7::repetition_off);
    addObject<EI>(PRT_10, "PRT.10", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(PRT_11, "PRT.11", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(PRT_12, "PRT.12", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PRT_13, "PRT.13", HL7::initialized, HL7::repetition_off);
    addObject<XAD>(PRT_14, "PRT.14", HL7::initialized, HL7::repetition_off);
    addObject<XTN>(PRT_15, "PRT.15", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Participation Instance ID
   */

  EI* getPRT_1(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, PRT_1);
  }

  EI* getParticipationInstanceID(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, PRT_1);
  }

  bool isPRT_1(size_t index = 0) {
    try {
      return this->getObject(index, PRT_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isParticipationInstanceID(size_t index = 0) {
    try {
      return this->getObject(index, PRT_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Action Code
   */

  ID* getPRT_2(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PRT_2);
  }

  ID* getActionCode(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PRT_2);
  }

  bool isPRT_2(size_t index = 0) {
    try {
      return this->getObject(index, PRT_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isActionCode(size_t index = 0) {
    try {
      return this->getObject(index, PRT_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Action Reason
   */

  CWE* getPRT_3(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PRT_3);
  }

  CWE* getActionReason(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PRT_3);
  }

  bool isPRT_3(size_t index = 0) {
    try {
      return this->getObject(index, PRT_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isActionReason(size_t index = 0) {
    try {
      return this->getObject(index, PRT_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Participation
   */

  CWE* getPRT_4(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PRT_4);
  }

  CWE* getParticipation(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PRT_4);
  }

  bool isPRT_4(size_t index = 0) {
    try {
      return this->getObject(index, PRT_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isParticipation(size_t index = 0) {
    try {
      return this->getObject(index, PRT_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Participation Person
   */

  XCN* getPRT_5(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, PRT_5);
  }

  XCN* getParticipationPerson(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, PRT_5);
  }

  bool isPRT_5(size_t index = 0) {
    try {
      return this->getObject(index, PRT_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isParticipationPerson(size_t index = 0) {
    try {
      return this->getObject(index, PRT_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Participation Person Provider Type
   */

  CWE* getPRT_6(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PRT_6);
  }

  CWE* getParticipationPersonProviderType(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PRT_6);
  }

  bool isPRT_6(size_t index = 0) {
    try {
      return this->getObject(index, PRT_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isParticipationPersonProviderType(size_t index = 0) {
    try {
      return this->getObject(index, PRT_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Participant Organization Unit Type
   */

  CWE* getPRT_7(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PRT_7);
  }

  CWE* getParticipantOrganizationUnitType(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PRT_7);
  }

  bool isPRT_7(size_t index = 0) {
    try {
      return this->getObject(index, PRT_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isParticipantOrganizationUnitType(size_t index = 0) {
    try {
      return this->getObject(index, PRT_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Participation Organization
   */

  XON* getPRT_8(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, PRT_8);
  }

  XON* getParticipationOrganization(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, PRT_8);
  }

  bool isPRT_8(size_t index = 0) {
    try {
      return this->getObject(index, PRT_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isParticipationOrganization(size_t index = 0) {
    try {
      return this->getObject(index, PRT_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Participant Location
   */

  PL* getPRT_9(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, PRT_9);
  }

  PL* getParticipantLocation(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, PRT_9);
  }

  bool isPRT_9(size_t index = 0) {
    try {
      return this->getObject(index, PRT_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isParticipantLocation(size_t index = 0) {
    try {
      return this->getObject(index, PRT_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Participation Device
   */

  EI* getPRT_10(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, PRT_10);
  }

  EI* getParticipationDevice(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, PRT_10);
  }

  bool isPRT_10(size_t index = 0) {
    try {
      return this->getObject(index, PRT_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isParticipationDevice(size_t index = 0) {
    try {
      return this->getObject(index, PRT_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Participation Begin Date/Time
   */

  DTM* getPRT_11(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, PRT_11);
  }

  DTM* getParticipationBeginDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, PRT_11);
  }

  bool isPRT_11(size_t index = 0) {
    try {
      return this->getObject(index, PRT_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isParticipationBeginDateTime(size_t index = 0) {
    try {
      return this->getObject(index, PRT_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Participation End Date/Time
   */

  DTM* getPRT_12(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, PRT_12);
  }

  DTM* getParticipationEndDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, PRT_12);
  }

  bool isPRT_12(size_t index = 0) {
    try {
      return this->getObject(index, PRT_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isParticipationEndDateTime(size_t index = 0) {
    try {
      return this->getObject(index, PRT_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Participation Qualitative Duration
   */

  CWE* getPRT_13(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PRT_13);
  }

  CWE* getParticipationQualitativeDuration(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PRT_13);
  }

  bool isPRT_13(size_t index = 0) {
    try {
      return this->getObject(index, PRT_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isParticipationQualitativeDuration(size_t index = 0) {
    try {
      return this->getObject(index, PRT_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Participation Address
   */

  XAD* getPRT_14(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, PRT_14);
  }

  XAD* getParticipationAddress(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, PRT_14);
  }

  bool isPRT_14(size_t index = 0) {
    try {
      return this->getObject(index, PRT_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isParticipationAddress(size_t index = 0) {
    try {
      return this->getObject(index, PRT_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Participant Telecommunication Address
   */

  XTN* getPRT_15(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, PRT_15);
  }

  XTN* getParticipantTelecommunicationAddress(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, PRT_15);
  }

  bool isPRT_15(size_t index = 0) {
    try {
      return this->getObject(index, PRT_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isParticipantTelecommunicationAddress(size_t index = 0) {
    try {
      return this->getObject(index, PRT_15) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of PRT */

} /* End of namespace HL7_281 */
#endif /* __PRT_v281_H__ */
