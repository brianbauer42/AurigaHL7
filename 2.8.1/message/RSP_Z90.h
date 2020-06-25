/*
 * hacca - C Toolkit for the HL7 Protocol
 *
 * Warning: This file was automatically generated by [hawk], please do not edit.
 *          Thu 25 Jun 19:07:17 CEST 2020
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


#ifndef __RSP_Z90__281_H__
#define __RSP_Z90__281_H__

#include "../../common/Util.h"
#include "../segment/CTD.h"
#include "../segment/DSC.h"
#include "../segment/ERR.h"
#include "../segment/MSA.h"
#include "../segment/MSH.h"
#include "../segment/NK1.h"
#include "../segment/NTE.h"
#include "../segment/OBR.h"
#include "../segment/OBX.h"
#include "../segment/ORC.h"
#include "../segment/PD1.h"
#include "../segment/PID.h"
#include "../segment/PV1.h"
#include "../segment/PV2.h"
#include "../segment/QAK.h"
#include "../segment/QPD.h"
#include "../segment/RCP.h"
#include "../segment/SFT.h"
#include "../segment/SPM.h"
#include "../segment/TQ1.h"
#include "../segment/TQ2.h"
#include "../segment/UAC.h"

namespace HL7_281 {

/* Internal structures/groups */
struct RSP_Z90_QUERY_RESPONSE; /* QUERY_RESPONSE */
struct RSP_Z90_PATIENT; /* PATIENT */
struct RSP_Z90_COMMON_ORDER; /* COMMON_ORDER */
struct RSP_Z90_SPECIMEN; /* SPECIMEN */
struct RSP_Z90_VISIT; /* VISIT */
struct RSP_Z90_VISIT; /* VISIT */
struct RSP_Z90_TIMING; /* TIMING */
struct RSP_Z90_OBSERVATION; /* OBSERVATION */
struct RSP_Z90_VISIT; /* VISIT */
struct RSP_Z90_TIMING; /* TIMING */
struct RSP_Z90_OBSERVATION; /* OBSERVATION */

/* QUERY_RESPONSE */
struct RSP_Z90_QUERY_RESPONSE : public HL7Group {
  RSP_Z90_QUERY_RESPONSE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RSP_Z90_RSP_Z90_COMMON_ORDER_1,
    RSP_Z90_RSP_Z90_PATIENT_2,
    RSP_Z90_RSP_Z90_SPECIMEN_3,
    FIELD_ID_MAX
  };

  const char* className() const { return "RSP_Z90_QUERY_RESPONSE"; }
  RSP_Z90_QUERY_RESPONSE* create() const { return new RSP_Z90_QUERY_RESPONSE(); }

 private:
  /* Initialize object */
  void init() {
    setName("RSP_Z90.QUERY_RESPONSE");
    addObject<RSP_Z90_COMMON_ORDER>(RSP_Z90_RSP_Z90_COMMON_ORDER_1, "RSP_Z90_COMMON_ORDER.1", HL7::optional, HL7::repetition_on);
    addObject<RSP_Z90_PATIENT>(RSP_Z90_RSP_Z90_PATIENT_2, "RSP_Z90_PATIENT.2", HL7::optional, HL7::repetition_on);
    addObject<RSP_Z90_SPECIMEN>(RSP_Z90_RSP_Z90_SPECIMEN_3, "RSP_Z90_SPECIMEN.3", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  RSP_Z90_COMMON_ORDER* getRSP_Z90_COMMON_ORDER_1(size_t index = 0) {
    return (RSP_Z90_COMMON_ORDER*)this->getObjectSafe(index, RSP_Z90_RSP_Z90_COMMON_ORDER_1);
  }
  RSP_Z90_PATIENT* getRSP_Z90_PATIENT_2(size_t index = 0) {
    return (RSP_Z90_PATIENT*)this->getObjectSafe(index, RSP_Z90_RSP_Z90_PATIENT_2);
  }
  RSP_Z90_SPECIMEN* getRSP_Z90_SPECIMEN_3(size_t index = 0) {
    return (RSP_Z90_SPECIMEN*)this->getObjectSafe(index, RSP_Z90_RSP_Z90_SPECIMEN_3);
  }

  /* Checker list */
  bool isRSP_Z90_COMMON_ORDER_1(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_RSP_Z90_COMMON_ORDER_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRSP_Z90_PATIENT_2(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_RSP_Z90_PATIENT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRSP_Z90_SPECIMEN_3(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_RSP_Z90_SPECIMEN_3) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RSP_Z90_QUERY_RESPONSE */

/* PATIENT */
struct RSP_Z90_PATIENT : public HL7Group {
  RSP_Z90_PATIENT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RSP_Z90_NK1_1,
    RSP_Z90_NTE_2,
    RSP_Z90_PD1_3,
    RSP_Z90_PID_4,
    RSP_Z90_RSP_Z90_VISIT_5,
    FIELD_ID_MAX
  };

  const char* className() const { return "RSP_Z90_PATIENT"; }
  RSP_Z90_PATIENT* create() const { return new RSP_Z90_PATIENT(); }

 private:
  /* Initialize object */
  void init() {
    setName("RSP_Z90.PATIENT");
    addObject<NK1>(RSP_Z90_NK1_1, "NK1.1", HL7::optional, HL7::repetition_on);
    addObject<NTE>(RSP_Z90_NTE_2, "NTE.2", HL7::optional, HL7::repetition_on);
    addObject<PD1>(RSP_Z90_PD1_3, "PD1.3", HL7::optional, HL7::repetition_on);
    addObject<PID>(RSP_Z90_PID_4, "PID.4", HL7::optional, HL7::repetition_on);
    addObject<RSP_Z90_VISIT>(RSP_Z90_RSP_Z90_VISIT_5, "RSP_Z90_VISIT.5", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  NK1* getNK1_1(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, RSP_Z90_NK1_1);
  }
  NTE* getNTE_2(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RSP_Z90_NTE_2);
  }
  PD1* getPD1_3(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, RSP_Z90_PD1_3);
  }
  PID* getPID_4(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, RSP_Z90_PID_4);
  }
  RSP_Z90_VISIT* getRSP_Z90_VISIT_5(size_t index = 0) {
    return (RSP_Z90_VISIT*)this->getObjectSafe(index, RSP_Z90_RSP_Z90_VISIT_5);
  }

  /* Checker list */
  bool isNK1_1(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_NK1_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_2(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_NTE_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_3(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_PD1_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_4(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_PID_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRSP_Z90_VISIT_5(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_RSP_Z90_VISIT_5) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RSP_Z90_PATIENT */

/* COMMON_ORDER */
struct RSP_Z90_COMMON_ORDER : public HL7Group {
  RSP_Z90_COMMON_ORDER() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RSP_Z90_CTD_1,
    RSP_Z90_NTE_2,
    RSP_Z90_OBR_3,
    RSP_Z90_ORC_4,
    RSP_Z90_RSP_Z90_OBSERVATION_5,
    RSP_Z90_RSP_Z90_TIMING_6,
    FIELD_ID_MAX
  };

  const char* className() const { return "RSP_Z90_COMMON_ORDER"; }
  RSP_Z90_COMMON_ORDER* create() const { return new RSP_Z90_COMMON_ORDER(); }

 private:
  /* Initialize object */
  void init() {
    setName("RSP_Z90.COMMON_ORDER");
    addObject<CTD>(RSP_Z90_CTD_1, "CTD.1", HL7::optional, HL7::repetition_on);
    addObject<NTE>(RSP_Z90_NTE_2, "NTE.2", HL7::optional, HL7::repetition_on);
    addObject<OBR>(RSP_Z90_OBR_3, "OBR.3", HL7::optional, HL7::repetition_on);
    addObject<ORC>(RSP_Z90_ORC_4, "ORC.4", HL7::optional, HL7::repetition_on);
    addObject<RSP_Z90_OBSERVATION>(RSP_Z90_RSP_Z90_OBSERVATION_5, "RSP_Z90_OBSERVATION.5", HL7::optional, HL7::repetition_on);
    addObject<RSP_Z90_TIMING>(RSP_Z90_RSP_Z90_TIMING_6, "RSP_Z90_TIMING.6", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  CTD* getCTD_1(size_t index = 0) {
    return (CTD*)this->getObjectSafe(index, RSP_Z90_CTD_1);
  }
  NTE* getNTE_2(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RSP_Z90_NTE_2);
  }
  OBR* getOBR_3(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, RSP_Z90_OBR_3);
  }
  ORC* getORC_4(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, RSP_Z90_ORC_4);
  }
  RSP_Z90_OBSERVATION* getRSP_Z90_OBSERVATION_5(size_t index = 0) {
    return (RSP_Z90_OBSERVATION*)this->getObjectSafe(index, RSP_Z90_RSP_Z90_OBSERVATION_5);
  }
  RSP_Z90_TIMING* getRSP_Z90_TIMING_6(size_t index = 0) {
    return (RSP_Z90_TIMING*)this->getObjectSafe(index, RSP_Z90_RSP_Z90_TIMING_6);
  }

  /* Checker list */
  bool isCTD_1(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_CTD_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_2(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_NTE_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_3(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_OBR_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_4(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_ORC_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRSP_Z90_OBSERVATION_5(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_RSP_Z90_OBSERVATION_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRSP_Z90_TIMING_6(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_RSP_Z90_TIMING_6) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RSP_Z90_COMMON_ORDER */

/* SPECIMEN */
struct RSP_Z90_SPECIMEN : public HL7Group {
  RSP_Z90_SPECIMEN() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RSP_Z90_OBX_1,
    RSP_Z90_SPM_2,
    FIELD_ID_MAX
  };

  const char* className() const { return "RSP_Z90_SPECIMEN"; }
  RSP_Z90_SPECIMEN* create() const { return new RSP_Z90_SPECIMEN(); }

 private:
  /* Initialize object */
  void init() {
    setName("RSP_Z90.SPECIMEN");
    addObject<OBX>(RSP_Z90_OBX_1, "OBX.1", HL7::optional, HL7::repetition_on);
    addObject<SPM>(RSP_Z90_SPM_2, "SPM.2", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  OBX* getOBX_1(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, RSP_Z90_OBX_1);
  }
  SPM* getSPM_2(size_t index = 0) {
    return (SPM*)this->getObjectSafe(index, RSP_Z90_SPM_2);
  }

  /* Checker list */
  bool isOBX_1(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_OBX_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSPM_2(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_SPM_2) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RSP_Z90_SPECIMEN */

/* VISIT */
struct RSP_Z90_VISIT : public HL7Group {
  RSP_Z90_VISIT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RSP_Z90_PV1_1,
    RSP_Z90_PV2_2,
    FIELD_ID_MAX
  };

  const char* className() const { return "RSP_Z90_VISIT"; }
  RSP_Z90_VISIT* create() const { return new RSP_Z90_VISIT(); }

 private:
  /* Initialize object */
  void init() {
    setName("RSP_Z90.VISIT");
    addObject<PV1>(RSP_Z90_PV1_1, "PV1.1", HL7::optional, HL7::repetition_on);
    addObject<PV2>(RSP_Z90_PV2_2, "PV2.2", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  PV1* getPV1_1(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, RSP_Z90_PV1_1);
  }
  PV2* getPV2_2(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, RSP_Z90_PV2_2);
  }

  /* Checker list */
  bool isPV1_1(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_PV1_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_2(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_PV2_2) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RSP_Z90_VISIT */

/* TIMING */
struct RSP_Z90_TIMING : public HL7Group {
  RSP_Z90_TIMING() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RSP_Z90_TQ1_1,
    RSP_Z90_TQ2_2,
    FIELD_ID_MAX
  };

  const char* className() const { return "RSP_Z90_TIMING"; }
  RSP_Z90_TIMING* create() const { return new RSP_Z90_TIMING(); }

 private:
  /* Initialize object */
  void init() {
    setName("RSP_Z90.TIMING");
    addObject<TQ1>(RSP_Z90_TQ1_1, "TQ1.1", HL7::optional, HL7::repetition_on);
    addObject<TQ2>(RSP_Z90_TQ2_2, "TQ2.2", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  TQ1* getTQ1_1(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, RSP_Z90_TQ1_1);
  }
  TQ2* getTQ2_2(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, RSP_Z90_TQ2_2);
  }

  /* Checker list */
  bool isTQ1_1(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_TQ1_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_2(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_TQ2_2) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RSP_Z90_TIMING */

/* OBSERVATION */
struct RSP_Z90_OBSERVATION : public HL7Group {
  RSP_Z90_OBSERVATION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RSP_Z90_NTE_1,
    RSP_Z90_OBX_2,
    FIELD_ID_MAX
  };

  const char* className() const { return "RSP_Z90_OBSERVATION"; }
  RSP_Z90_OBSERVATION* create() const { return new RSP_Z90_OBSERVATION(); }

 private:
  /* Initialize object */
  void init() {
    setName("RSP_Z90.OBSERVATION");
    addObject<NTE>(RSP_Z90_NTE_1, "NTE.1", HL7::optional, HL7::repetition_on);
    addObject<OBX>(RSP_Z90_OBX_2, "OBX.2", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  NTE* getNTE_1(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RSP_Z90_NTE_1);
  }
  OBX* getOBX_2(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, RSP_Z90_OBX_2);
  }

  /* Checker list */
  bool isNTE_1(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_NTE_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_2(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_OBX_2) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RSP_Z90_OBSERVATION */

/* RSP_Z90 */
struct RSP_Z90 : public HL7Message {
  RSP_Z90() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RSP_Z90_MSH_1,
    RSP_Z90_SFT_2,
    RSP_Z90_UAC_3,
    RSP_Z90_MSA_4,
    RSP_Z90_ERR_5,
    RSP_Z90_QAK_6,
    RSP_Z90_QPD_7,
    RSP_Z90_RCP_8,
    RSP_Z90_DSC_10,
    RSP_Z90_PID_14,
    RSP_Z90_PD1_15,
    RSP_Z90_NK1_16,
    RSP_Z90_NTE_17,
    RSP_Z90_PV1_19,
    RSP_Z90_PV2_20,
    RSP_Z90_PID_21,
    RSP_Z90_PD1_22,
    RSP_Z90_NK1_23,
    RSP_Z90_NTE_24,
    RSP_Z90_ORC_26,
    RSP_Z90_OBR_28,
    RSP_Z90_NTE_29,
    RSP_Z90_CTD_30,
    RSP_Z90_PV1_32,
    RSP_Z90_PV2_33,
    RSP_Z90_PV1_34,
    RSP_Z90_PV2_35,
    RSP_Z90_TQ1_36,
    RSP_Z90_TQ2_37,
    RSP_Z90_PV1_38,
    RSP_Z90_PV2_39,
    RSP_Z90_TQ1_40,
    RSP_Z90_TQ2_41,
    RSP_Z90_OBX_42,
    RSP_Z90_NTE_43,
    RSP_Z90_PID_44,
    RSP_Z90_PD1_45,
    RSP_Z90_NK1_46,
    RSP_Z90_NTE_47,
    RSP_Z90_ORC_49,
    RSP_Z90_OBR_51,
    RSP_Z90_NTE_52,
    RSP_Z90_CTD_53,
    RSP_Z90_SPM_55,
    RSP_Z90_OBX_56,
    RSP_Z90_PV1_57,
    RSP_Z90_PV2_58,
    RSP_Z90_PV1_59,
    RSP_Z90_PV2_60,
    RSP_Z90_TQ1_61,
    RSP_Z90_TQ2_62,
    RSP_Z90_PV1_63,
    RSP_Z90_PV2_64,
    RSP_Z90_TQ1_65,
    RSP_Z90_TQ2_66,
    RSP_Z90_OBX_67,
    RSP_Z90_NTE_68,
    FIELD_ID_MAX
  };

  const char* className() const { return "RSP_Z90"; }
  RSP_Z90* create() const { return new RSP_Z90(); }

 private:
  /* Initialize object */
  void init() {
    setName("RSP_Z90");
    addObject<MSH>(RSP_Z90_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(RSP_Z90_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(RSP_Z90_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<MSA>(RSP_Z90_MSA_4, "MSA.4", HL7::initialized, HL7::repetition_off);
    addObject<ERR>(RSP_Z90_ERR_5, "ERR.5", HL7::optional, HL7::repetition_off);
    addObject<QAK>(RSP_Z90_QAK_6, "QAK.6", HL7::initialized, HL7::repetition_off);
    addObject<QPD>(RSP_Z90_QPD_7, "QPD.7", HL7::initialized, HL7::repetition_off);
    addObject<RCP>(RSP_Z90_RCP_8, "RCP.8", HL7::initialized, HL7::repetition_off);
    addObject<DSC>(RSP_Z90_DSC_10, "DSC.10", HL7::initialized, HL7::repetition_off);
    addObject<PID>(RSP_Z90_PID_14, "PID.14", HL7::initialized, HL7::repetition_off);
    addObject<PD1>(RSP_Z90_PD1_15, "PD1.15", HL7::optional, HL7::repetition_off);
    addObject<NK1>(RSP_Z90_NK1_16, "NK1.16", HL7::optional, HL7::repetition_off);
    addObject<NTE>(RSP_Z90_NTE_17, "NTE.17", HL7::optional, HL7::repetition_off);
    addObject<PV1>(RSP_Z90_PV1_19, "PV1.19", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(RSP_Z90_PV2_20, "PV2.20", HL7::optional, HL7::repetition_off);
    addObject<PID>(RSP_Z90_PID_21, "PID.21", HL7::initialized, HL7::repetition_off);
    addObject<PD1>(RSP_Z90_PD1_22, "PD1.22", HL7::optional, HL7::repetition_off);
    addObject<NK1>(RSP_Z90_NK1_23, "NK1.23", HL7::optional, HL7::repetition_off);
    addObject<NTE>(RSP_Z90_NTE_24, "NTE.24", HL7::optional, HL7::repetition_off);
    addObject<ORC>(RSP_Z90_ORC_26, "ORC.26", HL7::initialized, HL7::repetition_off);
    addObject<OBR>(RSP_Z90_OBR_28, "OBR.28", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(RSP_Z90_NTE_29, "NTE.29", HL7::optional, HL7::repetition_off);
    addObject<CTD>(RSP_Z90_CTD_30, "CTD.30", HL7::optional, HL7::repetition_off);
    addObject<PV1>(RSP_Z90_PV1_32, "PV1.32", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(RSP_Z90_PV2_33, "PV2.33", HL7::optional, HL7::repetition_off);
    addObject<PV1>(RSP_Z90_PV1_34, "PV1.34", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(RSP_Z90_PV2_35, "PV2.35", HL7::optional, HL7::repetition_off);
    addObject<TQ1>(RSP_Z90_TQ1_36, "TQ1.36", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(RSP_Z90_TQ2_37, "TQ2.37", HL7::optional, HL7::repetition_off);
    addObject<PV1>(RSP_Z90_PV1_38, "PV1.38", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(RSP_Z90_PV2_39, "PV2.39", HL7::optional, HL7::repetition_off);
    addObject<TQ1>(RSP_Z90_TQ1_40, "TQ1.40", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(RSP_Z90_TQ2_41, "TQ2.41", HL7::optional, HL7::repetition_off);
    addObject<OBX>(RSP_Z90_OBX_42, "OBX.42", HL7::optional, HL7::repetition_off);
    addObject<NTE>(RSP_Z90_NTE_43, "NTE.43", HL7::optional, HL7::repetition_off);
    addObject<PID>(RSP_Z90_PID_44, "PID.44", HL7::initialized, HL7::repetition_off);
    addObject<PD1>(RSP_Z90_PD1_45, "PD1.45", HL7::optional, HL7::repetition_off);
    addObject<NK1>(RSP_Z90_NK1_46, "NK1.46", HL7::optional, HL7::repetition_off);
    addObject<NTE>(RSP_Z90_NTE_47, "NTE.47", HL7::optional, HL7::repetition_off);
    addObject<ORC>(RSP_Z90_ORC_49, "ORC.49", HL7::initialized, HL7::repetition_off);
    addObject<OBR>(RSP_Z90_OBR_51, "OBR.51", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(RSP_Z90_NTE_52, "NTE.52", HL7::optional, HL7::repetition_off);
    addObject<CTD>(RSP_Z90_CTD_53, "CTD.53", HL7::optional, HL7::repetition_off);
    addObject<SPM>(RSP_Z90_SPM_55, "SPM.55", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(RSP_Z90_OBX_56, "OBX.56", HL7::optional, HL7::repetition_off);
    addObject<PV1>(RSP_Z90_PV1_57, "PV1.57", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(RSP_Z90_PV2_58, "PV2.58", HL7::optional, HL7::repetition_off);
    addObject<PV1>(RSP_Z90_PV1_59, "PV1.59", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(RSP_Z90_PV2_60, "PV2.60", HL7::optional, HL7::repetition_off);
    addObject<TQ1>(RSP_Z90_TQ1_61, "TQ1.61", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(RSP_Z90_TQ2_62, "TQ2.62", HL7::optional, HL7::repetition_off);
    addObject<PV1>(RSP_Z90_PV1_63, "PV1.63", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(RSP_Z90_PV2_64, "PV2.64", HL7::optional, HL7::repetition_off);
    addObject<TQ1>(RSP_Z90_TQ1_65, "TQ1.65", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(RSP_Z90_TQ2_66, "TQ2.66", HL7::optional, HL7::repetition_off);
    addObject<OBX>(RSP_Z90_OBX_67, "OBX.67", HL7::optional, HL7::repetition_off);
    addObject<NTE>(RSP_Z90_NTE_68, "NTE.68", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, RSP_Z90_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, RSP_Z90_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, RSP_Z90_UAC_3);
  }
  MSA* getMSA_4(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, RSP_Z90_MSA_4);
  }
  ERR* getERR_5(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, RSP_Z90_ERR_5);
  }
  QAK* getQAK_6(size_t index = 0) {
    return (QAK*)this->getObjectSafe(index, RSP_Z90_QAK_6);
  }
  QPD* getQPD_7(size_t index = 0) {
    return (QPD*)this->getObjectSafe(index, RSP_Z90_QPD_7);
  }
  RCP* getRCP_8(size_t index = 0) {
    return (RCP*)this->getObjectSafe(index, RSP_Z90_RCP_8);
  }
  DSC* getDSC_10(size_t index = 0) {
    return (DSC*)this->getObjectSafe(index, RSP_Z90_DSC_10);
  }
  PID* getPID_14(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, RSP_Z90_PID_14);
  }
  PD1* getPD1_15(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, RSP_Z90_PD1_15);
  }
  NK1* getNK1_16(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, RSP_Z90_NK1_16);
  }
  NTE* getNTE_17(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RSP_Z90_NTE_17);
  }
  PV1* getPV1_19(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, RSP_Z90_PV1_19);
  }
  PV2* getPV2_20(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, RSP_Z90_PV2_20);
  }
  PID* getPID_21(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, RSP_Z90_PID_21);
  }
  PD1* getPD1_22(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, RSP_Z90_PD1_22);
  }
  NK1* getNK1_23(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, RSP_Z90_NK1_23);
  }
  NTE* getNTE_24(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RSP_Z90_NTE_24);
  }
  ORC* getORC_26(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, RSP_Z90_ORC_26);
  }
  OBR* getOBR_28(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, RSP_Z90_OBR_28);
  }
  NTE* getNTE_29(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RSP_Z90_NTE_29);
  }
  CTD* getCTD_30(size_t index = 0) {
    return (CTD*)this->getObjectSafe(index, RSP_Z90_CTD_30);
  }
  PV1* getPV1_32(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, RSP_Z90_PV1_32);
  }
  PV2* getPV2_33(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, RSP_Z90_PV2_33);
  }
  PV1* getPV1_34(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, RSP_Z90_PV1_34);
  }
  PV2* getPV2_35(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, RSP_Z90_PV2_35);
  }
  TQ1* getTQ1_36(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, RSP_Z90_TQ1_36);
  }
  TQ2* getTQ2_37(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, RSP_Z90_TQ2_37);
  }
  PV1* getPV1_38(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, RSP_Z90_PV1_38);
  }
  PV2* getPV2_39(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, RSP_Z90_PV2_39);
  }
  TQ1* getTQ1_40(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, RSP_Z90_TQ1_40);
  }
  TQ2* getTQ2_41(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, RSP_Z90_TQ2_41);
  }
  OBX* getOBX_42(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, RSP_Z90_OBX_42);
  }
  NTE* getNTE_43(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RSP_Z90_NTE_43);
  }
  PID* getPID_44(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, RSP_Z90_PID_44);
  }
  PD1* getPD1_45(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, RSP_Z90_PD1_45);
  }
  NK1* getNK1_46(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, RSP_Z90_NK1_46);
  }
  NTE* getNTE_47(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RSP_Z90_NTE_47);
  }
  ORC* getORC_49(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, RSP_Z90_ORC_49);
  }
  OBR* getOBR_51(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, RSP_Z90_OBR_51);
  }
  NTE* getNTE_52(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RSP_Z90_NTE_52);
  }
  CTD* getCTD_53(size_t index = 0) {
    return (CTD*)this->getObjectSafe(index, RSP_Z90_CTD_53);
  }
  SPM* getSPM_55(size_t index = 0) {
    return (SPM*)this->getObjectSafe(index, RSP_Z90_SPM_55);
  }
  OBX* getOBX_56(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, RSP_Z90_OBX_56);
  }
  PV1* getPV1_57(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, RSP_Z90_PV1_57);
  }
  PV2* getPV2_58(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, RSP_Z90_PV2_58);
  }
  PV1* getPV1_59(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, RSP_Z90_PV1_59);
  }
  PV2* getPV2_60(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, RSP_Z90_PV2_60);
  }
  TQ1* getTQ1_61(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, RSP_Z90_TQ1_61);
  }
  TQ2* getTQ2_62(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, RSP_Z90_TQ2_62);
  }
  PV1* getPV1_63(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, RSP_Z90_PV1_63);
  }
  PV2* getPV2_64(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, RSP_Z90_PV2_64);
  }
  TQ1* getTQ1_65(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, RSP_Z90_TQ1_65);
  }
  TQ2* getTQ2_66(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, RSP_Z90_TQ2_66);
  }
  OBX* getOBX_67(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, RSP_Z90_OBX_67);
  }
  NTE* getNTE_68(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RSP_Z90_NTE_68);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_4(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_MSA_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_5(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_ERR_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQAK_6(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_QAK_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQPD_7(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_QPD_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRCP_8(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_RCP_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDSC_10(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_DSC_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_14(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_PID_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_15(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_PD1_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNK1_16(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_NK1_16) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_17(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_NTE_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_19(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_PV1_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_20(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_PV2_20) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_21(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_PID_21) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_22(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_PD1_22) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNK1_23(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_NK1_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_24(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_NTE_24) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_26(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_ORC_26) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_28(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_OBR_28) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_29(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_NTE_29) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTD_30(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_CTD_30) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_32(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_PV1_32) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_33(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_PV2_33) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_34(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_PV1_34) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_35(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_PV2_35) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_36(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_TQ1_36) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_37(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_TQ2_37) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_38(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_PV1_38) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_39(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_PV2_39) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_40(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_TQ1_40) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_41(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_TQ2_41) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_42(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_OBX_42) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_43(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_NTE_43) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_44(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_PID_44) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_45(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_PD1_45) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNK1_46(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_NK1_46) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_47(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_NTE_47) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_49(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_ORC_49) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_51(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_OBR_51) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_52(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_NTE_52) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTD_53(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_CTD_53) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSPM_55(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_SPM_55) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_56(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_OBX_56) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_57(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_PV1_57) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_58(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_PV2_58) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_59(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_PV1_59) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_60(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_PV2_60) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_61(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_TQ1_61) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_62(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_TQ2_62) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_63(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_PV1_63) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_64(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_PV2_64) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_65(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_TQ1_65) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_66(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_TQ2_66) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_67(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_OBX_67) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_68(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_NTE_68) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RSP_Z90_ */
} /* namespace HL7_281 */
#endif /*  __RSP_Z90__281_H__ */
