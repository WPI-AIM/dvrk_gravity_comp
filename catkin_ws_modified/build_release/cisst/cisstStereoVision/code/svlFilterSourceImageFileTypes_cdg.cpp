// file automatically generated, do not modify
// cisst version: 1.0.8
// source file: /home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstStereoVision/code/../svlFilterSourceImageFileTypes.cdg

#include <cisstStereoVision/svlFilterSourceImageFileTypes.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>

/* source line: 1 */

/* source line: 14 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(svlFilterSourceImageFileTypes_FileInfoProxy);

svlFilterSourceImageFileTypes::FileInfo::FileInfo(void):
      path_prefix()
    , path_extension()
    , sequence_digits()
    , sequence_from()
    , sequence_to()
    , channel()
{}

svlFilterSourceImageFileTypes::FileInfo::FileInfo(const FileInfo & other):
      path_prefix(other.path_prefix)
    , path_extension(other.path_extension)
    , sequence_digits(other.sequence_digits)
    , sequence_from(other.sequence_from)
    , sequence_to(other.sequence_to)
    , channel(other.channel)
{}

svlFilterSourceImageFileTypes::FileInfo::~FileInfo(void){}


void svlFilterSourceImageFileTypes::FileInfo::SerializeRaw(std::ostream & outputStream) const
{
    cmnSerializeRaw(outputStream, this->path_prefix);
    cmnSerializeRaw(outputStream, this->path_extension);
    cmnSerializeRaw(outputStream, this->sequence_digits);
    cmnSerializeRaw(outputStream, this->sequence_from);
    cmnSerializeRaw(outputStream, this->sequence_to);
    cmnSerializeRaw(outputStream, this->channel);
}


void svlFilterSourceImageFileTypes::FileInfo::DeSerializeRaw(std::istream & inputStream)
{
    cmnDeSerializeRaw(inputStream, this->path_prefix);
    cmnDeSerializeRaw(inputStream, this->path_extension);
    cmnDeSerializeRaw(inputStream, this->sequence_digits);
    cmnDeSerializeRaw(inputStream, this->sequence_from);
    cmnDeSerializeRaw(inputStream, this->sequence_to);
    cmnDeSerializeRaw(inputStream, this->channel);
}


void svlFilterSourceImageFileTypes::FileInfo::ToStream(std::ostream & outputStream) const
{
    outputStream << this->HumanReadable();
}

void svlFilterSourceImageFileTypes::FileInfo::ToStreamRaw(std::ostream & outputStream, const char delimiter, bool headerOnly, const std::string & headerPrefix) const
{
    if (headerOnly) {
        outputStream << cmnData<svlFilterSourceImageFileTypes::FileInfo >::SerializeDescription(*this, delimiter, headerPrefix);
    } else {
        cmnData<svlFilterSourceImageFileTypes::FileInfo >::SerializeText(*this, outputStream, delimiter);
    }
}
/* source line: 19 */
/* source line: 25 */
/* source line: 31 */
/* source line: 37 */
/* source line: 43 */
/* source line: 49 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const svlFilterSourceImageFileTypes::FileInfo & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, svlFilterSourceImageFileTypes::FileInfo & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void svlFilterSourceImageFileTypes::FileInfo::Copy(const svlFilterSourceImageFileTypes::FileInfo & source) {
    cmnData<std::string >::Copy(this->path_prefix, source.path_prefix);
    cmnData<std::string >::Copy(this->path_extension, source.path_extension);
    cmnData<unsigned int >::Copy(this->sequence_digits, source.sequence_digits);
    cmnData<unsigned int >::Copy(this->sequence_from, source.sequence_from);
    cmnData<unsigned int >::Copy(this->sequence_to, source.sequence_to);
    cmnData<unsigned int >::Copy(this->channel, source.channel);
}
void svlFilterSourceImageFileTypes::FileInfo::SerializeBinary(std::ostream & outputStream) const throw (std::runtime_error) {
    cmnData<std::string >::SerializeBinary(this->path_prefix, outputStream);
    cmnData<std::string >::SerializeBinary(this->path_extension, outputStream);
    cmnData<unsigned int >::SerializeBinary(this->sequence_digits, outputStream);
    cmnData<unsigned int >::SerializeBinary(this->sequence_from, outputStream);
    cmnData<unsigned int >::SerializeBinary(this->sequence_to, outputStream);
    cmnData<unsigned int >::SerializeBinary(this->channel, outputStream);
}
void svlFilterSourceImageFileTypes::FileInfo::DeSerializeBinary(std::istream & inputStream,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) throw (std::runtime_error) {
    cmnData<std::string >::DeSerializeBinary(this->path_prefix, inputStream, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->path_extension, inputStream, localFormat, remoteFormat);
    cmnData<unsigned int >::DeSerializeBinary(this->sequence_digits, inputStream, localFormat, remoteFormat);
    cmnData<unsigned int >::DeSerializeBinary(this->sequence_from, inputStream, localFormat, remoteFormat);
    cmnData<unsigned int >::DeSerializeBinary(this->sequence_to, inputStream, localFormat, remoteFormat);
    cmnData<unsigned int >::DeSerializeBinary(this->channel, inputStream, localFormat, remoteFormat);
}
void svlFilterSourceImageFileTypes::FileInfo::SerializeText(std::ostream & outputStream, const char delimiter) const throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<std::string >::SerializeText(this->path_prefix, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<std::string >::SerializeText(this->path_extension, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<unsigned int >::SerializeText(this->sequence_digits, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<unsigned int >::SerializeText(this->sequence_from, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<unsigned int >::SerializeText(this->sequence_to, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<unsigned int >::SerializeText(this->channel, outputStream, delimiter);
}
std::string svlFilterSourceImageFileTypes::FileInfo::SerializeDescription(const char delimiter, const std::string & userDescription) const {
    bool someData = false;
    const std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    std::stringstream description;
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<std::string >::SerializeDescription(this->path_prefix, delimiter, prefix + "path_prefix");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<std::string >::SerializeDescription(this->path_extension, delimiter, prefix + "path_extension");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<unsigned int >::SerializeDescription(this->sequence_digits, delimiter, prefix + "sequence_digits");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<unsigned int >::SerializeDescription(this->sequence_from, delimiter, prefix + "sequence_from");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<unsigned int >::SerializeDescription(this->sequence_to, delimiter, prefix + "sequence_to");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<unsigned int >::SerializeDescription(this->channel, delimiter, prefix + "channel");
    return description.str();
}
void svlFilterSourceImageFileTypes::FileInfo::DeSerializeText(std::istream & inputStream,
                                          const char delimiter) throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "svlFilterSourceImageFileTypes::FileInfo");
    }
    someData = true;
    cmnData<std::string >::DeSerializeText(this->path_prefix, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "svlFilterSourceImageFileTypes::FileInfo");
    }
    someData = true;
    cmnData<std::string >::DeSerializeText(this->path_extension, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "svlFilterSourceImageFileTypes::FileInfo");
    }
    someData = true;
    cmnData<unsigned int >::DeSerializeText(this->sequence_digits, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "svlFilterSourceImageFileTypes::FileInfo");
    }
    someData = true;
    cmnData<unsigned int >::DeSerializeText(this->sequence_from, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "svlFilterSourceImageFileTypes::FileInfo");
    }
    someData = true;
    cmnData<unsigned int >::DeSerializeText(this->sequence_to, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "svlFilterSourceImageFileTypes::FileInfo");
    }
    someData = true;
    cmnData<unsigned int >::DeSerializeText(this->channel, inputStream, delimiter);
}
std::string svlFilterSourceImageFileTypes::FileInfo::HumanReadable(void) const {
    std::stringstream description;
    description << "svlFilterSourceImageFileTypes::FileInfo" << std::endl;
    description << "  File name prefix:" << cmnData<std::string >::HumanReadable(this->path_prefix);
    description << "  File extension:" << cmnData<std::string >::HumanReadable(this->path_extension);
    description << "  Number of sequence digits:" << cmnData<unsigned int >::HumanReadable(this->sequence_digits);
    description << "  Sequence first frame:" << cmnData<unsigned int >::HumanReadable(this->sequence_from);
    description << "  Sequence last frame:" << cmnData<unsigned int >::HumanReadable(this->sequence_to);
    description << "  Video channel:" << cmnData<unsigned int >::HumanReadable(this->channel);
    return description.str();
}
bool svlFilterSourceImageFileTypes::FileInfo::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<std::string >::ScalarNumberIsFixed(this->path_prefix)
           && cmnData<std::string >::ScalarNumberIsFixed(this->path_extension)
           && cmnData<unsigned int >::ScalarNumberIsFixed(this->sequence_digits)
           && cmnData<unsigned int >::ScalarNumberIsFixed(this->sequence_from)
           && cmnData<unsigned int >::ScalarNumberIsFixed(this->sequence_to)
           && cmnData<unsigned int >::ScalarNumberIsFixed(this->channel)
    ;
}
size_t svlFilterSourceImageFileTypes::FileInfo::ScalarNumber(void) const {
    return 0
           + cmnData<std::string >::ScalarNumber(this->path_prefix)
           + cmnData<std::string >::ScalarNumber(this->path_extension)
           + cmnData<unsigned int >::ScalarNumber(this->sequence_digits)
           + cmnData<unsigned int >::ScalarNumber(this->sequence_from)
           + cmnData<unsigned int >::ScalarNumber(this->sequence_to)
           + cmnData<unsigned int >::ScalarNumber(this->channel)
    ;
}
std::string svlFilterSourceImageFileTypes::FileInfo::ScalarDescription(const size_t index, const std::string & userDescription) const throw (std::out_of_range) {
    std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->path_prefix);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::ScalarDescription(this->path_prefix, index - baseIndex, prefix + "path_prefix");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->path_extension);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::ScalarDescription(this->path_extension, index - baseIndex, prefix + "path_extension");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<unsigned int >::ScalarNumber(this->sequence_digits);
    if (index < currentMaxIndex) {
        return cmnData<unsigned int >::ScalarDescription(this->sequence_digits, index - baseIndex, prefix + "sequence_digits");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<unsigned int >::ScalarNumber(this->sequence_from);
    if (index < currentMaxIndex) {
        return cmnData<unsigned int >::ScalarDescription(this->sequence_from, index - baseIndex, prefix + "sequence_from");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<unsigned int >::ScalarNumber(this->sequence_to);
    if (index < currentMaxIndex) {
        return cmnData<unsigned int >::ScalarDescription(this->sequence_to, index - baseIndex, prefix + "sequence_to");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<unsigned int >::ScalarNumber(this->channel);
    if (index < currentMaxIndex) {
        return cmnData<unsigned int >::ScalarDescription(this->channel, index - baseIndex, prefix + "channel");
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: svlFilterSourceImageFileTypes::FileInfo index out of range"));
    return "";
}
double svlFilterSourceImageFileTypes::FileInfo::Scalar(const size_t index) const throw (std::out_of_range) {
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->path_prefix);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::Scalar(this->path_prefix, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->path_extension);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::Scalar(this->path_extension, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<unsigned int >::ScalarNumber(this->sequence_digits);
    if (index < currentMaxIndex) {
        return cmnData<unsigned int >::Scalar(this->sequence_digits, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<unsigned int >::ScalarNumber(this->sequence_from);
    if (index < currentMaxIndex) {
        return cmnData<unsigned int >::Scalar(this->sequence_from, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<unsigned int >::ScalarNumber(this->sequence_to);
    if (index < currentMaxIndex) {
        return cmnData<unsigned int >::Scalar(this->sequence_to, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<unsigned int >::ScalarNumber(this->channel);
    if (index < currentMaxIndex) {
        return cmnData<unsigned int >::Scalar(this->channel, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalar: svlFilterSourceImageFileTypes::FileInfo index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<svlFilterSourceImageFileTypes::FileInfo >::SerializeText(const svlFilterSourceImageFileTypes::FileInfo & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void svlFilterSourceImageFileTypes::FileInfo::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<std::string >::SerializeText(this->path_prefix, jsonValue["path_prefix"]);
    cmnDataJSON<std::string >::SerializeText(this->path_extension, jsonValue["path_extension"]);
    cmnDataJSON<unsigned int >::SerializeText(this->sequence_digits, jsonValue["sequence_digits"]);
    cmnDataJSON<unsigned int >::SerializeText(this->sequence_from, jsonValue["sequence_from"]);
    cmnDataJSON<unsigned int >::SerializeText(this->sequence_to, jsonValue["sequence_to"]);
    cmnDataJSON<unsigned int >::SerializeText(this->channel, jsonValue["channel"]);
}
template<>
void cmnDataJSON<svlFilterSourceImageFileTypes::FileInfo >::DeSerializeText(svlFilterSourceImageFileTypes::FileInfo & data, const Json::Value & jsonValue) throw (std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void svlFilterSourceImageFileTypes::FileInfo::DeSerializeTextJSON(const Json::Value & jsonValue) throw (std::runtime_error) {
    cmnDataJSON<std::string >::DeSerializeText(this->path_prefix, jsonValue["path_prefix"]);
    cmnDataJSON<std::string >::DeSerializeText(this->path_extension, jsonValue["path_extension"]);
    cmnDataJSON<unsigned int >::DeSerializeText(this->sequence_digits, jsonValue["sequence_digits"]);
    cmnDataJSON<unsigned int >::DeSerializeText(this->sequence_from, jsonValue["sequence_from"]);
    cmnDataJSON<unsigned int >::DeSerializeText(this->sequence_to, jsonValue["sequence_to"]);
    cmnDataJSON<unsigned int >::DeSerializeText(this->channel, jsonValue["channel"]);
}
#endif // CISST_HAS_JSON


