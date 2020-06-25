/*
 * hacca - C Toolkit for the HL7 Protocol
 *
 * Warning: This file was automatically generated by [hawk], please do not edit.
 *          Thu 25 Jun 19:00:15 CEST 2020
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


#ifndef __QAK_v281_H__
#define __QAK_v281_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/ID.h"
#include "../datatype/NM.h"
#include "../datatype/ST.h"

namespace HL7_281 {

/* Query Acknowledgment */
class QAK : public HL7Segment {
 public:
  QAK() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    QAK_1,
    QAK_2,
    QAK_3,
    QAK_4,
    QAK_5,
    QAK_6,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "QAK"; }
  QAK* create() const { return new QAK(); }

 private:
  void init() {
    setName("QAK");
    /* Init members */
    addObject<ST>(QAK_1, "QAK.1", HL7::initialized, HL7::repetition_off);
    addObject<ID>(QAK_2, "QAK.2", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(QAK_3, "QAK.3", HL7::initialized, HL7::repetition_off);
    addObject<NM>(QAK_4, "QAK.4", HL7::initialized, HL7::repetition_off);
    addObject<NM>(QAK_5, "QAK.5", HL7::initialized, HL7::repetition_off);
    addObject<NM>(QAK_6, "QAK.6", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Query Tag
   */

  ST* getQAK_1(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, QAK_1);
  }

  ST* getQueryTag(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, QAK_1);
  }

  bool isQAK_1(size_t index = 0) {
    try {
      return this->getObject(index, QAK_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isQueryTag(size_t index = 0) {
    try {
      return this->getObject(index, QAK_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Query Response Status
   */

  ID* getQAK_2(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, QAK_2);
  }

  ID* getQueryResponseStatus(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, QAK_2);
  }

  bool isQAK_2(size_t index = 0) {
    try {
      return this->getObject(index, QAK_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isQueryResponseStatus(size_t index = 0) {
    try {
      return this->getObject(index, QAK_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Message Query Name
   */

  CWE* getQAK_3(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, QAK_3);
  }

  CWE* getMessageQueryName(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, QAK_3);
  }

  bool isQAK_3(size_t index = 0) {
    try {
      return this->getObject(index, QAK_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMessageQueryName(size_t index = 0) {
    try {
      return this->getObject(index, QAK_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Hit Count Total
   */

  NM* getQAK_4(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, QAK_4);
  }

  NM* getHitCountTotal(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, QAK_4);
  }

  bool isQAK_4(size_t index = 0) {
    try {
      return this->getObject(index, QAK_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isHitCountTotal(size_t index = 0) {
    try {
      return this->getObject(index, QAK_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * This payload
   */

  NM* getQAK_5(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, QAK_5);
  }

  NM* getThispayload(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, QAK_5);
  }

  bool isQAK_5(size_t index = 0) {
    try {
      return this->getObject(index, QAK_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isThispayload(size_t index = 0) {
    try {
      return this->getObject(index, QAK_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Hits remaining
   */

  NM* getQAK_6(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, QAK_6);
  }

  NM* getHitsremaining(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, QAK_6);
  }

  bool isQAK_6(size_t index = 0) {
    try {
      return this->getObject(index, QAK_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isHitsremaining(size_t index = 0) {
    try {
      return this->getObject(index, QAK_6) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of QAK */

} /* End of namespace HL7_281 */
#endif /* __QAK_v281_H__ */
