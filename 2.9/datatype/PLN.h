/*
 * hacca - C Toolkit and Applications for the HL7 2.x Protocols
 *           http://github.com/rcarbone/hacca
 *           http://hub.docker.com/repository/docker/roccocarbone/hacca
 *
 * Warning: This file was automatically generated, please do not edit.
 *
 * R. Carbone (rocco@tecsiel.it)
 * Jul 2020
 *
 * SPDX-License-Identifier: BSD-2-Clause-FreeBSD
 */


#ifndef __PLN_v29_H__
#define __PLN_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/DT.h"
#include "../datatype/ST.h"

namespace HL7_29 {

/* practitioner license or other Id number */
class PLN : public HL7Data {
 public:
  PLN() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    PLN_1, /* ID Number */
    PLN_2, /* Type of ID Number */
    PLN_3, /* State/other Qualifying Information */
    PLN_4, /* Expiration Date */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "PLN"; }
  PLN *create() const { return new PLN(); }

 private:
  void init() {
    setName("PLN");
    /* Init members */
    addObject<ST>(PLN_1, "PLN.1", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PLN_2, "PLN.2", HL7::initialized, HL7::repetition_off);
    addObject<ST>(PLN_3, "PLN.3", HL7::initialized, HL7::repetition_off);
    addObject<DT>(PLN_4, "PLN.4", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * ID Number
   */
  ST *getPLN_1(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, PLN_1);
  }

  ST *getIDNumber(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, PLN_1);
  }

  bool isPLN_1(size_t index = 0) {
    try {
      return this->getObject(index, PLN_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIDNumber(size_t index = 0) {
    try {
      return this->getObject(index, PLN_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Type of ID Number
   */
  CWE *getPLN_2(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, PLN_2);
  }

  CWE *getTypeofIDNumber(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, PLN_2);
  }

  bool isPLN_2(size_t index = 0) {
    try {
      return this->getObject(index, PLN_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTypeofIDNumber(size_t index = 0) {
    try {
      return this->getObject(index, PLN_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * State/other Qualifying Information
   */
  ST *getPLN_3(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, PLN_3);
  }

  ST *getStateotherQualifyingInformation(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, PLN_3);
  }

  bool isPLN_3(size_t index = 0) {
    try {
      return this->getObject(index, PLN_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStateotherQualifyingInformation(size_t index = 0) {
    try {
      return this->getObject(index, PLN_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Expiration Date
   */
  DT *getPLN_4(size_t index = 0) {
    return (DT *)this->getObjectSafe(index, PLN_4);
  }

  DT *getExpirationDate(size_t index = 0) {
    return (DT *)this->getObjectSafe(index, PLN_4);
  }

  bool isPLN_4(size_t index = 0) {
    try {
      return this->getObject(index, PLN_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isExpirationDate(size_t index = 0) {
    try {
      return this->getObject(index, PLN_4) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End PLN */

} /* End HL7_29 */

#endif /* __PLN_v29_H__ */
