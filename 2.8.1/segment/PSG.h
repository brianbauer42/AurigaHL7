/*
 * hacca - C Toolkit for the HL7 Protocol
 *
 * Warning: This file was automatically generated by [hawk], please do not edit.
 *          Thu 25 Jun 19:00:08 CEST 2020
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


#ifndef __PSG_v281_H__
#define __PSG_v281_H__

#include "../../common/Util.h"
#include "../datatype/CP.h"
#include "../datatype/EI.h"
#include "../datatype/ID.h"
#include "../datatype/SI.h"
#include "../datatype/ST.h"

namespace HL7_281 {

/* Product/Service Group */
class PSG : public HL7Segment {
 public:
  PSG() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    PSG_1,
    PSG_2,
    PSG_3,
    PSG_4,
    PSG_5,
    PSG_6,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "PSG"; }
  PSG* create() const { return new PSG(); }

 private:
  void init() {
    setName("PSG");
    /* Init members */
    addObject<EI>(PSG_1, "PSG.1", HL7::initialized, HL7::repetition_off);
    addObject<EI>(PSG_2, "PSG.2", HL7::initialized, HL7::repetition_off);
    addObject<SI>(PSG_3, "PSG.3", HL7::initialized, HL7::repetition_off);
    addObject<ID>(PSG_4, "PSG.4", HL7::initialized, HL7::repetition_off);
    addObject<CP>(PSG_5, "PSG.5", HL7::initialized, HL7::repetition_off);
    addObject<ST>(PSG_6, "PSG.6", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Provider Product/Service Group Number
   */

  EI* getPSG_1(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, PSG_1);
  }

  EI* getProviderProductServiceGroupNumber(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, PSG_1);
  }

  bool isPSG_1(size_t index = 0) {
    try {
      return this->getObject(index, PSG_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProviderProductServiceGroupNumber(size_t index = 0) {
    try {
      return this->getObject(index, PSG_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Payer Product/Service Group Number
   */

  EI* getPSG_2(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, PSG_2);
  }

  EI* getPayerProductServiceGroupNumber(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, PSG_2);
  }

  bool isPSG_2(size_t index = 0) {
    try {
      return this->getObject(index, PSG_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPayerProductServiceGroupNumber(size_t index = 0) {
    try {
      return this->getObject(index, PSG_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Product/Service Group Sequence Number
   */

  SI* getPSG_3(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, PSG_3);
  }

  SI* getProductServiceGroupSequenceNumber(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, PSG_3);
  }

  bool isPSG_3(size_t index = 0) {
    try {
      return this->getObject(index, PSG_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProductServiceGroupSequenceNumber(size_t index = 0) {
    try {
      return this->getObject(index, PSG_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Adjudicate as Group
   */

  ID* getPSG_4(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PSG_4);
  }

  ID* getAdjudicateasGroup(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PSG_4);
  }

  bool isPSG_4(size_t index = 0) {
    try {
      return this->getObject(index, PSG_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAdjudicateasGroup(size_t index = 0) {
    try {
      return this->getObject(index, PSG_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Product/Service Group Billed Amount
   */

  CP* getPSG_5(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, PSG_5);
  }

  CP* getProductServiceGroupBilledAmount(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, PSG_5);
  }

  bool isPSG_5(size_t index = 0) {
    try {
      return this->getObject(index, PSG_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProductServiceGroupBilledAmount(size_t index = 0) {
    try {
      return this->getObject(index, PSG_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Product/Service Group Description
   */

  ST* getPSG_6(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PSG_6);
  }

  ST* getProductServiceGroupDescription(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PSG_6);
  }

  bool isPSG_6(size_t index = 0) {
    try {
      return this->getObject(index, PSG_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProductServiceGroupDescription(size_t index = 0) {
    try {
      return this->getObject(index, PSG_6) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of PSG */

} /* End of namespace HL7_281 */
#endif /* __PSG_v281_H__ */