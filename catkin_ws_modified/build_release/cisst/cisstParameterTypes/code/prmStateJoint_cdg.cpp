// file automatically generated, do not modify
// cisst version: 1.0.8
// source file: /home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstParameterTypes/code/../prmStateJoint.cdg

#include <cisstParameterTypes/prmStateJoint.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>

/* source line: 1 */

/* source line: 11 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(prmStateJointProxy);

prmStateJoint::prmStateJoint(void):
      mtsGenericObject()
    , mName()
    , mPosition()
    , mVelocity()
    , mEffort()
{}

prmStateJoint::prmStateJoint(const prmStateJoint & other):
      mtsGenericObject(other)
    , mName(other.mName)
    , mPosition(other.mPosition)
    , mVelocity(other.mVelocity)
    , mEffort(other.mEffort)
{}

prmStateJoint::~prmStateJoint(void){}


void prmStateJoint::SerializeRaw(std::ostream & outputStream) const
{
    mtsGenericObject::SerializeRaw(outputStream);
    cmnSerializeRaw(outputStream, this->mName);
    cmnSerializeRaw(outputStream, this->mPosition);
    cmnSerializeRaw(outputStream, this->mVelocity);
    cmnSerializeRaw(outputStream, this->mEffort);
}


void prmStateJoint::DeSerializeRaw(std::istream & inputStream)
{
    mtsGenericObject::DeSerializeRaw(inputStream);
    cmnDeSerializeRaw(inputStream, this->mName);
    cmnDeSerializeRaw(inputStream, this->mPosition);
    cmnDeSerializeRaw(inputStream, this->mVelocity);
    cmnDeSerializeRaw(inputStream, this->mEffort);
}


void prmStateJoint::ToStream(std::ostream & outputStream) const
{
    outputStream << this->HumanReadable();
}

void prmStateJoint::ToStreamRaw(std::ostream & outputStream, const char delimiter, bool headerOnly, const std::string & headerPrefix) const
{
    if (headerOnly) {
        outputStream << cmnData<prmStateJoint >::SerializeDescription(*this, delimiter, headerPrefix);
    } else {
        cmnData<prmStateJoint >::SerializeText(*this, outputStream, delimiter);
    }
}
/* source line: 21 */

/* accessors is set to: all */
void prmStateJoint::GetName(vctDynamicVector<std::string> & placeHolder) const
{
    placeHolder = this->mName;
}

void prmStateJoint::SetName(const vctDynamicVector<std::string> & newValue)
{
    this->mName = newValue;
}


/* accessors is set to: all */
const vctDynamicVector<std::string> & prmStateJoint::Name(void) const
{
    return this->mName;
}

vctDynamicVector<std::string> & prmStateJoint::Name(void)
{
    return this->mName;
}

/* source line: 26 */

/* accessors is set to: all */
void prmStateJoint::GetPosition(vctDynamicVector<double> & placeHolder) const
{
    placeHolder = this->mPosition;
}

void prmStateJoint::SetPosition(const vctDynamicVector<double> & newValue)
{
    this->mPosition = newValue;
}


/* accessors is set to: all */
const vctDynamicVector<double> & prmStateJoint::Position(void) const
{
    return this->mPosition;
}

vctDynamicVector<double> & prmStateJoint::Position(void)
{
    return this->mPosition;
}

/* source line: 31 */

/* accessors is set to: all */
void prmStateJoint::GetVelocity(vctDynamicVector<double> & placeHolder) const
{
    placeHolder = this->mVelocity;
}

void prmStateJoint::SetVelocity(const vctDynamicVector<double> & newValue)
{
    this->mVelocity = newValue;
}


/* accessors is set to: all */
const vctDynamicVector<double> & prmStateJoint::Velocity(void) const
{
    return this->mVelocity;
}

vctDynamicVector<double> & prmStateJoint::Velocity(void)
{
    return this->mVelocity;
}

/* source line: 36 */

/* accessors is set to: all */
void prmStateJoint::GetEffort(vctDynamicVector<double> & placeHolder) const
{
    placeHolder = this->mEffort;
}

void prmStateJoint::SetEffort(const vctDynamicVector<double> & newValue)
{
    this->mEffort = newValue;
}


/* accessors is set to: all */
const vctDynamicVector<double> & prmStateJoint::Effort(void) const
{
    return this->mEffort;
}

vctDynamicVector<double> & prmStateJoint::Effort(void)
{
    return this->mEffort;
}

/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const prmStateJoint & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, prmStateJoint & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void prmStateJoint::Copy(const prmStateJoint & source) {
    cmnData<mtsGenericObject >::Copy(*this, source);
    cmnData<vctDynamicVector<std::string> >::Copy(this->mName, source.mName);
    cmnData<vctDynamicVector<double> >::Copy(this->mPosition, source.mPosition);
    cmnData<vctDynamicVector<double> >::Copy(this->mVelocity, source.mVelocity);
    cmnData<vctDynamicVector<double> >::Copy(this->mEffort, source.mEffort);
}
void prmStateJoint::SerializeBinary(std::ostream & outputStream) const throw (std::runtime_error) {
    cmnData<mtsGenericObject >::SerializeBinary(*this, outputStream);
    cmnData<vctDynamicVector<std::string> >::SerializeBinary(this->mName, outputStream);
    cmnData<vctDynamicVector<double> >::SerializeBinary(this->mPosition, outputStream);
    cmnData<vctDynamicVector<double> >::SerializeBinary(this->mVelocity, outputStream);
    cmnData<vctDynamicVector<double> >::SerializeBinary(this->mEffort, outputStream);
}
void prmStateJoint::DeSerializeBinary(std::istream & inputStream,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) throw (std::runtime_error) {
    cmnData<mtsGenericObject >::DeSerializeBinary(*this, inputStream, localFormat, remoteFormat);
    cmnData<vctDynamicVector<std::string> >::DeSerializeBinary(this->mName, inputStream, localFormat, remoteFormat);
    cmnData<vctDynamicVector<double> >::DeSerializeBinary(this->mPosition, inputStream, localFormat, remoteFormat);
    cmnData<vctDynamicVector<double> >::DeSerializeBinary(this->mVelocity, inputStream, localFormat, remoteFormat);
    cmnData<vctDynamicVector<double> >::DeSerializeBinary(this->mEffort, inputStream, localFormat, remoteFormat);
}
void prmStateJoint::SerializeText(std::ostream & outputStream, const char delimiter) const throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<mtsGenericObject >::SerializeText(*this, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<vctDynamicVector<std::string> >::SerializeText(this->mName, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<vctDynamicVector<double> >::SerializeText(this->mPosition, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<vctDynamicVector<double> >::SerializeText(this->mVelocity, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<vctDynamicVector<double> >::SerializeText(this->mEffort, outputStream, delimiter);
}
std::string prmStateJoint::SerializeDescription(const char delimiter, const std::string & userDescription) const {
    bool someData = false;
    const std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    std::stringstream description;
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<mtsGenericObject >::SerializeDescription(*this, delimiter, userDescription);
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<vctDynamicVector<std::string> >::SerializeDescription(this->mName, delimiter, prefix + "Name");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<vctDynamicVector<double> >::SerializeDescription(this->mPosition, delimiter, prefix + "Position");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<vctDynamicVector<double> >::SerializeDescription(this->mVelocity, delimiter, prefix + "Velocity");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<vctDynamicVector<double> >::SerializeDescription(this->mEffort, delimiter, prefix + "Effort");
    return description.str();
}
void prmStateJoint::DeSerializeText(std::istream & inputStream,
                                          const char delimiter) throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "prmStateJoint");
    }
    someData = true;
    cmnData<mtsGenericObject >::DeSerializeText(*this, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "prmStateJoint");
    }
    someData = true;
    cmnData<vctDynamicVector<std::string> >::DeSerializeText(this->mName, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "prmStateJoint");
    }
    someData = true;
    cmnData<vctDynamicVector<double> >::DeSerializeText(this->mPosition, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "prmStateJoint");
    }
    someData = true;
    cmnData<vctDynamicVector<double> >::DeSerializeText(this->mVelocity, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "prmStateJoint");
    }
    someData = true;
    cmnData<vctDynamicVector<double> >::DeSerializeText(this->mEffort, inputStream, delimiter);
}
std::string prmStateJoint::HumanReadable(void) const {
    std::stringstream description;
    description << "prmStateJoint" << std::endl;
    description << cmnData< mtsGenericObject >::HumanReadable(*this) << std::endl;
    description << "  Name:" << cmnData<vctDynamicVector<std::string> >::HumanReadable(this->mName);
    description << "  Position:" << cmnData<vctDynamicVector<double> >::HumanReadable(this->mPosition);
    description << "  Velocity:" << cmnData<vctDynamicVector<double> >::HumanReadable(this->mVelocity);
    description << "  Effort:" << cmnData<vctDynamicVector<double> >::HumanReadable(this->mEffort);
    return description.str();
}
bool prmStateJoint::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<mtsGenericObject >::ScalarNumberIsFixed(*this)
           && cmnData<vctDynamicVector<std::string> >::ScalarNumberIsFixed(this->mName)
           && cmnData<vctDynamicVector<double> >::ScalarNumberIsFixed(this->mPosition)
           && cmnData<vctDynamicVector<double> >::ScalarNumberIsFixed(this->mVelocity)
           && cmnData<vctDynamicVector<double> >::ScalarNumberIsFixed(this->mEffort)
    ;
}
size_t prmStateJoint::ScalarNumber(void) const {
    return 0
           + cmnData< mtsGenericObject >::ScalarNumber(*this)
           + cmnData<vctDynamicVector<std::string> >::ScalarNumber(this->mName)
           + cmnData<vctDynamicVector<double> >::ScalarNumber(this->mPosition)
           + cmnData<vctDynamicVector<double> >::ScalarNumber(this->mVelocity)
           + cmnData<vctDynamicVector<double> >::ScalarNumber(this->mEffort)
    ;
}
std::string prmStateJoint::ScalarDescription(const size_t index, const std::string & userDescription) const throw (std::out_of_range) {
    std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<mtsGenericObject >::ScalarNumber(*this);
    if (index < currentMaxIndex) {
        return cmnData<mtsGenericObject >::ScalarDescription(*this, index - baseIndex, prefix);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vctDynamicVector<std::string> >::ScalarNumber(this->mName);
    if (index < currentMaxIndex) {
        return cmnData<vctDynamicVector<std::string> >::ScalarDescription(this->mName, index - baseIndex, prefix + "Name");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vctDynamicVector<double> >::ScalarNumber(this->mPosition);
    if (index < currentMaxIndex) {
        return cmnData<vctDynamicVector<double> >::ScalarDescription(this->mPosition, index - baseIndex, prefix + "Position");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vctDynamicVector<double> >::ScalarNumber(this->mVelocity);
    if (index < currentMaxIndex) {
        return cmnData<vctDynamicVector<double> >::ScalarDescription(this->mVelocity, index - baseIndex, prefix + "Velocity");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vctDynamicVector<double> >::ScalarNumber(this->mEffort);
    if (index < currentMaxIndex) {
        return cmnData<vctDynamicVector<double> >::ScalarDescription(this->mEffort, index - baseIndex, prefix + "Effort");
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: prmStateJoint index out of range"));
    return "";
}
double prmStateJoint::Scalar(const size_t index) const throw (std::out_of_range) {
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<mtsGenericObject >::ScalarNumber(*this);
    if (index < currentMaxIndex) {
        return cmnData<mtsGenericObject >::Scalar(*this, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vctDynamicVector<std::string> >::ScalarNumber(this->mName);
    if (index < currentMaxIndex) {
        return cmnData<vctDynamicVector<std::string> >::Scalar(this->mName, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vctDynamicVector<double> >::ScalarNumber(this->mPosition);
    if (index < currentMaxIndex) {
        return cmnData<vctDynamicVector<double> >::Scalar(this->mPosition, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vctDynamicVector<double> >::ScalarNumber(this->mVelocity);
    if (index < currentMaxIndex) {
        return cmnData<vctDynamicVector<double> >::Scalar(this->mVelocity, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vctDynamicVector<double> >::ScalarNumber(this->mEffort);
    if (index < currentMaxIndex) {
        return cmnData<vctDynamicVector<double> >::Scalar(this->mEffort, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalar: prmStateJoint index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<prmStateJoint >::SerializeText(const prmStateJoint & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void prmStateJoint::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<mtsGenericObject >::SerializeText(*(dynamic_cast<const mtsGenericObject*>(this)), jsonValue);
    cmnDataJSON<vctDynamicVector<std::string> >::SerializeText(this->mName, jsonValue["Name"]);
    cmnDataJSON<vctDynamicVector<double> >::SerializeText(this->mPosition, jsonValue["Position"]);
    cmnDataJSON<vctDynamicVector<double> >::SerializeText(this->mVelocity, jsonValue["Velocity"]);
    cmnDataJSON<vctDynamicVector<double> >::SerializeText(this->mEffort, jsonValue["Effort"]);
}
template<>
void cmnDataJSON<prmStateJoint >::DeSerializeText(prmStateJoint & data, const Json::Value & jsonValue) throw (std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void prmStateJoint::DeSerializeTextJSON(const Json::Value & jsonValue) throw (std::runtime_error) {
    cmnDataJSON<mtsGenericObject >::DeSerializeText(*(dynamic_cast<mtsGenericObject*>(this)), jsonValue);
    cmnDataJSON<vctDynamicVector<std::string> >::DeSerializeText(this->mName, jsonValue["Name"]);
    cmnDataJSON<vctDynamicVector<double> >::DeSerializeText(this->mPosition, jsonValue["Position"]);
    cmnDataJSON<vctDynamicVector<double> >::DeSerializeText(this->mVelocity, jsonValue["Velocity"]);
    cmnDataJSON<vctDynamicVector<double> >::DeSerializeText(this->mEffort, jsonValue["Effort"]);
}
#endif // CISST_HAS_JSON


