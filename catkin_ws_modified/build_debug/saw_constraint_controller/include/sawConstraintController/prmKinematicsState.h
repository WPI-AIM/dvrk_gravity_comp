// file automatically generated, do not modify
// cisst version: 1.0.8
// source file: /home/davincic2/catkin_ws/src/cisst-saw/sawConstraintController/components/code/prmKinematicsState.cdg

#pragma once
#ifndef _sawConstraintController_prmKinematicsState_h
#define _sawConstraintController_prmKinematicsState_h

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

#include <sawConstraintController/prmJointState.h>
#include <cisstVector/vctDynamicMatrixTypes.h>
// Always include last!
#include <sawConstraintController/sawConstraintControllerExport.h>

/* source line: 7 */
class CISST_EXPORT prmKinematicsState
{
 /* default constructors and destructors. */
 public:
    prmKinematicsState(void);
    prmKinematicsState(const prmKinematicsState & other);
    virtual ~prmKinematicsState();

/* source line: 13 */
 public:
    vctFrm3 Frame; // Frame
/* source line: 20 */
 public:
    vct3 CartesianVelocity; // CartesianVelocity
/* source line: 27 */
 public:
    vct3 AngularVelocity; // AngularVelocity
/* source line: 34 */
 public:
    vctDoubleMat Jacobian; // Jacobian
/* source line: 41 */
 public:
    vctDoubleMat InverseJacobian; // InverseJacobian
/* source line: 48 */
 public:
    int UserCount; // UserCount
/* source line: 55 */
 public:
    std::string Name; // Name
/* source line: 62 */
 public:
    bool NeedsBase; // NeedsBase
/* source line: 69 */
 public:
    prmJointState* JointState; // JointState
/* source line: 77 */


        //! This method looks up a base kinematics object for those with an offset, and nothing for others
            /*! LookupKinematics
            @param k map of kinematics names to kinematics objects
            */
            virtual void LookupKinematics(const std::map<std::string,prmKinematicsState *> &){}

            /*! Constructor
            */
            prmKinematicsState(const std::string & n, prmJointState * js);

            //! Updates the kinematics information using the pointer to a joint state.
            /*! Update
            */
            virtual void Update(){};
        /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const prmKinematicsState & source);
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

}; // prmKinematicsState

// mts-proxy set to true
typedef mtsGenericObjectProxy<prmKinematicsState> prmKinematicsStateProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(prmKinematicsStateProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const prmKinematicsState & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, prmKinematicsState & placeHolder);
/* data functions */
template <> class cmnData<prmKinematicsState > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef prmKinematicsState DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const prmKinematicsState & data) {
    outputStream << cmnData<prmKinematicsState >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<prmKinematicsState >::SerializeText(const prmKinematicsState & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<prmKinematicsState >::DeSerializeText(prmKinematicsState & data, const Json::Value & jsonValue) throw (std::runtime_error);
#endif // CISST_HAS_JSON



#endif // _sawConstraintController_prmKinematicsState_h
