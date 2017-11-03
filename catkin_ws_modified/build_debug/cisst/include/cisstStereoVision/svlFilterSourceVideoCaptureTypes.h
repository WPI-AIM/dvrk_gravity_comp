// file automatically generated, do not modify
// cisst version: 1.0.8
// source file: /home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstStereoVision/code/../svlFilterSourceVideoCaptureTypes.cdg

#pragma once
#ifndef _cisstStereoVision_svlFilterSourceVideoCaptureTypes_h
#define _cisstStereoVision_svlFilterSourceVideoCaptureTypes_h

#include <cisstCommon/cmnDataFunctions.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#if CISST_HAS_JSON
#include <cisstCommon/cmnDataFunctionsJSON.h>
#endif // CISST_HAS_JSON

/* source line: 1 */


/* source line: 69 */

// mts-proxy set to true
#include <cisstCommon/cmnClassServices.h>
#include <cisstCommon/cmnClassRegisterMacros.h>
#include <cisstMultiTask/mtsGenericObjectProxy.h>



/* source line: 117 */

// mts-proxy set to true
#include <cisstCommon/cmnClassServices.h>
#include <cisstCommon/cmnClassRegisterMacros.h>
#include <cisstMultiTask/mtsGenericObjectProxy.h>



/* source line: 149 */

// mts-proxy set to true
#include <cisstCommon/cmnClassServices.h>
#include <cisstCommon/cmnClassRegisterMacros.h>
#include <cisstMultiTask/mtsGenericObjectProxy.h>



/* source line: 256 */

// mts-proxy set to true
#include <cisstCommon/cmnClassServices.h>
#include <cisstCommon/cmnClassRegisterMacros.h>
#include <cisstMultiTask/mtsGenericObjectProxy.h>



/* source line: 314 */

// mts-proxy set to true
#include <cisstCommon/cmnClassServices.h>
#include <cisstCommon/cmnClassRegisterMacros.h>
#include <cisstMultiTask/mtsGenericObjectProxy.h>



/* source line: 1 */
/* source line: 4 */


#include <cisstCommon/cmnDataFunctionsArray.h>
#include <cisstVector/vctFixedSizeMatrixTypes.h>
#include <cisstVector/vctDataFunctionsFixedSizeMatrix.h>
#include <cisstMultiTask/mtsGenericObjectProxy.h>
#include <cisstStereoVision/svlTypes.h>

// Always include last
#include <cisstStereoVision/svlExport.h>

namespace svlFilterSourceVideoCaptureTypes {
    enum PlatformType {
        WinDirectShow   = 0,
        WinSVS          = 1,
        LinVideo4Linux2 = 2,
        LinLibDC1394    = 3,
        OpenCV          = 4,
        MatroxImaging   = 5,
        BlackMagicDeckLink = 6,
        NumberOfPlatformTypes
    };

    enum PixelType {
        PixelRAW8    = 0,   //  8 bits per pixel
        PixelRAW16   = 1,   // 16 bits per pixel
        PixelRGB8    = 2,   // 24 bits per pixel
        PixelYUV444  = 3,   // 24 bits per pixel
        PixelYUV422  = 4,   // 16 bits per pixel
        PixelYUV411  = 5,   // 12 bits per pixel
        PixelMONO8   = 6,   //  8 bits per pixel
        PixelMONO16  = 7,   // 16 bits per pixel
        PixelUnknown = 8,
        PixelTypeCount
    };

    enum PatternType {
        PatternRGGB    = 0,
        PatternGBRG    = 1,
        PatternGRBG    = 2,
        PatternBGGR    = 3,
        PatternUnknown = 4,
        PatternTypeCount
    };

} // namespace

 CMN_DATA_SPECIALIZATION_FOR_ENUM(svlFilterSourceVideoCaptureTypes::PlatformType, int);
 CMN_DATA_SPECIALIZATION_FOR_ENUM(svlFilterSourceVideoCaptureTypes::PixelType, int);
 CMN_DATA_SPECIALIZATION_FOR_ENUM(svlFilterSourceVideoCaptureTypes::PatternType, int);
#if CISST_HAS_JSON
 CMN_DECLARE_DATA_FUNCTIONS_JSON_FOR_ENUM(svlFilterSourceVideoCaptureTypes::PlatformType);
 CMN_DECLARE_DATA_FUNCTIONS_JSON_FOR_ENUM(svlFilterSourceVideoCaptureTypes::PixelType);
 CMN_DECLARE_DATA_FUNCTIONS_JSON_FOR_ENUM(svlFilterSourceVideoCaptureTypes::PatternType);
#endif


/* source line: 69 */
namespace svlFilterSourceVideoCaptureTypes {
class CISST_EXPORT DeviceInfo
{
 /* default constructors and destructors. */
 public:
    DeviceInfo(void);
    DeviceInfo(const DeviceInfo & other);
    ~DeviceInfo();

/* source line: 74 */
 public:
    int ID; // ID
/* source line: 79 */
 public:
    char name[SVL_VCS_STRING_LENGTH]; // name
/* source line: 84 */
 public:
    PlatformType platform; // platform
/* source line: 89 */
 public:
    int inputcount; // inputcount
/* source line: 94 */
 public:
    int activeinput; // activeinput
/* source line: 99 */
 public:
    char inputnames[SVL_VCS_ARRAY_LENGTH][SVL_VCS_STRING_LENGTH]; // inputnames
/* source line: 104 */
 public:
    bool testok; // testok
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const DeviceInfo & source);
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

}; // DeviceInfo
}; // end of namespace svlFilterSourceVideoCaptureTypes

// mts-proxy set to true
typedef mtsGenericObjectProxy<svlFilterSourceVideoCaptureTypes::DeviceInfo> svlFilterSourceVideoCaptureTypes_DeviceInfoProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(svlFilterSourceVideoCaptureTypes_DeviceInfoProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const svlFilterSourceVideoCaptureTypes::DeviceInfo & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, svlFilterSourceVideoCaptureTypes::DeviceInfo & placeHolder);
/* data functions */
template <> class cmnData<svlFilterSourceVideoCaptureTypes::DeviceInfo > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef svlFilterSourceVideoCaptureTypes::DeviceInfo DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const svlFilterSourceVideoCaptureTypes::DeviceInfo & data) {
    outputStream << cmnData<svlFilterSourceVideoCaptureTypes::DeviceInfo >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<svlFilterSourceVideoCaptureTypes::DeviceInfo >::SerializeText(const svlFilterSourceVideoCaptureTypes::DeviceInfo & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<svlFilterSourceVideoCaptureTypes::DeviceInfo >::DeSerializeText(svlFilterSourceVideoCaptureTypes::DeviceInfo & data, const Json::Value & jsonValue) throw (std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 111 */

typedef mtsGenericObjectProxy<svlFilterSourceVideoCaptureTypes::DeviceInfo> svlFilterSourceVideoCaptureDeviceInfoProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(svlFilterSourceVideoCaptureDeviceInfoProxy);

/* source line: 117 */
namespace svlFilterSourceVideoCaptureTypes {
class CISST_EXPORT ExternalTrigger
{
 /* default constructors and destructors. */
 public:
    ExternalTrigger(void);
    ExternalTrigger(const ExternalTrigger & other);
    ~ExternalTrigger();

/* source line: 121 */
 public:
    bool enable; // enable
/* source line: 126 */
 public:
    unsigned int mode; // mode
/* source line: 131 */
 public:
    unsigned int source; // source
/* source line: 136 */
 public:
    unsigned int polarity; // polarity
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const ExternalTrigger & source);
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

}; // ExternalTrigger
}; // end of namespace svlFilterSourceVideoCaptureTypes

// mts-proxy set to true
typedef mtsGenericObjectProxy<svlFilterSourceVideoCaptureTypes::ExternalTrigger> svlFilterSourceVideoCaptureTypes_ExternalTriggerProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(svlFilterSourceVideoCaptureTypes_ExternalTriggerProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const svlFilterSourceVideoCaptureTypes::ExternalTrigger & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, svlFilterSourceVideoCaptureTypes::ExternalTrigger & placeHolder);
/* data functions */
template <> class cmnData<svlFilterSourceVideoCaptureTypes::ExternalTrigger > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef svlFilterSourceVideoCaptureTypes::ExternalTrigger DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const svlFilterSourceVideoCaptureTypes::ExternalTrigger & data) {
    outputStream << cmnData<svlFilterSourceVideoCaptureTypes::ExternalTrigger >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<svlFilterSourceVideoCaptureTypes::ExternalTrigger >::SerializeText(const svlFilterSourceVideoCaptureTypes::ExternalTrigger & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<svlFilterSourceVideoCaptureTypes::ExternalTrigger >::DeSerializeText(svlFilterSourceVideoCaptureTypes::ExternalTrigger & data, const Json::Value & jsonValue) throw (std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 143 */

typedef mtsGenericObjectProxy<svlFilterSourceVideoCaptureTypes::ExternalTrigger> svlFilterSourceVideoCaptureExternalTriggerProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(svlFilterSourceVideoCaptureExternalTriggerProxy);

/* source line: 149 */
namespace svlFilterSourceVideoCaptureTypes {
class CISST_EXPORT ImageFormat
{
 /* default constructors and destructors. */
 public:
    ImageFormat(void);
    ImageFormat(const ImageFormat & other);
    ~ImageFormat();

/* source line: 154 */
 public:
    bool defaults; // defaults
/* source line: 159 */
 public:
    unsigned int width; // width
/* source line: 164 */
 public:
    unsigned int height; // height
/* source line: 169 */
 public:
    svlFilterSourceVideoCaptureTypes::PixelType colorspace; // colorspace
/* source line: 174 */
 public:
    double framerate; // framerate
/* source line: 179 */
 public:
    bool rgb_order; // rgb_order
/* source line: 184 */
 public:
    bool yuyv_order; // yuyv_order
/* source line: 189 */
 public:
    int custom_mode; // custom_mode
/* source line: 194 */
 public:
    unsigned int custom_roileft; // custom_roileft
/* source line: 199 */
 public:
    unsigned int custom_roitop; // custom_roitop
/* source line: 204 */
 public:
    unsigned int custom_framerate; // custom_framerate
/* source line: 209 */
 public:
    unsigned int custom_maxwidth; // custom_maxwidth
/* source line: 214 */
 public:
    unsigned int custom_maxheight; // custom_maxheight
/* source line: 219 */
 public:
    unsigned int custom_unitwidth; // custom_unitwidth
/* source line: 224 */
 public:
    unsigned int custom_unitheight; // custom_unitheight
/* source line: 229 */
 public:
    unsigned int custom_unitleft; // custom_unitleft
/* source line: 234 */
 public:
    unsigned int custom_unittop; // custom_unittop
/* source line: 239 */
 public:
    PixelType custom_colorspaces[PixelTypeCount]; // custom_colorspaces
/* source line: 244 */
 public:
    PatternType custom_pattern; // custom_pattern
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const ImageFormat & source);
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

}; // ImageFormat
}; // end of namespace svlFilterSourceVideoCaptureTypes

// mts-proxy set to true
typedef mtsGenericObjectProxy<svlFilterSourceVideoCaptureTypes::ImageFormat> svlFilterSourceVideoCaptureTypes_ImageFormatProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(svlFilterSourceVideoCaptureTypes_ImageFormatProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const svlFilterSourceVideoCaptureTypes::ImageFormat & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, svlFilterSourceVideoCaptureTypes::ImageFormat & placeHolder);
/* data functions */
template <> class cmnData<svlFilterSourceVideoCaptureTypes::ImageFormat > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef svlFilterSourceVideoCaptureTypes::ImageFormat DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const svlFilterSourceVideoCaptureTypes::ImageFormat & data) {
    outputStream << cmnData<svlFilterSourceVideoCaptureTypes::ImageFormat >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<svlFilterSourceVideoCaptureTypes::ImageFormat >::SerializeText(const svlFilterSourceVideoCaptureTypes::ImageFormat & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<svlFilterSourceVideoCaptureTypes::ImageFormat >::DeSerializeText(svlFilterSourceVideoCaptureTypes::ImageFormat & data, const Json::Value & jsonValue) throw (std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 251 */

typedef mtsGenericObjectProxy<svlFilterSourceVideoCaptureTypes::ImageFormat> svlFilterSourceVideoCaptureImageFormatProxy;;
CMN_DECLARE_SERVICES_INSTANTIATION(svlFilterSourceVideoCaptureImageFormatProxy);

/* source line: 256 */
namespace svlFilterSourceVideoCaptureTypes {
class CISST_EXPORT ImageProperties
{
 /* default constructors and destructors. */
 public:
    ImageProperties(void);
    ImageProperties(const ImageProperties & other);
    ~ImageProperties();

/* source line: 261 */
 public:
    unsigned int mask; // mask
/* source line: 266 */
 public:
    unsigned int manual; // manual
/* source line: 271 */
 public:
    unsigned int shutter; // shutter
/* source line: 276 */
 public:
    unsigned int wb_u_b; // wb_u_b
/* source line: 281 */
 public:
    unsigned int wb_v_r; // wb_v_r
/* source line: 286 */
 public:
    unsigned int brightness; // brightness
/* source line: 291 */
 public:
    unsigned int gamma; // gamma
/* source line: 296 */
 public:
    unsigned int saturation; // saturation
/* source line: 301 */
 public:
    unsigned int gain; // gain
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const ImageProperties & source);
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

}; // ImageProperties
}; // end of namespace svlFilterSourceVideoCaptureTypes

// mts-proxy set to true
typedef mtsGenericObjectProxy<svlFilterSourceVideoCaptureTypes::ImageProperties> svlFilterSourceVideoCaptureTypes_ImagePropertiesProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(svlFilterSourceVideoCaptureTypes_ImagePropertiesProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const svlFilterSourceVideoCaptureTypes::ImageProperties & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, svlFilterSourceVideoCaptureTypes::ImageProperties & placeHolder);
/* data functions */
template <> class cmnData<svlFilterSourceVideoCaptureTypes::ImageProperties > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef svlFilterSourceVideoCaptureTypes::ImageProperties DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const svlFilterSourceVideoCaptureTypes::ImageProperties & data) {
    outputStream << cmnData<svlFilterSourceVideoCaptureTypes::ImageProperties >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<svlFilterSourceVideoCaptureTypes::ImageProperties >::SerializeText(const svlFilterSourceVideoCaptureTypes::ImageProperties & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<svlFilterSourceVideoCaptureTypes::ImageProperties >::DeSerializeText(svlFilterSourceVideoCaptureTypes::ImageProperties & data, const Json::Value & jsonValue) throw (std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 308 */

typedef mtsGenericObjectProxy<svlFilterSourceVideoCaptureTypes::ImageProperties> svlFilterSourceVideoCaptureImagePropertiesProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(svlFilterSourceVideoCaptureImagePropertiesProxy);

/* source line: 314 */
namespace svlFilterSourceVideoCaptureTypes {
class CISST_EXPORT Config
{
 /* default constructors and destructors. */
 public:
    Config(void);
    Config(const Config & other);
    ~Config();

/* source line: 319 */
 public:
    int Channels; // Channels
/* source line: 324 */
 public:
    std::vector<int> Device; // Device
/* source line: 329 */
 public:
    std::vector<int> Input; // Input
/* source line: 334 */
 public:
    std::vector<svlFilterSourceVideoCaptureTypes::ImageFormat> Format; // Format
/* source line: 339 */
 public:
    std::vector<svlFilterSourceVideoCaptureTypes::ImageProperties> Properties; // Properties
/* source line: 344 */
 public:
    std::vector<svlFilterSourceVideoCaptureTypes::ExternalTrigger> Trigger; // Trigger
/* source line: 349 */

        void SetChannels(const int channels);
        /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const Config & source);
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

}; // Config
}; // end of namespace svlFilterSourceVideoCaptureTypes

// mts-proxy set to true
typedef mtsGenericObjectProxy<svlFilterSourceVideoCaptureTypes::Config> svlFilterSourceVideoCaptureTypes_ConfigProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(svlFilterSourceVideoCaptureTypes_ConfigProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const svlFilterSourceVideoCaptureTypes::Config & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, svlFilterSourceVideoCaptureTypes::Config & placeHolder);
/* data functions */
template <> class cmnData<svlFilterSourceVideoCaptureTypes::Config > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef svlFilterSourceVideoCaptureTypes::Config DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const svlFilterSourceVideoCaptureTypes::Config & data) {
    outputStream << cmnData<svlFilterSourceVideoCaptureTypes::Config >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<svlFilterSourceVideoCaptureTypes::Config >::SerializeText(const svlFilterSourceVideoCaptureTypes::Config & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<svlFilterSourceVideoCaptureTypes::Config >::DeSerializeText(svlFilterSourceVideoCaptureTypes::Config & data, const Json::Value & jsonValue) throw (std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 354 */

typedef mtsGenericObjectProxy<svlFilterSourceVideoCaptureTypes::Config> svlFilterSourceVideoCaptureConfigProxy;;
CMN_DECLARE_SERVICES_INSTANTIATION(svlFilterSourceVideoCaptureConfigProxy);


#endif // _cisstStereoVision_svlFilterSourceVideoCaptureTypes_h
