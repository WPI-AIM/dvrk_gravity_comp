// file automatically generated, do not modify
// cisst version: 1.0.8
// source file: /home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstParameterTypes/code/../prmFixtureGainCartesianSet.cdg

#include <cisstParameterTypes/prmFixtureGainCartesianSet.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>

/* source line: 1 */

/* source line: 13 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(prmFixtureGainCartesianSetProxy);

prmFixtureGainCartesianSet::prmFixtureGainCartesianSet(void):
      mtsGenericObject()
    , mForceOrientation()
    , mForcePosition()
    , mTorqueOrientation()
    , mPositionStiffnessPos()
    , mPositionStiffnessNeg()
    , mPositionDampingPos()
    , mPositionDampingNeg()
    , mForceBiasPos()
    , mForceBiasNeg()
    , mOrientationStiffnessPos()
    , mOrientationStiffnessNeg()
    , mOrientationDampingPos()
    , mOrientationDampingNeg()
    , mTorqueBiasPos()
    , mTorqueBiasNeg()
{}

prmFixtureGainCartesianSet::prmFixtureGainCartesianSet(const prmFixtureGainCartesianSet & other):
      mtsGenericObject(other)
    , mForceOrientation(other.mForceOrientation)
    , mForcePosition(other.mForcePosition)
    , mTorqueOrientation(other.mTorqueOrientation)
    , mPositionStiffnessPos(other.mPositionStiffnessPos)
    , mPositionStiffnessNeg(other.mPositionStiffnessNeg)
    , mPositionDampingPos(other.mPositionDampingPos)
    , mPositionDampingNeg(other.mPositionDampingNeg)
    , mForceBiasPos(other.mForceBiasPos)
    , mForceBiasNeg(other.mForceBiasNeg)
    , mOrientationStiffnessPos(other.mOrientationStiffnessPos)
    , mOrientationStiffnessNeg(other.mOrientationStiffnessNeg)
    , mOrientationDampingPos(other.mOrientationDampingPos)
    , mOrientationDampingNeg(other.mOrientationDampingNeg)
    , mTorqueBiasPos(other.mTorqueBiasPos)
    , mTorqueBiasNeg(other.mTorqueBiasNeg)
{}

prmFixtureGainCartesianSet::~prmFixtureGainCartesianSet(void){}


void prmFixtureGainCartesianSet::SerializeRaw(std::ostream & outputStream) const
{
    mtsGenericObject::SerializeRaw(outputStream);
    cmnSerializeRaw(outputStream, this->mForceOrientation);
    cmnSerializeRaw(outputStream, this->mForcePosition);
    cmnSerializeRaw(outputStream, this->mTorqueOrientation);
    cmnSerializeRaw(outputStream, this->mPositionStiffnessPos);
    cmnSerializeRaw(outputStream, this->mPositionStiffnessNeg);
    cmnSerializeRaw(outputStream, this->mPositionDampingPos);
    cmnSerializeRaw(outputStream, this->mPositionDampingNeg);
    cmnSerializeRaw(outputStream, this->mForceBiasPos);
    cmnSerializeRaw(outputStream, this->mForceBiasNeg);
    cmnSerializeRaw(outputStream, this->mOrientationStiffnessPos);
    cmnSerializeRaw(outputStream, this->mOrientationStiffnessNeg);
    cmnSerializeRaw(outputStream, this->mOrientationDampingPos);
    cmnSerializeRaw(outputStream, this->mOrientationDampingNeg);
    cmnSerializeRaw(outputStream, this->mTorqueBiasPos);
    cmnSerializeRaw(outputStream, this->mTorqueBiasNeg);
}


void prmFixtureGainCartesianSet::DeSerializeRaw(std::istream & inputStream)
{
    mtsGenericObject::DeSerializeRaw(inputStream);
    cmnDeSerializeRaw(inputStream, this->mForceOrientation);
    cmnDeSerializeRaw(inputStream, this->mForcePosition);
    cmnDeSerializeRaw(inputStream, this->mTorqueOrientation);
    cmnDeSerializeRaw(inputStream, this->mPositionStiffnessPos);
    cmnDeSerializeRaw(inputStream, this->mPositionStiffnessNeg);
    cmnDeSerializeRaw(inputStream, this->mPositionDampingPos);
    cmnDeSerializeRaw(inputStream, this->mPositionDampingNeg);
    cmnDeSerializeRaw(inputStream, this->mForceBiasPos);
    cmnDeSerializeRaw(inputStream, this->mForceBiasNeg);
    cmnDeSerializeRaw(inputStream, this->mOrientationStiffnessPos);
    cmnDeSerializeRaw(inputStream, this->mOrientationStiffnessNeg);
    cmnDeSerializeRaw(inputStream, this->mOrientationDampingPos);
    cmnDeSerializeRaw(inputStream, this->mOrientationDampingNeg);
    cmnDeSerializeRaw(inputStream, this->mTorqueBiasPos);
    cmnDeSerializeRaw(inputStream, this->mTorqueBiasNeg);
}


void prmFixtureGainCartesianSet::ToStream(std::ostream & outputStream) const
{
    outputStream << this->HumanReadable();
}

void prmFixtureGainCartesianSet::ToStreamRaw(std::ostream & outputStream, const char delimiter, bool headerOnly, const std::string & headerPrefix) const
{
    if (headerOnly) {
        outputStream << cmnData<prmFixtureGainCartesianSet >::SerializeDescription(*this, delimiter, headerPrefix);
    } else {
        cmnData<prmFixtureGainCartesianSet >::SerializeText(*this, outputStream, delimiter);
    }
}
/* source line: 23 */

/* accessors is set to: all */
void prmFixtureGainCartesianSet::GetForceOrientation(vctMatRot3 & placeHolder) const
{
    placeHolder = this->mForceOrientation;
}

void prmFixtureGainCartesianSet::SetForceOrientation(const vctMatRot3 & newValue)
{
    this->mForceOrientation = newValue;
}


/* accessors is set to: all */
const vctMatRot3 & prmFixtureGainCartesianSet::ForceOrientation(void) const
{
    return this->mForceOrientation;
}

vctMatRot3 & prmFixtureGainCartesianSet::ForceOrientation(void)
{
    return this->mForceOrientation;
}

/* source line: 29 */

/* accessors is set to: all */
void prmFixtureGainCartesianSet::GetForcePosition(vct3 & placeHolder) const
{
    placeHolder = this->mForcePosition;
}

void prmFixtureGainCartesianSet::SetForcePosition(const vct3 & newValue)
{
    this->mForcePosition = newValue;
}


/* accessors is set to: all */
const vct3 & prmFixtureGainCartesianSet::ForcePosition(void) const
{
    return this->mForcePosition;
}

vct3 & prmFixtureGainCartesianSet::ForcePosition(void)
{
    return this->mForcePosition;
}

/* source line: 35 */

/* accessors is set to: all */
void prmFixtureGainCartesianSet::GetTorqueOrientation(vctMatRot3 & placeHolder) const
{
    placeHolder = this->mTorqueOrientation;
}

void prmFixtureGainCartesianSet::SetTorqueOrientation(const vctMatRot3 & newValue)
{
    this->mTorqueOrientation = newValue;
}


/* accessors is set to: all */
const vctMatRot3 & prmFixtureGainCartesianSet::TorqueOrientation(void) const
{
    return this->mTorqueOrientation;
}

vctMatRot3 & prmFixtureGainCartesianSet::TorqueOrientation(void)
{
    return this->mTorqueOrientation;
}

/* source line: 41 */

/* accessors is set to: all */
void prmFixtureGainCartesianSet::GetPositionStiffnessPos(vct3 & placeHolder) const
{
    placeHolder = this->mPositionStiffnessPos;
}

void prmFixtureGainCartesianSet::SetPositionStiffnessPos(const vct3 & newValue)
{
    this->mPositionStiffnessPos = newValue;
}


/* accessors is set to: all */
const vct3 & prmFixtureGainCartesianSet::PositionStiffnessPos(void) const
{
    return this->mPositionStiffnessPos;
}

vct3 & prmFixtureGainCartesianSet::PositionStiffnessPos(void)
{
    return this->mPositionStiffnessPos;
}

/* source line: 47 */

/* accessors is set to: all */
void prmFixtureGainCartesianSet::GetPositionStiffnessNeg(vct3 & placeHolder) const
{
    placeHolder = this->mPositionStiffnessNeg;
}

void prmFixtureGainCartesianSet::SetPositionStiffnessNeg(const vct3 & newValue)
{
    this->mPositionStiffnessNeg = newValue;
}


/* accessors is set to: all */
const vct3 & prmFixtureGainCartesianSet::PositionStiffnessNeg(void) const
{
    return this->mPositionStiffnessNeg;
}

vct3 & prmFixtureGainCartesianSet::PositionStiffnessNeg(void)
{
    return this->mPositionStiffnessNeg;
}

/* source line: 53 */

/* accessors is set to: all */
void prmFixtureGainCartesianSet::GetPositionDampingPos(vct3 & placeHolder) const
{
    placeHolder = this->mPositionDampingPos;
}

void prmFixtureGainCartesianSet::SetPositionDampingPos(const vct3 & newValue)
{
    this->mPositionDampingPos = newValue;
}


/* accessors is set to: all */
const vct3 & prmFixtureGainCartesianSet::PositionDampingPos(void) const
{
    return this->mPositionDampingPos;
}

vct3 & prmFixtureGainCartesianSet::PositionDampingPos(void)
{
    return this->mPositionDampingPos;
}

/* source line: 59 */

/* accessors is set to: all */
void prmFixtureGainCartesianSet::GetPositionDampingNeg(vct3 & placeHolder) const
{
    placeHolder = this->mPositionDampingNeg;
}

void prmFixtureGainCartesianSet::SetPositionDampingNeg(const vct3 & newValue)
{
    this->mPositionDampingNeg = newValue;
}


/* accessors is set to: all */
const vct3 & prmFixtureGainCartesianSet::PositionDampingNeg(void) const
{
    return this->mPositionDampingNeg;
}

vct3 & prmFixtureGainCartesianSet::PositionDampingNeg(void)
{
    return this->mPositionDampingNeg;
}

/* source line: 65 */

/* accessors is set to: all */
void prmFixtureGainCartesianSet::GetForceBiasPos(vct3 & placeHolder) const
{
    placeHolder = this->mForceBiasPos;
}

void prmFixtureGainCartesianSet::SetForceBiasPos(const vct3 & newValue)
{
    this->mForceBiasPos = newValue;
}


/* accessors is set to: all */
const vct3 & prmFixtureGainCartesianSet::ForceBiasPos(void) const
{
    return this->mForceBiasPos;
}

vct3 & prmFixtureGainCartesianSet::ForceBiasPos(void)
{
    return this->mForceBiasPos;
}

/* source line: 71 */

/* accessors is set to: all */
void prmFixtureGainCartesianSet::GetForceBiasNeg(vct3 & placeHolder) const
{
    placeHolder = this->mForceBiasNeg;
}

void prmFixtureGainCartesianSet::SetForceBiasNeg(const vct3 & newValue)
{
    this->mForceBiasNeg = newValue;
}


/* accessors is set to: all */
const vct3 & prmFixtureGainCartesianSet::ForceBiasNeg(void) const
{
    return this->mForceBiasNeg;
}

vct3 & prmFixtureGainCartesianSet::ForceBiasNeg(void)
{
    return this->mForceBiasNeg;
}

/* source line: 77 */

/* accessors is set to: all */
void prmFixtureGainCartesianSet::GetOrientationStiffnessPos(vct3 & placeHolder) const
{
    placeHolder = this->mOrientationStiffnessPos;
}

void prmFixtureGainCartesianSet::SetOrientationStiffnessPos(const vct3 & newValue)
{
    this->mOrientationStiffnessPos = newValue;
}


/* accessors is set to: all */
const vct3 & prmFixtureGainCartesianSet::OrientationStiffnessPos(void) const
{
    return this->mOrientationStiffnessPos;
}

vct3 & prmFixtureGainCartesianSet::OrientationStiffnessPos(void)
{
    return this->mOrientationStiffnessPos;
}

/* source line: 83 */

/* accessors is set to: all */
void prmFixtureGainCartesianSet::GetOrientationStiffnessNeg(vct3 & placeHolder) const
{
    placeHolder = this->mOrientationStiffnessNeg;
}

void prmFixtureGainCartesianSet::SetOrientationStiffnessNeg(const vct3 & newValue)
{
    this->mOrientationStiffnessNeg = newValue;
}


/* accessors is set to: all */
const vct3 & prmFixtureGainCartesianSet::OrientationStiffnessNeg(void) const
{
    return this->mOrientationStiffnessNeg;
}

vct3 & prmFixtureGainCartesianSet::OrientationStiffnessNeg(void)
{
    return this->mOrientationStiffnessNeg;
}

/* source line: 89 */

/* accessors is set to: all */
void prmFixtureGainCartesianSet::GetOrientationDampingPos(vct3 & placeHolder) const
{
    placeHolder = this->mOrientationDampingPos;
}

void prmFixtureGainCartesianSet::SetOrientationDampingPos(const vct3 & newValue)
{
    this->mOrientationDampingPos = newValue;
}


/* accessors is set to: all */
const vct3 & prmFixtureGainCartesianSet::OrientationDampingPos(void) const
{
    return this->mOrientationDampingPos;
}

vct3 & prmFixtureGainCartesianSet::OrientationDampingPos(void)
{
    return this->mOrientationDampingPos;
}

/* source line: 95 */

/* accessors is set to: all */
void prmFixtureGainCartesianSet::GetOrientationDampingNeg(vct3 & placeHolder) const
{
    placeHolder = this->mOrientationDampingNeg;
}

void prmFixtureGainCartesianSet::SetOrientationDampingNeg(const vct3 & newValue)
{
    this->mOrientationDampingNeg = newValue;
}


/* accessors is set to: all */
const vct3 & prmFixtureGainCartesianSet::OrientationDampingNeg(void) const
{
    return this->mOrientationDampingNeg;
}

vct3 & prmFixtureGainCartesianSet::OrientationDampingNeg(void)
{
    return this->mOrientationDampingNeg;
}

/* source line: 101 */

/* accessors is set to: all */
void prmFixtureGainCartesianSet::GetTorqueBiasPos(vct3 & placeHolder) const
{
    placeHolder = this->mTorqueBiasPos;
}

void prmFixtureGainCartesianSet::SetTorqueBiasPos(const vct3 & newValue)
{
    this->mTorqueBiasPos = newValue;
}


/* accessors is set to: all */
const vct3 & prmFixtureGainCartesianSet::TorqueBiasPos(void) const
{
    return this->mTorqueBiasPos;
}

vct3 & prmFixtureGainCartesianSet::TorqueBiasPos(void)
{
    return this->mTorqueBiasPos;
}

/* source line: 107 */

/* accessors is set to: all */
void prmFixtureGainCartesianSet::GetTorqueBiasNeg(vct3 & placeHolder) const
{
    placeHolder = this->mTorqueBiasNeg;
}

void prmFixtureGainCartesianSet::SetTorqueBiasNeg(const vct3 & newValue)
{
    this->mTorqueBiasNeg = newValue;
}


/* accessors is set to: all */
const vct3 & prmFixtureGainCartesianSet::TorqueBiasNeg(void) const
{
    return this->mTorqueBiasNeg;
}

vct3 & prmFixtureGainCartesianSet::TorqueBiasNeg(void)
{
    return this->mTorqueBiasNeg;
}

/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const prmFixtureGainCartesianSet & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, prmFixtureGainCartesianSet & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void prmFixtureGainCartesianSet::Copy(const prmFixtureGainCartesianSet & source) {
    cmnData<mtsGenericObject >::Copy(*this, source);
    cmnData<vctMatRot3 >::Copy(this->mForceOrientation, source.mForceOrientation);
    cmnData<vct3 >::Copy(this->mForcePosition, source.mForcePosition);
    cmnData<vctMatRot3 >::Copy(this->mTorqueOrientation, source.mTorqueOrientation);
    cmnData<vct3 >::Copy(this->mPositionStiffnessPos, source.mPositionStiffnessPos);
    cmnData<vct3 >::Copy(this->mPositionStiffnessNeg, source.mPositionStiffnessNeg);
    cmnData<vct3 >::Copy(this->mPositionDampingPos, source.mPositionDampingPos);
    cmnData<vct3 >::Copy(this->mPositionDampingNeg, source.mPositionDampingNeg);
    cmnData<vct3 >::Copy(this->mForceBiasPos, source.mForceBiasPos);
    cmnData<vct3 >::Copy(this->mForceBiasNeg, source.mForceBiasNeg);
    cmnData<vct3 >::Copy(this->mOrientationStiffnessPos, source.mOrientationStiffnessPos);
    cmnData<vct3 >::Copy(this->mOrientationStiffnessNeg, source.mOrientationStiffnessNeg);
    cmnData<vct3 >::Copy(this->mOrientationDampingPos, source.mOrientationDampingPos);
    cmnData<vct3 >::Copy(this->mOrientationDampingNeg, source.mOrientationDampingNeg);
    cmnData<vct3 >::Copy(this->mTorqueBiasPos, source.mTorqueBiasPos);
    cmnData<vct3 >::Copy(this->mTorqueBiasNeg, source.mTorqueBiasNeg);
}
void prmFixtureGainCartesianSet::SerializeBinary(std::ostream & outputStream) const throw (std::runtime_error) {
    cmnData<mtsGenericObject >::SerializeBinary(*this, outputStream);
    cmnData<vctMatRot3 >::SerializeBinary(this->mForceOrientation, outputStream);
    cmnData<vct3 >::SerializeBinary(this->mForcePosition, outputStream);
    cmnData<vctMatRot3 >::SerializeBinary(this->mTorqueOrientation, outputStream);
    cmnData<vct3 >::SerializeBinary(this->mPositionStiffnessPos, outputStream);
    cmnData<vct3 >::SerializeBinary(this->mPositionStiffnessNeg, outputStream);
    cmnData<vct3 >::SerializeBinary(this->mPositionDampingPos, outputStream);
    cmnData<vct3 >::SerializeBinary(this->mPositionDampingNeg, outputStream);
    cmnData<vct3 >::SerializeBinary(this->mForceBiasPos, outputStream);
    cmnData<vct3 >::SerializeBinary(this->mForceBiasNeg, outputStream);
    cmnData<vct3 >::SerializeBinary(this->mOrientationStiffnessPos, outputStream);
    cmnData<vct3 >::SerializeBinary(this->mOrientationStiffnessNeg, outputStream);
    cmnData<vct3 >::SerializeBinary(this->mOrientationDampingPos, outputStream);
    cmnData<vct3 >::SerializeBinary(this->mOrientationDampingNeg, outputStream);
    cmnData<vct3 >::SerializeBinary(this->mTorqueBiasPos, outputStream);
    cmnData<vct3 >::SerializeBinary(this->mTorqueBiasNeg, outputStream);
}
void prmFixtureGainCartesianSet::DeSerializeBinary(std::istream & inputStream,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) throw (std::runtime_error) {
    cmnData<mtsGenericObject >::DeSerializeBinary(*this, inputStream, localFormat, remoteFormat);
    cmnData<vctMatRot3 >::DeSerializeBinary(this->mForceOrientation, inputStream, localFormat, remoteFormat);
    cmnData<vct3 >::DeSerializeBinary(this->mForcePosition, inputStream, localFormat, remoteFormat);
    cmnData<vctMatRot3 >::DeSerializeBinary(this->mTorqueOrientation, inputStream, localFormat, remoteFormat);
    cmnData<vct3 >::DeSerializeBinary(this->mPositionStiffnessPos, inputStream, localFormat, remoteFormat);
    cmnData<vct3 >::DeSerializeBinary(this->mPositionStiffnessNeg, inputStream, localFormat, remoteFormat);
    cmnData<vct3 >::DeSerializeBinary(this->mPositionDampingPos, inputStream, localFormat, remoteFormat);
    cmnData<vct3 >::DeSerializeBinary(this->mPositionDampingNeg, inputStream, localFormat, remoteFormat);
    cmnData<vct3 >::DeSerializeBinary(this->mForceBiasPos, inputStream, localFormat, remoteFormat);
    cmnData<vct3 >::DeSerializeBinary(this->mForceBiasNeg, inputStream, localFormat, remoteFormat);
    cmnData<vct3 >::DeSerializeBinary(this->mOrientationStiffnessPos, inputStream, localFormat, remoteFormat);
    cmnData<vct3 >::DeSerializeBinary(this->mOrientationStiffnessNeg, inputStream, localFormat, remoteFormat);
    cmnData<vct3 >::DeSerializeBinary(this->mOrientationDampingPos, inputStream, localFormat, remoteFormat);
    cmnData<vct3 >::DeSerializeBinary(this->mOrientationDampingNeg, inputStream, localFormat, remoteFormat);
    cmnData<vct3 >::DeSerializeBinary(this->mTorqueBiasPos, inputStream, localFormat, remoteFormat);
    cmnData<vct3 >::DeSerializeBinary(this->mTorqueBiasNeg, inputStream, localFormat, remoteFormat);
}
void prmFixtureGainCartesianSet::SerializeText(std::ostream & outputStream, const char delimiter) const throw (std::runtime_error) {
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
    cmnData<vctMatRot3 >::SerializeText(this->mForceOrientation, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<vct3 >::SerializeText(this->mForcePosition, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<vctMatRot3 >::SerializeText(this->mTorqueOrientation, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<vct3 >::SerializeText(this->mPositionStiffnessPos, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<vct3 >::SerializeText(this->mPositionStiffnessNeg, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<vct3 >::SerializeText(this->mPositionDampingPos, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<vct3 >::SerializeText(this->mPositionDampingNeg, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<vct3 >::SerializeText(this->mForceBiasPos, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<vct3 >::SerializeText(this->mForceBiasNeg, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<vct3 >::SerializeText(this->mOrientationStiffnessPos, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<vct3 >::SerializeText(this->mOrientationStiffnessNeg, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<vct3 >::SerializeText(this->mOrientationDampingPos, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<vct3 >::SerializeText(this->mOrientationDampingNeg, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<vct3 >::SerializeText(this->mTorqueBiasPos, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<vct3 >::SerializeText(this->mTorqueBiasNeg, outputStream, delimiter);
}
std::string prmFixtureGainCartesianSet::SerializeDescription(const char delimiter, const std::string & userDescription) const {
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
    description << cmnData<vctMatRot3 >::SerializeDescription(this->mForceOrientation, delimiter, prefix + "ForceOrientation");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<vct3 >::SerializeDescription(this->mForcePosition, delimiter, prefix + "ForcePosition");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<vctMatRot3 >::SerializeDescription(this->mTorqueOrientation, delimiter, prefix + "TorqueOrientation");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<vct3 >::SerializeDescription(this->mPositionStiffnessPos, delimiter, prefix + "PositionStiffnessPos");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<vct3 >::SerializeDescription(this->mPositionStiffnessNeg, delimiter, prefix + "PositionStiffnessNeg");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<vct3 >::SerializeDescription(this->mPositionDampingPos, delimiter, prefix + "PositionDampingPos");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<vct3 >::SerializeDescription(this->mPositionDampingNeg, delimiter, prefix + "PositionDampingNeg");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<vct3 >::SerializeDescription(this->mForceBiasPos, delimiter, prefix + "ForceBiasPos");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<vct3 >::SerializeDescription(this->mForceBiasNeg, delimiter, prefix + "ForceBiasNeg");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<vct3 >::SerializeDescription(this->mOrientationStiffnessPos, delimiter, prefix + "OrientationStiffnessPos");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<vct3 >::SerializeDescription(this->mOrientationStiffnessNeg, delimiter, prefix + "OrientationStiffnessNeg");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<vct3 >::SerializeDescription(this->mOrientationDampingPos, delimiter, prefix + "OrientationDampingPos");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<vct3 >::SerializeDescription(this->mOrientationDampingNeg, delimiter, prefix + "OrientationDampingNeg");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<vct3 >::SerializeDescription(this->mTorqueBiasPos, delimiter, prefix + "TorqueBiasPos");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<vct3 >::SerializeDescription(this->mTorqueBiasNeg, delimiter, prefix + "TorqueBiasNeg");
    return description.str();
}
void prmFixtureGainCartesianSet::DeSerializeText(std::istream & inputStream,
                                          const char delimiter) throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "prmFixtureGainCartesianSet");
    }
    someData = true;
    cmnData<mtsGenericObject >::DeSerializeText(*this, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "prmFixtureGainCartesianSet");
    }
    someData = true;
    cmnData<vctMatRot3 >::DeSerializeText(this->mForceOrientation, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "prmFixtureGainCartesianSet");
    }
    someData = true;
    cmnData<vct3 >::DeSerializeText(this->mForcePosition, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "prmFixtureGainCartesianSet");
    }
    someData = true;
    cmnData<vctMatRot3 >::DeSerializeText(this->mTorqueOrientation, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "prmFixtureGainCartesianSet");
    }
    someData = true;
    cmnData<vct3 >::DeSerializeText(this->mPositionStiffnessPos, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "prmFixtureGainCartesianSet");
    }
    someData = true;
    cmnData<vct3 >::DeSerializeText(this->mPositionStiffnessNeg, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "prmFixtureGainCartesianSet");
    }
    someData = true;
    cmnData<vct3 >::DeSerializeText(this->mPositionDampingPos, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "prmFixtureGainCartesianSet");
    }
    someData = true;
    cmnData<vct3 >::DeSerializeText(this->mPositionDampingNeg, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "prmFixtureGainCartesianSet");
    }
    someData = true;
    cmnData<vct3 >::DeSerializeText(this->mForceBiasPos, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "prmFixtureGainCartesianSet");
    }
    someData = true;
    cmnData<vct3 >::DeSerializeText(this->mForceBiasNeg, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "prmFixtureGainCartesianSet");
    }
    someData = true;
    cmnData<vct3 >::DeSerializeText(this->mOrientationStiffnessPos, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "prmFixtureGainCartesianSet");
    }
    someData = true;
    cmnData<vct3 >::DeSerializeText(this->mOrientationStiffnessNeg, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "prmFixtureGainCartesianSet");
    }
    someData = true;
    cmnData<vct3 >::DeSerializeText(this->mOrientationDampingPos, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "prmFixtureGainCartesianSet");
    }
    someData = true;
    cmnData<vct3 >::DeSerializeText(this->mOrientationDampingNeg, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "prmFixtureGainCartesianSet");
    }
    someData = true;
    cmnData<vct3 >::DeSerializeText(this->mTorqueBiasPos, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "prmFixtureGainCartesianSet");
    }
    someData = true;
    cmnData<vct3 >::DeSerializeText(this->mTorqueBiasNeg, inputStream, delimiter);
}
std::string prmFixtureGainCartesianSet::HumanReadable(void) const {
    std::stringstream description;
    description << "prmFixtureGainCartesianSet" << std::endl;
    description << cmnData< mtsGenericObject >::HumanReadable(*this) << std::endl;
    description << "  Force orientation matrix:" << cmnData<vctMatRot3 >::HumanReadable(this->mForceOrientation);
    description << "  Force position vector:" << cmnData<vct3 >::HumanReadable(this->mForcePosition);
    description << "  Torque orientation matrix:" << cmnData<vctMatRot3 >::HumanReadable(this->mTorqueOrientation);
    description << "  Positive position stiffness vector:" << cmnData<vct3 >::HumanReadable(this->mPositionStiffnessPos);
    description << "  Negative position stiffness vector:" << cmnData<vct3 >::HumanReadable(this->mPositionStiffnessNeg);
    description << "  Positive position damping vector:" << cmnData<vct3 >::HumanReadable(this->mPositionDampingPos);
    description << "  Negative position damping vector:" << cmnData<vct3 >::HumanReadable(this->mPositionDampingNeg);
    description << "  Positive force bias vector:" << cmnData<vct3 >::HumanReadable(this->mForceBiasPos);
    description << "  Negative force bias vector:" << cmnData<vct3 >::HumanReadable(this->mForceBiasNeg);
    description << "  Positive orientation stiffness vector:" << cmnData<vct3 >::HumanReadable(this->mOrientationStiffnessPos);
    description << "  Negative orientation stiffness vector:" << cmnData<vct3 >::HumanReadable(this->mOrientationStiffnessNeg);
    description << "  Positive orientation damping vector:" << cmnData<vct3 >::HumanReadable(this->mOrientationDampingPos);
    description << "  Positive orientation damping vector:" << cmnData<vct3 >::HumanReadable(this->mOrientationDampingNeg);
    description << "  Positive torque bias vector:" << cmnData<vct3 >::HumanReadable(this->mTorqueBiasPos);
    description << "  Negative torque bias vector:" << cmnData<vct3 >::HumanReadable(this->mTorqueBiasNeg);
    return description.str();
}
bool prmFixtureGainCartesianSet::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<mtsGenericObject >::ScalarNumberIsFixed(*this)
           && cmnData<vctMatRot3 >::ScalarNumberIsFixed(this->mForceOrientation)
           && cmnData<vct3 >::ScalarNumberIsFixed(this->mForcePosition)
           && cmnData<vctMatRot3 >::ScalarNumberIsFixed(this->mTorqueOrientation)
           && cmnData<vct3 >::ScalarNumberIsFixed(this->mPositionStiffnessPos)
           && cmnData<vct3 >::ScalarNumberIsFixed(this->mPositionStiffnessNeg)
           && cmnData<vct3 >::ScalarNumberIsFixed(this->mPositionDampingPos)
           && cmnData<vct3 >::ScalarNumberIsFixed(this->mPositionDampingNeg)
           && cmnData<vct3 >::ScalarNumberIsFixed(this->mForceBiasPos)
           && cmnData<vct3 >::ScalarNumberIsFixed(this->mForceBiasNeg)
           && cmnData<vct3 >::ScalarNumberIsFixed(this->mOrientationStiffnessPos)
           && cmnData<vct3 >::ScalarNumberIsFixed(this->mOrientationStiffnessNeg)
           && cmnData<vct3 >::ScalarNumberIsFixed(this->mOrientationDampingPos)
           && cmnData<vct3 >::ScalarNumberIsFixed(this->mOrientationDampingNeg)
           && cmnData<vct3 >::ScalarNumberIsFixed(this->mTorqueBiasPos)
           && cmnData<vct3 >::ScalarNumberIsFixed(this->mTorqueBiasNeg)
    ;
}
size_t prmFixtureGainCartesianSet::ScalarNumber(void) const {
    return 0
           + cmnData< mtsGenericObject >::ScalarNumber(*this)
           + cmnData<vctMatRot3 >::ScalarNumber(this->mForceOrientation)
           + cmnData<vct3 >::ScalarNumber(this->mForcePosition)
           + cmnData<vctMatRot3 >::ScalarNumber(this->mTorqueOrientation)
           + cmnData<vct3 >::ScalarNumber(this->mPositionStiffnessPos)
           + cmnData<vct3 >::ScalarNumber(this->mPositionStiffnessNeg)
           + cmnData<vct3 >::ScalarNumber(this->mPositionDampingPos)
           + cmnData<vct3 >::ScalarNumber(this->mPositionDampingNeg)
           + cmnData<vct3 >::ScalarNumber(this->mForceBiasPos)
           + cmnData<vct3 >::ScalarNumber(this->mForceBiasNeg)
           + cmnData<vct3 >::ScalarNumber(this->mOrientationStiffnessPos)
           + cmnData<vct3 >::ScalarNumber(this->mOrientationStiffnessNeg)
           + cmnData<vct3 >::ScalarNumber(this->mOrientationDampingPos)
           + cmnData<vct3 >::ScalarNumber(this->mOrientationDampingNeg)
           + cmnData<vct3 >::ScalarNumber(this->mTorqueBiasPos)
           + cmnData<vct3 >::ScalarNumber(this->mTorqueBiasNeg)
    ;
}
std::string prmFixtureGainCartesianSet::ScalarDescription(const size_t index, const std::string & userDescription) const throw (std::out_of_range) {
    std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<mtsGenericObject >::ScalarNumber(*this);
    if (index < currentMaxIndex) {
        return cmnData<mtsGenericObject >::ScalarDescription(*this, index - baseIndex, prefix);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vctMatRot3 >::ScalarNumber(this->mForceOrientation);
    if (index < currentMaxIndex) {
        return cmnData<vctMatRot3 >::ScalarDescription(this->mForceOrientation, index - baseIndex, prefix + "ForceOrientation");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vct3 >::ScalarNumber(this->mForcePosition);
    if (index < currentMaxIndex) {
        return cmnData<vct3 >::ScalarDescription(this->mForcePosition, index - baseIndex, prefix + "ForcePosition");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vctMatRot3 >::ScalarNumber(this->mTorqueOrientation);
    if (index < currentMaxIndex) {
        return cmnData<vctMatRot3 >::ScalarDescription(this->mTorqueOrientation, index - baseIndex, prefix + "TorqueOrientation");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vct3 >::ScalarNumber(this->mPositionStiffnessPos);
    if (index < currentMaxIndex) {
        return cmnData<vct3 >::ScalarDescription(this->mPositionStiffnessPos, index - baseIndex, prefix + "PositionStiffnessPos");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vct3 >::ScalarNumber(this->mPositionStiffnessNeg);
    if (index < currentMaxIndex) {
        return cmnData<vct3 >::ScalarDescription(this->mPositionStiffnessNeg, index - baseIndex, prefix + "PositionStiffnessNeg");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vct3 >::ScalarNumber(this->mPositionDampingPos);
    if (index < currentMaxIndex) {
        return cmnData<vct3 >::ScalarDescription(this->mPositionDampingPos, index - baseIndex, prefix + "PositionDampingPos");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vct3 >::ScalarNumber(this->mPositionDampingNeg);
    if (index < currentMaxIndex) {
        return cmnData<vct3 >::ScalarDescription(this->mPositionDampingNeg, index - baseIndex, prefix + "PositionDampingNeg");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vct3 >::ScalarNumber(this->mForceBiasPos);
    if (index < currentMaxIndex) {
        return cmnData<vct3 >::ScalarDescription(this->mForceBiasPos, index - baseIndex, prefix + "ForceBiasPos");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vct3 >::ScalarNumber(this->mForceBiasNeg);
    if (index < currentMaxIndex) {
        return cmnData<vct3 >::ScalarDescription(this->mForceBiasNeg, index - baseIndex, prefix + "ForceBiasNeg");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vct3 >::ScalarNumber(this->mOrientationStiffnessPos);
    if (index < currentMaxIndex) {
        return cmnData<vct3 >::ScalarDescription(this->mOrientationStiffnessPos, index - baseIndex, prefix + "OrientationStiffnessPos");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vct3 >::ScalarNumber(this->mOrientationStiffnessNeg);
    if (index < currentMaxIndex) {
        return cmnData<vct3 >::ScalarDescription(this->mOrientationStiffnessNeg, index - baseIndex, prefix + "OrientationStiffnessNeg");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vct3 >::ScalarNumber(this->mOrientationDampingPos);
    if (index < currentMaxIndex) {
        return cmnData<vct3 >::ScalarDescription(this->mOrientationDampingPos, index - baseIndex, prefix + "OrientationDampingPos");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vct3 >::ScalarNumber(this->mOrientationDampingNeg);
    if (index < currentMaxIndex) {
        return cmnData<vct3 >::ScalarDescription(this->mOrientationDampingNeg, index - baseIndex, prefix + "OrientationDampingNeg");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vct3 >::ScalarNumber(this->mTorqueBiasPos);
    if (index < currentMaxIndex) {
        return cmnData<vct3 >::ScalarDescription(this->mTorqueBiasPos, index - baseIndex, prefix + "TorqueBiasPos");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vct3 >::ScalarNumber(this->mTorqueBiasNeg);
    if (index < currentMaxIndex) {
        return cmnData<vct3 >::ScalarDescription(this->mTorqueBiasNeg, index - baseIndex, prefix + "TorqueBiasNeg");
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: prmFixtureGainCartesianSet index out of range"));
    return "";
}
double prmFixtureGainCartesianSet::Scalar(const size_t index) const throw (std::out_of_range) {
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<mtsGenericObject >::ScalarNumber(*this);
    if (index < currentMaxIndex) {
        return cmnData<mtsGenericObject >::Scalar(*this, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vctMatRot3 >::ScalarNumber(this->mForceOrientation);
    if (index < currentMaxIndex) {
        return cmnData<vctMatRot3 >::Scalar(this->mForceOrientation, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vct3 >::ScalarNumber(this->mForcePosition);
    if (index < currentMaxIndex) {
        return cmnData<vct3 >::Scalar(this->mForcePosition, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vctMatRot3 >::ScalarNumber(this->mTorqueOrientation);
    if (index < currentMaxIndex) {
        return cmnData<vctMatRot3 >::Scalar(this->mTorqueOrientation, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vct3 >::ScalarNumber(this->mPositionStiffnessPos);
    if (index < currentMaxIndex) {
        return cmnData<vct3 >::Scalar(this->mPositionStiffnessPos, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vct3 >::ScalarNumber(this->mPositionStiffnessNeg);
    if (index < currentMaxIndex) {
        return cmnData<vct3 >::Scalar(this->mPositionStiffnessNeg, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vct3 >::ScalarNumber(this->mPositionDampingPos);
    if (index < currentMaxIndex) {
        return cmnData<vct3 >::Scalar(this->mPositionDampingPos, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vct3 >::ScalarNumber(this->mPositionDampingNeg);
    if (index < currentMaxIndex) {
        return cmnData<vct3 >::Scalar(this->mPositionDampingNeg, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vct3 >::ScalarNumber(this->mForceBiasPos);
    if (index < currentMaxIndex) {
        return cmnData<vct3 >::Scalar(this->mForceBiasPos, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vct3 >::ScalarNumber(this->mForceBiasNeg);
    if (index < currentMaxIndex) {
        return cmnData<vct3 >::Scalar(this->mForceBiasNeg, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vct3 >::ScalarNumber(this->mOrientationStiffnessPos);
    if (index < currentMaxIndex) {
        return cmnData<vct3 >::Scalar(this->mOrientationStiffnessPos, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vct3 >::ScalarNumber(this->mOrientationStiffnessNeg);
    if (index < currentMaxIndex) {
        return cmnData<vct3 >::Scalar(this->mOrientationStiffnessNeg, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vct3 >::ScalarNumber(this->mOrientationDampingPos);
    if (index < currentMaxIndex) {
        return cmnData<vct3 >::Scalar(this->mOrientationDampingPos, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vct3 >::ScalarNumber(this->mOrientationDampingNeg);
    if (index < currentMaxIndex) {
        return cmnData<vct3 >::Scalar(this->mOrientationDampingNeg, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vct3 >::ScalarNumber(this->mTorqueBiasPos);
    if (index < currentMaxIndex) {
        return cmnData<vct3 >::Scalar(this->mTorqueBiasPos, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vct3 >::ScalarNumber(this->mTorqueBiasNeg);
    if (index < currentMaxIndex) {
        return cmnData<vct3 >::Scalar(this->mTorqueBiasNeg, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalar: prmFixtureGainCartesianSet index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<prmFixtureGainCartesianSet >::SerializeText(const prmFixtureGainCartesianSet & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void prmFixtureGainCartesianSet::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<mtsGenericObject >::SerializeText(*(dynamic_cast<const mtsGenericObject*>(this)), jsonValue);
    cmnDataJSON<vctMatRot3 >::SerializeText(this->mForceOrientation, jsonValue["ForceOrientation"]);
    cmnDataJSON<vct3 >::SerializeText(this->mForcePosition, jsonValue["ForcePosition"]);
    cmnDataJSON<vctMatRot3 >::SerializeText(this->mTorqueOrientation, jsonValue["TorqueOrientation"]);
    cmnDataJSON<vct3 >::SerializeText(this->mPositionStiffnessPos, jsonValue["PositionStiffnessPos"]);
    cmnDataJSON<vct3 >::SerializeText(this->mPositionStiffnessNeg, jsonValue["PositionStiffnessNeg"]);
    cmnDataJSON<vct3 >::SerializeText(this->mPositionDampingPos, jsonValue["PositionDampingPos"]);
    cmnDataJSON<vct3 >::SerializeText(this->mPositionDampingNeg, jsonValue["PositionDampingNeg"]);
    cmnDataJSON<vct3 >::SerializeText(this->mForceBiasPos, jsonValue["ForceBiasPos"]);
    cmnDataJSON<vct3 >::SerializeText(this->mForceBiasNeg, jsonValue["ForceBiasNeg"]);
    cmnDataJSON<vct3 >::SerializeText(this->mOrientationStiffnessPos, jsonValue["OrientationStiffnessPos"]);
    cmnDataJSON<vct3 >::SerializeText(this->mOrientationStiffnessNeg, jsonValue["OrientationStiffnessNeg"]);
    cmnDataJSON<vct3 >::SerializeText(this->mOrientationDampingPos, jsonValue["OrientationDampingPos"]);
    cmnDataJSON<vct3 >::SerializeText(this->mOrientationDampingNeg, jsonValue["OrientationDampingNeg"]);
    cmnDataJSON<vct3 >::SerializeText(this->mTorqueBiasPos, jsonValue["TorqueBiasPos"]);
    cmnDataJSON<vct3 >::SerializeText(this->mTorqueBiasNeg, jsonValue["TorqueBiasNeg"]);
}
template<>
void cmnDataJSON<prmFixtureGainCartesianSet >::DeSerializeText(prmFixtureGainCartesianSet & data, const Json::Value & jsonValue) throw (std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void prmFixtureGainCartesianSet::DeSerializeTextJSON(const Json::Value & jsonValue) throw (std::runtime_error) {
    cmnDataJSON<mtsGenericObject >::DeSerializeText(*(dynamic_cast<mtsGenericObject*>(this)), jsonValue);
    cmnDataJSON<vctMatRot3 >::DeSerializeText(this->mForceOrientation, jsonValue["ForceOrientation"]);
    cmnDataJSON<vct3 >::DeSerializeText(this->mForcePosition, jsonValue["ForcePosition"]);
    cmnDataJSON<vctMatRot3 >::DeSerializeText(this->mTorqueOrientation, jsonValue["TorqueOrientation"]);
    cmnDataJSON<vct3 >::DeSerializeText(this->mPositionStiffnessPos, jsonValue["PositionStiffnessPos"]);
    cmnDataJSON<vct3 >::DeSerializeText(this->mPositionStiffnessNeg, jsonValue["PositionStiffnessNeg"]);
    cmnDataJSON<vct3 >::DeSerializeText(this->mPositionDampingPos, jsonValue["PositionDampingPos"]);
    cmnDataJSON<vct3 >::DeSerializeText(this->mPositionDampingNeg, jsonValue["PositionDampingNeg"]);
    cmnDataJSON<vct3 >::DeSerializeText(this->mForceBiasPos, jsonValue["ForceBiasPos"]);
    cmnDataJSON<vct3 >::DeSerializeText(this->mForceBiasNeg, jsonValue["ForceBiasNeg"]);
    cmnDataJSON<vct3 >::DeSerializeText(this->mOrientationStiffnessPos, jsonValue["OrientationStiffnessPos"]);
    cmnDataJSON<vct3 >::DeSerializeText(this->mOrientationStiffnessNeg, jsonValue["OrientationStiffnessNeg"]);
    cmnDataJSON<vct3 >::DeSerializeText(this->mOrientationDampingPos, jsonValue["OrientationDampingPos"]);
    cmnDataJSON<vct3 >::DeSerializeText(this->mOrientationDampingNeg, jsonValue["OrientationDampingNeg"]);
    cmnDataJSON<vct3 >::DeSerializeText(this->mTorqueBiasPos, jsonValue["TorqueBiasPos"]);
    cmnDataJSON<vct3 >::DeSerializeText(this->mTorqueBiasNeg, jsonValue["TorqueBiasNeg"]);
}
#endif // CISST_HAS_JSON


