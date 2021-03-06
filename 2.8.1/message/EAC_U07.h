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


#ifndef __EAC_U07__281_H__
#define __EAC_U07__281_H__

#include "../../common/Util.h"
#include "../segment/CNS.h"
#include "../segment/ECD.h"
#include "../segment/EQU.h"
#include "../segment/MSH.h"
#include "../segment/OBR.h"
#include "../segment/SAC.h"
#include "../segment/SFT.h"
#include "../segment/SPM.h"
#include "../segment/TQ1.h"
#include "../segment/UAC.h"

namespace HL7_281 {

/* Internal structures/groups */
struct EAC_U07_COMMAND; /* COMMAND */
struct EAC_U07_SPECIMEN_CONTAINER; /* SPECIMEN_CONTAINER */

/* COMMAND */
struct EAC_U07_COMMAND : public HL7Group {
  EAC_U07_COMMAND() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    EAC_U07_CNS_1,
    EAC_U07_EAC_U07_SPECIMEN_CONTAINER_2,
    EAC_U07_ECD_3,
    EAC_U07_TQ1_4,
    FIELD_ID_MAX
  };

  const char* className() const { return "EAC_U07_COMMAND"; }
  EAC_U07_COMMAND* create() const { return new EAC_U07_COMMAND(); }

 private:
  /* Initialize object */
  void init() {
    setName("EAC_U07.COMMAND");
    addObject<CNS>(EAC_U07_CNS_1, "CNS.1", HL7::optional, HL7::repetition_on);
    addObject<EAC_U07_SPECIMEN_CONTAINER>(EAC_U07_EAC_U07_SPECIMEN_CONTAINER_2, "EAC_U07_SPECIMEN_CONTAINER.2", HL7::optional, HL7::repetition_on);
    addObject<ECD>(EAC_U07_ECD_3, "ECD.3", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(EAC_U07_TQ1_4, "TQ1.4", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  CNS* getCNS_1(size_t index = 0) {
    return (CNS*)this->getObjectSafe(index, EAC_U07_CNS_1);
  }
  EAC_U07_SPECIMEN_CONTAINER* getEAC_U07_SPECIMEN_CONTAINER_2(size_t index = 0) {
    return (EAC_U07_SPECIMEN_CONTAINER*)this->getObjectSafe(index, EAC_U07_EAC_U07_SPECIMEN_CONTAINER_2);
  }
  ECD* getECD_3(size_t index = 0) {
    return (ECD*)this->getObjectSafe(index, EAC_U07_ECD_3);
  }
  TQ1* getTQ1_4(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, EAC_U07_TQ1_4);
  }

  /* Checker list */
  bool isCNS_1(size_t index = 0) {
    try {
      return this->getObject(index, EAC_U07_CNS_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEAC_U07_SPECIMEN_CONTAINER_2(size_t index = 0) {
    try {
      return this->getObject(index, EAC_U07_EAC_U07_SPECIMEN_CONTAINER_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isECD_3(size_t index = 0) {
    try {
      return this->getObject(index, EAC_U07_ECD_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_4(size_t index = 0) {
    try {
      return this->getObject(index, EAC_U07_TQ1_4) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* EAC_U07_COMMAND */

/* SPECIMEN_CONTAINER */
struct EAC_U07_SPECIMEN_CONTAINER : public HL7Group {
  EAC_U07_SPECIMEN_CONTAINER() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    EAC_U07_OBR_1,
    EAC_U07_SAC_2,
    EAC_U07_SPM_3,
    FIELD_ID_MAX
  };

  const char* className() const { return "EAC_U07_SPECIMEN_CONTAINER"; }
  EAC_U07_SPECIMEN_CONTAINER* create() const { return new EAC_U07_SPECIMEN_CONTAINER(); }

 private:
  /* Initialize object */
  void init() {
    setName("EAC_U07.SPECIMEN_CONTAINER");
    addObject<OBR>(EAC_U07_OBR_1, "OBR.1", HL7::optional, HL7::repetition_on);
    addObject<SAC>(EAC_U07_SAC_2, "SAC.2", HL7::optional, HL7::repetition_on);
    addObject<SPM>(EAC_U07_SPM_3, "SPM.3", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  OBR* getOBR_1(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, EAC_U07_OBR_1);
  }
  SAC* getSAC_2(size_t index = 0) {
    return (SAC*)this->getObjectSafe(index, EAC_U07_SAC_2);
  }
  SPM* getSPM_3(size_t index = 0) {
    return (SPM*)this->getObjectSafe(index, EAC_U07_SPM_3);
  }

  /* Checker list */
  bool isOBR_1(size_t index = 0) {
    try {
      return this->getObject(index, EAC_U07_OBR_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSAC_2(size_t index = 0) {
    try {
      return this->getObject(index, EAC_U07_SAC_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSPM_3(size_t index = 0) {
    try {
      return this->getObject(index, EAC_U07_SPM_3) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* EAC_U07_SPECIMEN_CONTAINER */

/* EAC_U07 */
struct EAC_U07 : public HL7Message {
  EAC_U07() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    EAC_U07_MSH_1,
    EAC_U07_SFT_2,
    EAC_U07_UAC_3,
    EAC_U07_EQU_4,
    EAC_U07_ECD_6,
    EAC_U07_TQ1_7,
    EAC_U07_CNS_9,
    EAC_U07_SAC_10,
    EAC_U07_OBR_11,
    EAC_U07_SPM_12,
    FIELD_ID_MAX
  };

  const char* className() const { return "EAC_U07"; }
  EAC_U07* create() const { return new EAC_U07(); }

 private:
  /* Initialize object */
  void init() {
    setName("EAC_U07");
    addObject<MSH>(EAC_U07_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(EAC_U07_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(EAC_U07_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<EQU>(EAC_U07_EQU_4, "EQU.4", HL7::initialized, HL7::repetition_off);
    addObject<ECD>(EAC_U07_ECD_6, "ECD.6", HL7::initialized, HL7::repetition_off);
    addObject<TQ1>(EAC_U07_TQ1_7, "TQ1.7", HL7::optional, HL7::repetition_off);
    addObject<CNS>(EAC_U07_CNS_9, "CNS.9", HL7::optional, HL7::repetition_off);
    addObject<SAC>(EAC_U07_SAC_10, "SAC.10", HL7::initialized, HL7::repetition_off);
    addObject<OBR>(EAC_U07_OBR_11, "OBR.11", HL7::optional, HL7::repetition_off);
    addObject<SPM>(EAC_U07_SPM_12, "SPM.12", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, EAC_U07_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, EAC_U07_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, EAC_U07_UAC_3);
  }
  EQU* getEQU_4(size_t index = 0) {
    return (EQU*)this->getObjectSafe(index, EAC_U07_EQU_4);
  }
  ECD* getECD_6(size_t index = 0) {
    return (ECD*)this->getObjectSafe(index, EAC_U07_ECD_6);
  }
  TQ1* getTQ1_7(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, EAC_U07_TQ1_7);
  }
  CNS* getCNS_9(size_t index = 0) {
    return (CNS*)this->getObjectSafe(index, EAC_U07_CNS_9);
  }
  SAC* getSAC_10(size_t index = 0) {
    return (SAC*)this->getObjectSafe(index, EAC_U07_SAC_10);
  }
  OBR* getOBR_11(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, EAC_U07_OBR_11);
  }
  SPM* getSPM_12(size_t index = 0) {
    return (SPM*)this->getObjectSafe(index, EAC_U07_SPM_12);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, EAC_U07_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, EAC_U07_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, EAC_U07_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEQU_4(size_t index = 0) {
    try {
      return this->getObject(index, EAC_U07_EQU_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isECD_6(size_t index = 0) {
    try {
      return this->getObject(index, EAC_U07_ECD_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_7(size_t index = 0) {
    try {
      return this->getObject(index, EAC_U07_TQ1_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCNS_9(size_t index = 0) {
    try {
      return this->getObject(index, EAC_U07_CNS_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSAC_10(size_t index = 0) {
    try {
      return this->getObject(index, EAC_U07_SAC_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_11(size_t index = 0) {
    try {
      return this->getObject(index, EAC_U07_OBR_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSPM_12(size_t index = 0) {
    try {
      return this->getObject(index, EAC_U07_SPM_12) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* EAC_U07_ */
} /* namespace HL7_281 */
#endif /*  __EAC_U07__281_H__ */
