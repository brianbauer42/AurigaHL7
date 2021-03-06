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


#ifndef __SCD_v29_H__
#define __SCD_v29_H__

#include "../../common/Util.h"
#include "../datatype/CNE.h"
#include "../datatype/CQ.h"
#include "../datatype/CWE.h"
#include "../datatype/CX.h"
#include "../datatype/DTM.h"
#include "../datatype/NM.h"
#include "../datatype/SN.h"
#include "../datatype/TM.h"
#include "../datatype/XCN.h"

namespace HL7_29 {

/* SCD */
class SCD : public HL7Segment {
 public:
  SCD() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    SCD_1,
    SCD_2,
    SCD_3,
    SCD_4,
    SCD_5,
    SCD_6,
    SCD_7,
    SCD_8,
    SCD_9,
    SCD_10,
    SCD_11,
    SCD_12,
    SCD_13,
    SCD_14,
    SCD_15,
    SCD_16,
    SCD_17,
    SCD_18,
    SCD_19,
    SCD_20,
    SCD_21,
    SCD_22,
    SCD_23,
    SCD_24,
    SCD_25,
    SCD_26,
    SCD_27,
    SCD_28,
    SCD_29,
    SCD_30,
    SCD_31,
    SCD_32,
    SCD_33,
    SCD_34,
    SCD_35,
    SCD_36,
    SCD_37,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "SCD"; }
  SCD* create() const { return new SCD(); }

 private:
  void init() {
    setName("SCD");
    /* Init members */
    addObject<TM>(SCD_1, "SCD.1", HL7::initialized, HL7::repetition_off);
    addObject<NM>(SCD_2, "SCD.2", HL7::initialized, HL7::repetition_off);
    addObject<CQ>(SCD_3, "SCD.3", HL7::initialized, HL7::repetition_off);
    addObject<CQ>(SCD_4, "SCD.4", HL7::initialized, HL7::repetition_off);
    addObject<NM>(SCD_5, "SCD.5", HL7::initialized, HL7::repetition_off);
    addObject<CQ>(SCD_6, "SCD.6", HL7::initialized, HL7::repetition_off);
    addObject<CQ>(SCD_7, "SCD.7", HL7::initialized, HL7::repetition_off);
    addObject<CQ>(SCD_8, "SCD.8", HL7::initialized, HL7::repetition_off);
    addObject<CQ>(SCD_9, "SCD.9", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(SCD_10, "SCD.10", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(SCD_11, "SCD.11", HL7::initialized, HL7::repetition_off);
    addObject<CQ>(SCD_12, "SCD.12", HL7::initialized, HL7::repetition_off);
    addObject<CQ>(SCD_13, "SCD.13", HL7::initialized, HL7::repetition_off);
    addObject<CQ>(SCD_14, "SCD.14", HL7::initialized, HL7::repetition_off);
    addObject<CQ>(SCD_15, "SCD.15", HL7::initialized, HL7::repetition_off);
    addObject<TM>(SCD_16, "SCD.16", HL7::initialized, HL7::repetition_off);
    addObject<CQ>(SCD_17, "SCD.17", HL7::initialized, HL7::repetition_off);
    addObject<CQ>(SCD_18, "SCD.18", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(SCD_19, "SCD.19", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(SCD_20, "SCD.20", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(SCD_21, "SCD.21", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(SCD_22, "SCD.22", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(SCD_23, "SCD.23", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(SCD_24, "SCD.24", HL7::initialized, HL7::repetition_off);
    addObject<XCN>(SCD_25, "SCD.25", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(SCD_26, "SCD.26", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(SCD_27, "SCD.27", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(SCD_28, "SCD.28", HL7::initialized, HL7::repetition_off);
    addObject<CQ>(SCD_29, "SCD.29", HL7::initialized, HL7::repetition_off);
    addObject<CQ>(SCD_30, "SCD.30", HL7::initialized, HL7::repetition_off);
    addObject<CQ>(SCD_31, "SCD.31", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(SCD_32, "SCD.32", HL7::initialized, HL7::repetition_off);
    addObject<CX>(SCD_33, "SCD.33", HL7::initialized, HL7::repetition_off);
    addObject<XCN>(SCD_34, "SCD.34", HL7::initialized, HL7::repetition_off);
    addObject<SN>(SCD_35, "SCD.35", HL7::initialized, HL7::repetition_off);
    addObject<CQ>(SCD_36, "SCD.36", HL7::initialized, HL7::repetition_off);
    addObject<CQ>(SCD_37, "SCD.37", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Cycle Start Time
   */

  TM* getSCD_1(size_t index = 0) {
    return (TM*)this->getObjectSafe(index, SCD_1);
  }

  TM* getCycleStartTime(size_t index = 0) {
    return (TM*)this->getObjectSafe(index, SCD_1);
  }

  bool isSCD_1(size_t index = 0) {
    try {
      return this->getObject(index, SCD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCycleStartTime(size_t index = 0) {
    try {
      return this->getObject(index, SCD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Cycle Count
   */

  NM* getSCD_2(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, SCD_2);
  }

  NM* getCycleCount(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, SCD_2);
  }

  bool isSCD_2(size_t index = 0) {
    try {
      return this->getObject(index, SCD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCycleCount(size_t index = 0) {
    try {
      return this->getObject(index, SCD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Temp Max
   */

  CQ* getSCD_3(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, SCD_3);
  }

  CQ* getTempMax(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, SCD_3);
  }

  bool isSCD_3(size_t index = 0) {
    try {
      return this->getObject(index, SCD_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTempMax(size_t index = 0) {
    try {
      return this->getObject(index, SCD_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Temp Min
   */

  CQ* getSCD_4(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, SCD_4);
  }

  CQ* getTempMin(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, SCD_4);
  }

  bool isSCD_4(size_t index = 0) {
    try {
      return this->getObject(index, SCD_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTempMin(size_t index = 0) {
    try {
      return this->getObject(index, SCD_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Load Number
   */

  NM* getSCD_5(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, SCD_5);
  }

  NM* getLoadNumber(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, SCD_5);
  }

  bool isSCD_5(size_t index = 0) {
    try {
      return this->getObject(index, SCD_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLoadNumber(size_t index = 0) {
    try {
      return this->getObject(index, SCD_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Condition Time
   */

  CQ* getSCD_6(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, SCD_6);
  }

  CQ* getConditionTime(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, SCD_6);
  }

  bool isSCD_6(size_t index = 0) {
    try {
      return this->getObject(index, SCD_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isConditionTime(size_t index = 0) {
    try {
      return this->getObject(index, SCD_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Sterilize Time
   */

  CQ* getSCD_7(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, SCD_7);
  }

  CQ* getSterilizeTime(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, SCD_7);
  }

  bool isSCD_7(size_t index = 0) {
    try {
      return this->getObject(index, SCD_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSterilizeTime(size_t index = 0) {
    try {
      return this->getObject(index, SCD_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Exhaust Time
   */

  CQ* getSCD_8(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, SCD_8);
  }

  CQ* getExhaustTime(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, SCD_8);
  }

  bool isSCD_8(size_t index = 0) {
    try {
      return this->getObject(index, SCD_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isExhaustTime(size_t index = 0) {
    try {
      return this->getObject(index, SCD_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Total Cycle Time
   */

  CQ* getSCD_9(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, SCD_9);
  }

  CQ* getTotalCycleTime(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, SCD_9);
  }

  bool isSCD_9(size_t index = 0) {
    try {
      return this->getObject(index, SCD_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTotalCycleTime(size_t index = 0) {
    try {
      return this->getObject(index, SCD_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Device Status
   */

  CWE* getSCD_10(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SCD_10);
  }

  CWE* getDeviceStatus(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SCD_10);
  }

  bool isSCD_10(size_t index = 0) {
    try {
      return this->getObject(index, SCD_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDeviceStatus(size_t index = 0) {
    try {
      return this->getObject(index, SCD_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Cycle Start Date/Time
   */

  DTM* getSCD_11(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, SCD_11);
  }

  DTM* getCycleStartDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, SCD_11);
  }

  bool isSCD_11(size_t index = 0) {
    try {
      return this->getObject(index, SCD_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCycleStartDateTime(size_t index = 0) {
    try {
      return this->getObject(index, SCD_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Dry Time
   */

  CQ* getSCD_12(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, SCD_12);
  }

  CQ* getDryTime(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, SCD_12);
  }

  bool isSCD_12(size_t index = 0) {
    try {
      return this->getObject(index, SCD_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDryTime(size_t index = 0) {
    try {
      return this->getObject(index, SCD_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Leak Rate
   */

  CQ* getSCD_13(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, SCD_13);
  }

  CQ* getLeakRate(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, SCD_13);
  }

  bool isSCD_13(size_t index = 0) {
    try {
      return this->getObject(index, SCD_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLeakRate(size_t index = 0) {
    try {
      return this->getObject(index, SCD_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Control Temperature
   */

  CQ* getSCD_14(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, SCD_14);
  }

  CQ* getControlTemperature(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, SCD_14);
  }

  bool isSCD_14(size_t index = 0) {
    try {
      return this->getObject(index, SCD_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isControlTemperature(size_t index = 0) {
    try {
      return this->getObject(index, SCD_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Sterilizer Temperature
   */

  CQ* getSCD_15(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, SCD_15);
  }

  CQ* getSterilizerTemperature(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, SCD_15);
  }

  bool isSCD_15(size_t index = 0) {
    try {
      return this->getObject(index, SCD_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSterilizerTemperature(size_t index = 0) {
    try {
      return this->getObject(index, SCD_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Cycle Complete Time
   */

  TM* getSCD_16(size_t index = 0) {
    return (TM*)this->getObjectSafe(index, SCD_16);
  }

  TM* getCycleCompleteTime(size_t index = 0) {
    return (TM*)this->getObjectSafe(index, SCD_16);
  }

  bool isSCD_16(size_t index = 0) {
    try {
      return this->getObject(index, SCD_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCycleCompleteTime(size_t index = 0) {
    try {
      return this->getObject(index, SCD_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Under Temperature
   */

  CQ* getSCD_17(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, SCD_17);
  }

  CQ* getUnderTemperature(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, SCD_17);
  }

  bool isSCD_17(size_t index = 0) {
    try {
      return this->getObject(index, SCD_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isUnderTemperature(size_t index = 0) {
    try {
      return this->getObject(index, SCD_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Over Temperature
   */

  CQ* getSCD_18(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, SCD_18);
  }

  CQ* getOverTemperature(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, SCD_18);
  }

  bool isSCD_18(size_t index = 0) {
    try {
      return this->getObject(index, SCD_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOverTemperature(size_t index = 0) {
    try {
      return this->getObject(index, SCD_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Abort Cycle
   */

  CNE* getSCD_19(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, SCD_19);
  }

  CNE* getAbortCycle(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, SCD_19);
  }

  bool isSCD_19(size_t index = 0) {
    try {
      return this->getObject(index, SCD_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAbortCycle(size_t index = 0) {
    try {
      return this->getObject(index, SCD_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Alarm
   */

  CNE* getSCD_20(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, SCD_20);
  }

  CNE* getAlarm(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, SCD_20);
  }

  bool isSCD_20(size_t index = 0) {
    try {
      return this->getObject(index, SCD_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlarm(size_t index = 0) {
    try {
      return this->getObject(index, SCD_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Long in Charge Phase
   */

  CNE* getSCD_21(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, SCD_21);
  }

  CNE* getLonginChargePhase(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, SCD_21);
  }

  bool isSCD_21(size_t index = 0) {
    try {
      return this->getObject(index, SCD_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLonginChargePhase(size_t index = 0) {
    try {
      return this->getObject(index, SCD_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Long in Exhaust Phase
   */

  CNE* getSCD_22(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, SCD_22);
  }

  CNE* getLonginExhaustPhase(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, SCD_22);
  }

  bool isSCD_22(size_t index = 0) {
    try {
      return this->getObject(index, SCD_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLonginExhaustPhase(size_t index = 0) {
    try {
      return this->getObject(index, SCD_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Long in Fast Exhaust Phase
   */

  CNE* getSCD_23(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, SCD_23);
  }

  CNE* getLonginFastExhaustPhase(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, SCD_23);
  }

  bool isSCD_23(size_t index = 0) {
    try {
      return this->getObject(index, SCD_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLonginFastExhaustPhase(size_t index = 0) {
    try {
      return this->getObject(index, SCD_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Reset
   */

  CNE* getSCD_24(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, SCD_24);
  }

  CNE* getReset(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, SCD_24);
  }

  bool isSCD_24(size_t index = 0) {
    try {
      return this->getObject(index, SCD_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isReset(size_t index = 0) {
    try {
      return this->getObject(index, SCD_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Operator - Unload
   */

  XCN* getSCD_25(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, SCD_25);
  }

  XCN* getOperatorUnload(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, SCD_25);
  }

  bool isSCD_25(size_t index = 0) {
    try {
      return this->getObject(index, SCD_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOperatorUnload(size_t index = 0) {
    try {
      return this->getObject(index, SCD_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Door Open
   */

  CNE* getSCD_26(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, SCD_26);
  }

  CNE* getDoorOpen(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, SCD_26);
  }

  bool isSCD_26(size_t index = 0) {
    try {
      return this->getObject(index, SCD_26) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDoorOpen(size_t index = 0) {
    try {
      return this->getObject(index, SCD_26) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Reading Failure
   */

  CNE* getSCD_27(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, SCD_27);
  }

  CNE* getReadingFailure(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, SCD_27);
  }

  bool isSCD_27(size_t index = 0) {
    try {
      return this->getObject(index, SCD_27) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isReadingFailure(size_t index = 0) {
    try {
      return this->getObject(index, SCD_27) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Cycle Type
   */

  CWE* getSCD_28(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SCD_28);
  }

  CWE* getCycleType(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SCD_28);
  }

  bool isSCD_28(size_t index = 0) {
    try {
      return this->getObject(index, SCD_28) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCycleType(size_t index = 0) {
    try {
      return this->getObject(index, SCD_28) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Thermal Rinse Time
   */

  CQ* getSCD_29(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, SCD_29);
  }

  CQ* getThermalRinseTime(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, SCD_29);
  }

  bool isSCD_29(size_t index = 0) {
    try {
      return this->getObject(index, SCD_29) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isThermalRinseTime(size_t index = 0) {
    try {
      return this->getObject(index, SCD_29) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Wash Time
   */

  CQ* getSCD_30(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, SCD_30);
  }

  CQ* getWashTime(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, SCD_30);
  }

  bool isSCD_30(size_t index = 0) {
    try {
      return this->getObject(index, SCD_30) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isWashTime(size_t index = 0) {
    try {
      return this->getObject(index, SCD_30) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Injection Rate
   */

  CQ* getSCD_31(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, SCD_31);
  }

  CQ* getInjectionRate(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, SCD_31);
  }

  bool isSCD_31(size_t index = 0) {
    try {
      return this->getObject(index, SCD_31) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInjectionRate(size_t index = 0) {
    try {
      return this->getObject(index, SCD_31) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Procedure Code
   */

  CNE* getSCD_32(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, SCD_32);
  }

  CNE* getProcedureCode(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, SCD_32);
  }

  bool isSCD_32(size_t index = 0) {
    try {
      return this->getObject(index, SCD_32) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProcedureCode(size_t index = 0) {
    try {
      return this->getObject(index, SCD_32) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Patient Identifier List
   */

  CX* getSCD_33(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, SCD_33);
  }

  CX* getPatientIdentifierList(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, SCD_33);
  }

  bool isSCD_33(size_t index = 0) {
    try {
      return this->getObject(index, SCD_33) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPatientIdentifierList(size_t index = 0) {
    try {
      return this->getObject(index, SCD_33) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Attending Doctor
   */

  XCN* getSCD_34(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, SCD_34);
  }

  XCN* getAttendingDoctor(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, SCD_34);
  }

  bool isSCD_34(size_t index = 0) {
    try {
      return this->getObject(index, SCD_34) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAttendingDoctor(size_t index = 0) {
    try {
      return this->getObject(index, SCD_34) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Dilution Factor
   */

  SN* getSCD_35(size_t index = 0) {
    return (SN*)this->getObjectSafe(index, SCD_35);
  }

  SN* getDilutionFactor(size_t index = 0) {
    return (SN*)this->getObjectSafe(index, SCD_35);
  }

  bool isSCD_35(size_t index = 0) {
    try {
      return this->getObject(index, SCD_35) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDilutionFactor(size_t index = 0) {
    try {
      return this->getObject(index, SCD_35) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Fill Time
   */

  CQ* getSCD_36(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, SCD_36);
  }

  CQ* getFillTime(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, SCD_36);
  }

  bool isSCD_36(size_t index = 0) {
    try {
      return this->getObject(index, SCD_36) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFillTime(size_t index = 0) {
    try {
      return this->getObject(index, SCD_36) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Inlet Temperature
   */

  CQ* getSCD_37(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, SCD_37);
  }

  CQ* getInletTemperature(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, SCD_37);
  }

  bool isSCD_37(size_t index = 0) {
    try {
      return this->getObject(index, SCD_37) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInletTemperature(size_t index = 0) {
    try {
      return this->getObject(index, SCD_37) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of SCD */

} /* End of namespace HL7_29 */
#endif /* __SCD_v29_H__ */
