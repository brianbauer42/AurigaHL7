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


#ifndef __IPR_v29_H__
#define __IPR_v29_H__

#include "../../common/Util.h"
#include "../datatype/CP.h"
#include "../datatype/CWE.h"
#include "../datatype/DTM.h"
#include "../datatype/EI.h"
#include "../datatype/ST.h"

namespace HL7_29 {

/* IPR */
class IPR : public HL7Segment {
 public:
  IPR() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    IPR_1,
    IPR_2,
    IPR_3,
    IPR_4,
    IPR_5,
    IPR_6,
    IPR_7,
    IPR_8,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "IPR"; }
  IPR* create() const { return new IPR(); }

 private:
  void init() {
    setName("IPR");
    /* Init members */
    addObject<EI>(IPR_1, "IPR.1", HL7::initialized, HL7::repetition_off);
    addObject<EI>(IPR_2, "IPR.2", HL7::initialized, HL7::repetition_off);
    addObject<EI>(IPR_3, "IPR.3", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(IPR_4, "IPR.4", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(IPR_5, "IPR.5", HL7::initialized, HL7::repetition_off);
    addObject<CP>(IPR_6, "IPR.6", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(IPR_7, "IPR.7", HL7::initialized, HL7::repetition_off);
    addObject<ST>(IPR_8, "IPR.8", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * IPR Identifier
   */

  EI* getIPR_1(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, IPR_1);
  }

  EI* getIPRIdentifier(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, IPR_1);
  }

  bool isIPR_1(size_t index = 0) {
    try {
      return this->getObject(index, IPR_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIPRIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, IPR_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Provider Cross Reference Identifier
   */

  EI* getIPR_2(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, IPR_2);
  }

  EI* getProviderCrossReferenceIdentifier(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, IPR_2);
  }

  bool isIPR_2(size_t index = 0) {
    try {
      return this->getObject(index, IPR_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProviderCrossReferenceIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, IPR_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Payer Cross Reference Identifier
   */

  EI* getIPR_3(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, IPR_3);
  }

  EI* getPayerCrossReferenceIdentifier(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, IPR_3);
  }

  bool isIPR_3(size_t index = 0) {
    try {
      return this->getObject(index, IPR_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPayerCrossReferenceIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, IPR_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * IPR Status
   */

  CWE* getIPR_4(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IPR_4);
  }

  CWE* getIPRStatus(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IPR_4);
  }

  bool isIPR_4(size_t index = 0) {
    try {
      return this->getObject(index, IPR_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIPRStatus(size_t index = 0) {
    try {
      return this->getObject(index, IPR_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * IPR Date/Time
   */

  DTM* getIPR_5(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, IPR_5);
  }

  DTM* getIPRDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, IPR_5);
  }

  bool isIPR_5(size_t index = 0) {
    try {
      return this->getObject(index, IPR_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIPRDateTime(size_t index = 0) {
    try {
      return this->getObject(index, IPR_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Adjudicated/Paid Amount
   */

  CP* getIPR_6(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, IPR_6);
  }

  CP* getAdjudicatedPaidAmount(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, IPR_6);
  }

  bool isIPR_6(size_t index = 0) {
    try {
      return this->getObject(index, IPR_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAdjudicatedPaidAmount(size_t index = 0) {
    try {
      return this->getObject(index, IPR_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Expected Payment Date/Time
   */

  DTM* getIPR_7(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, IPR_7);
  }

  DTM* getExpectedPaymentDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, IPR_7);
  }

  bool isIPR_7(size_t index = 0) {
    try {
      return this->getObject(index, IPR_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isExpectedPaymentDateTime(size_t index = 0) {
    try {
      return this->getObject(index, IPR_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * IPR Checksum
   */

  ST* getIPR_8(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IPR_8);
  }

  ST* getIPRChecksum(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IPR_8);
  }

  bool isIPR_8(size_t index = 0) {
    try {
      return this->getObject(index, IPR_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIPRChecksum(size_t index = 0) {
    try {
      return this->getObject(index, IPR_8) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of IPR */

} /* End of namespace HL7_29 */
#endif /* __IPR_v29_H__ */
