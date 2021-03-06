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


#ifndef __CTD_v29_H__
#define __CTD_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/PL.h"
#include "../datatype/PLN.h"
#include "../datatype/XAD.h"
#include "../datatype/XPN.h"
#include "../datatype/XTN.h"

namespace HL7_29 {

/* CTD */
class CTD : public HL7Segment {
 public:
  CTD() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    CTD_1,
    CTD_2,
    CTD_3,
    CTD_4,
    CTD_5,
    CTD_6,
    CTD_7,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "CTD"; }
  CTD* create() const { return new CTD(); }

 private:
  void init() {
    setName("CTD");
    /* Init members */
    addObject<CWE>(CTD_1, "CTD.1", HL7::initialized, HL7::repetition_off);
    addObject<XPN>(CTD_2, "CTD.2", HL7::initialized, HL7::repetition_off);
    addObject<XAD>(CTD_3, "CTD.3", HL7::initialized, HL7::repetition_off);
    addObject<PL>(CTD_4, "CTD.4", HL7::initialized, HL7::repetition_off);
    addObject<XTN>(CTD_5, "CTD.5", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(CTD_6, "CTD.6", HL7::initialized, HL7::repetition_off);
    addObject<PLN>(CTD_7, "CTD.7", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Contact Role
   */

  CWE* getCTD_1(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CTD_1);
  }

  CWE* getContactRole(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CTD_1);
  }

  bool isCTD_1(size_t index = 0) {
    try {
      return this->getObject(index, CTD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isContactRole(size_t index = 0) {
    try {
      return this->getObject(index, CTD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Contact Name
   */

  XPN* getCTD_2(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, CTD_2);
  }

  XPN* getContactName(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, CTD_2);
  }

  bool isCTD_2(size_t index = 0) {
    try {
      return this->getObject(index, CTD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isContactName(size_t index = 0) {
    try {
      return this->getObject(index, CTD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Contact Address
   */

  XAD* getCTD_3(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, CTD_3);
  }

  XAD* getContactAddress(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, CTD_3);
  }

  bool isCTD_3(size_t index = 0) {
    try {
      return this->getObject(index, CTD_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isContactAddress(size_t index = 0) {
    try {
      return this->getObject(index, CTD_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Contact Location
   */

  PL* getCTD_4(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, CTD_4);
  }

  PL* getContactLocation(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, CTD_4);
  }

  bool isCTD_4(size_t index = 0) {
    try {
      return this->getObject(index, CTD_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isContactLocation(size_t index = 0) {
    try {
      return this->getObject(index, CTD_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Contact Communication Information
   */

  XTN* getCTD_5(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, CTD_5);
  }

  XTN* getContactCommunicationInformation(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, CTD_5);
  }

  bool isCTD_5(size_t index = 0) {
    try {
      return this->getObject(index, CTD_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isContactCommunicationInformation(size_t index = 0) {
    try {
      return this->getObject(index, CTD_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Preferred Method of Contact
   */

  CWE* getCTD_6(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CTD_6);
  }

  CWE* getPreferredMethodofContact(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CTD_6);
  }

  bool isCTD_6(size_t index = 0) {
    try {
      return this->getObject(index, CTD_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPreferredMethodofContact(size_t index = 0) {
    try {
      return this->getObject(index, CTD_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Contact Identifiers
   */

  PLN* getCTD_7(size_t index = 0) {
    return (PLN*)this->getObjectSafe(index, CTD_7);
  }

  PLN* getContactIdentifiers(size_t index = 0) {
    return (PLN*)this->getObjectSafe(index, CTD_7);
  }

  bool isCTD_7(size_t index = 0) {
    try {
      return this->getObject(index, CTD_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isContactIdentifiers(size_t index = 0) {
    try {
      return this->getObject(index, CTD_7) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of CTD */

} /* End of namespace HL7_29 */
#endif /* __CTD_v29_H__ */
