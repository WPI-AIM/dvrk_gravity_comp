// file automatically generated, do not modify
// cisst version: 1.0.8
// source file: /home/davincic2/catkin_ws/src/cisst-saw/sawIntuitiveResearchKit/components/code/mtsIntuitiveResearchKitArmTypes.cdg

#include <sawIntuitiveResearchKit/mtsIntuitiveResearchKitArmTypes.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>

/* source line: 1 */
/* source line: 1 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(mtsIntuitiveResearchKitArmTypesProxy);

mtsIntuitiveResearchKitArmTypes::mtsIntuitiveResearchKitArmTypes(void)
{}

mtsIntuitiveResearchKitArmTypes::mtsIntuitiveResearchKitArmTypes(const mtsIntuitiveResearchKitArmTypes & CMN_UNUSED(other))
{}

mtsIntuitiveResearchKitArmTypes::~mtsIntuitiveResearchKitArmTypes(void){}


void mtsIntuitiveResearchKitArmTypes::SerializeRaw(std::ostream & CMN_UNUSED(outputStream)) const
{
}


void mtsIntuitiveResearchKitArmTypes::DeSerializeRaw(std::istream & CMN_UNUSED(inputStream))
{
}


void mtsIntuitiveResearchKitArmTypes::ToStream(std::ostream & outputStream) const
{
    outputStream << this->HumanReadable();
}

void mtsIntuitiveResearchKitArmTypes::ToStreamRaw(std::ostream & outputStream, const char delimiter, bool headerOnly, const std::string & headerPrefix) const
{
    if (headerOnly) {
        outputStream << cmnData<mtsIntuitiveResearchKitArmTypes >::SerializeDescription(*this, delimiter, headerPrefix);
    } else {
        cmnData<mtsIntuitiveResearchKitArmTypes >::SerializeText(*this, outputStream, delimiter);
    }
}
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const mtsIntuitiveResearchKitArmTypes & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, mtsIntuitiveResearchKitArmTypes & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void mtsIntuitiveResearchKitArmTypes::Copy(const mtsIntuitiveResearchKitArmTypes & CMN_UNUSED(source)) {
}
void mtsIntuitiveResearchKitArmTypes::SerializeBinary(std::ostream & CMN_UNUSED(outputStream)) const throw (std::runtime_error) {
}
void mtsIntuitiveResearchKitArmTypes::DeSerializeBinary(std::istream & CMN_UNUSED(inputStream),
                                            const cmnDataFormat & CMN_UNUSED(localFormat),
                                            const cmnDataFormat & CMN_UNUSED(remoteFormat)) throw (std::runtime_error) {
}
void mtsIntuitiveResearchKitArmTypes::SerializeText(std::ostream & CMN_UNUSED(outputStream), const char CMN_UNUSED(delimiter)) const throw (std::runtime_error) {
}
std::string mtsIntuitiveResearchKitArmTypes::SerializeDescription(const char CMN_UNUSED(delimiter), const std::string & CMN_UNUSED(userDescription)) const {
    std::stringstream description;
    return description.str();
}
void mtsIntuitiveResearchKitArmTypes::DeSerializeText(std::istream & CMN_UNUSED(inputStream),
                                          const char CMN_UNUSED(delimiter)) throw (std::runtime_error) {
}
std::string mtsIntuitiveResearchKitArmTypes::HumanReadable(void) const {
    std::stringstream description;
    description << "mtsIntuitiveResearchKitArmTypes" << std::endl;
    return description.str();
}
bool mtsIntuitiveResearchKitArmTypes::ScalarNumberIsFixed(void) const {
    return true
    ;
}
size_t mtsIntuitiveResearchKitArmTypes::ScalarNumber(void) const {
    return 0
    ;
}
std::string mtsIntuitiveResearchKitArmTypes::ScalarDescription(const size_t CMN_UNUSED(index), const std::string & userDescription) const throw (std::out_of_range) {
    std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    cmnThrow(std::out_of_range("cmnDataScalarDescription: mtsIntuitiveResearchKitArmTypes index out of range"));
    return "";
}
double mtsIntuitiveResearchKitArmTypes::Scalar(const size_t CMN_UNUSED(index)) const throw (std::out_of_range) {
    cmnThrow(std::out_of_range("cmnDataScalar: mtsIntuitiveResearchKitArmTypes index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<mtsIntuitiveResearchKitArmTypes >::SerializeText(const mtsIntuitiveResearchKitArmTypes & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void mtsIntuitiveResearchKitArmTypes::SerializeTextJSON(Json::Value & CMN_UNUSED(jsonValue)) const {
}
template<>
void cmnDataJSON<mtsIntuitiveResearchKitArmTypes >::DeSerializeText(mtsIntuitiveResearchKitArmTypes & data, const Json::Value & jsonValue) throw (std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void mtsIntuitiveResearchKitArmTypes::DeSerializeTextJSON(const Json::Value & CMN_UNUSED(jsonValue)) throw (std::runtime_error) {
}
#endif // CISST_HAS_JSON
std::string cmnDataHumanReadable_mtsIntuitiveResearchKitArmTypes_RobotStateType(const mtsIntuitiveResearchKitArmTypes::RobotStateType & data) {
    switch (data) {
        case mtsIntuitiveResearchKitArmTypes::DVRK_UNINITIALIZED:
            return "Uninitialized";
            break;
        case mtsIntuitiveResearchKitArmTypes::DVRK_HOMING_BIAS_ENCODER:
            return "Bias encoders from potentiometers";
            break;
        case mtsIntuitiveResearchKitArmTypes::DVRK_HOMING_POWERING:
            return "Powering";
            break;
        case mtsIntuitiveResearchKitArmTypes::DVRK_HOMING_CALIBRATING_ARM:
            return "Calibrating arm";
            break;
        case mtsIntuitiveResearchKitArmTypes::DVRK_HOMING_CALIBRATING_ROLL:
            return "Calibrating gripper roll";
            break;
        case mtsIntuitiveResearchKitArmTypes::DVRK_ARM_CALIBRATED:
            return "DVRK calibrated";
            break;
        case mtsIntuitiveResearchKitArmTypes::DVRK_CHANGING_COUPLING:
            return "Changing actuator to joint coupling for PSM";
            break;
        case mtsIntuitiveResearchKitArmTypes::DVRK_ENGAGING_ADAPTER:
            return "Engaging adapter for PSM";
            break;
        case mtsIntuitiveResearchKitArmTypes::DVRK_ADAPTER_ENGAGED:
            return "Adapter engaged for PSM";
            break;
        case mtsIntuitiveResearchKitArmTypes::DVRK_ENGAGING_TOOL:
            return "Engaging tool for PSM";
            break;
        case mtsIntuitiveResearchKitArmTypes::DVRK_READY:
            return "DVRK ready";
            break;
        case mtsIntuitiveResearchKitArmTypes::DVRK_POSITION_JOINT:
            return "Joint position mode";
            break;
        case mtsIntuitiveResearchKitArmTypes::DVRK_POSITION_GOAL_JOINT:
            return "Joint position goal mode";
            break;
        case mtsIntuitiveResearchKitArmTypes::DVRK_POSITION_CARTESIAN:
            return "Cartesian position mode";
            break;
        case mtsIntuitiveResearchKitArmTypes::DVRK_POSITION_GOAL_CARTESIAN:
            return "Cartesian position goal mode";
            break;
        case mtsIntuitiveResearchKitArmTypes::DVRK_CONSTRAINT_CONTROLLER_CARTESIAN:
            return "Constraint controller mode";
            break;
        case mtsIntuitiveResearchKitArmTypes::DVRK_EFFORT_CARTESIAN:
            return "Cartesian effort mode";
            break;
        case mtsIntuitiveResearchKitArmTypes::DVRK_EFFORT_JOINT:
            return "Cartesian effort mode";
            break;
        case mtsIntuitiveResearchKitArmTypes::DVRK_GRAVITY_COMPENSATION:
            return "Gravity compensation mode";
            break;
        case mtsIntuitiveResearchKitArmTypes::DVRK_MANUAL:
            return "Manual mode for slave arm";
            break;
        case mtsIntuitiveResearchKitArmTypes::DVRK_CLUTCH:
            return "Clutch mode for master arm";
            break;
        default: return "undefined enum mtsIntuitiveResearchKitArmTypes::RobotStateType";
            break;
    }
}

std::string mtsIntuitiveResearchKitArmTypes::RobotStateTypeToString(const mtsIntuitiveResearchKitArmTypes::RobotStateType & data) throw (std::runtime_error) {
    switch (data) {
        case mtsIntuitiveResearchKitArmTypes::DVRK_UNINITIALIZED:
            return "DVRK_UNINITIALIZED";
            break;
        case mtsIntuitiveResearchKitArmTypes::DVRK_HOMING_BIAS_ENCODER:
            return "DVRK_HOMING_BIAS_ENCODER";
            break;
        case mtsIntuitiveResearchKitArmTypes::DVRK_HOMING_POWERING:
            return "DVRK_HOMING_POWERING";
            break;
        case mtsIntuitiveResearchKitArmTypes::DVRK_HOMING_CALIBRATING_ARM:
            return "DVRK_HOMING_CALIBRATING_ARM";
            break;
        case mtsIntuitiveResearchKitArmTypes::DVRK_HOMING_CALIBRATING_ROLL:
            return "DVRK_HOMING_CALIBRATING_ROLL";
            break;
        case mtsIntuitiveResearchKitArmTypes::DVRK_ARM_CALIBRATED:
            return "DVRK_ARM_CALIBRATED";
            break;
        case mtsIntuitiveResearchKitArmTypes::DVRK_CHANGING_COUPLING:
            return "DVRK_CHANGING_COUPLING";
            break;
        case mtsIntuitiveResearchKitArmTypes::DVRK_ENGAGING_ADAPTER:
            return "DVRK_ENGAGING_ADAPTER";
            break;
        case mtsIntuitiveResearchKitArmTypes::DVRK_ADAPTER_ENGAGED:
            return "DVRK_ADAPTER_ENGAGED";
            break;
        case mtsIntuitiveResearchKitArmTypes::DVRK_ENGAGING_TOOL:
            return "DVRK_ENGAGING_TOOL";
            break;
        case mtsIntuitiveResearchKitArmTypes::DVRK_READY:
            return "DVRK_READY";
            break;
        case mtsIntuitiveResearchKitArmTypes::DVRK_POSITION_JOINT:
            return "DVRK_POSITION_JOINT";
            break;
        case mtsIntuitiveResearchKitArmTypes::DVRK_POSITION_GOAL_JOINT:
            return "DVRK_POSITION_GOAL_JOINT";
            break;
        case mtsIntuitiveResearchKitArmTypes::DVRK_POSITION_CARTESIAN:
            return "DVRK_POSITION_CARTESIAN";
            break;
        case mtsIntuitiveResearchKitArmTypes::DVRK_POSITION_GOAL_CARTESIAN:
            return "DVRK_POSITION_GOAL_CARTESIAN";
            break;
        case mtsIntuitiveResearchKitArmTypes::DVRK_CONSTRAINT_CONTROLLER_CARTESIAN:
            return "DVRK_CONSTRAINT_CONTROLLER_CARTESIAN";
            break;
        case mtsIntuitiveResearchKitArmTypes::DVRK_EFFORT_CARTESIAN:
            return "DVRK_EFFORT_CARTESIAN";
            break;
        case mtsIntuitiveResearchKitArmTypes::DVRK_EFFORT_JOINT:
            return "DVRK_EFFORT_JOINT";
            break;
        case mtsIntuitiveResearchKitArmTypes::DVRK_GRAVITY_COMPENSATION:
            return "DVRK_GRAVITY_COMPENSATION";
            break;
        case mtsIntuitiveResearchKitArmTypes::DVRK_MANUAL:
            return "DVRK_MANUAL";
            break;
        case mtsIntuitiveResearchKitArmTypes::DVRK_CLUTCH:
            return "DVRK_CLUTCH";
            break;
        default:
            break;
    }
    cmnThrow("mtsIntuitiveResearchKitArmTypes::RobotStateTypeToString called with invalid enum");
    return "";
}

mtsIntuitiveResearchKitArmTypes::RobotStateType mtsIntuitiveResearchKitArmTypes::RobotStateTypeFromString(const std::string & value) throw (std::runtime_error) {
    if (value == "DVRK_UNINITIALIZED") {
        return mtsIntuitiveResearchKitArmTypes::DVRK_UNINITIALIZED;
    };
    if (value == "DVRK_HOMING_BIAS_ENCODER") {
        return mtsIntuitiveResearchKitArmTypes::DVRK_HOMING_BIAS_ENCODER;
    };
    if (value == "DVRK_HOMING_POWERING") {
        return mtsIntuitiveResearchKitArmTypes::DVRK_HOMING_POWERING;
    };
    if (value == "DVRK_HOMING_CALIBRATING_ARM") {
        return mtsIntuitiveResearchKitArmTypes::DVRK_HOMING_CALIBRATING_ARM;
    };
    if (value == "DVRK_HOMING_CALIBRATING_ROLL") {
        return mtsIntuitiveResearchKitArmTypes::DVRK_HOMING_CALIBRATING_ROLL;
    };
    if (value == "DVRK_ARM_CALIBRATED") {
        return mtsIntuitiveResearchKitArmTypes::DVRK_ARM_CALIBRATED;
    };
    if (value == "DVRK_CHANGING_COUPLING") {
        return mtsIntuitiveResearchKitArmTypes::DVRK_CHANGING_COUPLING;
    };
    if (value == "DVRK_ENGAGING_ADAPTER") {
        return mtsIntuitiveResearchKitArmTypes::DVRK_ENGAGING_ADAPTER;
    };
    if (value == "DVRK_ADAPTER_ENGAGED") {
        return mtsIntuitiveResearchKitArmTypes::DVRK_ADAPTER_ENGAGED;
    };
    if (value == "DVRK_ENGAGING_TOOL") {
        return mtsIntuitiveResearchKitArmTypes::DVRK_ENGAGING_TOOL;
    };
    if (value == "DVRK_READY") {
        return mtsIntuitiveResearchKitArmTypes::DVRK_READY;
    };
    if (value == "DVRK_POSITION_JOINT") {
        return mtsIntuitiveResearchKitArmTypes::DVRK_POSITION_JOINT;
    };
    if (value == "DVRK_POSITION_GOAL_JOINT") {
        return mtsIntuitiveResearchKitArmTypes::DVRK_POSITION_GOAL_JOINT;
    };
    if (value == "DVRK_POSITION_CARTESIAN") {
        return mtsIntuitiveResearchKitArmTypes::DVRK_POSITION_CARTESIAN;
    };
    if (value == "DVRK_POSITION_GOAL_CARTESIAN") {
        return mtsIntuitiveResearchKitArmTypes::DVRK_POSITION_GOAL_CARTESIAN;
    };
    if (value == "DVRK_CONSTRAINT_CONTROLLER_CARTESIAN") {
        return mtsIntuitiveResearchKitArmTypes::DVRK_CONSTRAINT_CONTROLLER_CARTESIAN;
    };
    if (value == "DVRK_EFFORT_CARTESIAN") {
        return mtsIntuitiveResearchKitArmTypes::DVRK_EFFORT_CARTESIAN;
    };
    if (value == "DVRK_EFFORT_JOINT") {
        return mtsIntuitiveResearchKitArmTypes::DVRK_EFFORT_JOINT;
    };
    if (value == "DVRK_GRAVITY_COMPENSATION") {
        return mtsIntuitiveResearchKitArmTypes::DVRK_GRAVITY_COMPENSATION;
    };
    if (value == "DVRK_MANUAL") {
        return mtsIntuitiveResearchKitArmTypes::DVRK_MANUAL;
    };
    if (value == "DVRK_CLUTCH") {
        return mtsIntuitiveResearchKitArmTypes::DVRK_CLUTCH;
    };
    cmnThrow("mtsIntuitiveResearchKitArmTypes::RobotStateTypeFromString can't find matching enum for " + value);
    return static_cast<mtsIntuitiveResearchKitArmTypes::RobotStateType >(0);
}

const std::vector<int> & mtsIntuitiveResearchKitArmTypes::RobotStateTypeVectorInt(void) {
    static std::vector<int> vectorInt;
    if (vectorInt.empty()) {
        vectorInt.push_back(static_cast<int>(DVRK_UNINITIALIZED));
        vectorInt.push_back(static_cast<int>(DVRK_HOMING_BIAS_ENCODER));
        vectorInt.push_back(static_cast<int>(DVRK_HOMING_POWERING));
        vectorInt.push_back(static_cast<int>(DVRK_HOMING_CALIBRATING_ARM));
        vectorInt.push_back(static_cast<int>(DVRK_HOMING_CALIBRATING_ROLL));
        vectorInt.push_back(static_cast<int>(DVRK_ARM_CALIBRATED));
        vectorInt.push_back(static_cast<int>(DVRK_CHANGING_COUPLING));
        vectorInt.push_back(static_cast<int>(DVRK_ENGAGING_ADAPTER));
        vectorInt.push_back(static_cast<int>(DVRK_ADAPTER_ENGAGED));
        vectorInt.push_back(static_cast<int>(DVRK_ENGAGING_TOOL));
        vectorInt.push_back(static_cast<int>(DVRK_READY));
        vectorInt.push_back(static_cast<int>(DVRK_POSITION_JOINT));
        vectorInt.push_back(static_cast<int>(DVRK_POSITION_GOAL_JOINT));
        vectorInt.push_back(static_cast<int>(DVRK_POSITION_CARTESIAN));
        vectorInt.push_back(static_cast<int>(DVRK_POSITION_GOAL_CARTESIAN));
        vectorInt.push_back(static_cast<int>(DVRK_CONSTRAINT_CONTROLLER_CARTESIAN));
        vectorInt.push_back(static_cast<int>(DVRK_EFFORT_CARTESIAN));
        vectorInt.push_back(static_cast<int>(DVRK_EFFORT_JOINT));
        vectorInt.push_back(static_cast<int>(DVRK_GRAVITY_COMPENSATION));
        vectorInt.push_back(static_cast<int>(DVRK_MANUAL));
        vectorInt.push_back(static_cast<int>(DVRK_CLUTCH));
    }
    return vectorInt;
}

const std::vector<std::string> & mtsIntuitiveResearchKitArmTypes::RobotStateTypeVectorString(void) {
    static std::vector<std::string> vectorString;
    if (vectorString.empty()) {
        vectorString.push_back("DVRK_UNINITIALIZED");
        vectorString.push_back("DVRK_HOMING_BIAS_ENCODER");
        vectorString.push_back("DVRK_HOMING_POWERING");
        vectorString.push_back("DVRK_HOMING_CALIBRATING_ARM");
        vectorString.push_back("DVRK_HOMING_CALIBRATING_ROLL");
        vectorString.push_back("DVRK_ARM_CALIBRATED");
        vectorString.push_back("DVRK_CHANGING_COUPLING");
        vectorString.push_back("DVRK_ENGAGING_ADAPTER");
        vectorString.push_back("DVRK_ADAPTER_ENGAGED");
        vectorString.push_back("DVRK_ENGAGING_TOOL");
        vectorString.push_back("DVRK_READY");
        vectorString.push_back("DVRK_POSITION_JOINT");
        vectorString.push_back("DVRK_POSITION_GOAL_JOINT");
        vectorString.push_back("DVRK_POSITION_CARTESIAN");
        vectorString.push_back("DVRK_POSITION_GOAL_CARTESIAN");
        vectorString.push_back("DVRK_CONSTRAINT_CONTROLLER_CARTESIAN");
        vectorString.push_back("DVRK_EFFORT_CARTESIAN");
        vectorString.push_back("DVRK_EFFORT_JOINT");
        vectorString.push_back("DVRK_GRAVITY_COMPENSATION");
        vectorString.push_back("DVRK_MANUAL");
        vectorString.push_back("DVRK_CLUTCH");
    }
    return vectorString;
}

#if CISST_HAS_JSON
  CMN_IMPLEMENT_DATA_FUNCTIONS_JSON_FOR_ENUM(mtsIntuitiveResearchKitArmTypes::RobotStateType, int);
#endif // CISST_HAS_JSON

