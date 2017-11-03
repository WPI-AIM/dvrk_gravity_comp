// file automatically generated, do not modify
// cisst version: 1.0.8
// source file: /home/davincic2/catkin_ws/src/cisst-saw/sawConstraintController/components/code/mtsVFDataRCM.cdg

#include <sawConstraintController/mtsVFDataRCM.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>

/* source line: 1 */

/* source line: 7 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(mtsVFDataRCMProxy);

mtsVFDataRCM::mtsVFDataRCM(void):
      mtsVFDataBase()
    , TipFrame()
    , RCM_Point()
    , JacClosest()
{}

mtsVFDataRCM::mtsVFDataRCM(const mtsVFDataRCM & other):
      mtsVFDataBase(other)
    , TipFrame(other.TipFrame)
    , RCM_Point(other.RCM_Point)
    , JacClosest(other.JacClosest)
{}

mtsVFDataRCM::~mtsVFDataRCM(void){}


void mtsVFDataRCM::SerializeRaw(std::ostream & outputStream) const
{
    mtsVFDataBase::SerializeRaw(outputStream);
    cmnSerializeRaw(outputStream, this->TipFrame);
    cmnSerializeRaw(outputStream, this->RCM_Point);
    cmnSerializeRaw(outputStream, this->JacClosest);
}


void mtsVFDataRCM::DeSerializeRaw(std::istream & inputStream)
{
    mtsVFDataBase::DeSerializeRaw(inputStream);
    cmnDeSerializeRaw(inputStream, this->TipFrame);
    cmnDeSerializeRaw(inputStream, this->RCM_Point);
    cmnDeSerializeRaw(inputStream, this->JacClosest);
}


void mtsVFDataRCM::ToStream(std::ostream & outputStream) const
{
    outputStream << this->HumanReadable();
}

void mtsVFDataRCM::ToStreamRaw(std::ostream & outputStream, const char delimiter, bool headerOnly, const std::string & headerPrefix) const
{
    if (headerOnly) {
        outputStream << cmnData<mtsVFDataRCM >::SerializeDescription(*this, delimiter, headerPrefix);
    } else {
        cmnData<mtsVFDataRCM >::SerializeText(*this, outputStream, delimiter);
    }
}
/* source line: 16 */
/* source line: 22 */
/* source line: 28 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const mtsVFDataRCM & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, mtsVFDataRCM & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void mtsVFDataRCM::Copy(const mtsVFDataRCM & source) {
    cmnData<mtsVFDataBase >::Copy(*this, source);
    cmnData<vctFrm3 >::Copy(this->TipFrame, source.TipFrame);
    cmnData<vct3 >::Copy(this->RCM_Point, source.RCM_Point);
    cmnData<vctDoubleMat >::Copy(this->JacClosest, source.JacClosest);
}
void mtsVFDataRCM::SerializeBinary(std::ostream & outputStream) const throw (std::runtime_error) {
    cmnData<mtsVFDataBase >::SerializeBinary(*this, outputStream);
    cmnData<vctFrm3 >::SerializeBinary(this->TipFrame, outputStream);
    cmnData<vct3 >::SerializeBinary(this->RCM_Point, outputStream);
    cmnData<vctDoubleMat >::SerializeBinary(this->JacClosest, outputStream);
}
void mtsVFDataRCM::DeSerializeBinary(std::istream & inputStream,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) throw (std::runtime_error) {
    cmnData<mtsVFDataBase >::DeSerializeBinary(*this, inputStream, localFormat, remoteFormat);
    cmnData<vctFrm3 >::DeSerializeBinary(this->TipFrame, inputStream, localFormat, remoteFormat);
    cmnData<vct3 >::DeSerializeBinary(this->RCM_Point, inputStream, localFormat, remoteFormat);
    cmnData<vctDoubleMat >::DeSerializeBinary(this->JacClosest, inputStream, localFormat, remoteFormat);
}
void mtsVFDataRCM::SerializeText(std::ostream & outputStream, const char delimiter) const throw (std::runtime_error) {
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
    cmnData<vctFrm3 >::SerializeText(this->TipFrame, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<vct3 >::SerializeText(this->RCM_Point, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<vctDoubleMat >::SerializeText(this->JacClosest, outputStream, delimiter);
}
std::string mtsVFDataRCM::SerializeDescription(const char delimiter, const std::string & userDescription) const {
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
    description << cmnData<vctFrm3 >::SerializeDescription(this->TipFrame, delimiter, prefix + "TipFrame");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<vct3 >::SerializeDescription(this->RCM_Point, delimiter, prefix + "RCM_Point");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<vctDoubleMat >::SerializeDescription(this->JacClosest, delimiter, prefix + "JacClosest");
    return description.str();
}
void mtsVFDataRCM::DeSerializeText(std::istream & inputStream,
                                          const char delimiter) throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsVFDataRCM");
    }
    someData = true;
    cmnData<mtsVFDataBase >::DeSerializeText(*this, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsVFDataRCM");
    }
    someData = true;
    cmnData<vctFrm3 >::DeSerializeText(this->TipFrame, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsVFDataRCM");
    }
    someData = true;
    cmnData<vct3 >::DeSerializeText(this->RCM_Point, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsVFDataRCM");
    }
    someData = true;
    cmnData<vctDoubleMat >::DeSerializeText(this->JacClosest, inputStream, delimiter);
}
std::string mtsVFDataRCM::HumanReadable(void) const {
    std::stringstream description;
    description << "mtsVFDataRCM" << std::endl;
    description << cmnData< mtsVFDataBase >::HumanReadable(*this) << std::endl;
    description << "  TipFrame:" << cmnData<vctFrm3 >::HumanReadable(this->TipFrame);
    description << "  RCM_Point:" << cmnData<vct3 >::HumanReadable(this->RCM_Point);
    description << "  JacClosest:" << cmnData<vctDoubleMat >::HumanReadable(this->JacClosest);
    return description.str();
}
bool mtsVFDataRCM::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<mtsVFDataBase >::ScalarNumberIsFixed(*this)
           && cmnData<vctFrm3 >::ScalarNumberIsFixed(this->TipFrame)
           && cmnData<vct3 >::ScalarNumberIsFixed(this->RCM_Point)
           && cmnData<vctDoubleMat >::ScalarNumberIsFixed(this->JacClosest)
    ;
}
size_t mtsVFDataRCM::ScalarNumber(void) const {
    return 0
           + cmnData< mtsVFDataBase >::ScalarNumber(*this)
           + cmnData<vctFrm3 >::ScalarNumber(this->TipFrame)
           + cmnData<vct3 >::ScalarNumber(this->RCM_Point)
           + cmnData<vctDoubleMat >::ScalarNumber(this->JacClosest)
    ;
}
std::string mtsVFDataRCM::ScalarDescription(const size_t index, const std::string & userDescription) const throw (std::out_of_range) {
    std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<mtsVFDataBase >::ScalarNumber(*this);
    if (index < currentMaxIndex) {
        return cmnData<mtsVFDataBase >::ScalarDescription(*this, index - baseIndex, prefix);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vctFrm3 >::ScalarNumber(this->TipFrame);
    if (index < currentMaxIndex) {
        return cmnData<vctFrm3 >::ScalarDescription(this->TipFrame, index - baseIndex, prefix + "TipFrame");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vct3 >::ScalarNumber(this->RCM_Point);
    if (index < currentMaxIndex) {
        return cmnData<vct3 >::ScalarDescription(this->RCM_Point, index - baseIndex, prefix + "RCM_Point");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vctDoubleMat >::ScalarNumber(this->JacClosest);
    if (index < currentMaxIndex) {
        return cmnData<vctDoubleMat >::ScalarDescription(this->JacClosest, index - baseIndex, prefix + "JacClosest");
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: mtsVFDataRCM index out of range"));
    return "";
}
double mtsVFDataRCM::Scalar(const size_t index) const throw (std::out_of_range) {
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<mtsVFDataBase >::ScalarNumber(*this);
    if (index < currentMaxIndex) {
        return cmnData<mtsVFDataBase >::Scalar(*this, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vctFrm3 >::ScalarNumber(this->TipFrame);
    if (index < currentMaxIndex) {
        return cmnData<vctFrm3 >::Scalar(this->TipFrame, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vct3 >::ScalarNumber(this->RCM_Point);
    if (index < currentMaxIndex) {
        return cmnData<vct3 >::Scalar(this->RCM_Point, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vctDoubleMat >::ScalarNumber(this->JacClosest);
    if (index < currentMaxIndex) {
        return cmnData<vctDoubleMat >::Scalar(this->JacClosest, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalar: mtsVFDataRCM index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<mtsVFDataRCM >::SerializeText(const mtsVFDataRCM & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void mtsVFDataRCM::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<mtsVFDataBase >::SerializeText(*(dynamic_cast<const mtsVFDataBase*>(this)), jsonValue);
    cmnDataJSON<vctFrm3 >::SerializeText(this->TipFrame, jsonValue["TipFrame"]);
    cmnDataJSON<vct3 >::SerializeText(this->RCM_Point, jsonValue["RCM_Point"]);
    cmnDataJSON<vctDoubleMat >::SerializeText(this->JacClosest, jsonValue["JacClosest"]);
}
template<>
void cmnDataJSON<mtsVFDataRCM >::DeSerializeText(mtsVFDataRCM & data, const Json::Value & jsonValue) throw (std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void mtsVFDataRCM::DeSerializeTextJSON(const Json::Value & jsonValue) throw (std::runtime_error) {
    cmnDataJSON<mtsVFDataBase >::DeSerializeText(*(dynamic_cast<mtsVFDataBase*>(this)), jsonValue);
    cmnDataJSON<vctFrm3 >::DeSerializeText(this->TipFrame, jsonValue["TipFrame"]);
    cmnDataJSON<vct3 >::DeSerializeText(this->RCM_Point, jsonValue["RCM_Point"]);
    cmnDataJSON<vctDoubleMat >::DeSerializeText(this->JacClosest, jsonValue["JacClosest"]);
}
#endif // CISST_HAS_JSON

