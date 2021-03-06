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


#ifndef __VAR_v29_H__
#define __VAR_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/DTM.h"
#include "../datatype/EI.h"
#include "../datatype/ST.h"
#include "../datatype/XCN.h"

namespace HL7_29 {

/* VAR */
class VAR : public HL7Segment {
 public:
  VAR() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    VAR_1,
    VAR_2,
    VAR_3,
    VAR_4,
    VAR_5,
    VAR_6,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "VAR"; }
  VAR* create() const { return new VAR(); }

 private:
  void init() {
    setName("VAR");
    /* Init members */
    addObject<EI>(VAR_1, "VAR.1", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(VAR_2, "VAR.2", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(VAR_3, "VAR.3", HL7::initialized, HL7::repetition_off);
    addObject<XCN>(VAR_4, "VAR.4", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(VAR_5, "VAR.5", HL7::initialized, HL7::repetition_off);
    addObject<ST>(VAR_6, "VAR.6", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Variance Instance ID
   */

  EI* getVAR_1(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, VAR_1);
  }

  EI* getVarianceInstanceID(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, VAR_1);
  }

  bool isVAR_1(size_t index = 0) {
    try {
      return this->getObject(index, VAR_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isVarianceInstanceID(size_t index = 0) {
    try {
      return this->getObject(index, VAR_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Documented Date/Time
   */

  DTM* getVAR_2(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, VAR_2);
  }

  DTM* getDocumentedDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, VAR_2);
  }

  bool isVAR_2(size_t index = 0) {
    try {
      return this->getObject(index, VAR_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDocumentedDateTime(size_t index = 0) {
    try {
      return this->getObject(index, VAR_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Stated Variance Date/Time
   */

  DTM* getVAR_3(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, VAR_3);
  }

  DTM* getStatedVarianceDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, VAR_3);
  }

  bool isVAR_3(size_t index = 0) {
    try {
      return this->getObject(index, VAR_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStatedVarianceDateTime(size_t index = 0) {
    try {
      return this->getObject(index, VAR_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Variance Originator
   */

  XCN* getVAR_4(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, VAR_4);
  }

  XCN* getVarianceOriginator(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, VAR_4);
  }

  bool isVAR_4(size_t index = 0) {
    try {
      return this->getObject(index, VAR_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isVarianceOriginator(size_t index = 0) {
    try {
      return this->getObject(index, VAR_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Variance Classification
   */

  CWE* getVAR_5(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, VAR_5);
  }

  CWE* getVarianceClassification(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, VAR_5);
  }

  bool isVAR_5(size_t index = 0) {
    try {
      return this->getObject(index, VAR_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isVarianceClassification(size_t index = 0) {
    try {
      return this->getObject(index, VAR_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Variance Description
   */

  ST* getVAR_6(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, VAR_6);
  }

  ST* getVarianceDescription(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, VAR_6);
  }

  bool isVAR_6(size_t index = 0) {
    try {
      return this->getObject(index, VAR_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isVarianceDescription(size_t index = 0) {
    try {
      return this->getObject(index, VAR_6) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of VAR */

} /* End of namespace HL7_29 */
#endif /* __VAR_v29_H__ */
