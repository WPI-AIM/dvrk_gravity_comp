// file automatically generated, do not modify
// cisst version: 1.0.8
// source file: /home/davincic2/catkin_ws/src/cisst-saw/sawConstraintController/components/code/mtsVFDataCartesianTranslation.cdg

#include <sawConstraintController/mtsVFDataCartesianTranslation.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>

/* source line: 1 */

/* source line: 7 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(mtsVFDataCartesianProxy);

mtsVFDataCartesian::mtsVFDataCartesian(void):
      mtsVFDataBase()
    , OffsetVector()
{}

mtsVFDataCartesian::mtsVFDataCartesian(const mtsVFDataCartesian & other):
      mtsVFDataBase(other)
    , OffsetVector(other.OffsetVector)
{}

mtsVFDataCartesian::~mtsVFDataCartesian(void){}


void mtsVFDataCartesian::SerializeRaw(std::ostream & outputStream) const
{
    mtsVFDataBase::SerializeRaw(outputStream);
    cmnSerializeRaw(outputStream, this->OffsetVector);
}


void mtsVFDataCartesian::DeSerializeRaw(std::istream & inputStream)
{
    mtsVFDataBase::DeSerializeRaw(inputStream);
    cmnDeSerializeRaw(inputStream, this->OffsetVector);
}


void mtsVFDataCartesian::ToStream(std::ostream & outputStream) const
{
    outputStream << this->HumanReadable();
}

void mtsVFDataCartesian::ToStreamRaw(std::ostream & outputStream, const char delimiter, bool headerOnly, const std::string & headerPrefix) const
{
    if (headerOnly) {
        outputStream << cmnData<mtsVFDataCartesian >::SerializeDescription(*this, delimiter, headerPrefix);
    } else {
        cmnData<mtsVFDataCartesian >::SerializeText(*this, outputStream, delimiter);
    }
}
/* source line: 18 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const mtsVFDataCartesian & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, mtsVFDataCartesian & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void mtsVFDataCartesian::Copy(const mtsVFDataCartesian & source) {
    cmnData<mtsVFDataBase >::Copy(*this, source);
    cmnData<vct3 >::Copy(this->OffsetVector, source.OffsetVector);
}
void mtsVFDataCartesian::SerializeBinary(std::ostream & outputStream) const throw (std::runtime_error) {
    cmnData<mtsVFDataBase >::SerializeBinary(*this, outputStream);
    cmnData<vct3 >::SerializeBinary(this->OffsetVector, outputStream);
}
void mtsVFDataCartesian::DeSerializeBinary(std::istream & inputStream,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) throw (std::runtime_error) {
    cmnData<mtsVFDataBase >::DeSerializeBinary(*this, inputStream, localFormat, remoteFormat);
    cmnData<vct3 >::DeSerializeBinary(this->OffsetVector, inputStream, localFormat, remoteFormat);
}
void mtsVFDataCartesian::SerializeText(std::ostream & outputStream, const char delimiter) const throw (std::runtime_error) {
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
    cmnData<vct3 >::SerializeText(this->OffsetVector, outputStream, delimiter);
}
std::string mtsVFDataCartesian::SerializeDescription(const char delimiter, const std::string & userDescription) const {
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
    description << cmnData<vct3 >::SerializeDescription(this->OffsetVector, delimiter, prefix + "OffsetVector");
    return description.str();
}
void mtsVFDataCartesian::DeSerializeText(std::istream & inputStream,
                                          const char delimiter) throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsVFDataCartesian");
    }
    someData = true;
    cmnData<mtsVFDataBase >::DeSerializeText(*this, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsVFDataCartesian");
    }
    someData = true;
    cmnData<vct3 >::DeSerializeText(this->OffsetVector, inputStream, delimiter);
}
std::string mtsVFDataCartesian::HumanReadable(void) const {
    std::stringstream description;
    description << "mtsVFDataCartesian" << std::endl;
    description << cmnData< mtsVFDataBase >::HumanReadable(*this) << std::endl;
    description << "  OffsetVector:" << cmnData<vct3 >::HumanReadable(this->OffsetVector);
    return description.str();
}
bool mtsVFDataCartesian::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<mtsVFDataBase >::ScalarNumberIsFixed(*this)
           && cmnData<vct3 >::ScalarNumberIsFixed(this->OffsetVector)
    ;
}
size_t mtsVFDataCartesian::ScalarNumber(void) const {
    return 0
           + cmnData< mtsVFDataBase >::ScalarNumber(*this)
           + cmnData<vct3 >::ScalarNumber(this->OffsetVector)
    ;
}
std::string mtsVFDataCartesian::ScalarDescription(const size_t index, const std::string & userDescription) const throw (std::out_of_range) {
    std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<mtsVFDataBase >::ScalarNumber(*this);
    if (index < currentMaxIndex) {
        return cmnData<mtsVFDataBase >::ScalarDescription(*this, index - baseIndex, prefix);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vct3 >::ScalarNumber(this->OffsetVector);
    if (index < currentMaxIndex) {
        return cmnData<vct3 >::ScalarDescription(this->OffsetVector, index - baseIndex, prefix + "OffsetVector");
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: mtsVFDataCartesian index out of range"));
    return "";
}
double mtsVFDataCartesian::Scalar(const size_t index) const throw (std::out_of_range) {
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<mtsVFDataBase >::ScalarNumber(*this);
    if (index < currentMaxIndex) {
        return cmnData<mtsVFDataBase >::Scalar(*this, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vct3 >::ScalarNumber(this->OffsetVector);
    if (index < currentMaxIndex) {
        return cmnData<vct3 >::Scalar(this->OffsetVector, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalar: mtsVFDataCartesian index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<mtsVFDataCartesian >::SerializeText(const mtsVFDataCartesian & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void mtsVFDataCartesian::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<mtsVFDataBase >::SerializeText(*(dynamic_cast<const mtsVFDataBase*>(this)), jsonValue);
    cmnDataJSON<vct3 >::SerializeText(this->OffsetVector, jsonValue["OffsetVector"]);
}
template<>
void cmnDataJSON<mtsVFDataCartesian >::DeSerializeText(mtsVFDataCartesian & data, const Json::Value & jsonValue) throw (std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void mtsVFDataCartesian::DeSerializeTextJSON(const Json::Value & jsonValue) throw (std::runtime_error) {
    cmnDataJSON<mtsVFDataBase >::DeSerializeText(*(dynamic_cast<mtsVFDataBase*>(this)), jsonValue);
    cmnDataJSON<vct3 >::DeSerializeText(this->OffsetVector, jsonValue["OffsetVector"]);
}
#endif // CISST_HAS_JSON

