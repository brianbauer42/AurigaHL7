/*
 * hacca - C Toolkit for the HL7 Protocol
 *
 * Warning: This file was automatically generated by [hawk], please do not edit.
 *          Thu 25 Jun 19:00:53 CEST 2020
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


#ifndef __ADT_A20__281_H__
#define __ADT_A20__281_H__

#include "../../common/Util.h"
#include "../segment/EVN.h"
#include "../segment/MSH.h"
#include "../segment/NPU.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_281 {

/* ADT_A20 */
struct ADT_A20 : public HL7Message {
  ADT_A20() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ADT_A20_MSH_1,
    ADT_A20_SFT_2,
    ADT_A20_UAC_3,
    ADT_A20_EVN_4,
    ADT_A20_NPU_5,
    FIELD_ID_MAX
  };

  const char* className() const { return "ADT_A20"; }
  ADT_A20* create() const { return new ADT_A20(); }

 private:
  /* Initialize object */
  void init() {
    setName("ADT_A20");
    addObject<MSH>(ADT_A20_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(ADT_A20_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(ADT_A20_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<EVN>(ADT_A20_EVN_4, "EVN.4", HL7::initialized, HL7::repetition_off);
    addObject<NPU>(ADT_A20_NPU_5, "NPU.5", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, ADT_A20_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, ADT_A20_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, ADT_A20_UAC_3);
  }
  EVN* getEVN_4(size_t index = 0) {
    return (EVN*)this->getObjectSafe(index, ADT_A20_EVN_4);
  }
  NPU* getNPU_5(size_t index = 0) {
    return (NPU*)this->getObjectSafe(index, ADT_A20_NPU_5);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A20_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A20_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A20_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEVN_4(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A20_EVN_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNPU_5(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A20_NPU_5) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ADT_A20_ */
} /* namespace HL7_281 */
#endif /*  __ADT_A20__281_H__ */
