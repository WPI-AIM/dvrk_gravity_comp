// file automatically generated, do not modify
// cisst version: 1.0.8
// source file: /home/davincic2/catkin_ws/src/cisst-saw/sawConstraintController/components/code/prmKinematicsOffsetState.cdg

#include <sawConstraintController/prmKinematicsOffsetState.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>

/* source line: 1 */

/* source line: 4 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(prmKinematicsOffsetStateProxy);

prmKinematicsOffsetState::prmKinematicsOffsetState(void):
      prmKinematicsState()
    , mbaseName()
    , mbaseKinematics(0)
    , moffset()
{}

prmKinematicsOffsetState::prmKinematicsOffsetState(const prmKinematicsOffsetState & other):
      prmKinematicsState(other)
    , mbaseName(other.mbaseName)
    , mbaseKinematics(other.mbaseKinematics)
    , moffset(other.moffset)
{}

prmKinematicsOffsetState::~prmKinematicsOffsetState(void){}


void prmKinematicsOffsetState::SerializeRaw(std::ostream & outputStream) const
{
    prmKinematicsState::SerializeRaw(outputStream);
    cmnSerializeRaw(outputStream, this->mbaseName);
    cmnSerializeRaw(outputStream, this->moffset);
}


void prmKinematicsOffsetState::DeSerializeRaw(std::istream & inputStream)
{
    prmKinematicsState::DeSerializeRaw(inputStream);
    cmnDeSerializeRaw(inputStream, this->mbaseName);
    cmnDeSerializeRaw(inputStream, this->moffset);
}


void prmKinematicsOffsetState::ToStream(std::ostream & outputStream) const
{
    outputStream << this->HumanReadable();
}

void prmKinematicsOffsetState::ToStreamRaw(std::ostream & outputStream, const char delimiter, bool headerOnly, const std::string & headerPrefix) const
{
    if (headerOnly) {
        outputStream << cmnData<prmKinematicsOffsetState >::SerializeDescription(*this, delimiter, headerPrefix);
    } else {
        cmnData<prmKinematicsOffsetState >::SerializeText(*this, outputStream, delimiter);
    }
}
/* source line: 11 */

/* accessors is set to: all */
void prmKinematicsOffsetState::GetbaseName(std::string & placeHolder) const
{
    placeHolder = this->mbaseName;
}

void prmKinematicsOffsetState::SetbaseName(const std::string & newValue)
{
    this->mbaseName = newValue;
}


/* accessors is set to: all */
const std::string & prmKinematicsOffsetState::baseName(void) const
{
    return this->mbaseName;
}

std::string & prmKinematicsOffsetState::baseName(void)
{
    return this->mbaseName;
}

/* source line: 17 */
/* source line: 26 */

/* accessors is set to: all */
void prmKinematicsOffsetState::Getoffset(vctFrm3 & placeHolder) const
{
    placeHolder = this->moffset;
}

void prmKinematicsOffsetState::Setoffset(const vctFrm3 & newValue)
{
    this->moffset = newValue;
}


/* accessors is set to: all */
const vctFrm3 & prmKinematicsOffsetState::offset(void) const
{
    return this->moffset;
}

vctFrm3 & prmKinematicsOffsetState::offset(void)
{
    return this->moffset;
}

/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const prmKinematicsOffsetState & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, prmKinematicsOffsetState & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void prmKinematicsOffsetState::Copy(const prmKinematicsOffsetState & source) {
    cmnData<prmKinematicsState >::Copy(*this, source);
    cmnData<std::string >::Copy(this->mbaseName, source.mbaseName);
    cmnData<vctFrm3 >::Copy(this->moffset, source.moffset);
}
void prmKinematicsOffsetState::SerializeBinary(std::ostream & outputStream) const throw (std::runtime_error) {
    cmnData<prmKinematicsState >::SerializeBinary(*this, outputStream);
    cmnData<std::string >::SerializeBinary(this->mbaseName, outputStream);
    cmnData<vctFrm3 >::SerializeBinary(this->moffset, outputStream);
}
void prmKinematicsOffsetState::DeSerializeBinary(std::istream & inputStream,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) throw (std::runtime_error) {
    cmnData<prmKinematicsState >::DeSerializeBinary(*this, inputStream, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->mbaseName, inputStream, localFormat, remoteFormat);
    cmnData<vctFrm3 >::DeSerializeBinary(this->moffset, inputStream, localFormat, remoteFormat);
}
void prmKinematicsOffsetState::SerializeText(std::ostream & outputStream, const char delimiter) const throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<prmKinematicsState >::SerializeText(*this, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<std::string >::SerializeText(this->mbaseName, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<vctFrm3 >::SerializeText(this->moffset, outputStream, delimiter);
}
std::string prmKinematicsOffsetState::SerializeDescription(const char delimiter, const std::string & userDescription) const {
    bool someData = false;
    const std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    std::stringstream description;
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<prmKinematicsState >::SerializeDescription(*this, delimiter, userDescription);
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<std::string >::SerializeDescription(this->mbaseName, delimiter, prefix + "baseName");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<vctFrm3 >::SerializeDescription(this->moffset, delimiter, prefix + "offset");
    return description.str();
}
void prmKinematicsOffsetState::DeSerializeText(std::istream & inputStream,
                                          const char delimiter) throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "prmKinematicsOffsetState");
    }
    someData = true;
    cmnData<prmKinematicsState >::DeSerializeText(*this, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "prmKinematicsOffsetState");
    }
    someData = true;
    cmnData<std::string >::DeSerializeText(this->mbaseName, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "prmKinematicsOffsetState");
    }
    someData = true;
    cmnData<vctFrm3 >::DeSerializeText(this->moffset, inputStream, delimiter);
}
std::string prmKinematicsOffsetState::HumanReadable(void) const {
    std::stringstream description;
    description << "prmKinematicsOffsetState" << std::endl;
    description << cmnData< prmKinematicsState >::HumanReadable(*this) << std::endl;
    description << "  baseName:" << cmnData<std::string >::HumanReadable(this->mbaseName);
    description << "  offset:" << cmnData<vctFrm3 >::HumanReadable(this->moffset);
    return description.str();
}
bool prmKinematicsOffsetState::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<prmKinematicsState >::ScalarNumberIsFixed(*this)
           && cmnData<std::string >::ScalarNumberIsFixed(this->mbaseName)
           && cmnData<vctFrm3 >::ScalarNumberIsFixed(this->moffset)
    ;
}
size_t prmKinematicsOffsetState::ScalarNumber(void) const {
    return 0
           + cmnData< prmKinematicsState >::ScalarNumber(*this)
           + cmnData<std::string >::ScalarNumber(this->mbaseName)
           + cmnData<vctFrm3 >::ScalarNumber(this->moffset)
    ;
}
std::string prmKinematicsOffsetState::ScalarDescription(const size_t index, const std::string & userDescription) const throw (std::out_of_range) {
    std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<prmKinematicsState >::ScalarNumber(*this);
    if (index < currentMaxIndex) {
        return cmnData<prmKinematicsState >::ScalarDescription(*this, index - baseIndex, prefix);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->mbaseName);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::ScalarDescription(this->mbaseName, index - baseIndex, prefix + "baseName");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vctFrm3 >::ScalarNumber(this->moffset);
    if (index < currentMaxIndex) {
        return cmnData<vctFrm3 >::ScalarDescription(this->moffset, index - baseIndex, prefix + "offset");
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: prmKinematicsOffsetState index out of range"));
    return "";
}
double prmKinematicsOffsetState::Scalar(const size_t index) const throw (std::out_of_range) {
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<prmKinematicsState >::ScalarNumber(*this);
    if (index < currentMaxIndex) {
        return cmnData<prmKinematicsState >::Scalar(*this, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->mbaseName);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::Scalar(this->mbaseName, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vctFrm3 >::ScalarNumber(this->moffset);
    if (index < currentMaxIndex) {
        return cmnData<vctFrm3 >::Scalar(this->moffset, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalar: prmKinematicsOffsetState index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<prmKinematicsOffsetState >::SerializeText(const prmKinematicsOffsetState & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void prmKinematicsOffsetState::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<prmKinematicsState >::SerializeText(*(dynamic_cast<const prmKinematicsState*>(this)), jsonValue);
    cmnDataJSON<std::string >::SerializeText(this->mbaseName, jsonValue["baseName"]);
    cmnDataJSON<vctFrm3 >::SerializeText(this->moffset, jsonValue["offset"]);
}
template<>
void cmnDataJSON<prmKinematicsOffsetState >::DeSerializeText(prmKinematicsOffsetState & data, const Json::Value & jsonValue) throw (std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void prmKinematicsOffsetState::DeSerializeTextJSON(const Json::Value & jsonValue) throw (std::runtime_error) {
    cmnDataJSON<prmKinematicsState >::DeSerializeText(*(dynamic_cast<prmKinematicsState*>(this)), jsonValue);
    cmnDataJSON<std::string >::DeSerializeText(this->mbaseName, jsonValue["baseName"]);
    cmnDataJSON<vctFrm3 >::DeSerializeText(this->moffset, jsonValue["offset"]);
}
#endif // CISST_HAS_JSON

/* source line: 50 */


/*! Constructor
*/ 
prmKinematicsOffsetState::prmKinematicsOffsetState(const std::string & n, const std::string & bn, const vctFrm3 & o) : prmKinematicsState()
{	
	Name = n;
	UserCount = 0;
    moffset = o;
    mbaseName = bn;
	NeedsBase = true;
}	

//! Finds the base kinematics object by name and assigns it to the base kinematics pointer
/*! LookupKinematics
@param k map of names to kinematics
*/
void prmKinematicsOffsetState::LookupKinematics(const std::map<std::string,prmKinematicsState *> & k)
{
    std::map<std::string,prmKinematicsState *>::const_iterator it;
    it = k.find(mbaseName);
    if(it != k.end())
    {
        mbaseKinematics = it->second;
        NeedsBase = false;
    }
    else
    {
        std::cerr << "Base kinematics \"" << mbaseName << "\" not found!" << std::endl;
    }
}


