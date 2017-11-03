// file automatically generated, do not modify
// cisst version: 1.0.8
// source file: /home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstParameterTypes/code/../prmActuatorJointCoupling.cdg

#pragma once
#ifndef _cisstParameterTypes_prmActuatorJointCoupling_h
#define _cisstParameterTypes_prmActuatorJointCoupling_h

#include <cisstCommon/cmnDataFunctions.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#if CISST_HAS_JSON
#include <cisstCommon/cmnDataFunctionsJSON.h>
#endif // CISST_HAS_JSON

/* source line: 1 */

/* source line: 10 */

// mts-proxy set to true
#include <cisstCommon/cmnClassServices.h>
#include <cisstCommon/cmnClassRegisterMacros.h>
#include <cisstMultiTask/mtsGenericObjectProxy.h>


/* source line: 1 */
/* source line: 4 */

#include <cisstVector/vctDynamicMatrixTypes.h>
// Always include last
#include <cisstParameterTypes/prmExport.h>

/* source line: 10 */
class CISST_EXPORT prmActuatorJointCoupling
{
 /* default constructors and destructors. */
 public:
    prmActuatorJointCoupling(void);
    prmActuatorJointCoupling(const prmActuatorJointCoupling & other);
    ~prmActuatorJointCoupling();

/* source line: 14 */
 protected:
    vctDoubleMat mActuatorToJointPosition; // ActuatorToJointPosition
 public:
    /* accessors is set to: all */
    void GetActuatorToJointPosition(vctDoubleMat & placeHolder) const;
    void SetActuatorToJointPosition(const vctDoubleMat & newValue);
    /* accessors is set to: all */
    const vctDoubleMat & ActuatorToJointPosition(void) const;
    vctDoubleMat & ActuatorToJointPosition(void);
/* source line: 19 */
 protected:
    vctDoubleMat mJointToActuatorPosition; // JointToActuatorPosition
 public:
    /* accessors is set to: all */
    void GetJointToActuatorPosition(vctDoubleMat & placeHolder) const;
    void SetJointToActuatorPosition(const vctDoubleMat & newValue);
    /* accessors is set to: all */
    const vctDoubleMat & JointToActuatorPosition(void) const;
    vctDoubleMat & JointToActuatorPosition(void);
/* source line: 24 */
 protected:
    vctDoubleMat mActuatorToJointEffort; // ActuatorToJointEffort
 public:
    /* accessors is set to: all */
    void GetActuatorToJointEffort(vctDoubleMat & placeHolder) const;
    void SetActuatorToJointEffort(const vctDoubleMat & newValue);
    /* accessors is set to: all */
    const vctDoubleMat & ActuatorToJointEffort(void) const;
    vctDoubleMat & ActuatorToJointEffort(void);
/* source line: 29 */
 protected:
    vctDoubleMat mJointToActuatorEffort; // JointToActuatorEffort
 public:
    /* accessors is set to: all */
    void GetJointToActuatorEffort(vctDoubleMat & placeHolder) const;
    void SetJointToActuatorEffort(const vctDoubleMat & newValue);
    /* accessors is set to: all */
    const vctDoubleMat & JointToActuatorEffort(void) const;
    vctDoubleMat & JointToActuatorEffort(void);
/* source line: 34 */

    public:
        inline const prmActuatorJointCoupling & Assign(const prmActuatorJointCoupling & other) {
            ActuatorToJointPosition().ForceAssign(other.ActuatorToJointPosition());
            JointToActuatorPosition().ForceAssign(other.JointToActuatorPosition());
            ActuatorToJointEffort().ForceAssign(other.ActuatorToJointEffort());
            JointToActuatorEffort().ForceAssign(other.JointToActuatorEffort());
            return *this;
        }
        inline const prmActuatorJointCoupling & Assign(const vctDoubleMat & other) {
            ActuatorToJointPosition().ForceAssign(other);
            JointToActuatorPosition().ForceAssign(other);
            ActuatorToJointEffort().ForceAssign(other);
            JointToActuatorEffort().ForceAssign(other);
            return *this;
        }
        inline bool Equal(const prmActuatorJointCoupling & other) {
            return (ActuatorToJointPosition().Equal(other.ActuatorToJointPosition()) &&
                    JointToActuatorPosition().Equal(other.JointToActuatorPosition()) &&
                    ActuatorToJointEffort().Equal(other.ActuatorToJointEffort()) &&
                    JointToActuatorEffort().Equal(other.JointToActuatorEffort()));
        }
        /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const prmActuatorJointCoupling & source);
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

}; // prmActuatorJointCoupling

// mts-proxy set to true
typedef mtsGenericObjectProxy<prmActuatorJointCoupling> prmActuatorJointCouplingProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(prmActuatorJointCouplingProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const prmActuatorJointCoupling & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, prmActuatorJointCoupling & placeHolder);
/* data functions */
template <> class cmnData<prmActuatorJointCoupling > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef prmActuatorJointCoupling DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const prmActuatorJointCoupling & data) {
    outputStream << cmnData<prmActuatorJointCoupling >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<prmActuatorJointCoupling >::SerializeText(const prmActuatorJointCoupling & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<prmActuatorJointCoupling >::DeSerializeText(prmActuatorJointCoupling & data, const Json::Value & jsonValue) throw (std::runtime_error);
#endif // CISST_HAS_JSON


#endif // _cisstParameterTypes_prmActuatorJointCoupling_h
