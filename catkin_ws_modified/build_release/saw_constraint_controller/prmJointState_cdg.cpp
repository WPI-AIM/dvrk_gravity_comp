// file automatically generated, do not modify
// cisst version: 1.0.8
// source file: /home/davincic2/catkin_ws/src/cisst-saw/sawConstraintController/components/code/prmJointState.cdg

#include <sawConstraintController/prmJointState.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>

/* source line: 1 */

/* source line: 4 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(prmJointStateProxy);

prmJointState::prmJointState(void):
      JointPosition()
    , JointVelocity()
    , JointAcceleration()
{}

prmJointState::prmJointState(const prmJointState & other):
      JointPosition(other.JointPosition)
    , JointVelocity(other.JointVelocity)
    , JointAcceleration(other.JointAcceleration)
{}

prmJointState::~prmJointState(void){}


void prmJointState::SerializeRaw(std::ostream & outputStream) const
{
    cmnSerializeRaw(outputStream, this->JointPosition);
    cmnSerializeRaw(outputStream, this->JointVelocity);
    cmnSerializeRaw(outputStream, this->JointAcceleration);
}


void prmJointState::DeSerializeRaw(std::istream & inputStream)
{
    cmnDeSerializeRaw(inputStream, this->JointPosition);
    cmnDeSerializeRaw(inputStream, this->JointVelocity);
    cmnDeSerializeRaw(inputStream, this->JointAcceleration);
}


void prmJointState::ToStream(std::ostream & outputStream) const
{
    outputStream << this->HumanReadable();
}

void prmJointState::ToStreamRaw(std::ostream & outputStream, const char delimiter, bool headerOnly, const std::string & headerPrefix) const
{
    if (headerOnly) {
        outputStream << cmnData<prmJointState >::SerializeDescription(*this, delimiter, headerPrefix);
    } else {
        cmnData<prmJointState >::SerializeText(*this, outputStream, delimiter);
    }
}
/* source line: 7 */
/* source line: 13 */
/* source line: 19 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const prmJointState & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, prmJointState & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void prmJointState::Copy(const prmJointState & source) {
    cmnData<vctDoubleVec >::Copy(this->JointPosition, source.JointPosition);
    cmnData<vctDoubleVec >::Copy(this->JointVelocity, source.JointVelocity);
    cmnData<vctDoubleVec >::Copy(this->JointAcceleration, source.JointAcceleration);
}
void prmJointState::SerializeBinary(std::ostream & outputStream) const throw (std::runtime_error) {
    cmnData<vctDoubleVec >::SerializeBinary(this->JointPosition, outputStream);
    cmnData<vctDoubleVec >::SerializeBinary(this->JointVelocity, outputStream);
    cmnData<vctDoubleVec >::SerializeBinary(this->JointAcceleration, outputStream);
}
void prmJointState::DeSerializeBinary(std::istream & inputStream,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) throw (std::runtime_error) {
    cmnData<vctDoubleVec >::DeSerializeBinary(this->JointPosition, inputStream, localFormat, remoteFormat);
    cmnData<vctDoubleVec >::DeSerializeBinary(this->JointVelocity, inputStream, localFormat, remoteFormat);
    cmnData<vctDoubleVec >::DeSerializeBinary(this->JointAcceleration, inputStream, localFormat, remoteFormat);
}
void prmJointState::SerializeText(std::ostream & outputStream, const char delimiter) const throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<vctDoubleVec >::SerializeText(this->JointPosition, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<vctDoubleVec >::SerializeText(this->JointVelocity, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<vctDoubleVec >::SerializeText(this->JointAcceleration, outputStream, delimiter);
}
std::string prmJointState::SerializeDescription(const char delimiter, const std::string & userDescription) const {
    bool someData = false;
    const std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    std::stringstream description;
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<vctDoubleVec >::SerializeDescription(this->JointPosition, delimiter, prefix + "JointPosition");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<vctDoubleVec >::SerializeDescription(this->JointVelocity, delimiter, prefix + "JointVelocity");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<vctDoubleVec >::SerializeDescription(this->JointAcceleration, delimiter, prefix + "JointAcceleration");
    return description.str();
}
void prmJointState::DeSerializeText(std::istream & inputStream,
                                          const char delimiter) throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "prmJointState");
    }
    someData = true;
    cmnData<vctDoubleVec >::DeSerializeText(this->JointPosition, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "prmJointState");
    }
    someData = true;
    cmnData<vctDoubleVec >::DeSerializeText(this->JointVelocity, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "prmJointState");
    }
    someData = true;
    cmnData<vctDoubleVec >::DeSerializeText(this->JointAcceleration, inputStream, delimiter);
}
std::string prmJointState::HumanReadable(void) const {
    std::stringstream description;
    description << "prmJointState" << std::endl;
    description << "  JointPosition:" << cmnData<vctDoubleVec >::HumanReadable(this->JointPosition);
    description << "  JointVelocity:" << cmnData<vctDoubleVec >::HumanReadable(this->JointVelocity);
    description << "  JointAcceleration:" << cmnData<vctDoubleVec >::HumanReadable(this->JointAcceleration);
    return description.str();
}
bool prmJointState::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<vctDoubleVec >::ScalarNumberIsFixed(this->JointPosition)
           && cmnData<vctDoubleVec >::ScalarNumberIsFixed(this->JointVelocity)
           && cmnData<vctDoubleVec >::ScalarNumberIsFixed(this->JointAcceleration)
    ;
}
size_t prmJointState::ScalarNumber(void) const {
    return 0
           + cmnData<vctDoubleVec >::ScalarNumber(this->JointPosition)
           + cmnData<vctDoubleVec >::ScalarNumber(this->JointVelocity)
           + cmnData<vctDoubleVec >::ScalarNumber(this->JointAcceleration)
    ;
}
std::string prmJointState::ScalarDescription(const size_t index, const std::string & userDescription) const throw (std::out_of_range) {
    std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<vctDoubleVec >::ScalarNumber(this->JointPosition);
    if (index < currentMaxIndex) {
        return cmnData<vctDoubleVec >::ScalarDescription(this->JointPosition, index - baseIndex, prefix + "JointPosition");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vctDoubleVec >::ScalarNumber(this->JointVelocity);
    if (index < currentMaxIndex) {
        return cmnData<vctDoubleVec >::ScalarDescription(this->JointVelocity, index - baseIndex, prefix + "JointVelocity");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vctDoubleVec >::ScalarNumber(this->JointAcceleration);
    if (index < currentMaxIndex) {
        return cmnData<vctDoubleVec >::ScalarDescription(this->JointAcceleration, index - baseIndex, prefix + "JointAcceleration");
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: prmJointState index out of range"));
    return "";
}
double prmJointState::Scalar(const size_t index) const throw (std::out_of_range) {
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<vctDoubleVec >::ScalarNumber(this->JointPosition);
    if (index < currentMaxIndex) {
        return cmnData<vctDoubleVec >::Scalar(this->JointPosition, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vctDoubleVec >::ScalarNumber(this->JointVelocity);
    if (index < currentMaxIndex) {
        return cmnData<vctDoubleVec >::Scalar(this->JointVelocity, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vctDoubleVec >::ScalarNumber(this->JointAcceleration);
    if (index < currentMaxIndex) {
        return cmnData<vctDoubleVec >::Scalar(this->JointAcceleration, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalar: prmJointState index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<prmJointState >::SerializeText(const prmJointState & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void prmJointState::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<vctDoubleVec >::SerializeText(this->JointPosition, jsonValue["JointPosition"]);
    cmnDataJSON<vctDoubleVec >::SerializeText(this->JointVelocity, jsonValue["JointVelocity"]);
    cmnDataJSON<vctDoubleVec >::SerializeText(this->JointAcceleration, jsonValue["JointAcceleration"]);
}
template<>
void cmnDataJSON<prmJointState >::DeSerializeText(prmJointState & data, const Json::Value & jsonValue) throw (std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void prmJointState::DeSerializeTextJSON(const Json::Value & jsonValue) throw (std::runtime_error) {
    cmnDataJSON<vctDoubleVec >::DeSerializeText(this->JointPosition, jsonValue["JointPosition"]);
    cmnDataJSON<vctDoubleVec >::DeSerializeText(this->JointVelocity, jsonValue["JointVelocity"]);
    cmnDataJSON<vctDoubleVec >::DeSerializeText(this->JointAcceleration, jsonValue["JointAcceleration"]);
}
#endif // CISST_HAS_JSON

