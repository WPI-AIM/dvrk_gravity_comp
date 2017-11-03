// file automatically generated, do not modify
// cisst version: 1.0.8
// source file: /home/davincic2/catkin_ws/src/cisst-saw/sawConstraintController/components/code/prmKinematicsState.cdg

#include <sawConstraintController/prmKinematicsState.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>

/* source line: 1 */

/* source line: 7 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(prmKinematicsStateProxy);

prmKinematicsState::prmKinematicsState(void):
      Frame()
    , CartesianVelocity()
    , AngularVelocity()
    , Jacobian()
    , InverseJacobian()
    , UserCount()
    , Name()
    , NeedsBase()
    , JointState(0)
{}

prmKinematicsState::prmKinematicsState(const prmKinematicsState & other):
      Frame(other.Frame)
    , CartesianVelocity(other.CartesianVelocity)
    , AngularVelocity(other.AngularVelocity)
    , Jacobian(other.Jacobian)
    , InverseJacobian(other.InverseJacobian)
    , UserCount(other.UserCount)
    , Name(other.Name)
    , NeedsBase(other.NeedsBase)
    , JointState(other.JointState)
{}

prmKinematicsState::~prmKinematicsState(void){}


void prmKinematicsState::SerializeRaw(std::ostream & outputStream) const
{
    cmnSerializeRaw(outputStream, this->Frame);
    cmnSerializeRaw(outputStream, this->CartesianVelocity);
    cmnSerializeRaw(outputStream, this->AngularVelocity);
    cmnSerializeRaw(outputStream, this->Jacobian);
    cmnSerializeRaw(outputStream, this->InverseJacobian);
    cmnSerializeRaw(outputStream, this->UserCount);
    cmnSerializeRaw(outputStream, this->Name);
    cmnSerializeRaw(outputStream, this->NeedsBase);
}


void prmKinematicsState::DeSerializeRaw(std::istream & inputStream)
{
    cmnDeSerializeRaw(inputStream, this->Frame);
    cmnDeSerializeRaw(inputStream, this->CartesianVelocity);
    cmnDeSerializeRaw(inputStream, this->AngularVelocity);
    cmnDeSerializeRaw(inputStream, this->Jacobian);
    cmnDeSerializeRaw(inputStream, this->InverseJacobian);
    cmnDeSerializeRaw(inputStream, this->UserCount);
    cmnDeSerializeRaw(inputStream, this->Name);
    cmnDeSerializeRaw(inputStream, this->NeedsBase);
}


void prmKinematicsState::ToStream(std::ostream & outputStream) const
{
    outputStream << this->HumanReadable();
}

void prmKinematicsState::ToStreamRaw(std::ostream & outputStream, const char delimiter, bool headerOnly, const std::string & headerPrefix) const
{
    if (headerOnly) {
        outputStream << cmnData<prmKinematicsState >::SerializeDescription(*this, delimiter, headerPrefix);
    } else {
        cmnData<prmKinematicsState >::SerializeText(*this, outputStream, delimiter);
    }
}
/* source line: 13 */
/* source line: 20 */
/* source line: 27 */
/* source line: 34 */
/* source line: 41 */
/* source line: 48 */
/* source line: 55 */
/* source line: 62 */
/* source line: 69 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const prmKinematicsState & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, prmKinematicsState & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void prmKinematicsState::Copy(const prmKinematicsState & source) {
    cmnData<vctFrm3 >::Copy(this->Frame, source.Frame);
    cmnData<vct3 >::Copy(this->CartesianVelocity, source.CartesianVelocity);
    cmnData<vct3 >::Copy(this->AngularVelocity, source.AngularVelocity);
    cmnData<vctDoubleMat >::Copy(this->Jacobian, source.Jacobian);
    cmnData<vctDoubleMat >::Copy(this->InverseJacobian, source.InverseJacobian);
    cmnData<int >::Copy(this->UserCount, source.UserCount);
    cmnData<std::string >::Copy(this->Name, source.Name);
    cmnData<bool >::Copy(this->NeedsBase, source.NeedsBase);
}
void prmKinematicsState::SerializeBinary(std::ostream & outputStream) const throw (std::runtime_error) {
    cmnData<vctFrm3 >::SerializeBinary(this->Frame, outputStream);
    cmnData<vct3 >::SerializeBinary(this->CartesianVelocity, outputStream);
    cmnData<vct3 >::SerializeBinary(this->AngularVelocity, outputStream);
    cmnData<vctDoubleMat >::SerializeBinary(this->Jacobian, outputStream);
    cmnData<vctDoubleMat >::SerializeBinary(this->InverseJacobian, outputStream);
    cmnData<int >::SerializeBinary(this->UserCount, outputStream);
    cmnData<std::string >::SerializeBinary(this->Name, outputStream);
    cmnData<bool >::SerializeBinary(this->NeedsBase, outputStream);
}
void prmKinematicsState::DeSerializeBinary(std::istream & inputStream,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) throw (std::runtime_error) {
    cmnData<vctFrm3 >::DeSerializeBinary(this->Frame, inputStream, localFormat, remoteFormat);
    cmnData<vct3 >::DeSerializeBinary(this->CartesianVelocity, inputStream, localFormat, remoteFormat);
    cmnData<vct3 >::DeSerializeBinary(this->AngularVelocity, inputStream, localFormat, remoteFormat);
    cmnData<vctDoubleMat >::DeSerializeBinary(this->Jacobian, inputStream, localFormat, remoteFormat);
    cmnData<vctDoubleMat >::DeSerializeBinary(this->InverseJacobian, inputStream, localFormat, remoteFormat);
    cmnData<int >::DeSerializeBinary(this->UserCount, inputStream, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->Name, inputStream, localFormat, remoteFormat);
    cmnData<bool >::DeSerializeBinary(this->NeedsBase, inputStream, localFormat, remoteFormat);
}
void prmKinematicsState::SerializeText(std::ostream & outputStream, const char delimiter) const throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<vctFrm3 >::SerializeText(this->Frame, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<vct3 >::SerializeText(this->CartesianVelocity, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<vct3 >::SerializeText(this->AngularVelocity, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<vctDoubleMat >::SerializeText(this->Jacobian, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<vctDoubleMat >::SerializeText(this->InverseJacobian, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<int >::SerializeText(this->UserCount, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<std::string >::SerializeText(this->Name, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<bool >::SerializeText(this->NeedsBase, outputStream, delimiter);
}
std::string prmKinematicsState::SerializeDescription(const char delimiter, const std::string & userDescription) const {
    bool someData = false;
    const std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    std::stringstream description;
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<vctFrm3 >::SerializeDescription(this->Frame, delimiter, prefix + "Frame");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<vct3 >::SerializeDescription(this->CartesianVelocity, delimiter, prefix + "CartesianVelocity");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<vct3 >::SerializeDescription(this->AngularVelocity, delimiter, prefix + "AngularVelocity");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<vctDoubleMat >::SerializeDescription(this->Jacobian, delimiter, prefix + "Jacobian");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<vctDoubleMat >::SerializeDescription(this->InverseJacobian, delimiter, prefix + "InverseJacobian");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<int >::SerializeDescription(this->UserCount, delimiter, prefix + "UserCount");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<std::string >::SerializeDescription(this->Name, delimiter, prefix + "Name");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<bool >::SerializeDescription(this->NeedsBase, delimiter, prefix + "NeedsBase");
    return description.str();
}
void prmKinematicsState::DeSerializeText(std::istream & inputStream,
                                          const char delimiter) throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "prmKinematicsState");
    }
    someData = true;
    cmnData<vctFrm3 >::DeSerializeText(this->Frame, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "prmKinematicsState");
    }
    someData = true;
    cmnData<vct3 >::DeSerializeText(this->CartesianVelocity, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "prmKinematicsState");
    }
    someData = true;
    cmnData<vct3 >::DeSerializeText(this->AngularVelocity, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "prmKinematicsState");
    }
    someData = true;
    cmnData<vctDoubleMat >::DeSerializeText(this->Jacobian, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "prmKinematicsState");
    }
    someData = true;
    cmnData<vctDoubleMat >::DeSerializeText(this->InverseJacobian, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "prmKinematicsState");
    }
    someData = true;
    cmnData<int >::DeSerializeText(this->UserCount, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "prmKinematicsState");
    }
    someData = true;
    cmnData<std::string >::DeSerializeText(this->Name, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "prmKinematicsState");
    }
    someData = true;
    cmnData<bool >::DeSerializeText(this->NeedsBase, inputStream, delimiter);
}
std::string prmKinematicsState::HumanReadable(void) const {
    std::stringstream description;
    description << "prmKinematicsState" << std::endl;
    description << "  Frame:" << cmnData<vctFrm3 >::HumanReadable(this->Frame);
    description << "  CartesianVelocity:" << cmnData<vct3 >::HumanReadable(this->CartesianVelocity);
    description << "  AngularVelocity:" << cmnData<vct3 >::HumanReadable(this->AngularVelocity);
    description << "  Jacobian:" << cmnData<vctDoubleMat >::HumanReadable(this->Jacobian);
    description << "  InverseJacobian:" << cmnData<vctDoubleMat >::HumanReadable(this->InverseJacobian);
    description << "  UserCount:" << cmnData<int >::HumanReadable(this->UserCount);
    description << "  Name:" << cmnData<std::string >::HumanReadable(this->Name);
    description << "  NeedsBase:" << cmnData<bool >::HumanReadable(this->NeedsBase);
    return description.str();
}
bool prmKinematicsState::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<vctFrm3 >::ScalarNumberIsFixed(this->Frame)
           && cmnData<vct3 >::ScalarNumberIsFixed(this->CartesianVelocity)
           && cmnData<vct3 >::ScalarNumberIsFixed(this->AngularVelocity)
           && cmnData<vctDoubleMat >::ScalarNumberIsFixed(this->Jacobian)
           && cmnData<vctDoubleMat >::ScalarNumberIsFixed(this->InverseJacobian)
           && cmnData<int >::ScalarNumberIsFixed(this->UserCount)
           && cmnData<std::string >::ScalarNumberIsFixed(this->Name)
           && cmnData<bool >::ScalarNumberIsFixed(this->NeedsBase)
    ;
}
size_t prmKinematicsState::ScalarNumber(void) const {
    return 0
           + cmnData<vctFrm3 >::ScalarNumber(this->Frame)
           + cmnData<vct3 >::ScalarNumber(this->CartesianVelocity)
           + cmnData<vct3 >::ScalarNumber(this->AngularVelocity)
           + cmnData<vctDoubleMat >::ScalarNumber(this->Jacobian)
           + cmnData<vctDoubleMat >::ScalarNumber(this->InverseJacobian)
           + cmnData<int >::ScalarNumber(this->UserCount)
           + cmnData<std::string >::ScalarNumber(this->Name)
           + cmnData<bool >::ScalarNumber(this->NeedsBase)
    ;
}
std::string prmKinematicsState::ScalarDescription(const size_t index, const std::string & userDescription) const throw (std::out_of_range) {
    std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<vctFrm3 >::ScalarNumber(this->Frame);
    if (index < currentMaxIndex) {
        return cmnData<vctFrm3 >::ScalarDescription(this->Frame, index - baseIndex, prefix + "Frame");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vct3 >::ScalarNumber(this->CartesianVelocity);
    if (index < currentMaxIndex) {
        return cmnData<vct3 >::ScalarDescription(this->CartesianVelocity, index - baseIndex, prefix + "CartesianVelocity");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vct3 >::ScalarNumber(this->AngularVelocity);
    if (index < currentMaxIndex) {
        return cmnData<vct3 >::ScalarDescription(this->AngularVelocity, index - baseIndex, prefix + "AngularVelocity");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vctDoubleMat >::ScalarNumber(this->Jacobian);
    if (index < currentMaxIndex) {
        return cmnData<vctDoubleMat >::ScalarDescription(this->Jacobian, index - baseIndex, prefix + "Jacobian");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vctDoubleMat >::ScalarNumber(this->InverseJacobian);
    if (index < currentMaxIndex) {
        return cmnData<vctDoubleMat >::ScalarDescription(this->InverseJacobian, index - baseIndex, prefix + "InverseJacobian");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<int >::ScalarNumber(this->UserCount);
    if (index < currentMaxIndex) {
        return cmnData<int >::ScalarDescription(this->UserCount, index - baseIndex, prefix + "UserCount");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->Name);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::ScalarDescription(this->Name, index - baseIndex, prefix + "Name");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<bool >::ScalarNumber(this->NeedsBase);
    if (index < currentMaxIndex) {
        return cmnData<bool >::ScalarDescription(this->NeedsBase, index - baseIndex, prefix + "NeedsBase");
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: prmKinematicsState index out of range"));
    return "";
}
double prmKinematicsState::Scalar(const size_t index) const throw (std::out_of_range) {
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<vctFrm3 >::ScalarNumber(this->Frame);
    if (index < currentMaxIndex) {
        return cmnData<vctFrm3 >::Scalar(this->Frame, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vct3 >::ScalarNumber(this->CartesianVelocity);
    if (index < currentMaxIndex) {
        return cmnData<vct3 >::Scalar(this->CartesianVelocity, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vct3 >::ScalarNumber(this->AngularVelocity);
    if (index < currentMaxIndex) {
        return cmnData<vct3 >::Scalar(this->AngularVelocity, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vctDoubleMat >::ScalarNumber(this->Jacobian);
    if (index < currentMaxIndex) {
        return cmnData<vctDoubleMat >::Scalar(this->Jacobian, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vctDoubleMat >::ScalarNumber(this->InverseJacobian);
    if (index < currentMaxIndex) {
        return cmnData<vctDoubleMat >::Scalar(this->InverseJacobian, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<int >::ScalarNumber(this->UserCount);
    if (index < currentMaxIndex) {
        return cmnData<int >::Scalar(this->UserCount, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->Name);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::Scalar(this->Name, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<bool >::ScalarNumber(this->NeedsBase);
    if (index < currentMaxIndex) {
        return cmnData<bool >::Scalar(this->NeedsBase, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalar: prmKinematicsState index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<prmKinematicsState >::SerializeText(const prmKinematicsState & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void prmKinematicsState::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<vctFrm3 >::SerializeText(this->Frame, jsonValue["Frame"]);
    cmnDataJSON<vct3 >::SerializeText(this->CartesianVelocity, jsonValue["CartesianVelocity"]);
    cmnDataJSON<vct3 >::SerializeText(this->AngularVelocity, jsonValue["AngularVelocity"]);
    cmnDataJSON<vctDoubleMat >::SerializeText(this->Jacobian, jsonValue["Jacobian"]);
    cmnDataJSON<vctDoubleMat >::SerializeText(this->InverseJacobian, jsonValue["InverseJacobian"]);
    cmnDataJSON<int >::SerializeText(this->UserCount, jsonValue["UserCount"]);
    cmnDataJSON<std::string >::SerializeText(this->Name, jsonValue["Name"]);
    cmnDataJSON<bool >::SerializeText(this->NeedsBase, jsonValue["NeedsBase"]);
}
template<>
void cmnDataJSON<prmKinematicsState >::DeSerializeText(prmKinematicsState & data, const Json::Value & jsonValue) throw (std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void prmKinematicsState::DeSerializeTextJSON(const Json::Value & jsonValue) throw (std::runtime_error) {
    cmnDataJSON<vctFrm3 >::DeSerializeText(this->Frame, jsonValue["Frame"]);
    cmnDataJSON<vct3 >::DeSerializeText(this->CartesianVelocity, jsonValue["CartesianVelocity"]);
    cmnDataJSON<vct3 >::DeSerializeText(this->AngularVelocity, jsonValue["AngularVelocity"]);
    cmnDataJSON<vctDoubleMat >::DeSerializeText(this->Jacobian, jsonValue["Jacobian"]);
    cmnDataJSON<vctDoubleMat >::DeSerializeText(this->InverseJacobian, jsonValue["InverseJacobian"]);
    cmnDataJSON<int >::DeSerializeText(this->UserCount, jsonValue["UserCount"]);
    cmnDataJSON<std::string >::DeSerializeText(this->Name, jsonValue["Name"]);
    cmnDataJSON<bool >::DeSerializeText(this->NeedsBase, jsonValue["NeedsBase"]);
}
#endif // CISST_HAS_JSON

/* source line: 95 */


    /*! Constructor */
    prmKinematicsState::prmKinematicsState(const std::string & n, prmJointState * js)
    {
        Name = n;
        UserCount = 0;
        JointState = js;
        NeedsBase = false;
    }

