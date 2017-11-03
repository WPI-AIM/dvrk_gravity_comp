// file automatically generated, do not modify
// cisst version: 1.0.8
// source file: /home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/code/../mtsParameterTypes.cdg

#include <cisstMultiTask/mtsParameterTypes.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>

/* source line: 1 */

/* source line: 10 */
mtsDescriptionComponent::mtsDescriptionComponent(void):
      ProcessName()
    , ComponentName()
    , ClassName()
    , ConstructorArgSerialized()
{}

mtsDescriptionComponent::mtsDescriptionComponent(const mtsDescriptionComponent & other):
      ProcessName(other.ProcessName)
    , ComponentName(other.ComponentName)
    , ClassName(other.ClassName)
    , ConstructorArgSerialized(other.ConstructorArgSerialized)
{}

mtsDescriptionComponent::mtsDescriptionComponent(const std::string & newProcessName, const std::string & newComponentName, const std::string & newClassName, const std::string & newConstructorArgSerialized):
      ProcessName(newProcessName)
    , ComponentName(newComponentName)
    , ClassName(newClassName)
    , ConstructorArgSerialized(newConstructorArgSerialized)
{}

mtsDescriptionComponent::~mtsDescriptionComponent(void){}


void mtsDescriptionComponent::SerializeRaw(std::ostream & outputStream) const
{
    cmnSerializeRaw(outputStream, this->ProcessName);
    cmnSerializeRaw(outputStream, this->ComponentName);
    cmnSerializeRaw(outputStream, this->ClassName);
    cmnSerializeRaw(outputStream, this->ConstructorArgSerialized);
}


void mtsDescriptionComponent::DeSerializeRaw(std::istream & inputStream)
{
    cmnDeSerializeRaw(inputStream, this->ProcessName);
    cmnDeSerializeRaw(inputStream, this->ComponentName);
    cmnDeSerializeRaw(inputStream, this->ClassName);
    cmnDeSerializeRaw(inputStream, this->ConstructorArgSerialized);
}


void mtsDescriptionComponent::ToStream(std::ostream & outputStream) const
{
    outputStream << this->HumanReadable();
}

void mtsDescriptionComponent::ToStreamRaw(std::ostream & outputStream, const char delimiter, bool headerOnly, const std::string & headerPrefix) const
{
    if (headerOnly) {
        outputStream << cmnData<mtsDescriptionComponent >::SerializeDescription(*this, delimiter, headerPrefix);
    } else {
        cmnData<mtsDescriptionComponent >::SerializeText(*this, outputStream, delimiter);
    }
}
/* source line: 15 */
/* source line: 20 */
/* source line: 25 */
/* source line: 30 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const mtsDescriptionComponent & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, mtsDescriptionComponent & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void mtsDescriptionComponent::Copy(const mtsDescriptionComponent & source) {
    cmnData<std::string >::Copy(this->ProcessName, source.ProcessName);
    cmnData<std::string >::Copy(this->ComponentName, source.ComponentName);
    cmnData<std::string >::Copy(this->ClassName, source.ClassName);
    cmnData<std::string >::Copy(this->ConstructorArgSerialized, source.ConstructorArgSerialized);
}
void mtsDescriptionComponent::SerializeBinary(std::ostream & outputStream) const throw (std::runtime_error) {
    cmnData<std::string >::SerializeBinary(this->ProcessName, outputStream);
    cmnData<std::string >::SerializeBinary(this->ComponentName, outputStream);
    cmnData<std::string >::SerializeBinary(this->ClassName, outputStream);
    cmnData<std::string >::SerializeBinary(this->ConstructorArgSerialized, outputStream);
}
void mtsDescriptionComponent::DeSerializeBinary(std::istream & inputStream,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) throw (std::runtime_error) {
    cmnData<std::string >::DeSerializeBinary(this->ProcessName, inputStream, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->ComponentName, inputStream, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->ClassName, inputStream, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->ConstructorArgSerialized, inputStream, localFormat, remoteFormat);
}
void mtsDescriptionComponent::SerializeText(std::ostream & outputStream, const char delimiter) const throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<std::string >::SerializeText(this->ProcessName, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<std::string >::SerializeText(this->ComponentName, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<std::string >::SerializeText(this->ClassName, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<std::string >::SerializeText(this->ConstructorArgSerialized, outputStream, delimiter);
}
std::string mtsDescriptionComponent::SerializeDescription(const char delimiter, const std::string & userDescription) const {
    bool someData = false;
    const std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    std::stringstream description;
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<std::string >::SerializeDescription(this->ProcessName, delimiter, prefix + "ProcessName");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<std::string >::SerializeDescription(this->ComponentName, delimiter, prefix + "ComponentName");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<std::string >::SerializeDescription(this->ClassName, delimiter, prefix + "ClassName");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<std::string >::SerializeDescription(this->ConstructorArgSerialized, delimiter, prefix + "ConstructorArgSerialized");
    return description.str();
}
void mtsDescriptionComponent::DeSerializeText(std::istream & inputStream,
                                          const char delimiter) throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsDescriptionComponent");
    }
    someData = true;
    cmnData<std::string >::DeSerializeText(this->ProcessName, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsDescriptionComponent");
    }
    someData = true;
    cmnData<std::string >::DeSerializeText(this->ComponentName, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsDescriptionComponent");
    }
    someData = true;
    cmnData<std::string >::DeSerializeText(this->ClassName, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsDescriptionComponent");
    }
    someData = true;
    cmnData<std::string >::DeSerializeText(this->ConstructorArgSerialized, inputStream, delimiter);
}
std::string mtsDescriptionComponent::HumanReadable(void) const {
    std::stringstream description;
    description << "mtsDescriptionComponent" << std::endl;
    description << "  ProcessName:" << cmnData<std::string >::HumanReadable(this->ProcessName);
    description << "  ComponentName:" << cmnData<std::string >::HumanReadable(this->ComponentName);
    description << "  ClassName:" << cmnData<std::string >::HumanReadable(this->ClassName);
    description << "  ConstructorArgSerialized:" << cmnData<std::string >::HumanReadable(this->ConstructorArgSerialized);
    return description.str();
}
bool mtsDescriptionComponent::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<std::string >::ScalarNumberIsFixed(this->ProcessName)
           && cmnData<std::string >::ScalarNumberIsFixed(this->ComponentName)
           && cmnData<std::string >::ScalarNumberIsFixed(this->ClassName)
           && cmnData<std::string >::ScalarNumberIsFixed(this->ConstructorArgSerialized)
    ;
}
size_t mtsDescriptionComponent::ScalarNumber(void) const {
    return 0
           + cmnData<std::string >::ScalarNumber(this->ProcessName)
           + cmnData<std::string >::ScalarNumber(this->ComponentName)
           + cmnData<std::string >::ScalarNumber(this->ClassName)
           + cmnData<std::string >::ScalarNumber(this->ConstructorArgSerialized)
    ;
}
std::string mtsDescriptionComponent::ScalarDescription(const size_t index, const std::string & userDescription) const throw (std::out_of_range) {
    std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->ProcessName);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::ScalarDescription(this->ProcessName, index - baseIndex, prefix + "ProcessName");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->ComponentName);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::ScalarDescription(this->ComponentName, index - baseIndex, prefix + "ComponentName");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->ClassName);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::ScalarDescription(this->ClassName, index - baseIndex, prefix + "ClassName");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->ConstructorArgSerialized);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::ScalarDescription(this->ConstructorArgSerialized, index - baseIndex, prefix + "ConstructorArgSerialized");
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: mtsDescriptionComponent index out of range"));
    return "";
}
double mtsDescriptionComponent::Scalar(const size_t index) const throw (std::out_of_range) {
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->ProcessName);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::Scalar(this->ProcessName, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->ComponentName);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::Scalar(this->ComponentName, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->ClassName);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::Scalar(this->ClassName, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->ConstructorArgSerialized);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::Scalar(this->ConstructorArgSerialized, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalar: mtsDescriptionComponent index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<mtsDescriptionComponent >::SerializeText(const mtsDescriptionComponent & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void mtsDescriptionComponent::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<std::string >::SerializeText(this->ProcessName, jsonValue["ProcessName"]);
    cmnDataJSON<std::string >::SerializeText(this->ComponentName, jsonValue["ComponentName"]);
    cmnDataJSON<std::string >::SerializeText(this->ClassName, jsonValue["ClassName"]);
    cmnDataJSON<std::string >::SerializeText(this->ConstructorArgSerialized, jsonValue["ConstructorArgSerialized"]);
}
template<>
void cmnDataJSON<mtsDescriptionComponent >::DeSerializeText(mtsDescriptionComponent & data, const Json::Value & jsonValue) throw (std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void mtsDescriptionComponent::DeSerializeTextJSON(const Json::Value & jsonValue) throw (std::runtime_error) {
    cmnDataJSON<std::string >::DeSerializeText(this->ProcessName, jsonValue["ProcessName"]);
    cmnDataJSON<std::string >::DeSerializeText(this->ComponentName, jsonValue["ComponentName"]);
    cmnDataJSON<std::string >::DeSerializeText(this->ClassName, jsonValue["ClassName"]);
    cmnDataJSON<std::string >::DeSerializeText(this->ConstructorArgSerialized, jsonValue["ConstructorArgSerialized"]);
}
#endif // CISST_HAS_JSON

/* source line: 41 */

    mtsDescriptionComponent::mtsDescriptionComponent(const std::string & processName, const std::string & componentName):
        ProcessName(processName),
        ComponentName(componentName) {
    }

/* source line: 49 */
mtsDescriptionComponentClass::mtsDescriptionComponentClass(void):
      ClassName()
    , ArgType()
    , ArgTypeId()
{}

mtsDescriptionComponentClass::mtsDescriptionComponentClass(const mtsDescriptionComponentClass & other):
      ClassName(other.ClassName)
    , ArgType(other.ArgType)
    , ArgTypeId(other.ArgTypeId)
{}

mtsDescriptionComponentClass::mtsDescriptionComponentClass(const std::string & newClassName, const std::string & newArgType, const std::string & newArgTypeId):
      ClassName(newClassName)
    , ArgType(newArgType)
    , ArgTypeId(newArgTypeId)
{}

mtsDescriptionComponentClass::~mtsDescriptionComponentClass(void){}


void mtsDescriptionComponentClass::SerializeRaw(std::ostream & outputStream) const
{
    cmnSerializeRaw(outputStream, this->ClassName);
    cmnSerializeRaw(outputStream, this->ArgType);
    cmnSerializeRaw(outputStream, this->ArgTypeId);
}


void mtsDescriptionComponentClass::DeSerializeRaw(std::istream & inputStream)
{
    cmnDeSerializeRaw(inputStream, this->ClassName);
    cmnDeSerializeRaw(inputStream, this->ArgType);
    cmnDeSerializeRaw(inputStream, this->ArgTypeId);
}


void mtsDescriptionComponentClass::ToStream(std::ostream & outputStream) const
{
    outputStream << this->HumanReadable();
}

void mtsDescriptionComponentClass::ToStreamRaw(std::ostream & outputStream, const char delimiter, bool headerOnly, const std::string & headerPrefix) const
{
    if (headerOnly) {
        outputStream << cmnData<mtsDescriptionComponentClass >::SerializeDescription(*this, delimiter, headerPrefix);
    } else {
        cmnData<mtsDescriptionComponentClass >::SerializeText(*this, outputStream, delimiter);
    }
}
/* source line: 54 */
/* source line: 59 */
/* source line: 64 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const mtsDescriptionComponentClass & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, mtsDescriptionComponentClass & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void mtsDescriptionComponentClass::Copy(const mtsDescriptionComponentClass & source) {
    cmnData<std::string >::Copy(this->ClassName, source.ClassName);
    cmnData<std::string >::Copy(this->ArgType, source.ArgType);
    cmnData<std::string >::Copy(this->ArgTypeId, source.ArgTypeId);
}
void mtsDescriptionComponentClass::SerializeBinary(std::ostream & outputStream) const throw (std::runtime_error) {
    cmnData<std::string >::SerializeBinary(this->ClassName, outputStream);
    cmnData<std::string >::SerializeBinary(this->ArgType, outputStream);
    cmnData<std::string >::SerializeBinary(this->ArgTypeId, outputStream);
}
void mtsDescriptionComponentClass::DeSerializeBinary(std::istream & inputStream,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) throw (std::runtime_error) {
    cmnData<std::string >::DeSerializeBinary(this->ClassName, inputStream, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->ArgType, inputStream, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->ArgTypeId, inputStream, localFormat, remoteFormat);
}
void mtsDescriptionComponentClass::SerializeText(std::ostream & outputStream, const char delimiter) const throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<std::string >::SerializeText(this->ClassName, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<std::string >::SerializeText(this->ArgType, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<std::string >::SerializeText(this->ArgTypeId, outputStream, delimiter);
}
std::string mtsDescriptionComponentClass::SerializeDescription(const char delimiter, const std::string & userDescription) const {
    bool someData = false;
    const std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    std::stringstream description;
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<std::string >::SerializeDescription(this->ClassName, delimiter, prefix + "ClassName");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<std::string >::SerializeDescription(this->ArgType, delimiter, prefix + "ArgType");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<std::string >::SerializeDescription(this->ArgTypeId, delimiter, prefix + "ArgTypeId");
    return description.str();
}
void mtsDescriptionComponentClass::DeSerializeText(std::istream & inputStream,
                                          const char delimiter) throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsDescriptionComponentClass");
    }
    someData = true;
    cmnData<std::string >::DeSerializeText(this->ClassName, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsDescriptionComponentClass");
    }
    someData = true;
    cmnData<std::string >::DeSerializeText(this->ArgType, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsDescriptionComponentClass");
    }
    someData = true;
    cmnData<std::string >::DeSerializeText(this->ArgTypeId, inputStream, delimiter);
}
std::string mtsDescriptionComponentClass::HumanReadable(void) const {
    std::stringstream description;
    description << "mtsDescriptionComponentClass" << std::endl;
    description << "  ClassName:" << cmnData<std::string >::HumanReadable(this->ClassName);
    description << "  ArgType:" << cmnData<std::string >::HumanReadable(this->ArgType);
    description << "  ArgTypeId:" << cmnData<std::string >::HumanReadable(this->ArgTypeId);
    return description.str();
}
bool mtsDescriptionComponentClass::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<std::string >::ScalarNumberIsFixed(this->ClassName)
           && cmnData<std::string >::ScalarNumberIsFixed(this->ArgType)
           && cmnData<std::string >::ScalarNumberIsFixed(this->ArgTypeId)
    ;
}
size_t mtsDescriptionComponentClass::ScalarNumber(void) const {
    return 0
           + cmnData<std::string >::ScalarNumber(this->ClassName)
           + cmnData<std::string >::ScalarNumber(this->ArgType)
           + cmnData<std::string >::ScalarNumber(this->ArgTypeId)
    ;
}
std::string mtsDescriptionComponentClass::ScalarDescription(const size_t index, const std::string & userDescription) const throw (std::out_of_range) {
    std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->ClassName);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::ScalarDescription(this->ClassName, index - baseIndex, prefix + "ClassName");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->ArgType);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::ScalarDescription(this->ArgType, index - baseIndex, prefix + "ArgType");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->ArgTypeId);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::ScalarDescription(this->ArgTypeId, index - baseIndex, prefix + "ArgTypeId");
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: mtsDescriptionComponentClass index out of range"));
    return "";
}
double mtsDescriptionComponentClass::Scalar(const size_t index) const throw (std::out_of_range) {
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->ClassName);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::Scalar(this->ClassName, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->ArgType);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::Scalar(this->ArgType, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->ArgTypeId);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::Scalar(this->ArgTypeId, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalar: mtsDescriptionComponentClass index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<mtsDescriptionComponentClass >::SerializeText(const mtsDescriptionComponentClass & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void mtsDescriptionComponentClass::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<std::string >::SerializeText(this->ClassName, jsonValue["ClassName"]);
    cmnDataJSON<std::string >::SerializeText(this->ArgType, jsonValue["ArgType"]);
    cmnDataJSON<std::string >::SerializeText(this->ArgTypeId, jsonValue["ArgTypeId"]);
}
template<>
void cmnDataJSON<mtsDescriptionComponentClass >::DeSerializeText(mtsDescriptionComponentClass & data, const Json::Value & jsonValue) throw (std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void mtsDescriptionComponentClass::DeSerializeTextJSON(const Json::Value & jsonValue) throw (std::runtime_error) {
    cmnDataJSON<std::string >::DeSerializeText(this->ClassName, jsonValue["ClassName"]);
    cmnDataJSON<std::string >::DeSerializeText(this->ArgType, jsonValue["ArgType"]);
    cmnDataJSON<std::string >::DeSerializeText(this->ArgTypeId, jsonValue["ArgTypeId"]);
}
#endif // CISST_HAS_JSON


/* source line: 77 */
mtsDescriptionInterface::mtsDescriptionInterface(void):
      ProcessName()
    , ComponentName()
    , InterfaceRequiredNames()
    , InterfaceProvidedNames()
{}

mtsDescriptionInterface::mtsDescriptionInterface(const mtsDescriptionInterface & other):
      ProcessName(other.ProcessName)
    , ComponentName(other.ComponentName)
    , InterfaceRequiredNames(other.InterfaceRequiredNames)
    , InterfaceProvidedNames(other.InterfaceProvidedNames)
{}

mtsDescriptionInterface::mtsDescriptionInterface(const std::string & newProcessName, const std::string & newComponentName, const std::vector<std::string> & newInterfaceRequiredNames, const std::vector<std::string> & newInterfaceProvidedNames):
      ProcessName(newProcessName)
    , ComponentName(newComponentName)
    , InterfaceRequiredNames(newInterfaceRequiredNames)
    , InterfaceProvidedNames(newInterfaceProvidedNames)
{}

mtsDescriptionInterface::~mtsDescriptionInterface(void){}


void mtsDescriptionInterface::SerializeRaw(std::ostream & outputStream) const
{
    cmnSerializeRaw(outputStream, this->ProcessName);
    cmnSerializeRaw(outputStream, this->ComponentName);
    cmnSerializeRaw(outputStream, this->InterfaceRequiredNames);
    cmnSerializeRaw(outputStream, this->InterfaceProvidedNames);
}


void mtsDescriptionInterface::DeSerializeRaw(std::istream & inputStream)
{
    cmnDeSerializeRaw(inputStream, this->ProcessName);
    cmnDeSerializeRaw(inputStream, this->ComponentName);
    cmnDeSerializeRaw(inputStream, this->InterfaceRequiredNames);
    cmnDeSerializeRaw(inputStream, this->InterfaceProvidedNames);
}


void mtsDescriptionInterface::ToStream(std::ostream & outputStream) const
{
    outputStream << this->HumanReadable();
}

void mtsDescriptionInterface::ToStreamRaw(std::ostream & outputStream, const char delimiter, bool headerOnly, const std::string & headerPrefix) const
{
    if (headerOnly) {
        outputStream << cmnData<mtsDescriptionInterface >::SerializeDescription(*this, delimiter, headerPrefix);
    } else {
        cmnData<mtsDescriptionInterface >::SerializeText(*this, outputStream, delimiter);
    }
}
/* source line: 82 */
/* source line: 87 */
/* source line: 92 */
/* source line: 97 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const mtsDescriptionInterface & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, mtsDescriptionInterface & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void mtsDescriptionInterface::Copy(const mtsDescriptionInterface & source) {
    cmnData<std::string >::Copy(this->ProcessName, source.ProcessName);
    cmnData<std::string >::Copy(this->ComponentName, source.ComponentName);
    cmnData<std::vector<std::string> >::Copy(this->InterfaceRequiredNames, source.InterfaceRequiredNames);
    cmnData<std::vector<std::string> >::Copy(this->InterfaceProvidedNames, source.InterfaceProvidedNames);
}
void mtsDescriptionInterface::SerializeBinary(std::ostream & outputStream) const throw (std::runtime_error) {
    cmnData<std::string >::SerializeBinary(this->ProcessName, outputStream);
    cmnData<std::string >::SerializeBinary(this->ComponentName, outputStream);
    cmnData<std::vector<std::string> >::SerializeBinary(this->InterfaceRequiredNames, outputStream);
    cmnData<std::vector<std::string> >::SerializeBinary(this->InterfaceProvidedNames, outputStream);
}
void mtsDescriptionInterface::DeSerializeBinary(std::istream & inputStream,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) throw (std::runtime_error) {
    cmnData<std::string >::DeSerializeBinary(this->ProcessName, inputStream, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->ComponentName, inputStream, localFormat, remoteFormat);
    cmnData<std::vector<std::string> >::DeSerializeBinary(this->InterfaceRequiredNames, inputStream, localFormat, remoteFormat);
    cmnData<std::vector<std::string> >::DeSerializeBinary(this->InterfaceProvidedNames, inputStream, localFormat, remoteFormat);
}
void mtsDescriptionInterface::SerializeText(std::ostream & outputStream, const char delimiter) const throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<std::string >::SerializeText(this->ProcessName, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<std::string >::SerializeText(this->ComponentName, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<std::vector<std::string> >::SerializeText(this->InterfaceRequiredNames, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<std::vector<std::string> >::SerializeText(this->InterfaceProvidedNames, outputStream, delimiter);
}
std::string mtsDescriptionInterface::SerializeDescription(const char delimiter, const std::string & userDescription) const {
    bool someData = false;
    const std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    std::stringstream description;
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<std::string >::SerializeDescription(this->ProcessName, delimiter, prefix + "ProcessName");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<std::string >::SerializeDescription(this->ComponentName, delimiter, prefix + "ComponentName");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<std::vector<std::string> >::SerializeDescription(this->InterfaceRequiredNames, delimiter, prefix + "InterfaceRequiredNames");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<std::vector<std::string> >::SerializeDescription(this->InterfaceProvidedNames, delimiter, prefix + "InterfaceProvidedNames");
    return description.str();
}
void mtsDescriptionInterface::DeSerializeText(std::istream & inputStream,
                                          const char delimiter) throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsDescriptionInterface");
    }
    someData = true;
    cmnData<std::string >::DeSerializeText(this->ProcessName, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsDescriptionInterface");
    }
    someData = true;
    cmnData<std::string >::DeSerializeText(this->ComponentName, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsDescriptionInterface");
    }
    someData = true;
    cmnData<std::vector<std::string> >::DeSerializeText(this->InterfaceRequiredNames, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsDescriptionInterface");
    }
    someData = true;
    cmnData<std::vector<std::string> >::DeSerializeText(this->InterfaceProvidedNames, inputStream, delimiter);
}
std::string mtsDescriptionInterface::HumanReadable(void) const {
    std::stringstream description;
    description << "mtsDescriptionInterface" << std::endl;
    description << "  ProcessName:" << cmnData<std::string >::HumanReadable(this->ProcessName);
    description << "  ComponentName:" << cmnData<std::string >::HumanReadable(this->ComponentName);
    description << "  InterfaceRequiredNames:" << cmnData<std::vector<std::string> >::HumanReadable(this->InterfaceRequiredNames);
    description << "  InterfaceProvidedNames:" << cmnData<std::vector<std::string> >::HumanReadable(this->InterfaceProvidedNames);
    return description.str();
}
bool mtsDescriptionInterface::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<std::string >::ScalarNumberIsFixed(this->ProcessName)
           && cmnData<std::string >::ScalarNumberIsFixed(this->ComponentName)
           && cmnData<std::vector<std::string> >::ScalarNumberIsFixed(this->InterfaceRequiredNames)
           && cmnData<std::vector<std::string> >::ScalarNumberIsFixed(this->InterfaceProvidedNames)
    ;
}
size_t mtsDescriptionInterface::ScalarNumber(void) const {
    return 0
           + cmnData<std::string >::ScalarNumber(this->ProcessName)
           + cmnData<std::string >::ScalarNumber(this->ComponentName)
           + cmnData<std::vector<std::string> >::ScalarNumber(this->InterfaceRequiredNames)
           + cmnData<std::vector<std::string> >::ScalarNumber(this->InterfaceProvidedNames)
    ;
}
std::string mtsDescriptionInterface::ScalarDescription(const size_t index, const std::string & userDescription) const throw (std::out_of_range) {
    std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->ProcessName);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::ScalarDescription(this->ProcessName, index - baseIndex, prefix + "ProcessName");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->ComponentName);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::ScalarDescription(this->ComponentName, index - baseIndex, prefix + "ComponentName");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<std::vector<std::string> >::ScalarNumber(this->InterfaceRequiredNames);
    if (index < currentMaxIndex) {
        return cmnData<std::vector<std::string> >::ScalarDescription(this->InterfaceRequiredNames, index - baseIndex, prefix + "InterfaceRequiredNames");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<std::vector<std::string> >::ScalarNumber(this->InterfaceProvidedNames);
    if (index < currentMaxIndex) {
        return cmnData<std::vector<std::string> >::ScalarDescription(this->InterfaceProvidedNames, index - baseIndex, prefix + "InterfaceProvidedNames");
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: mtsDescriptionInterface index out of range"));
    return "";
}
double mtsDescriptionInterface::Scalar(const size_t index) const throw (std::out_of_range) {
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->ProcessName);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::Scalar(this->ProcessName, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->ComponentName);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::Scalar(this->ComponentName, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<std::vector<std::string> >::ScalarNumber(this->InterfaceRequiredNames);
    if (index < currentMaxIndex) {
        return cmnData<std::vector<std::string> >::Scalar(this->InterfaceRequiredNames, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<std::vector<std::string> >::ScalarNumber(this->InterfaceProvidedNames);
    if (index < currentMaxIndex) {
        return cmnData<std::vector<std::string> >::Scalar(this->InterfaceProvidedNames, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalar: mtsDescriptionInterface index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<mtsDescriptionInterface >::SerializeText(const mtsDescriptionInterface & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void mtsDescriptionInterface::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<std::string >::SerializeText(this->ProcessName, jsonValue["ProcessName"]);
    cmnDataJSON<std::string >::SerializeText(this->ComponentName, jsonValue["ComponentName"]);
    cmnDataJSON<std::vector<std::string> >::SerializeText(this->InterfaceRequiredNames, jsonValue["InterfaceRequiredNames"]);
    cmnDataJSON<std::vector<std::string> >::SerializeText(this->InterfaceProvidedNames, jsonValue["InterfaceProvidedNames"]);
}
template<>
void cmnDataJSON<mtsDescriptionInterface >::DeSerializeText(mtsDescriptionInterface & data, const Json::Value & jsonValue) throw (std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void mtsDescriptionInterface::DeSerializeTextJSON(const Json::Value & jsonValue) throw (std::runtime_error) {
    cmnDataJSON<std::string >::DeSerializeText(this->ProcessName, jsonValue["ProcessName"]);
    cmnDataJSON<std::string >::DeSerializeText(this->ComponentName, jsonValue["ComponentName"]);
    cmnDataJSON<std::vector<std::string> >::DeSerializeText(this->InterfaceRequiredNames, jsonValue["InterfaceRequiredNames"]);
    cmnDataJSON<std::vector<std::string> >::DeSerializeText(this->InterfaceProvidedNames, jsonValue["InterfaceProvidedNames"]);
}
#endif // CISST_HAS_JSON

/* source line: 105 */
mtsDescriptionIntefaceFullName::mtsDescriptionIntefaceFullName(void):
      ProcessName()
    , ComponentName()
    , InterfaceName()
{}

mtsDescriptionIntefaceFullName::mtsDescriptionIntefaceFullName(const mtsDescriptionIntefaceFullName & other):
      ProcessName(other.ProcessName)
    , ComponentName(other.ComponentName)
    , InterfaceName(other.InterfaceName)
{}

mtsDescriptionIntefaceFullName::mtsDescriptionIntefaceFullName(const std::string & newProcessName, const std::string & newComponentName, const std::string & newInterfaceName):
      ProcessName(newProcessName)
    , ComponentName(newComponentName)
    , InterfaceName(newInterfaceName)
{}

mtsDescriptionIntefaceFullName::~mtsDescriptionIntefaceFullName(void){}


void mtsDescriptionIntefaceFullName::SerializeRaw(std::ostream & outputStream) const
{
    cmnSerializeRaw(outputStream, this->ProcessName);
    cmnSerializeRaw(outputStream, this->ComponentName);
    cmnSerializeRaw(outputStream, this->InterfaceName);
}


void mtsDescriptionIntefaceFullName::DeSerializeRaw(std::istream & inputStream)
{
    cmnDeSerializeRaw(inputStream, this->ProcessName);
    cmnDeSerializeRaw(inputStream, this->ComponentName);
    cmnDeSerializeRaw(inputStream, this->InterfaceName);
}


void mtsDescriptionIntefaceFullName::ToStream(std::ostream & outputStream) const
{
    outputStream << this->HumanReadable();
}

void mtsDescriptionIntefaceFullName::ToStreamRaw(std::ostream & outputStream, const char delimiter, bool headerOnly, const std::string & headerPrefix) const
{
    if (headerOnly) {
        outputStream << cmnData<mtsDescriptionIntefaceFullName >::SerializeDescription(*this, delimiter, headerPrefix);
    } else {
        cmnData<mtsDescriptionIntefaceFullName >::SerializeText(*this, outputStream, delimiter);
    }
}
/* source line: 110 */
/* source line: 115 */
/* source line: 120 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const mtsDescriptionIntefaceFullName & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, mtsDescriptionIntefaceFullName & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void mtsDescriptionIntefaceFullName::Copy(const mtsDescriptionIntefaceFullName & source) {
    cmnData<std::string >::Copy(this->ProcessName, source.ProcessName);
    cmnData<std::string >::Copy(this->ComponentName, source.ComponentName);
    cmnData<std::string >::Copy(this->InterfaceName, source.InterfaceName);
}
void mtsDescriptionIntefaceFullName::SerializeBinary(std::ostream & outputStream) const throw (std::runtime_error) {
    cmnData<std::string >::SerializeBinary(this->ProcessName, outputStream);
    cmnData<std::string >::SerializeBinary(this->ComponentName, outputStream);
    cmnData<std::string >::SerializeBinary(this->InterfaceName, outputStream);
}
void mtsDescriptionIntefaceFullName::DeSerializeBinary(std::istream & inputStream,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) throw (std::runtime_error) {
    cmnData<std::string >::DeSerializeBinary(this->ProcessName, inputStream, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->ComponentName, inputStream, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->InterfaceName, inputStream, localFormat, remoteFormat);
}
void mtsDescriptionIntefaceFullName::SerializeText(std::ostream & outputStream, const char delimiter) const throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<std::string >::SerializeText(this->ProcessName, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<std::string >::SerializeText(this->ComponentName, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<std::string >::SerializeText(this->InterfaceName, outputStream, delimiter);
}
std::string mtsDescriptionIntefaceFullName::SerializeDescription(const char delimiter, const std::string & userDescription) const {
    bool someData = false;
    const std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    std::stringstream description;
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<std::string >::SerializeDescription(this->ProcessName, delimiter, prefix + "ProcessName");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<std::string >::SerializeDescription(this->ComponentName, delimiter, prefix + "ComponentName");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<std::string >::SerializeDescription(this->InterfaceName, delimiter, prefix + "InterfaceName");
    return description.str();
}
void mtsDescriptionIntefaceFullName::DeSerializeText(std::istream & inputStream,
                                          const char delimiter) throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsDescriptionIntefaceFullName");
    }
    someData = true;
    cmnData<std::string >::DeSerializeText(this->ProcessName, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsDescriptionIntefaceFullName");
    }
    someData = true;
    cmnData<std::string >::DeSerializeText(this->ComponentName, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsDescriptionIntefaceFullName");
    }
    someData = true;
    cmnData<std::string >::DeSerializeText(this->InterfaceName, inputStream, delimiter);
}
std::string mtsDescriptionIntefaceFullName::HumanReadable(void) const {
    std::stringstream description;
    description << "mtsDescriptionIntefaceFullName" << std::endl;
    description << "  ProcessName:" << cmnData<std::string >::HumanReadable(this->ProcessName);
    description << "  ComponentName:" << cmnData<std::string >::HumanReadable(this->ComponentName);
    description << "  InterfaceName:" << cmnData<std::string >::HumanReadable(this->InterfaceName);
    return description.str();
}
bool mtsDescriptionIntefaceFullName::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<std::string >::ScalarNumberIsFixed(this->ProcessName)
           && cmnData<std::string >::ScalarNumberIsFixed(this->ComponentName)
           && cmnData<std::string >::ScalarNumberIsFixed(this->InterfaceName)
    ;
}
size_t mtsDescriptionIntefaceFullName::ScalarNumber(void) const {
    return 0
           + cmnData<std::string >::ScalarNumber(this->ProcessName)
           + cmnData<std::string >::ScalarNumber(this->ComponentName)
           + cmnData<std::string >::ScalarNumber(this->InterfaceName)
    ;
}
std::string mtsDescriptionIntefaceFullName::ScalarDescription(const size_t index, const std::string & userDescription) const throw (std::out_of_range) {
    std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->ProcessName);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::ScalarDescription(this->ProcessName, index - baseIndex, prefix + "ProcessName");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->ComponentName);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::ScalarDescription(this->ComponentName, index - baseIndex, prefix + "ComponentName");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->InterfaceName);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::ScalarDescription(this->InterfaceName, index - baseIndex, prefix + "InterfaceName");
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: mtsDescriptionIntefaceFullName index out of range"));
    return "";
}
double mtsDescriptionIntefaceFullName::Scalar(const size_t index) const throw (std::out_of_range) {
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->ProcessName);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::Scalar(this->ProcessName, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->ComponentName);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::Scalar(this->ComponentName, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->InterfaceName);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::Scalar(this->InterfaceName, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalar: mtsDescriptionIntefaceFullName index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<mtsDescriptionIntefaceFullName >::SerializeText(const mtsDescriptionIntefaceFullName & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void mtsDescriptionIntefaceFullName::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<std::string >::SerializeText(this->ProcessName, jsonValue["ProcessName"]);
    cmnDataJSON<std::string >::SerializeText(this->ComponentName, jsonValue["ComponentName"]);
    cmnDataJSON<std::string >::SerializeText(this->InterfaceName, jsonValue["InterfaceName"]);
}
template<>
void cmnDataJSON<mtsDescriptionIntefaceFullName >::DeSerializeText(mtsDescriptionIntefaceFullName & data, const Json::Value & jsonValue) throw (std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void mtsDescriptionIntefaceFullName::DeSerializeTextJSON(const Json::Value & jsonValue) throw (std::runtime_error) {
    cmnDataJSON<std::string >::DeSerializeText(this->ProcessName, jsonValue["ProcessName"]);
    cmnDataJSON<std::string >::DeSerializeText(this->ComponentName, jsonValue["ComponentName"]);
    cmnDataJSON<std::string >::DeSerializeText(this->InterfaceName, jsonValue["InterfaceName"]);
}
#endif // CISST_HAS_JSON

/* source line: 128 */
mtsDescriptionConnection::mtsDescriptionConnection(void):
      Client()
    , Server()
    , ConnectionID(InvalidConnectionID)
{}

mtsDescriptionConnection::mtsDescriptionConnection(const mtsDescriptionConnection & other):
      Client(other.Client)
    , Server(other.Server)
    , ConnectionID(other.ConnectionID)
{}

mtsDescriptionConnection::mtsDescriptionConnection(const mtsDescriptionIntefaceFullName & newClient, const mtsDescriptionIntefaceFullName & newServer, const ConnectionIDType & newConnectionID):
      Client(newClient)
    , Server(newServer)
    , ConnectionID(newConnectionID)
{}

mtsDescriptionConnection::~mtsDescriptionConnection(void){}


void mtsDescriptionConnection::SerializeRaw(std::ostream & outputStream) const
{
    cmnSerializeRaw(outputStream, this->Client);
    cmnSerializeRaw(outputStream, this->Server);
    cmnSerializeRaw(outputStream, this->ConnectionID);
}


void mtsDescriptionConnection::DeSerializeRaw(std::istream & inputStream)
{
    cmnDeSerializeRaw(inputStream, this->Client);
    cmnDeSerializeRaw(inputStream, this->Server);
    cmnDeSerializeRaw(inputStream, this->ConnectionID);
}


void mtsDescriptionConnection::ToStream(std::ostream & outputStream) const
{
    outputStream << this->HumanReadable();
}

void mtsDescriptionConnection::ToStreamRaw(std::ostream & outputStream, const char delimiter, bool headerOnly, const std::string & headerPrefix) const
{
    if (headerOnly) {
        outputStream << cmnData<mtsDescriptionConnection >::SerializeDescription(*this, delimiter, headerPrefix);
    } else {
        cmnData<mtsDescriptionConnection >::SerializeText(*this, outputStream, delimiter);
    }
}
/* source line: 133 */
/* source line: 138 */
/* source line: 143 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const mtsDescriptionConnection & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, mtsDescriptionConnection & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void mtsDescriptionConnection::Copy(const mtsDescriptionConnection & source) {
    cmnData<mtsDescriptionIntefaceFullName >::Copy(this->Client, source.Client);
    cmnData<mtsDescriptionIntefaceFullName >::Copy(this->Server, source.Server);
    cmnData<ConnectionIDType >::Copy(this->ConnectionID, source.ConnectionID);
}
void mtsDescriptionConnection::SerializeBinary(std::ostream & outputStream) const throw (std::runtime_error) {
    cmnData<mtsDescriptionIntefaceFullName >::SerializeBinary(this->Client, outputStream);
    cmnData<mtsDescriptionIntefaceFullName >::SerializeBinary(this->Server, outputStream);
    cmnData<ConnectionIDType >::SerializeBinary(this->ConnectionID, outputStream);
}
void mtsDescriptionConnection::DeSerializeBinary(std::istream & inputStream,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) throw (std::runtime_error) {
    cmnData<mtsDescriptionIntefaceFullName >::DeSerializeBinary(this->Client, inputStream, localFormat, remoteFormat);
    cmnData<mtsDescriptionIntefaceFullName >::DeSerializeBinary(this->Server, inputStream, localFormat, remoteFormat);
    cmnData<ConnectionIDType >::DeSerializeBinary(this->ConnectionID, inputStream, localFormat, remoteFormat);
}
void mtsDescriptionConnection::SerializeText(std::ostream & outputStream, const char delimiter) const throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<mtsDescriptionIntefaceFullName >::SerializeText(this->Client, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<mtsDescriptionIntefaceFullName >::SerializeText(this->Server, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<ConnectionIDType >::SerializeText(this->ConnectionID, outputStream, delimiter);
}
std::string mtsDescriptionConnection::SerializeDescription(const char delimiter, const std::string & userDescription) const {
    bool someData = false;
    const std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    std::stringstream description;
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<mtsDescriptionIntefaceFullName >::SerializeDescription(this->Client, delimiter, prefix + "Client");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<mtsDescriptionIntefaceFullName >::SerializeDescription(this->Server, delimiter, prefix + "Server");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<ConnectionIDType >::SerializeDescription(this->ConnectionID, delimiter, prefix + "ConnectionID");
    return description.str();
}
void mtsDescriptionConnection::DeSerializeText(std::istream & inputStream,
                                          const char delimiter) throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsDescriptionConnection");
    }
    someData = true;
    cmnData<mtsDescriptionIntefaceFullName >::DeSerializeText(this->Client, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsDescriptionConnection");
    }
    someData = true;
    cmnData<mtsDescriptionIntefaceFullName >::DeSerializeText(this->Server, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsDescriptionConnection");
    }
    someData = true;
    cmnData<ConnectionIDType >::DeSerializeText(this->ConnectionID, inputStream, delimiter);
}
std::string mtsDescriptionConnection::HumanReadable(void) const {
    std::stringstream description;
    description << "mtsDescriptionConnection" << std::endl;
    description << "  Client:" << cmnData<mtsDescriptionIntefaceFullName >::HumanReadable(this->Client);
    description << "  Server:" << cmnData<mtsDescriptionIntefaceFullName >::HumanReadable(this->Server);
    description << "  ConnectionID:" << cmnData<ConnectionIDType >::HumanReadable(this->ConnectionID);
    return description.str();
}
bool mtsDescriptionConnection::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<mtsDescriptionIntefaceFullName >::ScalarNumberIsFixed(this->Client)
           && cmnData<mtsDescriptionIntefaceFullName >::ScalarNumberIsFixed(this->Server)
           && cmnData<ConnectionIDType >::ScalarNumberIsFixed(this->ConnectionID)
    ;
}
size_t mtsDescriptionConnection::ScalarNumber(void) const {
    return 0
           + cmnData<mtsDescriptionIntefaceFullName >::ScalarNumber(this->Client)
           + cmnData<mtsDescriptionIntefaceFullName >::ScalarNumber(this->Server)
           + cmnData<ConnectionIDType >::ScalarNumber(this->ConnectionID)
    ;
}
std::string mtsDescriptionConnection::ScalarDescription(const size_t index, const std::string & userDescription) const throw (std::out_of_range) {
    std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<mtsDescriptionIntefaceFullName >::ScalarNumber(this->Client);
    if (index < currentMaxIndex) {
        return cmnData<mtsDescriptionIntefaceFullName >::ScalarDescription(this->Client, index - baseIndex, prefix + "Client");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<mtsDescriptionIntefaceFullName >::ScalarNumber(this->Server);
    if (index < currentMaxIndex) {
        return cmnData<mtsDescriptionIntefaceFullName >::ScalarDescription(this->Server, index - baseIndex, prefix + "Server");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<ConnectionIDType >::ScalarNumber(this->ConnectionID);
    if (index < currentMaxIndex) {
        return cmnData<ConnectionIDType >::ScalarDescription(this->ConnectionID, index - baseIndex, prefix + "ConnectionID");
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: mtsDescriptionConnection index out of range"));
    return "";
}
double mtsDescriptionConnection::Scalar(const size_t index) const throw (std::out_of_range) {
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<mtsDescriptionIntefaceFullName >::ScalarNumber(this->Client);
    if (index < currentMaxIndex) {
        return cmnData<mtsDescriptionIntefaceFullName >::Scalar(this->Client, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<mtsDescriptionIntefaceFullName >::ScalarNumber(this->Server);
    if (index < currentMaxIndex) {
        return cmnData<mtsDescriptionIntefaceFullName >::Scalar(this->Server, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<ConnectionIDType >::ScalarNumber(this->ConnectionID);
    if (index < currentMaxIndex) {
        return cmnData<ConnectionIDType >::Scalar(this->ConnectionID, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalar: mtsDescriptionConnection index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<mtsDescriptionConnection >::SerializeText(const mtsDescriptionConnection & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void mtsDescriptionConnection::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<mtsDescriptionIntefaceFullName >::SerializeText(this->Client, jsonValue["Client"]);
    cmnDataJSON<mtsDescriptionIntefaceFullName >::SerializeText(this->Server, jsonValue["Server"]);
    cmnDataJSON<ConnectionIDType >::SerializeText(this->ConnectionID, jsonValue["ConnectionID"]);
}
template<>
void cmnDataJSON<mtsDescriptionConnection >::DeSerializeText(mtsDescriptionConnection & data, const Json::Value & jsonValue) throw (std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void mtsDescriptionConnection::DeSerializeTextJSON(const Json::Value & jsonValue) throw (std::runtime_error) {
    cmnDataJSON<mtsDescriptionIntefaceFullName >::DeSerializeText(this->Client, jsonValue["Client"]);
    cmnDataJSON<mtsDescriptionIntefaceFullName >::DeSerializeText(this->Server, jsonValue["Server"]);
    cmnDataJSON<ConnectionIDType >::DeSerializeText(this->ConnectionID, jsonValue["ConnectionID"]);
}
#endif // CISST_HAS_JSON


/* source line: 167 */
mtsComponentStatusControl::mtsComponentStatusControl(void):
      ProcessName()
    , ComponentName()
    , DelayInSecond(0.0)
    , Command()
{}

mtsComponentStatusControl::mtsComponentStatusControl(const mtsComponentStatusControl & other):
      ProcessName(other.ProcessName)
    , ComponentName(other.ComponentName)
    , DelayInSecond(other.DelayInSecond)
    , Command(other.Command)
{}

mtsComponentStatusControl::mtsComponentStatusControl(const std::string & newProcessName, const std::string & newComponentName, const double & newDelayInSecond, const ComponentStatusCommand & newCommand):
      ProcessName(newProcessName)
    , ComponentName(newComponentName)
    , DelayInSecond(newDelayInSecond)
    , Command(newCommand)
{}

mtsComponentStatusControl::~mtsComponentStatusControl(void){}


void mtsComponentStatusControl::SerializeRaw(std::ostream & outputStream) const
{
    cmnSerializeRaw(outputStream, this->ProcessName);
    cmnSerializeRaw(outputStream, this->ComponentName);
    cmnSerializeRaw(outputStream, this->DelayInSecond);
    cmnSerializeRaw(outputStream, this->Command);
}


void mtsComponentStatusControl::DeSerializeRaw(std::istream & inputStream)
{
    cmnDeSerializeRaw(inputStream, this->ProcessName);
    cmnDeSerializeRaw(inputStream, this->ComponentName);
    cmnDeSerializeRaw(inputStream, this->DelayInSecond);
    cmnDeSerializeRaw(inputStream, this->Command);
}


void mtsComponentStatusControl::ToStream(std::ostream & outputStream) const
{
    outputStream << this->HumanReadable();
}

void mtsComponentStatusControl::ToStreamRaw(std::ostream & outputStream, const char delimiter, bool headerOnly, const std::string & headerPrefix) const
{
    if (headerOnly) {
        outputStream << cmnData<mtsComponentStatusControl >::SerializeDescription(*this, delimiter, headerPrefix);
    } else {
        cmnData<mtsComponentStatusControl >::SerializeText(*this, outputStream, delimiter);
    }
}
/* source line: 188 */
/* source line: 193 */
/* source line: 198 */
/* source line: 204 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const mtsComponentStatusControl & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, mtsComponentStatusControl & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void mtsComponentStatusControl::Copy(const mtsComponentStatusControl & source) {
    cmnData<std::string >::Copy(this->ProcessName, source.ProcessName);
    cmnData<std::string >::Copy(this->ComponentName, source.ComponentName);
    cmnData<double >::Copy(this->DelayInSecond, source.DelayInSecond);
    cmnData<ComponentStatusCommand >::Copy(this->Command, source.Command);
}
void mtsComponentStatusControl::SerializeBinary(std::ostream & outputStream) const throw (std::runtime_error) {
    cmnData<std::string >::SerializeBinary(this->ProcessName, outputStream);
    cmnData<std::string >::SerializeBinary(this->ComponentName, outputStream);
    cmnData<double >::SerializeBinary(this->DelayInSecond, outputStream);
    cmnData<ComponentStatusCommand >::SerializeBinary(this->Command, outputStream);
}
void mtsComponentStatusControl::DeSerializeBinary(std::istream & inputStream,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) throw (std::runtime_error) {
    cmnData<std::string >::DeSerializeBinary(this->ProcessName, inputStream, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->ComponentName, inputStream, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->DelayInSecond, inputStream, localFormat, remoteFormat);
    cmnData<ComponentStatusCommand >::DeSerializeBinary(this->Command, inputStream, localFormat, remoteFormat);
}
void mtsComponentStatusControl::SerializeText(std::ostream & outputStream, const char delimiter) const throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<std::string >::SerializeText(this->ProcessName, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<std::string >::SerializeText(this->ComponentName, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<double >::SerializeText(this->DelayInSecond, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<ComponentStatusCommand >::SerializeText(this->Command, outputStream, delimiter);
}
std::string mtsComponentStatusControl::SerializeDescription(const char delimiter, const std::string & userDescription) const {
    bool someData = false;
    const std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    std::stringstream description;
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<std::string >::SerializeDescription(this->ProcessName, delimiter, prefix + "ProcessName");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<std::string >::SerializeDescription(this->ComponentName, delimiter, prefix + "ComponentName");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<double >::SerializeDescription(this->DelayInSecond, delimiter, prefix + "DelayInSecond");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<ComponentStatusCommand >::SerializeDescription(this->Command, delimiter, prefix + "Command");
    return description.str();
}
void mtsComponentStatusControl::DeSerializeText(std::istream & inputStream,
                                          const char delimiter) throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsComponentStatusControl");
    }
    someData = true;
    cmnData<std::string >::DeSerializeText(this->ProcessName, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsComponentStatusControl");
    }
    someData = true;
    cmnData<std::string >::DeSerializeText(this->ComponentName, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsComponentStatusControl");
    }
    someData = true;
    cmnData<double >::DeSerializeText(this->DelayInSecond, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsComponentStatusControl");
    }
    someData = true;
    cmnData<ComponentStatusCommand >::DeSerializeText(this->Command, inputStream, delimiter);
}
std::string mtsComponentStatusControl::HumanReadable(void) const {
    std::stringstream description;
    description << "mtsComponentStatusControl" << std::endl;
    description << "  ProcessName:" << cmnData<std::string >::HumanReadable(this->ProcessName);
    description << "  ComponentName:" << cmnData<std::string >::HumanReadable(this->ComponentName);
    description << "  DelayInSecond:" << cmnData<double >::HumanReadable(this->DelayInSecond);
    description << "  Command:" << cmnData<ComponentStatusCommand >::HumanReadable(this->Command);
    return description.str();
}
bool mtsComponentStatusControl::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<std::string >::ScalarNumberIsFixed(this->ProcessName)
           && cmnData<std::string >::ScalarNumberIsFixed(this->ComponentName)
           && cmnData<double >::ScalarNumberIsFixed(this->DelayInSecond)
           && cmnData<ComponentStatusCommand >::ScalarNumberIsFixed(this->Command)
    ;
}
size_t mtsComponentStatusControl::ScalarNumber(void) const {
    return 0
           + cmnData<std::string >::ScalarNumber(this->ProcessName)
           + cmnData<std::string >::ScalarNumber(this->ComponentName)
           + cmnData<double >::ScalarNumber(this->DelayInSecond)
           + cmnData<ComponentStatusCommand >::ScalarNumber(this->Command)
    ;
}
std::string mtsComponentStatusControl::ScalarDescription(const size_t index, const std::string & userDescription) const throw (std::out_of_range) {
    std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->ProcessName);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::ScalarDescription(this->ProcessName, index - baseIndex, prefix + "ProcessName");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->ComponentName);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::ScalarDescription(this->ComponentName, index - baseIndex, prefix + "ComponentName");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<double >::ScalarNumber(this->DelayInSecond);
    if (index < currentMaxIndex) {
        return cmnData<double >::ScalarDescription(this->DelayInSecond, index - baseIndex, prefix + "DelayInSecond");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<ComponentStatusCommand >::ScalarNumber(this->Command);
    if (index < currentMaxIndex) {
        return cmnData<ComponentStatusCommand >::ScalarDescription(this->Command, index - baseIndex, prefix + "Command");
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: mtsComponentStatusControl index out of range"));
    return "";
}
double mtsComponentStatusControl::Scalar(const size_t index) const throw (std::out_of_range) {
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->ProcessName);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::Scalar(this->ProcessName, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->ComponentName);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::Scalar(this->ComponentName, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<double >::ScalarNumber(this->DelayInSecond);
    if (index < currentMaxIndex) {
        return cmnData<double >::Scalar(this->DelayInSecond, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<ComponentStatusCommand >::ScalarNumber(this->Command);
    if (index < currentMaxIndex) {
        return cmnData<ComponentStatusCommand >::Scalar(this->Command, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalar: mtsComponentStatusControl index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<mtsComponentStatusControl >::SerializeText(const mtsComponentStatusControl & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void mtsComponentStatusControl::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<std::string >::SerializeText(this->ProcessName, jsonValue["ProcessName"]);
    cmnDataJSON<std::string >::SerializeText(this->ComponentName, jsonValue["ComponentName"]);
    cmnDataJSON<double >::SerializeText(this->DelayInSecond, jsonValue["DelayInSecond"]);
    cmnDataJSON<ComponentStatusCommand >::SerializeText(this->Command, jsonValue["Command"]);
}
template<>
void cmnDataJSON<mtsComponentStatusControl >::DeSerializeText(mtsComponentStatusControl & data, const Json::Value & jsonValue) throw (std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void mtsComponentStatusControl::DeSerializeTextJSON(const Json::Value & jsonValue) throw (std::runtime_error) {
    cmnDataJSON<std::string >::DeSerializeText(this->ProcessName, jsonValue["ProcessName"]);
    cmnDataJSON<std::string >::DeSerializeText(this->ComponentName, jsonValue["ComponentName"]);
    cmnDataJSON<double >::DeSerializeText(this->DelayInSecond, jsonValue["DelayInSecond"]);
    cmnDataJSON<ComponentStatusCommand >::DeSerializeText(this->Command, jsonValue["Command"]);
}
#endif // CISST_HAS_JSON
std::string cmnDataHumanReadable_mtsComponentStatusControl_ComponentStatusCommand(const mtsComponentStatusControl::ComponentStatusCommand & data) {
    switch (data) {
        case mtsComponentStatusControl::COMPONENT_START:
            return "START";
            break;
        case mtsComponentStatusControl::COMPONENT_STOP:
            return "STOP";
            break;
        case mtsComponentStatusControl::COMPONENT_RESUME:
            return "RESUME";
            break;
        default: return "undefined enum mtsComponentStatusControl::ComponentStatusCommand";
            break;
    }
}

std::string mtsComponentStatusControl::ComponentStatusCommandToString(const mtsComponentStatusControl::ComponentStatusCommand & data) throw (std::runtime_error) {
    switch (data) {
        case mtsComponentStatusControl::COMPONENT_START:
            return "COMPONENT_START";
            break;
        case mtsComponentStatusControl::COMPONENT_STOP:
            return "COMPONENT_STOP";
            break;
        case mtsComponentStatusControl::COMPONENT_RESUME:
            return "COMPONENT_RESUME";
            break;
        default:
            break;
    }
    cmnThrow("mtsComponentStatusControl::ComponentStatusCommandToString called with invalid enum");
    return "";
}

mtsComponentStatusControl::ComponentStatusCommand mtsComponentStatusControl::ComponentStatusCommandFromString(const std::string & value) throw (std::runtime_error) {
    if (value == "COMPONENT_START") {
        return mtsComponentStatusControl::COMPONENT_START;
    };
    if (value == "COMPONENT_STOP") {
        return mtsComponentStatusControl::COMPONENT_STOP;
    };
    if (value == "COMPONENT_RESUME") {
        return mtsComponentStatusControl::COMPONENT_RESUME;
    };
    cmnThrow("mtsComponentStatusControl::ComponentStatusCommandFromString can't find matching enum for " + value);
    return static_cast<mtsComponentStatusControl::ComponentStatusCommand >(0);
}

const std::vector<int> & mtsComponentStatusControl::ComponentStatusCommandVectorInt(void) {
    static std::vector<int> vectorInt;
    if (vectorInt.empty()) {
        vectorInt.push_back(static_cast<int>(COMPONENT_START));
        vectorInt.push_back(static_cast<int>(COMPONENT_STOP));
        vectorInt.push_back(static_cast<int>(COMPONENT_RESUME));
    }
    return vectorInt;
}

const std::vector<std::string> & mtsComponentStatusControl::ComponentStatusCommandVectorString(void) {
    static std::vector<std::string> vectorString;
    if (vectorString.empty()) {
        vectorString.push_back("COMPONENT_START");
        vectorString.push_back("COMPONENT_STOP");
        vectorString.push_back("COMPONENT_RESUME");
    }
    return vectorString;
}

#if CISST_HAS_JSON
  CMN_IMPLEMENT_DATA_FUNCTIONS_JSON_FOR_ENUM(mtsComponentStatusControl::ComponentStatusCommand, int);
#endif // CISST_HAS_JSON

/* source line: 212 */
mtsComponentStateChange::mtsComponentStateChange(void):
      ProcessName()
    , ComponentName()
    , NewState()
{}

mtsComponentStateChange::mtsComponentStateChange(const mtsComponentStateChange & other):
      ProcessName(other.ProcessName)
    , ComponentName(other.ComponentName)
    , NewState(other.NewState)
{}

mtsComponentStateChange::mtsComponentStateChange(const std::string & newProcessName, const std::string & newComponentName, const mtsComponentState & newNewState):
      ProcessName(newProcessName)
    , ComponentName(newComponentName)
    , NewState(newNewState)
{}

mtsComponentStateChange::~mtsComponentStateChange(void){}


void mtsComponentStateChange::SerializeRaw(std::ostream & outputStream) const
{
    cmnSerializeRaw(outputStream, this->ProcessName);
    cmnSerializeRaw(outputStream, this->ComponentName);
    cmnSerializeRaw(outputStream, this->NewState);
}


void mtsComponentStateChange::DeSerializeRaw(std::istream & inputStream)
{
    cmnDeSerializeRaw(inputStream, this->ProcessName);
    cmnDeSerializeRaw(inputStream, this->ComponentName);
    cmnDeSerializeRaw(inputStream, this->NewState);
}


void mtsComponentStateChange::ToStream(std::ostream & outputStream) const
{
    outputStream << this->HumanReadable();
}

void mtsComponentStateChange::ToStreamRaw(std::ostream & outputStream, const char delimiter, bool headerOnly, const std::string & headerPrefix) const
{
    if (headerOnly) {
        outputStream << cmnData<mtsComponentStateChange >::SerializeDescription(*this, delimiter, headerPrefix);
    } else {
        cmnData<mtsComponentStateChange >::SerializeText(*this, outputStream, delimiter);
    }
}
/* source line: 217 */
/* source line: 222 */
/* source line: 227 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const mtsComponentStateChange & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, mtsComponentStateChange & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void mtsComponentStateChange::Copy(const mtsComponentStateChange & source) {
    cmnData<std::string >::Copy(this->ProcessName, source.ProcessName);
    cmnData<std::string >::Copy(this->ComponentName, source.ComponentName);
    cmnData<mtsComponentState >::Copy(this->NewState, source.NewState);
}
void mtsComponentStateChange::SerializeBinary(std::ostream & outputStream) const throw (std::runtime_error) {
    cmnData<std::string >::SerializeBinary(this->ProcessName, outputStream);
    cmnData<std::string >::SerializeBinary(this->ComponentName, outputStream);
    cmnData<mtsComponentState >::SerializeBinary(this->NewState, outputStream);
}
void mtsComponentStateChange::DeSerializeBinary(std::istream & inputStream,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) throw (std::runtime_error) {
    cmnData<std::string >::DeSerializeBinary(this->ProcessName, inputStream, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->ComponentName, inputStream, localFormat, remoteFormat);
    cmnData<mtsComponentState >::DeSerializeBinary(this->NewState, inputStream, localFormat, remoteFormat);
}
void mtsComponentStateChange::SerializeText(std::ostream & outputStream, const char delimiter) const throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<std::string >::SerializeText(this->ProcessName, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<std::string >::SerializeText(this->ComponentName, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<mtsComponentState >::SerializeText(this->NewState, outputStream, delimiter);
}
std::string mtsComponentStateChange::SerializeDescription(const char delimiter, const std::string & userDescription) const {
    bool someData = false;
    const std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    std::stringstream description;
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<std::string >::SerializeDescription(this->ProcessName, delimiter, prefix + "ProcessName");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<std::string >::SerializeDescription(this->ComponentName, delimiter, prefix + "ComponentName");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<mtsComponentState >::SerializeDescription(this->NewState, delimiter, prefix + "NewState");
    return description.str();
}
void mtsComponentStateChange::DeSerializeText(std::istream & inputStream,
                                          const char delimiter) throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsComponentStateChange");
    }
    someData = true;
    cmnData<std::string >::DeSerializeText(this->ProcessName, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsComponentStateChange");
    }
    someData = true;
    cmnData<std::string >::DeSerializeText(this->ComponentName, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsComponentStateChange");
    }
    someData = true;
    cmnData<mtsComponentState >::DeSerializeText(this->NewState, inputStream, delimiter);
}
std::string mtsComponentStateChange::HumanReadable(void) const {
    std::stringstream description;
    description << "mtsComponentStateChange" << std::endl;
    description << "  ProcessName:" << cmnData<std::string >::HumanReadable(this->ProcessName);
    description << "  ComponentName:" << cmnData<std::string >::HumanReadable(this->ComponentName);
    description << "  NewState:" << cmnData<mtsComponentState >::HumanReadable(this->NewState);
    return description.str();
}
bool mtsComponentStateChange::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<std::string >::ScalarNumberIsFixed(this->ProcessName)
           && cmnData<std::string >::ScalarNumberIsFixed(this->ComponentName)
           && cmnData<mtsComponentState >::ScalarNumberIsFixed(this->NewState)
    ;
}
size_t mtsComponentStateChange::ScalarNumber(void) const {
    return 0
           + cmnData<std::string >::ScalarNumber(this->ProcessName)
           + cmnData<std::string >::ScalarNumber(this->ComponentName)
           + cmnData<mtsComponentState >::ScalarNumber(this->NewState)
    ;
}
std::string mtsComponentStateChange::ScalarDescription(const size_t index, const std::string & userDescription) const throw (std::out_of_range) {
    std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->ProcessName);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::ScalarDescription(this->ProcessName, index - baseIndex, prefix + "ProcessName");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->ComponentName);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::ScalarDescription(this->ComponentName, index - baseIndex, prefix + "ComponentName");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<mtsComponentState >::ScalarNumber(this->NewState);
    if (index < currentMaxIndex) {
        return cmnData<mtsComponentState >::ScalarDescription(this->NewState, index - baseIndex, prefix + "NewState");
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: mtsComponentStateChange index out of range"));
    return "";
}
double mtsComponentStateChange::Scalar(const size_t index) const throw (std::out_of_range) {
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->ProcessName);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::Scalar(this->ProcessName, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->ComponentName);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::Scalar(this->ComponentName, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<mtsComponentState >::ScalarNumber(this->NewState);
    if (index < currentMaxIndex) {
        return cmnData<mtsComponentState >::Scalar(this->NewState, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalar: mtsComponentStateChange index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<mtsComponentStateChange >::SerializeText(const mtsComponentStateChange & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void mtsComponentStateChange::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<std::string >::SerializeText(this->ProcessName, jsonValue["ProcessName"]);
    cmnDataJSON<std::string >::SerializeText(this->ComponentName, jsonValue["ComponentName"]);
    cmnDataJSON<mtsComponentState >::SerializeText(this->NewState, jsonValue["NewState"]);
}
template<>
void cmnDataJSON<mtsComponentStateChange >::DeSerializeText(mtsComponentStateChange & data, const Json::Value & jsonValue) throw (std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void mtsComponentStateChange::DeSerializeTextJSON(const Json::Value & jsonValue) throw (std::runtime_error) {
    cmnDataJSON<std::string >::DeSerializeText(this->ProcessName, jsonValue["ProcessName"]);
    cmnDataJSON<std::string >::DeSerializeText(this->ComponentName, jsonValue["ComponentName"]);
    cmnDataJSON<mtsComponentState >::DeSerializeText(this->NewState, jsonValue["NewState"]);
}
#endif // CISST_HAS_JSON

/* source line: 235 */
mtsDescriptionLoadLibrary::mtsDescriptionLoadLibrary(void):
      ProcessName()
    , LibraryName()
{}

mtsDescriptionLoadLibrary::mtsDescriptionLoadLibrary(const mtsDescriptionLoadLibrary & other):
      ProcessName(other.ProcessName)
    , LibraryName(other.LibraryName)
{}

mtsDescriptionLoadLibrary::mtsDescriptionLoadLibrary(const std::string & newProcessName, const std::string & newLibraryName):
      ProcessName(newProcessName)
    , LibraryName(newLibraryName)
{}

mtsDescriptionLoadLibrary::~mtsDescriptionLoadLibrary(void){}


void mtsDescriptionLoadLibrary::SerializeRaw(std::ostream & outputStream) const
{
    cmnSerializeRaw(outputStream, this->ProcessName);
    cmnSerializeRaw(outputStream, this->LibraryName);
}


void mtsDescriptionLoadLibrary::DeSerializeRaw(std::istream & inputStream)
{
    cmnDeSerializeRaw(inputStream, this->ProcessName);
    cmnDeSerializeRaw(inputStream, this->LibraryName);
}


void mtsDescriptionLoadLibrary::ToStream(std::ostream & outputStream) const
{
    outputStream << this->HumanReadable();
}

void mtsDescriptionLoadLibrary::ToStreamRaw(std::ostream & outputStream, const char delimiter, bool headerOnly, const std::string & headerPrefix) const
{
    if (headerOnly) {
        outputStream << cmnData<mtsDescriptionLoadLibrary >::SerializeDescription(*this, delimiter, headerPrefix);
    } else {
        cmnData<mtsDescriptionLoadLibrary >::SerializeText(*this, outputStream, delimiter);
    }
}
/* source line: 240 */
/* source line: 245 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const mtsDescriptionLoadLibrary & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, mtsDescriptionLoadLibrary & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void mtsDescriptionLoadLibrary::Copy(const mtsDescriptionLoadLibrary & source) {
    cmnData<std::string >::Copy(this->ProcessName, source.ProcessName);
    cmnData<std::string >::Copy(this->LibraryName, source.LibraryName);
}
void mtsDescriptionLoadLibrary::SerializeBinary(std::ostream & outputStream) const throw (std::runtime_error) {
    cmnData<std::string >::SerializeBinary(this->ProcessName, outputStream);
    cmnData<std::string >::SerializeBinary(this->LibraryName, outputStream);
}
void mtsDescriptionLoadLibrary::DeSerializeBinary(std::istream & inputStream,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) throw (std::runtime_error) {
    cmnData<std::string >::DeSerializeBinary(this->ProcessName, inputStream, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->LibraryName, inputStream, localFormat, remoteFormat);
}
void mtsDescriptionLoadLibrary::SerializeText(std::ostream & outputStream, const char delimiter) const throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<std::string >::SerializeText(this->ProcessName, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<std::string >::SerializeText(this->LibraryName, outputStream, delimiter);
}
std::string mtsDescriptionLoadLibrary::SerializeDescription(const char delimiter, const std::string & userDescription) const {
    bool someData = false;
    const std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    std::stringstream description;
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<std::string >::SerializeDescription(this->ProcessName, delimiter, prefix + "ProcessName");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<std::string >::SerializeDescription(this->LibraryName, delimiter, prefix + "LibraryName");
    return description.str();
}
void mtsDescriptionLoadLibrary::DeSerializeText(std::istream & inputStream,
                                          const char delimiter) throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsDescriptionLoadLibrary");
    }
    someData = true;
    cmnData<std::string >::DeSerializeText(this->ProcessName, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsDescriptionLoadLibrary");
    }
    someData = true;
    cmnData<std::string >::DeSerializeText(this->LibraryName, inputStream, delimiter);
}
std::string mtsDescriptionLoadLibrary::HumanReadable(void) const {
    std::stringstream description;
    description << "mtsDescriptionLoadLibrary" << std::endl;
    description << "  ProcessName:" << cmnData<std::string >::HumanReadable(this->ProcessName);
    description << "  LibraryName:" << cmnData<std::string >::HumanReadable(this->LibraryName);
    return description.str();
}
bool mtsDescriptionLoadLibrary::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<std::string >::ScalarNumberIsFixed(this->ProcessName)
           && cmnData<std::string >::ScalarNumberIsFixed(this->LibraryName)
    ;
}
size_t mtsDescriptionLoadLibrary::ScalarNumber(void) const {
    return 0
           + cmnData<std::string >::ScalarNumber(this->ProcessName)
           + cmnData<std::string >::ScalarNumber(this->LibraryName)
    ;
}
std::string mtsDescriptionLoadLibrary::ScalarDescription(const size_t index, const std::string & userDescription) const throw (std::out_of_range) {
    std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->ProcessName);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::ScalarDescription(this->ProcessName, index - baseIndex, prefix + "ProcessName");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->LibraryName);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::ScalarDescription(this->LibraryName, index - baseIndex, prefix + "LibraryName");
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: mtsDescriptionLoadLibrary index out of range"));
    return "";
}
double mtsDescriptionLoadLibrary::Scalar(const size_t index) const throw (std::out_of_range) {
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->ProcessName);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::Scalar(this->ProcessName, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->LibraryName);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::Scalar(this->LibraryName, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalar: mtsDescriptionLoadLibrary index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<mtsDescriptionLoadLibrary >::SerializeText(const mtsDescriptionLoadLibrary & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void mtsDescriptionLoadLibrary::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<std::string >::SerializeText(this->ProcessName, jsonValue["ProcessName"]);
    cmnDataJSON<std::string >::SerializeText(this->LibraryName, jsonValue["LibraryName"]);
}
template<>
void cmnDataJSON<mtsDescriptionLoadLibrary >::DeSerializeText(mtsDescriptionLoadLibrary & data, const Json::Value & jsonValue) throw (std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void mtsDescriptionLoadLibrary::DeSerializeTextJSON(const Json::Value & jsonValue) throw (std::runtime_error) {
    cmnDataJSON<std::string >::DeSerializeText(this->ProcessName, jsonValue["ProcessName"]);
    cmnDataJSON<std::string >::DeSerializeText(this->LibraryName, jsonValue["LibraryName"]);
}
#endif // CISST_HAS_JSON

/* source line: 253 */
mtsEndUserInterfaceArg::mtsEndUserInterfaceArg(void):
      OriginalInterface()
    , UserName()
    , EndUserInterface()
{}

mtsEndUserInterfaceArg::mtsEndUserInterfaceArg(const mtsEndUserInterfaceArg & other):
      OriginalInterface(other.OriginalInterface)
    , UserName(other.UserName)
    , EndUserInterface(other.EndUserInterface)
{}

mtsEndUserInterfaceArg::mtsEndUserInterfaceArg(const size_t & newOriginalInterface, const std::string & newUserName, const size_t & newEndUserInterface):
      OriginalInterface(newOriginalInterface)
    , UserName(newUserName)
    , EndUserInterface(newEndUserInterface)
{}

mtsEndUserInterfaceArg::~mtsEndUserInterfaceArg(void){}


void mtsEndUserInterfaceArg::SerializeRaw(std::ostream & outputStream) const
{
    cmnSerializeSizeRaw(outputStream, this->OriginalInterface);
    cmnSerializeRaw(outputStream, this->UserName);
    cmnSerializeSizeRaw(outputStream, this->EndUserInterface);
}


void mtsEndUserInterfaceArg::DeSerializeRaw(std::istream & inputStream)
{
    cmnDeSerializeSizeRaw(inputStream, this->OriginalInterface);
    cmnDeSerializeRaw(inputStream, this->UserName);
    cmnDeSerializeSizeRaw(inputStream, this->EndUserInterface);
}


void mtsEndUserInterfaceArg::ToStream(std::ostream & outputStream) const
{
    outputStream << this->HumanReadable();
}

void mtsEndUserInterfaceArg::ToStreamRaw(std::ostream & outputStream, const char delimiter, bool headerOnly, const std::string & headerPrefix) const
{
    if (headerOnly) {
        outputStream << cmnData<mtsEndUserInterfaceArg >::SerializeDescription(*this, delimiter, headerPrefix);
    } else {
        cmnData<mtsEndUserInterfaceArg >::SerializeText(*this, outputStream, delimiter);
    }
}
/* source line: 258 */
/* source line: 263 */
/* source line: 268 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const mtsEndUserInterfaceArg & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, mtsEndUserInterfaceArg & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void mtsEndUserInterfaceArg::Copy(const mtsEndUserInterfaceArg & source) {
    cmnData<size_t >::Copy(this->OriginalInterface, source.OriginalInterface);
    cmnData<std::string >::Copy(this->UserName, source.UserName);
    cmnData<size_t >::Copy(this->EndUserInterface, source.EndUserInterface);
}
void mtsEndUserInterfaceArg::SerializeBinary(std::ostream & outputStream) const throw (std::runtime_error) {
    cmnData<size_t >::SerializeBinary(this->OriginalInterface, outputStream);
    cmnData<std::string >::SerializeBinary(this->UserName, outputStream);
    cmnData<size_t >::SerializeBinary(this->EndUserInterface, outputStream);
}
void mtsEndUserInterfaceArg::DeSerializeBinary(std::istream & inputStream,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) throw (std::runtime_error) {
    cmnDataDeSerializeBinary_size_t(this->OriginalInterface, inputStream, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->UserName, inputStream, localFormat, remoteFormat);
    cmnDataDeSerializeBinary_size_t(this->EndUserInterface, inputStream, localFormat, remoteFormat);
}
void mtsEndUserInterfaceArg::SerializeText(std::ostream & outputStream, const char delimiter) const throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<size_t >::SerializeText(this->OriginalInterface, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<std::string >::SerializeText(this->UserName, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<size_t >::SerializeText(this->EndUserInterface, outputStream, delimiter);
}
std::string mtsEndUserInterfaceArg::SerializeDescription(const char delimiter, const std::string & userDescription) const {
    bool someData = false;
    const std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    std::stringstream description;
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<size_t >::SerializeDescription(this->OriginalInterface, delimiter, prefix + "OriginalInterface");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<std::string >::SerializeDescription(this->UserName, delimiter, prefix + "UserName");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<size_t >::SerializeDescription(this->EndUserInterface, delimiter, prefix + "EndUserInterface");
    return description.str();
}
void mtsEndUserInterfaceArg::DeSerializeText(std::istream & inputStream,
                                          const char delimiter) throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsEndUserInterfaceArg");
    }
    someData = true;
    cmnData<size_t >::DeSerializeText(this->OriginalInterface, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsEndUserInterfaceArg");
    }
    someData = true;
    cmnData<std::string >::DeSerializeText(this->UserName, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsEndUserInterfaceArg");
    }
    someData = true;
    cmnData<size_t >::DeSerializeText(this->EndUserInterface, inputStream, delimiter);
}
std::string mtsEndUserInterfaceArg::HumanReadable(void) const {
    std::stringstream description;
    description << "mtsEndUserInterfaceArg" << std::endl;
    description << "  OriginalInterface:" << cmnData<size_t >::HumanReadable(this->OriginalInterface);
    description << "  UserName:" << cmnData<std::string >::HumanReadable(this->UserName);
    description << "  EndUserInterface:" << cmnData<size_t >::HumanReadable(this->EndUserInterface);
    return description.str();
}
bool mtsEndUserInterfaceArg::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<size_t >::ScalarNumberIsFixed(this->OriginalInterface)
           && cmnData<std::string >::ScalarNumberIsFixed(this->UserName)
           && cmnData<size_t >::ScalarNumberIsFixed(this->EndUserInterface)
    ;
}
size_t mtsEndUserInterfaceArg::ScalarNumber(void) const {
    return 0
           + cmnData<size_t >::ScalarNumber(this->OriginalInterface)
           + cmnData<std::string >::ScalarNumber(this->UserName)
           + cmnData<size_t >::ScalarNumber(this->EndUserInterface)
    ;
}
std::string mtsEndUserInterfaceArg::ScalarDescription(const size_t index, const std::string & userDescription) const throw (std::out_of_range) {
    std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<size_t >::ScalarNumber(this->OriginalInterface);
    if (index < currentMaxIndex) {
        return cmnData<size_t >::ScalarDescription(this->OriginalInterface, index - baseIndex, prefix + "OriginalInterface");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->UserName);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::ScalarDescription(this->UserName, index - baseIndex, prefix + "UserName");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<size_t >::ScalarNumber(this->EndUserInterface);
    if (index < currentMaxIndex) {
        return cmnData<size_t >::ScalarDescription(this->EndUserInterface, index - baseIndex, prefix + "EndUserInterface");
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: mtsEndUserInterfaceArg index out of range"));
    return "";
}
double mtsEndUserInterfaceArg::Scalar(const size_t index) const throw (std::out_of_range) {
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<size_t >::ScalarNumber(this->OriginalInterface);
    if (index < currentMaxIndex) {
        return cmnData<size_t >::Scalar(this->OriginalInterface, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->UserName);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::Scalar(this->UserName, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<size_t >::ScalarNumber(this->EndUserInterface);
    if (index < currentMaxIndex) {
        return cmnData<size_t >::Scalar(this->EndUserInterface, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalar: mtsEndUserInterfaceArg index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<mtsEndUserInterfaceArg >::SerializeText(const mtsEndUserInterfaceArg & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void mtsEndUserInterfaceArg::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<size_t >::SerializeText(this->OriginalInterface, jsonValue["OriginalInterface"]);
    cmnDataJSON<std::string >::SerializeText(this->UserName, jsonValue["UserName"]);
    cmnDataJSON<size_t >::SerializeText(this->EndUserInterface, jsonValue["EndUserInterface"]);
}
template<>
void cmnDataJSON<mtsEndUserInterfaceArg >::DeSerializeText(mtsEndUserInterfaceArg & data, const Json::Value & jsonValue) throw (std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void mtsEndUserInterfaceArg::DeSerializeTextJSON(const Json::Value & jsonValue) throw (std::runtime_error) {
    cmnDataJSON<size_t >::DeSerializeText(this->OriginalInterface, jsonValue["OriginalInterface"]);
    cmnDataJSON<std::string >::DeSerializeText(this->UserName, jsonValue["UserName"]);
    cmnDataJSON<size_t >::DeSerializeText(this->EndUserInterface, jsonValue["EndUserInterface"]);
}
#endif // CISST_HAS_JSON

