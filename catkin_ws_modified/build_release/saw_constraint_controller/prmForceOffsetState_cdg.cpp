// file automatically generated, do not modify
// cisst version: 1.0.8
// source file: /home/davincic2/catkin_ws/src/cisst-saw/sawConstraintController/components/code/prmForceOffsetState.cdg

#include <sawConstraintController/prmForceOffsetState.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>

/* source line: 1 */

/* source line: 9 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(prmForceOffsetStateProxy);

prmForceOffsetState::prmForceOffsetState(void):
      prmOffsetState()
{}

prmForceOffsetState::prmForceOffsetState(const prmForceOffsetState & other):
      prmOffsetState(other)
{}

prmForceOffsetState::~prmForceOffsetState(void){}


void prmForceOffsetState::SerializeRaw(std::ostream & outputStream) const
{
    prmOffsetState::SerializeRaw(outputStream);
}


void prmForceOffsetState::DeSerializeRaw(std::istream & inputStream)
{
    prmOffsetState::DeSerializeRaw(inputStream);
}


void prmForceOffsetState::ToStream(std::ostream & outputStream) const
{
    outputStream << this->HumanReadable();
}

void prmForceOffsetState::ToStreamRaw(std::ostream & outputStream, const char delimiter, bool headerOnly, const std::string & headerPrefix) const
{
    if (headerOnly) {
        outputStream << cmnData<prmForceOffsetState >::SerializeDescription(*this, delimiter, headerPrefix);
    } else {
        cmnData<prmForceOffsetState >::SerializeText(*this, outputStream, delimiter);
    }
}
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const prmForceOffsetState & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, prmForceOffsetState & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void prmForceOffsetState::Copy(const prmForceOffsetState & source) {
    cmnData<prmOffsetState >::Copy(*this, source);
}
void prmForceOffsetState::SerializeBinary(std::ostream & outputStream) const throw (std::runtime_error) {
    cmnData<prmOffsetState >::SerializeBinary(*this, outputStream);
}
void prmForceOffsetState::DeSerializeBinary(std::istream & inputStream,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) throw (std::runtime_error) {
    cmnData<prmOffsetState >::DeSerializeBinary(*this, inputStream, localFormat, remoteFormat);
}
void prmForceOffsetState::SerializeText(std::ostream & outputStream, const char delimiter) const throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<prmOffsetState >::SerializeText(*this, outputStream, delimiter);
}
std::string prmForceOffsetState::SerializeDescription(const char delimiter, const std::string & userDescription) const {
    bool someData = false;
    const std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    std::stringstream description;
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<prmOffsetState >::SerializeDescription(*this, delimiter, userDescription);
    return description.str();
}
void prmForceOffsetState::DeSerializeText(std::istream & inputStream,
                                          const char delimiter) throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "prmForceOffsetState");
    }
    someData = true;
    cmnData<prmOffsetState >::DeSerializeText(*this, inputStream, delimiter);
}
std::string prmForceOffsetState::HumanReadable(void) const {
    std::stringstream description;
    description << "prmForceOffsetState" << std::endl;
    description << cmnData< prmOffsetState >::HumanReadable(*this) << std::endl;
    return description.str();
}
bool prmForceOffsetState::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<prmOffsetState >::ScalarNumberIsFixed(*this)
    ;
}
size_t prmForceOffsetState::ScalarNumber(void) const {
    return 0
           + cmnData< prmOffsetState >::ScalarNumber(*this)
    ;
}
std::string prmForceOffsetState::ScalarDescription(const size_t index, const std::string & userDescription) const throw (std::out_of_range) {
    std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<prmOffsetState >::ScalarNumber(*this);
    if (index < currentMaxIndex) {
        return cmnData<prmOffsetState >::ScalarDescription(*this, index - baseIndex, prefix);
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: prmForceOffsetState index out of range"));
    return "";
}
double prmForceOffsetState::Scalar(const size_t index) const throw (std::out_of_range) {
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<prmOffsetState >::ScalarNumber(*this);
    if (index < currentMaxIndex) {
        return cmnData<prmOffsetState >::Scalar(*this, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalar: prmForceOffsetState index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<prmForceOffsetState >::SerializeText(const prmForceOffsetState & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void prmForceOffsetState::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<prmOffsetState >::SerializeText(*(dynamic_cast<const prmOffsetState*>(this)), jsonValue);
}
template<>
void cmnDataJSON<prmForceOffsetState >::DeSerializeText(prmForceOffsetState & data, const Json::Value & jsonValue) throw (std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void prmForceOffsetState::DeSerializeTextJSON(const Json::Value & jsonValue) throw (std::runtime_error) {
    cmnDataJSON<prmOffsetState >::DeSerializeText(*(dynamic_cast<prmOffsetState*>(this)), jsonValue);
}
#endif // CISST_HAS_JSON

/* source line: 27 */


//! Updates values based on those of the base force sensor
/*! Update
*/
void prmForceOffsetState::Update()
{
	Values.SetSize(6);
	vct3 baseValuesTrans, baseValuesRot, f;
	for(size_t i = 0; i < 3; i++)
	{
        baseValuesTrans[i] = mbaseSensor->Values[i];
        baseValuesRot[i] = mbaseSensor->Values[3+i];
	}
    f = moffsetFrame.Rotation() * baseValuesTrans;
    Values[0] = f[0];
    Values[1] = f[1];
    Values[2] = f[2];
    f = moffsetFrame.Rotation() * baseValuesRot;
    Values[3] = f[0];
    Values[4] = f[1];
    Values[5] = f[2];
}

