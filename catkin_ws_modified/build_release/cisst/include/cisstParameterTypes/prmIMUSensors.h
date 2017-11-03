// file automatically generated, do not modify
// cisst version: 1.0.8
// source file: /home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstParameterTypes/code/../prmIMUSensors.cdg

#pragma once
#ifndef _cisstParameterTypes_prmIMUSensors_h
#define _cisstParameterTypes_prmIMUSensors_h

#include <cisstCommon/cmnDataFunctions.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#if CISST_HAS_JSON
#include <cisstCommon/cmnDataFunctionsJSON.h>
#endif // CISST_HAS_JSON

/* source line: 1 */

/* source line: 17 */

// mts-proxy set to true
#include <cisstCommon/cmnClassServices.h>
#include <cisstCommon/cmnClassRegisterMacros.h>
#include <cisstMultiTask/mtsGenericObjectProxy.h>



/* source line: 1 */
/* source line: 9 */

#include <cisstVector/vctFixedSizeVectorTypes.h>
#include <cisstMultiTask/mtsGenericObject.h>

// Always include last
#include <cisstParameterTypes/prmExport.h>

/* source line: 17 */
class CISST_EXPORT prmIMUSensors: public mtsGenericObject
{
 /* default constructors and destructors. */
 public:
    prmIMUSensors(void);
    prmIMUSensors(const prmIMUSensors & other);
    ~prmIMUSensors();

/* source line: 27 */
 protected:
    vct3 mAccel; // Accelerometer, units m/s*s
 public:
    /* accessors is set to: all */
    void GetAccel(vct3 & placeHolder) const;
    void SetAccel(const vct3 & newValue);
    /* accessors is set to: all */
    const vct3 & Accel(void) const;
    vct3 & Accel(void);
/* source line: 33 */
 protected:
    vct3 mGyro; // Gyroscope, units rad/s
 public:
    /* accessors is set to: all */
    void GetGyro(vct3 & placeHolder) const;
    void SetGyro(const vct3 & newValue);
    /* accessors is set to: all */
    const vct3 & Gyro(void) const;
    vct3 & Gyro(void);
/* source line: 39 */
 protected:
    vct3 mMag; // Magnetometer, units G (Gauss)
 public:
    /* accessors is set to: all */
    void GetMag(vct3 & placeHolder) const;
    void SetMag(const vct3 & newValue);
    /* accessors is set to: all */
    const vct3 & Mag(void) const;
    vct3 & Mag(void);
/* source line: 45 */
 protected:
    double mTemp; // Temperature, units deg-C
 public:
    /* accessors is set to: all */
    void GetTemp(double & placeHolder) const;
    void SetTemp(const double & newValue);
    /* accessors is set to: all */
    const double & Temp(void) const;
    double & Temp(void);
/* source line: 51 */
 protected:
    double mPressure; // Barometric pressure, units kPa (kilo-Pascal)
 public:
    /* accessors is set to: all */
    void GetPressure(double & placeHolder) const;
    void SetPressure(const double & newValue);
    /* accessors is set to: all */
    const double & Pressure(void) const;
    double & Pressure(void);
/* source line: 57 */

    private:
        CMN_DECLARE_SERVICES(CMN_DYNAMIC_CREATION, CMN_LOG_ALLOW_DEFAULT);
        /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const prmIMUSensors & source);
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

}; // prmIMUSensors

// mts-proxy set to true
typedef mtsGenericObjectProxy<prmIMUSensors> prmIMUSensorsProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(prmIMUSensorsProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const prmIMUSensors & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, prmIMUSensors & placeHolder);
/* data functions */
template <> class cmnData<prmIMUSensors > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef prmIMUSensors DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const prmIMUSensors & data) {
    outputStream << cmnData<prmIMUSensors >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<prmIMUSensors >::SerializeText(const prmIMUSensors & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<prmIMUSensors >::DeSerializeText(prmIMUSensors & data, const Json::Value & jsonValue) throw (std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 63 */

CMN_DECLARE_SERVICES_INSTANTIATION(prmIMUSensors);


#endif // _cisstParameterTypes_prmIMUSensors_h
