/*
 * hacca - C Toolkit for the HL7 Protocol
 *
 * Warning: This file was automatically generated by [hawk], please do not edit.
 *          Thu 25 Jun 18:58:51 CEST 2020
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


#ifndef __RFR_v281_H__
#define __RFR_v281_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/NR.h"
#include "../datatype/ST.h"
#include "../datatype/TX.h"

namespace HL7_281 {

/* Reference Range */
class RFR : public HL7Data {
 public:
  RFR() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    RFR_1, /* Numeric Range */
    RFR_2, /* Administrative Sex */
    RFR_3, /* Age Range */
    RFR_4, /* Gestational Age Range */
    RFR_5, /* Species */
    RFR_6, /* Race/subspecies */
    RFR_7, /* Conditions */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "RFR"; }
  RFR *create() const { return new RFR(); }

 private:
  void init() {
    setName("RFR");
    /* Init members */
    addObject<NR>(RFR_1, "RFR.1", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RFR_2, "RFR.2", HL7::initialized, HL7::repetition_off);
    addObject<NR>(RFR_3, "RFR.3", HL7::initialized, HL7::repetition_off);
    addObject<NR>(RFR_4, "RFR.4", HL7::initialized, HL7::repetition_off);
    addObject<ST>(RFR_5, "RFR.5", HL7::initialized, HL7::repetition_off);
    addObject<ST>(RFR_6, "RFR.6", HL7::initialized, HL7::repetition_off);
    addObject<TX>(RFR_7, "RFR.7", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Numeric Range
   */
  NR *getRFR_1(size_t index = 0) {
    return (NR *)this->getObjectSafe(index, RFR_1);
  }

  NR *getNumericRange(size_t index = 0) {
    return (NR *)this->getObjectSafe(index, RFR_1);
  }

  bool isRFR_1(size_t index = 0) {
    try {
      return this->getObject(index, RFR_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNumericRange(size_t index = 0) {
    try {
      return this->getObject(index, RFR_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Administrative Sex
   */
  CWE *getRFR_2(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, RFR_2);
  }

  CWE *getAdministrativeSex(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, RFR_2);
  }

  bool isRFR_2(size_t index = 0) {
    try {
      return this->getObject(index, RFR_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAdministrativeSex(size_t index = 0) {
    try {
      return this->getObject(index, RFR_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Age Range
   */
  NR *getRFR_3(size_t index = 0) {
    return (NR *)this->getObjectSafe(index, RFR_3);
  }

  NR *getAgeRange(size_t index = 0) {
    return (NR *)this->getObjectSafe(index, RFR_3);
  }

  bool isRFR_3(size_t index = 0) {
    try {
      return this->getObject(index, RFR_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAgeRange(size_t index = 0) {
    try {
      return this->getObject(index, RFR_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Gestational Age Range
   */
  NR *getRFR_4(size_t index = 0) {
    return (NR *)this->getObjectSafe(index, RFR_4);
  }

  NR *getGestationalAgeRange(size_t index = 0) {
    return (NR *)this->getObjectSafe(index, RFR_4);
  }

  bool isRFR_4(size_t index = 0) {
    try {
      return this->getObject(index, RFR_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGestationalAgeRange(size_t index = 0) {
    try {
      return this->getObject(index, RFR_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Species
   */
  ST *getRFR_5(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, RFR_5);
  }

  ST *getSpecies(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, RFR_5);
  }

  bool isRFR_5(size_t index = 0) {
    try {
      return this->getObject(index, RFR_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSpecies(size_t index = 0) {
    try {
      return this->getObject(index, RFR_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Race/subspecies
   */
  ST *getRFR_6(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, RFR_6);
  }

  ST *getRacesubspecies(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, RFR_6);
  }

  bool isRFR_6(size_t index = 0) {
    try {
      return this->getObject(index, RFR_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRacesubspecies(size_t index = 0) {
    try {
      return this->getObject(index, RFR_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Conditions
   */
  TX *getRFR_7(size_t index = 0) {
    return (TX *)this->getObjectSafe(index, RFR_7);
  }

  TX *getConditions(size_t index = 0) {
    return (TX *)this->getObjectSafe(index, RFR_7);
  }

  bool isRFR_7(size_t index = 0) {
    try {
      return this->getObject(index, RFR_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isConditions(size_t index = 0) {
    try {
      return this->getObject(index, RFR_7) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End RFR */

} /* End HL7_281 */

#endif /* __RFR_v281_H__ */