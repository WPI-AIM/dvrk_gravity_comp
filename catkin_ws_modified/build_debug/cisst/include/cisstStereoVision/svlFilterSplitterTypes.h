// file automatically generated, do not modify
// cisst version: 1.0.8
// source file: /home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstStereoVision/code/../svlFilterSplitterTypes.cdg

#pragma once
#ifndef _cisstStereoVision_svlFilterSplitterTypes_h
#define _cisstStereoVision_svlFilterSplitterTypes_h

#include <cisstCommon/cmnDataFunctions.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#if CISST_HAS_JSON
#include <cisstCommon/cmnDataFunctionsJSON.h>
#endif // CISST_HAS_JSON

/* source line: 1 */

/* source line: 14 */

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

/* source line: 14 */
namespace svlFilterSplitterTypes {
class CISST_EXPORT OutputInfo
{
 /* default constructors and destructors. */
 public:
    OutputInfo(void);
    OutputInfo(const OutputInfo & other);
    ~OutputInfo();

/* source line: 19 */
 public:
    std::string name; // Output name
/* source line: 25 */
 public:
    unsigned int threadcount; // Thread count
/* source line: 31 */
 public:
    unsigned int buffersize; // Buffer size
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const OutputInfo & source);
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

}; // OutputInfo
}; // end of namespace svlFilterSplitterTypes

// mts-proxy set to true
typedef mtsGenericObjectProxy<svlFilterSplitterTypes::OutputInfo> svlFilterSplitterTypes_OutputInfoProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(svlFilterSplitterTypes_OutputInfoProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const svlFilterSplitterTypes::OutputInfo & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, svlFilterSplitterTypes::OutputInfo & placeHolder);
/* data functions */
template <> class cmnData<svlFilterSplitterTypes::OutputInfo > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef svlFilterSplitterTypes::OutputInfo DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const svlFilterSplitterTypes::OutputInfo & data) {
    outputStream << cmnData<svlFilterSplitterTypes::OutputInfo >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<svlFilterSplitterTypes::OutputInfo >::SerializeText(const svlFilterSplitterTypes::OutputInfo & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<svlFilterSplitterTypes::OutputInfo >::DeSerializeText(svlFilterSplitterTypes::OutputInfo & data, const Json::Value & jsonValue) throw (std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 39 */

typedef mtsGenericObjectProxy<svlFilterSplitterTypes::OutputInfo> svlFilterSplitterOutputInfoProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(svlFilterSplitterOutputInfoProxy);


#endif // _cisstStereoVision_svlFilterSplitterTypes_h
