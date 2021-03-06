/*
 * hacca - C Toolkit for the HL7 Protocol
 *
 * Warning: This file was automatically generated by [hawk], please do not edit.
 *          Thu 25 Jun 18:58:46 CEST 2020
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


#ifndef __EIP_v281_H__
#define __EIP_v281_H__

#include "../../common/Util.h"
#include "../datatype/EI.h"

namespace HL7_281 {

/* Entity Identifier Pair */
class EIP : public HL7Data {
 public:
  EIP() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    EIP_1, /* Placer Assigned Identifier */
    EIP_2, /* Filler Assigned Identifier */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "EIP"; }
  EIP *create() const { return new EIP(); }

 private:
  void init() {
    setName("EIP");
    /* Init members */
    addObject<EI>(EIP_1, "EIP.1", HL7::initialized, HL7::repetition_off);
    addObject<EI>(EIP_2, "EIP.2", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Placer Assigned Identifier
   */
  EI *getEIP_1(size_t index = 0) {
    return (EI *)this->getObjectSafe(index, EIP_1);
  }

  EI *getPlacerAssignedIdentifier(size_t index = 0) {
    return (EI *)this->getObjectSafe(index, EIP_1);
  }

  bool isEIP_1(size_t index = 0) {
    try {
      return this->getObject(index, EIP_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPlacerAssignedIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, EIP_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Filler Assigned Identifier
   */
  EI *getEIP_2(size_t index = 0) {
    return (EI *)this->getObjectSafe(index, EIP_2);
  }

  EI *getFillerAssignedIdentifier(size_t index = 0) {
    return (EI *)this->getObjectSafe(index, EIP_2);
  }

  bool isEIP_2(size_t index = 0) {
    try {
      return this->getObject(index, EIP_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFillerAssignedIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, EIP_2) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End EIP */

} /* End HL7_281 */

#endif /* __EIP_v281_H__ */
