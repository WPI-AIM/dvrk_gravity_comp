// file automatically generated, do not modify
// cisst version: 1.0.8
// source file: /home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstParameterTypes/code/../prmPositionCartesianGet.cdg

#pragma once
#ifndef _cisstParameterTypes_prmPositionCartesianGet_h
#define _cisstParameterTypes_prmPositionCartesianGet_h

#include <cisstCommon/cmnDataFunctions.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#if CISST_HAS_JSON
#include <cisstCommon/cmnDataFunctionsJSON.h>
#endif // CISST_HAS_JSON

/* source line: 1 */

/* source line: 19 */

// mts-proxy set to true
#include <cisstCommon/cmnClassServices.h>
#include <cisstCommon/cmnClassRegisterMacros.h>
#include <cisstMultiTask/mtsGenericObjectProxy.h>



/* source line: 1 */
/* source line: 9 */

#include <cisstVector/vctTransformationTypes.h>
#include <cisstParameterTypes/prmTransformationBase.h>
#include <cisstParameterTypes/prmTransformationManager.h>

// Always include last
#include <cisstParameterTypes/prmExport.h>

/* source line: 19 */
class CISST_EXPORT prmPositionCartesianGet: public mtsGenericObject
{
 /* default constructors and destructors. */
 public:
    prmPositionCartesianGet(void);
    prmPositionCartesianGet(const prmPositionCartesianGet & other);
    ~prmPositionCartesianGet();

/* source line: 44 */
 protected:
    prmTransformationBasePtr mMovingFrame; // Pointer to moving frame, unused
 public:
    /* accessors is set to: all */
    void GetMovingFrame(prmTransformationBasePtr & placeHolder) const;
    void SetMovingFrame(const prmTransformationBasePtr & newValue);
    /* accessors is set to: all */
    const prmTransformationBasePtr & MovingFrame(void) const;
    prmTransformationBasePtr & MovingFrame(void);
/* source line: 53 */
 protected:
    prmTransformationBasePtr mReferenceFrame; // Pointer to reference frame, unused
 public:
    /* accessors is set to: all */
    void GetReferenceFrame(prmTransformationBasePtr & placeHolder) const;
    void SetReferenceFrame(const prmTransformationBasePtr & newValue);
    /* accessors is set to: all */
    const prmTransformationBasePtr & ReferenceFrame(void) const;
    prmTransformationBasePtr & ReferenceFrame(void);
/* source line: 62 */
 protected:
    vctFrm3 mPosition; // Desired position
 public:
    /* accessors is set to: all */
    void GetPosition(vctFrm3 & placeHolder) const;
    void SetPosition(const vctFrm3 & newValue);
    /* accessors is set to: all */
    const vctFrm3 & Position(void) const;
    vctFrm3 & Position(void);
/* source line: 73 */

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
    void Copy(const prmPositionCartesianGet & source);
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

}; // prmPositionCartesianGet

// mts-proxy set to true
typedef mtsGenericObjectProxy<prmPositionCartesianGet> prmPositionCartesianGetProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(prmPositionCartesianGetProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const prmPositionCartesianGet & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, prmPositionCartesianGet & placeHolder);
/* data functions */
template <> class cmnData<prmPositionCartesianGet > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef prmPositionCartesianGet DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const prmPositionCartesianGet & data) {
    outputStream << cmnData<prmPositionCartesianGet >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<prmPositionCartesianGet >::SerializeText(const prmPositionCartesianGet & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<prmPositionCartesianGet >::DeSerializeText(prmPositionCartesianGet & data, const Json::Value & jsonValue) throw (std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 80 */

CMN_DECLARE_SERVICES_INSTANTIATION(prmPositionCartesianGet);


#endif // _cisstParameterTypes_prmPositionCartesianGet_h
