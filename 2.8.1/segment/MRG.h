/*
 * hacca - C Toolkit for the HL7 Protocol
 *
 * Warning: This file was automatically generated by [hawk], please do not edit.
 *          Thu 25 Jun 18:59:42 CEST 2020
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


#ifndef __MRG_v281_H__
#define __MRG_v281_H__

#include "../../common/Util.h"
#include "../datatype/CX.h"
#include "../datatype/NULLDT.h"
#include "../datatype/XPN.h"

namespace HL7_281 {

/* Merge Patient Information */
class MRG : public HL7Segment {
 public:
  MRG() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    MRG_1,
    MRG_2,
    MRG_3,
    MRG_4,
    MRG_5,
    MRG_6,
    MRG_7,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "MRG"; }
  MRG* create() const { return new MRG(); }

 private:
  void init() {
    setName("MRG");
    /* Init members */
    addObject<CX>(MRG_1, "MRG.1", HL7::initialized, HL7::repetition_off);
    addObject<NULLDT>(MRG_2, "MRG.2", HL7::initialized, HL7::repetition_off);
    addObject<CX>(MRG_3, "MRG.3", HL7::initialized, HL7::repetition_off);
    addObject<NULLDT>(MRG_4, "MRG.4", HL7::initialized, HL7::repetition_off);
    addObject<CX>(MRG_5, "MRG.5", HL7::initialized, HL7::repetition_off);
    addObject<CX>(MRG_6, "MRG.6", HL7::initialized, HL7::repetition_off);
    addObject<XPN>(MRG_7, "MRG.7", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Prior Patient Identifier List
   */

  CX* getMRG_1(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, MRG_1);
  }

  CX* getPriorPatientIdentifierList(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, MRG_1);
  }

  bool isMRG_1(size_t index = 0) {
    try {
      return this->getObject(index, MRG_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPriorPatientIdentifierList(size_t index = 0) {
    try {
      return this->getObject(index, MRG_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Prior Alternate Patient ID
   */

  NULLDT* getMRG_2(size_t index = 0) {
    return (NULLDT*)this->getObjectSafe(index, MRG_2);
  }

  NULLDT* getPriorAlternatePatientID(size_t index = 0) {
    return (NULLDT*)this->getObjectSafe(index, MRG_2);
  }

  bool isMRG_2(size_t index = 0) {
    try {
      return this->getObject(index, MRG_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPriorAlternatePatientID(size_t index = 0) {
    try {
      return this->getObject(index, MRG_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Prior Patient Account Number
   */

  CX* getMRG_3(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, MRG_3);
  }

  CX* getPriorPatientAccountNumber(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, MRG_3);
  }

  bool isMRG_3(size_t index = 0) {
    try {
      return this->getObject(index, MRG_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPriorPatientAccountNumber(size_t index = 0) {
    try {
      return this->getObject(index, MRG_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Prior Patient ID
   */

  NULLDT* getMRG_4(size_t index = 0) {
    return (NULLDT*)this->getObjectSafe(index, MRG_4);
  }

  NULLDT* getPriorPatientID(size_t index = 0) {
    return (NULLDT*)this->getObjectSafe(index, MRG_4);
  }

  bool isMRG_4(size_t index = 0) {
    try {
      return this->getObject(index, MRG_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPriorPatientID(size_t index = 0) {
    try {
      return this->getObject(index, MRG_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Prior Visit Number
   */

  CX* getMRG_5(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, MRG_5);
  }

  CX* getPriorVisitNumber(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, MRG_5);
  }

  bool isMRG_5(size_t index = 0) {
    try {
      return this->getObject(index, MRG_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPriorVisitNumber(size_t index = 0) {
    try {
      return this->getObject(index, MRG_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Prior Alternate Visit ID
   */

  CX* getMRG_6(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, MRG_6);
  }

  CX* getPriorAlternateVisitID(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, MRG_6);
  }

  bool isMRG_6(size_t index = 0) {
    try {
      return this->getObject(index, MRG_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPriorAlternateVisitID(size_t index = 0) {
    try {
      return this->getObject(index, MRG_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Prior Patient Name
   */

  XPN* getMRG_7(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, MRG_7);
  }

  XPN* getPriorPatientName(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, MRG_7);
  }

  bool isMRG_7(size_t index = 0) {
    try {
      return this->getObject(index, MRG_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPriorPatientName(size_t index = 0) {
    try {
      return this->getObject(index, MRG_7) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of MRG */

} /* End of namespace HL7_281 */
#endif /* __MRG_v281_H__ */
