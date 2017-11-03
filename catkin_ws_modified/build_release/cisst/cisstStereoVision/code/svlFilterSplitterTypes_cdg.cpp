// file automatically generated, do not modify
// cisst version: 1.0.8
// source file: /home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstStereoVision/code/../svlFilterSplitterTypes.cdg

#include <cisstStereoVision/svlFilterSplitterTypes.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>

/* source line: 1 */

/* source line: 14 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(svlFilterSplitterTypes_OutputInfoProxy);

svlFilterSplitterTypes::OutputInfo::OutputInfo(void):
      name()
    , threadcount()
    , buffersize()
{}

svlFilterSplitterTypes::OutputInfo::OutputInfo(const OutputInfo & other):
      name(other.name)
    , threadcount(other.threadcount)
    , buffersize(other.buffersize)
{}

svlFilterSplitterTypes::OutputInfo::~OutputInfo(void){}


void svlFilterSplitterTypes::OutputInfo::SerializeRaw(std::ostream & outputStream) const
{
    cmnSerializeRaw(outputStream, this->name);
    cmnSerializeRaw(outputStream, this->threadcount);
    cmnSerializeRaw(outputStream, this->buffersize);
}


void svlFilterSplitterTypes::OutputInfo::DeSerializeRaw(std::istream & inputStream)
{
    cmnDeSerializeRaw(inputStream, this->name);
    cmnDeSerializeRaw(inputStream, this->threadcount);
    cmnDeSerializeRaw(inputStream, this->buffersize);
}


void svlFilterSplitterTypes::OutputInfo::ToStream(std::ostream & outputStream) const
{
    outputStream << this->HumanReadable();
}

void svlFilterSplitterTypes::OutputInfo::ToStreamRaw(std::ostream & outputStream, const char delimiter, bool headerOnly, const std::string & headerPrefix) const
{
    if (headerOnly) {
        outputStream << cmnData<svlFilterSplitterTypes::OutputInfo >::SerializeDescription(*this, delimiter, headerPrefix);
    } else {
        cmnData<svlFilterSplitterTypes::OutputInfo >::SerializeText(*this, outputStream, delimiter);
    }
}
/* source line: 19 */
/* source line: 25 */
/* source line: 31 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const svlFilterSplitterTypes::OutputInfo & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, svlFilterSplitterTypes::OutputInfo & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void svlFilterSplitterTypes::OutputInfo::Copy(const svlFilterSplitterTypes::OutputInfo & source) {
    cmnData<std::string >::Copy(this->name, source.name);
    cmnData<unsigned int >::Copy(this->threadcount, source.threadcount);
    cmnData<unsigned int >::Copy(this->buffersize, source.buffersize);
}
void svlFilterSplitterTypes::OutputInfo::SerializeBinary(std::ostream & outputStream) const throw (std::runtime_error) {
    cmnData<std::string >::SerializeBinary(this->name, outputStream);
    cmnData<unsigned int >::SerializeBinary(this->threadcount, outputStream);
    cmnData<unsigned int >::SerializeBinary(this->buffersize, outputStream);
}
void svlFilterSplitterTypes::OutputInfo::DeSerializeBinary(std::istream & inputStream,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) throw (std::runtime_error) {
    cmnData<std::string >::DeSerializeBinary(this->name, inputStream, localFormat, remoteFormat);
    cmnData<unsigned int >::DeSerializeBinary(this->threadcount, inputStream, localFormat, remoteFormat);
    cmnData<unsigned int >::DeSerializeBinary(this->buffersize, inputStream, localFormat, remoteFormat);
}
void svlFilterSplitterTypes::OutputInfo::SerializeText(std::ostream & outputStream, const char delimiter) const throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<std::string >::SerializeText(this->name, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<unsigned int >::SerializeText(this->threadcount, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<unsigned int >::SerializeText(this->buffersize, outputStream, delimiter);
}
std::string svlFilterSplitterTypes::OutputInfo::SerializeDescription(const char delimiter, const std::string & userDescription) const {
    bool someData = false;
    const std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    std::stringstream description;
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<std::string >::SerializeDescription(this->name, delimiter, prefix + "name");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<unsigned int >::SerializeDescription(this->threadcount, delimiter, prefix + "threadcount");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<unsigned int >::SerializeDescription(this->buffersize, delimiter, prefix + "buffersize");
    return description.str();
}
void svlFilterSplitterTypes::OutputInfo::DeSerializeText(std::istream & inputStream,
                                          const char delimiter) throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "svlFilterSplitterTypes::OutputInfo");
    }
    someData = true;
    cmnData<std::string >::DeSerializeText(this->name, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "svlFilterSplitterTypes::OutputInfo");
    }
    someData = true;
    cmnData<unsigned int >::DeSerializeText(this->threadcount, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "svlFilterSplitterTypes::OutputInfo");
    }
    someData = true;
    cmnData<unsigned int >::DeSerializeText(this->buffersize, inputStream, delimiter);
}
std::string svlFilterSplitterTypes::OutputInfo::HumanReadable(void) const {
    std::stringstream description;
    description << "svlFilterSplitterTypes::OutputInfo" << std::endl;
    description << "  Output name:" << cmnData<std::string >::HumanReadable(this->name);
    description << "  Thread count:" << cmnData<unsigned int >::HumanReadable(this->threadcount);
    description << "  Buffer size:" << cmnData<unsigned int >::HumanReadable(this->buffersize);
    return description.str();
}
bool svlFilterSplitterTypes::OutputInfo::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<std::string >::ScalarNumberIsFixed(this->name)
           && cmnData<unsigned int >::ScalarNumberIsFixed(this->threadcount)
           && cmnData<unsigned int >::ScalarNumberIsFixed(this->buffersize)
    ;
}
size_t svlFilterSplitterTypes::OutputInfo::ScalarNumber(void) const {
    return 0
           + cmnData<std::string >::ScalarNumber(this->name)
           + cmnData<unsigned int >::ScalarNumber(this->threadcount)
           + cmnData<unsigned int >::ScalarNumber(this->buffersize)
    ;
}
std::string svlFilterSplitterTypes::OutputInfo::ScalarDescription(const size_t index, const std::string & userDescription) const throw (std::out_of_range) {
    std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->name);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::ScalarDescription(this->name, index - baseIndex, prefix + "name");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<unsigned int >::ScalarNumber(this->threadcount);
    if (index < currentMaxIndex) {
        return cmnData<unsigned int >::ScalarDescription(this->threadcount, index - baseIndex, prefix + "threadcount");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<unsigned int >::ScalarNumber(this->buffersize);
    if (index < currentMaxIndex) {
        return cmnData<unsigned int >::ScalarDescription(this->buffersize, index - baseIndex, prefix + "buffersize");
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: svlFilterSplitterTypes::OutputInfo index out of range"));
    return "";
}
double svlFilterSplitterTypes::OutputInfo::Scalar(const size_t index) const throw (std::out_of_range) {
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->name);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::Scalar(this->name, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<unsigned int >::ScalarNumber(this->threadcount);
    if (index < currentMaxIndex) {
        return cmnData<unsigned int >::Scalar(this->threadcount, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<unsigned int >::ScalarNumber(this->buffersize);
    if (index < currentMaxIndex) {
        return cmnData<unsigned int >::Scalar(this->buffersize, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalar: svlFilterSplitterTypes::OutputInfo index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<svlFilterSplitterTypes::OutputInfo >::SerializeText(const svlFilterSplitterTypes::OutputInfo & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void svlFilterSplitterTypes::OutputInfo::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<std::string >::SerializeText(this->name, jsonValue["name"]);
    cmnDataJSON<unsigned int >::SerializeText(this->threadcount, jsonValue["threadcount"]);
    cmnDataJSON<unsigned int >::SerializeText(this->buffersize, jsonValue["buffersize"]);
}
template<>
void cmnDataJSON<svlFilterSplitterTypes::OutputInfo >::DeSerializeText(svlFilterSplitterTypes::OutputInfo & data, const Json::Value & jsonValue) throw (std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void svlFilterSplitterTypes::OutputInfo::DeSerializeTextJSON(const Json::Value & jsonValue) throw (std::runtime_error) {
    cmnDataJSON<std::string >::DeSerializeText(this->name, jsonValue["name"]);
    cmnDataJSON<unsigned int >::DeSerializeText(this->threadcount, jsonValue["threadcount"]);
    cmnDataJSON<unsigned int >::DeSerializeText(this->buffersize, jsonValue["buffersize"]);
}
#endif // CISST_HAS_JSON


