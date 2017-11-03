// file automatically generated, do not modify
// cisst version: 1.0.8
// source file: /home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstParameterTypes/code/../prmIMUSensors.cdg

#include <cisstParameterTypes/prmIMUSensors.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>

/* source line: 1 */

/* source line: 17 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(prmIMUSensorsProxy);

prmIMUSensors::prmIMUSensors(void):
      mtsGenericObject()
    , mAccel()
    , mGyro()
    , mMag()
    , mTemp()
    , mPressure()
{}

prmIMUSensors::prmIMUSensors(const prmIMUSensors & other):
      mtsGenericObject(other)
    , mAccel(other.mAccel)
    , mGyro(other.mGyro)
    , mMag(other.mMag)
    , mTemp(other.mTemp)
    , mPressure(other.mPressure)
{}

prmIMUSensors::~prmIMUSensors(void){}


void prmIMUSensors::SerializeRaw(std::ostream & outputStream) const
{
    mtsGenericObject::SerializeRaw(outputStream);
    cmnSerializeRaw(outputStream, this->mAccel);
    cmnSerializeRaw(outputStream, this->mGyro);
    cmnSerializeRaw(outputStream, this->mMag);
    cmnSerializeRaw(outputStream, this->mTemp);
    cmnSerializeRaw(outputStream, this->mPressure);
}


void prmIMUSensors::DeSerializeRaw(std::istream & inputStream)
{
    mtsGenericObject::DeSerializeRaw(inputStream);
    cmnDeSerializeRaw(inputStream, this->mAccel);
    cmnDeSerializeRaw(inputStream, this->mGyro);
    cmnDeSerializeRaw(inputStream, this->mMag);
    cmnDeSerializeRaw(inputStream, this->mTemp);
    cmnDeSerializeRaw(inputStream, this->mPressure);
}


void prmIMUSensors::ToStream(std::ostream & outputStream) const
{
    outputStream << this->HumanReadable();
}

void prmIMUSensors::ToStreamRaw(std::ostream & outputStream, const char delimiter, bool headerOnly, const std::string & headerPrefix) const
{
    if (headerOnly) {
        outputStream << cmnData<prmIMUSensors >::SerializeDescription(*this, delimiter, headerPrefix);
    } else {
        cmnData<prmIMUSensors >::SerializeText(*this, outputStream, delimiter);
    }
}
/* source line: 27 */

/* accessors is set to: all */
void prmIMUSensors::GetAccel(vct3 & placeHolder) const
{
    placeHolder = this->mAccel;
}

void prmIMUSensors::SetAccel(const vct3 & newValue)
{
    this->mAccel = newValue;
}


/* accessors is set to: all */
const vct3 & prmIMUSensors::Accel(void) const
{
    return this->mAccel;
}

vct3 & prmIMUSensors::Accel(void)
{
    return this->mAccel;
}

/* source line: 33 */

/* accessors is set to: all */
void prmIMUSensors::GetGyro(vct3 & placeHolder) const
{
    placeHolder = this->mGyro;
}

void prmIMUSensors::SetGyro(const vct3 & newValue)
{
    this->mGyro = newValue;
}


/* accessors is set to: all */
const vct3 & prmIMUSensors::Gyro(void) const
{
    return this->mGyro;
}

vct3 & prmIMUSensors::Gyro(void)
{
    return this->mGyro;
}

/* source line: 39 */

/* accessors is set to: all */
void prmIMUSensors::GetMag(vct3 & placeHolder) const
{
    placeHolder = this->mMag;
}

void prmIMUSensors::SetMag(const vct3 & newValue)
{
    this->mMag = newValue;
}


/* accessors is set to: all */
const vct3 & prmIMUSensors::Mag(void) const
{
    return this->mMag;
}

vct3 & prmIMUSensors::Mag(void)
{
    return this->mMag;
}

/* source line: 45 */

/* accessors is set to: all */
void prmIMUSensors::GetTemp(double & placeHolder) const
{
    placeHolder = this->mTemp;
}

void prmIMUSensors::SetTemp(const double & newValue)
{
    this->mTemp = newValue;
}


/* accessors is set to: all */
const double & prmIMUSensors::Temp(void) const
{
    return this->mTemp;
}

double & prmIMUSensors::Temp(void)
{
    return this->mTemp;
}

/* source line: 51 */

/* accessors is set to: all */
void prmIMUSensors::GetPressure(double & placeHolder) const
{
    placeHolder = this->mPressure;
}

void prmIMUSensors::SetPressure(const double & newValue)
{
    this->mPressure = newValue;
}


/* accessors is set to: all */
const double & prmIMUSensors::Pressure(void) const
{
    return this->mPressure;
}

double & prmIMUSensors::Pressure(void)
{
    return this->mPressure;
}

/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const prmIMUSensors & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, prmIMUSensors & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void prmIMUSensors::Copy(const prmIMUSensors & source) {
    cmnData<mtsGenericObject >::Copy(*this, source);
    cmnData<vct3 >::Copy(this->mAccel, source.mAccel);
    cmnData<vct3 >::Copy(this->mGyro, source.mGyro);
    cmnData<vct3 >::Copy(this->mMag, source.mMag);
    cmnData<double >::Copy(this->mTemp, source.mTemp);
    cmnData<double >::Copy(this->mPressure, source.mPressure);
}
void prmIMUSensors::SerializeBinary(std::ostream & outputStream) const throw (std::runtime_error) {
    cmnData<mtsGenericObject >::SerializeBinary(*this, outputStream);
    cmnData<vct3 >::SerializeBinary(this->mAccel, outputStream);
    cmnData<vct3 >::SerializeBinary(this->mGyro, outputStream);
    cmnData<vct3 >::SerializeBinary(this->mMag, outputStream);
    cmnData<double >::SerializeBinary(this->mTemp, outputStream);
    cmnData<double >::SerializeBinary(this->mPressure, outputStream);
}
void prmIMUSensors::DeSerializeBinary(std::istream & inputStream,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) throw (std::runtime_error) {
    cmnData<mtsGenericObject >::DeSerializeBinary(*this, inputStream, localFormat, remoteFormat);
    cmnData<vct3 >::DeSerializeBinary(this->mAccel, inputStream, localFormat, remoteFormat);
    cmnData<vct3 >::DeSerializeBinary(this->mGyro, inputStream, localFormat, remoteFormat);
    cmnData<vct3 >::DeSerializeBinary(this->mMag, inputStream, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->mTemp, inputStream, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->mPressure, inputStream, localFormat, remoteFormat);
}
void prmIMUSensors::SerializeText(std::ostream & outputStream, const char delimiter) const throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<mtsGenericObject >::SerializeText(*this, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<vct3 >::SerializeText(this->mAccel, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<vct3 >::SerializeText(this->mGyro, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<vct3 >::SerializeText(this->mMag, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<double >::SerializeText(this->mTemp, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<double >::SerializeText(this->mPressure, outputStream, delimiter);
}
std::string prmIMUSensors::SerializeDescription(const char delimiter, const std::string & userDescription) const {
    bool someData = false;
    const std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    std::stringstream description;
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<mtsGenericObject >::SerializeDescription(*this, delimiter, userDescription);
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<vct3 >::SerializeDescription(this->mAccel, delimiter, prefix + "Accel");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<vct3 >::SerializeDescription(this->mGyro, delimiter, prefix + "Gyro");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<vct3 >::SerializeDescription(this->mMag, delimiter, prefix + "Mag");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<double >::SerializeDescription(this->mTemp, delimiter, prefix + "Temp");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<double >::SerializeDescription(this->mPressure, delimiter, prefix + "Pressure");
    return description.str();
}
void prmIMUSensors::DeSerializeText(std::istream & inputStream,
                                          const char delimiter) throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "prmIMUSensors");
    }
    someData = true;
    cmnData<mtsGenericObject >::DeSerializeText(*this, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "prmIMUSensors");
    }
    someData = true;
    cmnData<vct3 >::DeSerializeText(this->mAccel, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "prmIMUSensors");
    }
    someData = true;
    cmnData<vct3 >::DeSerializeText(this->mGyro, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "prmIMUSensors");
    }
    someData = true;
    cmnData<vct3 >::DeSerializeText(this->mMag, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "prmIMUSensors");
    }
    someData = true;
    cmnData<double >::DeSerializeText(this->mTemp, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "prmIMUSensors");
    }
    someData = true;
    cmnData<double >::DeSerializeText(this->mPressure, inputStream, delimiter);
}
std::string prmIMUSensors::HumanReadable(void) const {
    std::stringstream description;
    description << "prmIMUSensors" << std::endl;
    description << cmnData< mtsGenericObject >::HumanReadable(*this) << std::endl;
    description << "  Accelerometer, units m/s*s:" << cmnData<vct3 >::HumanReadable(this->mAccel);
    description << "  Gyroscope, units rad/s:" << cmnData<vct3 >::HumanReadable(this->mGyro);
    description << "  Magnetometer, units G (Gauss):" << cmnData<vct3 >::HumanReadable(this->mMag);
    description << "  Temperature, units deg-C:" << cmnData<double >::HumanReadable(this->mTemp);
    description << "  Barometric pressure, units kPa (kilo-Pascal):" << cmnData<double >::HumanReadable(this->mPressure);
    return description.str();
}
bool prmIMUSensors::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<mtsGenericObject >::ScalarNumberIsFixed(*this)
           && cmnData<vct3 >::ScalarNumberIsFixed(this->mAccel)
           && cmnData<vct3 >::ScalarNumberIsFixed(this->mGyro)
           && cmnData<vct3 >::ScalarNumberIsFixed(this->mMag)
           && cmnData<double >::ScalarNumberIsFixed(this->mTemp)
           && cmnData<double >::ScalarNumberIsFixed(this->mPressure)
    ;
}
size_t prmIMUSensors::ScalarNumber(void) const {
    return 0
           + cmnData< mtsGenericObject >::ScalarNumber(*this)
           + cmnData<vct3 >::ScalarNumber(this->mAccel)
           + cmnData<vct3 >::ScalarNumber(this->mGyro)
           + cmnData<vct3 >::ScalarNumber(this->mMag)
           + cmnData<double >::ScalarNumber(this->mTemp)
           + cmnData<double >::ScalarNumber(this->mPressure)
    ;
}
std::string prmIMUSensors::ScalarDescription(const size_t index, const std::string & userDescription) const throw (std::out_of_range) {
    std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<mtsGenericObject >::ScalarNumber(*this);
    if (index < currentMaxIndex) {
        return cmnData<mtsGenericObject >::ScalarDescription(*this, index - baseIndex, prefix);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vct3 >::ScalarNumber(this->mAccel);
    if (index < currentMaxIndex) {
        return cmnData<vct3 >::ScalarDescription(this->mAccel, index - baseIndex, prefix + "Accel");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vct3 >::ScalarNumber(this->mGyro);
    if (index < currentMaxIndex) {
        return cmnData<vct3 >::ScalarDescription(this->mGyro, index - baseIndex, prefix + "Gyro");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vct3 >::ScalarNumber(this->mMag);
    if (index < currentMaxIndex) {
        return cmnData<vct3 >::ScalarDescription(this->mMag, index - baseIndex, prefix + "Mag");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<double >::ScalarNumber(this->mTemp);
    if (index < currentMaxIndex) {
        return cmnData<double >::ScalarDescription(this->mTemp, index - baseIndex, prefix + "Temp");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<double >::ScalarNumber(this->mPressure);
    if (index < currentMaxIndex) {
        return cmnData<double >::ScalarDescription(this->mPressure, index - baseIndex, prefix + "Pressure");
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: prmIMUSensors index out of range"));
    return "";
}
double prmIMUSensors::Scalar(const size_t index) const throw (std::out_of_range) {
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<mtsGenericObject >::ScalarNumber(*this);
    if (index < currentMaxIndex) {
        return cmnData<mtsGenericObject >::Scalar(*this, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vct3 >::ScalarNumber(this->mAccel);
    if (index < currentMaxIndex) {
        return cmnData<vct3 >::Scalar(this->mAccel, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vct3 >::ScalarNumber(this->mGyro);
    if (index < currentMaxIndex) {
        return cmnData<vct3 >::Scalar(this->mGyro, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vct3 >::ScalarNumber(this->mMag);
    if (index < currentMaxIndex) {
        return cmnData<vct3 >::Scalar(this->mMag, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<double >::ScalarNumber(this->mTemp);
    if (index < currentMaxIndex) {
        return cmnData<double >::Scalar(this->mTemp, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<double >::ScalarNumber(this->mPressure);
    if (index < currentMaxIndex) {
        return cmnData<double >::Scalar(this->mPressure, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalar: prmIMUSensors index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<prmIMUSensors >::SerializeText(const prmIMUSensors & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void prmIMUSensors::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<mtsGenericObject >::SerializeText(*(dynamic_cast<const mtsGenericObject*>(this)), jsonValue);
    cmnDataJSON<vct3 >::SerializeText(this->mAccel, jsonValue["Accel"]);
    cmnDataJSON<vct3 >::SerializeText(this->mGyro, jsonValue["Gyro"]);
    cmnDataJSON<vct3 >::SerializeText(this->mMag, jsonValue["Mag"]);
    cmnDataJSON<double >::SerializeText(this->mTemp, jsonValue["Temp"]);
    cmnDataJSON<double >::SerializeText(this->mPressure, jsonValue["Pressure"]);
}
template<>
void cmnDataJSON<prmIMUSensors >::DeSerializeText(prmIMUSensors & data, const Json::Value & jsonValue) throw (std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void prmIMUSensors::DeSerializeTextJSON(const Json::Value & jsonValue) throw (std::runtime_error) {
    cmnDataJSON<mtsGenericObject >::DeSerializeText(*(dynamic_cast<mtsGenericObject*>(this)), jsonValue);
    cmnDataJSON<vct3 >::DeSerializeText(this->mAccel, jsonValue["Accel"]);
    cmnDataJSON<vct3 >::DeSerializeText(this->mGyro, jsonValue["Gyro"]);
    cmnDataJSON<vct3 >::DeSerializeText(this->mMag, jsonValue["Mag"]);
    cmnDataJSON<double >::DeSerializeText(this->mTemp, jsonValue["Temp"]);
    cmnDataJSON<double >::DeSerializeText(this->mPressure, jsonValue["Pressure"]);
}
#endif // CISST_HAS_JSON


