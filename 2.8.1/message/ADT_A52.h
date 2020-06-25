/*
 * hacca - C Toolkit for the HL7 Protocol
 *
 * Warning: This file was automatically generated by [hawk], please do not edit.
 *          Thu 25 Jun 19:00:58 CEST 2020
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


#ifndef __ADT_A52__281_H__
#define __ADT_A52__281_H__

#include "../../common/Util.h"
#include "../segment/EVN.h"
#include "../segment/MSH.h"
#include "../segment/PD1.h"
#include "../segment/PID.h"
#include "../segment/PV1.h"
#include "../segment/PV2.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_281 {

/* ADT_A52 */
struct ADT_A52 : public HL7Message {
  ADT_A52() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ADT_A52_MSH_1,
    ADT_A52_SFT_2,
    ADT_A52_UAC_3,
    ADT_A52_EVN_4,
    ADT_A52_PID_5,
    ADT_A52_PD1_6,
    ADT_A52_PV1_7,
    ADT_A52_PV2_8,
    FIELD_ID_MAX
  };

  const char* className() const { return "ADT_A52"; }
  ADT_A52* create() const { return new ADT_A52(); }

 private:
  /* Initialize object */
  void init() {
    setName("ADT_A52");
    addObject<MSH>(ADT_A52_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(ADT_A52_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(ADT_A52_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<EVN>(ADT_A52_EVN_4, "EVN.4", HL7::initialized, HL7::repetition_off);
    addObject<PID>(ADT_A52_PID_5, "PID.5", HL7::initialized, HL7::repetition_off);
    addObject<PD1>(ADT_A52_PD1_6, "PD1.6", HL7::optional, HL7::repetition_off);
    addObject<PV1>(ADT_A52_PV1_7, "PV1.7", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(ADT_A52_PV2_8, "PV2.8", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, ADT_A52_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, ADT_A52_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, ADT_A52_UAC_3);
  }
  EVN* getEVN_4(size_t index = 0) {
    return (EVN*)this->getObjectSafe(index, ADT_A52_EVN_4);
  }
  PID* getPID_5(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, ADT_A52_PID_5);
  }
  PD1* getPD1_6(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, ADT_A52_PD1_6);
  }
  PV1* getPV1_7(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, ADT_A52_PV1_7);
  }
  PV2* getPV2_8(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, ADT_A52_PV2_8);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A52_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A52_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A52_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEVN_4(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A52_EVN_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_5(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A52_PID_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_6(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A52_PD1_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_7(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A52_PV1_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_8(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A52_PV2_8) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ADT_A52_ */
} /* namespace HL7_281 */
#endif /*  __ADT_A52__281_H__ */
