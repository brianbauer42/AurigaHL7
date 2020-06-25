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


#ifndef __DLD_v281_H__
#define __DLD_v281_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/DTM.h"

namespace HL7_281 {

/* Discharge to Location and Date */
class DLD : public HL7Data {
 public:
  DLD() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    DLD_1, /* Discharge to Location */
    DLD_2, /* Effective Date */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "DLD"; }
  DLD *create() const { return new DLD(); }

 private:
  void init() {
    setName("DLD");
    /* Init members */
    addObject<CWE>(DLD_1, "DLD.1", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(DLD_2, "DLD.2", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Discharge to Location
   */
  CWE *getDLD_1(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, DLD_1);
  }

  CWE *getDischargetoLocation(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, DLD_1);
  }

  bool isDLD_1(size_t index = 0) {
    try {
      return this->getObject(index, DLD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDischargetoLocation(size_t index = 0) {
    try {
      return this->getObject(index, DLD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Effective Date
   */
  DTM *getDLD_2(size_t index = 0) {
    return (DTM *)this->getObjectSafe(index, DLD_2);
  }

  DTM *getEffectiveDate(size_t index = 0) {
    return (DTM *)this->getObjectSafe(index, DLD_2);
  }

  bool isDLD_2(size_t index = 0) {
    try {
      return this->getObject(index, DLD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEffectiveDate(size_t index = 0) {
    try {
      return this->getObject(index, DLD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End DLD */

} /* End HL7_281 */

#endif /* __DLD_v281_H__ */
