// file automatically generated, do not modify
// cisst version: 1.0.8
// source file: /home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstStereoVision/code/../svlFilterSourceVideoCaptureTypes.cdg

#include <cisstStereoVision/svlFilterSourceVideoCaptureTypes.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>

/* source line: 1 */

/* source line: 61 */

#if CISST_HAS_JSON
    CMN_IMPLEMENT_DATA_FUNCTIONS_JSON_FOR_ENUM(svlFilterSourceVideoCaptureTypes::PlatformType, int);
    CMN_IMPLEMENT_DATA_FUNCTIONS_JSON_FOR_ENUM(svlFilterSourceVideoCaptureTypes::PixelType, int);
    CMN_IMPLEMENT_DATA_FUNCTIONS_JSON_FOR_ENUM(svlFilterSourceVideoCaptureTypes::PatternType, int);
#endif

/* source line: 69 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(svlFilterSourceVideoCaptureTypes_DeviceInfoProxy);

svlFilterSourceVideoCaptureTypes::DeviceInfo::DeviceInfo(void):
      ID()
    , platform()
    , inputcount()
    , activeinput()
    , testok()
{}

svlFilterSourceVideoCaptureTypes::DeviceInfo::DeviceInfo(const DeviceInfo & other):
      ID(other.ID)
    , platform(other.platform)
    , inputcount(other.inputcount)
    , activeinput(other.activeinput)
    , testok(other.testok)
{}

svlFilterSourceVideoCaptureTypes::DeviceInfo::~DeviceInfo(void){}


void svlFilterSourceVideoCaptureTypes::DeviceInfo::SerializeRaw(std::ostream & outputStream) const
{
    cmnSerializeRaw(outputStream, this->ID);
    cmnSerializeRaw(outputStream, this->name);
    cmnSerializeRaw(outputStream, this->platform);
    cmnSerializeRaw(outputStream, this->inputcount);
    cmnSerializeRaw(outputStream, this->activeinput);
    cmnSerializeRaw(outputStream, this->inputnames);
    cmnSerializeRaw(outputStream, this->testok);
}


void svlFilterSourceVideoCaptureTypes::DeviceInfo::DeSerializeRaw(std::istream & inputStream)
{
    cmnDeSerializeRaw(inputStream, this->ID);
    cmnDeSerializeRaw(inputStream, this->name);
    cmnDeSerializeRaw(inputStream, this->platform);
    cmnDeSerializeRaw(inputStream, this->inputcount);
    cmnDeSerializeRaw(inputStream, this->activeinput);
    cmnDeSerializeRaw(inputStream, this->inputnames);
    cmnDeSerializeRaw(inputStream, this->testok);
}


void svlFilterSourceVideoCaptureTypes::DeviceInfo::ToStream(std::ostream & outputStream) const
{
    outputStream << this->HumanReadable();
}

void svlFilterSourceVideoCaptureTypes::DeviceInfo::ToStreamRaw(std::ostream & outputStream, const char delimiter, bool headerOnly, const std::string & headerPrefix) const
{
    if (headerOnly) {
        outputStream << cmnData<svlFilterSourceVideoCaptureTypes::DeviceInfo >::SerializeDescription(*this, delimiter, headerPrefix);
    } else {
        cmnData<svlFilterSourceVideoCaptureTypes::DeviceInfo >::SerializeText(*this, outputStream, delimiter);
    }
}
/* source line: 74 */
/* source line: 79 */
/* source line: 84 */
/* source line: 89 */
/* source line: 94 */
/* source line: 99 */
/* source line: 104 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const svlFilterSourceVideoCaptureTypes::DeviceInfo & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, svlFilterSourceVideoCaptureTypes::DeviceInfo & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void svlFilterSourceVideoCaptureTypes::DeviceInfo::Copy(const svlFilterSourceVideoCaptureTypes::DeviceInfo & source) {
    cmnData<int >::Copy(this->ID, source.ID);
    cmnData<char[SVL_VCS_STRING_LENGTH] >::Copy(this->name, source.name);
    cmnData<PlatformType >::Copy(this->platform, source.platform);
    cmnData<int >::Copy(this->inputcount, source.inputcount);
    cmnData<int >::Copy(this->activeinput, source.activeinput);
    cmnData<char[SVL_VCS_ARRAY_LENGTH][SVL_VCS_STRING_LENGTH] >::Copy(this->inputnames, source.inputnames);
    cmnData<bool >::Copy(this->testok, source.testok);
}
void svlFilterSourceVideoCaptureTypes::DeviceInfo::SerializeBinary(std::ostream & outputStream) const throw (std::runtime_error) {
    cmnData<int >::SerializeBinary(this->ID, outputStream);
    cmnData<char[SVL_VCS_STRING_LENGTH] >::SerializeBinary(this->name, outputStream);
    cmnData<PlatformType >::SerializeBinary(this->platform, outputStream);
    cmnData<int >::SerializeBinary(this->inputcount, outputStream);
    cmnData<int >::SerializeBinary(this->activeinput, outputStream);
    cmnData<char[SVL_VCS_ARRAY_LENGTH][SVL_VCS_STRING_LENGTH] >::SerializeBinary(this->inputnames, outputStream);
    cmnData<bool >::SerializeBinary(this->testok, outputStream);
}
void svlFilterSourceVideoCaptureTypes::DeviceInfo::DeSerializeBinary(std::istream & inputStream,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) throw (std::runtime_error) {
    cmnData<int >::DeSerializeBinary(this->ID, inputStream, localFormat, remoteFormat);
    cmnData<char[SVL_VCS_STRING_LENGTH] >::DeSerializeBinary(this->name, inputStream, localFormat, remoteFormat);
    cmnData<PlatformType >::DeSerializeBinary(this->platform, inputStream, localFormat, remoteFormat);
    cmnData<int >::DeSerializeBinary(this->inputcount, inputStream, localFormat, remoteFormat);
    cmnData<int >::DeSerializeBinary(this->activeinput, inputStream, localFormat, remoteFormat);
    cmnData<char[SVL_VCS_ARRAY_LENGTH][SVL_VCS_STRING_LENGTH] >::DeSerializeBinary(this->inputnames, inputStream, localFormat, remoteFormat);
    cmnData<bool >::DeSerializeBinary(this->testok, inputStream, localFormat, remoteFormat);
}
void svlFilterSourceVideoCaptureTypes::DeviceInfo::SerializeText(std::ostream & outputStream, const char delimiter) const throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<int >::SerializeText(this->ID, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<char[SVL_VCS_STRING_LENGTH] >::SerializeText(this->name, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<PlatformType >::SerializeText(this->platform, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<int >::SerializeText(this->inputcount, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<int >::SerializeText(this->activeinput, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<char[SVL_VCS_ARRAY_LENGTH][SVL_VCS_STRING_LENGTH] >::SerializeText(this->inputnames, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<bool >::SerializeText(this->testok, outputStream, delimiter);
}
std::string svlFilterSourceVideoCaptureTypes::DeviceInfo::SerializeDescription(const char delimiter, const std::string & userDescription) const {
    bool someData = false;
    const std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    std::stringstream description;
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<int >::SerializeDescription(this->ID, delimiter, prefix + "ID");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<char[SVL_VCS_STRING_LENGTH] >::SerializeDescription(this->name, delimiter, prefix + "name");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<PlatformType >::SerializeDescription(this->platform, delimiter, prefix + "platform");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<int >::SerializeDescription(this->inputcount, delimiter, prefix + "inputcount");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<int >::SerializeDescription(this->activeinput, delimiter, prefix + "activeinput");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<char[SVL_VCS_ARRAY_LENGTH][SVL_VCS_STRING_LENGTH] >::SerializeDescription(this->inputnames, delimiter, prefix + "inputnames");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<bool >::SerializeDescription(this->testok, delimiter, prefix + "testok");
    return description.str();
}
void svlFilterSourceVideoCaptureTypes::DeviceInfo::DeSerializeText(std::istream & inputStream,
                                          const char delimiter) throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "svlFilterSourceVideoCaptureTypes::DeviceInfo");
    }
    someData = true;
    cmnData<int >::DeSerializeText(this->ID, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "svlFilterSourceVideoCaptureTypes::DeviceInfo");
    }
    someData = true;
    cmnData<char[SVL_VCS_STRING_LENGTH] >::DeSerializeText(this->name, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "svlFilterSourceVideoCaptureTypes::DeviceInfo");
    }
    someData = true;
    cmnData<PlatformType >::DeSerializeText(this->platform, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "svlFilterSourceVideoCaptureTypes::DeviceInfo");
    }
    someData = true;
    cmnData<int >::DeSerializeText(this->inputcount, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "svlFilterSourceVideoCaptureTypes::DeviceInfo");
    }
    someData = true;
    cmnData<int >::DeSerializeText(this->activeinput, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "svlFilterSourceVideoCaptureTypes::DeviceInfo");
    }
    someData = true;
    cmnData<char[SVL_VCS_ARRAY_LENGTH][SVL_VCS_STRING_LENGTH] >::DeSerializeText(this->inputnames, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "svlFilterSourceVideoCaptureTypes::DeviceInfo");
    }
    someData = true;
    cmnData<bool >::DeSerializeText(this->testok, inputStream, delimiter);
}
bool svlFilterSourceVideoCaptureTypes::DeviceInfo::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<int >::ScalarNumberIsFixed(this->ID)
           && cmnData<char[SVL_VCS_STRING_LENGTH] >::ScalarNumberIsFixed(this->name)
           && cmnData<PlatformType >::ScalarNumberIsFixed(this->platform)
           && cmnData<int >::ScalarNumberIsFixed(this->inputcount)
           && cmnData<int >::ScalarNumberIsFixed(this->activeinput)
           && cmnData<char[SVL_VCS_ARRAY_LENGTH][SVL_VCS_STRING_LENGTH] >::ScalarNumberIsFixed(this->inputnames)
           && cmnData<bool >::ScalarNumberIsFixed(this->testok)
    ;
}
size_t svlFilterSourceVideoCaptureTypes::DeviceInfo::ScalarNumber(void) const {
    return 0
           + cmnData<int >::ScalarNumber(this->ID)
           + cmnData<char[SVL_VCS_STRING_LENGTH] >::ScalarNumber(this->name)
           + cmnData<PlatformType >::ScalarNumber(this->platform)
           + cmnData<int >::ScalarNumber(this->inputcount)
           + cmnData<int >::ScalarNumber(this->activeinput)
           + cmnData<char[SVL_VCS_ARRAY_LENGTH][SVL_VCS_STRING_LENGTH] >::ScalarNumber(this->inputnames)
           + cmnData<bool >::ScalarNumber(this->testok)
    ;
}
std::string svlFilterSourceVideoCaptureTypes::DeviceInfo::ScalarDescription(const size_t index, const std::string & userDescription) const throw (std::out_of_range) {
    std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<int >::ScalarNumber(this->ID);
    if (index < currentMaxIndex) {
        return cmnData<int >::ScalarDescription(this->ID, index - baseIndex, prefix + "ID");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<char[SVL_VCS_STRING_LENGTH] >::ScalarNumber(this->name);
    if (index < currentMaxIndex) {
        return cmnData<char[SVL_VCS_STRING_LENGTH] >::ScalarDescription(this->name, index - baseIndex, prefix + "name");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<PlatformType >::ScalarNumber(this->platform);
    if (index < currentMaxIndex) {
        return cmnData<PlatformType >::ScalarDescription(this->platform, index - baseIndex, prefix + "platform");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<int >::ScalarNumber(this->inputcount);
    if (index < currentMaxIndex) {
        return cmnData<int >::ScalarDescription(this->inputcount, index - baseIndex, prefix + "inputcount");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<int >::ScalarNumber(this->activeinput);
    if (index < currentMaxIndex) {
        return cmnData<int >::ScalarDescription(this->activeinput, index - baseIndex, prefix + "activeinput");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<char[SVL_VCS_ARRAY_LENGTH][SVL_VCS_STRING_LENGTH] >::ScalarNumber(this->inputnames);
    if (index < currentMaxIndex) {
        return cmnData<char[SVL_VCS_ARRAY_LENGTH][SVL_VCS_STRING_LENGTH] >::ScalarDescription(this->inputnames, index - baseIndex, prefix + "inputnames");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<bool >::ScalarNumber(this->testok);
    if (index < currentMaxIndex) {
        return cmnData<bool >::ScalarDescription(this->testok, index - baseIndex, prefix + "testok");
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: svlFilterSourceVideoCaptureTypes::DeviceInfo index out of range"));
    return "";
}
double svlFilterSourceVideoCaptureTypes::DeviceInfo::Scalar(const size_t index) const throw (std::out_of_range) {
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<int >::ScalarNumber(this->ID);
    if (index < currentMaxIndex) {
        return cmnData<int >::Scalar(this->ID, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<char[SVL_VCS_STRING_LENGTH] >::ScalarNumber(this->name);
    if (index < currentMaxIndex) {
        return cmnData<char[SVL_VCS_STRING_LENGTH] >::Scalar(this->name, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<PlatformType >::ScalarNumber(this->platform);
    if (index < currentMaxIndex) {
        return cmnData<PlatformType >::Scalar(this->platform, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<int >::ScalarNumber(this->inputcount);
    if (index < currentMaxIndex) {
        return cmnData<int >::Scalar(this->inputcount, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<int >::ScalarNumber(this->activeinput);
    if (index < currentMaxIndex) {
        return cmnData<int >::Scalar(this->activeinput, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<char[SVL_VCS_ARRAY_LENGTH][SVL_VCS_STRING_LENGTH] >::ScalarNumber(this->inputnames);
    if (index < currentMaxIndex) {
        return cmnData<char[SVL_VCS_ARRAY_LENGTH][SVL_VCS_STRING_LENGTH] >::Scalar(this->inputnames, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<bool >::ScalarNumber(this->testok);
    if (index < currentMaxIndex) {
        return cmnData<bool >::Scalar(this->testok, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalar: svlFilterSourceVideoCaptureTypes::DeviceInfo index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<svlFilterSourceVideoCaptureTypes::DeviceInfo >::SerializeText(const svlFilterSourceVideoCaptureTypes::DeviceInfo & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void svlFilterSourceVideoCaptureTypes::DeviceInfo::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<int >::SerializeText(this->ID, jsonValue["ID"]);
    cmnDataJSON<char[SVL_VCS_STRING_LENGTH] >::SerializeText(this->name, jsonValue["name"]);
    cmnDataJSON<PlatformType >::SerializeText(this->platform, jsonValue["platform"]);
    cmnDataJSON<int >::SerializeText(this->inputcount, jsonValue["inputcount"]);
    cmnDataJSON<int >::SerializeText(this->activeinput, jsonValue["activeinput"]);
    cmnDataJSON<char[SVL_VCS_ARRAY_LENGTH][SVL_VCS_STRING_LENGTH] >::SerializeText(this->inputnames, jsonValue["inputnames"]);
    cmnDataJSON<bool >::SerializeText(this->testok, jsonValue["testok"]);
}
template<>
void cmnDataJSON<svlFilterSourceVideoCaptureTypes::DeviceInfo >::DeSerializeText(svlFilterSourceVideoCaptureTypes::DeviceInfo & data, const Json::Value & jsonValue) throw (std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void svlFilterSourceVideoCaptureTypes::DeviceInfo::DeSerializeTextJSON(const Json::Value & jsonValue) throw (std::runtime_error) {
    cmnDataJSON<int >::DeSerializeText(this->ID, jsonValue["ID"]);
    cmnDataJSON<char[SVL_VCS_STRING_LENGTH] >::DeSerializeText(this->name, jsonValue["name"]);
    cmnDataJSON<PlatformType >::DeSerializeText(this->platform, jsonValue["platform"]);
    cmnDataJSON<int >::DeSerializeText(this->inputcount, jsonValue["inputcount"]);
    cmnDataJSON<int >::DeSerializeText(this->activeinput, jsonValue["activeinput"]);
    cmnDataJSON<char[SVL_VCS_ARRAY_LENGTH][SVL_VCS_STRING_LENGTH] >::DeSerializeText(this->inputnames, jsonValue["inputnames"]);
    cmnDataJSON<bool >::DeSerializeText(this->testok, jsonValue["testok"]);
}
#endif // CISST_HAS_JSON


/* source line: 117 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(svlFilterSourceVideoCaptureTypes_ExternalTriggerProxy);

svlFilterSourceVideoCaptureTypes::ExternalTrigger::ExternalTrigger(void):
      enable()
    , mode()
    , source()
    , polarity()
{}

svlFilterSourceVideoCaptureTypes::ExternalTrigger::ExternalTrigger(const ExternalTrigger & other):
      enable(other.enable)
    , mode(other.mode)
    , source(other.source)
    , polarity(other.polarity)
{}

svlFilterSourceVideoCaptureTypes::ExternalTrigger::~ExternalTrigger(void){}


void svlFilterSourceVideoCaptureTypes::ExternalTrigger::SerializeRaw(std::ostream & outputStream) const
{
    cmnSerializeRaw(outputStream, this->enable);
    cmnSerializeRaw(outputStream, this->mode);
    cmnSerializeRaw(outputStream, this->source);
    cmnSerializeRaw(outputStream, this->polarity);
}


void svlFilterSourceVideoCaptureTypes::ExternalTrigger::DeSerializeRaw(std::istream & inputStream)
{
    cmnDeSerializeRaw(inputStream, this->enable);
    cmnDeSerializeRaw(inputStream, this->mode);
    cmnDeSerializeRaw(inputStream, this->source);
    cmnDeSerializeRaw(inputStream, this->polarity);
}


void svlFilterSourceVideoCaptureTypes::ExternalTrigger::ToStream(std::ostream & outputStream) const
{
    outputStream << this->HumanReadable();
}

void svlFilterSourceVideoCaptureTypes::ExternalTrigger::ToStreamRaw(std::ostream & outputStream, const char delimiter, bool headerOnly, const std::string & headerPrefix) const
{
    if (headerOnly) {
        outputStream << cmnData<svlFilterSourceVideoCaptureTypes::ExternalTrigger >::SerializeDescription(*this, delimiter, headerPrefix);
    } else {
        cmnData<svlFilterSourceVideoCaptureTypes::ExternalTrigger >::SerializeText(*this, outputStream, delimiter);
    }
}
/* source line: 121 */
/* source line: 126 */
/* source line: 131 */
/* source line: 136 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const svlFilterSourceVideoCaptureTypes::ExternalTrigger & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, svlFilterSourceVideoCaptureTypes::ExternalTrigger & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void svlFilterSourceVideoCaptureTypes::ExternalTrigger::Copy(const svlFilterSourceVideoCaptureTypes::ExternalTrigger & source) {
    cmnData<bool >::Copy(this->enable, source.enable);
    cmnData<unsigned int >::Copy(this->mode, source.mode);
    cmnData<unsigned int >::Copy(this->source, source.source);
    cmnData<unsigned int >::Copy(this->polarity, source.polarity);
}
void svlFilterSourceVideoCaptureTypes::ExternalTrigger::SerializeBinary(std::ostream & outputStream) const throw (std::runtime_error) {
    cmnData<bool >::SerializeBinary(this->enable, outputStream);
    cmnData<unsigned int >::SerializeBinary(this->mode, outputStream);
    cmnData<unsigned int >::SerializeBinary(this->source, outputStream);
    cmnData<unsigned int >::SerializeBinary(this->polarity, outputStream);
}
void svlFilterSourceVideoCaptureTypes::ExternalTrigger::DeSerializeBinary(std::istream & inputStream,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) throw (std::runtime_error) {
    cmnData<bool >::DeSerializeBinary(this->enable, inputStream, localFormat, remoteFormat);
    cmnData<unsigned int >::DeSerializeBinary(this->mode, inputStream, localFormat, remoteFormat);
    cmnData<unsigned int >::DeSerializeBinary(this->source, inputStream, localFormat, remoteFormat);
    cmnData<unsigned int >::DeSerializeBinary(this->polarity, inputStream, localFormat, remoteFormat);
}
void svlFilterSourceVideoCaptureTypes::ExternalTrigger::SerializeText(std::ostream & outputStream, const char delimiter) const throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<bool >::SerializeText(this->enable, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<unsigned int >::SerializeText(this->mode, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<unsigned int >::SerializeText(this->source, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<unsigned int >::SerializeText(this->polarity, outputStream, delimiter);
}
std::string svlFilterSourceVideoCaptureTypes::ExternalTrigger::SerializeDescription(const char delimiter, const std::string & userDescription) const {
    bool someData = false;
    const std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    std::stringstream description;
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<bool >::SerializeDescription(this->enable, delimiter, prefix + "enable");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<unsigned int >::SerializeDescription(this->mode, delimiter, prefix + "mode");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<unsigned int >::SerializeDescription(this->source, delimiter, prefix + "source");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<unsigned int >::SerializeDescription(this->polarity, delimiter, prefix + "polarity");
    return description.str();
}
void svlFilterSourceVideoCaptureTypes::ExternalTrigger::DeSerializeText(std::istream & inputStream,
                                          const char delimiter) throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "svlFilterSourceVideoCaptureTypes::ExternalTrigger");
    }
    someData = true;
    cmnData<bool >::DeSerializeText(this->enable, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "svlFilterSourceVideoCaptureTypes::ExternalTrigger");
    }
    someData = true;
    cmnData<unsigned int >::DeSerializeText(this->mode, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "svlFilterSourceVideoCaptureTypes::ExternalTrigger");
    }
    someData = true;
    cmnData<unsigned int >::DeSerializeText(this->source, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "svlFilterSourceVideoCaptureTypes::ExternalTrigger");
    }
    someData = true;
    cmnData<unsigned int >::DeSerializeText(this->polarity, inputStream, delimiter);
}
std::string svlFilterSourceVideoCaptureTypes::ExternalTrigger::HumanReadable(void) const {
    std::stringstream description;
    description << "svlFilterSourceVideoCaptureTypes::ExternalTrigger" << std::endl;
    description << "  enable:" << cmnData<bool >::HumanReadable(this->enable);
    description << "  mode:" << cmnData<unsigned int >::HumanReadable(this->mode);
    description << "  source:" << cmnData<unsigned int >::HumanReadable(this->source);
    description << "  polarity:" << cmnData<unsigned int >::HumanReadable(this->polarity);
    return description.str();
}
bool svlFilterSourceVideoCaptureTypes::ExternalTrigger::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<bool >::ScalarNumberIsFixed(this->enable)
           && cmnData<unsigned int >::ScalarNumberIsFixed(this->mode)
           && cmnData<unsigned int >::ScalarNumberIsFixed(this->source)
           && cmnData<unsigned int >::ScalarNumberIsFixed(this->polarity)
    ;
}
size_t svlFilterSourceVideoCaptureTypes::ExternalTrigger::ScalarNumber(void) const {
    return 0
           + cmnData<bool >::ScalarNumber(this->enable)
           + cmnData<unsigned int >::ScalarNumber(this->mode)
           + cmnData<unsigned int >::ScalarNumber(this->source)
           + cmnData<unsigned int >::ScalarNumber(this->polarity)
    ;
}
std::string svlFilterSourceVideoCaptureTypes::ExternalTrigger::ScalarDescription(const size_t index, const std::string & userDescription) const throw (std::out_of_range) {
    std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<bool >::ScalarNumber(this->enable);
    if (index < currentMaxIndex) {
        return cmnData<bool >::ScalarDescription(this->enable, index - baseIndex, prefix + "enable");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<unsigned int >::ScalarNumber(this->mode);
    if (index < currentMaxIndex) {
        return cmnData<unsigned int >::ScalarDescription(this->mode, index - baseIndex, prefix + "mode");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<unsigned int >::ScalarNumber(this->source);
    if (index < currentMaxIndex) {
        return cmnData<unsigned int >::ScalarDescription(this->source, index - baseIndex, prefix + "source");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<unsigned int >::ScalarNumber(this->polarity);
    if (index < currentMaxIndex) {
        return cmnData<unsigned int >::ScalarDescription(this->polarity, index - baseIndex, prefix + "polarity");
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: svlFilterSourceVideoCaptureTypes::ExternalTrigger index out of range"));
    return "";
}
double svlFilterSourceVideoCaptureTypes::ExternalTrigger::Scalar(const size_t index) const throw (std::out_of_range) {
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<bool >::ScalarNumber(this->enable);
    if (index < currentMaxIndex) {
        return cmnData<bool >::Scalar(this->enable, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<unsigned int >::ScalarNumber(this->mode);
    if (index < currentMaxIndex) {
        return cmnData<unsigned int >::Scalar(this->mode, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<unsigned int >::ScalarNumber(this->source);
    if (index < currentMaxIndex) {
        return cmnData<unsigned int >::Scalar(this->source, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<unsigned int >::ScalarNumber(this->polarity);
    if (index < currentMaxIndex) {
        return cmnData<unsigned int >::Scalar(this->polarity, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalar: svlFilterSourceVideoCaptureTypes::ExternalTrigger index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<svlFilterSourceVideoCaptureTypes::ExternalTrigger >::SerializeText(const svlFilterSourceVideoCaptureTypes::ExternalTrigger & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void svlFilterSourceVideoCaptureTypes::ExternalTrigger::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<bool >::SerializeText(this->enable, jsonValue["enable"]);
    cmnDataJSON<unsigned int >::SerializeText(this->mode, jsonValue["mode"]);
    cmnDataJSON<unsigned int >::SerializeText(this->source, jsonValue["source"]);
    cmnDataJSON<unsigned int >::SerializeText(this->polarity, jsonValue["polarity"]);
}
template<>
void cmnDataJSON<svlFilterSourceVideoCaptureTypes::ExternalTrigger >::DeSerializeText(svlFilterSourceVideoCaptureTypes::ExternalTrigger & data, const Json::Value & jsonValue) throw (std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void svlFilterSourceVideoCaptureTypes::ExternalTrigger::DeSerializeTextJSON(const Json::Value & jsonValue) throw (std::runtime_error) {
    cmnDataJSON<bool >::DeSerializeText(this->enable, jsonValue["enable"]);
    cmnDataJSON<unsigned int >::DeSerializeText(this->mode, jsonValue["mode"]);
    cmnDataJSON<unsigned int >::DeSerializeText(this->source, jsonValue["source"]);
    cmnDataJSON<unsigned int >::DeSerializeText(this->polarity, jsonValue["polarity"]);
}
#endif // CISST_HAS_JSON


/* source line: 149 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(svlFilterSourceVideoCaptureTypes_ImageFormatProxy);

svlFilterSourceVideoCaptureTypes::ImageFormat::ImageFormat(void):
      defaults()
    , width()
    , height()
    , colorspace()
    , framerate()
    , rgb_order()
    , yuyv_order()
    , custom_mode()
    , custom_roileft()
    , custom_roitop()
    , custom_framerate()
    , custom_maxwidth()
    , custom_maxheight()
    , custom_unitwidth()
    , custom_unitheight()
    , custom_unitleft()
    , custom_unittop()
    , custom_pattern()
{}

svlFilterSourceVideoCaptureTypes::ImageFormat::ImageFormat(const ImageFormat & other):
      defaults(other.defaults)
    , width(other.width)
    , height(other.height)
    , colorspace(other.colorspace)
    , framerate(other.framerate)
    , rgb_order(other.rgb_order)
    , yuyv_order(other.yuyv_order)
    , custom_mode(other.custom_mode)
    , custom_roileft(other.custom_roileft)
    , custom_roitop(other.custom_roitop)
    , custom_framerate(other.custom_framerate)
    , custom_maxwidth(other.custom_maxwidth)
    , custom_maxheight(other.custom_maxheight)
    , custom_unitwidth(other.custom_unitwidth)
    , custom_unitheight(other.custom_unitheight)
    , custom_unitleft(other.custom_unitleft)
    , custom_unittop(other.custom_unittop)
    , custom_pattern(other.custom_pattern)
{}

svlFilterSourceVideoCaptureTypes::ImageFormat::~ImageFormat(void){}


void svlFilterSourceVideoCaptureTypes::ImageFormat::SerializeRaw(std::ostream & outputStream) const
{
    cmnSerializeRaw(outputStream, this->defaults);
    cmnSerializeRaw(outputStream, this->width);
    cmnSerializeRaw(outputStream, this->height);
    cmnSerializeRaw(outputStream, this->colorspace);
    cmnSerializeRaw(outputStream, this->framerate);
    cmnSerializeRaw(outputStream, this->rgb_order);
    cmnSerializeRaw(outputStream, this->yuyv_order);
    cmnSerializeRaw(outputStream, this->custom_mode);
    cmnSerializeRaw(outputStream, this->custom_roileft);
    cmnSerializeRaw(outputStream, this->custom_roitop);
    cmnSerializeRaw(outputStream, this->custom_framerate);
    cmnSerializeRaw(outputStream, this->custom_maxwidth);
    cmnSerializeRaw(outputStream, this->custom_maxheight);
    cmnSerializeRaw(outputStream, this->custom_unitwidth);
    cmnSerializeRaw(outputStream, this->custom_unitheight);
    cmnSerializeRaw(outputStream, this->custom_unitleft);
    cmnSerializeRaw(outputStream, this->custom_unittop);
    cmnSerializeRaw(outputStream, this->custom_colorspaces);
    cmnSerializeRaw(outputStream, this->custom_pattern);
}


void svlFilterSourceVideoCaptureTypes::ImageFormat::DeSerializeRaw(std::istream & inputStream)
{
    cmnDeSerializeRaw(inputStream, this->defaults);
    cmnDeSerializeRaw(inputStream, this->width);
    cmnDeSerializeRaw(inputStream, this->height);
    cmnDeSerializeRaw(inputStream, this->colorspace);
    cmnDeSerializeRaw(inputStream, this->framerate);
    cmnDeSerializeRaw(inputStream, this->rgb_order);
    cmnDeSerializeRaw(inputStream, this->yuyv_order);
    cmnDeSerializeRaw(inputStream, this->custom_mode);
    cmnDeSerializeRaw(inputStream, this->custom_roileft);
    cmnDeSerializeRaw(inputStream, this->custom_roitop);
    cmnDeSerializeRaw(inputStream, this->custom_framerate);
    cmnDeSerializeRaw(inputStream, this->custom_maxwidth);
    cmnDeSerializeRaw(inputStream, this->custom_maxheight);
    cmnDeSerializeRaw(inputStream, this->custom_unitwidth);
    cmnDeSerializeRaw(inputStream, this->custom_unitheight);
    cmnDeSerializeRaw(inputStream, this->custom_unitleft);
    cmnDeSerializeRaw(inputStream, this->custom_unittop);
    cmnDeSerializeRaw(inputStream, this->custom_colorspaces);
    cmnDeSerializeRaw(inputStream, this->custom_pattern);
}


void svlFilterSourceVideoCaptureTypes::ImageFormat::ToStream(std::ostream & outputStream) const
{
    outputStream << this->HumanReadable();
}

void svlFilterSourceVideoCaptureTypes::ImageFormat::ToStreamRaw(std::ostream & outputStream, const char delimiter, bool headerOnly, const std::string & headerPrefix) const
{
    if (headerOnly) {
        outputStream << cmnData<svlFilterSourceVideoCaptureTypes::ImageFormat >::SerializeDescription(*this, delimiter, headerPrefix);
    } else {
        cmnData<svlFilterSourceVideoCaptureTypes::ImageFormat >::SerializeText(*this, outputStream, delimiter);
    }
}
/* source line: 154 */
/* source line: 159 */
/* source line: 164 */
/* source line: 169 */
/* source line: 174 */
/* source line: 179 */
/* source line: 184 */
/* source line: 189 */
/* source line: 194 */
/* source line: 199 */
/* source line: 204 */
/* source line: 209 */
/* source line: 214 */
/* source line: 219 */
/* source line: 224 */
/* source line: 229 */
/* source line: 234 */
/* source line: 239 */
/* source line: 244 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const svlFilterSourceVideoCaptureTypes::ImageFormat & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, svlFilterSourceVideoCaptureTypes::ImageFormat & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void svlFilterSourceVideoCaptureTypes::ImageFormat::Copy(const svlFilterSourceVideoCaptureTypes::ImageFormat & source) {
    cmnData<bool >::Copy(this->defaults, source.defaults);
    cmnData<unsigned int >::Copy(this->width, source.width);
    cmnData<unsigned int >::Copy(this->height, source.height);
    cmnData<svlFilterSourceVideoCaptureTypes::PixelType >::Copy(this->colorspace, source.colorspace);
    cmnData<double >::Copy(this->framerate, source.framerate);
    cmnData<bool >::Copy(this->rgb_order, source.rgb_order);
    cmnData<bool >::Copy(this->yuyv_order, source.yuyv_order);
    cmnData<int >::Copy(this->custom_mode, source.custom_mode);
    cmnData<unsigned int >::Copy(this->custom_roileft, source.custom_roileft);
    cmnData<unsigned int >::Copy(this->custom_roitop, source.custom_roitop);
    cmnData<unsigned int >::Copy(this->custom_framerate, source.custom_framerate);
    cmnData<unsigned int >::Copy(this->custom_maxwidth, source.custom_maxwidth);
    cmnData<unsigned int >::Copy(this->custom_maxheight, source.custom_maxheight);
    cmnData<unsigned int >::Copy(this->custom_unitwidth, source.custom_unitwidth);
    cmnData<unsigned int >::Copy(this->custom_unitheight, source.custom_unitheight);
    cmnData<unsigned int >::Copy(this->custom_unitleft, source.custom_unitleft);
    cmnData<unsigned int >::Copy(this->custom_unittop, source.custom_unittop);
    cmnData<PixelType[PixelTypeCount] >::Copy(this->custom_colorspaces, source.custom_colorspaces);
    cmnData<PatternType >::Copy(this->custom_pattern, source.custom_pattern);
}
void svlFilterSourceVideoCaptureTypes::ImageFormat::SerializeBinary(std::ostream & outputStream) const throw (std::runtime_error) {
    cmnData<bool >::SerializeBinary(this->defaults, outputStream);
    cmnData<unsigned int >::SerializeBinary(this->width, outputStream);
    cmnData<unsigned int >::SerializeBinary(this->height, outputStream);
    cmnData<svlFilterSourceVideoCaptureTypes::PixelType >::SerializeBinary(this->colorspace, outputStream);
    cmnData<double >::SerializeBinary(this->framerate, outputStream);
    cmnData<bool >::SerializeBinary(this->rgb_order, outputStream);
    cmnData<bool >::SerializeBinary(this->yuyv_order, outputStream);
    cmnData<int >::SerializeBinary(this->custom_mode, outputStream);
    cmnData<unsigned int >::SerializeBinary(this->custom_roileft, outputStream);
    cmnData<unsigned int >::SerializeBinary(this->custom_roitop, outputStream);
    cmnData<unsigned int >::SerializeBinary(this->custom_framerate, outputStream);
    cmnData<unsigned int >::SerializeBinary(this->custom_maxwidth, outputStream);
    cmnData<unsigned int >::SerializeBinary(this->custom_maxheight, outputStream);
    cmnData<unsigned int >::SerializeBinary(this->custom_unitwidth, outputStream);
    cmnData<unsigned int >::SerializeBinary(this->custom_unitheight, outputStream);
    cmnData<unsigned int >::SerializeBinary(this->custom_unitleft, outputStream);
    cmnData<unsigned int >::SerializeBinary(this->custom_unittop, outputStream);
    cmnData<PixelType[PixelTypeCount] >::SerializeBinary(this->custom_colorspaces, outputStream);
    cmnData<PatternType >::SerializeBinary(this->custom_pattern, outputStream);
}
void svlFilterSourceVideoCaptureTypes::ImageFormat::DeSerializeBinary(std::istream & inputStream,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) throw (std::runtime_error) {
    cmnData<bool >::DeSerializeBinary(this->defaults, inputStream, localFormat, remoteFormat);
    cmnData<unsigned int >::DeSerializeBinary(this->width, inputStream, localFormat, remoteFormat);
    cmnData<unsigned int >::DeSerializeBinary(this->height, inputStream, localFormat, remoteFormat);
    cmnData<svlFilterSourceVideoCaptureTypes::PixelType >::DeSerializeBinary(this->colorspace, inputStream, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->framerate, inputStream, localFormat, remoteFormat);
    cmnData<bool >::DeSerializeBinary(this->rgb_order, inputStream, localFormat, remoteFormat);
    cmnData<bool >::DeSerializeBinary(this->yuyv_order, inputStream, localFormat, remoteFormat);
    cmnData<int >::DeSerializeBinary(this->custom_mode, inputStream, localFormat, remoteFormat);
    cmnData<unsigned int >::DeSerializeBinary(this->custom_roileft, inputStream, localFormat, remoteFormat);
    cmnData<unsigned int >::DeSerializeBinary(this->custom_roitop, inputStream, localFormat, remoteFormat);
    cmnData<unsigned int >::DeSerializeBinary(this->custom_framerate, inputStream, localFormat, remoteFormat);
    cmnData<unsigned int >::DeSerializeBinary(this->custom_maxwidth, inputStream, localFormat, remoteFormat);
    cmnData<unsigned int >::DeSerializeBinary(this->custom_maxheight, inputStream, localFormat, remoteFormat);
    cmnData<unsigned int >::DeSerializeBinary(this->custom_unitwidth, inputStream, localFormat, remoteFormat);
    cmnData<unsigned int >::DeSerializeBinary(this->custom_unitheight, inputStream, localFormat, remoteFormat);
    cmnData<unsigned int >::DeSerializeBinary(this->custom_unitleft, inputStream, localFormat, remoteFormat);
    cmnData<unsigned int >::DeSerializeBinary(this->custom_unittop, inputStream, localFormat, remoteFormat);
    cmnData<PixelType[PixelTypeCount] >::DeSerializeBinary(this->custom_colorspaces, inputStream, localFormat, remoteFormat);
    cmnData<PatternType >::DeSerializeBinary(this->custom_pattern, inputStream, localFormat, remoteFormat);
}
void svlFilterSourceVideoCaptureTypes::ImageFormat::SerializeText(std::ostream & outputStream, const char delimiter) const throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<bool >::SerializeText(this->defaults, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<unsigned int >::SerializeText(this->width, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<unsigned int >::SerializeText(this->height, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<svlFilterSourceVideoCaptureTypes::PixelType >::SerializeText(this->colorspace, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<double >::SerializeText(this->framerate, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<bool >::SerializeText(this->rgb_order, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<bool >::SerializeText(this->yuyv_order, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<int >::SerializeText(this->custom_mode, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<unsigned int >::SerializeText(this->custom_roileft, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<unsigned int >::SerializeText(this->custom_roitop, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<unsigned int >::SerializeText(this->custom_framerate, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<unsigned int >::SerializeText(this->custom_maxwidth, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<unsigned int >::SerializeText(this->custom_maxheight, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<unsigned int >::SerializeText(this->custom_unitwidth, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<unsigned int >::SerializeText(this->custom_unitheight, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<unsigned int >::SerializeText(this->custom_unitleft, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<unsigned int >::SerializeText(this->custom_unittop, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<PixelType[PixelTypeCount] >::SerializeText(this->custom_colorspaces, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<PatternType >::SerializeText(this->custom_pattern, outputStream, delimiter);
}
std::string svlFilterSourceVideoCaptureTypes::ImageFormat::SerializeDescription(const char delimiter, const std::string & userDescription) const {
    bool someData = false;
    const std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    std::stringstream description;
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<bool >::SerializeDescription(this->defaults, delimiter, prefix + "defaults");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<unsigned int >::SerializeDescription(this->width, delimiter, prefix + "width");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<unsigned int >::SerializeDescription(this->height, delimiter, prefix + "height");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<svlFilterSourceVideoCaptureTypes::PixelType >::SerializeDescription(this->colorspace, delimiter, prefix + "colorspace");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<double >::SerializeDescription(this->framerate, delimiter, prefix + "framerate");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<bool >::SerializeDescription(this->rgb_order, delimiter, prefix + "rgb_order");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<bool >::SerializeDescription(this->yuyv_order, delimiter, prefix + "yuyv_order");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<int >::SerializeDescription(this->custom_mode, delimiter, prefix + "custom_mode");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<unsigned int >::SerializeDescription(this->custom_roileft, delimiter, prefix + "custom_roileft");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<unsigned int >::SerializeDescription(this->custom_roitop, delimiter, prefix + "custom_roitop");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<unsigned int >::SerializeDescription(this->custom_framerate, delimiter, prefix + "custom_framerate");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<unsigned int >::SerializeDescription(this->custom_maxwidth, delimiter, prefix + "custom_maxwidth");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<unsigned int >::SerializeDescription(this->custom_maxheight, delimiter, prefix + "custom_maxheight");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<unsigned int >::SerializeDescription(this->custom_unitwidth, delimiter, prefix + "custom_unitwidth");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<unsigned int >::SerializeDescription(this->custom_unitheight, delimiter, prefix + "custom_unitheight");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<unsigned int >::SerializeDescription(this->custom_unitleft, delimiter, prefix + "custom_unitleft");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<unsigned int >::SerializeDescription(this->custom_unittop, delimiter, prefix + "custom_unittop");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<PixelType[PixelTypeCount] >::SerializeDescription(this->custom_colorspaces, delimiter, prefix + "custom_colorspaces");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<PatternType >::SerializeDescription(this->custom_pattern, delimiter, prefix + "custom_pattern");
    return description.str();
}
void svlFilterSourceVideoCaptureTypes::ImageFormat::DeSerializeText(std::istream & inputStream,
                                          const char delimiter) throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "svlFilterSourceVideoCaptureTypes::ImageFormat");
    }
    someData = true;
    cmnData<bool >::DeSerializeText(this->defaults, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "svlFilterSourceVideoCaptureTypes::ImageFormat");
    }
    someData = true;
    cmnData<unsigned int >::DeSerializeText(this->width, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "svlFilterSourceVideoCaptureTypes::ImageFormat");
    }
    someData = true;
    cmnData<unsigned int >::DeSerializeText(this->height, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "svlFilterSourceVideoCaptureTypes::ImageFormat");
    }
    someData = true;
    cmnData<svlFilterSourceVideoCaptureTypes::PixelType >::DeSerializeText(this->colorspace, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "svlFilterSourceVideoCaptureTypes::ImageFormat");
    }
    someData = true;
    cmnData<double >::DeSerializeText(this->framerate, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "svlFilterSourceVideoCaptureTypes::ImageFormat");
    }
    someData = true;
    cmnData<bool >::DeSerializeText(this->rgb_order, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "svlFilterSourceVideoCaptureTypes::ImageFormat");
    }
    someData = true;
    cmnData<bool >::DeSerializeText(this->yuyv_order, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "svlFilterSourceVideoCaptureTypes::ImageFormat");
    }
    someData = true;
    cmnData<int >::DeSerializeText(this->custom_mode, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "svlFilterSourceVideoCaptureTypes::ImageFormat");
    }
    someData = true;
    cmnData<unsigned int >::DeSerializeText(this->custom_roileft, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "svlFilterSourceVideoCaptureTypes::ImageFormat");
    }
    someData = true;
    cmnData<unsigned int >::DeSerializeText(this->custom_roitop, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "svlFilterSourceVideoCaptureTypes::ImageFormat");
    }
    someData = true;
    cmnData<unsigned int >::DeSerializeText(this->custom_framerate, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "svlFilterSourceVideoCaptureTypes::ImageFormat");
    }
    someData = true;
    cmnData<unsigned int >::DeSerializeText(this->custom_maxwidth, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "svlFilterSourceVideoCaptureTypes::ImageFormat");
    }
    someData = true;
    cmnData<unsigned int >::DeSerializeText(this->custom_maxheight, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "svlFilterSourceVideoCaptureTypes::ImageFormat");
    }
    someData = true;
    cmnData<unsigned int >::DeSerializeText(this->custom_unitwidth, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "svlFilterSourceVideoCaptureTypes::ImageFormat");
    }
    someData = true;
    cmnData<unsigned int >::DeSerializeText(this->custom_unitheight, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "svlFilterSourceVideoCaptureTypes::ImageFormat");
    }
    someData = true;
    cmnData<unsigned int >::DeSerializeText(this->custom_unitleft, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "svlFilterSourceVideoCaptureTypes::ImageFormat");
    }
    someData = true;
    cmnData<unsigned int >::DeSerializeText(this->custom_unittop, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "svlFilterSourceVideoCaptureTypes::ImageFormat");
    }
    someData = true;
    cmnData<PixelType[PixelTypeCount] >::DeSerializeText(this->custom_colorspaces, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "svlFilterSourceVideoCaptureTypes::ImageFormat");
    }
    someData = true;
    cmnData<PatternType >::DeSerializeText(this->custom_pattern, inputStream, delimiter);
}
bool svlFilterSourceVideoCaptureTypes::ImageFormat::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<bool >::ScalarNumberIsFixed(this->defaults)
           && cmnData<unsigned int >::ScalarNumberIsFixed(this->width)
           && cmnData<unsigned int >::ScalarNumberIsFixed(this->height)
           && cmnData<svlFilterSourceVideoCaptureTypes::PixelType >::ScalarNumberIsFixed(this->colorspace)
           && cmnData<double >::ScalarNumberIsFixed(this->framerate)
           && cmnData<bool >::ScalarNumberIsFixed(this->rgb_order)
           && cmnData<bool >::ScalarNumberIsFixed(this->yuyv_order)
           && cmnData<int >::ScalarNumberIsFixed(this->custom_mode)
           && cmnData<unsigned int >::ScalarNumberIsFixed(this->custom_roileft)
           && cmnData<unsigned int >::ScalarNumberIsFixed(this->custom_roitop)
           && cmnData<unsigned int >::ScalarNumberIsFixed(this->custom_framerate)
           && cmnData<unsigned int >::ScalarNumberIsFixed(this->custom_maxwidth)
           && cmnData<unsigned int >::ScalarNumberIsFixed(this->custom_maxheight)
           && cmnData<unsigned int >::ScalarNumberIsFixed(this->custom_unitwidth)
           && cmnData<unsigned int >::ScalarNumberIsFixed(this->custom_unitheight)
           && cmnData<unsigned int >::ScalarNumberIsFixed(this->custom_unitleft)
           && cmnData<unsigned int >::ScalarNumberIsFixed(this->custom_unittop)
           && cmnData<PixelType[PixelTypeCount] >::ScalarNumberIsFixed(this->custom_colorspaces)
           && cmnData<PatternType >::ScalarNumberIsFixed(this->custom_pattern)
    ;
}
size_t svlFilterSourceVideoCaptureTypes::ImageFormat::ScalarNumber(void) const {
    return 0
           + cmnData<bool >::ScalarNumber(this->defaults)
           + cmnData<unsigned int >::ScalarNumber(this->width)
           + cmnData<unsigned int >::ScalarNumber(this->height)
           + cmnData<svlFilterSourceVideoCaptureTypes::PixelType >::ScalarNumber(this->colorspace)
           + cmnData<double >::ScalarNumber(this->framerate)
           + cmnData<bool >::ScalarNumber(this->rgb_order)
           + cmnData<bool >::ScalarNumber(this->yuyv_order)
           + cmnData<int >::ScalarNumber(this->custom_mode)
           + cmnData<unsigned int >::ScalarNumber(this->custom_roileft)
           + cmnData<unsigned int >::ScalarNumber(this->custom_roitop)
           + cmnData<unsigned int >::ScalarNumber(this->custom_framerate)
           + cmnData<unsigned int >::ScalarNumber(this->custom_maxwidth)
           + cmnData<unsigned int >::ScalarNumber(this->custom_maxheight)
           + cmnData<unsigned int >::ScalarNumber(this->custom_unitwidth)
           + cmnData<unsigned int >::ScalarNumber(this->custom_unitheight)
           + cmnData<unsigned int >::ScalarNumber(this->custom_unitleft)
           + cmnData<unsigned int >::ScalarNumber(this->custom_unittop)
           + cmnData<PixelType[PixelTypeCount] >::ScalarNumber(this->custom_colorspaces)
           + cmnData<PatternType >::ScalarNumber(this->custom_pattern)
    ;
}
std::string svlFilterSourceVideoCaptureTypes::ImageFormat::ScalarDescription(const size_t index, const std::string & userDescription) const throw (std::out_of_range) {
    std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<bool >::ScalarNumber(this->defaults);
    if (index < currentMaxIndex) {
        return cmnData<bool >::ScalarDescription(this->defaults, index - baseIndex, prefix + "defaults");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<unsigned int >::ScalarNumber(this->width);
    if (index < currentMaxIndex) {
        return cmnData<unsigned int >::ScalarDescription(this->width, index - baseIndex, prefix + "width");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<unsigned int >::ScalarNumber(this->height);
    if (index < currentMaxIndex) {
        return cmnData<unsigned int >::ScalarDescription(this->height, index - baseIndex, prefix + "height");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<svlFilterSourceVideoCaptureTypes::PixelType >::ScalarNumber(this->colorspace);
    if (index < currentMaxIndex) {
        return cmnData<svlFilterSourceVideoCaptureTypes::PixelType >::ScalarDescription(this->colorspace, index - baseIndex, prefix + "colorspace");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<double >::ScalarNumber(this->framerate);
    if (index < currentMaxIndex) {
        return cmnData<double >::ScalarDescription(this->framerate, index - baseIndex, prefix + "framerate");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<bool >::ScalarNumber(this->rgb_order);
    if (index < currentMaxIndex) {
        return cmnData<bool >::ScalarDescription(this->rgb_order, index - baseIndex, prefix + "rgb_order");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<bool >::ScalarNumber(this->yuyv_order);
    if (index < currentMaxIndex) {
        return cmnData<bool >::ScalarDescription(this->yuyv_order, index - baseIndex, prefix + "yuyv_order");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<int >::ScalarNumber(this->custom_mode);
    if (index < currentMaxIndex) {
        return cmnData<int >::ScalarDescription(this->custom_mode, index - baseIndex, prefix + "custom_mode");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<unsigned int >::ScalarNumber(this->custom_roileft);
    if (index < currentMaxIndex) {
        return cmnData<unsigned int >::ScalarDescription(this->custom_roileft, index - baseIndex, prefix + "custom_roileft");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<unsigned int >::ScalarNumber(this->custom_roitop);
    if (index < currentMaxIndex) {
        return cmnData<unsigned int >::ScalarDescription(this->custom_roitop, index - baseIndex, prefix + "custom_roitop");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<unsigned int >::ScalarNumber(this->custom_framerate);
    if (index < currentMaxIndex) {
        return cmnData<unsigned int >::ScalarDescription(this->custom_framerate, index - baseIndex, prefix + "custom_framerate");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<unsigned int >::ScalarNumber(this->custom_maxwidth);
    if (index < currentMaxIndex) {
        return cmnData<unsigned int >::ScalarDescription(this->custom_maxwidth, index - baseIndex, prefix + "custom_maxwidth");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<unsigned int >::ScalarNumber(this->custom_maxheight);
    if (index < currentMaxIndex) {
        return cmnData<unsigned int >::ScalarDescription(this->custom_maxheight, index - baseIndex, prefix + "custom_maxheight");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<unsigned int >::ScalarNumber(this->custom_unitwidth);
    if (index < currentMaxIndex) {
        return cmnData<unsigned int >::ScalarDescription(this->custom_unitwidth, index - baseIndex, prefix + "custom_unitwidth");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<unsigned int >::ScalarNumber(this->custom_unitheight);
    if (index < currentMaxIndex) {
        return cmnData<unsigned int >::ScalarDescription(this->custom_unitheight, index - baseIndex, prefix + "custom_unitheight");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<unsigned int >::ScalarNumber(this->custom_unitleft);
    if (index < currentMaxIndex) {
        return cmnData<unsigned int >::ScalarDescription(this->custom_unitleft, index - baseIndex, prefix + "custom_unitleft");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<unsigned int >::ScalarNumber(this->custom_unittop);
    if (index < currentMaxIndex) {
        return cmnData<unsigned int >::ScalarDescription(this->custom_unittop, index - baseIndex, prefix + "custom_unittop");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<PixelType[PixelTypeCount] >::ScalarNumber(this->custom_colorspaces);
    if (index < currentMaxIndex) {
        return cmnData<PixelType[PixelTypeCount] >::ScalarDescription(this->custom_colorspaces, index - baseIndex, prefix + "custom_colorspaces");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<PatternType >::ScalarNumber(this->custom_pattern);
    if (index < currentMaxIndex) {
        return cmnData<PatternType >::ScalarDescription(this->custom_pattern, index - baseIndex, prefix + "custom_pattern");
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: svlFilterSourceVideoCaptureTypes::ImageFormat index out of range"));
    return "";
}
double svlFilterSourceVideoCaptureTypes::ImageFormat::Scalar(const size_t index) const throw (std::out_of_range) {
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<bool >::ScalarNumber(this->defaults);
    if (index < currentMaxIndex) {
        return cmnData<bool >::Scalar(this->defaults, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<unsigned int >::ScalarNumber(this->width);
    if (index < currentMaxIndex) {
        return cmnData<unsigned int >::Scalar(this->width, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<unsigned int >::ScalarNumber(this->height);
    if (index < currentMaxIndex) {
        return cmnData<unsigned int >::Scalar(this->height, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<svlFilterSourceVideoCaptureTypes::PixelType >::ScalarNumber(this->colorspace);
    if (index < currentMaxIndex) {
        return cmnData<svlFilterSourceVideoCaptureTypes::PixelType >::Scalar(this->colorspace, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<double >::ScalarNumber(this->framerate);
    if (index < currentMaxIndex) {
        return cmnData<double >::Scalar(this->framerate, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<bool >::ScalarNumber(this->rgb_order);
    if (index < currentMaxIndex) {
        return cmnData<bool >::Scalar(this->rgb_order, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<bool >::ScalarNumber(this->yuyv_order);
    if (index < currentMaxIndex) {
        return cmnData<bool >::Scalar(this->yuyv_order, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<int >::ScalarNumber(this->custom_mode);
    if (index < currentMaxIndex) {
        return cmnData<int >::Scalar(this->custom_mode, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<unsigned int >::ScalarNumber(this->custom_roileft);
    if (index < currentMaxIndex) {
        return cmnData<unsigned int >::Scalar(this->custom_roileft, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<unsigned int >::ScalarNumber(this->custom_roitop);
    if (index < currentMaxIndex) {
        return cmnData<unsigned int >::Scalar(this->custom_roitop, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<unsigned int >::ScalarNumber(this->custom_framerate);
    if (index < currentMaxIndex) {
        return cmnData<unsigned int >::Scalar(this->custom_framerate, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<unsigned int >::ScalarNumber(this->custom_maxwidth);
    if (index < currentMaxIndex) {
        return cmnData<unsigned int >::Scalar(this->custom_maxwidth, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<unsigned int >::ScalarNumber(this->custom_maxheight);
    if (index < currentMaxIndex) {
        return cmnData<unsigned int >::Scalar(this->custom_maxheight, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<unsigned int >::ScalarNumber(this->custom_unitwidth);
    if (index < currentMaxIndex) {
        return cmnData<unsigned int >::Scalar(this->custom_unitwidth, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<unsigned int >::ScalarNumber(this->custom_unitheight);
    if (index < currentMaxIndex) {
        return cmnData<unsigned int >::Scalar(this->custom_unitheight, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<unsigned int >::ScalarNumber(this->custom_unitleft);
    if (index < currentMaxIndex) {
        return cmnData<unsigned int >::Scalar(this->custom_unitleft, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<unsigned int >::ScalarNumber(this->custom_unittop);
    if (index < currentMaxIndex) {
        return cmnData<unsigned int >::Scalar(this->custom_unittop, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<PixelType[PixelTypeCount] >::ScalarNumber(this->custom_colorspaces);
    if (index < currentMaxIndex) {
        return cmnData<PixelType[PixelTypeCount] >::Scalar(this->custom_colorspaces, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<PatternType >::ScalarNumber(this->custom_pattern);
    if (index < currentMaxIndex) {
        return cmnData<PatternType >::Scalar(this->custom_pattern, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalar: svlFilterSourceVideoCaptureTypes::ImageFormat index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<svlFilterSourceVideoCaptureTypes::ImageFormat >::SerializeText(const svlFilterSourceVideoCaptureTypes::ImageFormat & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void svlFilterSourceVideoCaptureTypes::ImageFormat::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<bool >::SerializeText(this->defaults, jsonValue["defaults"]);
    cmnDataJSON<unsigned int >::SerializeText(this->width, jsonValue["width"]);
    cmnDataJSON<unsigned int >::SerializeText(this->height, jsonValue["height"]);
    cmnDataJSON<svlFilterSourceVideoCaptureTypes::PixelType >::SerializeText(this->colorspace, jsonValue["colorspace"]);
    cmnDataJSON<double >::SerializeText(this->framerate, jsonValue["framerate"]);
    cmnDataJSON<bool >::SerializeText(this->rgb_order, jsonValue["rgb_order"]);
    cmnDataJSON<bool >::SerializeText(this->yuyv_order, jsonValue["yuyv_order"]);
    cmnDataJSON<int >::SerializeText(this->custom_mode, jsonValue["custom_mode"]);
    cmnDataJSON<unsigned int >::SerializeText(this->custom_roileft, jsonValue["custom_roileft"]);
    cmnDataJSON<unsigned int >::SerializeText(this->custom_roitop, jsonValue["custom_roitop"]);
    cmnDataJSON<unsigned int >::SerializeText(this->custom_framerate, jsonValue["custom_framerate"]);
    cmnDataJSON<unsigned int >::SerializeText(this->custom_maxwidth, jsonValue["custom_maxwidth"]);
    cmnDataJSON<unsigned int >::SerializeText(this->custom_maxheight, jsonValue["custom_maxheight"]);
    cmnDataJSON<unsigned int >::SerializeText(this->custom_unitwidth, jsonValue["custom_unitwidth"]);
    cmnDataJSON<unsigned int >::SerializeText(this->custom_unitheight, jsonValue["custom_unitheight"]);
    cmnDataJSON<unsigned int >::SerializeText(this->custom_unitleft, jsonValue["custom_unitleft"]);
    cmnDataJSON<unsigned int >::SerializeText(this->custom_unittop, jsonValue["custom_unittop"]);
    cmnDataJSON<PixelType[PixelTypeCount] >::SerializeText(this->custom_colorspaces, jsonValue["custom_colorspaces"]);
    cmnDataJSON<PatternType >::SerializeText(this->custom_pattern, jsonValue["custom_pattern"]);
}
template<>
void cmnDataJSON<svlFilterSourceVideoCaptureTypes::ImageFormat >::DeSerializeText(svlFilterSourceVideoCaptureTypes::ImageFormat & data, const Json::Value & jsonValue) throw (std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void svlFilterSourceVideoCaptureTypes::ImageFormat::DeSerializeTextJSON(const Json::Value & jsonValue) throw (std::runtime_error) {
    cmnDataJSON<bool >::DeSerializeText(this->defaults, jsonValue["defaults"]);
    cmnDataJSON<unsigned int >::DeSerializeText(this->width, jsonValue["width"]);
    cmnDataJSON<unsigned int >::DeSerializeText(this->height, jsonValue["height"]);
    cmnDataJSON<svlFilterSourceVideoCaptureTypes::PixelType >::DeSerializeText(this->colorspace, jsonValue["colorspace"]);
    cmnDataJSON<double >::DeSerializeText(this->framerate, jsonValue["framerate"]);
    cmnDataJSON<bool >::DeSerializeText(this->rgb_order, jsonValue["rgb_order"]);
    cmnDataJSON<bool >::DeSerializeText(this->yuyv_order, jsonValue["yuyv_order"]);
    cmnDataJSON<int >::DeSerializeText(this->custom_mode, jsonValue["custom_mode"]);
    cmnDataJSON<unsigned int >::DeSerializeText(this->custom_roileft, jsonValue["custom_roileft"]);
    cmnDataJSON<unsigned int >::DeSerializeText(this->custom_roitop, jsonValue["custom_roitop"]);
    cmnDataJSON<unsigned int >::DeSerializeText(this->custom_framerate, jsonValue["custom_framerate"]);
    cmnDataJSON<unsigned int >::DeSerializeText(this->custom_maxwidth, jsonValue["custom_maxwidth"]);
    cmnDataJSON<unsigned int >::DeSerializeText(this->custom_maxheight, jsonValue["custom_maxheight"]);
    cmnDataJSON<unsigned int >::DeSerializeText(this->custom_unitwidth, jsonValue["custom_unitwidth"]);
    cmnDataJSON<unsigned int >::DeSerializeText(this->custom_unitheight, jsonValue["custom_unitheight"]);
    cmnDataJSON<unsigned int >::DeSerializeText(this->custom_unitleft, jsonValue["custom_unitleft"]);
    cmnDataJSON<unsigned int >::DeSerializeText(this->custom_unittop, jsonValue["custom_unittop"]);
    cmnDataJSON<PixelType[PixelTypeCount] >::DeSerializeText(this->custom_colorspaces, jsonValue["custom_colorspaces"]);
    cmnDataJSON<PatternType >::DeSerializeText(this->custom_pattern, jsonValue["custom_pattern"]);
}
#endif // CISST_HAS_JSON


/* source line: 256 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(svlFilterSourceVideoCaptureTypes_ImagePropertiesProxy);

svlFilterSourceVideoCaptureTypes::ImageProperties::ImageProperties(void):
      mask()
    , manual()
    , shutter()
    , wb_u_b()
    , wb_v_r()
    , brightness()
    , gamma()
    , saturation()
    , gain()
{}

svlFilterSourceVideoCaptureTypes::ImageProperties::ImageProperties(const ImageProperties & other):
      mask(other.mask)
    , manual(other.manual)
    , shutter(other.shutter)
    , wb_u_b(other.wb_u_b)
    , wb_v_r(other.wb_v_r)
    , brightness(other.brightness)
    , gamma(other.gamma)
    , saturation(other.saturation)
    , gain(other.gain)
{}

svlFilterSourceVideoCaptureTypes::ImageProperties::~ImageProperties(void){}


void svlFilterSourceVideoCaptureTypes::ImageProperties::SerializeRaw(std::ostream & outputStream) const
{
    cmnSerializeRaw(outputStream, this->mask);
    cmnSerializeRaw(outputStream, this->manual);
    cmnSerializeRaw(outputStream, this->shutter);
    cmnSerializeRaw(outputStream, this->wb_u_b);
    cmnSerializeRaw(outputStream, this->wb_v_r);
    cmnSerializeRaw(outputStream, this->brightness);
    cmnSerializeRaw(outputStream, this->gamma);
    cmnSerializeRaw(outputStream, this->saturation);
    cmnSerializeRaw(outputStream, this->gain);
}


void svlFilterSourceVideoCaptureTypes::ImageProperties::DeSerializeRaw(std::istream & inputStream)
{
    cmnDeSerializeRaw(inputStream, this->mask);
    cmnDeSerializeRaw(inputStream, this->manual);
    cmnDeSerializeRaw(inputStream, this->shutter);
    cmnDeSerializeRaw(inputStream, this->wb_u_b);
    cmnDeSerializeRaw(inputStream, this->wb_v_r);
    cmnDeSerializeRaw(inputStream, this->brightness);
    cmnDeSerializeRaw(inputStream, this->gamma);
    cmnDeSerializeRaw(inputStream, this->saturation);
    cmnDeSerializeRaw(inputStream, this->gain);
}


void svlFilterSourceVideoCaptureTypes::ImageProperties::ToStream(std::ostream & outputStream) const
{
    outputStream << this->HumanReadable();
}

void svlFilterSourceVideoCaptureTypes::ImageProperties::ToStreamRaw(std::ostream & outputStream, const char delimiter, bool headerOnly, const std::string & headerPrefix) const
{
    if (headerOnly) {
        outputStream << cmnData<svlFilterSourceVideoCaptureTypes::ImageProperties >::SerializeDescription(*this, delimiter, headerPrefix);
    } else {
        cmnData<svlFilterSourceVideoCaptureTypes::ImageProperties >::SerializeText(*this, outputStream, delimiter);
    }
}
/* source line: 261 */
/* source line: 266 */
/* source line: 271 */
/* source line: 276 */
/* source line: 281 */
/* source line: 286 */
/* source line: 291 */
/* source line: 296 */
/* source line: 301 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const svlFilterSourceVideoCaptureTypes::ImageProperties & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, svlFilterSourceVideoCaptureTypes::ImageProperties & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void svlFilterSourceVideoCaptureTypes::ImageProperties::Copy(const svlFilterSourceVideoCaptureTypes::ImageProperties & source) {
    cmnData<unsigned int >::Copy(this->mask, source.mask);
    cmnData<unsigned int >::Copy(this->manual, source.manual);
    cmnData<unsigned int >::Copy(this->shutter, source.shutter);
    cmnData<unsigned int >::Copy(this->wb_u_b, source.wb_u_b);
    cmnData<unsigned int >::Copy(this->wb_v_r, source.wb_v_r);
    cmnData<unsigned int >::Copy(this->brightness, source.brightness);
    cmnData<unsigned int >::Copy(this->gamma, source.gamma);
    cmnData<unsigned int >::Copy(this->saturation, source.saturation);
    cmnData<unsigned int >::Copy(this->gain, source.gain);
}
void svlFilterSourceVideoCaptureTypes::ImageProperties::SerializeBinary(std::ostream & outputStream) const throw (std::runtime_error) {
    cmnData<unsigned int >::SerializeBinary(this->mask, outputStream);
    cmnData<unsigned int >::SerializeBinary(this->manual, outputStream);
    cmnData<unsigned int >::SerializeBinary(this->shutter, outputStream);
    cmnData<unsigned int >::SerializeBinary(this->wb_u_b, outputStream);
    cmnData<unsigned int >::SerializeBinary(this->wb_v_r, outputStream);
    cmnData<unsigned int >::SerializeBinary(this->brightness, outputStream);
    cmnData<unsigned int >::SerializeBinary(this->gamma, outputStream);
    cmnData<unsigned int >::SerializeBinary(this->saturation, outputStream);
    cmnData<unsigned int >::SerializeBinary(this->gain, outputStream);
}
void svlFilterSourceVideoCaptureTypes::ImageProperties::DeSerializeBinary(std::istream & inputStream,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) throw (std::runtime_error) {
    cmnData<unsigned int >::DeSerializeBinary(this->mask, inputStream, localFormat, remoteFormat);
    cmnData<unsigned int >::DeSerializeBinary(this->manual, inputStream, localFormat, remoteFormat);
    cmnData<unsigned int >::DeSerializeBinary(this->shutter, inputStream, localFormat, remoteFormat);
    cmnData<unsigned int >::DeSerializeBinary(this->wb_u_b, inputStream, localFormat, remoteFormat);
    cmnData<unsigned int >::DeSerializeBinary(this->wb_v_r, inputStream, localFormat, remoteFormat);
    cmnData<unsigned int >::DeSerializeBinary(this->brightness, inputStream, localFormat, remoteFormat);
    cmnData<unsigned int >::DeSerializeBinary(this->gamma, inputStream, localFormat, remoteFormat);
    cmnData<unsigned int >::DeSerializeBinary(this->saturation, inputStream, localFormat, remoteFormat);
    cmnData<unsigned int >::DeSerializeBinary(this->gain, inputStream, localFormat, remoteFormat);
}
void svlFilterSourceVideoCaptureTypes::ImageProperties::SerializeText(std::ostream & outputStream, const char delimiter) const throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<unsigned int >::SerializeText(this->mask, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<unsigned int >::SerializeText(this->manual, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<unsigned int >::SerializeText(this->shutter, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<unsigned int >::SerializeText(this->wb_u_b, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<unsigned int >::SerializeText(this->wb_v_r, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<unsigned int >::SerializeText(this->brightness, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<unsigned int >::SerializeText(this->gamma, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<unsigned int >::SerializeText(this->saturation, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<unsigned int >::SerializeText(this->gain, outputStream, delimiter);
}
std::string svlFilterSourceVideoCaptureTypes::ImageProperties::SerializeDescription(const char delimiter, const std::string & userDescription) const {
    bool someData = false;
    const std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    std::stringstream description;
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<unsigned int >::SerializeDescription(this->mask, delimiter, prefix + "mask");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<unsigned int >::SerializeDescription(this->manual, delimiter, prefix + "manual");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<unsigned int >::SerializeDescription(this->shutter, delimiter, prefix + "shutter");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<unsigned int >::SerializeDescription(this->wb_u_b, delimiter, prefix + "wb_u_b");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<unsigned int >::SerializeDescription(this->wb_v_r, delimiter, prefix + "wb_v_r");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<unsigned int >::SerializeDescription(this->brightness, delimiter, prefix + "brightness");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<unsigned int >::SerializeDescription(this->gamma, delimiter, prefix + "gamma");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<unsigned int >::SerializeDescription(this->saturation, delimiter, prefix + "saturation");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<unsigned int >::SerializeDescription(this->gain, delimiter, prefix + "gain");
    return description.str();
}
void svlFilterSourceVideoCaptureTypes::ImageProperties::DeSerializeText(std::istream & inputStream,
                                          const char delimiter) throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "svlFilterSourceVideoCaptureTypes::ImageProperties");
    }
    someData = true;
    cmnData<unsigned int >::DeSerializeText(this->mask, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "svlFilterSourceVideoCaptureTypes::ImageProperties");
    }
    someData = true;
    cmnData<unsigned int >::DeSerializeText(this->manual, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "svlFilterSourceVideoCaptureTypes::ImageProperties");
    }
    someData = true;
    cmnData<unsigned int >::DeSerializeText(this->shutter, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "svlFilterSourceVideoCaptureTypes::ImageProperties");
    }
    someData = true;
    cmnData<unsigned int >::DeSerializeText(this->wb_u_b, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "svlFilterSourceVideoCaptureTypes::ImageProperties");
    }
    someData = true;
    cmnData<unsigned int >::DeSerializeText(this->wb_v_r, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "svlFilterSourceVideoCaptureTypes::ImageProperties");
    }
    someData = true;
    cmnData<unsigned int >::DeSerializeText(this->brightness, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "svlFilterSourceVideoCaptureTypes::ImageProperties");
    }
    someData = true;
    cmnData<unsigned int >::DeSerializeText(this->gamma, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "svlFilterSourceVideoCaptureTypes::ImageProperties");
    }
    someData = true;
    cmnData<unsigned int >::DeSerializeText(this->saturation, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "svlFilterSourceVideoCaptureTypes::ImageProperties");
    }
    someData = true;
    cmnData<unsigned int >::DeSerializeText(this->gain, inputStream, delimiter);
}
bool svlFilterSourceVideoCaptureTypes::ImageProperties::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<unsigned int >::ScalarNumberIsFixed(this->mask)
           && cmnData<unsigned int >::ScalarNumberIsFixed(this->manual)
           && cmnData<unsigned int >::ScalarNumberIsFixed(this->shutter)
           && cmnData<unsigned int >::ScalarNumberIsFixed(this->wb_u_b)
           && cmnData<unsigned int >::ScalarNumberIsFixed(this->wb_v_r)
           && cmnData<unsigned int >::ScalarNumberIsFixed(this->brightness)
           && cmnData<unsigned int >::ScalarNumberIsFixed(this->gamma)
           && cmnData<unsigned int >::ScalarNumberIsFixed(this->saturation)
           && cmnData<unsigned int >::ScalarNumberIsFixed(this->gain)
    ;
}
size_t svlFilterSourceVideoCaptureTypes::ImageProperties::ScalarNumber(void) const {
    return 0
           + cmnData<unsigned int >::ScalarNumber(this->mask)
           + cmnData<unsigned int >::ScalarNumber(this->manual)
           + cmnData<unsigned int >::ScalarNumber(this->shutter)
           + cmnData<unsigned int >::ScalarNumber(this->wb_u_b)
           + cmnData<unsigned int >::ScalarNumber(this->wb_v_r)
           + cmnData<unsigned int >::ScalarNumber(this->brightness)
           + cmnData<unsigned int >::ScalarNumber(this->gamma)
           + cmnData<unsigned int >::ScalarNumber(this->saturation)
           + cmnData<unsigned int >::ScalarNumber(this->gain)
    ;
}
std::string svlFilterSourceVideoCaptureTypes::ImageProperties::ScalarDescription(const size_t index, const std::string & userDescription) const throw (std::out_of_range) {
    std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<unsigned int >::ScalarNumber(this->mask);
    if (index < currentMaxIndex) {
        return cmnData<unsigned int >::ScalarDescription(this->mask, index - baseIndex, prefix + "mask");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<unsigned int >::ScalarNumber(this->manual);
    if (index < currentMaxIndex) {
        return cmnData<unsigned int >::ScalarDescription(this->manual, index - baseIndex, prefix + "manual");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<unsigned int >::ScalarNumber(this->shutter);
    if (index < currentMaxIndex) {
        return cmnData<unsigned int >::ScalarDescription(this->shutter, index - baseIndex, prefix + "shutter");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<unsigned int >::ScalarNumber(this->wb_u_b);
    if (index < currentMaxIndex) {
        return cmnData<unsigned int >::ScalarDescription(this->wb_u_b, index - baseIndex, prefix + "wb_u_b");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<unsigned int >::ScalarNumber(this->wb_v_r);
    if (index < currentMaxIndex) {
        return cmnData<unsigned int >::ScalarDescription(this->wb_v_r, index - baseIndex, prefix + "wb_v_r");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<unsigned int >::ScalarNumber(this->brightness);
    if (index < currentMaxIndex) {
        return cmnData<unsigned int >::ScalarDescription(this->brightness, index - baseIndex, prefix + "brightness");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<unsigned int >::ScalarNumber(this->gamma);
    if (index < currentMaxIndex) {
        return cmnData<unsigned int >::ScalarDescription(this->gamma, index - baseIndex, prefix + "gamma");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<unsigned int >::ScalarNumber(this->saturation);
    if (index < currentMaxIndex) {
        return cmnData<unsigned int >::ScalarDescription(this->saturation, index - baseIndex, prefix + "saturation");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<unsigned int >::ScalarNumber(this->gain);
    if (index < currentMaxIndex) {
        return cmnData<unsigned int >::ScalarDescription(this->gain, index - baseIndex, prefix + "gain");
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: svlFilterSourceVideoCaptureTypes::ImageProperties index out of range"));
    return "";
}
double svlFilterSourceVideoCaptureTypes::ImageProperties::Scalar(const size_t index) const throw (std::out_of_range) {
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<unsigned int >::ScalarNumber(this->mask);
    if (index < currentMaxIndex) {
        return cmnData<unsigned int >::Scalar(this->mask, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<unsigned int >::ScalarNumber(this->manual);
    if (index < currentMaxIndex) {
        return cmnData<unsigned int >::Scalar(this->manual, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<unsigned int >::ScalarNumber(this->shutter);
    if (index < currentMaxIndex) {
        return cmnData<unsigned int >::Scalar(this->shutter, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<unsigned int >::ScalarNumber(this->wb_u_b);
    if (index < currentMaxIndex) {
        return cmnData<unsigned int >::Scalar(this->wb_u_b, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<unsigned int >::ScalarNumber(this->wb_v_r);
    if (index < currentMaxIndex) {
        return cmnData<unsigned int >::Scalar(this->wb_v_r, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<unsigned int >::ScalarNumber(this->brightness);
    if (index < currentMaxIndex) {
        return cmnData<unsigned int >::Scalar(this->brightness, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<unsigned int >::ScalarNumber(this->gamma);
    if (index < currentMaxIndex) {
        return cmnData<unsigned int >::Scalar(this->gamma, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<unsigned int >::ScalarNumber(this->saturation);
    if (index < currentMaxIndex) {
        return cmnData<unsigned int >::Scalar(this->saturation, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<unsigned int >::ScalarNumber(this->gain);
    if (index < currentMaxIndex) {
        return cmnData<unsigned int >::Scalar(this->gain, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalar: svlFilterSourceVideoCaptureTypes::ImageProperties index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<svlFilterSourceVideoCaptureTypes::ImageProperties >::SerializeText(const svlFilterSourceVideoCaptureTypes::ImageProperties & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void svlFilterSourceVideoCaptureTypes::ImageProperties::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<unsigned int >::SerializeText(this->mask, jsonValue["mask"]);
    cmnDataJSON<unsigned int >::SerializeText(this->manual, jsonValue["manual"]);
    cmnDataJSON<unsigned int >::SerializeText(this->shutter, jsonValue["shutter"]);
    cmnDataJSON<unsigned int >::SerializeText(this->wb_u_b, jsonValue["wb_u_b"]);
    cmnDataJSON<unsigned int >::SerializeText(this->wb_v_r, jsonValue["wb_v_r"]);
    cmnDataJSON<unsigned int >::SerializeText(this->brightness, jsonValue["brightness"]);
    cmnDataJSON<unsigned int >::SerializeText(this->gamma, jsonValue["gamma"]);
    cmnDataJSON<unsigned int >::SerializeText(this->saturation, jsonValue["saturation"]);
    cmnDataJSON<unsigned int >::SerializeText(this->gain, jsonValue["gain"]);
}
template<>
void cmnDataJSON<svlFilterSourceVideoCaptureTypes::ImageProperties >::DeSerializeText(svlFilterSourceVideoCaptureTypes::ImageProperties & data, const Json::Value & jsonValue) throw (std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void svlFilterSourceVideoCaptureTypes::ImageProperties::DeSerializeTextJSON(const Json::Value & jsonValue) throw (std::runtime_error) {
    cmnDataJSON<unsigned int >::DeSerializeText(this->mask, jsonValue["mask"]);
    cmnDataJSON<unsigned int >::DeSerializeText(this->manual, jsonValue["manual"]);
    cmnDataJSON<unsigned int >::DeSerializeText(this->shutter, jsonValue["shutter"]);
    cmnDataJSON<unsigned int >::DeSerializeText(this->wb_u_b, jsonValue["wb_u_b"]);
    cmnDataJSON<unsigned int >::DeSerializeText(this->wb_v_r, jsonValue["wb_v_r"]);
    cmnDataJSON<unsigned int >::DeSerializeText(this->brightness, jsonValue["brightness"]);
    cmnDataJSON<unsigned int >::DeSerializeText(this->gamma, jsonValue["gamma"]);
    cmnDataJSON<unsigned int >::DeSerializeText(this->saturation, jsonValue["saturation"]);
    cmnDataJSON<unsigned int >::DeSerializeText(this->gain, jsonValue["gain"]);
}
#endif // CISST_HAS_JSON


/* source line: 314 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(svlFilterSourceVideoCaptureTypes_ConfigProxy);

svlFilterSourceVideoCaptureTypes::Config::Config(void):
      Channels()
    , Device()
    , Input()
    , Format()
    , Properties()
    , Trigger()
{}

svlFilterSourceVideoCaptureTypes::Config::Config(const Config & other):
      Channels(other.Channels)
    , Device(other.Device)
    , Input(other.Input)
    , Format(other.Format)
    , Properties(other.Properties)
    , Trigger(other.Trigger)
{}

svlFilterSourceVideoCaptureTypes::Config::~Config(void){}


void svlFilterSourceVideoCaptureTypes::Config::SerializeRaw(std::ostream & outputStream) const
{
    cmnSerializeRaw(outputStream, this->Channels);
    cmnSerializeRaw(outputStream, this->Device);
    cmnSerializeRaw(outputStream, this->Input);
    cmnSerializeRaw(outputStream, this->Format);
    cmnSerializeRaw(outputStream, this->Properties);
    cmnSerializeRaw(outputStream, this->Trigger);
}


void svlFilterSourceVideoCaptureTypes::Config::DeSerializeRaw(std::istream & inputStream)
{
    cmnDeSerializeRaw(inputStream, this->Channels);
    cmnDeSerializeRaw(inputStream, this->Device);
    cmnDeSerializeRaw(inputStream, this->Input);
    cmnDeSerializeRaw(inputStream, this->Format);
    cmnDeSerializeRaw(inputStream, this->Properties);
    cmnDeSerializeRaw(inputStream, this->Trigger);
}


void svlFilterSourceVideoCaptureTypes::Config::ToStream(std::ostream & outputStream) const
{
    outputStream << this->HumanReadable();
}

void svlFilterSourceVideoCaptureTypes::Config::ToStreamRaw(std::ostream & outputStream, const char delimiter, bool headerOnly, const std::string & headerPrefix) const
{
    if (headerOnly) {
        outputStream << cmnData<svlFilterSourceVideoCaptureTypes::Config >::SerializeDescription(*this, delimiter, headerPrefix);
    } else {
        cmnData<svlFilterSourceVideoCaptureTypes::Config >::SerializeText(*this, outputStream, delimiter);
    }
}
/* source line: 319 */
/* source line: 324 */
/* source line: 329 */
/* source line: 334 */
/* source line: 339 */
/* source line: 344 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const svlFilterSourceVideoCaptureTypes::Config & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, svlFilterSourceVideoCaptureTypes::Config & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void svlFilterSourceVideoCaptureTypes::Config::Copy(const svlFilterSourceVideoCaptureTypes::Config & source) {
    cmnData<int >::Copy(this->Channels, source.Channels);
    cmnData<std::vector<int> >::Copy(this->Device, source.Device);
    cmnData<std::vector<int> >::Copy(this->Input, source.Input);
    cmnData<std::vector<svlFilterSourceVideoCaptureTypes::ImageFormat> >::Copy(this->Format, source.Format);
    cmnData<std::vector<svlFilterSourceVideoCaptureTypes::ImageProperties> >::Copy(this->Properties, source.Properties);
    cmnData<std::vector<svlFilterSourceVideoCaptureTypes::ExternalTrigger> >::Copy(this->Trigger, source.Trigger);
}
void svlFilterSourceVideoCaptureTypes::Config::SerializeBinary(std::ostream & outputStream) const throw (std::runtime_error) {
    cmnData<int >::SerializeBinary(this->Channels, outputStream);
    cmnData<std::vector<int> >::SerializeBinary(this->Device, outputStream);
    cmnData<std::vector<int> >::SerializeBinary(this->Input, outputStream);
    cmnData<std::vector<svlFilterSourceVideoCaptureTypes::ImageFormat> >::SerializeBinary(this->Format, outputStream);
    cmnData<std::vector<svlFilterSourceVideoCaptureTypes::ImageProperties> >::SerializeBinary(this->Properties, outputStream);
    cmnData<std::vector<svlFilterSourceVideoCaptureTypes::ExternalTrigger> >::SerializeBinary(this->Trigger, outputStream);
}
void svlFilterSourceVideoCaptureTypes::Config::DeSerializeBinary(std::istream & inputStream,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) throw (std::runtime_error) {
    cmnData<int >::DeSerializeBinary(this->Channels, inputStream, localFormat, remoteFormat);
    cmnData<std::vector<int> >::DeSerializeBinary(this->Device, inputStream, localFormat, remoteFormat);
    cmnData<std::vector<int> >::DeSerializeBinary(this->Input, inputStream, localFormat, remoteFormat);
    cmnData<std::vector<svlFilterSourceVideoCaptureTypes::ImageFormat> >::DeSerializeBinary(this->Format, inputStream, localFormat, remoteFormat);
    cmnData<std::vector<svlFilterSourceVideoCaptureTypes::ImageProperties> >::DeSerializeBinary(this->Properties, inputStream, localFormat, remoteFormat);
    cmnData<std::vector<svlFilterSourceVideoCaptureTypes::ExternalTrigger> >::DeSerializeBinary(this->Trigger, inputStream, localFormat, remoteFormat);
}
void svlFilterSourceVideoCaptureTypes::Config::SerializeText(std::ostream & outputStream, const char delimiter) const throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<int >::SerializeText(this->Channels, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<std::vector<int> >::SerializeText(this->Device, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<std::vector<int> >::SerializeText(this->Input, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<std::vector<svlFilterSourceVideoCaptureTypes::ImageFormat> >::SerializeText(this->Format, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<std::vector<svlFilterSourceVideoCaptureTypes::ImageProperties> >::SerializeText(this->Properties, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<std::vector<svlFilterSourceVideoCaptureTypes::ExternalTrigger> >::SerializeText(this->Trigger, outputStream, delimiter);
}
std::string svlFilterSourceVideoCaptureTypes::Config::SerializeDescription(const char delimiter, const std::string & userDescription) const {
    bool someData = false;
    const std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    std::stringstream description;
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<int >::SerializeDescription(this->Channels, delimiter, prefix + "Channels");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<std::vector<int> >::SerializeDescription(this->Device, delimiter, prefix + "Device");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<std::vector<int> >::SerializeDescription(this->Input, delimiter, prefix + "Input");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<std::vector<svlFilterSourceVideoCaptureTypes::ImageFormat> >::SerializeDescription(this->Format, delimiter, prefix + "Format");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<std::vector<svlFilterSourceVideoCaptureTypes::ImageProperties> >::SerializeDescription(this->Properties, delimiter, prefix + "Properties");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<std::vector<svlFilterSourceVideoCaptureTypes::ExternalTrigger> >::SerializeDescription(this->Trigger, delimiter, prefix + "Trigger");
    return description.str();
}
void svlFilterSourceVideoCaptureTypes::Config::DeSerializeText(std::istream & inputStream,
                                          const char delimiter) throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "svlFilterSourceVideoCaptureTypes::Config");
    }
    someData = true;
    cmnData<int >::DeSerializeText(this->Channels, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "svlFilterSourceVideoCaptureTypes::Config");
    }
    someData = true;
    cmnData<std::vector<int> >::DeSerializeText(this->Device, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "svlFilterSourceVideoCaptureTypes::Config");
    }
    someData = true;
    cmnData<std::vector<int> >::DeSerializeText(this->Input, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "svlFilterSourceVideoCaptureTypes::Config");
    }
    someData = true;
    cmnData<std::vector<svlFilterSourceVideoCaptureTypes::ImageFormat> >::DeSerializeText(this->Format, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "svlFilterSourceVideoCaptureTypes::Config");
    }
    someData = true;
    cmnData<std::vector<svlFilterSourceVideoCaptureTypes::ImageProperties> >::DeSerializeText(this->Properties, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "svlFilterSourceVideoCaptureTypes::Config");
    }
    someData = true;
    cmnData<std::vector<svlFilterSourceVideoCaptureTypes::ExternalTrigger> >::DeSerializeText(this->Trigger, inputStream, delimiter);
}
bool svlFilterSourceVideoCaptureTypes::Config::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<int >::ScalarNumberIsFixed(this->Channels)
           && cmnData<std::vector<int> >::ScalarNumberIsFixed(this->Device)
           && cmnData<std::vector<int> >::ScalarNumberIsFixed(this->Input)
           && cmnData<std::vector<svlFilterSourceVideoCaptureTypes::ImageFormat> >::ScalarNumberIsFixed(this->Format)
           && cmnData<std::vector<svlFilterSourceVideoCaptureTypes::ImageProperties> >::ScalarNumberIsFixed(this->Properties)
           && cmnData<std::vector<svlFilterSourceVideoCaptureTypes::ExternalTrigger> >::ScalarNumberIsFixed(this->Trigger)
    ;
}
size_t svlFilterSourceVideoCaptureTypes::Config::ScalarNumber(void) const {
    return 0
           + cmnData<int >::ScalarNumber(this->Channels)
           + cmnData<std::vector<int> >::ScalarNumber(this->Device)
           + cmnData<std::vector<int> >::ScalarNumber(this->Input)
           + cmnData<std::vector<svlFilterSourceVideoCaptureTypes::ImageFormat> >::ScalarNumber(this->Format)
           + cmnData<std::vector<svlFilterSourceVideoCaptureTypes::ImageProperties> >::ScalarNumber(this->Properties)
           + cmnData<std::vector<svlFilterSourceVideoCaptureTypes::ExternalTrigger> >::ScalarNumber(this->Trigger)
    ;
}
std::string svlFilterSourceVideoCaptureTypes::Config::ScalarDescription(const size_t index, const std::string & userDescription) const throw (std::out_of_range) {
    std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<int >::ScalarNumber(this->Channels);
    if (index < currentMaxIndex) {
        return cmnData<int >::ScalarDescription(this->Channels, index - baseIndex, prefix + "Channels");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<std::vector<int> >::ScalarNumber(this->Device);
    if (index < currentMaxIndex) {
        return cmnData<std::vector<int> >::ScalarDescription(this->Device, index - baseIndex, prefix + "Device");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<std::vector<int> >::ScalarNumber(this->Input);
    if (index < currentMaxIndex) {
        return cmnData<std::vector<int> >::ScalarDescription(this->Input, index - baseIndex, prefix + "Input");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<std::vector<svlFilterSourceVideoCaptureTypes::ImageFormat> >::ScalarNumber(this->Format);
    if (index < currentMaxIndex) {
        return cmnData<std::vector<svlFilterSourceVideoCaptureTypes::ImageFormat> >::ScalarDescription(this->Format, index - baseIndex, prefix + "Format");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<std::vector<svlFilterSourceVideoCaptureTypes::ImageProperties> >::ScalarNumber(this->Properties);
    if (index < currentMaxIndex) {
        return cmnData<std::vector<svlFilterSourceVideoCaptureTypes::ImageProperties> >::ScalarDescription(this->Properties, index - baseIndex, prefix + "Properties");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<std::vector<svlFilterSourceVideoCaptureTypes::ExternalTrigger> >::ScalarNumber(this->Trigger);
    if (index < currentMaxIndex) {
        return cmnData<std::vector<svlFilterSourceVideoCaptureTypes::ExternalTrigger> >::ScalarDescription(this->Trigger, index - baseIndex, prefix + "Trigger");
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: svlFilterSourceVideoCaptureTypes::Config index out of range"));
    return "";
}
double svlFilterSourceVideoCaptureTypes::Config::Scalar(const size_t index) const throw (std::out_of_range) {
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<int >::ScalarNumber(this->Channels);
    if (index < currentMaxIndex) {
        return cmnData<int >::Scalar(this->Channels, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<std::vector<int> >::ScalarNumber(this->Device);
    if (index < currentMaxIndex) {
        return cmnData<std::vector<int> >::Scalar(this->Device, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<std::vector<int> >::ScalarNumber(this->Input);
    if (index < currentMaxIndex) {
        return cmnData<std::vector<int> >::Scalar(this->Input, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<std::vector<svlFilterSourceVideoCaptureTypes::ImageFormat> >::ScalarNumber(this->Format);
    if (index < currentMaxIndex) {
        return cmnData<std::vector<svlFilterSourceVideoCaptureTypes::ImageFormat> >::Scalar(this->Format, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<std::vector<svlFilterSourceVideoCaptureTypes::ImageProperties> >::ScalarNumber(this->Properties);
    if (index < currentMaxIndex) {
        return cmnData<std::vector<svlFilterSourceVideoCaptureTypes::ImageProperties> >::Scalar(this->Properties, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<std::vector<svlFilterSourceVideoCaptureTypes::ExternalTrigger> >::ScalarNumber(this->Trigger);
    if (index < currentMaxIndex) {
        return cmnData<std::vector<svlFilterSourceVideoCaptureTypes::ExternalTrigger> >::Scalar(this->Trigger, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalar: svlFilterSourceVideoCaptureTypes::Config index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<svlFilterSourceVideoCaptureTypes::Config >::SerializeText(const svlFilterSourceVideoCaptureTypes::Config & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void svlFilterSourceVideoCaptureTypes::Config::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<int >::SerializeText(this->Channels, jsonValue["Channels"]);
    cmnDataJSON<std::vector<int> >::SerializeText(this->Device, jsonValue["Device"]);
    cmnDataJSON<std::vector<int> >::SerializeText(this->Input, jsonValue["Input"]);
    cmnDataJSON<std::vector<svlFilterSourceVideoCaptureTypes::ImageFormat> >::SerializeText(this->Format, jsonValue["Format"]);
    cmnDataJSON<std::vector<svlFilterSourceVideoCaptureTypes::ImageProperties> >::SerializeText(this->Properties, jsonValue["Properties"]);
    cmnDataJSON<std::vector<svlFilterSourceVideoCaptureTypes::ExternalTrigger> >::SerializeText(this->Trigger, jsonValue["Trigger"]);
}
template<>
void cmnDataJSON<svlFilterSourceVideoCaptureTypes::Config >::DeSerializeText(svlFilterSourceVideoCaptureTypes::Config & data, const Json::Value & jsonValue) throw (std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void svlFilterSourceVideoCaptureTypes::Config::DeSerializeTextJSON(const Json::Value & jsonValue) throw (std::runtime_error) {
    cmnDataJSON<int >::DeSerializeText(this->Channels, jsonValue["Channels"]);
    cmnDataJSON<std::vector<int> >::DeSerializeText(this->Device, jsonValue["Device"]);
    cmnDataJSON<std::vector<int> >::DeSerializeText(this->Input, jsonValue["Input"]);
    cmnDataJSON<std::vector<svlFilterSourceVideoCaptureTypes::ImageFormat> >::DeSerializeText(this->Format, jsonValue["Format"]);
    cmnDataJSON<std::vector<svlFilterSourceVideoCaptureTypes::ImageProperties> >::DeSerializeText(this->Properties, jsonValue["Properties"]);
    cmnDataJSON<std::vector<svlFilterSourceVideoCaptureTypes::ExternalTrigger> >::DeSerializeText(this->Trigger, jsonValue["Trigger"]);
}
#endif // CISST_HAS_JSON


