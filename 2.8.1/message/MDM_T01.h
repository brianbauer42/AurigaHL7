/*
 * hacca - C Toolkit for the HL7 Protocol
 *
 * Warning: This file was automatically generated by [hawk], please do not edit.
 *          Thu 25 Jun 19:03:30 CEST 2020
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


#ifndef __MDM_T01__281_H__
#define __MDM_T01__281_H__

#include "../../common/Util.h"
#include "../segment/CON_.h"
#include "../segment/EVN.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/OBR.h"
#include "../segment/ORC.h"
#include "../segment/PID.h"
#include "../segment/PV1.h"
#include "../segment/SFT.h"
#include "../segment/TQ1.h"
#include "../segment/TQ2.h"
#include "../segment/TXA.h"
#include "../segment/UAC.h"

namespace HL7_281 {

/* Internal structures/groups */
struct MDM_T01_COMMON_ORDER; /* COMMON_ORDER */
struct MDM_T01_TIMING; /* TIMING */

/* COMMON_ORDER */
struct MDM_T01_COMMON_ORDER : public HL7Group {
  MDM_T01_COMMON_ORDER() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    MDM_T01_MDM_T01_TIMING_1,
    MDM_T01_NTE_2,
    MDM_T01_OBR_3,
    MDM_T01_ORC_4,
    FIELD_ID_MAX
  };

  const char* className() const { return "MDM_T01_COMMON_ORDER"; }
  MDM_T01_COMMON_ORDER* create() const { return new MDM_T01_COMMON_ORDER(); }

 private:
  /* Initialize object */
  void init() {
    setName("MDM_T01.COMMON_ORDER");
    addObject<MDM_T01_TIMING>(MDM_T01_MDM_T01_TIMING_1, "MDM_T01_TIMING.1", HL7::optional, HL7::repetition_on);
    addObject<NTE>(MDM_T01_NTE_2, "NTE.2", HL7::optional, HL7::repetition_on);
    addObject<OBR>(MDM_T01_OBR_3, "OBR.3", HL7::optional, HL7::repetition_on);
    addObject<ORC>(MDM_T01_ORC_4, "ORC.4", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  MDM_T01_TIMING* getMDM_T01_TIMING_1(size_t index = 0) {
    return (MDM_T01_TIMING*)this->getObjectSafe(index, MDM_T01_MDM_T01_TIMING_1);
  }
  NTE* getNTE_2(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, MDM_T01_NTE_2);
  }
  OBR* getOBR_3(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, MDM_T01_OBR_3);
  }
  ORC* getORC_4(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, MDM_T01_ORC_4);
  }

  /* Checker list */
  bool isMDM_T01_TIMING_1(size_t index = 0) {
    try {
      return this->getObject(index, MDM_T01_MDM_T01_TIMING_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_2(size_t index = 0) {
    try {
      return this->getObject(index, MDM_T01_NTE_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_3(size_t index = 0) {
    try {
      return this->getObject(index, MDM_T01_OBR_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_4(size_t index = 0) {
    try {
      return this->getObject(index, MDM_T01_ORC_4) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* MDM_T01_COMMON_ORDER */

/* TIMING */
struct MDM_T01_TIMING : public HL7Group {
  MDM_T01_TIMING() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    MDM_T01_TQ1_1,
    MDM_T01_TQ2_2,
    FIELD_ID_MAX
  };

  const char* className() const { return "MDM_T01_TIMING"; }
  MDM_T01_TIMING* create() const { return new MDM_T01_TIMING(); }

 private:
  /* Initialize object */
  void init() {
    setName("MDM_T01.TIMING");
    addObject<TQ1>(MDM_T01_TQ1_1, "TQ1.1", HL7::optional, HL7::repetition_on);
    addObject<TQ2>(MDM_T01_TQ2_2, "TQ2.2", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  TQ1* getTQ1_1(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, MDM_T01_TQ1_1);
  }
  TQ2* getTQ2_2(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, MDM_T01_TQ2_2);
  }

  /* Checker list */
  bool isTQ1_1(size_t index = 0) {
    try {
      return this->getObject(index, MDM_T01_TQ1_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_2(size_t index = 0) {
    try {
      return this->getObject(index, MDM_T01_TQ2_2) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* MDM_T01_TIMING */

/* MDM_T01 */
struct MDM_T01 : public HL7Message {
  MDM_T01() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    MDM_T01_MSH_1,
    MDM_T01_SFT_2,
    MDM_T01_UAC_3,
    MDM_T01_EVN_4,
    MDM_T01_PID_5,
    MDM_T01_PV1_6,
    MDM_T01_TXA_8,
    MDM_T01_CON__9,
    MDM_T01_ORC_10,
    MDM_T01_OBR_12,
    MDM_T01_NTE_13,
    MDM_T01_TQ1_14,
    MDM_T01_TQ2_15,
    FIELD_ID_MAX
  };

  const char* className() const { return "MDM_T01"; }
  MDM_T01* create() const { return new MDM_T01(); }

 private:
  /* Initialize object */
  void init() {
    setName("MDM_T01");
    addObject<MSH>(MDM_T01_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(MDM_T01_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(MDM_T01_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<EVN>(MDM_T01_EVN_4, "EVN.4", HL7::initialized, HL7::repetition_off);
    addObject<PID>(MDM_T01_PID_5, "PID.5", HL7::initialized, HL7::repetition_off);
    addObject<PV1>(MDM_T01_PV1_6, "PV1.6", HL7::initialized, HL7::repetition_off);
    addObject<TXA>(MDM_T01_TXA_8, "TXA.8", HL7::initialized, HL7::repetition_off);
    addObject<CON_>(MDM_T01_CON__9, "CON_.9", HL7::optional, HL7::repetition_on);
    addObject<ORC>(MDM_T01_ORC_10, "ORC.10", HL7::initialized, HL7::repetition_off);
    addObject<OBR>(MDM_T01_OBR_12, "OBR.12", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(MDM_T01_NTE_13, "NTE.13", HL7::optional, HL7::repetition_off);
    addObject<TQ1>(MDM_T01_TQ1_14, "TQ1.14", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(MDM_T01_TQ2_15, "TQ2.15", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, MDM_T01_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, MDM_T01_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, MDM_T01_UAC_3);
  }
  EVN* getEVN_4(size_t index = 0) {
    return (EVN*)this->getObjectSafe(index, MDM_T01_EVN_4);
  }
  PID* getPID_5(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, MDM_T01_PID_5);
  }
  PV1* getPV1_6(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, MDM_T01_PV1_6);
  }
  TXA* getTXA_8(size_t index = 0) {
    return (TXA*)this->getObjectSafe(index, MDM_T01_TXA_8);
  }
  CON_* getCON__9(size_t index = 0) {
    return (CON_*)this->getObjectSafe(index, MDM_T01_CON__9);
  }
  ORC* getORC_10(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, MDM_T01_ORC_10);
  }
  OBR* getOBR_12(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, MDM_T01_OBR_12);
  }
  NTE* getNTE_13(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, MDM_T01_NTE_13);
  }
  TQ1* getTQ1_14(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, MDM_T01_TQ1_14);
  }
  TQ2* getTQ2_15(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, MDM_T01_TQ2_15);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, MDM_T01_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, MDM_T01_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, MDM_T01_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEVN_4(size_t index = 0) {
    try {
      return this->getObject(index, MDM_T01_EVN_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_5(size_t index = 0) {
    try {
      return this->getObject(index, MDM_T01_PID_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_6(size_t index = 0) {
    try {
      return this->getObject(index, MDM_T01_PV1_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTXA_8(size_t index = 0) {
    try {
      return this->getObject(index, MDM_T01_TXA_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCON__9(size_t index = 0) {
    try {
      return this->getObject(index, MDM_T01_CON__9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_10(size_t index = 0) {
    try {
      return this->getObject(index, MDM_T01_ORC_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_12(size_t index = 0) {
    try {
      return this->getObject(index, MDM_T01_OBR_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_13(size_t index = 0) {
    try {
      return this->getObject(index, MDM_T01_NTE_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_14(size_t index = 0) {
    try {
      return this->getObject(index, MDM_T01_TQ1_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_15(size_t index = 0) {
    try {
      return this->getObject(index, MDM_T01_TQ2_15) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* MDM_T01_ */
} /* namespace HL7_281 */
#endif /*  __MDM_T01__281_H__ */
