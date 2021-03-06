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


#ifndef __MFI_v29_H__
#define __MFI_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/DTM.h"
#include "../datatype/HD.h"
#include "../datatype/ID.h"

namespace HL7_29 {

/* MFI */
class MFI : public HL7Segment {
 public:
  MFI() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    MFI_1,
    MFI_2,
    MFI_3,
    MFI_4,
    MFI_5,
    MFI_6,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "MFI"; }
  MFI* create() const { return new MFI(); }

 private:
  void init() {
    setName("MFI");
    /* Init members */
    addObject<CWE>(MFI_1, "MFI.1", HL7::initialized, HL7::repetition_off);
    addObject<HD>(MFI_2, "MFI.2", HL7::initialized, HL7::repetition_off);
    addObject<ID>(MFI_3, "MFI.3", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(MFI_4, "MFI.4", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(MFI_5, "MFI.5", HL7::initialized, HL7::repetition_off);
    addObject<ID>(MFI_6, "MFI.6", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Master File Identifier
   */

  CWE* getMFI_1(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, MFI_1);
  }

  CWE* getMasterFileIdentifier(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, MFI_1);
  }

  bool isMFI_1(size_t index = 0) {
    try {
      return this->getObject(index, MFI_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMasterFileIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, MFI_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Master File Application Identifier
   */

  HD* getMFI_2(size_t index = 0) {
    return (HD*)this->getObjectSafe(index, MFI_2);
  }

  HD* getMasterFileApplicationIdentifier(size_t index = 0) {
    return (HD*)this->getObjectSafe(index, MFI_2);
  }

  bool isMFI_2(size_t index = 0) {
    try {
      return this->getObject(index, MFI_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMasterFileApplicationIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, MFI_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * File-Level Event Code
   */

  ID* getMFI_3(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, MFI_3);
  }

  ID* getFileLevelEventCode(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, MFI_3);
  }

  bool isMFI_3(size_t index = 0) {
    try {
      return this->getObject(index, MFI_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFileLevelEventCode(size_t index = 0) {
    try {
      return this->getObject(index, MFI_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Entered Date/Time
   */

  DTM* getMFI_4(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, MFI_4);
  }

  DTM* getEnteredDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, MFI_4);
  }

  bool isMFI_4(size_t index = 0) {
    try {
      return this->getObject(index, MFI_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEnteredDateTime(size_t index = 0) {
    try {
      return this->getObject(index, MFI_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Effective Date/Time
   */

  DTM* getMFI_5(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, MFI_5);
  }

  DTM* getEffectiveDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, MFI_5);
  }

  bool isMFI_5(size_t index = 0) {
    try {
      return this->getObject(index, MFI_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEffectiveDateTime(size_t index = 0) {
    try {
      return this->getObject(index, MFI_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Response Level Code
   */

  ID* getMFI_6(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, MFI_6);
  }

  ID* getResponseLevelCode(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, MFI_6);
  }

  bool isMFI_6(size_t index = 0) {
    try {
      return this->getObject(index, MFI_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isResponseLevelCode(size_t index = 0) {
    try {
      return this->getObject(index, MFI_6) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of MFI */

} /* End of namespace HL7_29 */
#endif /* __MFI_v29_H__ */
