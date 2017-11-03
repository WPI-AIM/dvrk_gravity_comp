// file automatically generated, do not modify
// cisst version: 1.0.8
// source file: /home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstParameterTypes/code/../prmPositionJointGet.cdg

#include <cisstParameterTypes/prmPositionJointGet.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>

/* source line: 1 */

/* source line: 11 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(prmPositionJointGetProxy);

prmPositionJointGet::prmPositionJointGet(void):
      mtsGenericObject()
    , mPosition()
    , mTimestamps(vctDynamicVector<double>(0, 0.0))
{}

prmPositionJointGet::prmPositionJointGet(const prmPositionJointGet & other):
      mtsGenericObject(other)
    , mPosition(other.mPosition)
    , mTimestamps(other.mTimestamps)
{}

prmPositionJointGet::~prmPositionJointGet(void){}


void prmPositionJointGet::SerializeRaw(std::ostream & outputStream) const
{
    mtsGenericObject::SerializeRaw(outputStream);
    cmnSerializeRaw(outputStream, this->mPosition);
    cmnSerializeRaw(outputStream, this->mTimestamps);
}


void prmPositionJointGet::DeSerializeRaw(std::istream & inputStream)
{
    mtsGenericObject::DeSerializeRaw(inputStream);
    cmnDeSerializeRaw(inputStream, this->mPosition);
    cmnDeSerializeRaw(inputStream, this->mTimestamps);
}


void prmPositionJointGet::ToStream(std::ostream & outputStream) const
{
    outputStream << this->HumanReadable();
}

void prmPositionJointGet::ToStreamRaw(std::ostream & outputStream, const char delimiter, bool headerOnly, const std::string & headerPrefix) const
{
    if (headerOnly) {
        outputStream << cmnData<prmPositionJointGet >::SerializeDescription(*this, delimiter, headerPrefix);
    } else {
        cmnData<prmPositionJointGet >::SerializeText(*this, outputStream, delimiter);
    }
}
/* source line: 21 */

/* accessors is set to: all */
void prmPositionJointGet::GetPosition(vctDynamicVector<double> & placeHolder) const
{
    placeHolder = this->mPosition;
}

void prmPositionJointGet::SetPosition(const vctDynamicVector<double> & newValue)
{
    this->mPosition = newValue;
}


/* accessors is set to: all */
const vctDynamicVector<double> & prmPositionJointGet::Position(void) const
{
    return this->mPosition;
}

vctDynamicVector<double> & prmPositionJointGet::Position(void)
{
    return this->mPosition;
}

/* source line: 27 */

/* accessors is set to: all */
void prmPositionJointGet::GetTimestamps(vctDynamicVector<double> & placeHolder) const
{
    placeHolder = this->mTimestamps;
}

void prmPositionJointGet::SetTimestamps(const vctDynamicVector<double> & newValue)
{
    this->mTimestamps = newValue;
}


/* accessors is set to: all */
const vctDynamicVector<double> & prmPositionJointGet::Timestamps(void) const
{
    return this->mTimestamps;
}

vctDynamicVector<double> & prmPositionJointGet::Timestamps(void)
{
    return this->mTimestamps;
}

/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const prmPositionJointGet & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, prmPositionJointGet & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void prmPositionJointGet::Copy(const prmPositionJointGet & source) {
    cmnData<mtsGenericObject >::Copy(*this, source);
    cmnData<vctDynamicVector<double> >::Copy(this->mPosition, source.mPosition);
    cmnData<vctDynamicVector<double> >::Copy(this->mTimestamps, source.mTimestamps);
}
void prmPositionJointGet::SerializeBinary(std::ostream & outputStream) const throw (std::runtime_error) {
    cmnData<mtsGenericObject >::SerializeBinary(*this, outputStream);
    cmnData<vctDynamicVector<double> >::SerializeBinary(this->mPosition, outputStream);
    cmnData<vctDynamicVector<double> >::SerializeBinary(this->mTimestamps, outputStream);
}
void prmPositionJointGet::DeSerializeBinary(std::istream & inputStream,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) throw (std::runtime_error) {
    cmnData<mtsGenericObject >::DeSerializeBinary(*this, inputStream, localFormat, remoteFormat);
    cmnData<vctDynamicVector<double> >::DeSerializeBinary(this->mPosition, inputStream, localFormat, remoteFormat);
    cmnData<vctDynamicVector<double> >::DeSerializeBinary(this->mTimestamps, inputStream, localFormat, remoteFormat);
}
void prmPositionJointGet::SerializeText(std::ostream & outputStream, const char delimiter) const throw (std::runtime_error) {
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
    cmnData<vctDynamicVector<double> >::SerializeText(this->mPosition, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<vctDynamicVector<double> >::SerializeText(this->mTimestamps, outputStream, delimiter);
}
std::string prmPositionJointGet::SerializeDescription(const char delimiter, const std::string & userDescription) const {
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
    description << cmnData<vctDynamicVector<double> >::SerializeDescription(this->mPosition, delimiter, prefix + "Position");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<vctDynamicVector<double> >::SerializeDescription(this->mTimestamps, delimiter, prefix + "Timestamps");
    return description.str();
}
void prmPositionJointGet::DeSerializeText(std::istream & inputStream,
                                          const char delimiter) throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "prmPositionJointGet");
    }
    someData = true;
    cmnData<mtsGenericObject >::DeSerializeText(*this, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "prmPositionJointGet");
    }
    someData = true;
    cmnData<vctDynamicVector<double> >::DeSerializeText(this->mPosition, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "prmPositionJointGet");
    }
    someData = true;
    cmnData<vctDynamicVector<double> >::DeSerializeText(this->mTimestamps, inputStream, delimiter);
}
std::string prmPositionJointGet::HumanReadable(void) const {
    std::stringstream description;
    description << "prmPositionJointGet" << std::endl;
    description << cmnData< mtsGenericObject >::HumanReadable(*this) << std::endl;
    description << "  Desired position:" << cmnData<vctDynamicVector<double> >::HumanReadable(this->mPosition);
    description << "  Timestamps:" << cmnData<vctDynamicVector<double> >::HumanReadable(this->mTimestamps);
    return description.str();
}
bool prmPositionJointGet::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<mtsGenericObject >::ScalarNumberIsFixed(*this)
           && cmnData<vctDynamicVector<double> >::ScalarNumberIsFixed(this->mPosition)
           && cmnData<vctDynamicVector<double> >::ScalarNumberIsFixed(this->mTimestamps)
    ;
}
size_t prmPositionJointGet::ScalarNumber(void) const {
    return 0
           + cmnData< mtsGenericObject >::ScalarNumber(*this)
           + cmnData<vctDynamicVector<double> >::ScalarNumber(this->mPosition)
           + cmnData<vctDynamicVector<double> >::ScalarNumber(this->mTimestamps)
    ;
}
std::string prmPositionJointGet::ScalarDescription(const size_t index, const std::string & userDescription) const throw (std::out_of_range) {
    std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<mtsGenericObject >::ScalarNumber(*this);
    if (index < currentMaxIndex) {
        return cmnData<mtsGenericObject >::ScalarDescription(*this, index - baseIndex, prefix);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vctDynamicVector<double> >::ScalarNumber(this->mPosition);
    if (index < currentMaxIndex) {
        return cmnData<vctDynamicVector<double> >::ScalarDescription(this->mPosition, index - baseIndex, prefix + "Position");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vctDynamicVector<double> >::ScalarNumber(this->mTimestamps);
    if (index < currentMaxIndex) {
        return cmnData<vctDynamicVector<double> >::ScalarDescription(this->mTimestamps, index - baseIndex, prefix + "Timestamps");
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: prmPositionJointGet index out of range"));
    return "";
}
double prmPositionJointGet::Scalar(const size_t index) const throw (std::out_of_range) {
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<mtsGenericObject >::ScalarNumber(*this);
    if (index < currentMaxIndex) {
        return cmnData<mtsGenericObject >::Scalar(*this, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vctDynamicVector<double> >::ScalarNumber(this->mPosition);
    if (index < currentMaxIndex) {
        return cmnData<vctDynamicVector<double> >::Scalar(this->mPosition, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vctDynamicVector<double> >::ScalarNumber(this->mTimestamps);
    if (index < currentMaxIndex) {
        return cmnData<vctDynamicVector<double> >::Scalar(this->mTimestamps, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalar: prmPositionJointGet index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<prmPositionJointGet >::SerializeText(const prmPositionJointGet & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void prmPositionJointGet::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<mtsGenericObject >::SerializeText(*(dynamic_cast<const mtsGenericObject*>(this)), jsonValue);
    cmnDataJSON<vctDynamicVector<double> >::SerializeText(this->mPosition, jsonValue["Position"]);
    cmnDataJSON<vctDynamicVector<double> >::SerializeText(this->mTimestamps, jsonValue["Timestamps"]);
}
template<>
void cmnDataJSON<prmPositionJointGet >::DeSerializeText(prmPositionJointGet & data, const Json::Value & jsonValue) throw (std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void prmPositionJointGet::DeSerializeTextJSON(const Json::Value & jsonValue) throw (std::runtime_error) {
    cmnDataJSON<mtsGenericObject >::DeSerializeText(*(dynamic_cast<mtsGenericObject*>(this)), jsonValue);
    cmnDataJSON<vctDynamicVector<double> >::DeSerializeText(this->mPosition, jsonValue["Position"]);
    cmnDataJSON<vctDynamicVector<double> >::DeSerializeText(this->mTimestamps, jsonValue["Timestamps"]);
}
#endif // CISST_HAS_JSON


