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


#ifndef __ORA_R41_ORA_R41__29_H__
#define __ORA_R41_ORA_R41__29_H__

#include "../../common/Util.h"
#include "../segment/ERR.h"
#include "../segment/MSA.h"
#include "../segment/MSH.h"
#include "../segment/PRT.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/*  */
struct ORA_R41_ORA_R41 : public HL7Message {
  ORA_R41_ORA_R41() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ORA_R41_ORA_R41_MSH_1,
    ORA_R41_ORA_R41_SFT_2,
    ORA_R41_ORA_R41_UAC_3,
    ORA_R41_ORA_R41_MSA_4,
    ORA_R41_ORA_R41_ERR_5,
    ORA_R41_ORA_R41_PRT_6,
    FIELD_ID_MAX
  };

  const char* className() const { return "ORA_R41_ORA_R41"; }
  ORA_R41_ORA_R41* create() const { return new ORA_R41_ORA_R41(); }

 private:
  /* Initialize object */
  void init() {
    setName("ORA_R41_ORA_R41");
    addObject<MSH>(ORA_R41_ORA_R41_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(ORA_R41_ORA_R41_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(ORA_R41_ORA_R41_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<MSA>(ORA_R41_ORA_R41_MSA_4, "MSA.4", HL7::initialized, HL7::repetition_off);
    addObject<ERR>(ORA_R41_ORA_R41_ERR_5, "ERR.5", HL7::optional, HL7::repetition_on);
    addObject<PRT>(ORA_R41_ORA_R41_PRT_6, "PRT.6", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, ORA_R41_ORA_R41_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, ORA_R41_ORA_R41_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, ORA_R41_ORA_R41_UAC_3);
  }
  MSA* getMSA_4(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, ORA_R41_ORA_R41_MSA_4);
  }
  ERR* getERR_5(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, ORA_R41_ORA_R41_ERR_5);
  }
  PRT* getPRT_6(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORA_R41_ORA_R41_PRT_6);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, ORA_R41_ORA_R41_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, ORA_R41_ORA_R41_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, ORA_R41_ORA_R41_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_4(size_t index = 0) {
    try {
      return this->getObject(index, ORA_R41_ORA_R41_MSA_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_5(size_t index = 0) {
    try {
      return this->getObject(index, ORA_R41_ORA_R41_ERR_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_6(size_t index = 0) {
    try {
      return this->getObject(index, ORA_R41_ORA_R41_PRT_6) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORA_R41_ORA_R41_ */
} /* namespace HL7_29 */
#endif /*  __ORA_R41_ORA_R41__29_H__ */