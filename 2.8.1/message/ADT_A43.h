/*
 * hacca - C Toolkit for the HL7 Protocol
 *
 * Warning: This file was automatically generated by [hawk], please do not edit.
 *          Thu 25 Jun 19:00:56 CEST 2020
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


#ifndef __ADT_A43__281_H__
#define __ADT_A43__281_H__

#include "../../common/Util.h"
#include "../segment/EVN.h"
#include "../segment/MRG.h"
#include "../segment/MSH.h"
#include "../segment/PD1.h"
#include "../segment/PID.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_281 {

/* Internal structures/groups */
struct ADT_A43_PATIENT; /* PATIENT */

/* PATIENT */
struct ADT_A43_PATIENT : public HL7Group {
  ADT_A43_PATIENT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ADT_A43_MRG_1,
    ADT_A43_PD1_2,
    ADT_A43_PID_3,
    FIELD_ID_MAX
  };

  const char* className() const { return "ADT_A43_PATIENT"; }
  ADT_A43_PATIENT* create() const { return new ADT_A43_PATIENT(); }

 private:
  /* Initialize object */
  void init() {
    setName("ADT_A43.PATIENT");
    addObject<MRG>(ADT_A43_MRG_1, "MRG.1", HL7::optional, HL7::repetition_on);
    addObject<PD1>(ADT_A43_PD1_2, "PD1.2", HL7::optional, HL7::repetition_on);
    addObject<PID>(ADT_A43_PID_3, "PID.3", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  MRG* getMRG_1(size_t index = 0) {
    return (MRG*)this->getObjectSafe(index, ADT_A43_MRG_1);
  }
  PD1* getPD1_2(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, ADT_A43_PD1_2);
  }
  PID* getPID_3(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, ADT_A43_PID_3);
  }

  /* Checker list */
  bool isMRG_1(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A43_MRG_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_2(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A43_PD1_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_3(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A43_PID_3) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ADT_A43_PATIENT */

/* ADT_A43 */
struct ADT_A43 : public HL7Message {
  ADT_A43() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ADT_A43_MSH_1,
    ADT_A43_SFT_2,
    ADT_A43_UAC_3,
    ADT_A43_EVN_4,
    ADT_A43_PID_6,
    ADT_A43_PD1_7,
    ADT_A43_MRG_8,
    FIELD_ID_MAX
  };

  const char* className() const { return "ADT_A43"; }
  ADT_A43* create() const { return new ADT_A43(); }

 private:
  /* Initialize object */
  void init() {
    setName("ADT_A43");
    addObject<MSH>(ADT_A43_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(ADT_A43_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(ADT_A43_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<EVN>(ADT_A43_EVN_4, "EVN.4", HL7::initialized, HL7::repetition_off);
    addObject<PID>(ADT_A43_PID_6, "PID.6", HL7::initialized, HL7::repetition_off);
    addObject<PD1>(ADT_A43_PD1_7, "PD1.7", HL7::optional, HL7::repetition_off);
    addObject<MRG>(ADT_A43_MRG_8, "MRG.8", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, ADT_A43_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, ADT_A43_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, ADT_A43_UAC_3);
  }
  EVN* getEVN_4(size_t index = 0) {
    return (EVN*)this->getObjectSafe(index, ADT_A43_EVN_4);
  }
  PID* getPID_6(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, ADT_A43_PID_6);
  }
  PD1* getPD1_7(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, ADT_A43_PD1_7);
  }
  MRG* getMRG_8(size_t index = 0) {
    return (MRG*)this->getObjectSafe(index, ADT_A43_MRG_8);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A43_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A43_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A43_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEVN_4(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A43_EVN_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_6(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A43_PID_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_7(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A43_PD1_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMRG_8(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A43_MRG_8) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ADT_A43_ */
} /* namespace HL7_281 */
#endif /*  __ADT_A43__281_H__ */
