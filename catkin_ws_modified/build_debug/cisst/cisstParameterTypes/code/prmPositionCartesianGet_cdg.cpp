// file automatically generated, do not modify
// cisst version: 1.0.8
// source file: /home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstParameterTypes/code/../prmPositionCartesianGet.cdg

#include <cisstParameterTypes/prmPositionCartesianGet.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>

/* source line: 1 */

/* source line: 19 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(prmPositionCartesianGetProxy);

prmPositionCartesianGet::prmPositionCartesianGet(void):
      mtsGenericObject()
    , mMovingFrame(0)
    , mReferenceFrame(0)
    , mPosition()
{}

prmPositionCartesianGet::prmPositionCartesianGet(const prmPositionCartesianGet & other):
      mtsGenericObject(other)
    , mMovingFrame(other.mMovingFrame)
    , mReferenceFrame(other.mReferenceFrame)
    , mPosition(other.mPosition)
{}

prmPositionCartesianGet::~prmPositionCartesianGet(void){}


void prmPositionCartesianGet::SerializeRaw(std::ostream & outputStream) const
{
    mtsGenericObject::SerializeRaw(outputStream);
    cmnSerializeRaw(outputStream, this->mPosition);
}


void prmPositionCartesianGet::DeSerializeRaw(std::istream & inputStream)
{
    mtsGenericObject::DeSerializeRaw(inputStream);
    cmnDeSerializeRaw(inputStream, this->mPosition);
}


void prmPositionCartesianGet::ToStream(std::ostream & outputStream) const
{
    outputStream << this->HumanReadable();
}

void prmPositionCartesianGet::ToStreamRaw(std::ostream & outputStream, const char delimiter, bool headerOnly, const std::string & headerPrefix) const
{
    if (headerOnly) {
        outputStream << cmnData<prmPositionCartesianGet >::SerializeDescription(*this, delimiter, headerPrefix);
    } else {
        cmnData<prmPositionCartesianGet >::SerializeText(*this, outputStream, delimiter);
    }
}
/* source line: 44 */

/* accessors is set to: all */
void prmPositionCartesianGet::GetMovingFrame(prmTransformationBasePtr & placeHolder) const
{
    placeHolder = this->mMovingFrame;
}

void prmPositionCartesianGet::SetMovingFrame(const prmTransformationBasePtr & newValue)
{
    this->mMovingFrame = newValue;
}


/* accessors is set to: all */
const prmTransformationBasePtr & prmPositionCartesianGet::MovingFrame(void) const
{
    return this->mMovingFrame;
}

prmTransformationBasePtr & prmPositionCartesianGet::MovingFrame(void)
{
    return this->mMovingFrame;
}

/* source line: 53 */

/* accessors is set to: all */
void prmPositionCartesianGet::GetReferenceFrame(prmTransformationBasePtr & placeHolder) const
{
    placeHolder = this->mReferenceFrame;
}

void prmPositionCartesianGet::SetReferenceFrame(const prmTransformationBasePtr & newValue)
{
    this->mReferenceFrame = newValue;
}


/* accessors is set to: all */
const prmTransformationBasePtr & prmPositionCartesianGet::ReferenceFrame(void) const
{
    return this->mReferenceFrame;
}

prmTransformationBasePtr & prmPositionCartesianGet::ReferenceFrame(void)
{
    return this->mReferenceFrame;
}

/* source line: 62 */

/* accessors is set to: all */
void prmPositionCartesianGet::GetPosition(vctFrm3 & placeHolder) const
{
    placeHolder = this->mPosition;
}

void prmPositionCartesianGet::SetPosition(const vctFrm3 & newValue)
{
    this->mPosition = newValue;
}


/* accessors is set to: all */
const vctFrm3 & prmPositionCartesianGet::Position(void) const
{
    return this->mPosition;
}

vctFrm3 & prmPositionCartesianGet::Position(void)
{
    return this->mPosition;
}

/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const prmPositionCartesianGet & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, prmPositionCartesianGet & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void prmPositionCartesianGet::Copy(const prmPositionCartesianGet & source) {
    cmnData<mtsGenericObject >::Copy(*this, source);
    cmnData<vctFrm3 >::Copy(this->mPosition, source.mPosition);
}
void prmPositionCartesianGet::SerializeBinary(std::ostream & outputStream) const throw (std::runtime_error) {
    cmnData<mtsGenericObject >::SerializeBinary(*this, outputStream);
    cmnData<vctFrm3 >::SerializeBinary(this->mPosition, outputStream);
}
void prmPositionCartesianGet::DeSerializeBinary(std::istream & inputStream,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) throw (std::runtime_error) {
    cmnData<mtsGenericObject >::DeSerializeBinary(*this, inputStream, localFormat, remoteFormat);
    cmnData<vctFrm3 >::DeSerializeBinary(this->mPosition, inputStream, localFormat, remoteFormat);
}
void prmPositionCartesianGet::SerializeText(std::ostream & outputStream, const char delimiter) const throw (std::runtime_error) {
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
    cmnData<vctFrm3 >::SerializeText(this->mPosition, outputStream, delimiter);
}
std::string prmPositionCartesianGet::SerializeDescription(const char delimiter, const std::string & userDescription) const {
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
    description << cmnData<vctFrm3 >::SerializeDescription(this->mPosition, delimiter, prefix + "Position");
    return description.str();
}
void prmPositionCartesianGet::DeSerializeText(std::istream & inputStream,
                                          const char delimiter) throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "prmPositionCartesianGet");
    }
    someData = true;
    cmnData<mtsGenericObject >::DeSerializeText(*this, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "prmPositionCartesianGet");
    }
    someData = true;
    cmnData<vctFrm3 >::DeSerializeText(this->mPosition, inputStream, delimiter);
}
std::string prmPositionCartesianGet::HumanReadable(void) const {
    std::stringstream description;
    description << "prmPositionCartesianGet" << std::endl;
    description << cmnData< mtsGenericObject >::HumanReadable(*this) << std::endl;
    description << "  Desired position:" << cmnData<vctFrm3 >::HumanReadable(this->mPosition);
    return description.str();
}
bool prmPositionCartesianGet::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<mtsGenericObject >::ScalarNumberIsFixed(*this)
           && cmnData<vctFrm3 >::ScalarNumberIsFixed(this->mPosition)
    ;
}
size_t prmPositionCartesianGet::ScalarNumber(void) const {
    return 0
           + cmnData< mtsGenericObject >::ScalarNumber(*this)
           + cmnData<vctFrm3 >::ScalarNumber(this->mPosition)
    ;
}
std::string prmPositionCartesianGet::ScalarDescription(const size_t index, const std::string & userDescription) const throw (std::out_of_range) {
    std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<mtsGenericObject >::ScalarNumber(*this);
    if (index < currentMaxIndex) {
        return cmnData<mtsGenericObject >::ScalarDescription(*this, index - baseIndex, prefix);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vctFrm3 >::ScalarNumber(this->mPosition);
    if (index < currentMaxIndex) {
        return cmnData<vctFrm3 >::ScalarDescription(this->mPosition, index - baseIndex, prefix + "Position");
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: prmPositionCartesianGet index out of range"));
    return "";
}
double prmPositionCartesianGet::Scalar(const size_t index) const throw (std::out_of_range) {
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<mtsGenericObject >::ScalarNumber(*this);
    if (index < currentMaxIndex) {
        return cmnData<mtsGenericObject >::Scalar(*this, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vctFrm3 >::ScalarNumber(this->mPosition);
    if (index < currentMaxIndex) {
        return cmnData<vctFrm3 >::Scalar(this->mPosition, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalar: prmPositionCartesianGet index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<prmPositionCartesianGet >::SerializeText(const prmPositionCartesianGet & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void prmPositionCartesianGet::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<mtsGenericObject >::SerializeText(*(dynamic_cast<const mtsGenericObject*>(this)), jsonValue);
    cmnDataJSON<vctFrm3 >::SerializeText(this->mPosition, jsonValue["Position"]);
}
template<>
void cmnDataJSON<prmPositionCartesianGet >::DeSerializeText(prmPositionCartesianGet & data, const Json::Value & jsonValue) throw (std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void prmPositionCartesianGet::DeSerializeTextJSON(const Json::Value & jsonValue) throw (std::runtime_error) {
    cmnDataJSON<mtsGenericObject >::DeSerializeText(*(dynamic_cast<mtsGenericObject*>(this)), jsonValue);
    cmnDataJSON<vctFrm3 >::DeSerializeText(this->mPosition, jsonValue["Position"]);
}
#endif // CISST_HAS_JSON


