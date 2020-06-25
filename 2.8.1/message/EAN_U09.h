/*
 * hacca - C Toolkit for the HL7 Protocol
 *
 * Warning: This file was automatically generated by [hawk], please do not edit.
 *          Thu 25 Jun 19:02:55 CEST 2020
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


#ifndef __EAN_U09__281_H__
#define __EAN_U09__281_H__

#include "../../common/Util.h"
#include "../segment/EQU.h"
#include "../segment/MSH.h"
#include "../segment/NDS.h"
#include "../segment/NTE.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_281 {

/* Internal structures/groups */
struct EAN_U09_NOTIFICATION; /* NOTIFICATION */

/* NOTIFICATION */
struct EAN_U09_NOTIFICATION : public HL7Group {
  EAN_U09_NOTIFICATION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    EAN_U09_NDS_1,
    EAN_U09_NTE_2,
    FIELD_ID_MAX
  };

  const char* className() const { return "EAN_U09_NOTIFICATION"; }
  EAN_U09_NOTIFICATION* create() const { return new EAN_U09_NOTIFICATION(); }

 private:
  /* Initialize object */
  void init() {
    setName("EAN_U09.NOTIFICATION");
    addObject<NDS>(EAN_U09_NDS_1, "NDS.1", HL7::optional, HL7::repetition_on);
    addObject<NTE>(EAN_U09_NTE_2, "NTE.2", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  NDS* getNDS_1(size_t index = 0) {
    return (NDS*)this->getObjectSafe(index, EAN_U09_NDS_1);
  }
  NTE* getNTE_2(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, EAN_U09_NTE_2);
  }

  /* Checker list */
  bool isNDS_1(size_t index = 0) {
    try {
      return this->getObject(index, EAN_U09_NDS_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_2(size_t index = 0) {
    try {
      return this->getObject(index, EAN_U09_NTE_2) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* EAN_U09_NOTIFICATION */

/* EAN_U09 */
struct EAN_U09 : public HL7Message {
  EAN_U09() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    EAN_U09_MSH_1,
    EAN_U09_SFT_2,
    EAN_U09_UAC_3,
    EAN_U09_EQU_4,
    EAN_U09_NDS_6,
    EAN_U09_NTE_7,
    FIELD_ID_MAX
  };

  const char* className() const { return "EAN_U09"; }
  EAN_U09* create() const { return new EAN_U09(); }

 private:
  /* Initialize object */
  void init() {
    setName("EAN_U09");
    addObject<MSH>(EAN_U09_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(EAN_U09_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(EAN_U09_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<EQU>(EAN_U09_EQU_4, "EQU.4", HL7::initialized, HL7::repetition_off);
    addObject<NDS>(EAN_U09_NDS_6, "NDS.6", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(EAN_U09_NTE_7, "NTE.7", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, EAN_U09_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, EAN_U09_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, EAN_U09_UAC_3);
  }
  EQU* getEQU_4(size_t index = 0) {
    return (EQU*)this->getObjectSafe(index, EAN_U09_EQU_4);
  }
  NDS* getNDS_6(size_t index = 0) {
    return (NDS*)this->getObjectSafe(index, EAN_U09_NDS_6);
  }
  NTE* getNTE_7(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, EAN_U09_NTE_7);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, EAN_U09_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, EAN_U09_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, EAN_U09_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEQU_4(size_t index = 0) {
    try {
      return this->getObject(index, EAN_U09_EQU_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNDS_6(size_t index = 0) {
    try {
      return this->getObject(index, EAN_U09_NDS_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_7(size_t index = 0) {
    try {
      return this->getObject(index, EAN_U09_NTE_7) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* EAN_U09_ */
} /* namespace HL7_281 */
#endif /*  __EAN_U09__281_H__ */
