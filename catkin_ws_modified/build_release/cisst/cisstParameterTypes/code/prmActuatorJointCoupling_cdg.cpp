// file automatically generated, do not modify
// cisst version: 1.0.8
// source file: /home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstParameterTypes/code/../prmActuatorJointCoupling.cdg

#include <cisstParameterTypes/prmActuatorJointCoupling.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>

/* source line: 1 */

/* source line: 10 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(prmActuatorJointCouplingProxy);

prmActuatorJointCoupling::prmActuatorJointCoupling(void):
      mActuatorToJointPosition()
    , mJointToActuatorPosition()
    , mActuatorToJointEffort()
    , mJointToActuatorEffort()
{}

prmActuatorJointCoupling::prmActuatorJointCoupling(const prmActuatorJointCoupling & other):
      mActuatorToJointPosition(other.mActuatorToJointPosition)
    , mJointToActuatorPosition(other.mJointToActuatorPosition)
    , mActuatorToJointEffort(other.mActuatorToJointEffort)
    , mJointToActuatorEffort(other.mJointToActuatorEffort)
{}

prmActuatorJointCoupling::~prmActuatorJointCoupling(void){}


void prmActuatorJointCoupling::SerializeRaw(std::ostream & outputStream) const
{
    cmnSerializeRaw(outputStream, this->mActuatorToJointPosition);
    cmnSerializeRaw(outputStream, this->mJointToActuatorPosition);
    cmnSerializeRaw(outputStream, this->mActuatorToJointEffort);
    cmnSerializeRaw(outputStream, this->mJointToActuatorEffort);
}


void prmActuatorJointCoupling::DeSerializeRaw(std::istream & inputStream)
{
    cmnDeSerializeRaw(inputStream, this->mActuatorToJointPosition);
    cmnDeSerializeRaw(inputStream, this->mJointToActuatorPosition);
    cmnDeSerializeRaw(inputStream, this->mActuatorToJointEffort);
    cmnDeSerializeRaw(inputStream, this->mJointToActuatorEffort);
}


void prmActuatorJointCoupling::ToStream(std::ostream & outputStream) const
{
    outputStream << this->HumanReadable();
}

void prmActuatorJointCoupling::ToStreamRaw(std::ostream & outputStream, const char delimiter, bool headerOnly, const std::string & headerPrefix) const
{
    if (headerOnly) {
        outputStream << cmnData<prmActuatorJointCoupling >::SerializeDescription(*this, delimiter, headerPrefix);
    } else {
        cmnData<prmActuatorJointCoupling >::SerializeText(*this, outputStream, delimiter);
    }
}
/* source line: 14 */

/* accessors is set to: all */
void prmActuatorJointCoupling::GetActuatorToJointPosition(vctDoubleMat & placeHolder) const
{
    placeHolder = this->mActuatorToJointPosition;
}

void prmActuatorJointCoupling::SetActuatorToJointPosition(const vctDoubleMat & newValue)
{
    this->mActuatorToJointPosition = newValue;
}


/* accessors is set to: all */
const vctDoubleMat & prmActuatorJointCoupling::ActuatorToJointPosition(void) const
{
    return this->mActuatorToJointPosition;
}

vctDoubleMat & prmActuatorJointCoupling::ActuatorToJointPosition(void)
{
    return this->mActuatorToJointPosition;
}

/* source line: 19 */

/* accessors is set to: all */
void prmActuatorJointCoupling::GetJointToActuatorPosition(vctDoubleMat & placeHolder) const
{
    placeHolder = this->mJointToActuatorPosition;
}

void prmActuatorJointCoupling::SetJointToActuatorPosition(const vctDoubleMat & newValue)
{
    this->mJointToActuatorPosition = newValue;
}


/* accessors is set to: all */
const vctDoubleMat & prmActuatorJointCoupling::JointToActuatorPosition(void) const
{
    return this->mJointToActuatorPosition;
}

vctDoubleMat & prmActuatorJointCoupling::JointToActuatorPosition(void)
{
    return this->mJointToActuatorPosition;
}

/* source line: 24 */

/* accessors is set to: all */
void prmActuatorJointCoupling::GetActuatorToJointEffort(vctDoubleMat & placeHolder) const
{
    placeHolder = this->mActuatorToJointEffort;
}

void prmActuatorJointCoupling::SetActuatorToJointEffort(const vctDoubleMat & newValue)
{
    this->mActuatorToJointEffort = newValue;
}


/* accessors is set to: all */
const vctDoubleMat & prmActuatorJointCoupling::ActuatorToJointEffort(void) const
{
    return this->mActuatorToJointEffort;
}

vctDoubleMat & prmActuatorJointCoupling::ActuatorToJointEffort(void)
{
    return this->mActuatorToJointEffort;
}

/* source line: 29 */

/* accessors is set to: all */
void prmActuatorJointCoupling::GetJointToActuatorEffort(vctDoubleMat & placeHolder) const
{
    placeHolder = this->mJointToActuatorEffort;
}

void prmActuatorJointCoupling::SetJointToActuatorEffort(const vctDoubleMat & newValue)
{
    this->mJointToActuatorEffort = newValue;
}


/* accessors is set to: all */
const vctDoubleMat & prmActuatorJointCoupling::JointToActuatorEffort(void) const
{
    return this->mJointToActuatorEffort;
}

vctDoubleMat & prmActuatorJointCoupling::JointToActuatorEffort(void)
{
    return this->mJointToActuatorEffort;
}

/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const prmActuatorJointCoupling & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, prmActuatorJointCoupling & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void prmActuatorJointCoupling::Copy(const prmActuatorJointCoupling & source) {
    cmnData<vctDoubleMat >::Copy(this->mActuatorToJointPosition, source.mActuatorToJointPosition);
    cmnData<vctDoubleMat >::Copy(this->mJointToActuatorPosition, source.mJointToActuatorPosition);
    cmnData<vctDoubleMat >::Copy(this->mActuatorToJointEffort, source.mActuatorToJointEffort);
    cmnData<vctDoubleMat >::Copy(this->mJointToActuatorEffort, source.mJointToActuatorEffort);
}
void prmActuatorJointCoupling::SerializeBinary(std::ostream & outputStream) const throw (std::runtime_error) {
    cmnData<vctDoubleMat >::SerializeBinary(this->mActuatorToJointPosition, outputStream);
    cmnData<vctDoubleMat >::SerializeBinary(this->mJointToActuatorPosition, outputStream);
    cmnData<vctDoubleMat >::SerializeBinary(this->mActuatorToJointEffort, outputStream);
    cmnData<vctDoubleMat >::SerializeBinary(this->mJointToActuatorEffort, outputStream);
}
void prmActuatorJointCoupling::DeSerializeBinary(std::istream & inputStream,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) throw (std::runtime_error) {
    cmnData<vctDoubleMat >::DeSerializeBinary(this->mActuatorToJointPosition, inputStream, localFormat, remoteFormat);
    cmnData<vctDoubleMat >::DeSerializeBinary(this->mJointToActuatorPosition, inputStream, localFormat, remoteFormat);
    cmnData<vctDoubleMat >::DeSerializeBinary(this->mActuatorToJointEffort, inputStream, localFormat, remoteFormat);
    cmnData<vctDoubleMat >::DeSerializeBinary(this->mJointToActuatorEffort, inputStream, localFormat, remoteFormat);
}
void prmActuatorJointCoupling::SerializeText(std::ostream & outputStream, const char delimiter) const throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<vctDoubleMat >::SerializeText(this->mActuatorToJointPosition, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<vctDoubleMat >::SerializeText(this->mJointToActuatorPosition, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<vctDoubleMat >::SerializeText(this->mActuatorToJointEffort, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<vctDoubleMat >::SerializeText(this->mJointToActuatorEffort, outputStream, delimiter);
}
std::string prmActuatorJointCoupling::SerializeDescription(const char delimiter, const std::string & userDescription) const {
    bool someData = false;
    const std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    std::stringstream description;
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<vctDoubleMat >::SerializeDescription(this->mActuatorToJointPosition, delimiter, prefix + "ActuatorToJointPosition");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<vctDoubleMat >::SerializeDescription(this->mJointToActuatorPosition, delimiter, prefix + "JointToActuatorPosition");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<vctDoubleMat >::SerializeDescription(this->mActuatorToJointEffort, delimiter, prefix + "ActuatorToJointEffort");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<vctDoubleMat >::SerializeDescription(this->mJointToActuatorEffort, delimiter, prefix + "JointToActuatorEffort");
    return description.str();
}
void prmActuatorJointCoupling::DeSerializeText(std::istream & inputStream,
                                          const char delimiter) throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "prmActuatorJointCoupling");
    }
    someData = true;
    cmnData<vctDoubleMat >::DeSerializeText(this->mActuatorToJointPosition, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "prmActuatorJointCoupling");
    }
    someData = true;
    cmnData<vctDoubleMat >::DeSerializeText(this->mJointToActuatorPosition, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "prmActuatorJointCoupling");
    }
    someData = true;
    cmnData<vctDoubleMat >::DeSerializeText(this->mActuatorToJointEffort, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "prmActuatorJointCoupling");
    }
    someData = true;
    cmnData<vctDoubleMat >::DeSerializeText(this->mJointToActuatorEffort, inputStream, delimiter);
}
std::string prmActuatorJointCoupling::HumanReadable(void) const {
    std::stringstream description;
    description << "prmActuatorJointCoupling" << std::endl;
    description << "  ActuatorToJointPosition:" << cmnData<vctDoubleMat >::HumanReadable(this->mActuatorToJointPosition);
    description << "  JointToActuatorPosition:" << cmnData<vctDoubleMat >::HumanReadable(this->mJointToActuatorPosition);
    description << "  ActuatorToJointEffort:" << cmnData<vctDoubleMat >::HumanReadable(this->mActuatorToJointEffort);
    description << "  JointToActuatorEffort:" << cmnData<vctDoubleMat >::HumanReadable(this->mJointToActuatorEffort);
    return description.str();
}
bool prmActuatorJointCoupling::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<vctDoubleMat >::ScalarNumberIsFixed(this->mActuatorToJointPosition)
           && cmnData<vctDoubleMat >::ScalarNumberIsFixed(this->mJointToActuatorPosition)
           && cmnData<vctDoubleMat >::ScalarNumberIsFixed(this->mActuatorToJointEffort)
           && cmnData<vctDoubleMat >::ScalarNumberIsFixed(this->mJointToActuatorEffort)
    ;
}
size_t prmActuatorJointCoupling::ScalarNumber(void) const {
    return 0
           + cmnData<vctDoubleMat >::ScalarNumber(this->mActuatorToJointPosition)
           + cmnData<vctDoubleMat >::ScalarNumber(this->mJointToActuatorPosition)
           + cmnData<vctDoubleMat >::ScalarNumber(this->mActuatorToJointEffort)
           + cmnData<vctDoubleMat >::ScalarNumber(this->mJointToActuatorEffort)
    ;
}
std::string prmActuatorJointCoupling::ScalarDescription(const size_t index, const std::string & userDescription) const throw (std::out_of_range) {
    std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<vctDoubleMat >::ScalarNumber(this->mActuatorToJointPosition);
    if (index < currentMaxIndex) {
        return cmnData<vctDoubleMat >::ScalarDescription(this->mActuatorToJointPosition, index - baseIndex, prefix + "ActuatorToJointPosition");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vctDoubleMat >::ScalarNumber(this->mJointToActuatorPosition);
    if (index < currentMaxIndex) {
        return cmnData<vctDoubleMat >::ScalarDescription(this->mJointToActuatorPosition, index - baseIndex, prefix + "JointToActuatorPosition");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vctDoubleMat >::ScalarNumber(this->mActuatorToJointEffort);
    if (index < currentMaxIndex) {
        return cmnData<vctDoubleMat >::ScalarDescription(this->mActuatorToJointEffort, index - baseIndex, prefix + "ActuatorToJointEffort");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vctDoubleMat >::ScalarNumber(this->mJointToActuatorEffort);
    if (index < currentMaxIndex) {
        return cmnData<vctDoubleMat >::ScalarDescription(this->mJointToActuatorEffort, index - baseIndex, prefix + "JointToActuatorEffort");
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: prmActuatorJointCoupling index out of range"));
    return "";
}
double prmActuatorJointCoupling::Scalar(const size_t index) const throw (std::out_of_range) {
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<vctDoubleMat >::ScalarNumber(this->mActuatorToJointPosition);
    if (index < currentMaxIndex) {
        return cmnData<vctDoubleMat >::Scalar(this->mActuatorToJointPosition, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vctDoubleMat >::ScalarNumber(this->mJointToActuatorPosition);
    if (index < currentMaxIndex) {
        return cmnData<vctDoubleMat >::Scalar(this->mJointToActuatorPosition, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vctDoubleMat >::ScalarNumber(this->mActuatorToJointEffort);
    if (index < currentMaxIndex) {
        return cmnData<vctDoubleMat >::Scalar(this->mActuatorToJointEffort, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vctDoubleMat >::ScalarNumber(this->mJointToActuatorEffort);
    if (index < currentMaxIndex) {
        return cmnData<vctDoubleMat >::Scalar(this->mJointToActuatorEffort, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalar: prmActuatorJointCoupling index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<prmActuatorJointCoupling >::SerializeText(const prmActuatorJointCoupling & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void prmActuatorJointCoupling::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<vctDoubleMat >::SerializeText(this->mActuatorToJointPosition, jsonValue["ActuatorToJointPosition"]);
    cmnDataJSON<vctDoubleMat >::SerializeText(this->mJointToActuatorPosition, jsonValue["JointToActuatorPosition"]);
    cmnDataJSON<vctDoubleMat >::SerializeText(this->mActuatorToJointEffort, jsonValue["ActuatorToJointEffort"]);
    cmnDataJSON<vctDoubleMat >::SerializeText(this->mJointToActuatorEffort, jsonValue["JointToActuatorEffort"]);
}
template<>
void cmnDataJSON<prmActuatorJointCoupling >::DeSerializeText(prmActuatorJointCoupling & data, const Json::Value & jsonValue) throw (std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void prmActuatorJointCoupling::DeSerializeTextJSON(const Json::Value & jsonValue) throw (std::runtime_error) {
    cmnDataJSON<vctDoubleMat >::DeSerializeText(this->mActuatorToJointPosition, jsonValue["ActuatorToJointPosition"]);
    cmnDataJSON<vctDoubleMat >::DeSerializeText(this->mJointToActuatorPosition, jsonValue["JointToActuatorPosition"]);
    cmnDataJSON<vctDoubleMat >::DeSerializeText(this->mActuatorToJointEffort, jsonValue["ActuatorToJointEffort"]);
    cmnDataJSON<vctDoubleMat >::DeSerializeText(this->mJointToActuatorEffort, jsonValue["JointToActuatorEffort"]);
}
#endif // CISST_HAS_JSON

