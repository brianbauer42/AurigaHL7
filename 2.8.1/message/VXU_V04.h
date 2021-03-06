/*
 * hacca - C Toolkit for the HL7 Protocol
 *
 * Warning: This file was automatically generated by [hawk], please do not edit.
 *          Thu 25 Jun 19:07:30 CEST 2020
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


#ifndef __VXU_V04__281_H__
#define __VXU_V04__281_H__

#include "../../common/Util.h"
#include "../segment/ARV.h"
#include "../segment/GT1.h"
#include "../segment/IN1.h"
#include "../segment/IN2.h"
#include "../segment/IN3.h"
#include "../segment/MSH.h"
#include "../segment/NK1.h"
#include "../segment/NTE.h"
#include "../segment/OBX.h"
#include "../segment/ORC.h"
#include "../segment/PD1.h"
#include "../segment/PID.h"
#include "../segment/PRT.h"
#include "../segment/PV1.h"
#include "../segment/PV2.h"
#include "../segment/RXA.h"
#include "../segment/RXR.h"
#include "../segment/SFT.h"
#include "../segment/TQ1.h"
#include "../segment/TQ2.h"
#include "../segment/UAC.h"

namespace HL7_281 {

/* Internal structures/groups */
struct VXU_V04_PATIENT_VISIT; /* PATIENT_VISIT */
struct VXU_V04_INSURANCE; /* INSURANCE */
struct VXU_V04_PERSON_OBSERVATION; /* PERSON_OBSERVATION */
struct VXU_V04_ORDER; /* ORDER */
struct VXU_V04_TIMING; /* TIMING */
struct VXU_V04_OBSERVATION; /* OBSERVATION */

/* PATIENT_VISIT */
struct VXU_V04_PATIENT_VISIT : public HL7Group {
  VXU_V04_PATIENT_VISIT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    VXU_V04_ARV_1,
    VXU_V04_PV1_2,
    VXU_V04_PV2_3,
    FIELD_ID_MAX
  };

  const char* className() const { return "VXU_V04_PATIENT_VISIT"; }
  VXU_V04_PATIENT_VISIT* create() const { return new VXU_V04_PATIENT_VISIT(); }

 private:
  /* Initialize object */
  void init() {
    setName("VXU_V04.PATIENT_VISIT");
    addObject<ARV>(VXU_V04_ARV_1, "ARV.1", HL7::optional, HL7::repetition_on);
    addObject<PV1>(VXU_V04_PV1_2, "PV1.2", HL7::optional, HL7::repetition_on);
    addObject<PV2>(VXU_V04_PV2_3, "PV2.3", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  ARV* getARV_1(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, VXU_V04_ARV_1);
  }
  PV1* getPV1_2(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, VXU_V04_PV1_2);
  }
  PV2* getPV2_3(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, VXU_V04_PV2_3);
  }

  /* Checker list */
  bool isARV_1(size_t index = 0) {
    try {
      return this->getObject(index, VXU_V04_ARV_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_2(size_t index = 0) {
    try {
      return this->getObject(index, VXU_V04_PV1_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_3(size_t index = 0) {
    try {
      return this->getObject(index, VXU_V04_PV2_3) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* VXU_V04_PATIENT_VISIT */

/* INSURANCE */
struct VXU_V04_INSURANCE : public HL7Group {
  VXU_V04_INSURANCE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    VXU_V04_IN1_1,
    VXU_V04_IN2_2,
    VXU_V04_IN3_3,
    FIELD_ID_MAX
  };

  const char* className() const { return "VXU_V04_INSURANCE"; }
  VXU_V04_INSURANCE* create() const { return new VXU_V04_INSURANCE(); }

 private:
  /* Initialize object */
  void init() {
    setName("VXU_V04.INSURANCE");
    addObject<IN1>(VXU_V04_IN1_1, "IN1.1", HL7::optional, HL7::repetition_on);
    addObject<IN2>(VXU_V04_IN2_2, "IN2.2", HL7::optional, HL7::repetition_on);
    addObject<IN3>(VXU_V04_IN3_3, "IN3.3", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  IN1* getIN1_1(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, VXU_V04_IN1_1);
  }
  IN2* getIN2_2(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, VXU_V04_IN2_2);
  }
  IN3* getIN3_3(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, VXU_V04_IN3_3);
  }

  /* Checker list */
  bool isIN1_1(size_t index = 0) {
    try {
      return this->getObject(index, VXU_V04_IN1_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_2(size_t index = 0) {
    try {
      return this->getObject(index, VXU_V04_IN2_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_3(size_t index = 0) {
    try {
      return this->getObject(index, VXU_V04_IN3_3) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* VXU_V04_INSURANCE */

/* PERSON_OBSERVATION */
struct VXU_V04_PERSON_OBSERVATION : public HL7Group {
  VXU_V04_PERSON_OBSERVATION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    VXU_V04_NTE_1,
    VXU_V04_OBX_2,
    VXU_V04_PRT_3,
    FIELD_ID_MAX
  };

  const char* className() const { return "VXU_V04_PERSON_OBSERVATION"; }
  VXU_V04_PERSON_OBSERVATION* create() const { return new VXU_V04_PERSON_OBSERVATION(); }

 private:
  /* Initialize object */
  void init() {
    setName("VXU_V04.PERSON_OBSERVATION");
    addObject<NTE>(VXU_V04_NTE_1, "NTE.1", HL7::optional, HL7::repetition_on);
    addObject<OBX>(VXU_V04_OBX_2, "OBX.2", HL7::optional, HL7::repetition_on);
    addObject<PRT>(VXU_V04_PRT_3, "PRT.3", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  NTE* getNTE_1(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, VXU_V04_NTE_1);
  }
  OBX* getOBX_2(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, VXU_V04_OBX_2);
  }
  PRT* getPRT_3(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, VXU_V04_PRT_3);
  }

  /* Checker list */
  bool isNTE_1(size_t index = 0) {
    try {
      return this->getObject(index, VXU_V04_NTE_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_2(size_t index = 0) {
    try {
      return this->getObject(index, VXU_V04_OBX_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_3(size_t index = 0) {
    try {
      return this->getObject(index, VXU_V04_PRT_3) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* VXU_V04_PERSON_OBSERVATION */

/* ORDER */
struct VXU_V04_ORDER : public HL7Group {
  VXU_V04_ORDER() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    VXU_V04_ORC_1,
    VXU_V04_PRT_2,
    VXU_V04_RXA_3,
    VXU_V04_RXR_4,
    VXU_V04_VXU_V04_OBSERVATION_5,
    VXU_V04_VXU_V04_TIMING_6,
    FIELD_ID_MAX
  };

  const char* className() const { return "VXU_V04_ORDER"; }
  VXU_V04_ORDER* create() const { return new VXU_V04_ORDER(); }

 private:
  /* Initialize object */
  void init() {
    setName("VXU_V04.ORDER");
    addObject<ORC>(VXU_V04_ORC_1, "ORC.1", HL7::optional, HL7::repetition_on);
    addObject<PRT>(VXU_V04_PRT_2, "PRT.2", HL7::optional, HL7::repetition_on);
    addObject<RXA>(VXU_V04_RXA_3, "RXA.3", HL7::optional, HL7::repetition_on);
    addObject<RXR>(VXU_V04_RXR_4, "RXR.4", HL7::optional, HL7::repetition_on);
    addObject<VXU_V04_OBSERVATION>(VXU_V04_VXU_V04_OBSERVATION_5, "VXU_V04_OBSERVATION.5", HL7::optional, HL7::repetition_on);
    addObject<VXU_V04_TIMING>(VXU_V04_VXU_V04_TIMING_6, "VXU_V04_TIMING.6", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  ORC* getORC_1(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, VXU_V04_ORC_1);
  }
  PRT* getPRT_2(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, VXU_V04_PRT_2);
  }
  RXA* getRXA_3(size_t index = 0) {
    return (RXA*)this->getObjectSafe(index, VXU_V04_RXA_3);
  }
  RXR* getRXR_4(size_t index = 0) {
    return (RXR*)this->getObjectSafe(index, VXU_V04_RXR_4);
  }
  VXU_V04_OBSERVATION* getVXU_V04_OBSERVATION_5(size_t index = 0) {
    return (VXU_V04_OBSERVATION*)this->getObjectSafe(index, VXU_V04_VXU_V04_OBSERVATION_5);
  }
  VXU_V04_TIMING* getVXU_V04_TIMING_6(size_t index = 0) {
    return (VXU_V04_TIMING*)this->getObjectSafe(index, VXU_V04_VXU_V04_TIMING_6);
  }

  /* Checker list */
  bool isORC_1(size_t index = 0) {
    try {
      return this->getObject(index, VXU_V04_ORC_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_2(size_t index = 0) {
    try {
      return this->getObject(index, VXU_V04_PRT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXA_3(size_t index = 0) {
    try {
      return this->getObject(index, VXU_V04_RXA_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXR_4(size_t index = 0) {
    try {
      return this->getObject(index, VXU_V04_RXR_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVXU_V04_OBSERVATION_5(size_t index = 0) {
    try {
      return this->getObject(index, VXU_V04_VXU_V04_OBSERVATION_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVXU_V04_TIMING_6(size_t index = 0) {
    try {
      return this->getObject(index, VXU_V04_VXU_V04_TIMING_6) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* VXU_V04_ORDER */

/* TIMING */
struct VXU_V04_TIMING : public HL7Group {
  VXU_V04_TIMING() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    VXU_V04_TQ1_1,
    VXU_V04_TQ2_2,
    FIELD_ID_MAX
  };

  const char* className() const { return "VXU_V04_TIMING"; }
  VXU_V04_TIMING* create() const { return new VXU_V04_TIMING(); }

 private:
  /* Initialize object */
  void init() {
    setName("VXU_V04.TIMING");
    addObject<TQ1>(VXU_V04_TQ1_1, "TQ1.1", HL7::optional, HL7::repetition_on);
    addObject<TQ2>(VXU_V04_TQ2_2, "TQ2.2", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  TQ1* getTQ1_1(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, VXU_V04_TQ1_1);
  }
  TQ2* getTQ2_2(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, VXU_V04_TQ2_2);
  }

  /* Checker list */
  bool isTQ1_1(size_t index = 0) {
    try {
      return this->getObject(index, VXU_V04_TQ1_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_2(size_t index = 0) {
    try {
      return this->getObject(index, VXU_V04_TQ2_2) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* VXU_V04_TIMING */

/* OBSERVATION */
struct VXU_V04_OBSERVATION : public HL7Group {
  VXU_V04_OBSERVATION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    VXU_V04_NTE_1,
    VXU_V04_OBX_2,
    VXU_V04_PRT_3,
    FIELD_ID_MAX
  };

  const char* className() const { return "VXU_V04_OBSERVATION"; }
  VXU_V04_OBSERVATION* create() const { return new VXU_V04_OBSERVATION(); }

 private:
  /* Initialize object */
  void init() {
    setName("VXU_V04.OBSERVATION");
    addObject<NTE>(VXU_V04_NTE_1, "NTE.1", HL7::optional, HL7::repetition_on);
    addObject<OBX>(VXU_V04_OBX_2, "OBX.2", HL7::optional, HL7::repetition_on);
    addObject<PRT>(VXU_V04_PRT_3, "PRT.3", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  NTE* getNTE_1(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, VXU_V04_NTE_1);
  }
  OBX* getOBX_2(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, VXU_V04_OBX_2);
  }
  PRT* getPRT_3(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, VXU_V04_PRT_3);
  }

  /* Checker list */
  bool isNTE_1(size_t index = 0) {
    try {
      return this->getObject(index, VXU_V04_NTE_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_2(size_t index = 0) {
    try {
      return this->getObject(index, VXU_V04_OBX_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_3(size_t index = 0) {
    try {
      return this->getObject(index, VXU_V04_PRT_3) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* VXU_V04_OBSERVATION */

/* VXU_V04 */
struct VXU_V04 : public HL7Message {
  VXU_V04() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    VXU_V04_MSH_1,
    VXU_V04_SFT_2,
    VXU_V04_UAC_3,
    VXU_V04_PID_4,
    VXU_V04_PD1_5,
    VXU_V04_NK1_6,
    VXU_V04_ARV_7,
    VXU_V04_GT1_9,
    VXU_V04_IN1_13,
    VXU_V04_IN2_14,
    VXU_V04_IN3_15,
    VXU_V04_ORC_16,
    VXU_V04_PRT_17,
    VXU_V04_RXA_19,
    VXU_V04_RXR_20,
    VXU_V04_TQ1_22,
    VXU_V04_TQ2_23,
    VXU_V04_TQ1_24,
    VXU_V04_TQ2_25,
    VXU_V04_OBX_26,
    VXU_V04_PRT_27,
    VXU_V04_NTE_28,
    VXU_V04_PV1_29,
    VXU_V04_PV2_30,
    VXU_V04_ARV_31,
    VXU_V04_OBX_32,
    VXU_V04_PRT_33,
    VXU_V04_NTE_34,
    FIELD_ID_MAX
  };

  const char* className() const { return "VXU_V04"; }
  VXU_V04* create() const { return new VXU_V04(); }

 private:
  /* Initialize object */
  void init() {
    setName("VXU_V04");
    addObject<MSH>(VXU_V04_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(VXU_V04_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(VXU_V04_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<PID>(VXU_V04_PID_4, "PID.4", HL7::initialized, HL7::repetition_off);
    addObject<PD1>(VXU_V04_PD1_5, "PD1.5", HL7::optional, HL7::repetition_off);
    addObject<NK1>(VXU_V04_NK1_6, "NK1.6", HL7::optional, HL7::repetition_on);
    addObject<ARV>(VXU_V04_ARV_7, "ARV.7", HL7::optional, HL7::repetition_on);
    addObject<GT1>(VXU_V04_GT1_9, "GT1.9", HL7::optional, HL7::repetition_on);
    addObject<IN1>(VXU_V04_IN1_13, "IN1.13", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(VXU_V04_IN2_14, "IN2.14", HL7::optional, HL7::repetition_off);
    addObject<IN3>(VXU_V04_IN3_15, "IN3.15", HL7::optional, HL7::repetition_off);
    addObject<ORC>(VXU_V04_ORC_16, "ORC.16", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(VXU_V04_PRT_17, "PRT.17", HL7::optional, HL7::repetition_off);
    addObject<RXA>(VXU_V04_RXA_19, "RXA.19", HL7::initialized, HL7::repetition_off);
    addObject<RXR>(VXU_V04_RXR_20, "RXR.20", HL7::optional, HL7::repetition_off);
    addObject<TQ1>(VXU_V04_TQ1_22, "TQ1.22", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(VXU_V04_TQ2_23, "TQ2.23", HL7::optional, HL7::repetition_off);
    addObject<TQ1>(VXU_V04_TQ1_24, "TQ1.24", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(VXU_V04_TQ2_25, "TQ2.25", HL7::optional, HL7::repetition_off);
    addObject<OBX>(VXU_V04_OBX_26, "OBX.26", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(VXU_V04_PRT_27, "PRT.27", HL7::optional, HL7::repetition_off);
    addObject<NTE>(VXU_V04_NTE_28, "NTE.28", HL7::optional, HL7::repetition_off);
    addObject<PV1>(VXU_V04_PV1_29, "PV1.29", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(VXU_V04_PV2_30, "PV2.30", HL7::optional, HL7::repetition_off);
    addObject<ARV>(VXU_V04_ARV_31, "ARV.31", HL7::optional, HL7::repetition_off);
    addObject<OBX>(VXU_V04_OBX_32, "OBX.32", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(VXU_V04_PRT_33, "PRT.33", HL7::optional, HL7::repetition_off);
    addObject<NTE>(VXU_V04_NTE_34, "NTE.34", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, VXU_V04_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, VXU_V04_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, VXU_V04_UAC_3);
  }
  PID* getPID_4(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, VXU_V04_PID_4);
  }
  PD1* getPD1_5(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, VXU_V04_PD1_5);
  }
  NK1* getNK1_6(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, VXU_V04_NK1_6);
  }
  ARV* getARV_7(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, VXU_V04_ARV_7);
  }
  GT1* getGT1_9(size_t index = 0) {
    return (GT1*)this->getObjectSafe(index, VXU_V04_GT1_9);
  }
  IN1* getIN1_13(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, VXU_V04_IN1_13);
  }
  IN2* getIN2_14(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, VXU_V04_IN2_14);
  }
  IN3* getIN3_15(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, VXU_V04_IN3_15);
  }
  ORC* getORC_16(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, VXU_V04_ORC_16);
  }
  PRT* getPRT_17(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, VXU_V04_PRT_17);
  }
  RXA* getRXA_19(size_t index = 0) {
    return (RXA*)this->getObjectSafe(index, VXU_V04_RXA_19);
  }
  RXR* getRXR_20(size_t index = 0) {
    return (RXR*)this->getObjectSafe(index, VXU_V04_RXR_20);
  }
  TQ1* getTQ1_22(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, VXU_V04_TQ1_22);
  }
  TQ2* getTQ2_23(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, VXU_V04_TQ2_23);
  }
  TQ1* getTQ1_24(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, VXU_V04_TQ1_24);
  }
  TQ2* getTQ2_25(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, VXU_V04_TQ2_25);
  }
  OBX* getOBX_26(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, VXU_V04_OBX_26);
  }
  PRT* getPRT_27(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, VXU_V04_PRT_27);
  }
  NTE* getNTE_28(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, VXU_V04_NTE_28);
  }
  PV1* getPV1_29(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, VXU_V04_PV1_29);
  }
  PV2* getPV2_30(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, VXU_V04_PV2_30);
  }
  ARV* getARV_31(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, VXU_V04_ARV_31);
  }
  OBX* getOBX_32(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, VXU_V04_OBX_32);
  }
  PRT* getPRT_33(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, VXU_V04_PRT_33);
  }
  NTE* getNTE_34(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, VXU_V04_NTE_34);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, VXU_V04_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, VXU_V04_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, VXU_V04_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_4(size_t index = 0) {
    try {
      return this->getObject(index, VXU_V04_PID_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_5(size_t index = 0) {
    try {
      return this->getObject(index, VXU_V04_PD1_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNK1_6(size_t index = 0) {
    try {
      return this->getObject(index, VXU_V04_NK1_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_7(size_t index = 0) {
    try {
      return this->getObject(index, VXU_V04_ARV_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGT1_9(size_t index = 0) {
    try {
      return this->getObject(index, VXU_V04_GT1_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_13(size_t index = 0) {
    try {
      return this->getObject(index, VXU_V04_IN1_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_14(size_t index = 0) {
    try {
      return this->getObject(index, VXU_V04_IN2_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_15(size_t index = 0) {
    try {
      return this->getObject(index, VXU_V04_IN3_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_16(size_t index = 0) {
    try {
      return this->getObject(index, VXU_V04_ORC_16) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_17(size_t index = 0) {
    try {
      return this->getObject(index, VXU_V04_PRT_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXA_19(size_t index = 0) {
    try {
      return this->getObject(index, VXU_V04_RXA_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXR_20(size_t index = 0) {
    try {
      return this->getObject(index, VXU_V04_RXR_20) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_22(size_t index = 0) {
    try {
      return this->getObject(index, VXU_V04_TQ1_22) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_23(size_t index = 0) {
    try {
      return this->getObject(index, VXU_V04_TQ2_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_24(size_t index = 0) {
    try {
      return this->getObject(index, VXU_V04_TQ1_24) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_25(size_t index = 0) {
    try {
      return this->getObject(index, VXU_V04_TQ2_25) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_26(size_t index = 0) {
    try {
      return this->getObject(index, VXU_V04_OBX_26) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_27(size_t index = 0) {
    try {
      return this->getObject(index, VXU_V04_PRT_27) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_28(size_t index = 0) {
    try {
      return this->getObject(index, VXU_V04_NTE_28) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_29(size_t index = 0) {
    try {
      return this->getObject(index, VXU_V04_PV1_29) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_30(size_t index = 0) {
    try {
      return this->getObject(index, VXU_V04_PV2_30) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_31(size_t index = 0) {
    try {
      return this->getObject(index, VXU_V04_ARV_31) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_32(size_t index = 0) {
    try {
      return this->getObject(index, VXU_V04_OBX_32) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_33(size_t index = 0) {
    try {
      return this->getObject(index, VXU_V04_PRT_33) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_34(size_t index = 0) {
    try {
      return this->getObject(index, VXU_V04_NTE_34) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* VXU_V04_ */
} /* namespace HL7_281 */
#endif /*  __VXU_V04__281_H__ */
