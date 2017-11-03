// file automatically generated, do not modify
// cisst version: 1.0.8
// source file: /home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/code/../mtsExecutionResult.cdg

#pragma once
#ifndef _cisstMultiTask_mtsExecutionResult_h
#define _cisstMultiTask_mtsExecutionResult_h

#include <cisstCommon/cmnDataFunctions.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#if CISST_HAS_JSON
#include <cisstCommon/cmnDataFunctionsJSON.h>
#endif // CISST_HAS_JSON

/* source line: 1 */

/* source line: 25 */

// mts-proxy set to declaration-only
#include <cisstCommon/cmnClassServices.h>
#include <cisstCommon/cmnClassRegisterMacros.h>
#include <cisstMultiTask/mtsGenericObjectProxy.h>


/* source line: 1 */
/* source line: 18 */

#include <cisstMultiTask/mtsForwardDeclarations.h>
#include <cisstMultiTask/mtsGenericObjectProxy.h>
// Always include last
#include <cisstMultiTask/mtsExport.h>

/* source line: 25 */
class CISST_EXPORT mtsExecutionResult
{
 /* default constructors and destructors. */
 public:
    mtsExecutionResult(void);
    mtsExecutionResult(const mtsExecutionResult & other);
    ~mtsExecutionResult();

/* source line: 32 */
public:
    enum Enum {UNDEFINED, COMMAND_SUCCEEDED, COMMAND_QUEUED, FUNCTION_NOT_BOUND, COMMAND_HAS_NO_MAILBOX, COMMAND_DISABLED, INTERFACE_COMMAND_MAILBOX_FULL, COMMAND_ARGUMENT_QUEUE_FULL, INVALID_INPUT_TYPE, METHOD_OR_FUNCTION_FAILED, NETWORK_ERROR, INVALID_COMMAND_ID, ARGUMENT_DYNAMIC_CREATION_FAILED, SERIALIZATION_ERROR, DESERIALIZATION_ERROR, NO_FINISHED_EVENT };
    static std::string EnumToString(const Enum & value) throw (std::runtime_error);
    static Enum EnumFromString(const std::string & value) throw (std::runtime_error);
    static const std::vector<int> & EnumVectorInt(void);
    static const std::vector<std::string> & EnumVectorString(void);
/* source line: 100 */
 protected:
    mtsExecutionResult::Enum mValue; // Value
 public:
    /* accessors is set to: all */
    void GetValue(mtsExecutionResult::Enum & placeHolder) const;
    void SetValue(const mtsExecutionResult::Enum & newValue);
    /* accessors is set to: all */
    const mtsExecutionResult::Enum & Value(void) const;
    mtsExecutionResult::Enum & Value(void);
    typedef mtsExecutionResult ThisType;
/* source line: 110 */

        /*! Assignment operator. */
        const ThisType & operator = (const Enum & value);

        /*! Equality operators */
        bool operator == (const ThisType & state) const;
        bool operator != (const ThisType & state) const;

        /*! Get a human readable description for any state (for backward compatibility) */
        static const std::string ToString(const Enum & value);

        /*! Getter of current state (for backward compatibility) */
        Enum GetResult(void) const { return Value(); }

        /*! Test if the result is considered OK */
        bool IsOK(void) const;

        /*! Downcast to bool to allow code such as if (!myFunction) {
          ... } */
        operator bool (void) const;
    
 public:
    /* ctor-all-member is set to: true */
    mtsExecutionResult(const mtsExecutionResult::Enum & newValue);
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const mtsExecutionResult & source);
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

}; // mtsExecutionResult

// mts-proxy set to declaration-only
typedef mtsGenericObjectProxy<mtsExecutionResult> mtsExecutionResultProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(mtsExecutionResultProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const mtsExecutionResult & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, mtsExecutionResult & placeHolder);
/* data functions */
template <> class cmnData<mtsExecutionResult > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef mtsExecutionResult DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const mtsExecutionResult & data) {
    outputStream << cmnData<mtsExecutionResult >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<mtsExecutionResult >::SerializeText(const mtsExecutionResult & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<mtsExecutionResult >::DeSerializeText(mtsExecutionResult & data, const Json::Value & jsonValue) throw (std::runtime_error);
#endif // CISST_HAS_JSON
std::string CISST_EXPORT cmnDataHumanReadable_mtsExecutionResult_Enum(const mtsExecutionResult::Enum & data);
CMN_DATA_SPECIALIZATION_FOR_ENUM_USER_HUMAN_READABLE(mtsExecutionResult::Enum, int, cmnDataHumanReadable_mtsExecutionResult_Enum);
#if CISST_HAS_JSON
  CMN_DECLARE_DATA_FUNCTIONS_JSON_FOR_ENUM(mtsExecutionResult::Enum);
#endif // CISST_HAS_JSON


#endif // _cisstMultiTask_mtsExecutionResult_h
