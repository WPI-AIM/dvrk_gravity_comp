// file automatically generated, do not modify
// cisst version: 1.0.8
// source file: /home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/code/../mtsComponentState.cdg

#include <cisstMultiTask/mtsComponentState.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>

/* source line: 1 */

/* source line: 25 */
mtsComponentState::mtsComponentState(void):
      mState()
{}

mtsComponentState::mtsComponentState(const mtsComponentState & other):
      mState(other.mState)
{}

mtsComponentState::mtsComponentState(const mtsComponentState::Enum & newState):
      mState(newState)
{}

mtsComponentState::~mtsComponentState(void){}


void mtsComponentState::SerializeRaw(std::ostream & outputStream) const
{
    cmnSerializeRaw(outputStream, this->mState);
}


void mtsComponentState::DeSerializeRaw(std::istream & inputStream)
{
    cmnDeSerializeRaw(inputStream, this->mState);
}


void mtsComponentState::ToStream(std::ostream & outputStream) const
{
    outputStream << this->HumanReadable();
}

void mtsComponentState::ToStreamRaw(std::ostream & outputStream, const char delimiter, bool headerOnly, const std::string & headerPrefix) const
{
    if (headerOnly) {
        outputStream << cmnData<mtsComponentState >::SerializeDescription(*this, delimiter, headerPrefix);
    } else {
        cmnData<mtsComponentState >::SerializeText(*this, outputStream, delimiter);
    }
}
/* source line: 82 */

/* accessors is set to: all */
void mtsComponentState::GetState(mtsComponentState::Enum & placeHolder) const
{
    placeHolder = this->mState;
}

void mtsComponentState::SetState(const mtsComponentState::Enum & newValue)
{
    this->mState = newValue;
}


/* accessors is set to: all */
const mtsComponentState::Enum & mtsComponentState::State(void) const
{
    return this->mState;
}

mtsComponentState::Enum & mtsComponentState::State(void)
{
    return this->mState;
}

/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const mtsComponentState & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, mtsComponentState & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void mtsComponentState::Copy(const mtsComponentState & source) {
    cmnData<mtsComponentState::Enum >::Copy(this->mState, source.mState);
}
void mtsComponentState::SerializeBinary(std::ostream & outputStream) const throw (std::runtime_error) {
    cmnData<mtsComponentState::Enum >::SerializeBinary(this->mState, outputStream);
}
void mtsComponentState::DeSerializeBinary(std::istream & inputStream,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) throw (std::runtime_error) {
    cmnData<mtsComponentState::Enum >::DeSerializeBinary(this->mState, inputStream, localFormat, remoteFormat);
}
void mtsComponentState::SerializeText(std::ostream & outputStream, const char delimiter) const throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<mtsComponentState::Enum >::SerializeText(this->mState, outputStream, delimiter);
}
std::string mtsComponentState::SerializeDescription(const char delimiter, const std::string & userDescription) const {
    bool someData = false;
    const std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    std::stringstream description;
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<mtsComponentState::Enum >::SerializeDescription(this->mState, delimiter, prefix + "State");
    return description.str();
}
void mtsComponentState::DeSerializeText(std::istream & inputStream,
                                          const char delimiter) throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsComponentState");
    }
    someData = true;
    cmnData<mtsComponentState::Enum >::DeSerializeText(this->mState, inputStream, delimiter);
}
std::string mtsComponentState::HumanReadable(void) const {
    std::stringstream description;
    description << "mtsComponentState" << std::endl;
    description << "  State:" << cmnData<mtsComponentState::Enum >::HumanReadable(this->mState);
    return description.str();
}
bool mtsComponentState::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<mtsComponentState::Enum >::ScalarNumberIsFixed(this->mState)
    ;
}
size_t mtsComponentState::ScalarNumber(void) const {
    return 0
           + cmnData<mtsComponentState::Enum >::ScalarNumber(this->mState)
    ;
}
std::string mtsComponentState::ScalarDescription(const size_t index, const std::string & userDescription) const throw (std::out_of_range) {
    std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<mtsComponentState::Enum >::ScalarNumber(this->mState);
    if (index < currentMaxIndex) {
        return cmnData<mtsComponentState::Enum >::ScalarDescription(this->mState, index - baseIndex, prefix + "State");
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: mtsComponentState index out of range"));
    return "";
}
double mtsComponentState::Scalar(const size_t index) const throw (std::out_of_range) {
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<mtsComponentState::Enum >::ScalarNumber(this->mState);
    if (index < currentMaxIndex) {
        return cmnData<mtsComponentState::Enum >::Scalar(this->mState, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalar: mtsComponentState index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<mtsComponentState >::SerializeText(const mtsComponentState & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void mtsComponentState::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<mtsComponentState::Enum >::SerializeText(this->mState, jsonValue["State"]);
}
template<>
void cmnDataJSON<mtsComponentState >::DeSerializeText(mtsComponentState & data, const Json::Value & jsonValue) throw (std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void mtsComponentState::DeSerializeTextJSON(const Json::Value & jsonValue) throw (std::runtime_error) {
    cmnDataJSON<mtsComponentState::Enum >::DeSerializeText(this->mState, jsonValue["State"]);
}
#endif // CISST_HAS_JSON
std::string cmnDataHumanReadable_mtsComponentState_Enum(const mtsComponentState::Enum & data) {
    switch (data) {
        case mtsComponentState::CONSTRUCTED:
            return "constructed";
            break;
        case mtsComponentState::INITIALIZING:
            return "initializing";
            break;
        case mtsComponentState::READY:
            return "ready";
            break;
        case mtsComponentState::ACTIVE:
            return "active";
            break;
        case mtsComponentState::FINISHING:
            return "finishing";
            break;
        case mtsComponentState::FINISHED:
            return "finished";
            break;
        default: return "undefined enum mtsComponentState::Enum";
            break;
    }
}

std::string mtsComponentState::EnumToString(const mtsComponentState::Enum & data) throw (std::runtime_error) {
    switch (data) {
        case mtsComponentState::CONSTRUCTED:
            return "CONSTRUCTED";
            break;
        case mtsComponentState::INITIALIZING:
            return "INITIALIZING";
            break;
        case mtsComponentState::READY:
            return "READY";
            break;
        case mtsComponentState::ACTIVE:
            return "ACTIVE";
            break;
        case mtsComponentState::FINISHING:
            return "FINISHING";
            break;
        case mtsComponentState::FINISHED:
            return "FINISHED";
            break;
        default:
            break;
    }
    cmnThrow("mtsComponentState::EnumToString called with invalid enum");
    return "";
}

mtsComponentState::Enum mtsComponentState::EnumFromString(const std::string & value) throw (std::runtime_error) {
    if (value == "CONSTRUCTED") {
        return mtsComponentState::CONSTRUCTED;
    };
    if (value == "INITIALIZING") {
        return mtsComponentState::INITIALIZING;
    };
    if (value == "READY") {
        return mtsComponentState::READY;
    };
    if (value == "ACTIVE") {
        return mtsComponentState::ACTIVE;
    };
    if (value == "FINISHING") {
        return mtsComponentState::FINISHING;
    };
    if (value == "FINISHED") {
        return mtsComponentState::FINISHED;
    };
    cmnThrow("mtsComponentState::EnumFromString can't find matching enum for " + value);
    return static_cast<mtsComponentState::Enum >(0);
}

const std::vector<int> & mtsComponentState::EnumVectorInt(void) {
    static std::vector<int> vectorInt;
    if (vectorInt.empty()) {
        vectorInt.push_back(static_cast<int>(CONSTRUCTED));
        vectorInt.push_back(static_cast<int>(INITIALIZING));
        vectorInt.push_back(static_cast<int>(READY));
        vectorInt.push_back(static_cast<int>(ACTIVE));
        vectorInt.push_back(static_cast<int>(FINISHING));
        vectorInt.push_back(static_cast<int>(FINISHED));
    }
    return vectorInt;
}

const std::vector<std::string> & mtsComponentState::EnumVectorString(void) {
    static std::vector<std::string> vectorString;
    if (vectorString.empty()) {
        vectorString.push_back("CONSTRUCTED");
        vectorString.push_back("INITIALIZING");
        vectorString.push_back("READY");
        vectorString.push_back("ACTIVE");
        vectorString.push_back("FINISHING");
        vectorString.push_back("FINISHED");
    }
    return vectorString;
}

#if CISST_HAS_JSON
  CMN_IMPLEMENT_DATA_FUNCTIONS_JSON_FOR_ENUM(mtsComponentState::Enum, int);
#endif // CISST_HAS_JSON

