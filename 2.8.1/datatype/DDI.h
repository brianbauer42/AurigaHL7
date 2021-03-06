/*
 * hacca - C Toolkit for the HL7 Protocol
 *
 * Warning: This file was automatically generated by [hawk], please do not edit.
 *          Thu 25 Jun 18:58:45 CEST 2020
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


#ifndef __DDI_v281_H__
#define __DDI_v281_H__

#include "../../common/Util.h"
#include "../datatype/MO.h"
#include "../datatype/NM.h"

namespace HL7_281 {

/* Daily Deductible Information */
class DDI : public HL7Data {
 public:
  DDI() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    DDI_1, /* Delay Days */
    DDI_2, /* Monetary Amount */
    DDI_3, /* Number of Days */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "DDI"; }
  DDI *create() const { return new DDI(); }

 private:
  void init() {
    setName("DDI");
    /* Init members */
    addObject<NM>(DDI_1, "DDI.1", HL7::initialized, HL7::repetition_off);
    addObject<MO>(DDI_2, "DDI.2", HL7::initialized, HL7::repetition_off);
    addObject<NM>(DDI_3, "DDI.3", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Delay Days
   */
  NM *getDDI_1(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, DDI_1);
  }

  NM *getDelayDays(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, DDI_1);
  }

  bool isDDI_1(size_t index = 0) {
    try {
      return this->getObject(index, DDI_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDelayDays(size_t index = 0) {
    try {
      return this->getObject(index, DDI_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Monetary Amount
   */
  MO *getDDI_2(size_t index = 0) {
    return (MO *)this->getObjectSafe(index, DDI_2);
  }

  MO *getMonetaryAmount(size_t index = 0) {
    return (MO *)this->getObjectSafe(index, DDI_2);
  }

  bool isDDI_2(size_t index = 0) {
    try {
      return this->getObject(index, DDI_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMonetaryAmount(size_t index = 0) {
    try {
      return this->getObject(index, DDI_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Number of Days
   */
  NM *getDDI_3(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, DDI_3);
  }

  NM *getNumberofDays(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, DDI_3);
  }

  bool isDDI_3(size_t index = 0) {
    try {
      return this->getObject(index, DDI_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNumberofDays(size_t index = 0) {
    try {
      return this->getObject(index, DDI_3) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End DDI */

} /* End HL7_281 */

#endif /* __DDI_v281_H__ */
