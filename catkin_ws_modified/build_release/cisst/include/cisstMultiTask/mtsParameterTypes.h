// file automatically generated, do not modify
// cisst version: 1.0.8
// source file: /home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/code/../mtsParameterTypes.cdg

#pragma once
#ifndef _cisstMultiTask_mtsParameterTypes_h
#define _cisstMultiTask_mtsParameterTypes_h

#include <cisstCommon/cmnDataFunctions.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#if CISST_HAS_JSON
#include <cisstCommon/cmnDataFunctionsJSON.h>
#endif // CISST_HAS_JSON

/* source line: 1 */

/* source line: 10 */

// mts-proxy set to declaration-only
#include <cisstCommon/cmnClassServices.h>
#include <cisstCommon/cmnClassRegisterMacros.h>
#include <cisstMultiTask/mtsGenericObjectProxy.h>



/* source line: 49 */

// mts-proxy set to declaration-only
#include <cisstCommon/cmnClassServices.h>
#include <cisstCommon/cmnClassRegisterMacros.h>
#include <cisstMultiTask/mtsGenericObjectProxy.h>



/* source line: 77 */

// mts-proxy set to declaration-only
#include <cisstCommon/cmnClassServices.h>
#include <cisstCommon/cmnClassRegisterMacros.h>
#include <cisstMultiTask/mtsGenericObjectProxy.h>


/* source line: 105 */

// mts-proxy set to declaration-only
#include <cisstCommon/cmnClassServices.h>
#include <cisstCommon/cmnClassRegisterMacros.h>
#include <cisstMultiTask/mtsGenericObjectProxy.h>


/* source line: 128 */

// mts-proxy set to declaration-only
#include <cisstCommon/cmnClassServices.h>
#include <cisstCommon/cmnClassRegisterMacros.h>
#include <cisstMultiTask/mtsGenericObjectProxy.h>



/* source line: 167 */

// mts-proxy set to declaration-only
#include <cisstCommon/cmnClassServices.h>
#include <cisstCommon/cmnClassRegisterMacros.h>
#include <cisstMultiTask/mtsGenericObjectProxy.h>


/* source line: 212 */

// mts-proxy set to declaration-only
#include <cisstCommon/cmnClassServices.h>
#include <cisstCommon/cmnClassRegisterMacros.h>
#include <cisstMultiTask/mtsGenericObjectProxy.h>


/* source line: 235 */

// mts-proxy set to declaration-only
#include <cisstCommon/cmnClassServices.h>
#include <cisstCommon/cmnClassRegisterMacros.h>
#include <cisstMultiTask/mtsGenericObjectProxy.h>


/* source line: 253 */

// mts-proxy set to declaration-only
#include <cisstCommon/cmnClassServices.h>
#include <cisstCommon/cmnClassRegisterMacros.h>
#include <cisstMultiTask/mtsGenericObjectProxy.h>


/* source line: 1 */
/* source line: 4 */

#include <cisstMultiTask/mtsParameterTypesOld.h>
// Always include last
#include <cisstMultiTask/mtsExport.h>

/* source line: 10 */
class CISST_EXPORT mtsDescriptionComponent
{
 /* default constructors and destructors. */
 public:
    mtsDescriptionComponent(void);
    mtsDescriptionComponent(const mtsDescriptionComponent & other);
    ~mtsDescriptionComponent();

/* source line: 15 */
 public:
    std::string ProcessName; // ProcessName
/* source line: 20 */
 public:
    std::string ComponentName; // ComponentName
/* source line: 25 */
 public:
    std::string ClassName; // ClassName
/* source line: 30 */
 public:
    std::string ConstructorArgSerialized; // ConstructorArgSerialized
/* source line: 35 */

    public:
       mtsDescriptionComponent(const std::string & processName, const std::string & componentName);
    
 public:
    /* ctor-all-member is set to: true */
    mtsDescriptionComponent(const std::string & newProcessName, const std::string & newComponentName, const std::string & newClassName, const std::string & newConstructorArgSerialized);
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const mtsDescriptionComponent & source);
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

}; // mtsDescriptionComponent

// mts-proxy set to declaration-only
typedef mtsGenericObjectProxy<mtsDescriptionComponent> mtsDescriptionComponentProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(mtsDescriptionComponentProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const mtsDescriptionComponent & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, mtsDescriptionComponent & placeHolder);
/* data functions */
template <> class cmnData<mtsDescriptionComponent > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef mtsDescriptionComponent DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const mtsDescriptionComponent & data) {
    outputStream << cmnData<mtsDescriptionComponent >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<mtsDescriptionComponent >::SerializeText(const mtsDescriptionComponent & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<mtsDescriptionComponent >::DeSerializeText(mtsDescriptionComponent & data, const Json::Value & jsonValue) throw (std::runtime_error);
#endif // CISST_HAS_JSON


/* source line: 49 */
class CISST_EXPORT mtsDescriptionComponentClass
{
 /* default constructors and destructors. */
 public:
    mtsDescriptionComponentClass(void);
    mtsDescriptionComponentClass(const mtsDescriptionComponentClass & other);
    ~mtsDescriptionComponentClass();

/* source line: 54 */
 public:
    std::string ClassName; // ClassName
/* source line: 59 */
 public:
    std::string ArgType; // ArgType
/* source line: 64 */
 public:
    std::string ArgTypeId; // ArgTypeId

 public:
    /* ctor-all-member is set to: true */
    mtsDescriptionComponentClass(const std::string & newClassName, const std::string & newArgType, const std::string & newArgTypeId);
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const mtsDescriptionComponentClass & source);
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

}; // mtsDescriptionComponentClass

// mts-proxy set to declaration-only
typedef mtsGenericObjectProxy<mtsDescriptionComponentClass> mtsDescriptionComponentClassProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(mtsDescriptionComponentClassProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const mtsDescriptionComponentClass & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, mtsDescriptionComponentClass & placeHolder);
/* data functions */
template <> class cmnData<mtsDescriptionComponentClass > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef mtsDescriptionComponentClass DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const mtsDescriptionComponentClass & data) {
    outputStream << cmnData<mtsDescriptionComponentClass >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<mtsDescriptionComponentClass >::SerializeText(const mtsDescriptionComponentClass & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<mtsDescriptionComponentClass >::DeSerializeText(mtsDescriptionComponentClass & data, const Json::Value & jsonValue) throw (std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 71 */

typedef std::vector<mtsDescriptionComponentClass> mtsDescriptionComponentClassVec;
typedef mtsGenericObjectProxy<mtsDescriptionComponentClassVec> mtsDescriptionComponentClassVecProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(mtsDescriptionComponentClassVecProxy);

/* source line: 77 */
class CISST_EXPORT mtsDescriptionInterface
{
 /* default constructors and destructors. */
 public:
    mtsDescriptionInterface(void);
    mtsDescriptionInterface(const mtsDescriptionInterface & other);
    ~mtsDescriptionInterface();

/* source line: 82 */
 public:
    std::string ProcessName; // ProcessName
/* source line: 87 */
 public:
    std::string ComponentName; // ComponentName
/* source line: 92 */
 public:
    std::vector<std::string> InterfaceRequiredNames; // InterfaceRequiredNames
/* source line: 97 */
 public:
    std::vector<std::string> InterfaceProvidedNames; // InterfaceProvidedNames

 public:
    /* ctor-all-member is set to: true */
    mtsDescriptionInterface(const std::string & newProcessName, const std::string & newComponentName, const std::vector<std::string> & newInterfaceRequiredNames, const std::vector<std::string> & newInterfaceProvidedNames);
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const mtsDescriptionInterface & source);
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

}; // mtsDescriptionInterface

// mts-proxy set to declaration-only
typedef mtsGenericObjectProxy<mtsDescriptionInterface> mtsDescriptionInterfaceProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(mtsDescriptionInterfaceProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const mtsDescriptionInterface & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, mtsDescriptionInterface & placeHolder);
/* data functions */
template <> class cmnData<mtsDescriptionInterface > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef mtsDescriptionInterface DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const mtsDescriptionInterface & data) {
    outputStream << cmnData<mtsDescriptionInterface >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<mtsDescriptionInterface >::SerializeText(const mtsDescriptionInterface & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<mtsDescriptionInterface >::DeSerializeText(mtsDescriptionInterface & data, const Json::Value & jsonValue) throw (std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 105 */
class CISST_EXPORT mtsDescriptionIntefaceFullName
{
 /* default constructors and destructors. */
 public:
    mtsDescriptionIntefaceFullName(void);
    mtsDescriptionIntefaceFullName(const mtsDescriptionIntefaceFullName & other);
    ~mtsDescriptionIntefaceFullName();

/* source line: 110 */
 public:
    std::string ProcessName; // ProcessName
/* source line: 115 */
 public:
    std::string ComponentName; // ComponentName
/* source line: 120 */
 public:
    std::string InterfaceName; // InterfaceName

 public:
    /* ctor-all-member is set to: true */
    mtsDescriptionIntefaceFullName(const std::string & newProcessName, const std::string & newComponentName, const std::string & newInterfaceName);
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const mtsDescriptionIntefaceFullName & source);
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

}; // mtsDescriptionIntefaceFullName

// mts-proxy set to declaration-only
typedef mtsGenericObjectProxy<mtsDescriptionIntefaceFullName> mtsDescriptionIntefaceFullNameProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(mtsDescriptionIntefaceFullNameProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const mtsDescriptionIntefaceFullName & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, mtsDescriptionIntefaceFullName & placeHolder);
/* data functions */
template <> class cmnData<mtsDescriptionIntefaceFullName > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef mtsDescriptionIntefaceFullName DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const mtsDescriptionIntefaceFullName & data) {
    outputStream << cmnData<mtsDescriptionIntefaceFullName >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<mtsDescriptionIntefaceFullName >::SerializeText(const mtsDescriptionIntefaceFullName & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<mtsDescriptionIntefaceFullName >::DeSerializeText(mtsDescriptionIntefaceFullName & data, const Json::Value & jsonValue) throw (std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 128 */
class CISST_EXPORT mtsDescriptionConnection
{
 /* default constructors and destructors. */
 public:
    mtsDescriptionConnection(void);
    mtsDescriptionConnection(const mtsDescriptionConnection & other);
    ~mtsDescriptionConnection();

/* source line: 133 */
 public:
    mtsDescriptionIntefaceFullName Client; // Client
/* source line: 138 */
 public:
    mtsDescriptionIntefaceFullName Server; // Server
/* source line: 143 */
 public:
    ConnectionIDType ConnectionID; // ConnectionID
/* source line: 149 */

    mtsDescriptionConnection(
        const std::string & clientProcessName,
        const std::string & clientComponentName, const std::string & clientInterfaceRequiredName,
        const std::string & serverProcessName,
        const std::string & serverComponentName, const std::string & serverInterfaceProvidedName,
        const ConnectionIDType connectionId = InvalidConnectionID);
    void Init(void);
    
 public:
    /* ctor-all-member is set to: true */
    mtsDescriptionConnection(const mtsDescriptionIntefaceFullName & newClient, const mtsDescriptionIntefaceFullName & newServer, const ConnectionIDType & newConnectionID);
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const mtsDescriptionConnection & source);
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

}; // mtsDescriptionConnection

// mts-proxy set to declaration-only
typedef mtsGenericObjectProxy<mtsDescriptionConnection> mtsDescriptionConnectionProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(mtsDescriptionConnectionProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const mtsDescriptionConnection & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, mtsDescriptionConnection & placeHolder);
/* data functions */
template <> class cmnData<mtsDescriptionConnection > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef mtsDescriptionConnection DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const mtsDescriptionConnection & data) {
    outputStream << cmnData<mtsDescriptionConnection >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<mtsDescriptionConnection >::SerializeText(const mtsDescriptionConnection & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<mtsDescriptionConnection >::DeSerializeText(mtsDescriptionConnection & data, const Json::Value & jsonValue) throw (std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 160 */

typedef std::vector<mtsDescriptionConnection> mtsDescriptionConnectionVec;
typedef mtsGenericObjectProxy<mtsDescriptionConnectionVec> mtsDescriptionConnectionVecProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(mtsDescriptionConnectionVecProxy);

/* source line: 167 */
class CISST_EXPORT mtsComponentStatusControl
{
 /* default constructors and destructors. */
 public:
    mtsComponentStatusControl(void);
    mtsComponentStatusControl(const mtsComponentStatusControl & other);
    ~mtsComponentStatusControl();

/* source line: 172 */
public:
    enum ComponentStatusCommand {COMPONENT_START = 0, COMPONENT_STOP, COMPONENT_RESUME };
    static std::string ComponentStatusCommandToString(const ComponentStatusCommand & value) throw (std::runtime_error);
    static ComponentStatusCommand ComponentStatusCommandFromString(const std::string & value) throw (std::runtime_error);
    static const std::vector<int> & ComponentStatusCommandVectorInt(void);
    static const std::vector<std::string> & ComponentStatusCommandVectorString(void);
/* source line: 188 */
 public:
    std::string ProcessName; // ProcessName
/* source line: 193 */
 public:
    std::string ComponentName; // ComponentName
/* source line: 198 */
 public:
    double DelayInSecond; // DelayInSecond
/* source line: 204 */
 public:
    ComponentStatusCommand Command; // Command

 public:
    /* ctor-all-member is set to: true */
    mtsComponentStatusControl(const std::string & newProcessName, const std::string & newComponentName, const double & newDelayInSecond, const ComponentStatusCommand & newCommand);
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const mtsComponentStatusControl & source);
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

}; // mtsComponentStatusControl

// mts-proxy set to declaration-only
typedef mtsGenericObjectProxy<mtsComponentStatusControl> mtsComponentStatusControlProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(mtsComponentStatusControlProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const mtsComponentStatusControl & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, mtsComponentStatusControl & placeHolder);
/* data functions */
template <> class cmnData<mtsComponentStatusControl > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef mtsComponentStatusControl DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const mtsComponentStatusControl & data) {
    outputStream << cmnData<mtsComponentStatusControl >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<mtsComponentStatusControl >::SerializeText(const mtsComponentStatusControl & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<mtsComponentStatusControl >::DeSerializeText(mtsComponentStatusControl & data, const Json::Value & jsonValue) throw (std::runtime_error);
#endif // CISST_HAS_JSON
std::string CISST_EXPORT cmnDataHumanReadable_mtsComponentStatusControl_ComponentStatusCommand(const mtsComponentStatusControl::ComponentStatusCommand & data);
CMN_DATA_SPECIALIZATION_FOR_ENUM_USER_HUMAN_READABLE(mtsComponentStatusControl::ComponentStatusCommand, int, cmnDataHumanReadable_mtsComponentStatusControl_ComponentStatusCommand);
#if CISST_HAS_JSON
  CMN_DECLARE_DATA_FUNCTIONS_JSON_FOR_ENUM(mtsComponentStatusControl::ComponentStatusCommand);
#endif // CISST_HAS_JSON

/* source line: 212 */
class CISST_EXPORT mtsComponentStateChange
{
 /* default constructors and destructors. */
 public:
    mtsComponentStateChange(void);
    mtsComponentStateChange(const mtsComponentStateChange & other);
    ~mtsComponentStateChange();

/* source line: 217 */
 public:
    std::string ProcessName; // ProcessName
/* source line: 222 */
 public:
    std::string ComponentName; // ComponentName
/* source line: 227 */
 public:
    mtsComponentState NewState; // NewState

 public:
    /* ctor-all-member is set to: true */
    mtsComponentStateChange(const std::string & newProcessName, const std::string & newComponentName, const mtsComponentState & newNewState);
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const mtsComponentStateChange & source);
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

}; // mtsComponentStateChange

// mts-proxy set to declaration-only
typedef mtsGenericObjectProxy<mtsComponentStateChange> mtsComponentStateChangeProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(mtsComponentStateChangeProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const mtsComponentStateChange & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, mtsComponentStateChange & placeHolder);
/* data functions */
template <> class cmnData<mtsComponentStateChange > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef mtsComponentStateChange DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const mtsComponentStateChange & data) {
    outputStream << cmnData<mtsComponentStateChange >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<mtsComponentStateChange >::SerializeText(const mtsComponentStateChange & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<mtsComponentStateChange >::DeSerializeText(mtsComponentStateChange & data, const Json::Value & jsonValue) throw (std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 235 */
class CISST_EXPORT mtsDescriptionLoadLibrary
{
 /* default constructors and destructors. */
 public:
    mtsDescriptionLoadLibrary(void);
    mtsDescriptionLoadLibrary(const mtsDescriptionLoadLibrary & other);
    ~mtsDescriptionLoadLibrary();

/* source line: 240 */
 public:
    std::string ProcessName; // ProcessName
/* source line: 245 */
 public:
    std::string LibraryName; // LibraryName

 public:
    /* ctor-all-member is set to: true */
    mtsDescriptionLoadLibrary(const std::string & newProcessName, const std::string & newLibraryName);
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const mtsDescriptionLoadLibrary & source);
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

}; // mtsDescriptionLoadLibrary

// mts-proxy set to declaration-only
typedef mtsGenericObjectProxy<mtsDescriptionLoadLibrary> mtsDescriptionLoadLibraryProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(mtsDescriptionLoadLibraryProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const mtsDescriptionLoadLibrary & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, mtsDescriptionLoadLibrary & placeHolder);
/* data functions */
template <> class cmnData<mtsDescriptionLoadLibrary > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef mtsDescriptionLoadLibrary DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const mtsDescriptionLoadLibrary & data) {
    outputStream << cmnData<mtsDescriptionLoadLibrary >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<mtsDescriptionLoadLibrary >::SerializeText(const mtsDescriptionLoadLibrary & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<mtsDescriptionLoadLibrary >::DeSerializeText(mtsDescriptionLoadLibrary & data, const Json::Value & jsonValue) throw (std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 253 */
class CISST_EXPORT mtsEndUserInterfaceArg
{
 /* default constructors and destructors. */
 public:
    mtsEndUserInterfaceArg(void);
    mtsEndUserInterfaceArg(const mtsEndUserInterfaceArg & other);
    ~mtsEndUserInterfaceArg();

/* source line: 258 */
 public:
    size_t OriginalInterface; // OriginalInterface
/* source line: 263 */
 public:
    std::string UserName; // UserName
/* source line: 268 */
 public:
    size_t EndUserInterface; // EndUserInterface

 public:
    /* ctor-all-member is set to: true */
    mtsEndUserInterfaceArg(const size_t & newOriginalInterface, const std::string & newUserName, const size_t & newEndUserInterface);
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const mtsEndUserInterfaceArg & source);
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

}; // mtsEndUserInterfaceArg

// mts-proxy set to declaration-only
typedef mtsGenericObjectProxy<mtsEndUserInterfaceArg> mtsEndUserInterfaceArgProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(mtsEndUserInterfaceArgProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const mtsEndUserInterfaceArg & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, mtsEndUserInterfaceArg & placeHolder);
/* data functions */
template <> class cmnData<mtsEndUserInterfaceArg > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef mtsEndUserInterfaceArg DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const mtsEndUserInterfaceArg & data) {
    outputStream << cmnData<mtsEndUserInterfaceArg >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<mtsEndUserInterfaceArg >::SerializeText(const mtsEndUserInterfaceArg & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<mtsEndUserInterfaceArg >::DeSerializeText(mtsEndUserInterfaceArg & data, const Json::Value & jsonValue) throw (std::runtime_error);
#endif // CISST_HAS_JSON


#endif // _cisstMultiTask_mtsParameterTypes_h
