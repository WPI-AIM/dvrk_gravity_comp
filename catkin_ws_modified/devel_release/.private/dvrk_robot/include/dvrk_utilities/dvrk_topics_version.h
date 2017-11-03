// file automatically generated, do not modify
// cisst version: 1.0.8
// source file: /home/davincic2/catkin_ws/src/dvrk-ros/dvrk_robot/src/dvrk_topics_version.cdg

#pragma once
#ifndef _dvrk_utilities_dvrk_topics_version_h
#define _dvrk_utilities_dvrk_topics_version_h

#include <cisstCommon/cmnDataFunctions.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#if CISST_HAS_JSON
#include <cisstCommon/cmnDataFunctionsJSON.h>
#endif // CISST_HAS_JSON

/* source line: 1 */
/* source line: 1 */

// mts-proxy set to true
#include <cisstCommon/cmnClassServices.h>
#include <cisstCommon/cmnClassRegisterMacros.h>
#include <cisstMultiTask/mtsGenericObjectProxy.h>


/* source line: 1 */
/* source line: 1 */
class  dvrk_topics_version
{
 /* default constructors and destructors. */
 public:
    dvrk_topics_version(void);
    dvrk_topics_version(const dvrk_topics_version & other);
    ~dvrk_topics_version();

/* source line: 3 */
public:
    enum version {v1_3_0, v1_4_0 };
    static std::string versionToString(const version & value) throw (std::runtime_error);
    static version versionFromString(const std::string & value) throw (std::runtime_error);
    static const std::vector<int> & versionVectorInt(void);
    static const std::vector<std::string> & versionVectorString(void);
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const dvrk_topics_version & source);
    void SerializeBinary(std::ostream & outputStream) const throw (std::runtime_error);
    void DeSerializeBinary(std::istream & inputStream, const cmnDataFormat & localFormat, const cmnDataFormat & remoteFormat) throw (std::runtime_error);
    void SerializeText(std::ostream & outputStream, const char delimiter = ',') const throw (std::runtime_error);
    std::string SerializeDescription(const char delimiter = ',', const std::string & userDescription = "") const;
    void DeSerializeText(std::istream & inputStream, const char delimiter = ',') throw (std::runtime_error);
    std::string HumanReadable(void) const;
    bool ScalarNumberIsFixed(void) const;
    size_t ScalarNumber(void) const;
    double Scalar(const size_t index) const throw (std::out_of_range);
    std::string ScalarDescription(const size_t index, const std::string & userDescription = "") const throw (std::out_of_range);
#if CISST_HAS_JSON
    void SerializeTextJSON(Json::Value & jsonValue) const;
    void DeSerializeTextJSON(const Json::Value & jsonValue) throw (std::runtime_error);
#endif // CISST_HAS_JSON

}; // dvrk_topics_version

// mts-proxy set to true
typedef mtsGenericObjectProxy<dvrk_topics_version> dvrk_topics_versionProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(dvrk_topics_versionProxy);

/* default functions */
void  cmnSerializeRaw(std::ostream & outputStream, const dvrk_topics_version & object);
void  cmnDeSerializeRaw(std::istream & inputStream, dvrk_topics_version & placeHolder);
/* data functions */
template <> class cmnData<dvrk_topics_version > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef dvrk_topics_version DataType;
    static void Copy(DataType & data, const DataType & source) {
        data.Copy(source);
    }
    static std::string SerializeDescription(const DataType & data, const char delimiter, const std::string & userDescription) {
        return data.SerializeDescription(delimiter, userDescription);
    }
    static void SerializeBinary(const DataType & data, std::ostream & outputStream) throw (std::runtime_error) {
        data.SerializeBinary(outputStream);
    }
    static void DeSerializeBinary(DataType & data, std::istream & inputStream, const cmnDataFormat & localFormat, const cmnDataFormat & remoteFormat) throw (std::runtime_error) {
        data.DeSerializeBinary(inputStream, localFormat, remoteFormat);
    }
    static void SerializeText(const DataType & data, std::ostream & outputStream, const char delimiter = ',') throw (std::runtime_error) {
        data.SerializeText(outputStream, delimiter);
    }
    static void DeSerializeText(DataType & data, std::istream & inputStream, const char delimiter = ',') throw (std::runtime_error) {
        data.DeSerializeText(inputStream, delimiter);
    }
    static std::string HumanReadable(const DataType & data) {
        return data.HumanReadable();
    }
    static bool ScalarNumberIsFixed(const DataType & data) {
        return data.ScalarNumberIsFixed();
    }
    static size_t ScalarNumber(const DataType & data) {
        return data.ScalarNumber();
    }
    static std::string ScalarDescription(const DataType & data, const size_t index, const std::string & userDescription = "") throw (std::out_of_range) {
        return data.ScalarDescription(index, userDescription);
    }
    static double Scalar(const DataType & data, const size_t index) throw (std::out_of_range) {
        return data.Scalar(index);
    }
};
inline std::ostream & operator << (std::ostream & outputStream, const dvrk_topics_version & data) {
    outputStream << cmnData<dvrk_topics_version >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void  cmnDataJSON<dvrk_topics_version >::SerializeText(const dvrk_topics_version & data, Json::Value & jsonValue);
template <> void  cmnDataJSON<dvrk_topics_version >::DeSerializeText(dvrk_topics_version & data, const Json::Value & jsonValue) throw (std::runtime_error);
#endif // CISST_HAS_JSON
std::string  cmnDataHumanReadable_dvrk_topics_version_version(const dvrk_topics_version::version & data);
CMN_DATA_SPECIALIZATION_FOR_ENUM_USER_HUMAN_READABLE(dvrk_topics_version::version, int, cmnDataHumanReadable_dvrk_topics_version_version);
#if CISST_HAS_JSON
  CMN_DECLARE_DATA_FUNCTIONS_JSON_FOR_ENUM(dvrk_topics_version::version);
#endif // CISST_HAS_JSON


#endif // _dvrk_utilities_dvrk_topics_version_h
