// file automatically generated, do not modify
// cisst version: 1.0.8
// source file: /home/davincic2/catkin_ws/src/cisst-saw/sawConstraintController/components/code/mtsVFDataBase.cdg

#pragma once
#ifndef _sawConstraintController_mtsVFDataBase_h
#define _sawConstraintController_mtsVFDataBase_h

#include <cisstCommon/cmnDataFunctions.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#if CISST_HAS_JSON
#include <cisstCommon/cmnDataFunctionsJSON.h>
#endif // CISST_HAS_JSON

/* source line: 1 */

/* source line: 7 */

// mts-proxy set to true
#include <cisstCommon/cmnClassServices.h>
#include <cisstCommon/cmnClassRegisterMacros.h>
#include <cisstMultiTask/mtsGenericObjectProxy.h>


/* source line: 1 */
/* source line: 1 */

#include <cisstVector/vctDynamicVectorTypes.h>
#include <cisstVector/vctDynamicMatrixTypes.h>
// Always include last!
#include <sawConstraintController/sawConstraintControllerExport.h>

/* source line: 7 */
class CISST_EXPORT mtsVFDataBase
{
 /* default constructors and destructors. */
 public:
    mtsVFDataBase(void);
    mtsVFDataBase(const mtsVFDataBase & other);
    ~mtsVFDataBase();

/* source line: 12 */
 public:
    std::string Name; // Name
/* source line: 19 */
 public:
    double Importance; // Importance
/* source line: 27 */
 public:
    bool Active; // Active
/* source line: 35 */
 public:
    std::vector<std::string> KinNames; // KinNames
/* source line: 42 */
 public:
    std::vector<std::string> SensorNames; // SensorNames
/* source line: 49 */
 public:
    vctDynamicVector<double> SlackLimits; // SlackLimits
/* source line: 56 */
 public:
    vctDynamicVector<double> SlackCosts; // SlackCosts
/* source line: 63 */
 public:
    size_t NumSlacks; // NumSlacks
/* source line: 72 */
 public:
    vctDynamicVector<size_t> DOFSelections; // DOFSelections
/* source line: 79 */
 public:
    size_t ObjectiveRows; // ObjectiveRows
/* source line: 88 */
 public:
    size_t IneqConstraintRows; // IneqConstraintRows
/* source line: 97 */
 public:
    size_t EqConstraintRows; // EqConstraintRows
/* source line: 106 */
 public:
    vctDynamicMatrix<double> ObjectiveMatrix; // ObjectiveMatrix
/* source line: 113 */
 public:
    vctDynamicVector<double> ObjectiveVector; // ObjectiveVector
/* source line: 120 */
 public:
    vctDynamicMatrix<double> IneqConstraintMatrix; // IneqConstraintMatrix
/* source line: 127 */
 public:
    vctDynamicVector<double> IneqConstraintVector; // IneqConstraintVector
/* source line: 134 */
 public:
    vctDynamicMatrix<double> EqConstraintMatrix; // EqConstraintMatrix
/* source line: 141 */
 public:
    vctDynamicVector<double> EqConstraintVector; // EqConstraintVector
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const mtsVFDataBase & source);
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

}; // mtsVFDataBase

// mts-proxy set to true
typedef mtsGenericObjectProxy<mtsVFDataBase> mtsVFDataBaseProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(mtsVFDataBaseProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const mtsVFDataBase & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, mtsVFDataBase & placeHolder);
/* data functions */
template <> class cmnData<mtsVFDataBase > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef mtsVFDataBase DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const mtsVFDataBase & data) {
    outputStream << cmnData<mtsVFDataBase >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<mtsVFDataBase >::SerializeText(const mtsVFDataBase & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<mtsVFDataBase >::DeSerializeText(mtsVFDataBase & data, const Json::Value & jsonValue) throw (std::runtime_error);
#endif // CISST_HAS_JSON


#endif // _sawConstraintController_mtsVFDataBase_h
