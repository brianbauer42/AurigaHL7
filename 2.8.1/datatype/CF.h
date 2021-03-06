/*
 * hacca - C Toolkit for the HL7 Protocol
 *
 * Warning: This file was automatically generated by [hawk], please do not edit.
 *          Thu 25 Jun 18:58:41 CEST 2020
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


#ifndef __CF_v281_H__
#define __CF_v281_H__

#include "../../common/Util.h"
#include "../datatype/DTM.h"
#include "../datatype/FT.h"
#include "../datatype/ID.h"
#include "../datatype/ST.h"

namespace HL7_281 {

/* Coded Element with Formatted Values */
class CF : public HL7Data {
 public:
  CF() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    CF_1, /* Identifier */
    CF_2, /* Formatted Text */
    CF_3, /* Name of Coding System */
    CF_4, /* Alternate Identifier */
    CF_5, /* Alternate Formatted Text */
    CF_6, /* Name of Alternate Coding System */
    CF_7, /* Coding System Version ID */
    CF_8, /* Alternate Coding System Version ID */
    CF_9, /* Original Text */
    CF_10, /* Second Alternate Identifier */
    CF_11, /* Second Alternate Formatted Text */
    CF_12, /* Name of Second Alternate Coding System */
    CF_13, /* Second Alternate Coding System Version ID */
    CF_14, /* Coding System OID */
    CF_15, /* Value Set OID */
    CF_16, /* Value Set Version ID */
    CF_17, /* Alternate Coding System OID */
    CF_18, /* Alternate Value Set OID */
    CF_19, /* Alternate Value Set Version ID */
    CF_20, /* Second Alternate Coding System OID */
    CF_21, /* Second Alternate Value Set OID */
    CF_22, /* Second Alternate Value Set Version ID */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "CF"; }
  CF *create() const { return new CF(); }

 private:
  void init() {
    setName("CF");
    /* Init members */
    addObject<ST>(CF_1, "CF.1", HL7::initialized, HL7::repetition_off);
    addObject<FT>(CF_2, "CF.2", HL7::initialized, HL7::repetition_off);
    addObject<ID>(CF_3, "CF.3", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CF_4, "CF.4", HL7::initialized, HL7::repetition_off);
    addObject<FT>(CF_5, "CF.5", HL7::initialized, HL7::repetition_off);
    addObject<ID>(CF_6, "CF.6", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CF_7, "CF.7", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CF_8, "CF.8", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CF_9, "CF.9", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CF_10, "CF.10", HL7::initialized, HL7::repetition_off);
    addObject<FT>(CF_11, "CF.11", HL7::initialized, HL7::repetition_off);
    addObject<ID>(CF_12, "CF.12", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CF_13, "CF.13", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CF_14, "CF.14", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CF_15, "CF.15", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(CF_16, "CF.16", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CF_17, "CF.17", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CF_18, "CF.18", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(CF_19, "CF.19", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CF_20, "CF.20", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CF_21, "CF.21", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(CF_22, "CF.22", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Identifier
   */
  ST *getCF_1(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CF_1);
  }

  ST *getIdentifier(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CF_1);
  }

  bool isCF_1(size_t index = 0) {
    try {
      return this->getObject(index, CF_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, CF_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Formatted Text
   */
  FT *getCF_2(size_t index = 0) {
    return (FT *)this->getObjectSafe(index, CF_2);
  }

  FT *getFormattedText(size_t index = 0) {
    return (FT *)this->getObjectSafe(index, CF_2);
  }

  bool isCF_2(size_t index = 0) {
    try {
      return this->getObject(index, CF_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFormattedText(size_t index = 0) {
    try {
      return this->getObject(index, CF_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Name of Coding System
   */
  ID *getCF_3(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, CF_3);
  }

  ID *getNameofCodingSystem(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, CF_3);
  }

  bool isCF_3(size_t index = 0) {
    try {
      return this->getObject(index, CF_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameofCodingSystem(size_t index = 0) {
    try {
      return this->getObject(index, CF_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Alternate Identifier
   */
  ST *getCF_4(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CF_4);
  }

  ST *getAlternateIdentifier(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CF_4);
  }

  bool isCF_4(size_t index = 0) {
    try {
      return this->getObject(index, CF_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, CF_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Alternate Formatted Text
   */
  FT *getCF_5(size_t index = 0) {
    return (FT *)this->getObjectSafe(index, CF_5);
  }

  FT *getAlternateFormattedText(size_t index = 0) {
    return (FT *)this->getObjectSafe(index, CF_5);
  }

  bool isCF_5(size_t index = 0) {
    try {
      return this->getObject(index, CF_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateFormattedText(size_t index = 0) {
    try {
      return this->getObject(index, CF_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Name of Alternate Coding System
   */
  ID *getCF_6(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, CF_6);
  }

  ID *getNameofAlternateCodingSystem(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, CF_6);
  }

  bool isCF_6(size_t index = 0) {
    try {
      return this->getObject(index, CF_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameofAlternateCodingSystem(size_t index = 0) {
    try {
      return this->getObject(index, CF_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Coding System Version ID
   */
  ST *getCF_7(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CF_7);
  }

  ST *getCodingSystemVersionID(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CF_7);
  }

  bool isCF_7(size_t index = 0) {
    try {
      return this->getObject(index, CF_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCodingSystemVersionID(size_t index = 0) {
    try {
      return this->getObject(index, CF_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Alternate Coding System Version ID
   */
  ST *getCF_8(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CF_8);
  }

  ST *getAlternateCodingSystemVersionID(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CF_8);
  }

  bool isCF_8(size_t index = 0) {
    try {
      return this->getObject(index, CF_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateCodingSystemVersionID(size_t index = 0) {
    try {
      return this->getObject(index, CF_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Original Text
   */
  ST *getCF_9(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CF_9);
  }

  ST *getOriginalText(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CF_9);
  }

  bool isCF_9(size_t index = 0) {
    try {
      return this->getObject(index, CF_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOriginalText(size_t index = 0) {
    try {
      return this->getObject(index, CF_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Second Alternate Identifier
   */
  ST *getCF_10(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CF_10);
  }

  ST *getSecondAlternateIdentifier(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CF_10);
  }

  bool isCF_10(size_t index = 0) {
    try {
      return this->getObject(index, CF_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSecondAlternateIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, CF_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Second Alternate Formatted Text
   */
  FT *getCF_11(size_t index = 0) {
    return (FT *)this->getObjectSafe(index, CF_11);
  }

  FT *getSecondAlternateFormattedText(size_t index = 0) {
    return (FT *)this->getObjectSafe(index, CF_11);
  }

  bool isCF_11(size_t index = 0) {
    try {
      return this->getObject(index, CF_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSecondAlternateFormattedText(size_t index = 0) {
    try {
      return this->getObject(index, CF_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Name of Second Alternate Coding System
   */
  ID *getCF_12(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, CF_12);
  }

  ID *getNameofSecondAlternateCodingSystem(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, CF_12);
  }

  bool isCF_12(size_t index = 0) {
    try {
      return this->getObject(index, CF_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameofSecondAlternateCodingSystem(size_t index = 0) {
    try {
      return this->getObject(index, CF_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Second Alternate Coding System Version ID
   */
  ST *getCF_13(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CF_13);
  }

  ST *getSecondAlternateCodingSystemVersionID(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CF_13);
  }

  bool isCF_13(size_t index = 0) {
    try {
      return this->getObject(index, CF_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSecondAlternateCodingSystemVersionID(size_t index = 0) {
    try {
      return this->getObject(index, CF_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Coding System OID
   */
  ST *getCF_14(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CF_14);
  }

  ST *getCodingSystemOID(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CF_14);
  }

  bool isCF_14(size_t index = 0) {
    try {
      return this->getObject(index, CF_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCodingSystemOID(size_t index = 0) {
    try {
      return this->getObject(index, CF_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Value Set OID
   */
  ST *getCF_15(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CF_15);
  }

  ST *getValueSetOID(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CF_15);
  }

  bool isCF_15(size_t index = 0) {
    try {
      return this->getObject(index, CF_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isValueSetOID(size_t index = 0) {
    try {
      return this->getObject(index, CF_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Value Set Version ID
   */
  DTM *getCF_16(size_t index = 0) {
    return (DTM *)this->getObjectSafe(index, CF_16);
  }

  DTM *getValueSetVersionID(size_t index = 0) {
    return (DTM *)this->getObjectSafe(index, CF_16);
  }

  bool isCF_16(size_t index = 0) {
    try {
      return this->getObject(index, CF_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isValueSetVersionID(size_t index = 0) {
    try {
      return this->getObject(index, CF_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Alternate Coding System OID
   */
  ST *getCF_17(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CF_17);
  }

  ST *getAlternateCodingSystemOID(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CF_17);
  }

  bool isCF_17(size_t index = 0) {
    try {
      return this->getObject(index, CF_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateCodingSystemOID(size_t index = 0) {
    try {
      return this->getObject(index, CF_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Alternate Value Set OID
   */
  ST *getCF_18(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CF_18);
  }

  ST *getAlternateValueSetOID(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CF_18);
  }

  bool isCF_18(size_t index = 0) {
    try {
      return this->getObject(index, CF_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateValueSetOID(size_t index = 0) {
    try {
      return this->getObject(index, CF_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Alternate Value Set Version ID
   */
  DTM *getCF_19(size_t index = 0) {
    return (DTM *)this->getObjectSafe(index, CF_19);
  }

  DTM *getAlternateValueSetVersionID(size_t index = 0) {
    return (DTM *)this->getObjectSafe(index, CF_19);
  }

  bool isCF_19(size_t index = 0) {
    try {
      return this->getObject(index, CF_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateValueSetVersionID(size_t index = 0) {
    try {
      return this->getObject(index, CF_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Second Alternate Coding System OID
   */
  ST *getCF_20(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CF_20);
  }

  ST *getSecondAlternateCodingSystemOID(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CF_20);
  }

  bool isCF_20(size_t index = 0) {
    try {
      return this->getObject(index, CF_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSecondAlternateCodingSystemOID(size_t index = 0) {
    try {
      return this->getObject(index, CF_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Second Alternate Value Set OID
   */
  ST *getCF_21(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CF_21);
  }

  ST *getSecondAlternateValueSetOID(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CF_21);
  }

  bool isCF_21(size_t index = 0) {
    try {
      return this->getObject(index, CF_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSecondAlternateValueSetOID(size_t index = 0) {
    try {
      return this->getObject(index, CF_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Second Alternate Value Set Version ID
   */
  DTM *getCF_22(size_t index = 0) {
    return (DTM *)this->getObjectSafe(index, CF_22);
  }

  DTM *getSecondAlternateValueSetVersionID(size_t index = 0) {
    return (DTM *)this->getObjectSafe(index, CF_22);
  }

  bool isCF_22(size_t index = 0) {
    try {
      return this->getObject(index, CF_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSecondAlternateValueSetVersionID(size_t index = 0) {
    try {
      return this->getObject(index, CF_22) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End CF */

} /* End HL7_281 */

#endif /* __CF_v281_H__ */
