/*
 * hacca - C Toolkit for the HL7 Protocol
 *
 * Warning: This file was automatically generated by [hawk], please do not edit.
 *          Thu 25 Jun 18:59:44 CEST 2020
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


#ifndef __NDS_v281_H__
#define __NDS_v281_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/DTM.h"
#include "../datatype/NM.h"

namespace HL7_281 {

/* Notification Detail */
class NDS : public HL7Segment {
 public:
  NDS() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    NDS_1,
    NDS_2,
    NDS_3,
    NDS_4,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "NDS"; }
  NDS* create() const { return new NDS(); }

 private:
  void init() {
    setName("NDS");
    /* Init members */
    addObject<NM>(NDS_1, "NDS.1", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(NDS_2, "NDS.2", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(NDS_3, "NDS.3", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(NDS_4, "NDS.4", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Notification Reference Number
   */

  NM* getNDS_1(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, NDS_1);
  }

  NM* getNotificationReferenceNumber(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, NDS_1);
  }

  bool isNDS_1(size_t index = 0) {
    try {
      return this->getObject(index, NDS_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNotificationReferenceNumber(size_t index = 0) {
    try {
      return this->getObject(index, NDS_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Notification Date/Time
   */

  DTM* getNDS_2(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, NDS_2);
  }

  DTM* getNotificationDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, NDS_2);
  }

  bool isNDS_2(size_t index = 0) {
    try {
      return this->getObject(index, NDS_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNotificationDateTime(size_t index = 0) {
    try {
      return this->getObject(index, NDS_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Notification Alert Severity
   */

  CWE* getNDS_3(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, NDS_3);
  }

  CWE* getNotificationAlertSeverity(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, NDS_3);
  }

  bool isNDS_3(size_t index = 0) {
    try {
      return this->getObject(index, NDS_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNotificationAlertSeverity(size_t index = 0) {
    try {
      return this->getObject(index, NDS_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Notification Code
   */

  CWE* getNDS_4(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, NDS_4);
  }

  CWE* getNotificationCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, NDS_4);
  }

  bool isNDS_4(size_t index = 0) {
    try {
      return this->getObject(index, NDS_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNotificationCode(size_t index = 0) {
    try {
      return this->getObject(index, NDS_4) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of NDS */

} /* End of namespace HL7_281 */
#endif /* __NDS_v281_H__ */
