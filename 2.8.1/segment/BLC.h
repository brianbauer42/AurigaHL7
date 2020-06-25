/*
 * hacca - C Toolkit for the HL7 Protocol
 *
 * Warning: This file was automatically generated by [hawk], please do not edit.
 *          Thu 25 Jun 18:59:04 CEST 2020
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


#ifndef __BLC_v281_H__
#define __BLC_v281_H__

#include "../../common/Util.h"
#include "../datatype/CQ.h"
#include "../datatype/CWE.h"

namespace HL7_281 {

/* Blood Code */
class BLC : public HL7Segment {
 public:
  BLC() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    BLC_1,
    BLC_2,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "BLC"; }
  BLC* create() const { return new BLC(); }

 private:
  void init() {
    setName("BLC");
    /* Init members */
    addObject<CWE>(BLC_1, "BLC.1", HL7::initialized, HL7::repetition_off);
    addObject<CQ>(BLC_2, "BLC.2", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Blood Product Code
   */

  CWE* getBLC_1(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, BLC_1);
  }

  CWE* getBloodProductCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, BLC_1);
  }

  bool isBLC_1(size_t index = 0) {
    try {
      return this->getObject(index, BLC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBloodProductCode(size_t index = 0) {
    try {
      return this->getObject(index, BLC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Blood Amount
   */

  CQ* getBLC_2(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, BLC_2);
  }

  CQ* getBloodAmount(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, BLC_2);
  }

  bool isBLC_2(size_t index = 0) {
    try {
      return this->getObject(index, BLC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBloodAmount(size_t index = 0) {
    try {
      return this->getObject(index, BLC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of BLC */

} /* End of namespace HL7_281 */
#endif /* __BLC_v281_H__ */
