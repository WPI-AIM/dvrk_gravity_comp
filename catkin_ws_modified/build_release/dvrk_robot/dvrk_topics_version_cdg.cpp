// file automatically generated, do not modify
// cisst version: 1.0.8
// source file: /home/davincic2/catkin_ws/src/dvrk-ros/dvrk_robot/src/dvrk_topics_version.cdg

#include <dvrk_utilities/dvrk_topics_version.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>

/* source line: 1 */
/* source line: 1 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(dvrk_topics_versionProxy);

dvrk_topics_version::dvrk_topics_version(void)
{}

dvrk_topics_version::dvrk_topics_version(const dvrk_topics_version & CMN_UNUSED(other))
{}

dvrk_topics_version::~dvrk_topics_version(void){}


void dvrk_topics_version::SerializeRaw(std::ostream & CMN_UNUSED(outputStream)) const
{
}


void dvrk_topics_version::DeSerializeRaw(std::istream & CMN_UNUSED(inputStream))
{
}


void dvrk_topics_version::ToStream(std::ostream & outputStream) const
{
    outputStream << this->HumanReadable();
}

void dvrk_topics_version::ToStreamRaw(std::ostream & outputStream, const char delimiter, bool headerOnly, const std::string & headerPrefix) const
{
    if (headerOnly) {
        outputStream << cmnData<dvrk_topics_version >::SerializeDescription(*this, delimiter, headerPrefix);
    } else {
        cmnData<dvrk_topics_version >::SerializeText(*this, outputStream, delimiter);
    }
}
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const dvrk_topics_version & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, dvrk_topics_version & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void dvrk_topics_version::Copy(const dvrk_topics_version & CMN_UNUSED(source)) {
}
void dvrk_topics_version::SerializeBinary(std::ostream & CMN_UNUSED(outputStream)) const throw (std::runtime_error) {
}
void dvrk_topics_version::DeSerializeBinary(std::istream & CMN_UNUSED(inputStream),
                                            const cmnDataFormat & CMN_UNUSED(localFormat),
                                            const cmnDataFormat & CMN_UNUSED(remoteFormat)) throw (std::runtime_error) {
}
void dvrk_topics_version::SerializeText(std::ostream & CMN_UNUSED(outputStream), const char CMN_UNUSED(delimiter)) const throw (std::runtime_error) {
}
std::string dvrk_topics_version::SerializeDescription(const char CMN_UNUSED(delimiter), const std::string & CMN_UNUSED(userDescription)) const {
    std::stringstream description;
    return description.str();
}
void dvrk_topics_version::DeSerializeText(std::istream & CMN_UNUSED(inputStream),
                                          const char CMN_UNUSED(delimiter)) throw (std::runtime_error) {
}
std::string dvrk_topics_version::HumanReadable(void) const {
    std::stringstream description;
    description << "dvrk_topics_version" << std::endl;
    return description.str();
}
bool dvrk_topics_version::ScalarNumberIsFixed(void) const {
    return true
    ;
}
size_t dvrk_topics_version::ScalarNumber(void) const {
    return 0
    ;
}
std::string dvrk_topics_version::ScalarDescription(const size_t CMN_UNUSED(index), const std::string & userDescription) const throw (std::out_of_range) {
    std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    cmnThrow(std::out_of_range("cmnDataScalarDescription: dvrk_topics_version index out of range"));
    return "";
}
double dvrk_topics_version::Scalar(const size_t CMN_UNUSED(index)) const throw (std::out_of_range) {
    cmnThrow(std::out_of_range("cmnDataScalar: dvrk_topics_version index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<dvrk_topics_version >::SerializeText(const dvrk_topics_version & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void dvrk_topics_version::SerializeTextJSON(Json::Value & CMN_UNUSED(jsonValue)) const {
}
template<>
void cmnDataJSON<dvrk_topics_version >::DeSerializeText(dvrk_topics_version & data, const Json::Value & jsonValue) throw (std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void dvrk_topics_version::DeSerializeTextJSON(const Json::Value & CMN_UNUSED(jsonValue)) throw (std::runtime_error) {
}
#endif // CISST_HAS_JSON
std::string cmnDataHumanReadable_dvrk_topics_version_version(const dvrk_topics_version::version & data) {
    switch (data) {
        case dvrk_topics_version::v1_3_0:
            return "1.3.0";
            break;
        case dvrk_topics_version::v1_4_0:
            return "1.3.0";
            break;
        default: return "undefined enum dvrk_topics_version::version";
            break;
    }
}

std::string dvrk_topics_version::versionToString(const dvrk_topics_version::version & data) throw (std::runtime_error) {
    switch (data) {
        case dvrk_topics_version::v1_3_0:
            return "v1_3_0";
            break;
        case dvrk_topics_version::v1_4_0:
            return "v1_4_0";
            break;
        default:
            break;
    }
    cmnThrow("dvrk_topics_version::versionToString called with invalid enum");
    return "";
}

dvrk_topics_version::version dvrk_topics_version::versionFromString(const std::string & value) throw (std::runtime_error) {
    if (value == "v1_3_0") {
        return dvrk_topics_version::v1_3_0;
    };
    if (value == "v1_4_0") {
        return dvrk_topics_version::v1_4_0;
    };
    cmnThrow("dvrk_topics_version::versionFromString can't find matching enum for " + value);
    return static_cast<dvrk_topics_version::version >(0);
}

const std::vector<int> & dvrk_topics_version::versionVectorInt(void) {
    static std::vector<int> vectorInt;
    if (vectorInt.empty()) {
        vectorInt.push_back(static_cast<int>(v1_3_0));
        vectorInt.push_back(static_cast<int>(v1_4_0));
    }
    return vectorInt;
}

const std::vector<std::string> & dvrk_topics_version::versionVectorString(void) {
    static std::vector<std::string> vectorString;
    if (vectorString.empty()) {
        vectorString.push_back("v1_3_0");
        vectorString.push_back("v1_4_0");
    }
    return vectorString;
}

#if CISST_HAS_JSON
  CMN_IMPLEMENT_DATA_FUNCTIONS_JSON_FOR_ENUM(dvrk_topics_version::version, int);
#endif // CISST_HAS_JSON

