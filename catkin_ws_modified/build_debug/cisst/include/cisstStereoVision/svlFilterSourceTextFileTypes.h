// file automatically generated, do not modify
// cisst version: 1.0.8
// source file: /home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstStereoVision/code/../svlFilterSourceTextFileTypes.cdg

#pragma once
#ifndef _cisstStereoVision_svlFilterSourceTextFileTypes_h
#define _cisstStereoVision_svlFilterSourceTextFileTypes_h

#include <cisstCommon/cmnDataFunctions.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#if CISST_HAS_JSON
#include <cisstCommon/cmnDataFunctionsJSON.h>
#endif // CISST_HAS_JSON

/* source line: 1 */

/* source line: 15 */

// mts-proxy set to true
#include <cisstCommon/cmnClassServices.h>
#include <cisstCommon/cmnClassRegisterMacros.h>
#include <cisstMultiTask/mtsGenericObjectProxy.h>




/* source line: 1 */
/* source line: 4 */


#include <cisstVector/vctFixedSizeMatrixTypes.h>
#include <cisstVector/vctDataFunctionsFixedSizeMatrix.h>
#include <cisstMultiTask/mtsGenericObjectProxy.h>

// Always include last
#include <cisstStereoVision/svlExport.h>

/* source line: 15 */
namespace svlFilterSourceTextFileTypes {
class CISST_EXPORT FileInfo
{
 /* default constructors and destructors. */
 public:
    FileInfo(void);
    FileInfo(const FileInfo & other);
    ~FileInfo();

/* source line: 21 */
 public:
    std::string filepath; // File path
/* source line: 27 */
 public:
    int timestamp_column; // Timestamp column
/* source line: 34 */
 public:
    double timestamp_unit; // Timestamp unit
/* source line: 41 */
 public:
    double timestamp_overflow_value; // Timestamp overflow value
/* source line: 48 */

        void Assign(const std::string & _filepath, const int & _timestamp_column, const double & _timestamp_unit, const double & _timestamp_overflow_value);
    
 public:
    /* ctor-all-member is set to: true */
    FileInfo(const std::string & newfilepath, const int & newtimestamp_column, const double & newtimestamp_unit, const double & newtimestamp_overflow_value);
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const FileInfo & source);
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

}; // FileInfo
}; // end of namespace svlFilterSourceTextFileTypes

// mts-proxy set to true
typedef mtsGenericObjectProxy<svlFilterSourceTextFileTypes::FileInfo> svlFilterSourceTextFileTypes_FileInfoProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(svlFilterSourceTextFileTypes_FileInfoProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const svlFilterSourceTextFileTypes::FileInfo & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, svlFilterSourceTextFileTypes::FileInfo & placeHolder);
/* data functions */
template <> class cmnData<svlFilterSourceTextFileTypes::FileInfo > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef svlFilterSourceTextFileTypes::FileInfo DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const svlFilterSourceTextFileTypes::FileInfo & data) {
    outputStream << cmnData<svlFilterSourceTextFileTypes::FileInfo >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<svlFilterSourceTextFileTypes::FileInfo >::SerializeText(const svlFilterSourceTextFileTypes::FileInfo & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<svlFilterSourceTextFileTypes::FileInfo >::DeSerializeText(svlFilterSourceTextFileTypes::FileInfo & data, const Json::Value & jsonValue) throw (std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 53 */

typedef mtsGenericObjectProxy<svlFilterSourceTextFileTypes::FileInfo> svlFilterSourceTextFileInfoProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(svlFilterSourceTextFileInfoProxy);



#endif // _cisstStereoVision_svlFilterSourceTextFileTypes_h
