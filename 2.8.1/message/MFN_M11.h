/*
 * hacca - C Toolkit for the HL7 Protocol
 *
 * Warning: This file was automatically generated by [hawk], please do not edit.
 *          Thu 25 Jun 19:03:36 CEST 2020
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


#ifndef __MFN_M11__281_H__
#define __MFN_M11__281_H__

#include "../../common/Util.h"
#include "../segment/MFE.h"
#include "../segment/MFI.h"
#include "../segment/MSH.h"
#include "../segment/OM1.h"
#include "../segment/OM2.h"
#include "../segment/OM6.h"
#include "../segment/PRT.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_281 {

/* Internal structures/groups */
struct MFN_M11_MF_TEST_CALCULATED; /* MF_TEST_CALCULATED */
struct MFN_M11_MF_TEST_CALC_DETAIL; /* MF_TEST_CALC_DETAIL */

/* MF_TEST_CALCULATED */
struct MFN_M11_MF_TEST_CALCULATED : public HL7Group {
  MFN_M11_MF_TEST_CALCULATED() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    MFN_M11_MFE_1,
    MFN_M11_MFN_M11_MF_TEST_CALC_DETAIL_2,
    MFN_M11_OM1_3,
    MFN_M11_PRT_4,
    FIELD_ID_MAX
  };

  const char* className() const { return "MFN_M11_MF_TEST_CALCULATED"; }
  MFN_M11_MF_TEST_CALCULATED* create() const { return new MFN_M11_MF_TEST_CALCULATED(); }

 private:
  /* Initialize object */
  void init() {
    setName("MFN_M11.MF_TEST_CALCULATED");
    addObject<MFE>(MFN_M11_MFE_1, "MFE.1", HL7::optional, HL7::repetition_on);
    addObject<MFN_M11_MF_TEST_CALC_DETAIL>(MFN_M11_MFN_M11_MF_TEST_CALC_DETAIL_2, "MFN_M11_MF_TEST_CALC_DETAIL.2", HL7::optional, HL7::repetition_on);
    addObject<OM1>(MFN_M11_OM1_3, "OM1.3", HL7::optional, HL7::repetition_on);
    addObject<PRT>(MFN_M11_PRT_4, "PRT.4", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  MFE* getMFE_1(size_t index = 0) {
    return (MFE*)this->getObjectSafe(index, MFN_M11_MFE_1);
  }
  MFN_M11_MF_TEST_CALC_DETAIL* getMFN_M11_MF_TEST_CALC_DETAIL_2(size_t index = 0) {
    return (MFN_M11_MF_TEST_CALC_DETAIL*)this->getObjectSafe(index, MFN_M11_MFN_M11_MF_TEST_CALC_DETAIL_2);
  }
  OM1* getOM1_3(size_t index = 0) {
    return (OM1*)this->getObjectSafe(index, MFN_M11_OM1_3);
  }
  PRT* getPRT_4(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, MFN_M11_PRT_4);
  }

  /* Checker list */
  bool isMFE_1(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M11_MFE_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMFN_M11_MF_TEST_CALC_DETAIL_2(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M11_MFN_M11_MF_TEST_CALC_DETAIL_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOM1_3(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M11_OM1_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_4(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M11_PRT_4) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* MFN_M11_MF_TEST_CALCULATED */

/* MF_TEST_CALC_DETAIL */
struct MFN_M11_MF_TEST_CALC_DETAIL : public HL7Group {
  MFN_M11_MF_TEST_CALC_DETAIL() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    MFN_M11_OM2_1,
    MFN_M11_OM6_2,
    FIELD_ID_MAX
  };

  const char* className() const { return "MFN_M11_MF_TEST_CALC_DETAIL"; }
  MFN_M11_MF_TEST_CALC_DETAIL* create() const { return new MFN_M11_MF_TEST_CALC_DETAIL(); }

 private:
  /* Initialize object */
  void init() {
    setName("MFN_M11.MF_TEST_CALC_DETAIL");
    addObject<OM2>(MFN_M11_OM2_1, "OM2.1", HL7::optional, HL7::repetition_on);
    addObject<OM6>(MFN_M11_OM6_2, "OM6.2", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  OM2* getOM2_1(size_t index = 0) {
    return (OM2*)this->getObjectSafe(index, MFN_M11_OM2_1);
  }
  OM6* getOM6_2(size_t index = 0) {
    return (OM6*)this->getObjectSafe(index, MFN_M11_OM6_2);
  }

  /* Checker list */
  bool isOM2_1(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M11_OM2_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOM6_2(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M11_OM6_2) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* MFN_M11_MF_TEST_CALC_DETAIL */

/* MFN_M11 */
struct MFN_M11 : public HL7Message {
  MFN_M11() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    MFN_M11_MSH_1,
    MFN_M11_SFT_2,
    MFN_M11_UAC_3,
    MFN_M11_MFI_4,
    MFN_M11_MFE_6,
    MFN_M11_OM1_7,
    MFN_M11_PRT_8,
    MFN_M11_OM6_10,
    MFN_M11_OM2_11,
    FIELD_ID_MAX
  };

  const char* className() const { return "MFN_M11"; }
  MFN_M11* create() const { return new MFN_M11(); }

 private:
  /* Initialize object */
  void init() {
    setName("MFN_M11");
    addObject<MSH>(MFN_M11_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(MFN_M11_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(MFN_M11_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<MFI>(MFN_M11_MFI_4, "MFI.4", HL7::initialized, HL7::repetition_off);
    addObject<MFE>(MFN_M11_MFE_6, "MFE.6", HL7::initialized, HL7::repetition_off);
    addObject<OM1>(MFN_M11_OM1_7, "OM1.7", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(MFN_M11_PRT_8, "PRT.8", HL7::optional, HL7::repetition_off);
    addObject<OM6>(MFN_M11_OM6_10, "OM6.10", HL7::initialized, HL7::repetition_off);
    addObject<OM2>(MFN_M11_OM2_11, "OM2.11", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, MFN_M11_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, MFN_M11_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, MFN_M11_UAC_3);
  }
  MFI* getMFI_4(size_t index = 0) {
    return (MFI*)this->getObjectSafe(index, MFN_M11_MFI_4);
  }
  MFE* getMFE_6(size_t index = 0) {
    return (MFE*)this->getObjectSafe(index, MFN_M11_MFE_6);
  }
  OM1* getOM1_7(size_t index = 0) {
    return (OM1*)this->getObjectSafe(index, MFN_M11_OM1_7);
  }
  PRT* getPRT_8(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, MFN_M11_PRT_8);
  }
  OM6* getOM6_10(size_t index = 0) {
    return (OM6*)this->getObjectSafe(index, MFN_M11_OM6_10);
  }
  OM2* getOM2_11(size_t index = 0) {
    return (OM2*)this->getObjectSafe(index, MFN_M11_OM2_11);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M11_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M11_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M11_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMFI_4(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M11_MFI_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMFE_6(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M11_MFE_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOM1_7(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M11_OM1_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_8(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M11_PRT_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOM6_10(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M11_OM6_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOM2_11(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M11_OM2_11) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* MFN_M11_ */
} /* namespace HL7_281 */
#endif /*  __MFN_M11__281_H__ */
