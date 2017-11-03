// file automatically generated, do not modify
// cisst version: 1.0.8
// source file: /home/davincic2/catkin_ws/src/cisst-saw/sawIntuitiveResearchKit/components/code/mtsIntuitiveResearchKitArmTypes.cdg

#pragma once
#ifndef _sawIntuitiveResearchKit_mtsIntuitiveResearchKitArmTypes_h
#define _sawIntuitiveResearchKit_mtsIntuitiveResearchKitArmTypes_h

#include <cisstCommon/cmnDataFunctions.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#if CISST_HAS_JSON
#include <cisstCommon/cmnDataFunctionsJSON.h>
#endif // CISST_HAS_JSON

/* source line: 1 */
/* source line: 1 */

// mts-proxy set to true
#include <cisstCommon/cmnClassServices.h>
#include <cisstCommon/cmnClassRegisterMacros.h>
#include <cisstMultiTask/mtsGenericObjectProxy.h>


/* source line: 1 */
/* source line: 1 */
class  mtsIntuitiveResearchKitArmTypes
{
 /* default constructors and destructors. */
 public:
    mtsIntuitiveResearchKitArmTypes(void);
    mtsIntuitiveResearchKitArmTypes(const mtsIntuitiveResearchKitArmTypes & other);
    ~mtsIntuitiveResearchKitArmTypes();

/* source line: 3 */
public:
    enum RobotStateType {DVRK_UNINITIALIZED, DVRK_HOMING_BIAS_ENCODER, DVRK_HOMING_POWERING, DVRK_HOMING_CALIBRATING_ARM, DVRK_HOMING_CALIBRATING_ROLL, DVRK_ARM_CALIBRATED, DVRK_CHANGING_COUPLING, DVRK_ENGAGING_ADAPTER, DVRK_ADAPTER_ENGAGED, DVRK_ENGAGING_TOOL, DVRK_READY, DVRK_POSITION_JOINT, DVRK_POSITION_GOAL_JOINT, DVRK_POSITION_CARTESIAN, DVRK_POSITION_GOAL_CARTESIAN, DVRK_CONSTRAINT_CONTROLLER_CARTESIAN, DVRK_EFFORT_CARTESIAN, DVRK_EFFORT_JOINT, DVRK_GRAVITY_COMPENSATION, DVRK_MANUAL, DVRK_CLUTCH };
    static std::string RobotStateTypeToString(const RobotStateType & value) throw (std::runtime_error);
    static RobotStateType RobotStateTypeFromString(const std::string & value) throw (std::runtime_error);
    static const std::vector<int> & RobotStateTypeVectorInt(void);
    static const std::vector<std::string> & RobotStateTypeVectorString(void);
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const mtsIntuitiveResearchKitArmTypes & source);
    void SerializeBinary(std::ostream & outputStream) const throw (std::runtime_error);
    void DeSerializeBinary(std::istream & inputStream, const cmnDataFormat & localFormat, const cmnDataFormat & remoteFormat) throw (std::runtime_error);
    void SerializeText(std::ostream & outputStream, const char delimiter = ',') const throw (std::runtime_error);
    std::string SerializeDescription(const char delimiter = ',', const std::string & userDescription = "") const;
    void DeSerializeText(std::istream & inputStream, const char delimiter = ',') throw (std::runtime_error);
    std::string HumanReadable(void) const;
    bool ScalarNumberIsFixed(void) const;
    size_t ScalarNumber(void) const;
    double Scalar(const size_t index) const throw (std::out_of_range);
    std::string ScalarDescription(const size_t index, const std::string & userDescription = "") const throw (std::out_of_range);
#if CISST_HAS_JSON
    void SerializeTextJSON(Json::Value & jsonValue) const;
    void DeSerializeTextJSON(const Json::Value & jsonValue) throw (std::runtime_error);
#endif // CISST_HAS_JSON

}; // mtsIntuitiveResearchKitArmTypes

// mts-proxy set to true
typedef mtsGenericObjectProxy<mtsIntuitiveResearchKitArmTypes> mtsIntuitiveResearchKitArmTypesProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(mtsIntuitiveResearchKitArmTypesProxy);

/* default functions */
void  cmnSerializeRaw(std::ostream & outputStream, const mtsIntuitiveResearchKitArmTypes & object);
void  cmnDeSerializeRaw(std::istream & inputStream, mtsIntuitiveResearchKitArmTypes & placeHolder);
/* data functions */
template <> class cmnData<mtsIntuitiveResearchKitArmTypes > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef mtsIntuitiveResearchKitArmTypes DataType;
    static void Copy(DataType & data, const DataType & source) {
        data.Copy(source);
    }
    static std::string SerializeDescription(const DataType & data, const char delimiter, const std::string & userDescription) {
        return data.SerializeDescription(delimiter, userDescription);
    }
    static void SerializeBinary(const DataType & data, std::ostream & outputStream) throw (std::runtime_error) {
        data.SerializeBinary(outputStream);
    }
    static void DeSerializeBinary(DataType & data, std::istream & inputStream, const cmnDataFormat & localFormat, const cmnDataFormat & remoteFormat) throw (std::runtime_error) {
        data.DeSerializeBinary(inputStream, localFormat, remoteFormat);
    }
    static void SerializeText(const DataType & data, std::ostream & outputStream, const char delimiter = ',') throw (std::runtime_error) {
        data.SerializeText(outputStream, delimiter);
    }
    static void DeSerializeText(DataType & data, std::istream & inputStream, const char delimiter = ',') throw (std::runtime_error) {
        data.DeSerializeText(inputStream, delimiter);
    }
    static std::string HumanReadable(const DataType & data) {
        return data.HumanReadable();
    }
    static bool ScalarNumberIsFixed(const DataType & data) {
        return data.ScalarNumberIsFixed();
    }
    static size_t ScalarNumber(const DataType & data) {
        return data.ScalarNumber();
    }
    static std::string ScalarDescription(const DataType & data, const size_t index, const std::string & userDescription = "") throw (std::out_of_range) {
        return data.ScalarDescription(index, userDescription);
    }
    static double Scalar(const DataType & data, const size_t index) throw (std::out_of_range) {
        return data.Scalar(index);
    }
};
inline std::ostream & operator << (std::ostream & outputStream, const mtsIntuitiveResearchKitArmTypes & data) {
    outputStream << cmnData<mtsIntuitiveResearchKitArmTypes >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void  cmnDataJSON<mtsIntuitiveResearchKitArmTypes >::SerializeText(const mtsIntuitiveResearchKitArmTypes & data, Json::Value & jsonValue);
template <> void  cmnDataJSON<mtsIntuitiveResearchKitArmTypes >::DeSerializeText(mtsIntuitiveResearchKitArmTypes & data, const Json::Value & jsonValue) throw (std::runtime_error);
#endif // CISST_HAS_JSON
std::string  cmnDataHumanReadable_mtsIntuitiveResearchKitArmTypes_RobotStateType(const mtsIntuitiveResearchKitArmTypes::RobotStateType & data);
CMN_DATA_SPECIALIZATION_FOR_ENUM_USER_HUMAN_READABLE(mtsIntuitiveResearchKitArmTypes::RobotStateType, int, cmnDataHumanReadable_mtsIntuitiveResearchKitArmTypes_RobotStateType);
#if CISST_HAS_JSON
  CMN_DECLARE_DATA_FUNCTIONS_JSON_FOR_ENUM(mtsIntuitiveResearchKitArmTypes::RobotStateType);
#endif // CISST_HAS_JSON


#endif // _sawIntuitiveResearchKit_mtsIntuitiveResearchKitArmTypes_h
