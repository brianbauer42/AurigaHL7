/*
 * hacca - C Toolkit for the HL7 Protocol
 *
 * Warning: This file was automatically generated by [hawk], please do not edit.
 *          Thu 25 Jun 19:02:54 CEST 2020
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


#ifndef __DRG_O43__281_H__
#define __DRG_O43__281_H__

#include "../../common/Util.h"
#include "../segment/AL1.h"
#include "../segment/ARV.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/OBX.h"
#include "../segment/PD1.h"
#include "../segment/PID.h"
#include "../segment/PV1.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_281 {

/* Internal structures/groups */
struct DRG_O43_DONOR; /* DONOR */
struct DRG_O43_DONOR_REGISTRATION; /* DONOR_REGISTRATION */

/* DONOR */
struct DRG_O43_DONOR : public HL7Group {
  DRG_O43_DONOR() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    DRG_O43_AL1_1,
    DRG_O43_ARV_2,
    DRG_O43_DRG_O43_DONOR_REGISTRATION_3,
    DRG_O43_NTE_4,
    DRG_O43_OBX_5,
    DRG_O43_PD1_6,
    DRG_O43_PID_7,
    FIELD_ID_MAX
  };

  const char* className() const { return "DRG_O43_DONOR"; }
  DRG_O43_DONOR* create() const { return new DRG_O43_DONOR(); }

 private:
  /* Initialize object */
  void init() {
    setName("DRG_O43.DONOR");
    addObject<AL1>(DRG_O43_AL1_1, "AL1.1", HL7::optional, HL7::repetition_on);
    addObject<ARV>(DRG_O43_ARV_2, "ARV.2", HL7::optional, HL7::repetition_on);
    addObject<DRG_O43_DONOR_REGISTRATION>(DRG_O43_DRG_O43_DONOR_REGISTRATION_3, "DRG_O43_DONOR_REGISTRATION.3", HL7::optional, HL7::repetition_on);
    addObject<NTE>(DRG_O43_NTE_4, "NTE.4", HL7::optional, HL7::repetition_on);
    addObject<OBX>(DRG_O43_OBX_5, "OBX.5", HL7::optional, HL7::repetition_on);
    addObject<PD1>(DRG_O43_PD1_6, "PD1.6", HL7::optional, HL7::repetition_on);
    addObject<PID>(DRG_O43_PID_7, "PID.7", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  AL1* getAL1_1(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, DRG_O43_AL1_1);
  }
  ARV* getARV_2(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, DRG_O43_ARV_2);
  }
  DRG_O43_DONOR_REGISTRATION* getDRG_O43_DONOR_REGISTRATION_3(size_t index = 0) {
    return (DRG_O43_DONOR_REGISTRATION*)this->getObjectSafe(index, DRG_O43_DRG_O43_DONOR_REGISTRATION_3);
  }
  NTE* getNTE_4(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, DRG_O43_NTE_4);
  }
  OBX* getOBX_5(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, DRG_O43_OBX_5);
  }
  PD1* getPD1_6(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, DRG_O43_PD1_6);
  }
  PID* getPID_7(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, DRG_O43_PID_7);
  }

  /* Checker list */
  bool isAL1_1(size_t index = 0) {
    try {
      return this->getObject(index, DRG_O43_AL1_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_2(size_t index = 0) {
    try {
      return this->getObject(index, DRG_O43_ARV_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDRG_O43_DONOR_REGISTRATION_3(size_t index = 0) {
    try {
      return this->getObject(index, DRG_O43_DRG_O43_DONOR_REGISTRATION_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_4(size_t index = 0) {
    try {
      return this->getObject(index, DRG_O43_NTE_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_5(size_t index = 0) {
    try {
      return this->getObject(index, DRG_O43_OBX_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_6(size_t index = 0) {
    try {
      return this->getObject(index, DRG_O43_PD1_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_7(size_t index = 0) {
    try {
      return this->getObject(index, DRG_O43_PID_7) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* DRG_O43_DONOR */

/* DONOR_REGISTRATION */
struct DRG_O43_DONOR_REGISTRATION : public HL7Group {
  DRG_O43_DONOR_REGISTRATION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    DRG_O43_NTE_1,
    DRG_O43_PV1_2,
    FIELD_ID_MAX
  };

  const char* className() const { return "DRG_O43_DONOR_REGISTRATION"; }
  DRG_O43_DONOR_REGISTRATION* create() const { return new DRG_O43_DONOR_REGISTRATION(); }

 private:
  /* Initialize object */
  void init() {
    setName("DRG_O43.DONOR_REGISTRATION");
    addObject<NTE>(DRG_O43_NTE_1, "NTE.1", HL7::optional, HL7::repetition_on);
    addObject<PV1>(DRG_O43_PV1_2, "PV1.2", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  NTE* getNTE_1(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, DRG_O43_NTE_1);
  }
  PV1* getPV1_2(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, DRG_O43_PV1_2);
  }

  /* Checker list */
  bool isNTE_1(size_t index = 0) {
    try {
      return this->getObject(index, DRG_O43_NTE_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_2(size_t index = 0) {
    try {
      return this->getObject(index, DRG_O43_PV1_2) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* DRG_O43_DONOR_REGISTRATION */

/* DRG_O43 */
struct DRG_O43 : public HL7Message {
  DRG_O43() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    DRG_O43_MSH_1,
    DRG_O43_SFT_2,
    DRG_O43_UAC_3,
    DRG_O43_PID_5,
    DRG_O43_PD1_6,
    DRG_O43_OBX_7,
    DRG_O43_NTE_8,
    DRG_O43_AL1_9,
    DRG_O43_ARV_10,
    DRG_O43_PV1_12,
    DRG_O43_NTE_13,
    FIELD_ID_MAX
  };

  const char* className() const { return "DRG_O43"; }
  DRG_O43* create() const { return new DRG_O43(); }

 private:
  /* Initialize object */
  void init() {
    setName("DRG_O43");
    addObject<MSH>(DRG_O43_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(DRG_O43_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(DRG_O43_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<PID>(DRG_O43_PID_5, "PID.5", HL7::initialized, HL7::repetition_off);
    addObject<PD1>(DRG_O43_PD1_6, "PD1.6", HL7::optional, HL7::repetition_off);
    addObject<OBX>(DRG_O43_OBX_7, "OBX.7", HL7::optional, HL7::repetition_off);
    addObject<NTE>(DRG_O43_NTE_8, "NTE.8", HL7::optional, HL7::repetition_off);
    addObject<AL1>(DRG_O43_AL1_9, "AL1.9", HL7::optional, HL7::repetition_off);
    addObject<ARV>(DRG_O43_ARV_10, "ARV.10", HL7::optional, HL7::repetition_off);
    addObject<PV1>(DRG_O43_PV1_12, "PV1.12", HL7::optional, HL7::repetition_off);
    addObject<NTE>(DRG_O43_NTE_13, "NTE.13", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, DRG_O43_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, DRG_O43_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, DRG_O43_UAC_3);
  }
  PID* getPID_5(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, DRG_O43_PID_5);
  }
  PD1* getPD1_6(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, DRG_O43_PD1_6);
  }
  OBX* getOBX_7(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, DRG_O43_OBX_7);
  }
  NTE* getNTE_8(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, DRG_O43_NTE_8);
  }
  AL1* getAL1_9(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, DRG_O43_AL1_9);
  }
  ARV* getARV_10(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, DRG_O43_ARV_10);
  }
  PV1* getPV1_12(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, DRG_O43_PV1_12);
  }
  NTE* getNTE_13(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, DRG_O43_NTE_13);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, DRG_O43_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, DRG_O43_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, DRG_O43_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_5(size_t index = 0) {
    try {
      return this->getObject(index, DRG_O43_PID_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_6(size_t index = 0) {
    try {
      return this->getObject(index, DRG_O43_PD1_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_7(size_t index = 0) {
    try {
      return this->getObject(index, DRG_O43_OBX_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_8(size_t index = 0) {
    try {
      return this->getObject(index, DRG_O43_NTE_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_9(size_t index = 0) {
    try {
      return this->getObject(index, DRG_O43_AL1_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_10(size_t index = 0) {
    try {
      return this->getObject(index, DRG_O43_ARV_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_12(size_t index = 0) {
    try {
      return this->getObject(index, DRG_O43_PV1_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_13(size_t index = 0) {
    try {
      return this->getObject(index, DRG_O43_NTE_13) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* DRG_O43_ */
} /* namespace HL7_281 */
#endif /*  __DRG_O43__281_H__ */
