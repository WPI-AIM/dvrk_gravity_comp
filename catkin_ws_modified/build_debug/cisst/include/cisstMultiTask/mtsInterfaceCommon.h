// file automatically generated, do not modify
// cisst version: 1.0.8
// source file: /home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/code/../mtsInterfaceCommon.cdg

#pragma once
#ifndef _cisstMultiTask_mtsInterfaceCommon_h
#define _cisstMultiTask_mtsInterfaceCommon_h

#include <cisstCommon/cmnDataFunctions.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#if CISST_HAS_JSON
#include <cisstCommon/cmnDataFunctionsJSON.h>
#endif // CISST_HAS_JSON

/* source line: 1 */

/* source line: 9 */

// mts-proxy set to declaration-only
#include <cisstCommon/cmnClassServices.h>
#include <cisstCommon/cmnClassRegisterMacros.h>
#include <cisstMultiTask/mtsGenericObjectProxy.h>


/* source line: 21 */

// mts-proxy set to declaration-only
#include <cisstCommon/cmnClassServices.h>
#include <cisstCommon/cmnClassRegisterMacros.h>
#include <cisstMultiTask/mtsGenericObjectProxy.h>


/* source line: 38 */

// mts-proxy set to declaration-only
#include <cisstCommon/cmnClassServices.h>
#include <cisstCommon/cmnClassRegisterMacros.h>
#include <cisstMultiTask/mtsGenericObjectProxy.h>


/* source line: 55 */

// mts-proxy set to declaration-only
#include <cisstCommon/cmnClassServices.h>
#include <cisstCommon/cmnClassRegisterMacros.h>
#include <cisstMultiTask/mtsGenericObjectProxy.h>


/* source line: 77 */

// mts-proxy set to declaration-only
#include <cisstCommon/cmnClassServices.h>
#include <cisstCommon/cmnClassRegisterMacros.h>
#include <cisstMultiTask/mtsGenericObjectProxy.h>


/* source line: 94 */

// mts-proxy set to declaration-only
#include <cisstCommon/cmnClassServices.h>
#include <cisstCommon/cmnClassRegisterMacros.h>
#include <cisstMultiTask/mtsGenericObjectProxy.h>


/* source line: 116 */

// mts-proxy set to declaration-only
#include <cisstCommon/cmnClassServices.h>
#include <cisstCommon/cmnClassRegisterMacros.h>
#include <cisstMultiTask/mtsGenericObjectProxy.h>


/* source line: 128 */

// mts-proxy set to declaration-only
#include <cisstCommon/cmnClassServices.h>
#include <cisstCommon/cmnClassRegisterMacros.h>
#include <cisstMultiTask/mtsGenericObjectProxy.h>



/* source line: 162 */

// mts-proxy set to declaration-only
#include <cisstCommon/cmnClassServices.h>
#include <cisstCommon/cmnClassRegisterMacros.h>
#include <cisstMultiTask/mtsGenericObjectProxy.h>


/* source line: 214 */

// mts-proxy set to declaration-only
#include <cisstCommon/cmnClassServices.h>
#include <cisstCommon/cmnClassRegisterMacros.h>
#include <cisstMultiTask/mtsGenericObjectProxy.h>


/* source line: 1 */
/* source line: 4 */

// Always include last
#include <cisstMultiTask/mtsExport.h>

/* source line: 9 */
class CISST_EXPORT mtsCommandVoidDescription
{
 /* default constructors and destructors. */
 public:
    mtsCommandVoidDescription(void);
    mtsCommandVoidDescription(const mtsCommandVoidDescription & other);
    ~mtsCommandVoidDescription();

/* source line: 14 */
 public:
    std::string Name; // Name

 public:
    /* ctor-all-member is set to: true */
    mtsCommandVoidDescription(const std::string & newName);
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const mtsCommandVoidDescription & source);
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

}; // mtsCommandVoidDescription

// mts-proxy set to declaration-only
typedef mtsGenericObjectProxy<mtsCommandVoidDescription> mtsCommandVoidDescriptionProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(mtsCommandVoidDescriptionProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const mtsCommandVoidDescription & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, mtsCommandVoidDescription & placeHolder);
/* data functions */
template <> class cmnData<mtsCommandVoidDescription > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef mtsCommandVoidDescription DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const mtsCommandVoidDescription & data) {
    outputStream << cmnData<mtsCommandVoidDescription >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<mtsCommandVoidDescription >::SerializeText(const mtsCommandVoidDescription & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<mtsCommandVoidDescription >::DeSerializeText(mtsCommandVoidDescription & data, const Json::Value & jsonValue) throw (std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 21 */
class CISST_EXPORT mtsCommandWriteDescription
{
 /* default constructors and destructors. */
 public:
    mtsCommandWriteDescription(void);
    mtsCommandWriteDescription(const mtsCommandWriteDescription & other);
    ~mtsCommandWriteDescription();

/* source line: 26 */
 public:
    std::string Name; // Name
/* source line: 31 */
 public:
    std::string ArgumentPrototypeSerialized; // ArgumentPrototypeSerialized

 public:
    /* ctor-all-member is set to: true */
    mtsCommandWriteDescription(const std::string & newName, const std::string & newArgumentPrototypeSerialized);
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const mtsCommandWriteDescription & source);
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

}; // mtsCommandWriteDescription

// mts-proxy set to declaration-only
typedef mtsGenericObjectProxy<mtsCommandWriteDescription> mtsCommandWriteDescriptionProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(mtsCommandWriteDescriptionProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const mtsCommandWriteDescription & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, mtsCommandWriteDescription & placeHolder);
/* data functions */
template <> class cmnData<mtsCommandWriteDescription > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef mtsCommandWriteDescription DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const mtsCommandWriteDescription & data) {
    outputStream << cmnData<mtsCommandWriteDescription >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<mtsCommandWriteDescription >::SerializeText(const mtsCommandWriteDescription & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<mtsCommandWriteDescription >::DeSerializeText(mtsCommandWriteDescription & data, const Json::Value & jsonValue) throw (std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 38 */
class CISST_EXPORT mtsCommandReadDescription
{
 /* default constructors and destructors. */
 public:
    mtsCommandReadDescription(void);
    mtsCommandReadDescription(const mtsCommandReadDescription & other);
    ~mtsCommandReadDescription();

/* source line: 43 */
 public:
    std::string Name; // Name
/* source line: 48 */
 public:
    std::string ArgumentPrototypeSerialized; // ArgumentPrototypeSerialized

 public:
    /* ctor-all-member is set to: true */
    mtsCommandReadDescription(const std::string & newName, const std::string & newArgumentPrototypeSerialized);
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const mtsCommandReadDescription & source);
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

}; // mtsCommandReadDescription

// mts-proxy set to declaration-only
typedef mtsGenericObjectProxy<mtsCommandReadDescription> mtsCommandReadDescriptionProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(mtsCommandReadDescriptionProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const mtsCommandReadDescription & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, mtsCommandReadDescription & placeHolder);
/* data functions */
template <> class cmnData<mtsCommandReadDescription > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef mtsCommandReadDescription DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const mtsCommandReadDescription & data) {
    outputStream << cmnData<mtsCommandReadDescription >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<mtsCommandReadDescription >::SerializeText(const mtsCommandReadDescription & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<mtsCommandReadDescription >::DeSerializeText(mtsCommandReadDescription & data, const Json::Value & jsonValue) throw (std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 55 */
class CISST_EXPORT mtsCommandQualifiedReadDescription
{
 /* default constructors and destructors. */
 public:
    mtsCommandQualifiedReadDescription(void);
    mtsCommandQualifiedReadDescription(const mtsCommandQualifiedReadDescription & other);
    ~mtsCommandQualifiedReadDescription();

/* source line: 60 */
 public:
    std::string Name; // Name
/* source line: 65 */
 public:
    std::string Argument1PrototypeSerialized; // Argument1PrototypeSerialized
/* source line: 70 */
 public:
    std::string Argument2PrototypeSerialized; // Argument2PrototypeSerialized

 public:
    /* ctor-all-member is set to: true */
    mtsCommandQualifiedReadDescription(const std::string & newName, const std::string & newArgument1PrototypeSerialized, const std::string & newArgument2PrototypeSerialized);
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const mtsCommandQualifiedReadDescription & source);
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

}; // mtsCommandQualifiedReadDescription

// mts-proxy set to declaration-only
typedef mtsGenericObjectProxy<mtsCommandQualifiedReadDescription> mtsCommandQualifiedReadDescriptionProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(mtsCommandQualifiedReadDescriptionProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const mtsCommandQualifiedReadDescription & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, mtsCommandQualifiedReadDescription & placeHolder);
/* data functions */
template <> class cmnData<mtsCommandQualifiedReadDescription > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef mtsCommandQualifiedReadDescription DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const mtsCommandQualifiedReadDescription & data) {
    outputStream << cmnData<mtsCommandQualifiedReadDescription >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<mtsCommandQualifiedReadDescription >::SerializeText(const mtsCommandQualifiedReadDescription & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<mtsCommandQualifiedReadDescription >::DeSerializeText(mtsCommandQualifiedReadDescription & data, const Json::Value & jsonValue) throw (std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 77 */
class CISST_EXPORT mtsCommandVoidReturnDescription
{
 /* default constructors and destructors. */
 public:
    mtsCommandVoidReturnDescription(void);
    mtsCommandVoidReturnDescription(const mtsCommandVoidReturnDescription & other);
    ~mtsCommandVoidReturnDescription();

/* source line: 82 */
 public:
    std::string Name; // Name
/* source line: 87 */
 public:
    std::string ResultPrototypeSerialized; // ResultPrototypeSerialized

 public:
    /* ctor-all-member is set to: true */
    mtsCommandVoidReturnDescription(const std::string & newName, const std::string & newResultPrototypeSerialized);
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const mtsCommandVoidReturnDescription & source);
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

}; // mtsCommandVoidReturnDescription

// mts-proxy set to declaration-only
typedef mtsGenericObjectProxy<mtsCommandVoidReturnDescription> mtsCommandVoidReturnDescriptionProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(mtsCommandVoidReturnDescriptionProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const mtsCommandVoidReturnDescription & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, mtsCommandVoidReturnDescription & placeHolder);
/* data functions */
template <> class cmnData<mtsCommandVoidReturnDescription > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef mtsCommandVoidReturnDescription DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const mtsCommandVoidReturnDescription & data) {
    outputStream << cmnData<mtsCommandVoidReturnDescription >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<mtsCommandVoidReturnDescription >::SerializeText(const mtsCommandVoidReturnDescription & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<mtsCommandVoidReturnDescription >::DeSerializeText(mtsCommandVoidReturnDescription & data, const Json::Value & jsonValue) throw (std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 94 */
class CISST_EXPORT mtsCommandWriteReturnDescription
{
 /* default constructors and destructors. */
 public:
    mtsCommandWriteReturnDescription(void);
    mtsCommandWriteReturnDescription(const mtsCommandWriteReturnDescription & other);
    ~mtsCommandWriteReturnDescription();

/* source line: 99 */
 public:
    std::string Name; // Name
/* source line: 104 */
 public:
    std::string ArgumentPrototypeSerialized; // ArgumentPrototypeSerialized
/* source line: 109 */
 public:
    std::string ResultPrototypeSerialized; // ResultPrototypeSerialized

 public:
    /* ctor-all-member is set to: true */
    mtsCommandWriteReturnDescription(const std::string & newName, const std::string & newArgumentPrototypeSerialized, const std::string & newResultPrototypeSerialized);
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const mtsCommandWriteReturnDescription & source);
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

}; // mtsCommandWriteReturnDescription

// mts-proxy set to declaration-only
typedef mtsGenericObjectProxy<mtsCommandWriteReturnDescription> mtsCommandWriteReturnDescriptionProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(mtsCommandWriteReturnDescriptionProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const mtsCommandWriteReturnDescription & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, mtsCommandWriteReturnDescription & placeHolder);
/* data functions */
template <> class cmnData<mtsCommandWriteReturnDescription > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef mtsCommandWriteReturnDescription DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const mtsCommandWriteReturnDescription & data) {
    outputStream << cmnData<mtsCommandWriteReturnDescription >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<mtsCommandWriteReturnDescription >::SerializeText(const mtsCommandWriteReturnDescription & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<mtsCommandWriteReturnDescription >::DeSerializeText(mtsCommandWriteReturnDescription & data, const Json::Value & jsonValue) throw (std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 116 */
class CISST_EXPORT mtsEventVoidDescription
{
 /* default constructors and destructors. */
 public:
    mtsEventVoidDescription(void);
    mtsEventVoidDescription(const mtsEventVoidDescription & other);
    ~mtsEventVoidDescription();

/* source line: 121 */
 public:
    std::string Name; // Name

 public:
    /* ctor-all-member is set to: true */
    mtsEventVoidDescription(const std::string & newName);
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const mtsEventVoidDescription & source);
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

}; // mtsEventVoidDescription

// mts-proxy set to declaration-only
typedef mtsGenericObjectProxy<mtsEventVoidDescription> mtsEventVoidDescriptionProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(mtsEventVoidDescriptionProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const mtsEventVoidDescription & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, mtsEventVoidDescription & placeHolder);
/* data functions */
template <> class cmnData<mtsEventVoidDescription > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef mtsEventVoidDescription DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const mtsEventVoidDescription & data) {
    outputStream << cmnData<mtsEventVoidDescription >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<mtsEventVoidDescription >::SerializeText(const mtsEventVoidDescription & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<mtsEventVoidDescription >::DeSerializeText(mtsEventVoidDescription & data, const Json::Value & jsonValue) throw (std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 128 */
class CISST_EXPORT mtsEventWriteDescription
{
 /* default constructors and destructors. */
 public:
    mtsEventWriteDescription(void);
    mtsEventWriteDescription(const mtsEventWriteDescription & other);
    ~mtsEventWriteDescription();

/* source line: 133 */
 public:
    std::string Name; // Name
/* source line: 138 */
 public:
    std::string ArgumentPrototypeSerialized; // ArgumentPrototypeSerialized

 public:
    /* ctor-all-member is set to: true */
    mtsEventWriteDescription(const std::string & newName, const std::string & newArgumentPrototypeSerialized);
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const mtsEventWriteDescription & source);
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

}; // mtsEventWriteDescription

// mts-proxy set to declaration-only
typedef mtsGenericObjectProxy<mtsEventWriteDescription> mtsEventWriteDescriptionProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(mtsEventWriteDescriptionProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const mtsEventWriteDescription & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, mtsEventWriteDescription & placeHolder);
/* data functions */
template <> class cmnData<mtsEventWriteDescription > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef mtsEventWriteDescription DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const mtsEventWriteDescription & data) {
    outputStream << cmnData<mtsEventWriteDescription >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<mtsEventWriteDescription >::SerializeText(const mtsEventWriteDescription & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<mtsEventWriteDescription >::DeSerializeText(mtsEventWriteDescription & data, const Json::Value & jsonValue) throw (std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 146 */

    typedef std::vector<mtsCommandVoidDescription>          mtsCommandsVoidDescription;
	typedef std::vector<mtsCommandWriteDescription>         mtsCommandsWriteDescription;
	typedef std::vector<mtsCommandReadDescription>          mtsCommandsReadDescription;
	typedef std::vector<mtsCommandQualifiedReadDescription> mtsCommandsQualifiedReadDescription;
	typedef std::vector<mtsCommandVoidReturnDescription>    mtsCommandsVoidReturnDescription;
	typedef std::vector<mtsCommandWriteReturnDescription>   mtsCommandsWriteReturnDescription;
    typedef std::vector<mtsEventVoidDescription>            mtsEventsVoidDescription;
    typedef std::vector<mtsEventWriteDescription>           mtsEventsWriteDescription;

    typedef std::vector<std::string>                         mtsCommandPointerNames;
    typedef mtsCommandsVoidDescription                       mtsEventHandlersVoidDescription;
    typedef mtsCommandsWriteDescription                      mtsEventHandlersWriteDescription;

/* source line: 162 */
class CISST_EXPORT mtsInterfaceProvidedDescription
{
 /* default constructors and destructors. */
 public:
    mtsInterfaceProvidedDescription(void);
    mtsInterfaceProvidedDescription(const mtsInterfaceProvidedDescription & other);
    ~mtsInterfaceProvidedDescription();

/* source line: 166 */
 public:
    std::string InterfaceName; // InterfaceName
/* source line: 171 */
 public:
    mtsCommandsVoidDescription CommandsVoid; // CommandsVoid
/* source line: 176 */
 public:
    mtsCommandsWriteDescription CommandsWrite; // CommandsWrite
/* source line: 181 */
 public:
    mtsCommandsReadDescription CommandsRead; // CommandsRead
/* source line: 186 */
 public:
    mtsCommandsQualifiedReadDescription CommandsQualifiedRead; // CommandsQualifiedRead
/* source line: 191 */
 public:
    mtsCommandsVoidReturnDescription CommandsVoidReturn; // CommandsVoidReturn
/* source line: 196 */
 public:
    mtsCommandsWriteReturnDescription CommandsWriteReturn; // CommandsWriteReturn
/* source line: 201 */
 public:
    mtsEventsVoidDescription EventsVoid; // EventsVoid
/* source line: 206 */
 public:
    mtsEventsWriteDescription EventsWrite; // EventsWrite
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const mtsInterfaceProvidedDescription & source);
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

}; // mtsInterfaceProvidedDescription

// mts-proxy set to declaration-only
typedef mtsGenericObjectProxy<mtsInterfaceProvidedDescription> mtsInterfaceProvidedDescriptionProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(mtsInterfaceProvidedDescriptionProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const mtsInterfaceProvidedDescription & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, mtsInterfaceProvidedDescription & placeHolder);
/* data functions */
template <> class cmnData<mtsInterfaceProvidedDescription > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef mtsInterfaceProvidedDescription DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const mtsInterfaceProvidedDescription & data) {
    outputStream << cmnData<mtsInterfaceProvidedDescription >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<mtsInterfaceProvidedDescription >::SerializeText(const mtsInterfaceProvidedDescription & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<mtsInterfaceProvidedDescription >::DeSerializeText(mtsInterfaceProvidedDescription & data, const Json::Value & jsonValue) throw (std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 214 */
class CISST_EXPORT mtsInterfaceRequiredDescription
{
 /* default constructors and destructors. */
 public:
    mtsInterfaceRequiredDescription(void);
    mtsInterfaceRequiredDescription(const mtsInterfaceRequiredDescription & other);
    ~mtsInterfaceRequiredDescription();

/* source line: 218 */
 public:
    std::string InterfaceName; // InterfaceName
/* source line: 223 */
 public:
    mtsCommandPointerNames FunctionVoidNames; // FunctionVoidNames
/* source line: 228 */
 public:
    mtsCommandPointerNames FunctionWriteNames; // FunctionWriteNames
/* source line: 233 */
 public:
    mtsCommandPointerNames FunctionReadNames; // FunctionReadNames
/* source line: 238 */
 public:
    mtsCommandPointerNames FunctionQualifiedReadNames; // FunctionQualifiedReadNames
/* source line: 243 */
 public:
    mtsCommandPointerNames FunctionVoidReturnNames; // FunctionVoidReturnNames
/* source line: 248 */
 public:
    mtsCommandPointerNames FunctionWriteReturnNames; // FunctionWriteReturnNames
/* source line: 253 */
 public:
    mtsEventHandlersVoidDescription EventHandlersVoid; // EventHandlersVoid
/* source line: 258 */
 public:
    mtsEventHandlersWriteDescription EventHandlersWrite; // EventHandlersWrite
/* source line: 264 */
 public:
    bool IsRequired; // IsRequired
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const mtsInterfaceRequiredDescription & source);
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

}; // mtsInterfaceRequiredDescription

// mts-proxy set to declaration-only
typedef mtsGenericObjectProxy<mtsInterfaceRequiredDescription> mtsInterfaceRequiredDescriptionProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(mtsInterfaceRequiredDescriptionProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const mtsInterfaceRequiredDescription & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, mtsInterfaceRequiredDescription & placeHolder);
/* data functions */
template <> class cmnData<mtsInterfaceRequiredDescription > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef mtsInterfaceRequiredDescription DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const mtsInterfaceRequiredDescription & data) {
    outputStream << cmnData<mtsInterfaceRequiredDescription >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<mtsInterfaceRequiredDescription >::SerializeText(const mtsInterfaceRequiredDescription & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<mtsInterfaceRequiredDescription >::DeSerializeText(mtsInterfaceRequiredDescription & data, const Json::Value & jsonValue) throw (std::runtime_error);
#endif // CISST_HAS_JSON


#endif // _cisstMultiTask_mtsInterfaceCommon_h
