/*
 * hacca - C Toolkit for the HL7 Protocol
 *
 * Warning: This file was automatically generated by [hawk], please do not edit.
 *          Thu 25 Jun 19:03:57 CEST 2020
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


#ifndef __OMI_O23__281_H__
#define __OMI_O23__281_H__

#include "../../common/Util.h"
#include "../segment/AL1.h"
#include "../segment/ARV.h"
#include "../segment/CTD.h"
#include "../segment/DG1.h"
#include "../segment/GT1.h"
#include "../segment/IN1.h"
#include "../segment/IN2.h"
#include "../segment/IN3.h"
#include "../segment/IPC.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/OBR.h"
#include "../segment/OBX.h"
#include "../segment/ORC.h"
#include "../segment/PD1.h"
#include "../segment/PID.h"
#include "../segment/PRT.h"
#include "../segment/PV1.h"
#include "../segment/PV2.h"
#include "../segment/SFT.h"
#include "../segment/TQ1.h"
#include "../segment/TQ2.h"
#include "../segment/UAC.h"

namespace HL7_281 {

/* Internal structures/groups */
struct OMI_O23_PATIENT; /* PATIENT */
struct OMI_O23_ORDER; /* ORDER */
struct OMI_O23_TIMING; /* TIMING */
struct OMI_O23_OBSERVATION; /* OBSERVATION */
struct OMI_O23_PATIENT_VISIT; /* PATIENT_VISIT */
struct OMI_O23_INSURANCE; /* INSURANCE */

/* PATIENT */
struct OMI_O23_PATIENT : public HL7Group {
  OMI_O23_PATIENT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    OMI_O23_AL1_1,
    OMI_O23_ARV_2,
    OMI_O23_GT1_3,
    OMI_O23_NTE_4,
    OMI_O23_OMI_O23_INSURANCE_5,
    OMI_O23_OMI_O23_PATIENT_VISIT_6,
    OMI_O23_PD1_7,
    OMI_O23_PID_8,
    OMI_O23_PRT_9,
    FIELD_ID_MAX
  };

  const char* className() const { return "OMI_O23_PATIENT"; }
  OMI_O23_PATIENT* create() const { return new OMI_O23_PATIENT(); }

 private:
  /* Initialize object */
  void init() {
    setName("OMI_O23.PATIENT");
    addObject<AL1>(OMI_O23_AL1_1, "AL1.1", HL7::optional, HL7::repetition_on);
    addObject<ARV>(OMI_O23_ARV_2, "ARV.2", HL7::optional, HL7::repetition_on);
    addObject<GT1>(OMI_O23_GT1_3, "GT1.3", HL7::optional, HL7::repetition_on);
    addObject<NTE>(OMI_O23_NTE_4, "NTE.4", HL7::optional, HL7::repetition_on);
    addObject<OMI_O23_INSURANCE>(OMI_O23_OMI_O23_INSURANCE_5, "OMI_O23_INSURANCE.5", HL7::optional, HL7::repetition_on);
    addObject<OMI_O23_PATIENT_VISIT>(OMI_O23_OMI_O23_PATIENT_VISIT_6, "OMI_O23_PATIENT_VISIT.6", HL7::optional, HL7::repetition_on);
    addObject<PD1>(OMI_O23_PD1_7, "PD1.7", HL7::optional, HL7::repetition_on);
    addObject<PID>(OMI_O23_PID_8, "PID.8", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OMI_O23_PRT_9, "PRT.9", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  AL1* getAL1_1(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, OMI_O23_AL1_1);
  }
  ARV* getARV_2(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OMI_O23_ARV_2);
  }
  GT1* getGT1_3(size_t index = 0) {
    return (GT1*)this->getObjectSafe(index, OMI_O23_GT1_3);
  }
  NTE* getNTE_4(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMI_O23_NTE_4);
  }
  OMI_O23_INSURANCE* getOMI_O23_INSURANCE_5(size_t index = 0) {
    return (OMI_O23_INSURANCE*)this->getObjectSafe(index, OMI_O23_OMI_O23_INSURANCE_5);
  }
  OMI_O23_PATIENT_VISIT* getOMI_O23_PATIENT_VISIT_6(size_t index = 0) {
    return (OMI_O23_PATIENT_VISIT*)this->getObjectSafe(index, OMI_O23_OMI_O23_PATIENT_VISIT_6);
  }
  PD1* getPD1_7(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, OMI_O23_PD1_7);
  }
  PID* getPID_8(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, OMI_O23_PID_8);
  }
  PRT* getPRT_9(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMI_O23_PRT_9);
  }

  /* Checker list */
  bool isAL1_1(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_AL1_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_2(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_ARV_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGT1_3(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_GT1_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_4(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_NTE_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOMI_O23_INSURANCE_5(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_OMI_O23_INSURANCE_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOMI_O23_PATIENT_VISIT_6(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_OMI_O23_PATIENT_VISIT_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_7(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_PD1_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_8(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_PID_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_9(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_PRT_9) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OMI_O23_PATIENT */

/* ORDER */
struct OMI_O23_ORDER : public HL7Group {
  OMI_O23_ORDER() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    OMI_O23_CTD_1,
    OMI_O23_DG1_2,
    OMI_O23_IPC_3,
    OMI_O23_NTE_4,
    OMI_O23_OBR_5,
    OMI_O23_OMI_O23_OBSERVATION_6,
    OMI_O23_OMI_O23_TIMING_7,
    OMI_O23_ORC_8,
    OMI_O23_PRT_9,
    FIELD_ID_MAX
  };

  const char* className() const { return "OMI_O23_ORDER"; }
  OMI_O23_ORDER* create() const { return new OMI_O23_ORDER(); }

 private:
  /* Initialize object */
  void init() {
    setName("OMI_O23.ORDER");
    addObject<CTD>(OMI_O23_CTD_1, "CTD.1", HL7::optional, HL7::repetition_on);
    addObject<DG1>(OMI_O23_DG1_2, "DG1.2", HL7::optional, HL7::repetition_on);
    addObject<IPC>(OMI_O23_IPC_3, "IPC.3", HL7::optional, HL7::repetition_on);
    addObject<NTE>(OMI_O23_NTE_4, "NTE.4", HL7::optional, HL7::repetition_on);
    addObject<OBR>(OMI_O23_OBR_5, "OBR.5", HL7::optional, HL7::repetition_on);
    addObject<OMI_O23_OBSERVATION>(OMI_O23_OMI_O23_OBSERVATION_6, "OMI_O23_OBSERVATION.6", HL7::optional, HL7::repetition_on);
    addObject<OMI_O23_TIMING>(OMI_O23_OMI_O23_TIMING_7, "OMI_O23_TIMING.7", HL7::optional, HL7::repetition_on);
    addObject<ORC>(OMI_O23_ORC_8, "ORC.8", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OMI_O23_PRT_9, "PRT.9", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  CTD* getCTD_1(size_t index = 0) {
    return (CTD*)this->getObjectSafe(index, OMI_O23_CTD_1);
  }
  DG1* getDG1_2(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, OMI_O23_DG1_2);
  }
  IPC* getIPC_3(size_t index = 0) {
    return (IPC*)this->getObjectSafe(index, OMI_O23_IPC_3);
  }
  NTE* getNTE_4(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMI_O23_NTE_4);
  }
  OBR* getOBR_5(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, OMI_O23_OBR_5);
  }
  OMI_O23_OBSERVATION* getOMI_O23_OBSERVATION_6(size_t index = 0) {
    return (OMI_O23_OBSERVATION*)this->getObjectSafe(index, OMI_O23_OMI_O23_OBSERVATION_6);
  }
  OMI_O23_TIMING* getOMI_O23_TIMING_7(size_t index = 0) {
    return (OMI_O23_TIMING*)this->getObjectSafe(index, OMI_O23_OMI_O23_TIMING_7);
  }
  ORC* getORC_8(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, OMI_O23_ORC_8);
  }
  PRT* getPRT_9(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMI_O23_PRT_9);
  }

  /* Checker list */
  bool isCTD_1(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_CTD_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_2(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_DG1_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIPC_3(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_IPC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_4(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_NTE_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_5(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_OBR_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOMI_O23_OBSERVATION_6(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_OMI_O23_OBSERVATION_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOMI_O23_TIMING_7(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_OMI_O23_TIMING_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_8(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_ORC_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_9(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_PRT_9) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OMI_O23_ORDER */

/* TIMING */
struct OMI_O23_TIMING : public HL7Group {
  OMI_O23_TIMING() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    OMI_O23_TQ1_1,
    OMI_O23_TQ2_2,
    FIELD_ID_MAX
  };

  const char* className() const { return "OMI_O23_TIMING"; }
  OMI_O23_TIMING* create() const { return new OMI_O23_TIMING(); }

 private:
  /* Initialize object */
  void init() {
    setName("OMI_O23.TIMING");
    addObject<TQ1>(OMI_O23_TQ1_1, "TQ1.1", HL7::optional, HL7::repetition_on);
    addObject<TQ2>(OMI_O23_TQ2_2, "TQ2.2", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  TQ1* getTQ1_1(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, OMI_O23_TQ1_1);
  }
  TQ2* getTQ2_2(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, OMI_O23_TQ2_2);
  }

  /* Checker list */
  bool isTQ1_1(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_TQ1_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_2(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_TQ2_2) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OMI_O23_TIMING */

/* OBSERVATION */
struct OMI_O23_OBSERVATION : public HL7Group {
  OMI_O23_OBSERVATION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    OMI_O23_NTE_1,
    OMI_O23_OBX_2,
    OMI_O23_PRT_3,
    FIELD_ID_MAX
  };

  const char* className() const { return "OMI_O23_OBSERVATION"; }
  OMI_O23_OBSERVATION* create() const { return new OMI_O23_OBSERVATION(); }

 private:
  /* Initialize object */
  void init() {
    setName("OMI_O23.OBSERVATION");
    addObject<NTE>(OMI_O23_NTE_1, "NTE.1", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OMI_O23_OBX_2, "OBX.2", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OMI_O23_PRT_3, "PRT.3", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  NTE* getNTE_1(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMI_O23_NTE_1);
  }
  OBX* getOBX_2(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OMI_O23_OBX_2);
  }
  PRT* getPRT_3(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMI_O23_PRT_3);
  }

  /* Checker list */
  bool isNTE_1(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_NTE_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_2(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_OBX_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_3(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_PRT_3) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OMI_O23_OBSERVATION */

/* PATIENT_VISIT */
struct OMI_O23_PATIENT_VISIT : public HL7Group {
  OMI_O23_PATIENT_VISIT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    OMI_O23_PRT_1,
    OMI_O23_PV1_2,
    OMI_O23_PV2_3,
    FIELD_ID_MAX
  };

  const char* className() const { return "OMI_O23_PATIENT_VISIT"; }
  OMI_O23_PATIENT_VISIT* create() const { return new OMI_O23_PATIENT_VISIT(); }

 private:
  /* Initialize object */
  void init() {
    setName("OMI_O23.PATIENT_VISIT");
    addObject<PRT>(OMI_O23_PRT_1, "PRT.1", HL7::optional, HL7::repetition_on);
    addObject<PV1>(OMI_O23_PV1_2, "PV1.2", HL7::optional, HL7::repetition_on);
    addObject<PV2>(OMI_O23_PV2_3, "PV2.3", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  PRT* getPRT_1(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMI_O23_PRT_1);
  }
  PV1* getPV1_2(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, OMI_O23_PV1_2);
  }
  PV2* getPV2_3(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, OMI_O23_PV2_3);
  }

  /* Checker list */
  bool isPRT_1(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_PRT_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_2(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_PV1_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_3(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_PV2_3) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OMI_O23_PATIENT_VISIT */

/* INSURANCE */
struct OMI_O23_INSURANCE : public HL7Group {
  OMI_O23_INSURANCE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    OMI_O23_IN1_1,
    OMI_O23_IN2_2,
    OMI_O23_IN3_3,
    FIELD_ID_MAX
  };

  const char* className() const { return "OMI_O23_INSURANCE"; }
  OMI_O23_INSURANCE* create() const { return new OMI_O23_INSURANCE(); }

 private:
  /* Initialize object */
  void init() {
    setName("OMI_O23.INSURANCE");
    addObject<IN1>(OMI_O23_IN1_1, "IN1.1", HL7::optional, HL7::repetition_on);
    addObject<IN2>(OMI_O23_IN2_2, "IN2.2", HL7::optional, HL7::repetition_on);
    addObject<IN3>(OMI_O23_IN3_3, "IN3.3", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  IN1* getIN1_1(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, OMI_O23_IN1_1);
  }
  IN2* getIN2_2(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, OMI_O23_IN2_2);
  }
  IN3* getIN3_3(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, OMI_O23_IN3_3);
  }

  /* Checker list */
  bool isIN1_1(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_IN1_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_2(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_IN2_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_3(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_IN3_3) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OMI_O23_INSURANCE */

/* OMI_O23 */
struct OMI_O23 : public HL7Message {
  OMI_O23() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    OMI_O23_MSH_1,
    OMI_O23_SFT_2,
    OMI_O23_UAC_3,
    OMI_O23_NTE_4,
    OMI_O23_IPC_7,
    OMI_O23_ORC_8,
    OMI_O23_PRT_9,
    OMI_O23_OBR_11,
    OMI_O23_NTE_12,
    OMI_O23_PRT_13,
    OMI_O23_CTD_14,
    OMI_O23_DG1_15,
    OMI_O23_TQ1_17,
    OMI_O23_TQ2_18,
    OMI_O23_TQ1_19,
    OMI_O23_TQ2_20,
    OMI_O23_OBX_21,
    OMI_O23_PRT_22,
    OMI_O23_NTE_23,
    OMI_O23_PID_24,
    OMI_O23_PD1_25,
    OMI_O23_PRT_26,
    OMI_O23_ARV_27,
    OMI_O23_NTE_28,
    OMI_O23_GT1_31,
    OMI_O23_AL1_32,
    OMI_O23_PV1_33,
    OMI_O23_PV2_34,
    OMI_O23_PRT_35,
    OMI_O23_PV1_36,
    OMI_O23_PV2_37,
    OMI_O23_PRT_38,
    OMI_O23_IN1_39,
    OMI_O23_IN2_40,
    OMI_O23_IN3_41,
    FIELD_ID_MAX
  };

  const char* className() const { return "OMI_O23"; }
  OMI_O23* create() const { return new OMI_O23(); }

 private:
  /* Initialize object */
  void init() {
    setName("OMI_O23");
    addObject<MSH>(OMI_O23_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(OMI_O23_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(OMI_O23_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<NTE>(OMI_O23_NTE_4, "NTE.4", HL7::optional, HL7::repetition_on);
    addObject<IPC>(OMI_O23_IPC_7, "IPC.7", HL7::initialized, HL7::repetition_off);
    addObject<ORC>(OMI_O23_ORC_8, "ORC.8", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OMI_O23_PRT_9, "PRT.9", HL7::optional, HL7::repetition_off);
    addObject<OBR>(OMI_O23_OBR_11, "OBR.11", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(OMI_O23_NTE_12, "NTE.12", HL7::optional, HL7::repetition_off);
    addObject<PRT>(OMI_O23_PRT_13, "PRT.13", HL7::optional, HL7::repetition_off);
    addObject<CTD>(OMI_O23_CTD_14, "CTD.14", HL7::optional, HL7::repetition_off);
    addObject<DG1>(OMI_O23_DG1_15, "DG1.15", HL7::optional, HL7::repetition_off);
    addObject<TQ1>(OMI_O23_TQ1_17, "TQ1.17", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(OMI_O23_TQ2_18, "TQ2.18", HL7::optional, HL7::repetition_off);
    addObject<TQ1>(OMI_O23_TQ1_19, "TQ1.19", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(OMI_O23_TQ2_20, "TQ2.20", HL7::optional, HL7::repetition_off);
    addObject<OBX>(OMI_O23_OBX_21, "OBX.21", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OMI_O23_PRT_22, "PRT.22", HL7::optional, HL7::repetition_off);
    addObject<NTE>(OMI_O23_NTE_23, "NTE.23", HL7::optional, HL7::repetition_off);
    addObject<PID>(OMI_O23_PID_24, "PID.24", HL7::initialized, HL7::repetition_off);
    addObject<PD1>(OMI_O23_PD1_25, "PD1.25", HL7::optional, HL7::repetition_off);
    addObject<PRT>(OMI_O23_PRT_26, "PRT.26", HL7::optional, HL7::repetition_off);
    addObject<ARV>(OMI_O23_ARV_27, "ARV.27", HL7::optional, HL7::repetition_off);
    addObject<NTE>(OMI_O23_NTE_28, "NTE.28", HL7::optional, HL7::repetition_off);
    addObject<GT1>(OMI_O23_GT1_31, "GT1.31", HL7::optional, HL7::repetition_off);
    addObject<AL1>(OMI_O23_AL1_32, "AL1.32", HL7::optional, HL7::repetition_off);
    addObject<PV1>(OMI_O23_PV1_33, "PV1.33", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(OMI_O23_PV2_34, "PV2.34", HL7::optional, HL7::repetition_off);
    addObject<PRT>(OMI_O23_PRT_35, "PRT.35", HL7::optional, HL7::repetition_off);
    addObject<PV1>(OMI_O23_PV1_36, "PV1.36", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(OMI_O23_PV2_37, "PV2.37", HL7::optional, HL7::repetition_off);
    addObject<PRT>(OMI_O23_PRT_38, "PRT.38", HL7::optional, HL7::repetition_off);
    addObject<IN1>(OMI_O23_IN1_39, "IN1.39", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(OMI_O23_IN2_40, "IN2.40", HL7::optional, HL7::repetition_off);
    addObject<IN3>(OMI_O23_IN3_41, "IN3.41", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, OMI_O23_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, OMI_O23_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, OMI_O23_UAC_3);
  }
  NTE* getNTE_4(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMI_O23_NTE_4);
  }
  IPC* getIPC_7(size_t index = 0) {
    return (IPC*)this->getObjectSafe(index, OMI_O23_IPC_7);
  }
  ORC* getORC_8(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, OMI_O23_ORC_8);
  }
  PRT* getPRT_9(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMI_O23_PRT_9);
  }
  OBR* getOBR_11(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, OMI_O23_OBR_11);
  }
  NTE* getNTE_12(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMI_O23_NTE_12);
  }
  PRT* getPRT_13(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMI_O23_PRT_13);
  }
  CTD* getCTD_14(size_t index = 0) {
    return (CTD*)this->getObjectSafe(index, OMI_O23_CTD_14);
  }
  DG1* getDG1_15(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, OMI_O23_DG1_15);
  }
  TQ1* getTQ1_17(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, OMI_O23_TQ1_17);
  }
  TQ2* getTQ2_18(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, OMI_O23_TQ2_18);
  }
  TQ1* getTQ1_19(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, OMI_O23_TQ1_19);
  }
  TQ2* getTQ2_20(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, OMI_O23_TQ2_20);
  }
  OBX* getOBX_21(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OMI_O23_OBX_21);
  }
  PRT* getPRT_22(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMI_O23_PRT_22);
  }
  NTE* getNTE_23(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMI_O23_NTE_23);
  }
  PID* getPID_24(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, OMI_O23_PID_24);
  }
  PD1* getPD1_25(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, OMI_O23_PD1_25);
  }
  PRT* getPRT_26(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMI_O23_PRT_26);
  }
  ARV* getARV_27(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OMI_O23_ARV_27);
  }
  NTE* getNTE_28(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMI_O23_NTE_28);
  }
  GT1* getGT1_31(size_t index = 0) {
    return (GT1*)this->getObjectSafe(index, OMI_O23_GT1_31);
  }
  AL1* getAL1_32(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, OMI_O23_AL1_32);
  }
  PV1* getPV1_33(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, OMI_O23_PV1_33);
  }
  PV2* getPV2_34(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, OMI_O23_PV2_34);
  }
  PRT* getPRT_35(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMI_O23_PRT_35);
  }
  PV1* getPV1_36(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, OMI_O23_PV1_36);
  }
  PV2* getPV2_37(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, OMI_O23_PV2_37);
  }
  PRT* getPRT_38(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMI_O23_PRT_38);
  }
  IN1* getIN1_39(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, OMI_O23_IN1_39);
  }
  IN2* getIN2_40(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, OMI_O23_IN2_40);
  }
  IN3* getIN3_41(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, OMI_O23_IN3_41);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_4(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_NTE_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIPC_7(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_IPC_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_8(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_ORC_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_9(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_PRT_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_11(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_OBR_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_12(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_NTE_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_13(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_PRT_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTD_14(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_CTD_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_15(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_DG1_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_17(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_TQ1_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_18(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_TQ2_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_19(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_TQ1_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_20(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_TQ2_20) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_21(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_OBX_21) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_22(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_PRT_22) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_23(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_NTE_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_24(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_PID_24) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_25(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_PD1_25) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_26(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_PRT_26) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_27(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_ARV_27) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_28(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_NTE_28) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGT1_31(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_GT1_31) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_32(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_AL1_32) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_33(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_PV1_33) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_34(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_PV2_34) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_35(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_PRT_35) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_36(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_PV1_36) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_37(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_PV2_37) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_38(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_PRT_38) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_39(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_IN1_39) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_40(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_IN2_40) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_41(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_IN3_41) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OMI_O23_ */
} /* namespace HL7_281 */
#endif /*  __OMI_O23__281_H__ */
