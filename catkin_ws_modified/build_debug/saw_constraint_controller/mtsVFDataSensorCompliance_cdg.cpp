// file automatically generated, do not modify
// cisst version: 1.0.8
// source file: /home/davincic2/catkin_ws/src/cisst-saw/sawConstraintController/components/code/mtsVFDataSensorCompliance.cdg

#include <sawConstraintController/mtsVFDataSensorCompliance.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>

/* source line: 1 */

/* source line: 7 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(mtsVFDataSensorComplianceProxy);

mtsVFDataSensorCompliance::mtsVFDataSensorCompliance(void):
      mtsVFDataBase()
    , Gain()
    , SensorSelections()
{}

mtsVFDataSensorCompliance::mtsVFDataSensorCompliance(const mtsVFDataSensorCompliance & other):
      mtsVFDataBase(other)
    , Gain(other.Gain)
    , SensorSelections(other.SensorSelections)
{}

mtsVFDataSensorCompliance::~mtsVFDataSensorCompliance(void){}


void mtsVFDataSensorCompliance::SerializeRaw(std::ostream & outputStream) const
{
    mtsVFDataBase::SerializeRaw(outputStream);
    cmnSerializeRaw(outputStream, this->Gain);
    cmnSerializeRaw(outputStream, this->SensorSelections);
}


void mtsVFDataSensorCompliance::DeSerializeRaw(std::istream & inputStream)
{
    mtsVFDataBase::DeSerializeRaw(inputStream);
    cmnDeSerializeRaw(inputStream, this->Gain);
    cmnDeSerializeRaw(inputStream, this->SensorSelections);
}


void mtsVFDataSensorCompliance::ToStream(std::ostream & outputStream) const
{
    outputStream << this->HumanReadable();
}

void mtsVFDataSensorCompliance::ToStreamRaw(std::ostream & outputStream, const char delimiter, bool headerOnly, const std::string & headerPrefix) const
{
    if (headerOnly) {
        outputStream << cmnData<mtsVFDataSensorCompliance >::SerializeDescription(*this, delimiter, headerPrefix);
    } else {
        cmnData<mtsVFDataSensorCompliance >::SerializeText(*this, outputStream, delimiter);
    }
}
/* source line: 15 */
/* source line: 20 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const mtsVFDataSensorCompliance & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, mtsVFDataSensorCompliance & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void mtsVFDataSensorCompliance::Copy(const mtsVFDataSensorCompliance & source) {
    cmnData<mtsVFDataBase >::Copy(*this, source);
    cmnData<vctDoubleMat >::Copy(this->Gain, source.Gain);
    cmnData<vctDynamicVector<size_t> >::Copy(this->SensorSelections, source.SensorSelections);
}
void mtsVFDataSensorCompliance::SerializeBinary(std::ostream & outputStream) const throw (std::runtime_error) {
    cmnData<mtsVFDataBase >::SerializeBinary(*this, outputStream);
    cmnData<vctDoubleMat >::SerializeBinary(this->Gain, outputStream);
    cmnData<vctDynamicVector<size_t> >::SerializeBinary(this->SensorSelections, outputStream);
}
void mtsVFDataSensorCompliance::DeSerializeBinary(std::istream & inputStream,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) throw (std::runtime_error) {
    cmnData<mtsVFDataBase >::DeSerializeBinary(*this, inputStream, localFormat, remoteFormat);
    cmnData<vctDoubleMat >::DeSerializeBinary(this->Gain, inputStream, localFormat, remoteFormat);
    cmnData<vctDynamicVector<size_t> >::DeSerializeBinary(this->SensorSelections, inputStream, localFormat, remoteFormat);
}
void mtsVFDataSensorCompliance::SerializeText(std::ostream & outputStream, const char delimiter) const throw (std::runtime_error) {
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
    cmnData<vctDoubleMat >::SerializeText(this->Gain, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<vctDynamicVector<size_t> >::SerializeText(this->SensorSelections, outputStream, delimiter);
}
std::string mtsVFDataSensorCompliance::SerializeDescription(const char delimiter, const std::string & userDescription) const {
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
    description << cmnData<vctDoubleMat >::SerializeDescription(this->Gain, delimiter, prefix + "Gain");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<vctDynamicVector<size_t> >::SerializeDescription(this->SensorSelections, delimiter, prefix + "SensorSelections");
    return description.str();
}
void mtsVFDataSensorCompliance::DeSerializeText(std::istream & inputStream,
                                          const char delimiter) throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsVFDataSensorCompliance");
    }
    someData = true;
    cmnData<mtsVFDataBase >::DeSerializeText(*this, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsVFDataSensorCompliance");
    }
    someData = true;
    cmnData<vctDoubleMat >::DeSerializeText(this->Gain, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsVFDataSensorCompliance");
    }
    someData = true;
    cmnData<vctDynamicVector<size_t> >::DeSerializeText(this->SensorSelections, inputStream, delimiter);
}
std::string mtsVFDataSensorCompliance::HumanReadable(void) const {
    std::stringstream description;
    description << "mtsVFDataSensorCompliance" << std::endl;
    description << cmnData< mtsVFDataBase >::HumanReadable(*this) << std::endl;
    description << "  Gain:" << cmnData<vctDoubleMat >::HumanReadable(this->Gain);
    description << "  SensorSelections:" << cmnData<vctDynamicVector<size_t> >::HumanReadable(this->SensorSelections);
    return description.str();
}
bool mtsVFDataSensorCompliance::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<mtsVFDataBase >::ScalarNumberIsFixed(*this)
           && cmnData<vctDoubleMat >::ScalarNumberIsFixed(this->Gain)
           && cmnData<vctDynamicVector<size_t> >::ScalarNumberIsFixed(this->SensorSelections)
    ;
}
size_t mtsVFDataSensorCompliance::ScalarNumber(void) const {
    return 0
           + cmnData< mtsVFDataBase >::ScalarNumber(*this)
           + cmnData<vctDoubleMat >::ScalarNumber(this->Gain)
           + cmnData<vctDynamicVector<size_t> >::ScalarNumber(this->SensorSelections)
    ;
}
std::string mtsVFDataSensorCompliance::ScalarDescription(const size_t index, const std::string & userDescription) const throw (std::out_of_range) {
    std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<mtsVFDataBase >::ScalarNumber(*this);
    if (index < currentMaxIndex) {
        return cmnData<mtsVFDataBase >::ScalarDescription(*this, index - baseIndex, prefix);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vctDoubleMat >::ScalarNumber(this->Gain);
    if (index < currentMaxIndex) {
        return cmnData<vctDoubleMat >::ScalarDescription(this->Gain, index - baseIndex, prefix + "Gain");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vctDynamicVector<size_t> >::ScalarNumber(this->SensorSelections);
    if (index < currentMaxIndex) {
        return cmnData<vctDynamicVector<size_t> >::ScalarDescription(this->SensorSelections, index - baseIndex, prefix + "SensorSelections");
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: mtsVFDataSensorCompliance index out of range"));
    return "";
}
double mtsVFDataSensorCompliance::Scalar(const size_t index) const throw (std::out_of_range) {
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<mtsVFDataBase >::ScalarNumber(*this);
    if (index < currentMaxIndex) {
        return cmnData<mtsVFDataBase >::Scalar(*this, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vctDoubleMat >::ScalarNumber(this->Gain);
    if (index < currentMaxIndex) {
        return cmnData<vctDoubleMat >::Scalar(this->Gain, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vctDynamicVector<size_t> >::ScalarNumber(this->SensorSelections);
    if (index < currentMaxIndex) {
        return cmnData<vctDynamicVector<size_t> >::Scalar(this->SensorSelections, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalar: mtsVFDataSensorCompliance index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<mtsVFDataSensorCompliance >::SerializeText(const mtsVFDataSensorCompliance & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void mtsVFDataSensorCompliance::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<mtsVFDataBase >::SerializeText(*(dynamic_cast<const mtsVFDataBase*>(this)), jsonValue);
    cmnDataJSON<vctDoubleMat >::SerializeText(this->Gain, jsonValue["Gain"]);
    cmnDataJSON<vctDynamicVector<size_t> >::SerializeText(this->SensorSelections, jsonValue["SensorSelections"]);
}
template<>
void cmnDataJSON<mtsVFDataSensorCompliance >::DeSerializeText(mtsVFDataSensorCompliance & data, const Json::Value & jsonValue) throw (std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void mtsVFDataSensorCompliance::DeSerializeTextJSON(const Json::Value & jsonValue) throw (std::runtime_error) {
    cmnDataJSON<mtsVFDataBase >::DeSerializeText(*(dynamic_cast<mtsVFDataBase*>(this)), jsonValue);
    cmnDataJSON<vctDoubleMat >::DeSerializeText(this->Gain, jsonValue["Gain"]);
    cmnDataJSON<vctDynamicVector<size_t> >::DeSerializeText(this->SensorSelections, jsonValue["SensorSelections"]);
}
#endif // CISST_HAS_JSON

/* source line: 33 */

    /*! Constructor
    \param name String name of object
    \param importance Number representing this virtual fixture's relative importance
    */
    mtsVFDataSensorCompliance::mtsVFDataSensorCompliance(const std::string & name, const std::string & kinName,
                                                         const std::string & forceSensorName, const std::string & overallGainName,
                                                         const vctDoubleMat & g, const vctDoubleVec & selections) : mtsVFDataBase()
    {
        Name = name;
        KinNames.push_back(kinName);
        SensorNames.push_back(forceSensorName);
        SensorNames.push_back(overallGainName);
        Gain = g;
        SensorSelections = selections;
    }

