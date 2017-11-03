// file automatically generated, do not modify
// cisst version: 1.0.8
// source file: /home/davincic2/catkin_ws/src/cisst-saw/sawConstraintController/components/code/mtsVFDataJointLimits.cdg

#include <sawConstraintController/mtsVFDataJointLimits.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>

/* source line: 1 */

/* source line: 7 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(mtsVFDataJointLimitsProxy);

mtsVFDataJointLimits::mtsVFDataJointLimits(void):
      mtsVFDataBase()
    , LowerLimits()
    , UpperLimits()
{}

mtsVFDataJointLimits::mtsVFDataJointLimits(const mtsVFDataJointLimits & other):
      mtsVFDataBase(other)
    , LowerLimits(other.LowerLimits)
    , UpperLimits(other.UpperLimits)
{}

mtsVFDataJointLimits::~mtsVFDataJointLimits(void){}


void mtsVFDataJointLimits::SerializeRaw(std::ostream & outputStream) const
{
    mtsVFDataBase::SerializeRaw(outputStream);
    cmnSerializeRaw(outputStream, this->LowerLimits);
    cmnSerializeRaw(outputStream, this->UpperLimits);
}


void mtsVFDataJointLimits::DeSerializeRaw(std::istream & inputStream)
{
    mtsVFDataBase::DeSerializeRaw(inputStream);
    cmnDeSerializeRaw(inputStream, this->LowerLimits);
    cmnDeSerializeRaw(inputStream, this->UpperLimits);
}


void mtsVFDataJointLimits::ToStream(std::ostream & outputStream) const
{
    outputStream << this->HumanReadable();
}

void mtsVFDataJointLimits::ToStreamRaw(std::ostream & outputStream, const char delimiter, bool headerOnly, const std::string & headerPrefix) const
{
    if (headerOnly) {
        outputStream << cmnData<mtsVFDataJointLimits >::SerializeDescription(*this, delimiter, headerPrefix);
    } else {
        cmnData<mtsVFDataJointLimits >::SerializeText(*this, outputStream, delimiter);
    }
}
/* source line: 18 */
/* source line: 25 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const mtsVFDataJointLimits & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, mtsVFDataJointLimits & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void mtsVFDataJointLimits::Copy(const mtsVFDataJointLimits & source) {
    cmnData<mtsVFDataBase >::Copy(*this, source);
    cmnData<vctDoubleVec >::Copy(this->LowerLimits, source.LowerLimits);
    cmnData<vctDoubleVec >::Copy(this->UpperLimits, source.UpperLimits);
}
void mtsVFDataJointLimits::SerializeBinary(std::ostream & outputStream) const throw (std::runtime_error) {
    cmnData<mtsVFDataBase >::SerializeBinary(*this, outputStream);
    cmnData<vctDoubleVec >::SerializeBinary(this->LowerLimits, outputStream);
    cmnData<vctDoubleVec >::SerializeBinary(this->UpperLimits, outputStream);
}
void mtsVFDataJointLimits::DeSerializeBinary(std::istream & inputStream,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) throw (std::runtime_error) {
    cmnData<mtsVFDataBase >::DeSerializeBinary(*this, inputStream, localFormat, remoteFormat);
    cmnData<vctDoubleVec >::DeSerializeBinary(this->LowerLimits, inputStream, localFormat, remoteFormat);
    cmnData<vctDoubleVec >::DeSerializeBinary(this->UpperLimits, inputStream, localFormat, remoteFormat);
}
void mtsVFDataJointLimits::SerializeText(std::ostream & outputStream, const char delimiter) const throw (std::runtime_error) {
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
    cmnData<vctDoubleVec >::SerializeText(this->LowerLimits, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<vctDoubleVec >::SerializeText(this->UpperLimits, outputStream, delimiter);
}
std::string mtsVFDataJointLimits::SerializeDescription(const char delimiter, const std::string & userDescription) const {
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
    description << cmnData<vctDoubleVec >::SerializeDescription(this->LowerLimits, delimiter, prefix + "LowerLimits");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<vctDoubleVec >::SerializeDescription(this->UpperLimits, delimiter, prefix + "UpperLimits");
    return description.str();
}
void mtsVFDataJointLimits::DeSerializeText(std::istream & inputStream,
                                          const char delimiter) throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsVFDataJointLimits");
    }
    someData = true;
    cmnData<mtsVFDataBase >::DeSerializeText(*this, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsVFDataJointLimits");
    }
    someData = true;
    cmnData<vctDoubleVec >::DeSerializeText(this->LowerLimits, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsVFDataJointLimits");
    }
    someData = true;
    cmnData<vctDoubleVec >::DeSerializeText(this->UpperLimits, inputStream, delimiter);
}
std::string mtsVFDataJointLimits::HumanReadable(void) const {
    std::stringstream description;
    description << "mtsVFDataJointLimits" << std::endl;
    description << cmnData< mtsVFDataBase >::HumanReadable(*this) << std::endl;
    description << "  LowerLimits:" << cmnData<vctDoubleVec >::HumanReadable(this->LowerLimits);
    description << "  UpperLimits:" << cmnData<vctDoubleVec >::HumanReadable(this->UpperLimits);
    return description.str();
}
bool mtsVFDataJointLimits::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<mtsVFDataBase >::ScalarNumberIsFixed(*this)
           && cmnData<vctDoubleVec >::ScalarNumberIsFixed(this->LowerLimits)
           && cmnData<vctDoubleVec >::ScalarNumberIsFixed(this->UpperLimits)
    ;
}
size_t mtsVFDataJointLimits::ScalarNumber(void) const {
    return 0
           + cmnData< mtsVFDataBase >::ScalarNumber(*this)
           + cmnData<vctDoubleVec >::ScalarNumber(this->LowerLimits)
           + cmnData<vctDoubleVec >::ScalarNumber(this->UpperLimits)
    ;
}
std::string mtsVFDataJointLimits::ScalarDescription(const size_t index, const std::string & userDescription) const throw (std::out_of_range) {
    std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<mtsVFDataBase >::ScalarNumber(*this);
    if (index < currentMaxIndex) {
        return cmnData<mtsVFDataBase >::ScalarDescription(*this, index - baseIndex, prefix);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vctDoubleVec >::ScalarNumber(this->LowerLimits);
    if (index < currentMaxIndex) {
        return cmnData<vctDoubleVec >::ScalarDescription(this->LowerLimits, index - baseIndex, prefix + "LowerLimits");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vctDoubleVec >::ScalarNumber(this->UpperLimits);
    if (index < currentMaxIndex) {
        return cmnData<vctDoubleVec >::ScalarDescription(this->UpperLimits, index - baseIndex, prefix + "UpperLimits");
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: mtsVFDataJointLimits index out of range"));
    return "";
}
double mtsVFDataJointLimits::Scalar(const size_t index) const throw (std::out_of_range) {
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<mtsVFDataBase >::ScalarNumber(*this);
    if (index < currentMaxIndex) {
        return cmnData<mtsVFDataBase >::Scalar(*this, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vctDoubleVec >::ScalarNumber(this->LowerLimits);
    if (index < currentMaxIndex) {
        return cmnData<vctDoubleVec >::Scalar(this->LowerLimits, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vctDoubleVec >::ScalarNumber(this->UpperLimits);
    if (index < currentMaxIndex) {
        return cmnData<vctDoubleVec >::Scalar(this->UpperLimits, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalar: mtsVFDataJointLimits index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<mtsVFDataJointLimits >::SerializeText(const mtsVFDataJointLimits & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void mtsVFDataJointLimits::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<mtsVFDataBase >::SerializeText(*(dynamic_cast<const mtsVFDataBase*>(this)), jsonValue);
    cmnDataJSON<vctDoubleVec >::SerializeText(this->LowerLimits, jsonValue["LowerLimits"]);
    cmnDataJSON<vctDoubleVec >::SerializeText(this->UpperLimits, jsonValue["UpperLimits"]);
}
template<>
void cmnDataJSON<mtsVFDataJointLimits >::DeSerializeText(mtsVFDataJointLimits & data, const Json::Value & jsonValue) throw (std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void mtsVFDataJointLimits::DeSerializeTextJSON(const Json::Value & jsonValue) throw (std::runtime_error) {
    cmnDataJSON<mtsVFDataBase >::DeSerializeText(*(dynamic_cast<mtsVFDataBase*>(this)), jsonValue);
    cmnDataJSON<vctDoubleVec >::DeSerializeText(this->LowerLimits, jsonValue["LowerLimits"]);
    cmnDataJSON<vctDoubleVec >::DeSerializeText(this->UpperLimits, jsonValue["UpperLimits"]);
}
#endif // CISST_HAS_JSON

