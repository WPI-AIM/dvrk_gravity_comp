// file automatically generated, do not modify
// cisst version: 1.0.8
// source file: /home/davincic2/catkin_ws/src/cisst-saw/sawConstraintController/components/code/prmSensorState.cdg

#pragma once
#ifndef _sawConstraintController_prmSensorState_h
#define _sawConstraintController_prmSensorState_h

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
class CISST_EXPORT prmSensorState
{
 /* default constructors and destructors. */
 public:
    prmSensorState(void);
    prmSensorState(const prmSensorState & other);
    virtual ~prmSensorState();

/* source line: 13 */
 public:
    std::string Name; // Name
/* source line: 20 */
 public:
    vctDynamicVector<double> Values; // Values
/* source line: 27 */
 public:
    int UserCount; // UserCount
/* source line: 34 */
 public:
    bool NeedsBase; // NeedsBase
/* source line: 40 */


        /*! Constructor
        */
        prmSensorState(const std::string & n);

        //! Looks up the base sensor pointer if it is needed
        /*! LookupSensor
        @param s map of sensor names to sensor pointers
        */
        virtual void LookupSensor(const std::map<std::string,prmSensorState *> &){};
        /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const prmSensorState & source);
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

}; // prmSensorState

// mts-proxy set to true
typedef mtsGenericObjectProxy<prmSensorState> prmSensorStateProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(prmSensorStateProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const prmSensorState & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, prmSensorState & placeHolder);
/* data functions */
template <> class cmnData<prmSensorState > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef prmSensorState DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const prmSensorState & data) {
    outputStream << cmnData<prmSensorState >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<prmSensorState >::SerializeText(const prmSensorState & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<prmSensorState >::DeSerializeText(prmSensorState & data, const Json::Value & jsonValue) throw (std::runtime_error);
#endif // CISST_HAS_JSON



#endif // _sawConstraintController_prmSensorState_h
