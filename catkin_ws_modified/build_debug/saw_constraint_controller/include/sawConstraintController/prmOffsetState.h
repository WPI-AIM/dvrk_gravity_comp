// file automatically generated, do not modify
// cisst version: 1.0.8
// source file: /home/davincic2/catkin_ws/src/cisst-saw/sawConstraintController/components/code/prmOffsetState.cdg

#pragma once
#ifndef _sawConstraintController_prmOffsetState_h
#define _sawConstraintController_prmOffsetState_h

#include <cisstCommon/cmnDataFunctions.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#if CISST_HAS_JSON
#include <cisstCommon/cmnDataFunctionsJSON.h>
#endif // CISST_HAS_JSON

/* source line: 1 */

/* source line: 5 */

// mts-proxy set to true
#include <cisstCommon/cmnClassServices.h>
#include <cisstCommon/cmnClassRegisterMacros.h>
#include <cisstMultiTask/mtsGenericObjectProxy.h>



/* source line: 1 */
/* source line: 1 */

#include <sawConstraintController/prmSensorState.h>
#include <sawConstraintController/prmKinematicsOffsetState.h>

/* source line: 5 */
class  prmOffsetState: public prmSensorState
{
 /* default constructors and destructors. */
 public:
    prmOffsetState(void);
    prmOffsetState(const prmOffsetState & other);
    ~prmOffsetState();

/* source line: 12 */
 protected:
    std::string mbaseName; // baseName
 public:
    /* accessors is set to: all */
    void GetbaseName(std::string & placeHolder) const;
    void SetbaseName(const std::string & newValue);
    /* accessors is set to: all */
    const std::string & baseName(void) const;
    std::string & baseName(void);
/* source line: 18 */
 protected:
    prmSensorState* mbaseSensor; // baseSensor
/* source line: 27 */
 protected:
    vctFrm3 moffsetFrame; // offsetFrame
 public:
    /* accessors is set to: all */
    void GetoffsetFrame(vctFrm3 & placeHolder) const;
    void SetoffsetFrame(const vctFrm3 & newValue);
    /* accessors is set to: all */
    const vctFrm3 & offsetFrame(void) const;
    vctFrm3 & offsetFrame(void);
/* source line: 33 */

	/*! Constructor
	*/ 
    prmOffsetState(const std::string & n, const std::string & bn, const vctFrm3 & of);

	//! Finds the base sensor object by name and assigns it to the base sensor pointer
	/*! LookupSensor
	@param s map of names to sensors
	*/
    void LookupSensor(const std::map<std::string,prmSensorState *> & s);

	//! Updates the values vector by using the base sensor's newest values
	/*! Updates
	*/
    virtual void Update(){}
        /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const prmOffsetState & source);
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

}; // prmOffsetState

// mts-proxy set to true
typedef mtsGenericObjectProxy<prmOffsetState> prmOffsetStateProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(prmOffsetStateProxy);

/* default functions */
void  cmnSerializeRaw(std::ostream & outputStream, const prmOffsetState & object);
void  cmnDeSerializeRaw(std::istream & inputStream, prmOffsetState & placeHolder);
/* data functions */
template <> class cmnData<prmOffsetState > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef prmOffsetState DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const prmOffsetState & data) {
    outputStream << cmnData<prmOffsetState >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void  cmnDataJSON<prmOffsetState >::SerializeText(const prmOffsetState & data, Json::Value & jsonValue);
template <> void  cmnDataJSON<prmOffsetState >::DeSerializeText(prmOffsetState & data, const Json::Value & jsonValue) throw (std::runtime_error);
#endif // CISST_HAS_JSON



#endif // _sawConstraintController_prmOffsetState_h
