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


#ifndef __MSA_v29_H__
#define __MSA_v29_H__

#include "../../common/Util.h"
#include "../datatype/ID.h"
#include "../datatype/NM.h"
#include "../datatype/ST.h"

namespace HL7_29 {

/* MSA */
class MSA : public HL7Segment {
 public:
  MSA() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    MSA_1,
    MSA_2,
    MSA_3,
    MSA_4,
    MSA_5,
    MSA_6,
    MSA_7,
    MSA_8,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "MSA"; }
  MSA* create() const { return new MSA(); }

 private:
  void init() {
    setName("MSA");
    /* Init members */
    addObject<ID>(MSA_1, "MSA.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(MSA_2, "MSA.2", HL7::initialized, HL7::repetition_off);
    addObject<ST>(MSA_3, "MSA.3", HL7::initialized, HL7::repetition_off);
    addObject<NM>(MSA_4, "MSA.4", HL7::initialized, HL7::repetition_off);
    addObject<ST>(MSA_5, "MSA.5", HL7::initialized, HL7::repetition_off);
    addObject<ST>(MSA_6, "MSA.6", HL7::initialized, HL7::repetition_off);
    addObject<NM>(MSA_7, "MSA.7", HL7::initialized, HL7::repetition_off);
    addObject<ID>(MSA_8, "MSA.8", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Acknowledgment Code
   */

  ID* getMSA_1(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, MSA_1);
  }

  ID* getAcknowledgmentCode(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, MSA_1);
  }

  bool isMSA_1(size_t index = 0) {
    try {
      return this->getObject(index, MSA_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAcknowledgmentCode(size_t index = 0) {
    try {
      return this->getObject(index, MSA_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Message Control ID
   */

  ST* getMSA_2(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, MSA_2);
  }

  ST* getMessageControlID(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, MSA_2);
  }

  bool isMSA_2(size_t index = 0) {
    try {
      return this->getObject(index, MSA_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMessageControlID(size_t index = 0) {
    try {
      return this->getObject(index, MSA_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Text Message
   */

  ST* getMSA_3(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, MSA_3);
  }

  ST* getTextMessage(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, MSA_3);
  }

  bool isMSA_3(size_t index = 0) {
    try {
      return this->getObject(index, MSA_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTextMessage(size_t index = 0) {
    try {
      return this->getObject(index, MSA_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Expected Sequence Number
   */

  NM* getMSA_4(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, MSA_4);
  }

  NM* getExpectedSequenceNumber(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, MSA_4);
  }

  bool isMSA_4(size_t index = 0) {
    try {
      return this->getObject(index, MSA_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isExpectedSequenceNumber(size_t index = 0) {
    try {
      return this->getObject(index, MSA_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Delayed Acknowledgment Type
   */

  ST* getMSA_5(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, MSA_5);
  }

  ST* getDelayedAcknowledgmentType(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, MSA_5);
  }

  bool isMSA_5(size_t index = 0) {
    try {
      return this->getObject(index, MSA_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDelayedAcknowledgmentType(size_t index = 0) {
    try {
      return this->getObject(index, MSA_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Error Condition
   */

  ST* getMSA_6(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, MSA_6);
  }

  ST* getErrorCondition(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, MSA_6);
  }

  bool isMSA_6(size_t index = 0) {
    try {
      return this->getObject(index, MSA_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isErrorCondition(size_t index = 0) {
    try {
      return this->getObject(index, MSA_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Message Waiting Number
   */

  NM* getMSA_7(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, MSA_7);
  }

  NM* getMessageWaitingNumber(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, MSA_7);
  }

  bool isMSA_7(size_t index = 0) {
    try {
      return this->getObject(index, MSA_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMessageWaitingNumber(size_t index = 0) {
    try {
      return this->getObject(index, MSA_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Message Waiting Priority
   */

  ID* getMSA_8(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, MSA_8);
  }

  ID* getMessageWaitingPriority(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, MSA_8);
  }

  bool isMSA_8(size_t index = 0) {
    try {
      return this->getObject(index, MSA_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMessageWaitingPriority(size_t index = 0) {
    try {
      return this->getObject(index, MSA_8) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of MSA */

} /* End of namespace HL7_29 */
#endif /* __MSA_v29_H__ */
