// file automatically generated, do not modify
// cisst version: 1.0.8
// source file: /home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstParameterTypes/code/../prmPositionJointGet.cdg

#pragma once
#ifndef _cisstParameterTypes_prmPositionJointGet_h
#define _cisstParameterTypes_prmPositionJointGet_h

#include <cisstCommon/cmnDataFunctions.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#if CISST_HAS_JSON
#include <cisstCommon/cmnDataFunctionsJSON.h>
#endif // CISST_HAS_JSON

/* source line: 1 */

/* source line: 11 */

// mts-proxy set to true
#include <cisstCommon/cmnClassServices.h>
#include <cisstCommon/cmnClassRegisterMacros.h>
#include <cisstMultiTask/mtsGenericObjectProxy.h>



/* source line: 1 */
/* source line: 4 */

#include <cisstVector/vctDynamicVectorTypes.h>
#include <cisstMultiTask/mtsGenericObject.h>
// Always include last
#include <cisstParameterTypes/prmExport.h>

/* source line: 11 */
class CISST_EXPORT prmPositionJointGet: public mtsGenericObject
{
 /* default constructors and destructors. */
 public:
    prmPositionJointGet(void);
    prmPositionJointGet(const prmPositionJointGet & other);
    ~prmPositionJointGet();

/* source line: 21 */
 protected:
    vctDynamicVector<double> mPosition; // Desired position
 public:
    /* accessors is set to: all */
    void GetPosition(vctDynamicVector<double> & placeHolder) const;
    void SetPosition(const vctDynamicVector<double> & newValue);
    /* accessors is set to: all */
    const vctDynamicVector<double> & Position(void) const;
    vctDynamicVector<double> & Position(void);
/* source line: 27 */
 protected:
    vctDynamicVector<double> mTimestamps; // Timestamps
 public:
    /* accessors is set to: all */
    void GetTimestamps(vctDynamicVector<double> & placeHolder) const;
    void SetTimestamps(const vctDynamicVector<double> & newValue);
    /* accessors is set to: all */
    const vctDynamicVector<double> & Timestamps(void) const;
    vctDynamicVector<double> & Timestamps(void);
/* source line: 33 */

    public:
        inline prmPositionJointGet(size_t size) {
            this->SetSize(size);
        }

        inline void SetSize(size_t size) {
            this->mPosition.SetSize(size);
            this->mTimestamps.SetSize(size);
        }

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
    void Copy(const prmPositionJointGet & source);
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

}; // prmPositionJointGet

// mts-proxy set to true
typedef mtsGenericObjectProxy<prmPositionJointGet> prmPositionJointGetProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(prmPositionJointGetProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const prmPositionJointGet & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, prmPositionJointGet & placeHolder);
/* data functions */
template <> class cmnData<prmPositionJointGet > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef prmPositionJointGet DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const prmPositionJointGet & data) {
    outputStream << cmnData<prmPositionJointGet >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<prmPositionJointGet >::SerializeText(const prmPositionJointGet & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<prmPositionJointGet >::DeSerializeText(prmPositionJointGet & data, const Json::Value & jsonValue) throw (std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 50 */

CMN_DECLARE_SERVICES_INSTANTIATION(prmPositionJointGet);


#endif // _cisstParameterTypes_prmPositionJointGet_h
