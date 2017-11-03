// file automatically generated, do not modify
// cisst version: 1.0.8
// source file: /home/davincic2/catkin_ws/src/cisst-saw/sawIntuitiveResearchKit/components/code/mtsVFDataFollow.cdg

#include <sawIntuitiveResearchKit/mtsVFDataFollow.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>

/* source line: 1 */

/* source line: 7 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(mtsVFDataFollowProxy);

mtsVFDataFollow::mtsVFDataFollow(void):
      mtsVFDataBase()
    , DesiredOpenAngle(0.0)
{}

mtsVFDataFollow::mtsVFDataFollow(const mtsVFDataFollow & other):
      mtsVFDataBase(other)
    , DesiredOpenAngle(other.DesiredOpenAngle)
{}

mtsVFDataFollow::~mtsVFDataFollow(void){}


void mtsVFDataFollow::SerializeRaw(std::ostream & outputStream) const
{
    mtsVFDataBase::SerializeRaw(outputStream);
    cmnSerializeRaw(outputStream, this->DesiredOpenAngle);
}


void mtsVFDataFollow::DeSerializeRaw(std::istream & inputStream)
{
    mtsVFDataBase::DeSerializeRaw(inputStream);
    cmnDeSerializeRaw(inputStream, this->DesiredOpenAngle);
}


void mtsVFDataFollow::ToStream(std::ostream & outputStream) const
{
    outputStream << this->HumanReadable();
}

void mtsVFDataFollow::ToStreamRaw(std::ostream & outputStream, const char delimiter, bool headerOnly, const std::string & headerPrefix) const
{
    if (headerOnly) {
        outputStream << cmnData<mtsVFDataFollow >::SerializeDescription(*this, delimiter, headerPrefix);
    } else {
        cmnData<mtsVFDataFollow >::SerializeText(*this, outputStream, delimiter);
    }
}
/* source line: 18 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const mtsVFDataFollow & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, mtsVFDataFollow & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void mtsVFDataFollow::Copy(const mtsVFDataFollow & source) {
    cmnData<mtsVFDataBase >::Copy(*this, source);
    cmnData<double >::Copy(this->DesiredOpenAngle, source.DesiredOpenAngle);
}
void mtsVFDataFollow::SerializeBinary(std::ostream & outputStream) const throw (std::runtime_error) {
    cmnData<mtsVFDataBase >::SerializeBinary(*this, outputStream);
    cmnData<double >::SerializeBinary(this->DesiredOpenAngle, outputStream);
}
void mtsVFDataFollow::DeSerializeBinary(std::istream & inputStream,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) throw (std::runtime_error) {
    cmnData<mtsVFDataBase >::DeSerializeBinary(*this, inputStream, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->DesiredOpenAngle, inputStream, localFormat, remoteFormat);
}
void mtsVFDataFollow::SerializeText(std::ostream & outputStream, const char delimiter) const throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<mtsVFDataBase >::SerializeText(*this, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<double >::SerializeText(this->DesiredOpenAngle, outputStream, delimiter);
}
std::string mtsVFDataFollow::SerializeDescription(const char delimiter, const std::string & userDescription) const {
    bool someData = false;
    const std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    std::stringstream description;
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<mtsVFDataBase >::SerializeDescription(*this, delimiter, userDescription);
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<double >::SerializeDescription(this->DesiredOpenAngle, delimiter, prefix + "DesiredOpenAngle");
    return description.str();
}
void mtsVFDataFollow::DeSerializeText(std::istream & inputStream,
                                          const char delimiter) throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsVFDataFollow");
    }
    someData = true;
    cmnData<mtsVFDataBase >::DeSerializeText(*this, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsVFDataFollow");
    }
    someData = true;
    cmnData<double >::DeSerializeText(this->DesiredOpenAngle, inputStream, delimiter);
}
std::string mtsVFDataFollow::HumanReadable(void) const {
    std::stringstream description;
    description << "mtsVFDataFollow" << std::endl;
    description << cmnData< mtsVFDataBase >::HumanReadable(*this) << std::endl;
    description << "  DesiredOpenAngle:" << cmnData<double >::HumanReadable(this->DesiredOpenAngle);
    return description.str();
}
bool mtsVFDataFollow::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<mtsVFDataBase >::ScalarNumberIsFixed(*this)
           && cmnData<double >::ScalarNumberIsFixed(this->DesiredOpenAngle)
    ;
}
size_t mtsVFDataFollow::ScalarNumber(void) const {
    return 0
           + cmnData< mtsVFDataBase >::ScalarNumber(*this)
           + cmnData<double >::ScalarNumber(this->DesiredOpenAngle)
    ;
}
std::string mtsVFDataFollow::ScalarDescription(const size_t index, const std::string & userDescription) const throw (std::out_of_range) {
    std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<mtsVFDataBase >::ScalarNumber(*this);
    if (index < currentMaxIndex) {
        return cmnData<mtsVFDataBase >::ScalarDescription(*this, index - baseIndex, prefix);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<double >::ScalarNumber(this->DesiredOpenAngle);
    if (index < currentMaxIndex) {
        return cmnData<double >::ScalarDescription(this->DesiredOpenAngle, index - baseIndex, prefix + "DesiredOpenAngle");
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: mtsVFDataFollow index out of range"));
    return "";
}
double mtsVFDataFollow::Scalar(const size_t index) const throw (std::out_of_range) {
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<mtsVFDataBase >::ScalarNumber(*this);
    if (index < currentMaxIndex) {
        return cmnData<mtsVFDataBase >::Scalar(*this, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<double >::ScalarNumber(this->DesiredOpenAngle);
    if (index < currentMaxIndex) {
        return cmnData<double >::Scalar(this->DesiredOpenAngle, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalar: mtsVFDataFollow index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<mtsVFDataFollow >::SerializeText(const mtsVFDataFollow & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void mtsVFDataFollow::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<mtsVFDataBase >::SerializeText(*(dynamic_cast<const mtsVFDataBase*>(this)), jsonValue);
    cmnDataJSON<double >::SerializeText(this->DesiredOpenAngle, jsonValue["DesiredOpenAngle"]);
}
template<>
void cmnDataJSON<mtsVFDataFollow >::DeSerializeText(mtsVFDataFollow & data, const Json::Value & jsonValue) throw (std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void mtsVFDataFollow::DeSerializeTextJSON(const Json::Value & jsonValue) throw (std::runtime_error) {
    cmnDataJSON<mtsVFDataBase >::DeSerializeText(*(dynamic_cast<mtsVFDataBase*>(this)), jsonValue);
    cmnDataJSON<double >::DeSerializeText(this->DesiredOpenAngle, jsonValue["DesiredOpenAngle"]);
}
#endif // CISST_HAS_JSON

