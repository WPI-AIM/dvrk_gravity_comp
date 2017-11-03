// file automatically generated, do not modify
// cisst version: 1.0.8
// source file: /home/davincic2/catkin_ws/src/cisst-saw/sawConstraintController/components/code/mtsVFDataPlane.cdg

#include <sawConstraintController/mtsVFDataPlane.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>

/* source line: 1 */

/* source line: 7 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(mtsVFDataPlaneProxy);

mtsVFDataPlane::mtsVFDataPlane(void):
      mtsVFDataBase()
    , Normal(vct3(0.0,0.0,1.0))
    , PointOnPlane(vct3(0.0,0.0,0.0))
    , CurrentPos()
{}

mtsVFDataPlane::mtsVFDataPlane(const mtsVFDataPlane & other):
      mtsVFDataBase(other)
    , Normal(other.Normal)
    , PointOnPlane(other.PointOnPlane)
    , CurrentPos(other.CurrentPos)
{}

mtsVFDataPlane::~mtsVFDataPlane(void){}


void mtsVFDataPlane::SerializeRaw(std::ostream & outputStream) const
{
    mtsVFDataBase::SerializeRaw(outputStream);
    cmnSerializeRaw(outputStream, this->Normal);
    cmnSerializeRaw(outputStream, this->PointOnPlane);
    cmnSerializeRaw(outputStream, this->CurrentPos);
}


void mtsVFDataPlane::DeSerializeRaw(std::istream & inputStream)
{
    mtsVFDataBase::DeSerializeRaw(inputStream);
    cmnDeSerializeRaw(inputStream, this->Normal);
    cmnDeSerializeRaw(inputStream, this->PointOnPlane);
    cmnDeSerializeRaw(inputStream, this->CurrentPos);
}


void mtsVFDataPlane::ToStream(std::ostream & outputStream) const
{
    outputStream << this->HumanReadable();
}

void mtsVFDataPlane::ToStreamRaw(std::ostream & outputStream, const char delimiter, bool headerOnly, const std::string & headerPrefix) const
{
    if (headerOnly) {
        outputStream << cmnData<mtsVFDataPlane >::SerializeDescription(*this, delimiter, headerPrefix);
    } else {
        cmnData<mtsVFDataPlane >::SerializeText(*this, outputStream, delimiter);
    }
}
/* source line: 18 */
/* source line: 25 */
/* source line: 32 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const mtsVFDataPlane & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, mtsVFDataPlane & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void mtsVFDataPlane::Copy(const mtsVFDataPlane & source) {
    cmnData<mtsVFDataBase >::Copy(*this, source);
    cmnData<vct3 >::Copy(this->Normal, source.Normal);
    cmnData<vct3 >::Copy(this->PointOnPlane, source.PointOnPlane);
    cmnData<vct3 >::Copy(this->CurrentPos, source.CurrentPos);
}
void mtsVFDataPlane::SerializeBinary(std::ostream & outputStream) const throw (std::runtime_error) {
    cmnData<mtsVFDataBase >::SerializeBinary(*this, outputStream);
    cmnData<vct3 >::SerializeBinary(this->Normal, outputStream);
    cmnData<vct3 >::SerializeBinary(this->PointOnPlane, outputStream);
    cmnData<vct3 >::SerializeBinary(this->CurrentPos, outputStream);
}
void mtsVFDataPlane::DeSerializeBinary(std::istream & inputStream,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) throw (std::runtime_error) {
    cmnData<mtsVFDataBase >::DeSerializeBinary(*this, inputStream, localFormat, remoteFormat);
    cmnData<vct3 >::DeSerializeBinary(this->Normal, inputStream, localFormat, remoteFormat);
    cmnData<vct3 >::DeSerializeBinary(this->PointOnPlane, inputStream, localFormat, remoteFormat);
    cmnData<vct3 >::DeSerializeBinary(this->CurrentPos, inputStream, localFormat, remoteFormat);
}
void mtsVFDataPlane::SerializeText(std::ostream & outputStream, const char delimiter) const throw (std::runtime_error) {
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
    cmnData<vct3 >::SerializeText(this->Normal, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<vct3 >::SerializeText(this->PointOnPlane, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<vct3 >::SerializeText(this->CurrentPos, outputStream, delimiter);
}
std::string mtsVFDataPlane::SerializeDescription(const char delimiter, const std::string & userDescription) const {
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
    description << cmnData<vct3 >::SerializeDescription(this->Normal, delimiter, prefix + "Normal");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<vct3 >::SerializeDescription(this->PointOnPlane, delimiter, prefix + "PointOnPlane");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<vct3 >::SerializeDescription(this->CurrentPos, delimiter, prefix + "CurrentPos");
    return description.str();
}
void mtsVFDataPlane::DeSerializeText(std::istream & inputStream,
                                          const char delimiter) throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsVFDataPlane");
    }
    someData = true;
    cmnData<mtsVFDataBase >::DeSerializeText(*this, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsVFDataPlane");
    }
    someData = true;
    cmnData<vct3 >::DeSerializeText(this->Normal, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsVFDataPlane");
    }
    someData = true;
    cmnData<vct3 >::DeSerializeText(this->PointOnPlane, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsVFDataPlane");
    }
    someData = true;
    cmnData<vct3 >::DeSerializeText(this->CurrentPos, inputStream, delimiter);
}
std::string mtsVFDataPlane::HumanReadable(void) const {
    std::stringstream description;
    description << "mtsVFDataPlane" << std::endl;
    description << cmnData< mtsVFDataBase >::HumanReadable(*this) << std::endl;
    description << "  Normal:" << cmnData<vct3 >::HumanReadable(this->Normal);
    description << "  PointOnPlane:" << cmnData<vct3 >::HumanReadable(this->PointOnPlane);
    description << "  CurrentPos:" << cmnData<vct3 >::HumanReadable(this->CurrentPos);
    return description.str();
}
bool mtsVFDataPlane::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<mtsVFDataBase >::ScalarNumberIsFixed(*this)
           && cmnData<vct3 >::ScalarNumberIsFixed(this->Normal)
           && cmnData<vct3 >::ScalarNumberIsFixed(this->PointOnPlane)
           && cmnData<vct3 >::ScalarNumberIsFixed(this->CurrentPos)
    ;
}
size_t mtsVFDataPlane::ScalarNumber(void) const {
    return 0
           + cmnData< mtsVFDataBase >::ScalarNumber(*this)
           + cmnData<vct3 >::ScalarNumber(this->Normal)
           + cmnData<vct3 >::ScalarNumber(this->PointOnPlane)
           + cmnData<vct3 >::ScalarNumber(this->CurrentPos)
    ;
}
std::string mtsVFDataPlane::ScalarDescription(const size_t index, const std::string & userDescription) const throw (std::out_of_range) {
    std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<mtsVFDataBase >::ScalarNumber(*this);
    if (index < currentMaxIndex) {
        return cmnData<mtsVFDataBase >::ScalarDescription(*this, index - baseIndex, prefix);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vct3 >::ScalarNumber(this->Normal);
    if (index < currentMaxIndex) {
        return cmnData<vct3 >::ScalarDescription(this->Normal, index - baseIndex, prefix + "Normal");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vct3 >::ScalarNumber(this->PointOnPlane);
    if (index < currentMaxIndex) {
        return cmnData<vct3 >::ScalarDescription(this->PointOnPlane, index - baseIndex, prefix + "PointOnPlane");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vct3 >::ScalarNumber(this->CurrentPos);
    if (index < currentMaxIndex) {
        return cmnData<vct3 >::ScalarDescription(this->CurrentPos, index - baseIndex, prefix + "CurrentPos");
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: mtsVFDataPlane index out of range"));
    return "";
}
double mtsVFDataPlane::Scalar(const size_t index) const throw (std::out_of_range) {
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<mtsVFDataBase >::ScalarNumber(*this);
    if (index < currentMaxIndex) {
        return cmnData<mtsVFDataBase >::Scalar(*this, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vct3 >::ScalarNumber(this->Normal);
    if (index < currentMaxIndex) {
        return cmnData<vct3 >::Scalar(this->Normal, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vct3 >::ScalarNumber(this->PointOnPlane);
    if (index < currentMaxIndex) {
        return cmnData<vct3 >::Scalar(this->PointOnPlane, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vct3 >::ScalarNumber(this->CurrentPos);
    if (index < currentMaxIndex) {
        return cmnData<vct3 >::Scalar(this->CurrentPos, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalar: mtsVFDataPlane index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<mtsVFDataPlane >::SerializeText(const mtsVFDataPlane & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void mtsVFDataPlane::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<mtsVFDataBase >::SerializeText(*(dynamic_cast<const mtsVFDataBase*>(this)), jsonValue);
    cmnDataJSON<vct3 >::SerializeText(this->Normal, jsonValue["Normal"]);
    cmnDataJSON<vct3 >::SerializeText(this->PointOnPlane, jsonValue["PointOnPlane"]);
    cmnDataJSON<vct3 >::SerializeText(this->CurrentPos, jsonValue["CurrentPos"]);
}
template<>
void cmnDataJSON<mtsVFDataPlane >::DeSerializeText(mtsVFDataPlane & data, const Json::Value & jsonValue) throw (std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void mtsVFDataPlane::DeSerializeTextJSON(const Json::Value & jsonValue) throw (std::runtime_error) {
    cmnDataJSON<mtsVFDataBase >::DeSerializeText(*(dynamic_cast<mtsVFDataBase*>(this)), jsonValue);
    cmnDataJSON<vct3 >::DeSerializeText(this->Normal, jsonValue["Normal"]);
    cmnDataJSON<vct3 >::DeSerializeText(this->PointOnPlane, jsonValue["PointOnPlane"]);
    cmnDataJSON<vct3 >::DeSerializeText(this->CurrentPos, jsonValue["CurrentPos"]);
}
#endif // CISST_HAS_JSON

