// file automatically generated, do not modify
// cisst version: 1.0.8
// source file: /home/davincic2/catkin_ws/src/cisst-saw/sawConstraintController/components/code/prmOffsetState.cdg

#include <sawConstraintController/prmOffsetState.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>

/* source line: 1 */

/* source line: 5 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(prmOffsetStateProxy);

prmOffsetState::prmOffsetState(void):
      prmSensorState()
    , mbaseName()
    , mbaseSensor(0)
    , moffsetFrame()
{}

prmOffsetState::prmOffsetState(const prmOffsetState & other):
      prmSensorState(other)
    , mbaseName(other.mbaseName)
    , mbaseSensor(other.mbaseSensor)
    , moffsetFrame(other.moffsetFrame)
{}

prmOffsetState::~prmOffsetState(void){}


void prmOffsetState::SerializeRaw(std::ostream & outputStream) const
{
    prmSensorState::SerializeRaw(outputStream);
    cmnSerializeRaw(outputStream, this->mbaseName);
    cmnSerializeRaw(outputStream, this->moffsetFrame);
}


void prmOffsetState::DeSerializeRaw(std::istream & inputStream)
{
    prmSensorState::DeSerializeRaw(inputStream);
    cmnDeSerializeRaw(inputStream, this->mbaseName);
    cmnDeSerializeRaw(inputStream, this->moffsetFrame);
}


void prmOffsetState::ToStream(std::ostream & outputStream) const
{
    outputStream << this->HumanReadable();
}

void prmOffsetState::ToStreamRaw(std::ostream & outputStream, const char delimiter, bool headerOnly, const std::string & headerPrefix) const
{
    if (headerOnly) {
        outputStream << cmnData<prmOffsetState >::SerializeDescription(*this, delimiter, headerPrefix);
    } else {
        cmnData<prmOffsetState >::SerializeText(*this, outputStream, delimiter);
    }
}
/* source line: 12 */

/* accessors is set to: all */
void prmOffsetState::GetbaseName(std::string & placeHolder) const
{
    placeHolder = this->mbaseName;
}

void prmOffsetState::SetbaseName(const std::string & newValue)
{
    this->mbaseName = newValue;
}


/* accessors is set to: all */
const std::string & prmOffsetState::baseName(void) const
{
    return this->mbaseName;
}

std::string & prmOffsetState::baseName(void)
{
    return this->mbaseName;
}

/* source line: 18 */
/* source line: 27 */

/* accessors is set to: all */
void prmOffsetState::GetoffsetFrame(vctFrm3 & placeHolder) const
{
    placeHolder = this->moffsetFrame;
}

void prmOffsetState::SetoffsetFrame(const vctFrm3 & newValue)
{
    this->moffsetFrame = newValue;
}


/* accessors is set to: all */
const vctFrm3 & prmOffsetState::offsetFrame(void) const
{
    return this->moffsetFrame;
}

vctFrm3 & prmOffsetState::offsetFrame(void)
{
    return this->moffsetFrame;
}

/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const prmOffsetState & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, prmOffsetState & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void prmOffsetState::Copy(const prmOffsetState & source) {
    cmnData<prmSensorState >::Copy(*this, source);
    cmnData<std::string >::Copy(this->mbaseName, source.mbaseName);
    cmnData<vctFrm3 >::Copy(this->moffsetFrame, source.moffsetFrame);
}
void prmOffsetState::SerializeBinary(std::ostream & outputStream) const throw (std::runtime_error) {
    cmnData<prmSensorState >::SerializeBinary(*this, outputStream);
    cmnData<std::string >::SerializeBinary(this->mbaseName, outputStream);
    cmnData<vctFrm3 >::SerializeBinary(this->moffsetFrame, outputStream);
}
void prmOffsetState::DeSerializeBinary(std::istream & inputStream,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) throw (std::runtime_error) {
    cmnData<prmSensorState >::DeSerializeBinary(*this, inputStream, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->mbaseName, inputStream, localFormat, remoteFormat);
    cmnData<vctFrm3 >::DeSerializeBinary(this->moffsetFrame, inputStream, localFormat, remoteFormat);
}
void prmOffsetState::SerializeText(std::ostream & outputStream, const char delimiter) const throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<prmSensorState >::SerializeText(*this, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<std::string >::SerializeText(this->mbaseName, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<vctFrm3 >::SerializeText(this->moffsetFrame, outputStream, delimiter);
}
std::string prmOffsetState::SerializeDescription(const char delimiter, const std::string & userDescription) const {
    bool someData = false;
    const std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    std::stringstream description;
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<prmSensorState >::SerializeDescription(*this, delimiter, userDescription);
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<std::string >::SerializeDescription(this->mbaseName, delimiter, prefix + "baseName");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<vctFrm3 >::SerializeDescription(this->moffsetFrame, delimiter, prefix + "offsetFrame");
    return description.str();
}
void prmOffsetState::DeSerializeText(std::istream & inputStream,
                                          const char delimiter) throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "prmOffsetState");
    }
    someData = true;
    cmnData<prmSensorState >::DeSerializeText(*this, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "prmOffsetState");
    }
    someData = true;
    cmnData<std::string >::DeSerializeText(this->mbaseName, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "prmOffsetState");
    }
    someData = true;
    cmnData<vctFrm3 >::DeSerializeText(this->moffsetFrame, inputStream, delimiter);
}
std::string prmOffsetState::HumanReadable(void) const {
    std::stringstream description;
    description << "prmOffsetState" << std::endl;
    description << cmnData< prmSensorState >::HumanReadable(*this) << std::endl;
    description << "  baseName:" << cmnData<std::string >::HumanReadable(this->mbaseName);
    description << "  offsetFrame:" << cmnData<vctFrm3 >::HumanReadable(this->moffsetFrame);
    return description.str();
}
bool prmOffsetState::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<prmSensorState >::ScalarNumberIsFixed(*this)
           && cmnData<std::string >::ScalarNumberIsFixed(this->mbaseName)
           && cmnData<vctFrm3 >::ScalarNumberIsFixed(this->moffsetFrame)
    ;
}
size_t prmOffsetState::ScalarNumber(void) const {
    return 0
           + cmnData< prmSensorState >::ScalarNumber(*this)
           + cmnData<std::string >::ScalarNumber(this->mbaseName)
           + cmnData<vctFrm3 >::ScalarNumber(this->moffsetFrame)
    ;
}
std::string prmOffsetState::ScalarDescription(const size_t index, const std::string & userDescription) const throw (std::out_of_range) {
    std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<prmSensorState >::ScalarNumber(*this);
    if (index < currentMaxIndex) {
        return cmnData<prmSensorState >::ScalarDescription(*this, index - baseIndex, prefix);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->mbaseName);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::ScalarDescription(this->mbaseName, index - baseIndex, prefix + "baseName");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vctFrm3 >::ScalarNumber(this->moffsetFrame);
    if (index < currentMaxIndex) {
        return cmnData<vctFrm3 >::ScalarDescription(this->moffsetFrame, index - baseIndex, prefix + "offsetFrame");
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: prmOffsetState index out of range"));
    return "";
}
double prmOffsetState::Scalar(const size_t index) const throw (std::out_of_range) {
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<prmSensorState >::ScalarNumber(*this);
    if (index < currentMaxIndex) {
        return cmnData<prmSensorState >::Scalar(*this, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->mbaseName);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::Scalar(this->mbaseName, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vctFrm3 >::ScalarNumber(this->moffsetFrame);
    if (index < currentMaxIndex) {
        return cmnData<vctFrm3 >::Scalar(this->moffsetFrame, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalar: prmOffsetState index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<prmOffsetState >::SerializeText(const prmOffsetState & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void prmOffsetState::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<prmSensorState >::SerializeText(*(dynamic_cast<const prmSensorState*>(this)), jsonValue);
    cmnDataJSON<std::string >::SerializeText(this->mbaseName, jsonValue["baseName"]);
    cmnDataJSON<vctFrm3 >::SerializeText(this->moffsetFrame, jsonValue["offsetFrame"]);
}
template<>
void cmnDataJSON<prmOffsetState >::DeSerializeText(prmOffsetState & data, const Json::Value & jsonValue) throw (std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void prmOffsetState::DeSerializeTextJSON(const Json::Value & jsonValue) throw (std::runtime_error) {
    cmnDataJSON<prmSensorState >::DeSerializeText(*(dynamic_cast<prmSensorState*>(this)), jsonValue);
    cmnDataJSON<std::string >::DeSerializeText(this->mbaseName, jsonValue["baseName"]);
    cmnDataJSON<vctFrm3 >::DeSerializeText(this->moffsetFrame, jsonValue["offsetFrame"]);
}
#endif // CISST_HAS_JSON

/* source line: 51 */


/*! Constructor
*/ 
prmOffsetState::prmOffsetState(const std::string & n, const std::string & bn, const vctFrm3 & of) : prmSensorState(n)
{	
    mbaseName = bn;
    moffsetFrame = of;
	NeedsBase = true;
}	

//! Finds the base sensor object by name and assigns it to the base sensor pointer
/*! LookupSensor
@param s map of names to sensors
*/
void prmOffsetState::LookupSensor(const std::map<std::string,prmSensorState *> & s)
{
    std::map<std::string,prmSensorState *>::const_iterator it;
    it = s.find(mbaseName);
    if(it != s.end())
    {
        mbaseSensor = it->second;
        NeedsBase = false;
    }
    else
    {
        std::cerr << "Base sensor \"" << mbaseName << "\" not found!" << std::endl;
    }
}

