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


#ifndef __RQ1_v29_H__
#define __RQ1_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/ID.h"
#include "../datatype/ST.h"

namespace HL7_29 {

/* RQ1 */
class RQ1 : public HL7Segment {
 public:
  RQ1() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    RQ1_1,
    RQ1_2,
    RQ1_3,
    RQ1_4,
    RQ1_5,
    RQ1_6,
    RQ1_7,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "RQ1"; }
  RQ1* create() const { return new RQ1(); }

 private:
  void init() {
    setName("RQ1");
    /* Init members */
    addObject<ST>(RQ1_1, "RQ1.1", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RQ1_2, "RQ1.2", HL7::initialized, HL7::repetition_off);
    addObject<ST>(RQ1_3, "RQ1.3", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RQ1_4, "RQ1.4", HL7::initialized, HL7::repetition_off);
    addObject<ST>(RQ1_5, "RQ1.5", HL7::initialized, HL7::repetition_off);
    addObject<ID>(RQ1_6, "RQ1.6", HL7::initialized, HL7::repetition_off);
    addObject<ID>(RQ1_7, "RQ1.7", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Anticipated Price
   */

  ST* getRQ1_1(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, RQ1_1);
  }

  ST* getAnticipatedPrice(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, RQ1_1);
  }

  bool isRQ1_1(size_t index = 0) {
    try {
      return this->getObject(index, RQ1_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAnticipatedPrice(size_t index = 0) {
    try {
      return this->getObject(index, RQ1_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Manufacturer Identifier
   */

  CWE* getRQ1_2(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RQ1_2);
  }

  CWE* getManufacturerIdentifier(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RQ1_2);
  }

  bool isRQ1_2(size_t index = 0) {
    try {
      return this->getObject(index, RQ1_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isManufacturerIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, RQ1_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Manufacturer's Catalog
   */

  ST* getRQ1_3(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, RQ1_3);
  }

  ST* getManufacturersCatalog(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, RQ1_3);
  }

  bool isRQ1_3(size_t index = 0) {
    try {
      return this->getObject(index, RQ1_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isManufacturersCatalog(size_t index = 0) {
    try {
      return this->getObject(index, RQ1_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Vendor ID
   */

  CWE* getRQ1_4(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RQ1_4);
  }

  CWE* getVendorID(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RQ1_4);
  }

  bool isRQ1_4(size_t index = 0) {
    try {
      return this->getObject(index, RQ1_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isVendorID(size_t index = 0) {
    try {
      return this->getObject(index, RQ1_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Vendor Catalog
   */

  ST* getRQ1_5(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, RQ1_5);
  }

  ST* getVendorCatalog(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, RQ1_5);
  }

  bool isRQ1_5(size_t index = 0) {
    try {
      return this->getObject(index, RQ1_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isVendorCatalog(size_t index = 0) {
    try {
      return this->getObject(index, RQ1_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Taxable
   */

  ID* getRQ1_6(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RQ1_6);
  }

  ID* getTaxable(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RQ1_6);
  }

  bool isRQ1_6(size_t index = 0) {
    try {
      return this->getObject(index, RQ1_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTaxable(size_t index = 0) {
    try {
      return this->getObject(index, RQ1_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Substitute Allowed
   */

  ID* getRQ1_7(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RQ1_7);
  }

  ID* getSubstituteAllowed(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RQ1_7);
  }

  bool isRQ1_7(size_t index = 0) {
    try {
      return this->getObject(index, RQ1_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSubstituteAllowed(size_t index = 0) {
    try {
      return this->getObject(index, RQ1_7) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of RQ1 */

} /* End of namespace HL7_29 */
#endif /* __RQ1_v29_H__ */
