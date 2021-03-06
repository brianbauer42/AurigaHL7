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


#ifndef __FN_v29_H__
#define __FN_v29_H__

#include "../../common/Util.h"
#include "../datatype/ST.h"

namespace HL7_29 {

/* family name */
class FN : public HL7Data {
 public:
  FN() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    FN_1, /* Surname */
    FN_2, /* Own Surname Prefix */
    FN_3, /* Own Surname */
    FN_4, /* Surname Prefix from Partner/Spouse */
    FN_5, /* Surname from Partner/Spouse */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "FN"; }
  FN *create() const { return new FN(); }

 private:
  void init() {
    setName("FN");
    /* Init members */
    addObject<ST>(FN_1, "FN.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(FN_2, "FN.2", HL7::initialized, HL7::repetition_off);
    addObject<ST>(FN_3, "FN.3", HL7::initialized, HL7::repetition_off);
    addObject<ST>(FN_4, "FN.4", HL7::initialized, HL7::repetition_off);
    addObject<ST>(FN_5, "FN.5", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Surname
   */
  ST *getFN_1(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, FN_1);
  }

  ST *getSurname(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, FN_1);
  }

  bool isFN_1(size_t index = 0) {
    try {
      return this->getObject(index, FN_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSurname(size_t index = 0) {
    try {
      return this->getObject(index, FN_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Own Surname Prefix
   */
  ST *getFN_2(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, FN_2);
  }

  ST *getOwnSurnamePrefix(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, FN_2);
  }

  bool isFN_2(size_t index = 0) {
    try {
      return this->getObject(index, FN_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOwnSurnamePrefix(size_t index = 0) {
    try {
      return this->getObject(index, FN_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Own Surname
   */
  ST *getFN_3(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, FN_3);
  }

  ST *getOwnSurname(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, FN_3);
  }

  bool isFN_3(size_t index = 0) {
    try {
      return this->getObject(index, FN_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOwnSurname(size_t index = 0) {
    try {
      return this->getObject(index, FN_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Surname Prefix from Partner/Spouse
   */
  ST *getFN_4(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, FN_4);
  }

  ST *getSurnamePrefixfromPartnerSpouse(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, FN_4);
  }

  bool isFN_4(size_t index = 0) {
    try {
      return this->getObject(index, FN_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSurnamePrefixfromPartnerSpouse(size_t index = 0) {
    try {
      return this->getObject(index, FN_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Surname from Partner/Spouse
   */
  ST *getFN_5(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, FN_5);
  }

  ST *getSurnamefromPartnerSpouse(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, FN_5);
  }

  bool isFN_5(size_t index = 0) {
    try {
      return this->getObject(index, FN_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSurnamefromPartnerSpouse(size_t index = 0) {
    try {
      return this->getObject(index, FN_5) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End FN */

} /* End HL7_29 */

#endif /* __FN_v29_H__ */
