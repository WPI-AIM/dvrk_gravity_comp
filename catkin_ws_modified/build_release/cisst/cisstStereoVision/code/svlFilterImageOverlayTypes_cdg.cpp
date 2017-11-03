// file automatically generated, do not modify
// cisst version: 1.0.8
// source file: /home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstStereoVision/code/../svlFilterImageOverlayTypes.cdg

#include <cisstStereoVision/svlFilterImageOverlayTypes.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>

/* source line: 1 */

/* source line: 13 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(svlFilterImageOverlayTypes_ImageTransformProxy);

svlFilterImageOverlayTypes::ImageTransform::ImageTransform(void):
      ID()
    , frame()
    , timestamp()
{}

svlFilterImageOverlayTypes::ImageTransform::ImageTransform(const ImageTransform & other):
      ID(other.ID)
    , frame(other.frame)
    , timestamp(other.timestamp)
{}

svlFilterImageOverlayTypes::ImageTransform::~ImageTransform(void){}


void svlFilterImageOverlayTypes::ImageTransform::SerializeRaw(std::ostream & outputStream) const
{
    cmnSerializeRaw(outputStream, this->ID);
    cmnSerializeRaw(outputStream, this->frame);
    cmnSerializeRaw(outputStream, this->timestamp);
}


void svlFilterImageOverlayTypes::ImageTransform::DeSerializeRaw(std::istream & inputStream)
{
    cmnDeSerializeRaw(inputStream, this->ID);
    cmnDeSerializeRaw(inputStream, this->frame);
    cmnDeSerializeRaw(inputStream, this->timestamp);
}


void svlFilterImageOverlayTypes::ImageTransform::ToStream(std::ostream & outputStream) const
{
    outputStream << this->HumanReadable();
}

void svlFilterImageOverlayTypes::ImageTransform::ToStreamRaw(std::ostream & outputStream, const char delimiter, bool headerOnly, const std::string & headerPrefix) const
{
    if (headerOnly) {
        outputStream << cmnData<svlFilterImageOverlayTypes::ImageTransform >::SerializeDescription(*this, delimiter, headerPrefix);
    } else {
        cmnData<svlFilterImageOverlayTypes::ImageTransform >::SerializeText(*this, outputStream, delimiter);
    }
}
/* source line: 17 */
/* source line: 22 */
/* source line: 27 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const svlFilterImageOverlayTypes::ImageTransform & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, svlFilterImageOverlayTypes::ImageTransform & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void svlFilterImageOverlayTypes::ImageTransform::Copy(const svlFilterImageOverlayTypes::ImageTransform & source) {
    cmnData<int >::Copy(this->ID, source.ID);
    cmnData<vct3x3 >::Copy(this->frame, source.frame);
    cmnData<double >::Copy(this->timestamp, source.timestamp);
}
void svlFilterImageOverlayTypes::ImageTransform::SerializeBinary(std::ostream & outputStream) const throw (std::runtime_error) {
    cmnData<int >::SerializeBinary(this->ID, outputStream);
    cmnData<vct3x3 >::SerializeBinary(this->frame, outputStream);
    cmnData<double >::SerializeBinary(this->timestamp, outputStream);
}
void svlFilterImageOverlayTypes::ImageTransform::DeSerializeBinary(std::istream & inputStream,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) throw (std::runtime_error) {
    cmnData<int >::DeSerializeBinary(this->ID, inputStream, localFormat, remoteFormat);
    cmnData<vct3x3 >::DeSerializeBinary(this->frame, inputStream, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->timestamp, inputStream, localFormat, remoteFormat);
}
void svlFilterImageOverlayTypes::ImageTransform::SerializeText(std::ostream & outputStream, const char delimiter) const throw (std::runtime_error) {
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
    cmnData<vct3x3 >::SerializeText(this->frame, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<double >::SerializeText(this->timestamp, outputStream, delimiter);
}
std::string svlFilterImageOverlayTypes::ImageTransform::SerializeDescription(const char delimiter, const std::string & userDescription) const {
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
    description << cmnData<vct3x3 >::SerializeDescription(this->frame, delimiter, prefix + "frame");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<double >::SerializeDescription(this->timestamp, delimiter, prefix + "timestamp");
    return description.str();
}
void svlFilterImageOverlayTypes::ImageTransform::DeSerializeText(std::istream & inputStream,
                                          const char delimiter) throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "svlFilterImageOverlayTypes::ImageTransform");
    }
    someData = true;
    cmnData<int >::DeSerializeText(this->ID, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "svlFilterImageOverlayTypes::ImageTransform");
    }
    someData = true;
    cmnData<vct3x3 >::DeSerializeText(this->frame, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "svlFilterImageOverlayTypes::ImageTransform");
    }
    someData = true;
    cmnData<double >::DeSerializeText(this->timestamp, inputStream, delimiter);
}
std::string svlFilterImageOverlayTypes::ImageTransform::HumanReadable(void) const {
    std::stringstream description;
    description << "svlFilterImageOverlayTypes::ImageTransform" << std::endl;
    description << "  ID:" << cmnData<int >::HumanReadable(this->ID);
    description << "  frame:" << cmnData<vct3x3 >::HumanReadable(this->frame);
    description << "  timestamp:" << cmnData<double >::HumanReadable(this->timestamp);
    return description.str();
}
bool svlFilterImageOverlayTypes::ImageTransform::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<int >::ScalarNumberIsFixed(this->ID)
           && cmnData<vct3x3 >::ScalarNumberIsFixed(this->frame)
           && cmnData<double >::ScalarNumberIsFixed(this->timestamp)
    ;
}
size_t svlFilterImageOverlayTypes::ImageTransform::ScalarNumber(void) const {
    return 0
           + cmnData<int >::ScalarNumber(this->ID)
           + cmnData<vct3x3 >::ScalarNumber(this->frame)
           + cmnData<double >::ScalarNumber(this->timestamp)
    ;
}
std::string svlFilterImageOverlayTypes::ImageTransform::ScalarDescription(const size_t index, const std::string & userDescription) const throw (std::out_of_range) {
    std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<int >::ScalarNumber(this->ID);
    if (index < currentMaxIndex) {
        return cmnData<int >::ScalarDescription(this->ID, index - baseIndex, prefix + "ID");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vct3x3 >::ScalarNumber(this->frame);
    if (index < currentMaxIndex) {
        return cmnData<vct3x3 >::ScalarDescription(this->frame, index - baseIndex, prefix + "frame");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<double >::ScalarNumber(this->timestamp);
    if (index < currentMaxIndex) {
        return cmnData<double >::ScalarDescription(this->timestamp, index - baseIndex, prefix + "timestamp");
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: svlFilterImageOverlayTypes::ImageTransform index out of range"));
    return "";
}
double svlFilterImageOverlayTypes::ImageTransform::Scalar(const size_t index) const throw (std::out_of_range) {
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<int >::ScalarNumber(this->ID);
    if (index < currentMaxIndex) {
        return cmnData<int >::Scalar(this->ID, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vct3x3 >::ScalarNumber(this->frame);
    if (index < currentMaxIndex) {
        return cmnData<vct3x3 >::Scalar(this->frame, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<double >::ScalarNumber(this->timestamp);
    if (index < currentMaxIndex) {
        return cmnData<double >::Scalar(this->timestamp, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalar: svlFilterImageOverlayTypes::ImageTransform index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<svlFilterImageOverlayTypes::ImageTransform >::SerializeText(const svlFilterImageOverlayTypes::ImageTransform & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void svlFilterImageOverlayTypes::ImageTransform::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<int >::SerializeText(this->ID, jsonValue["ID"]);
    cmnDataJSON<vct3x3 >::SerializeText(this->frame, jsonValue["frame"]);
    cmnDataJSON<double >::SerializeText(this->timestamp, jsonValue["timestamp"]);
}
template<>
void cmnDataJSON<svlFilterImageOverlayTypes::ImageTransform >::DeSerializeText(svlFilterImageOverlayTypes::ImageTransform & data, const Json::Value & jsonValue) throw (std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void svlFilterImageOverlayTypes::ImageTransform::DeSerializeTextJSON(const Json::Value & jsonValue) throw (std::runtime_error) {
    cmnDataJSON<int >::DeSerializeText(this->ID, jsonValue["ID"]);
    cmnDataJSON<vct3x3 >::DeSerializeText(this->frame, jsonValue["frame"]);
    cmnDataJSON<double >::DeSerializeText(this->timestamp, jsonValue["timestamp"]);
}
#endif // CISST_HAS_JSON


/* source line: 39 */

CMN_IMPLEMENT_SERVICES_TEMPLATED(svlFilterImageOverlayTypes_ImageTransformVectorProxy);

