// file automatically generated, do not modify
// cisst version: 1.0.8
// source file: /home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstStereoVision/code/../svlFilterSourceTextFileTypes.cdg

#include <cisstStereoVision/svlFilterSourceTextFileTypes.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>

/* source line: 1 */

/* source line: 15 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(svlFilterSourceTextFileTypes_FileInfoProxy);

svlFilterSourceTextFileTypes::FileInfo::FileInfo(void):
      filepath()
    , timestamp_column(-1)
    , timestamp_unit(1.0)
    , timestamp_overflow_value(pow(2.0, 100))
{}

svlFilterSourceTextFileTypes::FileInfo::FileInfo(const FileInfo & other):
      filepath(other.filepath)
    , timestamp_column(other.timestamp_column)
    , timestamp_unit(other.timestamp_unit)
    , timestamp_overflow_value(other.timestamp_overflow_value)
{}

svlFilterSourceTextFileTypes::FileInfo::FileInfo(const std::string & newfilepath, const int & newtimestamp_column, const double & newtimestamp_unit, const double & newtimestamp_overflow_value):
      filepath(newfilepath)
    , timestamp_column(newtimestamp_column)
    , timestamp_unit(newtimestamp_unit)
    , timestamp_overflow_value(newtimestamp_overflow_value)
{}

svlFilterSourceTextFileTypes::FileInfo::~FileInfo(void){}


void svlFilterSourceTextFileTypes::FileInfo::SerializeRaw(std::ostream & outputStream) const
{
    cmnSerializeRaw(outputStream, this->filepath);
    cmnSerializeRaw(outputStream, this->timestamp_column);
    cmnSerializeRaw(outputStream, this->timestamp_unit);
    cmnSerializeRaw(outputStream, this->timestamp_overflow_value);
}


void svlFilterSourceTextFileTypes::FileInfo::DeSerializeRaw(std::istream & inputStream)
{
    cmnDeSerializeRaw(inputStream, this->filepath);
    cmnDeSerializeRaw(inputStream, this->timestamp_column);
    cmnDeSerializeRaw(inputStream, this->timestamp_unit);
    cmnDeSerializeRaw(inputStream, this->timestamp_overflow_value);
}


void svlFilterSourceTextFileTypes::FileInfo::ToStream(std::ostream & outputStream) const
{
    outputStream << this->HumanReadable();
}

void svlFilterSourceTextFileTypes::FileInfo::ToStreamRaw(std::ostream & outputStream, const char delimiter, bool headerOnly, const std::string & headerPrefix) const
{
    if (headerOnly) {
        outputStream << cmnData<svlFilterSourceTextFileTypes::FileInfo >::SerializeDescription(*this, delimiter, headerPrefix);
    } else {
        cmnData<svlFilterSourceTextFileTypes::FileInfo >::SerializeText(*this, outputStream, delimiter);
    }
}
/* source line: 21 */
/* source line: 27 */
/* source line: 34 */
/* source line: 41 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const svlFilterSourceTextFileTypes::FileInfo & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, svlFilterSourceTextFileTypes::FileInfo & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void svlFilterSourceTextFileTypes::FileInfo::Copy(const svlFilterSourceTextFileTypes::FileInfo & source) {
    cmnData<std::string >::Copy(this->filepath, source.filepath);
    cmnData<int >::Copy(this->timestamp_column, source.timestamp_column);
    cmnData<double >::Copy(this->timestamp_unit, source.timestamp_unit);
    cmnData<double >::Copy(this->timestamp_overflow_value, source.timestamp_overflow_value);
}
void svlFilterSourceTextFileTypes::FileInfo::SerializeBinary(std::ostream & outputStream) const throw (std::runtime_error) {
    cmnData<std::string >::SerializeBinary(this->filepath, outputStream);
    cmnData<int >::SerializeBinary(this->timestamp_column, outputStream);
    cmnData<double >::SerializeBinary(this->timestamp_unit, outputStream);
    cmnData<double >::SerializeBinary(this->timestamp_overflow_value, outputStream);
}
void svlFilterSourceTextFileTypes::FileInfo::DeSerializeBinary(std::istream & inputStream,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) throw (std::runtime_error) {
    cmnData<std::string >::DeSerializeBinary(this->filepath, inputStream, localFormat, remoteFormat);
    cmnData<int >::DeSerializeBinary(this->timestamp_column, inputStream, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->timestamp_unit, inputStream, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->timestamp_overflow_value, inputStream, localFormat, remoteFormat);
}
void svlFilterSourceTextFileTypes::FileInfo::SerializeText(std::ostream & outputStream, const char delimiter) const throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<std::string >::SerializeText(this->filepath, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<int >::SerializeText(this->timestamp_column, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<double >::SerializeText(this->timestamp_unit, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<double >::SerializeText(this->timestamp_overflow_value, outputStream, delimiter);
}
std::string svlFilterSourceTextFileTypes::FileInfo::SerializeDescription(const char delimiter, const std::string & userDescription) const {
    bool someData = false;
    const std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    std::stringstream description;
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<std::string >::SerializeDescription(this->filepath, delimiter, prefix + "filepath");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<int >::SerializeDescription(this->timestamp_column, delimiter, prefix + "timestamp_column");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<double >::SerializeDescription(this->timestamp_unit, delimiter, prefix + "timestamp_unit");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<double >::SerializeDescription(this->timestamp_overflow_value, delimiter, prefix + "timestamp_overflow_value");
    return description.str();
}
void svlFilterSourceTextFileTypes::FileInfo::DeSerializeText(std::istream & inputStream,
                                          const char delimiter) throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "svlFilterSourceTextFileTypes::FileInfo");
    }
    someData = true;
    cmnData<std::string >::DeSerializeText(this->filepath, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "svlFilterSourceTextFileTypes::FileInfo");
    }
    someData = true;
    cmnData<int >::DeSerializeText(this->timestamp_column, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "svlFilterSourceTextFileTypes::FileInfo");
    }
    someData = true;
    cmnData<double >::DeSerializeText(this->timestamp_unit, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "svlFilterSourceTextFileTypes::FileInfo");
    }
    someData = true;
    cmnData<double >::DeSerializeText(this->timestamp_overflow_value, inputStream, delimiter);
}
std::string svlFilterSourceTextFileTypes::FileInfo::HumanReadable(void) const {
    std::stringstream description;
    description << "svlFilterSourceTextFileTypes::FileInfo" << std::endl;
    description << "  File path:" << cmnData<std::string >::HumanReadable(this->filepath);
    description << "  Timestamp column:" << cmnData<int >::HumanReadable(this->timestamp_column);
    description << "  Timestamp unit:" << cmnData<double >::HumanReadable(this->timestamp_unit);
    description << "  Timestamp overflow value:" << cmnData<double >::HumanReadable(this->timestamp_overflow_value);
    return description.str();
}
bool svlFilterSourceTextFileTypes::FileInfo::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<std::string >::ScalarNumberIsFixed(this->filepath)
           && cmnData<int >::ScalarNumberIsFixed(this->timestamp_column)
           && cmnData<double >::ScalarNumberIsFixed(this->timestamp_unit)
           && cmnData<double >::ScalarNumberIsFixed(this->timestamp_overflow_value)
    ;
}
size_t svlFilterSourceTextFileTypes::FileInfo::ScalarNumber(void) const {
    return 0
           + cmnData<std::string >::ScalarNumber(this->filepath)
           + cmnData<int >::ScalarNumber(this->timestamp_column)
           + cmnData<double >::ScalarNumber(this->timestamp_unit)
           + cmnData<double >::ScalarNumber(this->timestamp_overflow_value)
    ;
}
std::string svlFilterSourceTextFileTypes::FileInfo::ScalarDescription(const size_t index, const std::string & userDescription) const throw (std::out_of_range) {
    std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->filepath);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::ScalarDescription(this->filepath, index - baseIndex, prefix + "filepath");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<int >::ScalarNumber(this->timestamp_column);
    if (index < currentMaxIndex) {
        return cmnData<int >::ScalarDescription(this->timestamp_column, index - baseIndex, prefix + "timestamp_column");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<double >::ScalarNumber(this->timestamp_unit);
    if (index < currentMaxIndex) {
        return cmnData<double >::ScalarDescription(this->timestamp_unit, index - baseIndex, prefix + "timestamp_unit");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<double >::ScalarNumber(this->timestamp_overflow_value);
    if (index < currentMaxIndex) {
        return cmnData<double >::ScalarDescription(this->timestamp_overflow_value, index - baseIndex, prefix + "timestamp_overflow_value");
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: svlFilterSourceTextFileTypes::FileInfo index out of range"));
    return "";
}
double svlFilterSourceTextFileTypes::FileInfo::Scalar(const size_t index) const throw (std::out_of_range) {
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->filepath);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::Scalar(this->filepath, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<int >::ScalarNumber(this->timestamp_column);
    if (index < currentMaxIndex) {
        return cmnData<int >::Scalar(this->timestamp_column, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<double >::ScalarNumber(this->timestamp_unit);
    if (index < currentMaxIndex) {
        return cmnData<double >::Scalar(this->timestamp_unit, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<double >::ScalarNumber(this->timestamp_overflow_value);
    if (index < currentMaxIndex) {
        return cmnData<double >::Scalar(this->timestamp_overflow_value, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalar: svlFilterSourceTextFileTypes::FileInfo index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<svlFilterSourceTextFileTypes::FileInfo >::SerializeText(const svlFilterSourceTextFileTypes::FileInfo & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void svlFilterSourceTextFileTypes::FileInfo::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<std::string >::SerializeText(this->filepath, jsonValue["filepath"]);
    cmnDataJSON<int >::SerializeText(this->timestamp_column, jsonValue["timestamp_column"]);
    cmnDataJSON<double >::SerializeText(this->timestamp_unit, jsonValue["timestamp_unit"]);
    cmnDataJSON<double >::SerializeText(this->timestamp_overflow_value, jsonValue["timestamp_overflow_value"]);
}
template<>
void cmnDataJSON<svlFilterSourceTextFileTypes::FileInfo >::DeSerializeText(svlFilterSourceTextFileTypes::FileInfo & data, const Json::Value & jsonValue) throw (std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void svlFilterSourceTextFileTypes::FileInfo::DeSerializeTextJSON(const Json::Value & jsonValue) throw (std::runtime_error) {
    cmnDataJSON<std::string >::DeSerializeText(this->filepath, jsonValue["filepath"]);
    cmnDataJSON<int >::DeSerializeText(this->timestamp_column, jsonValue["timestamp_column"]);
    cmnDataJSON<double >::DeSerializeText(this->timestamp_unit, jsonValue["timestamp_unit"]);
    cmnDataJSON<double >::DeSerializeText(this->timestamp_overflow_value, jsonValue["timestamp_overflow_value"]);
}
#endif // CISST_HAS_JSON


/* source line: 58 */

void svlFilterSourceTextFileTypes::FileInfo::Assign(const std::string & _filepath, const int & _timestamp_column, const double & _timestamp_unit, const double & _timestamp_overflow_value)
{
    filepath = _filepath;
    timestamp_column = _timestamp_column;
    timestamp_unit = _timestamp_unit;
    if (_timestamp_overflow_value < 0.0) timestamp_overflow_value = pow(2.0, 100);
    else timestamp_overflow_value = _timestamp_overflow_value;
}

