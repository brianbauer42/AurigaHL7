/*
 * hacca - C Toolkit for the HL7 Protocol
 *
 * Warning: This file was automatically generated by [hawk], please do not edit.
 *          Thu 25 Jun 19:03:17 CEST 2020
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


#ifndef __EHC_E10__281_H__
#define __EHC_E10__281_H__

#include "../../common/Util.h"
#include "../segment/ADJ.h"
#include "../segment/ERR.h"
#include "../segment/IN1.h"
#include "../segment/IN2.h"
#include "../segment/IPR.h"
#include "../segment/IVC.h"
#include "../segment/MSA.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/PSG.h"
#include "../segment/PSL.h"
#include "../segment/PSS.h"
#include "../segment/PYE.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_281 {

/* Internal structures/groups */
struct EHC_E10_INVOICE_PROCESSING_RESULTS_INFO; /* INVOICE_PROCESSING_RESULTS_INFO */
struct EHC_E10_PSSPSGPSLADJ; /* PSSPSGPSLADJ */
struct EHC_E10_PSGPSLADJ; /* PSGPSLADJ */
struct EHC_E10_PRODUCT_SERVICE_LINE_INFO; /* PRODUCT_SERVICE_LINE_INFO */

/* INVOICE_PROCESSING_RESULTS_INFO */
struct EHC_E10_INVOICE_PROCESSING_RESULTS_INFO : public HL7Group {
  EHC_E10_INVOICE_PROCESSING_RESULTS_INFO() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    EHC_E10_EHC_E10_PSSPSGPSLADJ_1,
    EHC_E10_IN1_2,
    EHC_E10_IN2_3,
    EHC_E10_IPR_4,
    EHC_E10_IVC_5,
    EHC_E10_NTE_6,
    EHC_E10_PYE_7,
    FIELD_ID_MAX
  };

  const char* className() const { return "EHC_E10_INVOICE_PROCESSING_RESULTS_INFO"; }
  EHC_E10_INVOICE_PROCESSING_RESULTS_INFO* create() const { return new EHC_E10_INVOICE_PROCESSING_RESULTS_INFO(); }

 private:
  /* Initialize object */
  void init() {
    setName("EHC_E10.INVOICE_PROCESSING_RESULTS_INFO");
    addObject<EHC_E10_PSSPSGPSLADJ>(EHC_E10_EHC_E10_PSSPSGPSLADJ_1, "EHC_E10_PSSPSGPSLADJ.1", HL7::optional, HL7::repetition_on);
    addObject<IN1>(EHC_E10_IN1_2, "IN1.2", HL7::optional, HL7::repetition_on);
    addObject<IN2>(EHC_E10_IN2_3, "IN2.3", HL7::optional, HL7::repetition_on);
    addObject<IPR>(EHC_E10_IPR_4, "IPR.4", HL7::optional, HL7::repetition_on);
    addObject<IVC>(EHC_E10_IVC_5, "IVC.5", HL7::optional, HL7::repetition_on);
    addObject<NTE>(EHC_E10_NTE_6, "NTE.6", HL7::optional, HL7::repetition_on);
    addObject<PYE>(EHC_E10_PYE_7, "PYE.7", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  EHC_E10_PSSPSGPSLADJ* getEHC_E10_PSSPSGPSLADJ_1(size_t index = 0) {
    return (EHC_E10_PSSPSGPSLADJ*)this->getObjectSafe(index, EHC_E10_EHC_E10_PSSPSGPSLADJ_1);
  }
  IN1* getIN1_2(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, EHC_E10_IN1_2);
  }
  IN2* getIN2_3(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, EHC_E10_IN2_3);
  }
  IPR* getIPR_4(size_t index = 0) {
    return (IPR*)this->getObjectSafe(index, EHC_E10_IPR_4);
  }
  IVC* getIVC_5(size_t index = 0) {
    return (IVC*)this->getObjectSafe(index, EHC_E10_IVC_5);
  }
  NTE* getNTE_6(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, EHC_E10_NTE_6);
  }
  PYE* getPYE_7(size_t index = 0) {
    return (PYE*)this->getObjectSafe(index, EHC_E10_PYE_7);
  }

  /* Checker list */
  bool isEHC_E10_PSSPSGPSLADJ_1(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E10_EHC_E10_PSSPSGPSLADJ_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_2(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E10_IN1_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_3(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E10_IN2_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIPR_4(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E10_IPR_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIVC_5(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E10_IVC_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_6(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E10_NTE_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPYE_7(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E10_PYE_7) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* EHC_E10_INVOICE_PROCESSING_RESULTS_INFO */

/* PSSPSGPSLADJ */
struct EHC_E10_PSSPSGPSLADJ : public HL7Group {
  EHC_E10_PSSPSGPSLADJ() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    EHC_E10_EHC_E10_PSGPSLADJ_1,
    EHC_E10_PSS_2,
    FIELD_ID_MAX
  };

  const char* className() const { return "EHC_E10_PSSPSGPSLADJ"; }
  EHC_E10_PSSPSGPSLADJ* create() const { return new EHC_E10_PSSPSGPSLADJ(); }

 private:
  /* Initialize object */
  void init() {
    setName("EHC_E10.PSSPSGPSLADJ");
    addObject<EHC_E10_PSGPSLADJ>(EHC_E10_EHC_E10_PSGPSLADJ_1, "EHC_E10_PSGPSLADJ.1", HL7::optional, HL7::repetition_on);
    addObject<PSS>(EHC_E10_PSS_2, "PSS.2", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  EHC_E10_PSGPSLADJ* getEHC_E10_PSGPSLADJ_1(size_t index = 0) {
    return (EHC_E10_PSGPSLADJ*)this->getObjectSafe(index, EHC_E10_EHC_E10_PSGPSLADJ_1);
  }
  PSS* getPSS_2(size_t index = 0) {
    return (PSS*)this->getObjectSafe(index, EHC_E10_PSS_2);
  }

  /* Checker list */
  bool isEHC_E10_PSGPSLADJ_1(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E10_EHC_E10_PSGPSLADJ_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPSS_2(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E10_PSS_2) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* EHC_E10_PSSPSGPSLADJ */

/* PSGPSLADJ */
struct EHC_E10_PSGPSLADJ : public HL7Group {
  EHC_E10_PSGPSLADJ() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    EHC_E10_EHC_E10_PRODUCT_SERVICE_LINE_INFO_1,
    EHC_E10_PSG_2,
    FIELD_ID_MAX
  };

  const char* className() const { return "EHC_E10_PSGPSLADJ"; }
  EHC_E10_PSGPSLADJ* create() const { return new EHC_E10_PSGPSLADJ(); }

 private:
  /* Initialize object */
  void init() {
    setName("EHC_E10.PSGPSLADJ");
    addObject<EHC_E10_PRODUCT_SERVICE_LINE_INFO>(EHC_E10_EHC_E10_PRODUCT_SERVICE_LINE_INFO_1, "EHC_E10_PRODUCT_SERVICE_LINE_INFO.1", HL7::optional, HL7::repetition_on);
    addObject<PSG>(EHC_E10_PSG_2, "PSG.2", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  EHC_E10_PRODUCT_SERVICE_LINE_INFO* getEHC_E10_PRODUCT_SERVICE_LINE_INFO_1(size_t index = 0) {
    return (EHC_E10_PRODUCT_SERVICE_LINE_INFO*)this->getObjectSafe(index, EHC_E10_EHC_E10_PRODUCT_SERVICE_LINE_INFO_1);
  }
  PSG* getPSG_2(size_t index = 0) {
    return (PSG*)this->getObjectSafe(index, EHC_E10_PSG_2);
  }

  /* Checker list */
  bool isEHC_E10_PRODUCT_SERVICE_LINE_INFO_1(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E10_EHC_E10_PRODUCT_SERVICE_LINE_INFO_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPSG_2(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E10_PSG_2) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* EHC_E10_PSGPSLADJ */

/* PRODUCT_SERVICE_LINE_INFO */
struct EHC_E10_PRODUCT_SERVICE_LINE_INFO : public HL7Group {
  EHC_E10_PRODUCT_SERVICE_LINE_INFO() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    EHC_E10_ADJ_1,
    EHC_E10_PSL_2,
    FIELD_ID_MAX
  };

  const char* className() const { return "EHC_E10_PRODUCT_SERVICE_LINE_INFO"; }
  EHC_E10_PRODUCT_SERVICE_LINE_INFO* create() const { return new EHC_E10_PRODUCT_SERVICE_LINE_INFO(); }

 private:
  /* Initialize object */
  void init() {
    setName("EHC_E10.PRODUCT_SERVICE_LINE_INFO");
    addObject<ADJ>(EHC_E10_ADJ_1, "ADJ.1", HL7::optional, HL7::repetition_on);
    addObject<PSL>(EHC_E10_PSL_2, "PSL.2", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  ADJ* getADJ_1(size_t index = 0) {
    return (ADJ*)this->getObjectSafe(index, EHC_E10_ADJ_1);
  }
  PSL* getPSL_2(size_t index = 0) {
    return (PSL*)this->getObjectSafe(index, EHC_E10_PSL_2);
  }

  /* Checker list */
  bool isADJ_1(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E10_ADJ_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPSL_2(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E10_PSL_2) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* EHC_E10_PRODUCT_SERVICE_LINE_INFO */

/* EHC_E10 */
struct EHC_E10 : public HL7Message {
  EHC_E10() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    EHC_E10_MSH_1,
    EHC_E10_SFT_2,
    EHC_E10_UAC_3,
    EHC_E10_MSA_4,
    EHC_E10_ERR_5,
    EHC_E10_IPR_7,
    EHC_E10_NTE_8,
    EHC_E10_PYE_9,
    EHC_E10_IN1_10,
    EHC_E10_IN2_11,
    EHC_E10_IVC_12,
    EHC_E10_PSS_14,
    EHC_E10_PSG_16,
    EHC_E10_PSL_18,
    EHC_E10_ADJ_19,
    FIELD_ID_MAX
  };

  const char* className() const { return "EHC_E10"; }
  EHC_E10* create() const { return new EHC_E10(); }

 private:
  /* Initialize object */
  void init() {
    setName("EHC_E10");
    addObject<MSH>(EHC_E10_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(EHC_E10_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(EHC_E10_UAC_3, "UAC.3", HL7::optional, HL7::repetition_on);
    addObject<MSA>(EHC_E10_MSA_4, "MSA.4", HL7::initialized, HL7::repetition_off);
    addObject<ERR>(EHC_E10_ERR_5, "ERR.5", HL7::optional, HL7::repetition_on);
    addObject<IPR>(EHC_E10_IPR_7, "IPR.7", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(EHC_E10_NTE_8, "NTE.8", HL7::optional, HL7::repetition_off);
    addObject<PYE>(EHC_E10_PYE_9, "PYE.9", HL7::initialized, HL7::repetition_off);
    addObject<IN1>(EHC_E10_IN1_10, "IN1.10", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(EHC_E10_IN2_11, "IN2.11", HL7::optional, HL7::repetition_off);
    addObject<IVC>(EHC_E10_IVC_12, "IVC.12", HL7::initialized, HL7::repetition_off);
    addObject<PSS>(EHC_E10_PSS_14, "PSS.14", HL7::initialized, HL7::repetition_off);
    addObject<PSG>(EHC_E10_PSG_16, "PSG.16", HL7::initialized, HL7::repetition_off);
    addObject<PSL>(EHC_E10_PSL_18, "PSL.18", HL7::initialized, HL7::repetition_off);
    addObject<ADJ>(EHC_E10_ADJ_19, "ADJ.19", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, EHC_E10_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, EHC_E10_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, EHC_E10_UAC_3);
  }
  MSA* getMSA_4(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, EHC_E10_MSA_4);
  }
  ERR* getERR_5(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, EHC_E10_ERR_5);
  }
  IPR* getIPR_7(size_t index = 0) {
    return (IPR*)this->getObjectSafe(index, EHC_E10_IPR_7);
  }
  NTE* getNTE_8(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, EHC_E10_NTE_8);
  }
  PYE* getPYE_9(size_t index = 0) {
    return (PYE*)this->getObjectSafe(index, EHC_E10_PYE_9);
  }
  IN1* getIN1_10(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, EHC_E10_IN1_10);
  }
  IN2* getIN2_11(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, EHC_E10_IN2_11);
  }
  IVC* getIVC_12(size_t index = 0) {
    return (IVC*)this->getObjectSafe(index, EHC_E10_IVC_12);
  }
  PSS* getPSS_14(size_t index = 0) {
    return (PSS*)this->getObjectSafe(index, EHC_E10_PSS_14);
  }
  PSG* getPSG_16(size_t index = 0) {
    return (PSG*)this->getObjectSafe(index, EHC_E10_PSG_16);
  }
  PSL* getPSL_18(size_t index = 0) {
    return (PSL*)this->getObjectSafe(index, EHC_E10_PSL_18);
  }
  ADJ* getADJ_19(size_t index = 0) {
    return (ADJ*)this->getObjectSafe(index, EHC_E10_ADJ_19);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E10_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E10_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E10_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_4(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E10_MSA_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_5(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E10_ERR_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIPR_7(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E10_IPR_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_8(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E10_NTE_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPYE_9(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E10_PYE_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_10(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E10_IN1_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_11(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E10_IN2_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIVC_12(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E10_IVC_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPSS_14(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E10_PSS_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPSG_16(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E10_PSG_16) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPSL_18(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E10_PSL_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isADJ_19(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E10_ADJ_19) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* EHC_E10_ */
} /* namespace HL7_281 */
#endif /*  __EHC_E10__281_H__ */
