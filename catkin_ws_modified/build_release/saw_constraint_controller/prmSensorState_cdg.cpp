// file automatically generated, do not modify
// cisst version: 1.0.8
// source file: /home/davincic2/catkin_ws/src/cisst-saw/sawConstraintController/components/code/prmSensorState.cdg

#include <sawConstraintController/prmSensorState.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>

/* source line: 1 */

/* source line: 7 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(prmSensorStateProxy);

prmSensorState::prmSensorState(void):
      Name()
    , Values()
    , UserCount()
    , NeedsBase()
{}

prmSensorState::prmSensorState(const prmSensorState & other):
      Name(other.Name)
    , Values(other.Values)
    , UserCount(other.UserCount)
    , NeedsBase(other.NeedsBase)
{}

prmSensorState::~prmSensorState(void){}


void prmSensorState::SerializeRaw(std::ostream & outputStream) const
{
    cmnSerializeRaw(outputStream, this->Name);
    cmnSerializeRaw(outputStream, this->Values);
    cmnSerializeRaw(outputStream, this->UserCount);
    cmnSerializeRaw(outputStream, this->NeedsBase);
}


void prmSensorState::DeSerializeRaw(std::istream & inputStream)
{
    cmnDeSerializeRaw(inputStream, this->Name);
    cmnDeSerializeRaw(inputStream, this->Values);
    cmnDeSerializeRaw(inputStream, this->UserCount);
    cmnDeSerializeRaw(inputStream, this->NeedsBase);
}


void prmSensorState::ToStream(std::ostream & outputStream) const
{
    outputStream << this->HumanReadable();
}

void prmSensorState::ToStreamRaw(std::ostream & outputStream, const char delimiter, bool headerOnly, const std::string & headerPrefix) const
{
    if (headerOnly) {
        outputStream << cmnData<prmSensorState >::SerializeDescription(*this, delimiter, headerPrefix);
    } else {
        cmnData<prmSensorState >::SerializeText(*this, outputStream, delimiter);
    }
}
/* source line: 13 */
/* source line: 20 */
/* source line: 27 */
/* source line: 34 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const prmSensorState & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, prmSensorState & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void prmSensorState::Copy(const prmSensorState & source) {
    cmnData<std::string >::Copy(this->Name, source.Name);
    cmnData<vctDynamicVector<double> >::Copy(this->Values, source.Values);
    cmnData<int >::Copy(this->UserCount, source.UserCount);
    cmnData<bool >::Copy(this->NeedsBase, source.NeedsBase);
}
void prmSensorState::SerializeBinary(std::ostream & outputStream) const throw (std::runtime_error) {
    cmnData<std::string >::SerializeBinary(this->Name, outputStream);
    cmnData<vctDynamicVector<double> >::SerializeBinary(this->Values, outputStream);
    cmnData<int >::SerializeBinary(this->UserCount, outputStream);
    cmnData<bool >::SerializeBinary(this->NeedsBase, outputStream);
}
void prmSensorState::DeSerializeBinary(std::istream & inputStream,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) throw (std::runtime_error) {
    cmnData<std::string >::DeSerializeBinary(this->Name, inputStream, localFormat, remoteFormat);
    cmnData<vctDynamicVector<double> >::DeSerializeBinary(this->Values, inputStream, localFormat, remoteFormat);
    cmnData<int >::DeSerializeBinary(this->UserCount, inputStream, localFormat, remoteFormat);
    cmnData<bool >::DeSerializeBinary(this->NeedsBase, inputStream, localFormat, remoteFormat);
}
void prmSensorState::SerializeText(std::ostream & outputStream, const char delimiter) const throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<std::string >::SerializeText(this->Name, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<vctDynamicVector<double> >::SerializeText(this->Values, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<int >::SerializeText(this->UserCount, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<bool >::SerializeText(this->NeedsBase, outputStream, delimiter);
}
std::string prmSensorState::SerializeDescription(const char delimiter, const std::string & userDescription) const {
    bool someData = false;
    const std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    std::stringstream description;
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<std::string >::SerializeDescription(this->Name, delimiter, prefix + "Name");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<vctDynamicVector<double> >::SerializeDescription(this->Values, delimiter, prefix + "Values");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<int >::SerializeDescription(this->UserCount, delimiter, prefix + "UserCount");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<bool >::SerializeDescription(this->NeedsBase, delimiter, prefix + "NeedsBase");
    return description.str();
}
void prmSensorState::DeSerializeText(std::istream & inputStream,
                                          const char delimiter) throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "prmSensorState");
    }
    someData = true;
    cmnData<std::string >::DeSerializeText(this->Name, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "prmSensorState");
    }
    someData = true;
    cmnData<vctDynamicVector<double> >::DeSerializeText(this->Values, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "prmSensorState");
    }
    someData = true;
    cmnData<int >::DeSerializeText(this->UserCount, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "prmSensorState");
    }
    someData = true;
    cmnData<bool >::DeSerializeText(this->NeedsBase, inputStream, delimiter);
}
std::string prmSensorState::HumanReadable(void) const {
    std::stringstream description;
    description << "prmSensorState" << std::endl;
    description << "  Name:" << cmnData<std::string >::HumanReadable(this->Name);
    description << "  Values:" << cmnData<vctDynamicVector<double> >::HumanReadable(this->Values);
    description << "  UserCount:" << cmnData<int >::HumanReadable(this->UserCount);
    description << "  NeedsBase:" << cmnData<bool >::HumanReadable(this->NeedsBase);
    return description.str();
}
bool prmSensorState::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<std::string >::ScalarNumberIsFixed(this->Name)
           && cmnData<vctDynamicVector<double> >::ScalarNumberIsFixed(this->Values)
           && cmnData<int >::ScalarNumberIsFixed(this->UserCount)
           && cmnData<bool >::ScalarNumberIsFixed(this->NeedsBase)
    ;
}
size_t prmSensorState::ScalarNumber(void) const {
    return 0
           + cmnData<std::string >::ScalarNumber(this->Name)
           + cmnData<vctDynamicVector<double> >::ScalarNumber(this->Values)
           + cmnData<int >::ScalarNumber(this->UserCount)
           + cmnData<bool >::ScalarNumber(this->NeedsBase)
    ;
}
std::string prmSensorState::ScalarDescription(const size_t index, const std::string & userDescription) const throw (std::out_of_range) {
    std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->Name);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::ScalarDescription(this->Name, index - baseIndex, prefix + "Name");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vctDynamicVector<double> >::ScalarNumber(this->Values);
    if (index < currentMaxIndex) {
        return cmnData<vctDynamicVector<double> >::ScalarDescription(this->Values, index - baseIndex, prefix + "Values");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<int >::ScalarNumber(this->UserCount);
    if (index < currentMaxIndex) {
        return cmnData<int >::ScalarDescription(this->UserCount, index - baseIndex, prefix + "UserCount");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<bool >::ScalarNumber(this->NeedsBase);
    if (index < currentMaxIndex) {
        return cmnData<bool >::ScalarDescription(this->NeedsBase, index - baseIndex, prefix + "NeedsBase");
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: prmSensorState index out of range"));
    return "";
}
double prmSensorState::Scalar(const size_t index) const throw (std::out_of_range) {
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->Name);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::Scalar(this->Name, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vctDynamicVector<double> >::ScalarNumber(this->Values);
    if (index < currentMaxIndex) {
        return cmnData<vctDynamicVector<double> >::Scalar(this->Values, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<int >::ScalarNumber(this->UserCount);
    if (index < currentMaxIndex) {
        return cmnData<int >::Scalar(this->UserCount, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<bool >::ScalarNumber(this->NeedsBase);
    if (index < currentMaxIndex) {
        return cmnData<bool >::Scalar(this->NeedsBase, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalar: prmSensorState index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<prmSensorState >::SerializeText(const prmSensorState & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void prmSensorState::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<std::string >::SerializeText(this->Name, jsonValue["Name"]);
    cmnDataJSON<vctDynamicVector<double> >::SerializeText(this->Values, jsonValue["Values"]);
    cmnDataJSON<int >::SerializeText(this->UserCount, jsonValue["UserCount"]);
    cmnDataJSON<bool >::SerializeText(this->NeedsBase, jsonValue["NeedsBase"]);
}
template<>
void cmnDataJSON<prmSensorState >::DeSerializeText(prmSensorState & data, const Json::Value & jsonValue) throw (std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void prmSensorState::DeSerializeTextJSON(const Json::Value & jsonValue) throw (std::runtime_error) {
    cmnDataJSON<std::string >::DeSerializeText(this->Name, jsonValue["Name"]);
    cmnDataJSON<vctDynamicVector<double> >::DeSerializeText(this->Values, jsonValue["Values"]);
    cmnDataJSON<int >::DeSerializeText(this->UserCount, jsonValue["UserCount"]);
    cmnDataJSON<bool >::DeSerializeText(this->NeedsBase, jsonValue["NeedsBase"]);
}
#endif // CISST_HAS_JSON

/* source line: 54 */


    /*! Constructor
    */
    prmSensorState::prmSensorState(const std::string & n)
    {
        Name = n;
    }


