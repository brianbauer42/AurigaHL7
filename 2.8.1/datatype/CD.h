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


#ifndef __CD_v281_H__
#define __CD_v281_H__

#include "../../common/Util.h"
#include "../datatype/CCP.h"
#include "../datatype/CSU.h"
#include "../datatype/NM.h"
#include "../datatype/NR.h"
#include "../datatype/WVI.h"
#include "../datatype/WVS.h"

namespace HL7_281 {

/* Channel Definition */
class CD : public HL7Data {
 public:
  CD() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    CD_1, /* Channel Identifier */
    CD_2, /* Waveform Source */
    CD_3, /* Channel Sensitivity and Units */
    CD_4, /* Channel Calibration Parameters */
    CD_5, /* Channel Sampling Frequency */
    CD_6, /* Minimum and Maximum Data Values */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "CD"; }
  CD *create() const { return new CD(); }

 private:
  void init() {
    setName("CD");
    /* Init members */
    addObject<WVI>(CD_1, "CD.1", HL7::initialized, HL7::repetition_off);
    addObject<WVS>(CD_2, "CD.2", HL7::initialized, HL7::repetition_off);
    addObject<CSU>(CD_3, "CD.3", HL7::initialized, HL7::repetition_off);
    addObject<CCP>(CD_4, "CD.4", HL7::initialized, HL7::repetition_off);
    addObject<NM>(CD_5, "CD.5", HL7::initialized, HL7::repetition_off);
    addObject<NR>(CD_6, "CD.6", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Channel Identifier
   */
  WVI *getCD_1(size_t index = 0) {
    return (WVI *)this->getObjectSafe(index, CD_1);
  }

  WVI *getChannelIdentifier(size_t index = 0) {
    return (WVI *)this->getObjectSafe(index, CD_1);
  }

  bool isCD_1(size_t index = 0) {
    try {
      return this->getObject(index, CD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isChannelIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, CD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Waveform Source
   */
  WVS *getCD_2(size_t index = 0) {
    return (WVS *)this->getObjectSafe(index, CD_2);
  }

  WVS *getWaveformSource(size_t index = 0) {
    return (WVS *)this->getObjectSafe(index, CD_2);
  }

  bool isCD_2(size_t index = 0) {
    try {
      return this->getObject(index, CD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isWaveformSource(size_t index = 0) {
    try {
      return this->getObject(index, CD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Channel Sensitivity and Units
   */
  CSU *getCD_3(size_t index = 0) {
    return (CSU *)this->getObjectSafe(index, CD_3);
  }

  CSU *getChannelSensitivityandUnits(size_t index = 0) {
    return (CSU *)this->getObjectSafe(index, CD_3);
  }

  bool isCD_3(size_t index = 0) {
    try {
      return this->getObject(index, CD_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isChannelSensitivityandUnits(size_t index = 0) {
    try {
      return this->getObject(index, CD_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Channel Calibration Parameters
   */
  CCP *getCD_4(size_t index = 0) {
    return (CCP *)this->getObjectSafe(index, CD_4);
  }

  CCP *getChannelCalibrationParameters(size_t index = 0) {
    return (CCP *)this->getObjectSafe(index, CD_4);
  }

  bool isCD_4(size_t index = 0) {
    try {
      return this->getObject(index, CD_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isChannelCalibrationParameters(size_t index = 0) {
    try {
      return this->getObject(index, CD_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Channel Sampling Frequency
   */
  NM *getCD_5(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, CD_5);
  }

  NM *getChannelSamplingFrequency(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, CD_5);
  }

  bool isCD_5(size_t index = 0) {
    try {
      return this->getObject(index, CD_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isChannelSamplingFrequency(size_t index = 0) {
    try {
      return this->getObject(index, CD_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Minimum and Maximum Data Values
   */
  NR *getCD_6(size_t index = 0) {
    return (NR *)this->getObjectSafe(index, CD_6);
  }

  NR *getMinimumandMaximumDataValues(size_t index = 0) {
    return (NR *)this->getObjectSafe(index, CD_6);
  }

  bool isCD_6(size_t index = 0) {
    try {
      return this->getObject(index, CD_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMinimumandMaximumDataValues(size_t index = 0) {
    try {
      return this->getObject(index, CD_6) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End CD */

} /* End HL7_281 */

#endif /* __CD_v281_H__ */
