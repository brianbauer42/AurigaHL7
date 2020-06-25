/*
 * hacca - C Toolkit for the HL7 Protocol
 *
 * Warning: This file was automatically generated by [hawk], please do not edit.
 *          Thu 25 Jun 19:02:41 CEST 2020
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


#ifndef __DEL_O46__281_H__
#define __DEL_O46__281_H__

#include "../../common/Util.h"
#include "../segment/AL1.h"
#include "../segment/ARV.h"
#include "../segment/DON.h"
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
struct DEL_O46_DONOR; /* DONOR */
struct DEL_O46_DONOR_REGISTRATION; /* DONOR_REGISTRATION */

/* DONOR */
struct DEL_O46_DONOR : public HL7Group {
  DEL_O46_DONOR() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    DEL_O46_AL1_1,
    DEL_O46_ARV_2,
    DEL_O46_DEL_O46_DONOR_REGISTRATION_3,
    DEL_O46_NTE_4,
    DEL_O46_OBX_5,
    DEL_O46_PD1_6,
    DEL_O46_PID_7,
    FIELD_ID_MAX
  };

  const char* className() const { return "DEL_O46_DONOR"; }
  DEL_O46_DONOR* create() const { return new DEL_O46_DONOR(); }

 private:
  /* Initialize object */
  void init() {
    setName("DEL_O46.DONOR");
    addObject<AL1>(DEL_O46_AL1_1, "AL1.1", HL7::optional, HL7::repetition_on);
    addObject<ARV>(DEL_O46_ARV_2, "ARV.2", HL7::optional, HL7::repetition_on);
    addObject<DEL_O46_DONOR_REGISTRATION>(DEL_O46_DEL_O46_DONOR_REGISTRATION_3, "DEL_O46_DONOR_REGISTRATION.3", HL7::optional, HL7::repetition_on);
    addObject<NTE>(DEL_O46_NTE_4, "NTE.4", HL7::optional, HL7::repetition_on);
    addObject<OBX>(DEL_O46_OBX_5, "OBX.5", HL7::optional, HL7::repetition_on);
    addObject<PD1>(DEL_O46_PD1_6, "PD1.6", HL7::optional, HL7::repetition_on);
    addObject<PID>(DEL_O46_PID_7, "PID.7", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  AL1* getAL1_1(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, DEL_O46_AL1_1);
  }
  ARV* getARV_2(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, DEL_O46_ARV_2);
  }
  DEL_O46_DONOR_REGISTRATION* getDEL_O46_DONOR_REGISTRATION_3(size_t index = 0) {
    return (DEL_O46_DONOR_REGISTRATION*)this->getObjectSafe(index, DEL_O46_DEL_O46_DONOR_REGISTRATION_3);
  }
  NTE* getNTE_4(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, DEL_O46_NTE_4);
  }
  OBX* getOBX_5(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, DEL_O46_OBX_5);
  }
  PD1* getPD1_6(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, DEL_O46_PD1_6);
  }
  PID* getPID_7(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, DEL_O46_PID_7);
  }

  /* Checker list */
  bool isAL1_1(size_t index = 0) {
    try {
      return this->getObject(index, DEL_O46_AL1_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_2(size_t index = 0) {
    try {
      return this->getObject(index, DEL_O46_ARV_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDEL_O46_DONOR_REGISTRATION_3(size_t index = 0) {
    try {
      return this->getObject(index, DEL_O46_DEL_O46_DONOR_REGISTRATION_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_4(size_t index = 0) {
    try {
      return this->getObject(index, DEL_O46_NTE_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_5(size_t index = 0) {
    try {
      return this->getObject(index, DEL_O46_OBX_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_6(size_t index = 0) {
    try {
      return this->getObject(index, DEL_O46_PD1_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_7(size_t index = 0) {
    try {
      return this->getObject(index, DEL_O46_PID_7) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* DEL_O46_DONOR */

/* DONOR_REGISTRATION */
struct DEL_O46_DONOR_REGISTRATION : public HL7Group {
  DEL_O46_DONOR_REGISTRATION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    DEL_O46_NTE_1,
    DEL_O46_PV1_2,
    FIELD_ID_MAX
  };

  const char* className() const { return "DEL_O46_DONOR_REGISTRATION"; }
  DEL_O46_DONOR_REGISTRATION* create() const { return new DEL_O46_DONOR_REGISTRATION(); }

 private:
  /* Initialize object */
  void init() {
    setName("DEL_O46.DONOR_REGISTRATION");
    addObject<NTE>(DEL_O46_NTE_1, "NTE.1", HL7::optional, HL7::repetition_on);
    addObject<PV1>(DEL_O46_PV1_2, "PV1.2", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  NTE* getNTE_1(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, DEL_O46_NTE_1);
  }
  PV1* getPV1_2(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, DEL_O46_PV1_2);
  }

  /* Checker list */
  bool isNTE_1(size_t index = 0) {
    try {
      return this->getObject(index, DEL_O46_NTE_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_2(size_t index = 0) {
    try {
      return this->getObject(index, DEL_O46_PV1_2) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* DEL_O46_DONOR_REGISTRATION */

/* DEL_O46 */
struct DEL_O46 : public HL7Message {
  DEL_O46() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    DEL_O46_MSH_1,
    DEL_O46_SFT_2,
    DEL_O46_UAC_3,
    DEL_O46_DON_5,
    DEL_O46_NTE_6,
    DEL_O46_PID_7,
    DEL_O46_PD1_8,
    DEL_O46_OBX_9,
    DEL_O46_NTE_10,
    DEL_O46_AL1_11,
    DEL_O46_ARV_12,
    DEL_O46_PV1_14,
    DEL_O46_NTE_15,
    FIELD_ID_MAX
  };

  const char* className() const { return "DEL_O46"; }
  DEL_O46* create() const { return new DEL_O46(); }

 private:
  /* Initialize object */
  void init() {
    setName("DEL_O46");
    addObject<MSH>(DEL_O46_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(DEL_O46_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(DEL_O46_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<DON>(DEL_O46_DON_5, "DON.5", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(DEL_O46_NTE_6, "NTE.6", HL7::optional, HL7::repetition_on);
    addObject<PID>(DEL_O46_PID_7, "PID.7", HL7::initialized, HL7::repetition_off);
    addObject<PD1>(DEL_O46_PD1_8, "PD1.8", HL7::optional, HL7::repetition_off);
    addObject<OBX>(DEL_O46_OBX_9, "OBX.9", HL7::optional, HL7::repetition_off);
    addObject<NTE>(DEL_O46_NTE_10, "NTE.10", HL7::optional, HL7::repetition_off);
    addObject<AL1>(DEL_O46_AL1_11, "AL1.11", HL7::optional, HL7::repetition_off);
    addObject<ARV>(DEL_O46_ARV_12, "ARV.12", HL7::optional, HL7::repetition_off);
    addObject<PV1>(DEL_O46_PV1_14, "PV1.14", HL7::optional, HL7::repetition_off);
    addObject<NTE>(DEL_O46_NTE_15, "NTE.15", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, DEL_O46_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, DEL_O46_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, DEL_O46_UAC_3);
  }
  DON* getDON_5(size_t index = 0) {
    return (DON*)this->getObjectSafe(index, DEL_O46_DON_5);
  }
  NTE* getNTE_6(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, DEL_O46_NTE_6);
  }
  PID* getPID_7(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, DEL_O46_PID_7);
  }
  PD1* getPD1_8(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, DEL_O46_PD1_8);
  }
  OBX* getOBX_9(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, DEL_O46_OBX_9);
  }
  NTE* getNTE_10(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, DEL_O46_NTE_10);
  }
  AL1* getAL1_11(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, DEL_O46_AL1_11);
  }
  ARV* getARV_12(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, DEL_O46_ARV_12);
  }
  PV1* getPV1_14(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, DEL_O46_PV1_14);
  }
  NTE* getNTE_15(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, DEL_O46_NTE_15);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, DEL_O46_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, DEL_O46_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, DEL_O46_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDON_5(size_t index = 0) {
    try {
      return this->getObject(index, DEL_O46_DON_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_6(size_t index = 0) {
    try {
      return this->getObject(index, DEL_O46_NTE_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_7(size_t index = 0) {
    try {
      return this->getObject(index, DEL_O46_PID_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_8(size_t index = 0) {
    try {
      return this->getObject(index, DEL_O46_PD1_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_9(size_t index = 0) {
    try {
      return this->getObject(index, DEL_O46_OBX_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_10(size_t index = 0) {
    try {
      return this->getObject(index, DEL_O46_NTE_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_11(size_t index = 0) {
    try {
      return this->getObject(index, DEL_O46_AL1_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_12(size_t index = 0) {
    try {
      return this->getObject(index, DEL_O46_ARV_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_14(size_t index = 0) {
    try {
      return this->getObject(index, DEL_O46_PV1_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_15(size_t index = 0) {
    try {
      return this->getObject(index, DEL_O46_NTE_15) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* DEL_O46_ */
} /* namespace HL7_281 */
#endif /*  __DEL_O46__281_H__ */
