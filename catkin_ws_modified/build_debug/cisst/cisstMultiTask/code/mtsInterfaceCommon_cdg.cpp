// file automatically generated, do not modify
// cisst version: 1.0.8
// source file: /home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/code/../mtsInterfaceCommon.cdg

#include <cisstMultiTask/mtsInterfaceCommon.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>

/* source line: 1 */

/* source line: 9 */
mtsCommandVoidDescription::mtsCommandVoidDescription(void):
      Name()
{}

mtsCommandVoidDescription::mtsCommandVoidDescription(const mtsCommandVoidDescription & other):
      Name(other.Name)
{}

mtsCommandVoidDescription::mtsCommandVoidDescription(const std::string & newName):
      Name(newName)
{}

mtsCommandVoidDescription::~mtsCommandVoidDescription(void){}


void mtsCommandVoidDescription::SerializeRaw(std::ostream & outputStream) const
{
    cmnSerializeRaw(outputStream, this->Name);
}


void mtsCommandVoidDescription::DeSerializeRaw(std::istream & inputStream)
{
    cmnDeSerializeRaw(inputStream, this->Name);
}


void mtsCommandVoidDescription::ToStream(std::ostream & outputStream) const
{
    outputStream << this->HumanReadable();
}

void mtsCommandVoidDescription::ToStreamRaw(std::ostream & outputStream, const char delimiter, bool headerOnly, const std::string & headerPrefix) const
{
    if (headerOnly) {
        outputStream << cmnData<mtsCommandVoidDescription >::SerializeDescription(*this, delimiter, headerPrefix);
    } else {
        cmnData<mtsCommandVoidDescription >::SerializeText(*this, outputStream, delimiter);
    }
}
/* source line: 14 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const mtsCommandVoidDescription & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, mtsCommandVoidDescription & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void mtsCommandVoidDescription::Copy(const mtsCommandVoidDescription & source) {
    cmnData<std::string >::Copy(this->Name, source.Name);
}
void mtsCommandVoidDescription::SerializeBinary(std::ostream & outputStream) const throw (std::runtime_error) {
    cmnData<std::string >::SerializeBinary(this->Name, outputStream);
}
void mtsCommandVoidDescription::DeSerializeBinary(std::istream & inputStream,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) throw (std::runtime_error) {
    cmnData<std::string >::DeSerializeBinary(this->Name, inputStream, localFormat, remoteFormat);
}
void mtsCommandVoidDescription::SerializeText(std::ostream & outputStream, const char delimiter) const throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<std::string >::SerializeText(this->Name, outputStream, delimiter);
}
std::string mtsCommandVoidDescription::SerializeDescription(const char delimiter, const std::string & userDescription) const {
    bool someData = false;
    const std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    std::stringstream description;
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<std::string >::SerializeDescription(this->Name, delimiter, prefix + "Name");
    return description.str();
}
void mtsCommandVoidDescription::DeSerializeText(std::istream & inputStream,
                                          const char delimiter) throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsCommandVoidDescription");
    }
    someData = true;
    cmnData<std::string >::DeSerializeText(this->Name, inputStream, delimiter);
}
std::string mtsCommandVoidDescription::HumanReadable(void) const {
    std::stringstream description;
    description << "mtsCommandVoidDescription" << std::endl;
    description << "  Name:" << cmnData<std::string >::HumanReadable(this->Name);
    return description.str();
}
bool mtsCommandVoidDescription::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<std::string >::ScalarNumberIsFixed(this->Name)
    ;
}
size_t mtsCommandVoidDescription::ScalarNumber(void) const {
    return 0
           + cmnData<std::string >::ScalarNumber(this->Name)
    ;
}
std::string mtsCommandVoidDescription::ScalarDescription(const size_t index, const std::string & userDescription) const throw (std::out_of_range) {
    std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->Name);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::ScalarDescription(this->Name, index - baseIndex, prefix + "Name");
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: mtsCommandVoidDescription index out of range"));
    return "";
}
double mtsCommandVoidDescription::Scalar(const size_t index) const throw (std::out_of_range) {
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->Name);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::Scalar(this->Name, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalar: mtsCommandVoidDescription index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<mtsCommandVoidDescription >::SerializeText(const mtsCommandVoidDescription & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void mtsCommandVoidDescription::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<std::string >::SerializeText(this->Name, jsonValue["Name"]);
}
template<>
void cmnDataJSON<mtsCommandVoidDescription >::DeSerializeText(mtsCommandVoidDescription & data, const Json::Value & jsonValue) throw (std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void mtsCommandVoidDescription::DeSerializeTextJSON(const Json::Value & jsonValue) throw (std::runtime_error) {
    cmnDataJSON<std::string >::DeSerializeText(this->Name, jsonValue["Name"]);
}
#endif // CISST_HAS_JSON

/* source line: 21 */
mtsCommandWriteDescription::mtsCommandWriteDescription(void):
      Name()
    , ArgumentPrototypeSerialized()
{}

mtsCommandWriteDescription::mtsCommandWriteDescription(const mtsCommandWriteDescription & other):
      Name(other.Name)
    , ArgumentPrototypeSerialized(other.ArgumentPrototypeSerialized)
{}

mtsCommandWriteDescription::mtsCommandWriteDescription(const std::string & newName, const std::string & newArgumentPrototypeSerialized):
      Name(newName)
    , ArgumentPrototypeSerialized(newArgumentPrototypeSerialized)
{}

mtsCommandWriteDescription::~mtsCommandWriteDescription(void){}


void mtsCommandWriteDescription::SerializeRaw(std::ostream & outputStream) const
{
    cmnSerializeRaw(outputStream, this->Name);
    cmnSerializeRaw(outputStream, this->ArgumentPrototypeSerialized);
}


void mtsCommandWriteDescription::DeSerializeRaw(std::istream & inputStream)
{
    cmnDeSerializeRaw(inputStream, this->Name);
    cmnDeSerializeRaw(inputStream, this->ArgumentPrototypeSerialized);
}


void mtsCommandWriteDescription::ToStream(std::ostream & outputStream) const
{
    outputStream << this->HumanReadable();
}

void mtsCommandWriteDescription::ToStreamRaw(std::ostream & outputStream, const char delimiter, bool headerOnly, const std::string & headerPrefix) const
{
    if (headerOnly) {
        outputStream << cmnData<mtsCommandWriteDescription >::SerializeDescription(*this, delimiter, headerPrefix);
    } else {
        cmnData<mtsCommandWriteDescription >::SerializeText(*this, outputStream, delimiter);
    }
}
/* source line: 26 */
/* source line: 31 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const mtsCommandWriteDescription & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, mtsCommandWriteDescription & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void mtsCommandWriteDescription::Copy(const mtsCommandWriteDescription & source) {
    cmnData<std::string >::Copy(this->Name, source.Name);
    cmnData<std::string >::Copy(this->ArgumentPrototypeSerialized, source.ArgumentPrototypeSerialized);
}
void mtsCommandWriteDescription::SerializeBinary(std::ostream & outputStream) const throw (std::runtime_error) {
    cmnData<std::string >::SerializeBinary(this->Name, outputStream);
    cmnData<std::string >::SerializeBinary(this->ArgumentPrototypeSerialized, outputStream);
}
void mtsCommandWriteDescription::DeSerializeBinary(std::istream & inputStream,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) throw (std::runtime_error) {
    cmnData<std::string >::DeSerializeBinary(this->Name, inputStream, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->ArgumentPrototypeSerialized, inputStream, localFormat, remoteFormat);
}
void mtsCommandWriteDescription::SerializeText(std::ostream & outputStream, const char delimiter) const throw (std::runtime_error) {
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
    cmnData<std::string >::SerializeText(this->ArgumentPrototypeSerialized, outputStream, delimiter);
}
std::string mtsCommandWriteDescription::SerializeDescription(const char delimiter, const std::string & userDescription) const {
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
    description << cmnData<std::string >::SerializeDescription(this->ArgumentPrototypeSerialized, delimiter, prefix + "ArgumentPrototypeSerialized");
    return description.str();
}
void mtsCommandWriteDescription::DeSerializeText(std::istream & inputStream,
                                          const char delimiter) throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsCommandWriteDescription");
    }
    someData = true;
    cmnData<std::string >::DeSerializeText(this->Name, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsCommandWriteDescription");
    }
    someData = true;
    cmnData<std::string >::DeSerializeText(this->ArgumentPrototypeSerialized, inputStream, delimiter);
}
std::string mtsCommandWriteDescription::HumanReadable(void) const {
    std::stringstream description;
    description << "mtsCommandWriteDescription" << std::endl;
    description << "  Name:" << cmnData<std::string >::HumanReadable(this->Name);
    description << "  ArgumentPrototypeSerialized:" << cmnData<std::string >::HumanReadable(this->ArgumentPrototypeSerialized);
    return description.str();
}
bool mtsCommandWriteDescription::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<std::string >::ScalarNumberIsFixed(this->Name)
           && cmnData<std::string >::ScalarNumberIsFixed(this->ArgumentPrototypeSerialized)
    ;
}
size_t mtsCommandWriteDescription::ScalarNumber(void) const {
    return 0
           + cmnData<std::string >::ScalarNumber(this->Name)
           + cmnData<std::string >::ScalarNumber(this->ArgumentPrototypeSerialized)
    ;
}
std::string mtsCommandWriteDescription::ScalarDescription(const size_t index, const std::string & userDescription) const throw (std::out_of_range) {
    std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->Name);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::ScalarDescription(this->Name, index - baseIndex, prefix + "Name");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->ArgumentPrototypeSerialized);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::ScalarDescription(this->ArgumentPrototypeSerialized, index - baseIndex, prefix + "ArgumentPrototypeSerialized");
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: mtsCommandWriteDescription index out of range"));
    return "";
}
double mtsCommandWriteDescription::Scalar(const size_t index) const throw (std::out_of_range) {
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->Name);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::Scalar(this->Name, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->ArgumentPrototypeSerialized);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::Scalar(this->ArgumentPrototypeSerialized, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalar: mtsCommandWriteDescription index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<mtsCommandWriteDescription >::SerializeText(const mtsCommandWriteDescription & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void mtsCommandWriteDescription::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<std::string >::SerializeText(this->Name, jsonValue["Name"]);
    cmnDataJSON<std::string >::SerializeText(this->ArgumentPrototypeSerialized, jsonValue["ArgumentPrototypeSerialized"]);
}
template<>
void cmnDataJSON<mtsCommandWriteDescription >::DeSerializeText(mtsCommandWriteDescription & data, const Json::Value & jsonValue) throw (std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void mtsCommandWriteDescription::DeSerializeTextJSON(const Json::Value & jsonValue) throw (std::runtime_error) {
    cmnDataJSON<std::string >::DeSerializeText(this->Name, jsonValue["Name"]);
    cmnDataJSON<std::string >::DeSerializeText(this->ArgumentPrototypeSerialized, jsonValue["ArgumentPrototypeSerialized"]);
}
#endif // CISST_HAS_JSON

/* source line: 38 */
mtsCommandReadDescription::mtsCommandReadDescription(void):
      Name()
    , ArgumentPrototypeSerialized()
{}

mtsCommandReadDescription::mtsCommandReadDescription(const mtsCommandReadDescription & other):
      Name(other.Name)
    , ArgumentPrototypeSerialized(other.ArgumentPrototypeSerialized)
{}

mtsCommandReadDescription::mtsCommandReadDescription(const std::string & newName, const std::string & newArgumentPrototypeSerialized):
      Name(newName)
    , ArgumentPrototypeSerialized(newArgumentPrototypeSerialized)
{}

mtsCommandReadDescription::~mtsCommandReadDescription(void){}


void mtsCommandReadDescription::SerializeRaw(std::ostream & outputStream) const
{
    cmnSerializeRaw(outputStream, this->Name);
    cmnSerializeRaw(outputStream, this->ArgumentPrototypeSerialized);
}


void mtsCommandReadDescription::DeSerializeRaw(std::istream & inputStream)
{
    cmnDeSerializeRaw(inputStream, this->Name);
    cmnDeSerializeRaw(inputStream, this->ArgumentPrototypeSerialized);
}


void mtsCommandReadDescription::ToStream(std::ostream & outputStream) const
{
    outputStream << this->HumanReadable();
}

void mtsCommandReadDescription::ToStreamRaw(std::ostream & outputStream, const char delimiter, bool headerOnly, const std::string & headerPrefix) const
{
    if (headerOnly) {
        outputStream << cmnData<mtsCommandReadDescription >::SerializeDescription(*this, delimiter, headerPrefix);
    } else {
        cmnData<mtsCommandReadDescription >::SerializeText(*this, outputStream, delimiter);
    }
}
/* source line: 43 */
/* source line: 48 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const mtsCommandReadDescription & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, mtsCommandReadDescription & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void mtsCommandReadDescription::Copy(const mtsCommandReadDescription & source) {
    cmnData<std::string >::Copy(this->Name, source.Name);
    cmnData<std::string >::Copy(this->ArgumentPrototypeSerialized, source.ArgumentPrototypeSerialized);
}
void mtsCommandReadDescription::SerializeBinary(std::ostream & outputStream) const throw (std::runtime_error) {
    cmnData<std::string >::SerializeBinary(this->Name, outputStream);
    cmnData<std::string >::SerializeBinary(this->ArgumentPrototypeSerialized, outputStream);
}
void mtsCommandReadDescription::DeSerializeBinary(std::istream & inputStream,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) throw (std::runtime_error) {
    cmnData<std::string >::DeSerializeBinary(this->Name, inputStream, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->ArgumentPrototypeSerialized, inputStream, localFormat, remoteFormat);
}
void mtsCommandReadDescription::SerializeText(std::ostream & outputStream, const char delimiter) const throw (std::runtime_error) {
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
    cmnData<std::string >::SerializeText(this->ArgumentPrototypeSerialized, outputStream, delimiter);
}
std::string mtsCommandReadDescription::SerializeDescription(const char delimiter, const std::string & userDescription) const {
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
    description << cmnData<std::string >::SerializeDescription(this->ArgumentPrototypeSerialized, delimiter, prefix + "ArgumentPrototypeSerialized");
    return description.str();
}
void mtsCommandReadDescription::DeSerializeText(std::istream & inputStream,
                                          const char delimiter) throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsCommandReadDescription");
    }
    someData = true;
    cmnData<std::string >::DeSerializeText(this->Name, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsCommandReadDescription");
    }
    someData = true;
    cmnData<std::string >::DeSerializeText(this->ArgumentPrototypeSerialized, inputStream, delimiter);
}
std::string mtsCommandReadDescription::HumanReadable(void) const {
    std::stringstream description;
    description << "mtsCommandReadDescription" << std::endl;
    description << "  Name:" << cmnData<std::string >::HumanReadable(this->Name);
    description << "  ArgumentPrototypeSerialized:" << cmnData<std::string >::HumanReadable(this->ArgumentPrototypeSerialized);
    return description.str();
}
bool mtsCommandReadDescription::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<std::string >::ScalarNumberIsFixed(this->Name)
           && cmnData<std::string >::ScalarNumberIsFixed(this->ArgumentPrototypeSerialized)
    ;
}
size_t mtsCommandReadDescription::ScalarNumber(void) const {
    return 0
           + cmnData<std::string >::ScalarNumber(this->Name)
           + cmnData<std::string >::ScalarNumber(this->ArgumentPrototypeSerialized)
    ;
}
std::string mtsCommandReadDescription::ScalarDescription(const size_t index, const std::string & userDescription) const throw (std::out_of_range) {
    std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->Name);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::ScalarDescription(this->Name, index - baseIndex, prefix + "Name");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->ArgumentPrototypeSerialized);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::ScalarDescription(this->ArgumentPrototypeSerialized, index - baseIndex, prefix + "ArgumentPrototypeSerialized");
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: mtsCommandReadDescription index out of range"));
    return "";
}
double mtsCommandReadDescription::Scalar(const size_t index) const throw (std::out_of_range) {
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->Name);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::Scalar(this->Name, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->ArgumentPrototypeSerialized);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::Scalar(this->ArgumentPrototypeSerialized, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalar: mtsCommandReadDescription index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<mtsCommandReadDescription >::SerializeText(const mtsCommandReadDescription & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void mtsCommandReadDescription::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<std::string >::SerializeText(this->Name, jsonValue["Name"]);
    cmnDataJSON<std::string >::SerializeText(this->ArgumentPrototypeSerialized, jsonValue["ArgumentPrototypeSerialized"]);
}
template<>
void cmnDataJSON<mtsCommandReadDescription >::DeSerializeText(mtsCommandReadDescription & data, const Json::Value & jsonValue) throw (std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void mtsCommandReadDescription::DeSerializeTextJSON(const Json::Value & jsonValue) throw (std::runtime_error) {
    cmnDataJSON<std::string >::DeSerializeText(this->Name, jsonValue["Name"]);
    cmnDataJSON<std::string >::DeSerializeText(this->ArgumentPrototypeSerialized, jsonValue["ArgumentPrototypeSerialized"]);
}
#endif // CISST_HAS_JSON

/* source line: 55 */
mtsCommandQualifiedReadDescription::mtsCommandQualifiedReadDescription(void):
      Name()
    , Argument1PrototypeSerialized()
    , Argument2PrototypeSerialized()
{}

mtsCommandQualifiedReadDescription::mtsCommandQualifiedReadDescription(const mtsCommandQualifiedReadDescription & other):
      Name(other.Name)
    , Argument1PrototypeSerialized(other.Argument1PrototypeSerialized)
    , Argument2PrototypeSerialized(other.Argument2PrototypeSerialized)
{}

mtsCommandQualifiedReadDescription::mtsCommandQualifiedReadDescription(const std::string & newName, const std::string & newArgument1PrototypeSerialized, const std::string & newArgument2PrototypeSerialized):
      Name(newName)
    , Argument1PrototypeSerialized(newArgument1PrototypeSerialized)
    , Argument2PrototypeSerialized(newArgument2PrototypeSerialized)
{}

mtsCommandQualifiedReadDescription::~mtsCommandQualifiedReadDescription(void){}


void mtsCommandQualifiedReadDescription::SerializeRaw(std::ostream & outputStream) const
{
    cmnSerializeRaw(outputStream, this->Name);
    cmnSerializeRaw(outputStream, this->Argument1PrototypeSerialized);
    cmnSerializeRaw(outputStream, this->Argument2PrototypeSerialized);
}


void mtsCommandQualifiedReadDescription::DeSerializeRaw(std::istream & inputStream)
{
    cmnDeSerializeRaw(inputStream, this->Name);
    cmnDeSerializeRaw(inputStream, this->Argument1PrototypeSerialized);
    cmnDeSerializeRaw(inputStream, this->Argument2PrototypeSerialized);
}


void mtsCommandQualifiedReadDescription::ToStream(std::ostream & outputStream) const
{
    outputStream << this->HumanReadable();
}

void mtsCommandQualifiedReadDescription::ToStreamRaw(std::ostream & outputStream, const char delimiter, bool headerOnly, const std::string & headerPrefix) const
{
    if (headerOnly) {
        outputStream << cmnData<mtsCommandQualifiedReadDescription >::SerializeDescription(*this, delimiter, headerPrefix);
    } else {
        cmnData<mtsCommandQualifiedReadDescription >::SerializeText(*this, outputStream, delimiter);
    }
}
/* source line: 60 */
/* source line: 65 */
/* source line: 70 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const mtsCommandQualifiedReadDescription & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, mtsCommandQualifiedReadDescription & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void mtsCommandQualifiedReadDescription::Copy(const mtsCommandQualifiedReadDescription & source) {
    cmnData<std::string >::Copy(this->Name, source.Name);
    cmnData<std::string >::Copy(this->Argument1PrototypeSerialized, source.Argument1PrototypeSerialized);
    cmnData<std::string >::Copy(this->Argument2PrototypeSerialized, source.Argument2PrototypeSerialized);
}
void mtsCommandQualifiedReadDescription::SerializeBinary(std::ostream & outputStream) const throw (std::runtime_error) {
    cmnData<std::string >::SerializeBinary(this->Name, outputStream);
    cmnData<std::string >::SerializeBinary(this->Argument1PrototypeSerialized, outputStream);
    cmnData<std::string >::SerializeBinary(this->Argument2PrototypeSerialized, outputStream);
}
void mtsCommandQualifiedReadDescription::DeSerializeBinary(std::istream & inputStream,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) throw (std::runtime_error) {
    cmnData<std::string >::DeSerializeBinary(this->Name, inputStream, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->Argument1PrototypeSerialized, inputStream, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->Argument2PrototypeSerialized, inputStream, localFormat, remoteFormat);
}
void mtsCommandQualifiedReadDescription::SerializeText(std::ostream & outputStream, const char delimiter) const throw (std::runtime_error) {
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
    cmnData<std::string >::SerializeText(this->Argument1PrototypeSerialized, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<std::string >::SerializeText(this->Argument2PrototypeSerialized, outputStream, delimiter);
}
std::string mtsCommandQualifiedReadDescription::SerializeDescription(const char delimiter, const std::string & userDescription) const {
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
    description << cmnData<std::string >::SerializeDescription(this->Argument1PrototypeSerialized, delimiter, prefix + "Argument1PrototypeSerialized");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<std::string >::SerializeDescription(this->Argument2PrototypeSerialized, delimiter, prefix + "Argument2PrototypeSerialized");
    return description.str();
}
void mtsCommandQualifiedReadDescription::DeSerializeText(std::istream & inputStream,
                                          const char delimiter) throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsCommandQualifiedReadDescription");
    }
    someData = true;
    cmnData<std::string >::DeSerializeText(this->Name, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsCommandQualifiedReadDescription");
    }
    someData = true;
    cmnData<std::string >::DeSerializeText(this->Argument1PrototypeSerialized, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsCommandQualifiedReadDescription");
    }
    someData = true;
    cmnData<std::string >::DeSerializeText(this->Argument2PrototypeSerialized, inputStream, delimiter);
}
std::string mtsCommandQualifiedReadDescription::HumanReadable(void) const {
    std::stringstream description;
    description << "mtsCommandQualifiedReadDescription" << std::endl;
    description << "  Name:" << cmnData<std::string >::HumanReadable(this->Name);
    description << "  Argument1PrototypeSerialized:" << cmnData<std::string >::HumanReadable(this->Argument1PrototypeSerialized);
    description << "  Argument2PrototypeSerialized:" << cmnData<std::string >::HumanReadable(this->Argument2PrototypeSerialized);
    return description.str();
}
bool mtsCommandQualifiedReadDescription::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<std::string >::ScalarNumberIsFixed(this->Name)
           && cmnData<std::string >::ScalarNumberIsFixed(this->Argument1PrototypeSerialized)
           && cmnData<std::string >::ScalarNumberIsFixed(this->Argument2PrototypeSerialized)
    ;
}
size_t mtsCommandQualifiedReadDescription::ScalarNumber(void) const {
    return 0
           + cmnData<std::string >::ScalarNumber(this->Name)
           + cmnData<std::string >::ScalarNumber(this->Argument1PrototypeSerialized)
           + cmnData<std::string >::ScalarNumber(this->Argument2PrototypeSerialized)
    ;
}
std::string mtsCommandQualifiedReadDescription::ScalarDescription(const size_t index, const std::string & userDescription) const throw (std::out_of_range) {
    std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->Name);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::ScalarDescription(this->Name, index - baseIndex, prefix + "Name");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->Argument1PrototypeSerialized);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::ScalarDescription(this->Argument1PrototypeSerialized, index - baseIndex, prefix + "Argument1PrototypeSerialized");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->Argument2PrototypeSerialized);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::ScalarDescription(this->Argument2PrototypeSerialized, index - baseIndex, prefix + "Argument2PrototypeSerialized");
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: mtsCommandQualifiedReadDescription index out of range"));
    return "";
}
double mtsCommandQualifiedReadDescription::Scalar(const size_t index) const throw (std::out_of_range) {
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->Name);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::Scalar(this->Name, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->Argument1PrototypeSerialized);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::Scalar(this->Argument1PrototypeSerialized, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->Argument2PrototypeSerialized);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::Scalar(this->Argument2PrototypeSerialized, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalar: mtsCommandQualifiedReadDescription index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<mtsCommandQualifiedReadDescription >::SerializeText(const mtsCommandQualifiedReadDescription & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void mtsCommandQualifiedReadDescription::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<std::string >::SerializeText(this->Name, jsonValue["Name"]);
    cmnDataJSON<std::string >::SerializeText(this->Argument1PrototypeSerialized, jsonValue["Argument1PrototypeSerialized"]);
    cmnDataJSON<std::string >::SerializeText(this->Argument2PrototypeSerialized, jsonValue["Argument2PrototypeSerialized"]);
}
template<>
void cmnDataJSON<mtsCommandQualifiedReadDescription >::DeSerializeText(mtsCommandQualifiedReadDescription & data, const Json::Value & jsonValue) throw (std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void mtsCommandQualifiedReadDescription::DeSerializeTextJSON(const Json::Value & jsonValue) throw (std::runtime_error) {
    cmnDataJSON<std::string >::DeSerializeText(this->Name, jsonValue["Name"]);
    cmnDataJSON<std::string >::DeSerializeText(this->Argument1PrototypeSerialized, jsonValue["Argument1PrototypeSerialized"]);
    cmnDataJSON<std::string >::DeSerializeText(this->Argument2PrototypeSerialized, jsonValue["Argument2PrototypeSerialized"]);
}
#endif // CISST_HAS_JSON

/* source line: 77 */
mtsCommandVoidReturnDescription::mtsCommandVoidReturnDescription(void):
      Name()
    , ResultPrototypeSerialized()
{}

mtsCommandVoidReturnDescription::mtsCommandVoidReturnDescription(const mtsCommandVoidReturnDescription & other):
      Name(other.Name)
    , ResultPrototypeSerialized(other.ResultPrototypeSerialized)
{}

mtsCommandVoidReturnDescription::mtsCommandVoidReturnDescription(const std::string & newName, const std::string & newResultPrototypeSerialized):
      Name(newName)
    , ResultPrototypeSerialized(newResultPrototypeSerialized)
{}

mtsCommandVoidReturnDescription::~mtsCommandVoidReturnDescription(void){}


void mtsCommandVoidReturnDescription::SerializeRaw(std::ostream & outputStream) const
{
    cmnSerializeRaw(outputStream, this->Name);
    cmnSerializeRaw(outputStream, this->ResultPrototypeSerialized);
}


void mtsCommandVoidReturnDescription::DeSerializeRaw(std::istream & inputStream)
{
    cmnDeSerializeRaw(inputStream, this->Name);
    cmnDeSerializeRaw(inputStream, this->ResultPrototypeSerialized);
}


void mtsCommandVoidReturnDescription::ToStream(std::ostream & outputStream) const
{
    outputStream << this->HumanReadable();
}

void mtsCommandVoidReturnDescription::ToStreamRaw(std::ostream & outputStream, const char delimiter, bool headerOnly, const std::string & headerPrefix) const
{
    if (headerOnly) {
        outputStream << cmnData<mtsCommandVoidReturnDescription >::SerializeDescription(*this, delimiter, headerPrefix);
    } else {
        cmnData<mtsCommandVoidReturnDescription >::SerializeText(*this, outputStream, delimiter);
    }
}
/* source line: 82 */
/* source line: 87 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const mtsCommandVoidReturnDescription & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, mtsCommandVoidReturnDescription & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void mtsCommandVoidReturnDescription::Copy(const mtsCommandVoidReturnDescription & source) {
    cmnData<std::string >::Copy(this->Name, source.Name);
    cmnData<std::string >::Copy(this->ResultPrototypeSerialized, source.ResultPrototypeSerialized);
}
void mtsCommandVoidReturnDescription::SerializeBinary(std::ostream & outputStream) const throw (std::runtime_error) {
    cmnData<std::string >::SerializeBinary(this->Name, outputStream);
    cmnData<std::string >::SerializeBinary(this->ResultPrototypeSerialized, outputStream);
}
void mtsCommandVoidReturnDescription::DeSerializeBinary(std::istream & inputStream,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) throw (std::runtime_error) {
    cmnData<std::string >::DeSerializeBinary(this->Name, inputStream, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->ResultPrototypeSerialized, inputStream, localFormat, remoteFormat);
}
void mtsCommandVoidReturnDescription::SerializeText(std::ostream & outputStream, const char delimiter) const throw (std::runtime_error) {
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
    cmnData<std::string >::SerializeText(this->ResultPrototypeSerialized, outputStream, delimiter);
}
std::string mtsCommandVoidReturnDescription::SerializeDescription(const char delimiter, const std::string & userDescription) const {
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
    description << cmnData<std::string >::SerializeDescription(this->ResultPrototypeSerialized, delimiter, prefix + "ResultPrototypeSerialized");
    return description.str();
}
void mtsCommandVoidReturnDescription::DeSerializeText(std::istream & inputStream,
                                          const char delimiter) throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsCommandVoidReturnDescription");
    }
    someData = true;
    cmnData<std::string >::DeSerializeText(this->Name, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsCommandVoidReturnDescription");
    }
    someData = true;
    cmnData<std::string >::DeSerializeText(this->ResultPrototypeSerialized, inputStream, delimiter);
}
std::string mtsCommandVoidReturnDescription::HumanReadable(void) const {
    std::stringstream description;
    description << "mtsCommandVoidReturnDescription" << std::endl;
    description << "  Name:" << cmnData<std::string >::HumanReadable(this->Name);
    description << "  ResultPrototypeSerialized:" << cmnData<std::string >::HumanReadable(this->ResultPrototypeSerialized);
    return description.str();
}
bool mtsCommandVoidReturnDescription::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<std::string >::ScalarNumberIsFixed(this->Name)
           && cmnData<std::string >::ScalarNumberIsFixed(this->ResultPrototypeSerialized)
    ;
}
size_t mtsCommandVoidReturnDescription::ScalarNumber(void) const {
    return 0
           + cmnData<std::string >::ScalarNumber(this->Name)
           + cmnData<std::string >::ScalarNumber(this->ResultPrototypeSerialized)
    ;
}
std::string mtsCommandVoidReturnDescription::ScalarDescription(const size_t index, const std::string & userDescription) const throw (std::out_of_range) {
    std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->Name);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::ScalarDescription(this->Name, index - baseIndex, prefix + "Name");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->ResultPrototypeSerialized);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::ScalarDescription(this->ResultPrototypeSerialized, index - baseIndex, prefix + "ResultPrototypeSerialized");
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: mtsCommandVoidReturnDescription index out of range"));
    return "";
}
double mtsCommandVoidReturnDescription::Scalar(const size_t index) const throw (std::out_of_range) {
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->Name);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::Scalar(this->Name, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->ResultPrototypeSerialized);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::Scalar(this->ResultPrototypeSerialized, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalar: mtsCommandVoidReturnDescription index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<mtsCommandVoidReturnDescription >::SerializeText(const mtsCommandVoidReturnDescription & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void mtsCommandVoidReturnDescription::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<std::string >::SerializeText(this->Name, jsonValue["Name"]);
    cmnDataJSON<std::string >::SerializeText(this->ResultPrototypeSerialized, jsonValue["ResultPrototypeSerialized"]);
}
template<>
void cmnDataJSON<mtsCommandVoidReturnDescription >::DeSerializeText(mtsCommandVoidReturnDescription & data, const Json::Value & jsonValue) throw (std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void mtsCommandVoidReturnDescription::DeSerializeTextJSON(const Json::Value & jsonValue) throw (std::runtime_error) {
    cmnDataJSON<std::string >::DeSerializeText(this->Name, jsonValue["Name"]);
    cmnDataJSON<std::string >::DeSerializeText(this->ResultPrototypeSerialized, jsonValue["ResultPrototypeSerialized"]);
}
#endif // CISST_HAS_JSON

/* source line: 94 */
mtsCommandWriteReturnDescription::mtsCommandWriteReturnDescription(void):
      Name()
    , ArgumentPrototypeSerialized()
    , ResultPrototypeSerialized()
{}

mtsCommandWriteReturnDescription::mtsCommandWriteReturnDescription(const mtsCommandWriteReturnDescription & other):
      Name(other.Name)
    , ArgumentPrototypeSerialized(other.ArgumentPrototypeSerialized)
    , ResultPrototypeSerialized(other.ResultPrototypeSerialized)
{}

mtsCommandWriteReturnDescription::mtsCommandWriteReturnDescription(const std::string & newName, const std::string & newArgumentPrototypeSerialized, const std::string & newResultPrototypeSerialized):
      Name(newName)
    , ArgumentPrototypeSerialized(newArgumentPrototypeSerialized)
    , ResultPrototypeSerialized(newResultPrototypeSerialized)
{}

mtsCommandWriteReturnDescription::~mtsCommandWriteReturnDescription(void){}


void mtsCommandWriteReturnDescription::SerializeRaw(std::ostream & outputStream) const
{
    cmnSerializeRaw(outputStream, this->Name);
    cmnSerializeRaw(outputStream, this->ArgumentPrototypeSerialized);
    cmnSerializeRaw(outputStream, this->ResultPrototypeSerialized);
}


void mtsCommandWriteReturnDescription::DeSerializeRaw(std::istream & inputStream)
{
    cmnDeSerializeRaw(inputStream, this->Name);
    cmnDeSerializeRaw(inputStream, this->ArgumentPrototypeSerialized);
    cmnDeSerializeRaw(inputStream, this->ResultPrototypeSerialized);
}


void mtsCommandWriteReturnDescription::ToStream(std::ostream & outputStream) const
{
    outputStream << this->HumanReadable();
}

void mtsCommandWriteReturnDescription::ToStreamRaw(std::ostream & outputStream, const char delimiter, bool headerOnly, const std::string & headerPrefix) const
{
    if (headerOnly) {
        outputStream << cmnData<mtsCommandWriteReturnDescription >::SerializeDescription(*this, delimiter, headerPrefix);
    } else {
        cmnData<mtsCommandWriteReturnDescription >::SerializeText(*this, outputStream, delimiter);
    }
}
/* source line: 99 */
/* source line: 104 */
/* source line: 109 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const mtsCommandWriteReturnDescription & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, mtsCommandWriteReturnDescription & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void mtsCommandWriteReturnDescription::Copy(const mtsCommandWriteReturnDescription & source) {
    cmnData<std::string >::Copy(this->Name, source.Name);
    cmnData<std::string >::Copy(this->ArgumentPrototypeSerialized, source.ArgumentPrototypeSerialized);
    cmnData<std::string >::Copy(this->ResultPrototypeSerialized, source.ResultPrototypeSerialized);
}
void mtsCommandWriteReturnDescription::SerializeBinary(std::ostream & outputStream) const throw (std::runtime_error) {
    cmnData<std::string >::SerializeBinary(this->Name, outputStream);
    cmnData<std::string >::SerializeBinary(this->ArgumentPrototypeSerialized, outputStream);
    cmnData<std::string >::SerializeBinary(this->ResultPrototypeSerialized, outputStream);
}
void mtsCommandWriteReturnDescription::DeSerializeBinary(std::istream & inputStream,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) throw (std::runtime_error) {
    cmnData<std::string >::DeSerializeBinary(this->Name, inputStream, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->ArgumentPrototypeSerialized, inputStream, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->ResultPrototypeSerialized, inputStream, localFormat, remoteFormat);
}
void mtsCommandWriteReturnDescription::SerializeText(std::ostream & outputStream, const char delimiter) const throw (std::runtime_error) {
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
    cmnData<std::string >::SerializeText(this->ArgumentPrototypeSerialized, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<std::string >::SerializeText(this->ResultPrototypeSerialized, outputStream, delimiter);
}
std::string mtsCommandWriteReturnDescription::SerializeDescription(const char delimiter, const std::string & userDescription) const {
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
    description << cmnData<std::string >::SerializeDescription(this->ArgumentPrototypeSerialized, delimiter, prefix + "ArgumentPrototypeSerialized");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<std::string >::SerializeDescription(this->ResultPrototypeSerialized, delimiter, prefix + "ResultPrototypeSerialized");
    return description.str();
}
void mtsCommandWriteReturnDescription::DeSerializeText(std::istream & inputStream,
                                          const char delimiter) throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsCommandWriteReturnDescription");
    }
    someData = true;
    cmnData<std::string >::DeSerializeText(this->Name, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsCommandWriteReturnDescription");
    }
    someData = true;
    cmnData<std::string >::DeSerializeText(this->ArgumentPrototypeSerialized, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsCommandWriteReturnDescription");
    }
    someData = true;
    cmnData<std::string >::DeSerializeText(this->ResultPrototypeSerialized, inputStream, delimiter);
}
std::string mtsCommandWriteReturnDescription::HumanReadable(void) const {
    std::stringstream description;
    description << "mtsCommandWriteReturnDescription" << std::endl;
    description << "  Name:" << cmnData<std::string >::HumanReadable(this->Name);
    description << "  ArgumentPrototypeSerialized:" << cmnData<std::string >::HumanReadable(this->ArgumentPrototypeSerialized);
    description << "  ResultPrototypeSerialized:" << cmnData<std::string >::HumanReadable(this->ResultPrototypeSerialized);
    return description.str();
}
bool mtsCommandWriteReturnDescription::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<std::string >::ScalarNumberIsFixed(this->Name)
           && cmnData<std::string >::ScalarNumberIsFixed(this->ArgumentPrototypeSerialized)
           && cmnData<std::string >::ScalarNumberIsFixed(this->ResultPrototypeSerialized)
    ;
}
size_t mtsCommandWriteReturnDescription::ScalarNumber(void) const {
    return 0
           + cmnData<std::string >::ScalarNumber(this->Name)
           + cmnData<std::string >::ScalarNumber(this->ArgumentPrototypeSerialized)
           + cmnData<std::string >::ScalarNumber(this->ResultPrototypeSerialized)
    ;
}
std::string mtsCommandWriteReturnDescription::ScalarDescription(const size_t index, const std::string & userDescription) const throw (std::out_of_range) {
    std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->Name);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::ScalarDescription(this->Name, index - baseIndex, prefix + "Name");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->ArgumentPrototypeSerialized);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::ScalarDescription(this->ArgumentPrototypeSerialized, index - baseIndex, prefix + "ArgumentPrototypeSerialized");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->ResultPrototypeSerialized);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::ScalarDescription(this->ResultPrototypeSerialized, index - baseIndex, prefix + "ResultPrototypeSerialized");
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: mtsCommandWriteReturnDescription index out of range"));
    return "";
}
double mtsCommandWriteReturnDescription::Scalar(const size_t index) const throw (std::out_of_range) {
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->Name);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::Scalar(this->Name, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->ArgumentPrototypeSerialized);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::Scalar(this->ArgumentPrototypeSerialized, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->ResultPrototypeSerialized);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::Scalar(this->ResultPrototypeSerialized, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalar: mtsCommandWriteReturnDescription index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<mtsCommandWriteReturnDescription >::SerializeText(const mtsCommandWriteReturnDescription & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void mtsCommandWriteReturnDescription::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<std::string >::SerializeText(this->Name, jsonValue["Name"]);
    cmnDataJSON<std::string >::SerializeText(this->ArgumentPrototypeSerialized, jsonValue["ArgumentPrototypeSerialized"]);
    cmnDataJSON<std::string >::SerializeText(this->ResultPrototypeSerialized, jsonValue["ResultPrototypeSerialized"]);
}
template<>
void cmnDataJSON<mtsCommandWriteReturnDescription >::DeSerializeText(mtsCommandWriteReturnDescription & data, const Json::Value & jsonValue) throw (std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void mtsCommandWriteReturnDescription::DeSerializeTextJSON(const Json::Value & jsonValue) throw (std::runtime_error) {
    cmnDataJSON<std::string >::DeSerializeText(this->Name, jsonValue["Name"]);
    cmnDataJSON<std::string >::DeSerializeText(this->ArgumentPrototypeSerialized, jsonValue["ArgumentPrototypeSerialized"]);
    cmnDataJSON<std::string >::DeSerializeText(this->ResultPrototypeSerialized, jsonValue["ResultPrototypeSerialized"]);
}
#endif // CISST_HAS_JSON

/* source line: 116 */
mtsEventVoidDescription::mtsEventVoidDescription(void):
      Name()
{}

mtsEventVoidDescription::mtsEventVoidDescription(const mtsEventVoidDescription & other):
      Name(other.Name)
{}

mtsEventVoidDescription::mtsEventVoidDescription(const std::string & newName):
      Name(newName)
{}

mtsEventVoidDescription::~mtsEventVoidDescription(void){}


void mtsEventVoidDescription::SerializeRaw(std::ostream & outputStream) const
{
    cmnSerializeRaw(outputStream, this->Name);
}


void mtsEventVoidDescription::DeSerializeRaw(std::istream & inputStream)
{
    cmnDeSerializeRaw(inputStream, this->Name);
}


void mtsEventVoidDescription::ToStream(std::ostream & outputStream) const
{
    outputStream << this->HumanReadable();
}

void mtsEventVoidDescription::ToStreamRaw(std::ostream & outputStream, const char delimiter, bool headerOnly, const std::string & headerPrefix) const
{
    if (headerOnly) {
        outputStream << cmnData<mtsEventVoidDescription >::SerializeDescription(*this, delimiter, headerPrefix);
    } else {
        cmnData<mtsEventVoidDescription >::SerializeText(*this, outputStream, delimiter);
    }
}
/* source line: 121 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const mtsEventVoidDescription & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, mtsEventVoidDescription & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void mtsEventVoidDescription::Copy(const mtsEventVoidDescription & source) {
    cmnData<std::string >::Copy(this->Name, source.Name);
}
void mtsEventVoidDescription::SerializeBinary(std::ostream & outputStream) const throw (std::runtime_error) {
    cmnData<std::string >::SerializeBinary(this->Name, outputStream);
}
void mtsEventVoidDescription::DeSerializeBinary(std::istream & inputStream,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) throw (std::runtime_error) {
    cmnData<std::string >::DeSerializeBinary(this->Name, inputStream, localFormat, remoteFormat);
}
void mtsEventVoidDescription::SerializeText(std::ostream & outputStream, const char delimiter) const throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<std::string >::SerializeText(this->Name, outputStream, delimiter);
}
std::string mtsEventVoidDescription::SerializeDescription(const char delimiter, const std::string & userDescription) const {
    bool someData = false;
    const std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    std::stringstream description;
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<std::string >::SerializeDescription(this->Name, delimiter, prefix + "Name");
    return description.str();
}
void mtsEventVoidDescription::DeSerializeText(std::istream & inputStream,
                                          const char delimiter) throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsEventVoidDescription");
    }
    someData = true;
    cmnData<std::string >::DeSerializeText(this->Name, inputStream, delimiter);
}
std::string mtsEventVoidDescription::HumanReadable(void) const {
    std::stringstream description;
    description << "mtsEventVoidDescription" << std::endl;
    description << "  Name:" << cmnData<std::string >::HumanReadable(this->Name);
    return description.str();
}
bool mtsEventVoidDescription::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<std::string >::ScalarNumberIsFixed(this->Name)
    ;
}
size_t mtsEventVoidDescription::ScalarNumber(void) const {
    return 0
           + cmnData<std::string >::ScalarNumber(this->Name)
    ;
}
std::string mtsEventVoidDescription::ScalarDescription(const size_t index, const std::string & userDescription) const throw (std::out_of_range) {
    std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->Name);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::ScalarDescription(this->Name, index - baseIndex, prefix + "Name");
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: mtsEventVoidDescription index out of range"));
    return "";
}
double mtsEventVoidDescription::Scalar(const size_t index) const throw (std::out_of_range) {
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->Name);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::Scalar(this->Name, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalar: mtsEventVoidDescription index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<mtsEventVoidDescription >::SerializeText(const mtsEventVoidDescription & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void mtsEventVoidDescription::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<std::string >::SerializeText(this->Name, jsonValue["Name"]);
}
template<>
void cmnDataJSON<mtsEventVoidDescription >::DeSerializeText(mtsEventVoidDescription & data, const Json::Value & jsonValue) throw (std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void mtsEventVoidDescription::DeSerializeTextJSON(const Json::Value & jsonValue) throw (std::runtime_error) {
    cmnDataJSON<std::string >::DeSerializeText(this->Name, jsonValue["Name"]);
}
#endif // CISST_HAS_JSON

/* source line: 128 */
mtsEventWriteDescription::mtsEventWriteDescription(void):
      Name()
    , ArgumentPrototypeSerialized()
{}

mtsEventWriteDescription::mtsEventWriteDescription(const mtsEventWriteDescription & other):
      Name(other.Name)
    , ArgumentPrototypeSerialized(other.ArgumentPrototypeSerialized)
{}

mtsEventWriteDescription::mtsEventWriteDescription(const std::string & newName, const std::string & newArgumentPrototypeSerialized):
      Name(newName)
    , ArgumentPrototypeSerialized(newArgumentPrototypeSerialized)
{}

mtsEventWriteDescription::~mtsEventWriteDescription(void){}


void mtsEventWriteDescription::SerializeRaw(std::ostream & outputStream) const
{
    cmnSerializeRaw(outputStream, this->Name);
    cmnSerializeRaw(outputStream, this->ArgumentPrototypeSerialized);
}


void mtsEventWriteDescription::DeSerializeRaw(std::istream & inputStream)
{
    cmnDeSerializeRaw(inputStream, this->Name);
    cmnDeSerializeRaw(inputStream, this->ArgumentPrototypeSerialized);
}


void mtsEventWriteDescription::ToStream(std::ostream & outputStream) const
{
    outputStream << this->HumanReadable();
}

void mtsEventWriteDescription::ToStreamRaw(std::ostream & outputStream, const char delimiter, bool headerOnly, const std::string & headerPrefix) const
{
    if (headerOnly) {
        outputStream << cmnData<mtsEventWriteDescription >::SerializeDescription(*this, delimiter, headerPrefix);
    } else {
        cmnData<mtsEventWriteDescription >::SerializeText(*this, outputStream, delimiter);
    }
}
/* source line: 133 */
/* source line: 138 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const mtsEventWriteDescription & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, mtsEventWriteDescription & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void mtsEventWriteDescription::Copy(const mtsEventWriteDescription & source) {
    cmnData<std::string >::Copy(this->Name, source.Name);
    cmnData<std::string >::Copy(this->ArgumentPrototypeSerialized, source.ArgumentPrototypeSerialized);
}
void mtsEventWriteDescription::SerializeBinary(std::ostream & outputStream) const throw (std::runtime_error) {
    cmnData<std::string >::SerializeBinary(this->Name, outputStream);
    cmnData<std::string >::SerializeBinary(this->ArgumentPrototypeSerialized, outputStream);
}
void mtsEventWriteDescription::DeSerializeBinary(std::istream & inputStream,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) throw (std::runtime_error) {
    cmnData<std::string >::DeSerializeBinary(this->Name, inputStream, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->ArgumentPrototypeSerialized, inputStream, localFormat, remoteFormat);
}
void mtsEventWriteDescription::SerializeText(std::ostream & outputStream, const char delimiter) const throw (std::runtime_error) {
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
    cmnData<std::string >::SerializeText(this->ArgumentPrototypeSerialized, outputStream, delimiter);
}
std::string mtsEventWriteDescription::SerializeDescription(const char delimiter, const std::string & userDescription) const {
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
    description << cmnData<std::string >::SerializeDescription(this->ArgumentPrototypeSerialized, delimiter, prefix + "ArgumentPrototypeSerialized");
    return description.str();
}
void mtsEventWriteDescription::DeSerializeText(std::istream & inputStream,
                                          const char delimiter) throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsEventWriteDescription");
    }
    someData = true;
    cmnData<std::string >::DeSerializeText(this->Name, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsEventWriteDescription");
    }
    someData = true;
    cmnData<std::string >::DeSerializeText(this->ArgumentPrototypeSerialized, inputStream, delimiter);
}
std::string mtsEventWriteDescription::HumanReadable(void) const {
    std::stringstream description;
    description << "mtsEventWriteDescription" << std::endl;
    description << "  Name:" << cmnData<std::string >::HumanReadable(this->Name);
    description << "  ArgumentPrototypeSerialized:" << cmnData<std::string >::HumanReadable(this->ArgumentPrototypeSerialized);
    return description.str();
}
bool mtsEventWriteDescription::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<std::string >::ScalarNumberIsFixed(this->Name)
           && cmnData<std::string >::ScalarNumberIsFixed(this->ArgumentPrototypeSerialized)
    ;
}
size_t mtsEventWriteDescription::ScalarNumber(void) const {
    return 0
           + cmnData<std::string >::ScalarNumber(this->Name)
           + cmnData<std::string >::ScalarNumber(this->ArgumentPrototypeSerialized)
    ;
}
std::string mtsEventWriteDescription::ScalarDescription(const size_t index, const std::string & userDescription) const throw (std::out_of_range) {
    std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->Name);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::ScalarDescription(this->Name, index - baseIndex, prefix + "Name");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->ArgumentPrototypeSerialized);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::ScalarDescription(this->ArgumentPrototypeSerialized, index - baseIndex, prefix + "ArgumentPrototypeSerialized");
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: mtsEventWriteDescription index out of range"));
    return "";
}
double mtsEventWriteDescription::Scalar(const size_t index) const throw (std::out_of_range) {
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->Name);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::Scalar(this->Name, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->ArgumentPrototypeSerialized);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::Scalar(this->ArgumentPrototypeSerialized, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalar: mtsEventWriteDescription index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<mtsEventWriteDescription >::SerializeText(const mtsEventWriteDescription & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void mtsEventWriteDescription::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<std::string >::SerializeText(this->Name, jsonValue["Name"]);
    cmnDataJSON<std::string >::SerializeText(this->ArgumentPrototypeSerialized, jsonValue["ArgumentPrototypeSerialized"]);
}
template<>
void cmnDataJSON<mtsEventWriteDescription >::DeSerializeText(mtsEventWriteDescription & data, const Json::Value & jsonValue) throw (std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void mtsEventWriteDescription::DeSerializeTextJSON(const Json::Value & jsonValue) throw (std::runtime_error) {
    cmnDataJSON<std::string >::DeSerializeText(this->Name, jsonValue["Name"]);
    cmnDataJSON<std::string >::DeSerializeText(this->ArgumentPrototypeSerialized, jsonValue["ArgumentPrototypeSerialized"]);
}
#endif // CISST_HAS_JSON


/* source line: 162 */
mtsInterfaceProvidedDescription::mtsInterfaceProvidedDescription(void):
      InterfaceName()
    , CommandsVoid()
    , CommandsWrite()
    , CommandsRead()
    , CommandsQualifiedRead()
    , CommandsVoidReturn()
    , CommandsWriteReturn()
    , EventsVoid()
    , EventsWrite()
{}

mtsInterfaceProvidedDescription::mtsInterfaceProvidedDescription(const mtsInterfaceProvidedDescription & other):
      InterfaceName(other.InterfaceName)
    , CommandsVoid(other.CommandsVoid)
    , CommandsWrite(other.CommandsWrite)
    , CommandsRead(other.CommandsRead)
    , CommandsQualifiedRead(other.CommandsQualifiedRead)
    , CommandsVoidReturn(other.CommandsVoidReturn)
    , CommandsWriteReturn(other.CommandsWriteReturn)
    , EventsVoid(other.EventsVoid)
    , EventsWrite(other.EventsWrite)
{}

mtsInterfaceProvidedDescription::~mtsInterfaceProvidedDescription(void){}


void mtsInterfaceProvidedDescription::SerializeRaw(std::ostream & outputStream) const
{
    cmnSerializeRaw(outputStream, this->InterfaceName);
    cmnSerializeRaw(outputStream, this->CommandsVoid);
    cmnSerializeRaw(outputStream, this->CommandsWrite);
    cmnSerializeRaw(outputStream, this->CommandsRead);
    cmnSerializeRaw(outputStream, this->CommandsQualifiedRead);
    cmnSerializeRaw(outputStream, this->CommandsVoidReturn);
    cmnSerializeRaw(outputStream, this->CommandsWriteReturn);
    cmnSerializeRaw(outputStream, this->EventsVoid);
    cmnSerializeRaw(outputStream, this->EventsWrite);
}


void mtsInterfaceProvidedDescription::DeSerializeRaw(std::istream & inputStream)
{
    cmnDeSerializeRaw(inputStream, this->InterfaceName);
    cmnDeSerializeRaw(inputStream, this->CommandsVoid);
    cmnDeSerializeRaw(inputStream, this->CommandsWrite);
    cmnDeSerializeRaw(inputStream, this->CommandsRead);
    cmnDeSerializeRaw(inputStream, this->CommandsQualifiedRead);
    cmnDeSerializeRaw(inputStream, this->CommandsVoidReturn);
    cmnDeSerializeRaw(inputStream, this->CommandsWriteReturn);
    cmnDeSerializeRaw(inputStream, this->EventsVoid);
    cmnDeSerializeRaw(inputStream, this->EventsWrite);
}


void mtsInterfaceProvidedDescription::ToStream(std::ostream & outputStream) const
{
    outputStream << this->HumanReadable();
}

void mtsInterfaceProvidedDescription::ToStreamRaw(std::ostream & outputStream, const char delimiter, bool headerOnly, const std::string & headerPrefix) const
{
    if (headerOnly) {
        outputStream << cmnData<mtsInterfaceProvidedDescription >::SerializeDescription(*this, delimiter, headerPrefix);
    } else {
        cmnData<mtsInterfaceProvidedDescription >::SerializeText(*this, outputStream, delimiter);
    }
}
/* source line: 166 */
/* source line: 171 */
/* source line: 176 */
/* source line: 181 */
/* source line: 186 */
/* source line: 191 */
/* source line: 196 */
/* source line: 201 */
/* source line: 206 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const mtsInterfaceProvidedDescription & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, mtsInterfaceProvidedDescription & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void mtsInterfaceProvidedDescription::Copy(const mtsInterfaceProvidedDescription & source) {
    cmnData<std::string >::Copy(this->InterfaceName, source.InterfaceName);
    cmnData<mtsCommandsVoidDescription >::Copy(this->CommandsVoid, source.CommandsVoid);
    cmnData<mtsCommandsWriteDescription >::Copy(this->CommandsWrite, source.CommandsWrite);
    cmnData<mtsCommandsReadDescription >::Copy(this->CommandsRead, source.CommandsRead);
    cmnData<mtsCommandsQualifiedReadDescription >::Copy(this->CommandsQualifiedRead, source.CommandsQualifiedRead);
    cmnData<mtsCommandsVoidReturnDescription >::Copy(this->CommandsVoidReturn, source.CommandsVoidReturn);
    cmnData<mtsCommandsWriteReturnDescription >::Copy(this->CommandsWriteReturn, source.CommandsWriteReturn);
    cmnData<mtsEventsVoidDescription >::Copy(this->EventsVoid, source.EventsVoid);
    cmnData<mtsEventsWriteDescription >::Copy(this->EventsWrite, source.EventsWrite);
}
void mtsInterfaceProvidedDescription::SerializeBinary(std::ostream & outputStream) const throw (std::runtime_error) {
    cmnData<std::string >::SerializeBinary(this->InterfaceName, outputStream);
    cmnData<mtsCommandsVoidDescription >::SerializeBinary(this->CommandsVoid, outputStream);
    cmnData<mtsCommandsWriteDescription >::SerializeBinary(this->CommandsWrite, outputStream);
    cmnData<mtsCommandsReadDescription >::SerializeBinary(this->CommandsRead, outputStream);
    cmnData<mtsCommandsQualifiedReadDescription >::SerializeBinary(this->CommandsQualifiedRead, outputStream);
    cmnData<mtsCommandsVoidReturnDescription >::SerializeBinary(this->CommandsVoidReturn, outputStream);
    cmnData<mtsCommandsWriteReturnDescription >::SerializeBinary(this->CommandsWriteReturn, outputStream);
    cmnData<mtsEventsVoidDescription >::SerializeBinary(this->EventsVoid, outputStream);
    cmnData<mtsEventsWriteDescription >::SerializeBinary(this->EventsWrite, outputStream);
}
void mtsInterfaceProvidedDescription::DeSerializeBinary(std::istream & inputStream,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) throw (std::runtime_error) {
    cmnData<std::string >::DeSerializeBinary(this->InterfaceName, inputStream, localFormat, remoteFormat);
    cmnData<mtsCommandsVoidDescription >::DeSerializeBinary(this->CommandsVoid, inputStream, localFormat, remoteFormat);
    cmnData<mtsCommandsWriteDescription >::DeSerializeBinary(this->CommandsWrite, inputStream, localFormat, remoteFormat);
    cmnData<mtsCommandsReadDescription >::DeSerializeBinary(this->CommandsRead, inputStream, localFormat, remoteFormat);
    cmnData<mtsCommandsQualifiedReadDescription >::DeSerializeBinary(this->CommandsQualifiedRead, inputStream, localFormat, remoteFormat);
    cmnData<mtsCommandsVoidReturnDescription >::DeSerializeBinary(this->CommandsVoidReturn, inputStream, localFormat, remoteFormat);
    cmnData<mtsCommandsWriteReturnDescription >::DeSerializeBinary(this->CommandsWriteReturn, inputStream, localFormat, remoteFormat);
    cmnData<mtsEventsVoidDescription >::DeSerializeBinary(this->EventsVoid, inputStream, localFormat, remoteFormat);
    cmnData<mtsEventsWriteDescription >::DeSerializeBinary(this->EventsWrite, inputStream, localFormat, remoteFormat);
}
void mtsInterfaceProvidedDescription::SerializeText(std::ostream & outputStream, const char delimiter) const throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<std::string >::SerializeText(this->InterfaceName, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<mtsCommandsVoidDescription >::SerializeText(this->CommandsVoid, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<mtsCommandsWriteDescription >::SerializeText(this->CommandsWrite, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<mtsCommandsReadDescription >::SerializeText(this->CommandsRead, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<mtsCommandsQualifiedReadDescription >::SerializeText(this->CommandsQualifiedRead, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<mtsCommandsVoidReturnDescription >::SerializeText(this->CommandsVoidReturn, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<mtsCommandsWriteReturnDescription >::SerializeText(this->CommandsWriteReturn, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<mtsEventsVoidDescription >::SerializeText(this->EventsVoid, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<mtsEventsWriteDescription >::SerializeText(this->EventsWrite, outputStream, delimiter);
}
std::string mtsInterfaceProvidedDescription::SerializeDescription(const char delimiter, const std::string & userDescription) const {
    bool someData = false;
    const std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    std::stringstream description;
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<std::string >::SerializeDescription(this->InterfaceName, delimiter, prefix + "InterfaceName");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<mtsCommandsVoidDescription >::SerializeDescription(this->CommandsVoid, delimiter, prefix + "CommandsVoid");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<mtsCommandsWriteDescription >::SerializeDescription(this->CommandsWrite, delimiter, prefix + "CommandsWrite");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<mtsCommandsReadDescription >::SerializeDescription(this->CommandsRead, delimiter, prefix + "CommandsRead");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<mtsCommandsQualifiedReadDescription >::SerializeDescription(this->CommandsQualifiedRead, delimiter, prefix + "CommandsQualifiedRead");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<mtsCommandsVoidReturnDescription >::SerializeDescription(this->CommandsVoidReturn, delimiter, prefix + "CommandsVoidReturn");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<mtsCommandsWriteReturnDescription >::SerializeDescription(this->CommandsWriteReturn, delimiter, prefix + "CommandsWriteReturn");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<mtsEventsVoidDescription >::SerializeDescription(this->EventsVoid, delimiter, prefix + "EventsVoid");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<mtsEventsWriteDescription >::SerializeDescription(this->EventsWrite, delimiter, prefix + "EventsWrite");
    return description.str();
}
void mtsInterfaceProvidedDescription::DeSerializeText(std::istream & inputStream,
                                          const char delimiter) throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsInterfaceProvidedDescription");
    }
    someData = true;
    cmnData<std::string >::DeSerializeText(this->InterfaceName, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsInterfaceProvidedDescription");
    }
    someData = true;
    cmnData<mtsCommandsVoidDescription >::DeSerializeText(this->CommandsVoid, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsInterfaceProvidedDescription");
    }
    someData = true;
    cmnData<mtsCommandsWriteDescription >::DeSerializeText(this->CommandsWrite, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsInterfaceProvidedDescription");
    }
    someData = true;
    cmnData<mtsCommandsReadDescription >::DeSerializeText(this->CommandsRead, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsInterfaceProvidedDescription");
    }
    someData = true;
    cmnData<mtsCommandsQualifiedReadDescription >::DeSerializeText(this->CommandsQualifiedRead, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsInterfaceProvidedDescription");
    }
    someData = true;
    cmnData<mtsCommandsVoidReturnDescription >::DeSerializeText(this->CommandsVoidReturn, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsInterfaceProvidedDescription");
    }
    someData = true;
    cmnData<mtsCommandsWriteReturnDescription >::DeSerializeText(this->CommandsWriteReturn, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsInterfaceProvidedDescription");
    }
    someData = true;
    cmnData<mtsEventsVoidDescription >::DeSerializeText(this->EventsVoid, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsInterfaceProvidedDescription");
    }
    someData = true;
    cmnData<mtsEventsWriteDescription >::DeSerializeText(this->EventsWrite, inputStream, delimiter);
}
std::string mtsInterfaceProvidedDescription::HumanReadable(void) const {
    std::stringstream description;
    description << "mtsInterfaceProvidedDescription" << std::endl;
    description << "  InterfaceName:" << cmnData<std::string >::HumanReadable(this->InterfaceName);
    description << "  CommandsVoid:" << cmnData<mtsCommandsVoidDescription >::HumanReadable(this->CommandsVoid);
    description << "  CommandsWrite:" << cmnData<mtsCommandsWriteDescription >::HumanReadable(this->CommandsWrite);
    description << "  CommandsRead:" << cmnData<mtsCommandsReadDescription >::HumanReadable(this->CommandsRead);
    description << "  CommandsQualifiedRead:" << cmnData<mtsCommandsQualifiedReadDescription >::HumanReadable(this->CommandsQualifiedRead);
    description << "  CommandsVoidReturn:" << cmnData<mtsCommandsVoidReturnDescription >::HumanReadable(this->CommandsVoidReturn);
    description << "  CommandsWriteReturn:" << cmnData<mtsCommandsWriteReturnDescription >::HumanReadable(this->CommandsWriteReturn);
    description << "  EventsVoid:" << cmnData<mtsEventsVoidDescription >::HumanReadable(this->EventsVoid);
    description << "  EventsWrite:" << cmnData<mtsEventsWriteDescription >::HumanReadable(this->EventsWrite);
    return description.str();
}
bool mtsInterfaceProvidedDescription::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<std::string >::ScalarNumberIsFixed(this->InterfaceName)
           && cmnData<mtsCommandsVoidDescription >::ScalarNumberIsFixed(this->CommandsVoid)
           && cmnData<mtsCommandsWriteDescription >::ScalarNumberIsFixed(this->CommandsWrite)
           && cmnData<mtsCommandsReadDescription >::ScalarNumberIsFixed(this->CommandsRead)
           && cmnData<mtsCommandsQualifiedReadDescription >::ScalarNumberIsFixed(this->CommandsQualifiedRead)
           && cmnData<mtsCommandsVoidReturnDescription >::ScalarNumberIsFixed(this->CommandsVoidReturn)
           && cmnData<mtsCommandsWriteReturnDescription >::ScalarNumberIsFixed(this->CommandsWriteReturn)
           && cmnData<mtsEventsVoidDescription >::ScalarNumberIsFixed(this->EventsVoid)
           && cmnData<mtsEventsWriteDescription >::ScalarNumberIsFixed(this->EventsWrite)
    ;
}
size_t mtsInterfaceProvidedDescription::ScalarNumber(void) const {
    return 0
           + cmnData<std::string >::ScalarNumber(this->InterfaceName)
           + cmnData<mtsCommandsVoidDescription >::ScalarNumber(this->CommandsVoid)
           + cmnData<mtsCommandsWriteDescription >::ScalarNumber(this->CommandsWrite)
           + cmnData<mtsCommandsReadDescription >::ScalarNumber(this->CommandsRead)
           + cmnData<mtsCommandsQualifiedReadDescription >::ScalarNumber(this->CommandsQualifiedRead)
           + cmnData<mtsCommandsVoidReturnDescription >::ScalarNumber(this->CommandsVoidReturn)
           + cmnData<mtsCommandsWriteReturnDescription >::ScalarNumber(this->CommandsWriteReturn)
           + cmnData<mtsEventsVoidDescription >::ScalarNumber(this->EventsVoid)
           + cmnData<mtsEventsWriteDescription >::ScalarNumber(this->EventsWrite)
    ;
}
std::string mtsInterfaceProvidedDescription::ScalarDescription(const size_t index, const std::string & userDescription) const throw (std::out_of_range) {
    std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->InterfaceName);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::ScalarDescription(this->InterfaceName, index - baseIndex, prefix + "InterfaceName");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<mtsCommandsVoidDescription >::ScalarNumber(this->CommandsVoid);
    if (index < currentMaxIndex) {
        return cmnData<mtsCommandsVoidDescription >::ScalarDescription(this->CommandsVoid, index - baseIndex, prefix + "CommandsVoid");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<mtsCommandsWriteDescription >::ScalarNumber(this->CommandsWrite);
    if (index < currentMaxIndex) {
        return cmnData<mtsCommandsWriteDescription >::ScalarDescription(this->CommandsWrite, index - baseIndex, prefix + "CommandsWrite");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<mtsCommandsReadDescription >::ScalarNumber(this->CommandsRead);
    if (index < currentMaxIndex) {
        return cmnData<mtsCommandsReadDescription >::ScalarDescription(this->CommandsRead, index - baseIndex, prefix + "CommandsRead");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<mtsCommandsQualifiedReadDescription >::ScalarNumber(this->CommandsQualifiedRead);
    if (index < currentMaxIndex) {
        return cmnData<mtsCommandsQualifiedReadDescription >::ScalarDescription(this->CommandsQualifiedRead, index - baseIndex, prefix + "CommandsQualifiedRead");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<mtsCommandsVoidReturnDescription >::ScalarNumber(this->CommandsVoidReturn);
    if (index < currentMaxIndex) {
        return cmnData<mtsCommandsVoidReturnDescription >::ScalarDescription(this->CommandsVoidReturn, index - baseIndex, prefix + "CommandsVoidReturn");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<mtsCommandsWriteReturnDescription >::ScalarNumber(this->CommandsWriteReturn);
    if (index < currentMaxIndex) {
        return cmnData<mtsCommandsWriteReturnDescription >::ScalarDescription(this->CommandsWriteReturn, index - baseIndex, prefix + "CommandsWriteReturn");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<mtsEventsVoidDescription >::ScalarNumber(this->EventsVoid);
    if (index < currentMaxIndex) {
        return cmnData<mtsEventsVoidDescription >::ScalarDescription(this->EventsVoid, index - baseIndex, prefix + "EventsVoid");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<mtsEventsWriteDescription >::ScalarNumber(this->EventsWrite);
    if (index < currentMaxIndex) {
        return cmnData<mtsEventsWriteDescription >::ScalarDescription(this->EventsWrite, index - baseIndex, prefix + "EventsWrite");
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: mtsInterfaceProvidedDescription index out of range"));
    return "";
}
double mtsInterfaceProvidedDescription::Scalar(const size_t index) const throw (std::out_of_range) {
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->InterfaceName);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::Scalar(this->InterfaceName, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<mtsCommandsVoidDescription >::ScalarNumber(this->CommandsVoid);
    if (index < currentMaxIndex) {
        return cmnData<mtsCommandsVoidDescription >::Scalar(this->CommandsVoid, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<mtsCommandsWriteDescription >::ScalarNumber(this->CommandsWrite);
    if (index < currentMaxIndex) {
        return cmnData<mtsCommandsWriteDescription >::Scalar(this->CommandsWrite, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<mtsCommandsReadDescription >::ScalarNumber(this->CommandsRead);
    if (index < currentMaxIndex) {
        return cmnData<mtsCommandsReadDescription >::Scalar(this->CommandsRead, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<mtsCommandsQualifiedReadDescription >::ScalarNumber(this->CommandsQualifiedRead);
    if (index < currentMaxIndex) {
        return cmnData<mtsCommandsQualifiedReadDescription >::Scalar(this->CommandsQualifiedRead, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<mtsCommandsVoidReturnDescription >::ScalarNumber(this->CommandsVoidReturn);
    if (index < currentMaxIndex) {
        return cmnData<mtsCommandsVoidReturnDescription >::Scalar(this->CommandsVoidReturn, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<mtsCommandsWriteReturnDescription >::ScalarNumber(this->CommandsWriteReturn);
    if (index < currentMaxIndex) {
        return cmnData<mtsCommandsWriteReturnDescription >::Scalar(this->CommandsWriteReturn, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<mtsEventsVoidDescription >::ScalarNumber(this->EventsVoid);
    if (index < currentMaxIndex) {
        return cmnData<mtsEventsVoidDescription >::Scalar(this->EventsVoid, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<mtsEventsWriteDescription >::ScalarNumber(this->EventsWrite);
    if (index < currentMaxIndex) {
        return cmnData<mtsEventsWriteDescription >::Scalar(this->EventsWrite, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalar: mtsInterfaceProvidedDescription index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<mtsInterfaceProvidedDescription >::SerializeText(const mtsInterfaceProvidedDescription & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void mtsInterfaceProvidedDescription::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<std::string >::SerializeText(this->InterfaceName, jsonValue["InterfaceName"]);
    cmnDataJSON<mtsCommandsVoidDescription >::SerializeText(this->CommandsVoid, jsonValue["CommandsVoid"]);
    cmnDataJSON<mtsCommandsWriteDescription >::SerializeText(this->CommandsWrite, jsonValue["CommandsWrite"]);
    cmnDataJSON<mtsCommandsReadDescription >::SerializeText(this->CommandsRead, jsonValue["CommandsRead"]);
    cmnDataJSON<mtsCommandsQualifiedReadDescription >::SerializeText(this->CommandsQualifiedRead, jsonValue["CommandsQualifiedRead"]);
    cmnDataJSON<mtsCommandsVoidReturnDescription >::SerializeText(this->CommandsVoidReturn, jsonValue["CommandsVoidReturn"]);
    cmnDataJSON<mtsCommandsWriteReturnDescription >::SerializeText(this->CommandsWriteReturn, jsonValue["CommandsWriteReturn"]);
    cmnDataJSON<mtsEventsVoidDescription >::SerializeText(this->EventsVoid, jsonValue["EventsVoid"]);
    cmnDataJSON<mtsEventsWriteDescription >::SerializeText(this->EventsWrite, jsonValue["EventsWrite"]);
}
template<>
void cmnDataJSON<mtsInterfaceProvidedDescription >::DeSerializeText(mtsInterfaceProvidedDescription & data, const Json::Value & jsonValue) throw (std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void mtsInterfaceProvidedDescription::DeSerializeTextJSON(const Json::Value & jsonValue) throw (std::runtime_error) {
    cmnDataJSON<std::string >::DeSerializeText(this->InterfaceName, jsonValue["InterfaceName"]);
    cmnDataJSON<mtsCommandsVoidDescription >::DeSerializeText(this->CommandsVoid, jsonValue["CommandsVoid"]);
    cmnDataJSON<mtsCommandsWriteDescription >::DeSerializeText(this->CommandsWrite, jsonValue["CommandsWrite"]);
    cmnDataJSON<mtsCommandsReadDescription >::DeSerializeText(this->CommandsRead, jsonValue["CommandsRead"]);
    cmnDataJSON<mtsCommandsQualifiedReadDescription >::DeSerializeText(this->CommandsQualifiedRead, jsonValue["CommandsQualifiedRead"]);
    cmnDataJSON<mtsCommandsVoidReturnDescription >::DeSerializeText(this->CommandsVoidReturn, jsonValue["CommandsVoidReturn"]);
    cmnDataJSON<mtsCommandsWriteReturnDescription >::DeSerializeText(this->CommandsWriteReturn, jsonValue["CommandsWriteReturn"]);
    cmnDataJSON<mtsEventsVoidDescription >::DeSerializeText(this->EventsVoid, jsonValue["EventsVoid"]);
    cmnDataJSON<mtsEventsWriteDescription >::DeSerializeText(this->EventsWrite, jsonValue["EventsWrite"]);
}
#endif // CISST_HAS_JSON

/* source line: 214 */
mtsInterfaceRequiredDescription::mtsInterfaceRequiredDescription(void):
      InterfaceName()
    , FunctionVoidNames()
    , FunctionWriteNames()
    , FunctionReadNames()
    , FunctionQualifiedReadNames()
    , FunctionVoidReturnNames()
    , FunctionWriteReturnNames()
    , EventHandlersVoid()
    , EventHandlersWrite()
    , IsRequired()
{}

mtsInterfaceRequiredDescription::mtsInterfaceRequiredDescription(const mtsInterfaceRequiredDescription & other):
      InterfaceName(other.InterfaceName)
    , FunctionVoidNames(other.FunctionVoidNames)
    , FunctionWriteNames(other.FunctionWriteNames)
    , FunctionReadNames(other.FunctionReadNames)
    , FunctionQualifiedReadNames(other.FunctionQualifiedReadNames)
    , FunctionVoidReturnNames(other.FunctionVoidReturnNames)
    , FunctionWriteReturnNames(other.FunctionWriteReturnNames)
    , EventHandlersVoid(other.EventHandlersVoid)
    , EventHandlersWrite(other.EventHandlersWrite)
    , IsRequired(other.IsRequired)
{}

mtsInterfaceRequiredDescription::~mtsInterfaceRequiredDescription(void){}


void mtsInterfaceRequiredDescription::SerializeRaw(std::ostream & outputStream) const
{
    cmnSerializeRaw(outputStream, this->InterfaceName);
    cmnSerializeRaw(outputStream, this->FunctionVoidNames);
    cmnSerializeRaw(outputStream, this->FunctionWriteNames);
    cmnSerializeRaw(outputStream, this->FunctionReadNames);
    cmnSerializeRaw(outputStream, this->FunctionQualifiedReadNames);
    cmnSerializeRaw(outputStream, this->FunctionVoidReturnNames);
    cmnSerializeRaw(outputStream, this->FunctionWriteReturnNames);
    cmnSerializeRaw(outputStream, this->EventHandlersVoid);
    cmnSerializeRaw(outputStream, this->EventHandlersWrite);
    cmnSerializeRaw(outputStream, this->IsRequired);
}


void mtsInterfaceRequiredDescription::DeSerializeRaw(std::istream & inputStream)
{
    cmnDeSerializeRaw(inputStream, this->InterfaceName);
    cmnDeSerializeRaw(inputStream, this->FunctionVoidNames);
    cmnDeSerializeRaw(inputStream, this->FunctionWriteNames);
    cmnDeSerializeRaw(inputStream, this->FunctionReadNames);
    cmnDeSerializeRaw(inputStream, this->FunctionQualifiedReadNames);
    cmnDeSerializeRaw(inputStream, this->FunctionVoidReturnNames);
    cmnDeSerializeRaw(inputStream, this->FunctionWriteReturnNames);
    cmnDeSerializeRaw(inputStream, this->EventHandlersVoid);
    cmnDeSerializeRaw(inputStream, this->EventHandlersWrite);
    cmnDeSerializeRaw(inputStream, this->IsRequired);
}


void mtsInterfaceRequiredDescription::ToStream(std::ostream & outputStream) const
{
    outputStream << this->HumanReadable();
}

void mtsInterfaceRequiredDescription::ToStreamRaw(std::ostream & outputStream, const char delimiter, bool headerOnly, const std::string & headerPrefix) const
{
    if (headerOnly) {
        outputStream << cmnData<mtsInterfaceRequiredDescription >::SerializeDescription(*this, delimiter, headerPrefix);
    } else {
        cmnData<mtsInterfaceRequiredDescription >::SerializeText(*this, outputStream, delimiter);
    }
}
/* source line: 218 */
/* source line: 223 */
/* source line: 228 */
/* source line: 233 */
/* source line: 238 */
/* source line: 243 */
/* source line: 248 */
/* source line: 253 */
/* source line: 258 */
/* source line: 264 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const mtsInterfaceRequiredDescription & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, mtsInterfaceRequiredDescription & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void mtsInterfaceRequiredDescription::Copy(const mtsInterfaceRequiredDescription & source) {
    cmnData<std::string >::Copy(this->InterfaceName, source.InterfaceName);
    cmnData<mtsCommandPointerNames >::Copy(this->FunctionVoidNames, source.FunctionVoidNames);
    cmnData<mtsCommandPointerNames >::Copy(this->FunctionWriteNames, source.FunctionWriteNames);
    cmnData<mtsCommandPointerNames >::Copy(this->FunctionReadNames, source.FunctionReadNames);
    cmnData<mtsCommandPointerNames >::Copy(this->FunctionQualifiedReadNames, source.FunctionQualifiedReadNames);
    cmnData<mtsCommandPointerNames >::Copy(this->FunctionVoidReturnNames, source.FunctionVoidReturnNames);
    cmnData<mtsCommandPointerNames >::Copy(this->FunctionWriteReturnNames, source.FunctionWriteReturnNames);
    cmnData<mtsEventHandlersVoidDescription >::Copy(this->EventHandlersVoid, source.EventHandlersVoid);
    cmnData<mtsEventHandlersWriteDescription >::Copy(this->EventHandlersWrite, source.EventHandlersWrite);
    cmnData<bool >::Copy(this->IsRequired, source.IsRequired);
}
void mtsInterfaceRequiredDescription::SerializeBinary(std::ostream & outputStream) const throw (std::runtime_error) {
    cmnData<std::string >::SerializeBinary(this->InterfaceName, outputStream);
    cmnData<mtsCommandPointerNames >::SerializeBinary(this->FunctionVoidNames, outputStream);
    cmnData<mtsCommandPointerNames >::SerializeBinary(this->FunctionWriteNames, outputStream);
    cmnData<mtsCommandPointerNames >::SerializeBinary(this->FunctionReadNames, outputStream);
    cmnData<mtsCommandPointerNames >::SerializeBinary(this->FunctionQualifiedReadNames, outputStream);
    cmnData<mtsCommandPointerNames >::SerializeBinary(this->FunctionVoidReturnNames, outputStream);
    cmnData<mtsCommandPointerNames >::SerializeBinary(this->FunctionWriteReturnNames, outputStream);
    cmnData<mtsEventHandlersVoidDescription >::SerializeBinary(this->EventHandlersVoid, outputStream);
    cmnData<mtsEventHandlersWriteDescription >::SerializeBinary(this->EventHandlersWrite, outputStream);
    cmnData<bool >::SerializeBinary(this->IsRequired, outputStream);
}
void mtsInterfaceRequiredDescription::DeSerializeBinary(std::istream & inputStream,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) throw (std::runtime_error) {
    cmnData<std::string >::DeSerializeBinary(this->InterfaceName, inputStream, localFormat, remoteFormat);
    cmnData<mtsCommandPointerNames >::DeSerializeBinary(this->FunctionVoidNames, inputStream, localFormat, remoteFormat);
    cmnData<mtsCommandPointerNames >::DeSerializeBinary(this->FunctionWriteNames, inputStream, localFormat, remoteFormat);
    cmnData<mtsCommandPointerNames >::DeSerializeBinary(this->FunctionReadNames, inputStream, localFormat, remoteFormat);
    cmnData<mtsCommandPointerNames >::DeSerializeBinary(this->FunctionQualifiedReadNames, inputStream, localFormat, remoteFormat);
    cmnData<mtsCommandPointerNames >::DeSerializeBinary(this->FunctionVoidReturnNames, inputStream, localFormat, remoteFormat);
    cmnData<mtsCommandPointerNames >::DeSerializeBinary(this->FunctionWriteReturnNames, inputStream, localFormat, remoteFormat);
    cmnData<mtsEventHandlersVoidDescription >::DeSerializeBinary(this->EventHandlersVoid, inputStream, localFormat, remoteFormat);
    cmnData<mtsEventHandlersWriteDescription >::DeSerializeBinary(this->EventHandlersWrite, inputStream, localFormat, remoteFormat);
    cmnData<bool >::DeSerializeBinary(this->IsRequired, inputStream, localFormat, remoteFormat);
}
void mtsInterfaceRequiredDescription::SerializeText(std::ostream & outputStream, const char delimiter) const throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<std::string >::SerializeText(this->InterfaceName, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<mtsCommandPointerNames >::SerializeText(this->FunctionVoidNames, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<mtsCommandPointerNames >::SerializeText(this->FunctionWriteNames, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<mtsCommandPointerNames >::SerializeText(this->FunctionReadNames, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<mtsCommandPointerNames >::SerializeText(this->FunctionQualifiedReadNames, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<mtsCommandPointerNames >::SerializeText(this->FunctionVoidReturnNames, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<mtsCommandPointerNames >::SerializeText(this->FunctionWriteReturnNames, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<mtsEventHandlersVoidDescription >::SerializeText(this->EventHandlersVoid, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<mtsEventHandlersWriteDescription >::SerializeText(this->EventHandlersWrite, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<bool >::SerializeText(this->IsRequired, outputStream, delimiter);
}
std::string mtsInterfaceRequiredDescription::SerializeDescription(const char delimiter, const std::string & userDescription) const {
    bool someData = false;
    const std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    std::stringstream description;
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<std::string >::SerializeDescription(this->InterfaceName, delimiter, prefix + "InterfaceName");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<mtsCommandPointerNames >::SerializeDescription(this->FunctionVoidNames, delimiter, prefix + "FunctionVoidNames");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<mtsCommandPointerNames >::SerializeDescription(this->FunctionWriteNames, delimiter, prefix + "FunctionWriteNames");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<mtsCommandPointerNames >::SerializeDescription(this->FunctionReadNames, delimiter, prefix + "FunctionReadNames");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<mtsCommandPointerNames >::SerializeDescription(this->FunctionQualifiedReadNames, delimiter, prefix + "FunctionQualifiedReadNames");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<mtsCommandPointerNames >::SerializeDescription(this->FunctionVoidReturnNames, delimiter, prefix + "FunctionVoidReturnNames");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<mtsCommandPointerNames >::SerializeDescription(this->FunctionWriteReturnNames, delimiter, prefix + "FunctionWriteReturnNames");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<mtsEventHandlersVoidDescription >::SerializeDescription(this->EventHandlersVoid, delimiter, prefix + "EventHandlersVoid");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<mtsEventHandlersWriteDescription >::SerializeDescription(this->EventHandlersWrite, delimiter, prefix + "EventHandlersWrite");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<bool >::SerializeDescription(this->IsRequired, delimiter, prefix + "IsRequired");
    return description.str();
}
void mtsInterfaceRequiredDescription::DeSerializeText(std::istream & inputStream,
                                          const char delimiter) throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsInterfaceRequiredDescription");
    }
    someData = true;
    cmnData<std::string >::DeSerializeText(this->InterfaceName, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsInterfaceRequiredDescription");
    }
    someData = true;
    cmnData<mtsCommandPointerNames >::DeSerializeText(this->FunctionVoidNames, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsInterfaceRequiredDescription");
    }
    someData = true;
    cmnData<mtsCommandPointerNames >::DeSerializeText(this->FunctionWriteNames, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsInterfaceRequiredDescription");
    }
    someData = true;
    cmnData<mtsCommandPointerNames >::DeSerializeText(this->FunctionReadNames, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsInterfaceRequiredDescription");
    }
    someData = true;
    cmnData<mtsCommandPointerNames >::DeSerializeText(this->FunctionQualifiedReadNames, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsInterfaceRequiredDescription");
    }
    someData = true;
    cmnData<mtsCommandPointerNames >::DeSerializeText(this->FunctionVoidReturnNames, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsInterfaceRequiredDescription");
    }
    someData = true;
    cmnData<mtsCommandPointerNames >::DeSerializeText(this->FunctionWriteReturnNames, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsInterfaceRequiredDescription");
    }
    someData = true;
    cmnData<mtsEventHandlersVoidDescription >::DeSerializeText(this->EventHandlersVoid, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsInterfaceRequiredDescription");
    }
    someData = true;
    cmnData<mtsEventHandlersWriteDescription >::DeSerializeText(this->EventHandlersWrite, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsInterfaceRequiredDescription");
    }
    someData = true;
    cmnData<bool >::DeSerializeText(this->IsRequired, inputStream, delimiter);
}
std::string mtsInterfaceRequiredDescription::HumanReadable(void) const {
    std::stringstream description;
    description << "mtsInterfaceRequiredDescription" << std::endl;
    description << "  InterfaceName:" << cmnData<std::string >::HumanReadable(this->InterfaceName);
    description << "  FunctionVoidNames:" << cmnData<mtsCommandPointerNames >::HumanReadable(this->FunctionVoidNames);
    description << "  FunctionWriteNames:" << cmnData<mtsCommandPointerNames >::HumanReadable(this->FunctionWriteNames);
    description << "  FunctionReadNames:" << cmnData<mtsCommandPointerNames >::HumanReadable(this->FunctionReadNames);
    description << "  FunctionQualifiedReadNames:" << cmnData<mtsCommandPointerNames >::HumanReadable(this->FunctionQualifiedReadNames);
    description << "  FunctionVoidReturnNames:" << cmnData<mtsCommandPointerNames >::HumanReadable(this->FunctionVoidReturnNames);
    description << "  FunctionWriteReturnNames:" << cmnData<mtsCommandPointerNames >::HumanReadable(this->FunctionWriteReturnNames);
    description << "  EventHandlersVoid:" << cmnData<mtsEventHandlersVoidDescription >::HumanReadable(this->EventHandlersVoid);
    description << "  EventHandlersWrite:" << cmnData<mtsEventHandlersWriteDescription >::HumanReadable(this->EventHandlersWrite);
    description << "  IsRequired:" << cmnData<bool >::HumanReadable(this->IsRequired);
    return description.str();
}
bool mtsInterfaceRequiredDescription::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<std::string >::ScalarNumberIsFixed(this->InterfaceName)
           && cmnData<mtsCommandPointerNames >::ScalarNumberIsFixed(this->FunctionVoidNames)
           && cmnData<mtsCommandPointerNames >::ScalarNumberIsFixed(this->FunctionWriteNames)
           && cmnData<mtsCommandPointerNames >::ScalarNumberIsFixed(this->FunctionReadNames)
           && cmnData<mtsCommandPointerNames >::ScalarNumberIsFixed(this->FunctionQualifiedReadNames)
           && cmnData<mtsCommandPointerNames >::ScalarNumberIsFixed(this->FunctionVoidReturnNames)
           && cmnData<mtsCommandPointerNames >::ScalarNumberIsFixed(this->FunctionWriteReturnNames)
           && cmnData<mtsEventHandlersVoidDescription >::ScalarNumberIsFixed(this->EventHandlersVoid)
           && cmnData<mtsEventHandlersWriteDescription >::ScalarNumberIsFixed(this->EventHandlersWrite)
           && cmnData<bool >::ScalarNumberIsFixed(this->IsRequired)
    ;
}
size_t mtsInterfaceRequiredDescription::ScalarNumber(void) const {
    return 0
           + cmnData<std::string >::ScalarNumber(this->InterfaceName)
           + cmnData<mtsCommandPointerNames >::ScalarNumber(this->FunctionVoidNames)
           + cmnData<mtsCommandPointerNames >::ScalarNumber(this->FunctionWriteNames)
           + cmnData<mtsCommandPointerNames >::ScalarNumber(this->FunctionReadNames)
           + cmnData<mtsCommandPointerNames >::ScalarNumber(this->FunctionQualifiedReadNames)
           + cmnData<mtsCommandPointerNames >::ScalarNumber(this->FunctionVoidReturnNames)
           + cmnData<mtsCommandPointerNames >::ScalarNumber(this->FunctionWriteReturnNames)
           + cmnData<mtsEventHandlersVoidDescription >::ScalarNumber(this->EventHandlersVoid)
           + cmnData<mtsEventHandlersWriteDescription >::ScalarNumber(this->EventHandlersWrite)
           + cmnData<bool >::ScalarNumber(this->IsRequired)
    ;
}
std::string mtsInterfaceRequiredDescription::ScalarDescription(const size_t index, const std::string & userDescription) const throw (std::out_of_range) {
    std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->InterfaceName);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::ScalarDescription(this->InterfaceName, index - baseIndex, prefix + "InterfaceName");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<mtsCommandPointerNames >::ScalarNumber(this->FunctionVoidNames);
    if (index < currentMaxIndex) {
        return cmnData<mtsCommandPointerNames >::ScalarDescription(this->FunctionVoidNames, index - baseIndex, prefix + "FunctionVoidNames");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<mtsCommandPointerNames >::ScalarNumber(this->FunctionWriteNames);
    if (index < currentMaxIndex) {
        return cmnData<mtsCommandPointerNames >::ScalarDescription(this->FunctionWriteNames, index - baseIndex, prefix + "FunctionWriteNames");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<mtsCommandPointerNames >::ScalarNumber(this->FunctionReadNames);
    if (index < currentMaxIndex) {
        return cmnData<mtsCommandPointerNames >::ScalarDescription(this->FunctionReadNames, index - baseIndex, prefix + "FunctionReadNames");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<mtsCommandPointerNames >::ScalarNumber(this->FunctionQualifiedReadNames);
    if (index < currentMaxIndex) {
        return cmnData<mtsCommandPointerNames >::ScalarDescription(this->FunctionQualifiedReadNames, index - baseIndex, prefix + "FunctionQualifiedReadNames");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<mtsCommandPointerNames >::ScalarNumber(this->FunctionVoidReturnNames);
    if (index < currentMaxIndex) {
        return cmnData<mtsCommandPointerNames >::ScalarDescription(this->FunctionVoidReturnNames, index - baseIndex, prefix + "FunctionVoidReturnNames");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<mtsCommandPointerNames >::ScalarNumber(this->FunctionWriteReturnNames);
    if (index < currentMaxIndex) {
        return cmnData<mtsCommandPointerNames >::ScalarDescription(this->FunctionWriteReturnNames, index - baseIndex, prefix + "FunctionWriteReturnNames");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<mtsEventHandlersVoidDescription >::ScalarNumber(this->EventHandlersVoid);
    if (index < currentMaxIndex) {
        return cmnData<mtsEventHandlersVoidDescription >::ScalarDescription(this->EventHandlersVoid, index - baseIndex, prefix + "EventHandlersVoid");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<mtsEventHandlersWriteDescription >::ScalarNumber(this->EventHandlersWrite);
    if (index < currentMaxIndex) {
        return cmnData<mtsEventHandlersWriteDescription >::ScalarDescription(this->EventHandlersWrite, index - baseIndex, prefix + "EventHandlersWrite");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<bool >::ScalarNumber(this->IsRequired);
    if (index < currentMaxIndex) {
        return cmnData<bool >::ScalarDescription(this->IsRequired, index - baseIndex, prefix + "IsRequired");
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: mtsInterfaceRequiredDescription index out of range"));
    return "";
}
double mtsInterfaceRequiredDescription::Scalar(const size_t index) const throw (std::out_of_range) {
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->InterfaceName);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::Scalar(this->InterfaceName, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<mtsCommandPointerNames >::ScalarNumber(this->FunctionVoidNames);
    if (index < currentMaxIndex) {
        return cmnData<mtsCommandPointerNames >::Scalar(this->FunctionVoidNames, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<mtsCommandPointerNames >::ScalarNumber(this->FunctionWriteNames);
    if (index < currentMaxIndex) {
        return cmnData<mtsCommandPointerNames >::Scalar(this->FunctionWriteNames, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<mtsCommandPointerNames >::ScalarNumber(this->FunctionReadNames);
    if (index < currentMaxIndex) {
        return cmnData<mtsCommandPointerNames >::Scalar(this->FunctionReadNames, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<mtsCommandPointerNames >::ScalarNumber(this->FunctionQualifiedReadNames);
    if (index < currentMaxIndex) {
        return cmnData<mtsCommandPointerNames >::Scalar(this->FunctionQualifiedReadNames, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<mtsCommandPointerNames >::ScalarNumber(this->FunctionVoidReturnNames);
    if (index < currentMaxIndex) {
        return cmnData<mtsCommandPointerNames >::Scalar(this->FunctionVoidReturnNames, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<mtsCommandPointerNames >::ScalarNumber(this->FunctionWriteReturnNames);
    if (index < currentMaxIndex) {
        return cmnData<mtsCommandPointerNames >::Scalar(this->FunctionWriteReturnNames, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<mtsEventHandlersVoidDescription >::ScalarNumber(this->EventHandlersVoid);
    if (index < currentMaxIndex) {
        return cmnData<mtsEventHandlersVoidDescription >::Scalar(this->EventHandlersVoid, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<mtsEventHandlersWriteDescription >::ScalarNumber(this->EventHandlersWrite);
    if (index < currentMaxIndex) {
        return cmnData<mtsEventHandlersWriteDescription >::Scalar(this->EventHandlersWrite, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<bool >::ScalarNumber(this->IsRequired);
    if (index < currentMaxIndex) {
        return cmnData<bool >::Scalar(this->IsRequired, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalar: mtsInterfaceRequiredDescription index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<mtsInterfaceRequiredDescription >::SerializeText(const mtsInterfaceRequiredDescription & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void mtsInterfaceRequiredDescription::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<std::string >::SerializeText(this->InterfaceName, jsonValue["InterfaceName"]);
    cmnDataJSON<mtsCommandPointerNames >::SerializeText(this->FunctionVoidNames, jsonValue["FunctionVoidNames"]);
    cmnDataJSON<mtsCommandPointerNames >::SerializeText(this->FunctionWriteNames, jsonValue["FunctionWriteNames"]);
    cmnDataJSON<mtsCommandPointerNames >::SerializeText(this->FunctionReadNames, jsonValue["FunctionReadNames"]);
    cmnDataJSON<mtsCommandPointerNames >::SerializeText(this->FunctionQualifiedReadNames, jsonValue["FunctionQualifiedReadNames"]);
    cmnDataJSON<mtsCommandPointerNames >::SerializeText(this->FunctionVoidReturnNames, jsonValue["FunctionVoidReturnNames"]);
    cmnDataJSON<mtsCommandPointerNames >::SerializeText(this->FunctionWriteReturnNames, jsonValue["FunctionWriteReturnNames"]);
    cmnDataJSON<mtsEventHandlersVoidDescription >::SerializeText(this->EventHandlersVoid, jsonValue["EventHandlersVoid"]);
    cmnDataJSON<mtsEventHandlersWriteDescription >::SerializeText(this->EventHandlersWrite, jsonValue["EventHandlersWrite"]);
    cmnDataJSON<bool >::SerializeText(this->IsRequired, jsonValue["IsRequired"]);
}
template<>
void cmnDataJSON<mtsInterfaceRequiredDescription >::DeSerializeText(mtsInterfaceRequiredDescription & data, const Json::Value & jsonValue) throw (std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void mtsInterfaceRequiredDescription::DeSerializeTextJSON(const Json::Value & jsonValue) throw (std::runtime_error) {
    cmnDataJSON<std::string >::DeSerializeText(this->InterfaceName, jsonValue["InterfaceName"]);
    cmnDataJSON<mtsCommandPointerNames >::DeSerializeText(this->FunctionVoidNames, jsonValue["FunctionVoidNames"]);
    cmnDataJSON<mtsCommandPointerNames >::DeSerializeText(this->FunctionWriteNames, jsonValue["FunctionWriteNames"]);
    cmnDataJSON<mtsCommandPointerNames >::DeSerializeText(this->FunctionReadNames, jsonValue["FunctionReadNames"]);
    cmnDataJSON<mtsCommandPointerNames >::DeSerializeText(this->FunctionQualifiedReadNames, jsonValue["FunctionQualifiedReadNames"]);
    cmnDataJSON<mtsCommandPointerNames >::DeSerializeText(this->FunctionVoidReturnNames, jsonValue["FunctionVoidReturnNames"]);
    cmnDataJSON<mtsCommandPointerNames >::DeSerializeText(this->FunctionWriteReturnNames, jsonValue["FunctionWriteReturnNames"]);
    cmnDataJSON<mtsEventHandlersVoidDescription >::DeSerializeText(this->EventHandlersVoid, jsonValue["EventHandlersVoid"]);
    cmnDataJSON<mtsEventHandlersWriteDescription >::DeSerializeText(this->EventHandlersWrite, jsonValue["EventHandlersWrite"]);
    cmnDataJSON<bool >::DeSerializeText(this->IsRequired, jsonValue["IsRequired"]);
}
#endif // CISST_HAS_JSON

