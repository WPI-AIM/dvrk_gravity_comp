// file automatically generated, do not modify
// cisst version: 1.0.8
// source file: /home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/code/../mtsComponentState.cdg

#pragma once
#ifndef _cisstMultiTask_mtsComponentState_h
#define _cisstMultiTask_mtsComponentState_h

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
class CISST_EXPORT mtsComponentState
{
 /* default constructors and destructors. */
 public:
    mtsComponentState(void);
    mtsComponentState(const mtsComponentState & other);
    ~mtsComponentState();

/* source line: 26 */

/*! The possible component states:
  CONSTRUCTED  -- Initial state set by mtsTask constructor.
  INITIALIZING -- Set by mtsComponent::Create.  The task stays in this state until the
                  thread calls mtsTask::RunInternal, which calls mtsTask::StartupInternal
                  and the user-supplied mtsTask::Startup. If a new thread is created,
                  the call to mtsTask::RunInternal happens some time after the call
                  to mtsTask::Create.
  READY        -- Set by mtsTask::StartupInternal. This means that the task is ready
                  to be used (i.e., all interfaces have been initialized). Also,
                  a task can return to the READY state (from the ACTIVE state) in
                  response to a call to mtsTask::Suspend.
  ACTIVE       -- Set by mtsTask::Start.  This is the normal running state, where
                  the task is calling the user-supplied mtsTask::Run method.
  FINISHING    -- Set by mtsTask::Kill. If the mtsTask::Run method is currently
                  executing, it will finish, but no further calls will be made.
                  The task will then call mtsTask::CleanupInternal, which calls
                  the user-supplied mtsTask::Cleanup. The state will then be set
                  to FINISHED.
  FINISHED     -- The task has finished.
*/
    /* source line: 54 */
public:
    enum Enum {CONSTRUCTED, INITIALIZING, READY, ACTIVE, FINISHING, FINISHED };
    static std::string EnumToString(const Enum & value) throw (std::runtime_error);
    static Enum EnumFromString(const std::string & value) throw (std::runtime_error);
    static const std::vector<int> & EnumVectorInt(void);
    static const std::vector<std::string> & EnumVectorString(void);
/* source line: 82 */
 protected:
    mtsComponentState::Enum mState; // State
 public:
    /* accessors is set to: all */
    void GetState(mtsComponentState::Enum & placeHolder) const;
    void SetState(const mtsComponentState::Enum & newValue);
    /* accessors is set to: all */
    const mtsComponentState::Enum & State(void) const;
    mtsComponentState::Enum & State(void);
    typedef mtsComponentState ThisType;
/* source line: 92 */

        /*! Assignment operator. */
        const ThisType & operator = (const Enum & value);

        /*! Equality operators */
        bool operator == (const ThisType & state) const;
        bool operator != (const ThisType & state) const;

        /*! Lesser or equal operators */
        bool operator < (const ThisType & state) const;
        bool operator <= (const ThisType & state) const;

        /*! Greater or equal operators */
        bool operator > (const ThisType & state) const;
        bool operator >= (const ThisType & state) const;
    
 public:
    /* ctor-all-member is set to: true */
    mtsComponentState(const mtsComponentState::Enum & newState);
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const mtsComponentState & source);
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

}; // mtsComponentState

// mts-proxy set to declaration-only
typedef mtsGenericObjectProxy<mtsComponentState> mtsComponentStateProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(mtsComponentStateProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const mtsComponentState & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, mtsComponentState & placeHolder);
/* data functions */
template <> class cmnData<mtsComponentState > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef mtsComponentState DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const mtsComponentState & data) {
    outputStream << cmnData<mtsComponentState >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<mtsComponentState >::SerializeText(const mtsComponentState & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<mtsComponentState >::DeSerializeText(mtsComponentState & data, const Json::Value & jsonValue) throw (std::runtime_error);
#endif // CISST_HAS_JSON
std::string CISST_EXPORT cmnDataHumanReadable_mtsComponentState_Enum(const mtsComponentState::Enum & data);
CMN_DATA_SPECIALIZATION_FOR_ENUM_USER_HUMAN_READABLE(mtsComponentState::Enum, int, cmnDataHumanReadable_mtsComponentState_Enum);
#if CISST_HAS_JSON
  CMN_DECLARE_DATA_FUNCTIONS_JSON_FOR_ENUM(mtsComponentState::Enum);
#endif // CISST_HAS_JSON


#endif // _cisstMultiTask_mtsComponentState_h
