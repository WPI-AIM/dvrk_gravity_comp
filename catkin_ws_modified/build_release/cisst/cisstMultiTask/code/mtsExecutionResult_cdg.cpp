// file automatically generated, do not modify
// cisst version: 1.0.8
// source file: /home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/code/../mtsExecutionResult.cdg

#include <cisstMultiTask/mtsExecutionResult.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>

/* source line: 1 */

/* source line: 25 */
mtsExecutionResult::mtsExecutionResult(void):
      mValue()
{}

mtsExecutionResult::mtsExecutionResult(const mtsExecutionResult & other):
      mValue(other.mValue)
{}

mtsExecutionResult::mtsExecutionResult(const mtsExecutionResult::Enum & newValue):
      mValue(newValue)
{}

mtsExecutionResult::~mtsExecutionResult(void){}


void mtsExecutionResult::SerializeRaw(std::ostream & outputStream) const
{
    cmnSerializeRaw(outputStream, this->mValue);
}


void mtsExecutionResult::DeSerializeRaw(std::istream & inputStream)
{
    cmnDeSerializeRaw(inputStream, this->mValue);
}


void mtsExecutionResult::ToStream(std::ostream & outputStream) const
{
    outputStream << this->HumanReadable();
}

void mtsExecutionResult::ToStreamRaw(std::ostream & outputStream, const char delimiter, bool headerOnly, const std::string & headerPrefix) const
{
    if (headerOnly) {
        outputStream << cmnData<mtsExecutionResult >::SerializeDescription(*this, delimiter, headerPrefix);
    } else {
        cmnData<mtsExecutionResult >::SerializeText(*this, outputStream, delimiter);
    }
}
/* source line: 100 */

/* accessors is set to: all */
void mtsExecutionResult::GetValue(mtsExecutionResult::Enum & placeHolder) const
{
    placeHolder = this->mValue;
}

void mtsExecutionResult::SetValue(const mtsExecutionResult::Enum & newValue)
{
    this->mValue = newValue;
}


/* accessors is set to: all */
const mtsExecutionResult::Enum & mtsExecutionResult::Value(void) const
{
    return this->mValue;
}

mtsExecutionResult::Enum & mtsExecutionResult::Value(void)
{
    return this->mValue;
}

/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const mtsExecutionResult & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, mtsExecutionResult & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void mtsExecutionResult::Copy(const mtsExecutionResult & source) {
    cmnData<mtsExecutionResult::Enum >::Copy(this->mValue, source.mValue);
}
void mtsExecutionResult::SerializeBinary(std::ostream & outputStream) const throw (std::runtime_error) {
    cmnData<mtsExecutionResult::Enum >::SerializeBinary(this->mValue, outputStream);
}
void mtsExecutionResult::DeSerializeBinary(std::istream & inputStream,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) throw (std::runtime_error) {
    cmnData<mtsExecutionResult::Enum >::DeSerializeBinary(this->mValue, inputStream, localFormat, remoteFormat);
}
void mtsExecutionResult::SerializeText(std::ostream & outputStream, const char delimiter) const throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<mtsExecutionResult::Enum >::SerializeText(this->mValue, outputStream, delimiter);
}
std::string mtsExecutionResult::SerializeDescription(const char delimiter, const std::string & userDescription) const {
    bool someData = false;
    const std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    std::stringstream description;
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<mtsExecutionResult::Enum >::SerializeDescription(this->mValue, delimiter, prefix + "Value");
    return description.str();
}
void mtsExecutionResult::DeSerializeText(std::istream & inputStream,
                                          const char delimiter) throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsExecutionResult");
    }
    someData = true;
    cmnData<mtsExecutionResult::Enum >::DeSerializeText(this->mValue, inputStream, delimiter);
}
std::string mtsExecutionResult::HumanReadable(void) const {
    std::stringstream description;
    description << "mtsExecutionResult" << std::endl;
    description << "  Value:" << cmnData<mtsExecutionResult::Enum >::HumanReadable(this->mValue);
    return description.str();
}
bool mtsExecutionResult::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<mtsExecutionResult::Enum >::ScalarNumberIsFixed(this->mValue)
    ;
}
size_t mtsExecutionResult::ScalarNumber(void) const {
    return 0
           + cmnData<mtsExecutionResult::Enum >::ScalarNumber(this->mValue)
    ;
}
std::string mtsExecutionResult::ScalarDescription(const size_t index, const std::string & userDescription) const throw (std::out_of_range) {
    std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<mtsExecutionResult::Enum >::ScalarNumber(this->mValue);
    if (index < currentMaxIndex) {
        return cmnData<mtsExecutionResult::Enum >::ScalarDescription(this->mValue, index - baseIndex, prefix + "Value");
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: mtsExecutionResult index out of range"));
    return "";
}
double mtsExecutionResult::Scalar(const size_t index) const throw (std::out_of_range) {
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<mtsExecutionResult::Enum >::ScalarNumber(this->mValue);
    if (index < currentMaxIndex) {
        return cmnData<mtsExecutionResult::Enum >::Scalar(this->mValue, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalar: mtsExecutionResult index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<mtsExecutionResult >::SerializeText(const mtsExecutionResult & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void mtsExecutionResult::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<mtsExecutionResult::Enum >::SerializeText(this->mValue, jsonValue["Value"]);
}
template<>
void cmnDataJSON<mtsExecutionResult >::DeSerializeText(mtsExecutionResult & data, const Json::Value & jsonValue) throw (std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void mtsExecutionResult::DeSerializeTextJSON(const Json::Value & jsonValue) throw (std::runtime_error) {
    cmnDataJSON<mtsExecutionResult::Enum >::DeSerializeText(this->mValue, jsonValue["Value"]);
}
#endif // CISST_HAS_JSON
std::string cmnDataHumanReadable_mtsExecutionResult_Enum(const mtsExecutionResult::Enum & data) {
    switch (data) {
        case mtsExecutionResult::UNDEFINED:
            return "undefined";
            break;
        case mtsExecutionResult::COMMAND_SUCCEEDED:
            return "command succeeded";
            break;
        case mtsExecutionResult::COMMAND_QUEUED:
            return "command queued";
            break;
        case mtsExecutionResult::FUNCTION_NOT_BOUND:
            return "function not bound to a command";
            break;
        case mtsExecutionResult::COMMAND_HAS_NO_MAILBOX:
            return "queued command has no mailbox";
            break;
        case mtsExecutionResult::COMMAND_DISABLED:
            return "command disabled";
            break;
        case mtsExecutionResult::INTERFACE_COMMAND_MAILBOX_FULL:
            return "interface command mailbox full";
            break;
        case mtsExecutionResult::COMMAND_ARGUMENT_QUEUE_FULL:
            return "command argument queue full";
            break;
        case mtsExecutionResult::INVALID_INPUT_TYPE:
            return "invalid input type";
            break;
        case mtsExecutionResult::METHOD_OR_FUNCTION_FAILED:
            return "underlying method or function returned \"false\"";
            break;
        case mtsExecutionResult::NETWORK_ERROR:
            return "network error";
            break;
        case mtsExecutionResult::INVALID_COMMAND_ID:
            return "invalid network command id";
            break;
        case mtsExecutionResult::ARGUMENT_DYNAMIC_CREATION_FAILED:
            return "unable to dynamically create an argument";
            break;
        case mtsExecutionResult::SERIALIZATION_ERROR:
            return "serialization failed";
            break;
        case mtsExecutionResult::DESERIALIZATION_ERROR:
            return "deserialization failed";
            break;
        case mtsExecutionResult::NO_FINISHED_EVENT:
            return "failed to allocate finished event";
            break;
        default: return "undefined enum mtsExecutionResult::Enum";
            break;
    }
}

std::string mtsExecutionResult::EnumToString(const mtsExecutionResult::Enum & data) throw (std::runtime_error) {
    switch (data) {
        case mtsExecutionResult::UNDEFINED:
            return "UNDEFINED";
            break;
        case mtsExecutionResult::COMMAND_SUCCEEDED:
            return "COMMAND_SUCCEEDED";
            break;
        case mtsExecutionResult::COMMAND_QUEUED:
            return "COMMAND_QUEUED";
            break;
        case mtsExecutionResult::FUNCTION_NOT_BOUND:
            return "FUNCTION_NOT_BOUND";
            break;
        case mtsExecutionResult::COMMAND_HAS_NO_MAILBOX:
            return "COMMAND_HAS_NO_MAILBOX";
            break;
        case mtsExecutionResult::COMMAND_DISABLED:
            return "COMMAND_DISABLED";
            break;
        case mtsExecutionResult::INTERFACE_COMMAND_MAILBOX_FULL:
            return "INTERFACE_COMMAND_MAILBOX_FULL";
            break;
        case mtsExecutionResult::COMMAND_ARGUMENT_QUEUE_FULL:
            return "COMMAND_ARGUMENT_QUEUE_FULL";
            break;
        case mtsExecutionResult::INVALID_INPUT_TYPE:
            return "INVALID_INPUT_TYPE";
            break;
        case mtsExecutionResult::METHOD_OR_FUNCTION_FAILED:
            return "METHOD_OR_FUNCTION_FAILED";
            break;
        case mtsExecutionResult::NETWORK_ERROR:
            return "NETWORK_ERROR";
            break;
        case mtsExecutionResult::INVALID_COMMAND_ID:
            return "INVALID_COMMAND_ID";
            break;
        case mtsExecutionResult::ARGUMENT_DYNAMIC_CREATION_FAILED:
            return "ARGUMENT_DYNAMIC_CREATION_FAILED";
            break;
        case mtsExecutionResult::SERIALIZATION_ERROR:
            return "SERIALIZATION_ERROR";
            break;
        case mtsExecutionResult::DESERIALIZATION_ERROR:
            return "DESERIALIZATION_ERROR";
            break;
        case mtsExecutionResult::NO_FINISHED_EVENT:
            return "NO_FINISHED_EVENT";
            break;
        default:
            break;
    }
    cmnThrow("mtsExecutionResult::EnumToString called with invalid enum");
    return "";
}

mtsExecutionResult::Enum mtsExecutionResult::EnumFromString(const std::string & value) throw (std::runtime_error) {
    if (value == "UNDEFINED") {
        return mtsExecutionResult::UNDEFINED;
    };
    if (value == "COMMAND_SUCCEEDED") {
        return mtsExecutionResult::COMMAND_SUCCEEDED;
    };
    if (value == "COMMAND_QUEUED") {
        return mtsExecutionResult::COMMAND_QUEUED;
    };
    if (value == "FUNCTION_NOT_BOUND") {
        return mtsExecutionResult::FUNCTION_NOT_BOUND;
    };
    if (value == "COMMAND_HAS_NO_MAILBOX") {
        return mtsExecutionResult::COMMAND_HAS_NO_MAILBOX;
    };
    if (value == "COMMAND_DISABLED") {
        return mtsExecutionResult::COMMAND_DISABLED;
    };
    if (value == "INTERFACE_COMMAND_MAILBOX_FULL") {
        return mtsExecutionResult::INTERFACE_COMMAND_MAILBOX_FULL;
    };
    if (value == "COMMAND_ARGUMENT_QUEUE_FULL") {
        return mtsExecutionResult::COMMAND_ARGUMENT_QUEUE_FULL;
    };
    if (value == "INVALID_INPUT_TYPE") {
        return mtsExecutionResult::INVALID_INPUT_TYPE;
    };
    if (value == "METHOD_OR_FUNCTION_FAILED") {
        return mtsExecutionResult::METHOD_OR_FUNCTION_FAILED;
    };
    if (value == "NETWORK_ERROR") {
        return mtsExecutionResult::NETWORK_ERROR;
    };
    if (value == "INVALID_COMMAND_ID") {
        return mtsExecutionResult::INVALID_COMMAND_ID;
    };
    if (value == "ARGUMENT_DYNAMIC_CREATION_FAILED") {
        return mtsExecutionResult::ARGUMENT_DYNAMIC_CREATION_FAILED;
    };
    if (value == "SERIALIZATION_ERROR") {
        return mtsExecutionResult::SERIALIZATION_ERROR;
    };
    if (value == "DESERIALIZATION_ERROR") {
        return mtsExecutionResult::DESERIALIZATION_ERROR;
    };
    if (value == "NO_FINISHED_EVENT") {
        return mtsExecutionResult::NO_FINISHED_EVENT;
    };
    cmnThrow("mtsExecutionResult::EnumFromString can't find matching enum for " + value);
    return static_cast<mtsExecutionResult::Enum >(0);
}

const std::vector<int> & mtsExecutionResult::EnumVectorInt(void) {
    static std::vector<int> vectorInt;
    if (vectorInt.empty()) {
        vectorInt.push_back(static_cast<int>(UNDEFINED));
        vectorInt.push_back(static_cast<int>(COMMAND_SUCCEEDED));
        vectorInt.push_back(static_cast<int>(COMMAND_QUEUED));
        vectorInt.push_back(static_cast<int>(FUNCTION_NOT_BOUND));
        vectorInt.push_back(static_cast<int>(COMMAND_HAS_NO_MAILBOX));
        vectorInt.push_back(static_cast<int>(COMMAND_DISABLED));
        vectorInt.push_back(static_cast<int>(INTERFACE_COMMAND_MAILBOX_FULL));
        vectorInt.push_back(static_cast<int>(COMMAND_ARGUMENT_QUEUE_FULL));
        vectorInt.push_back(static_cast<int>(INVALID_INPUT_TYPE));
        vectorInt.push_back(static_cast<int>(METHOD_OR_FUNCTION_FAILED));
        vectorInt.push_back(static_cast<int>(NETWORK_ERROR));
        vectorInt.push_back(static_cast<int>(INVALID_COMMAND_ID));
        vectorInt.push_back(static_cast<int>(ARGUMENT_DYNAMIC_CREATION_FAILED));
        vectorInt.push_back(static_cast<int>(SERIALIZATION_ERROR));
        vectorInt.push_back(static_cast<int>(DESERIALIZATION_ERROR));
        vectorInt.push_back(static_cast<int>(NO_FINISHED_EVENT));
    }
    return vectorInt;
}

const std::vector<std::string> & mtsExecutionResult::EnumVectorString(void) {
    static std::vector<std::string> vectorString;
    if (vectorString.empty()) {
        vectorString.push_back("UNDEFINED");
        vectorString.push_back("COMMAND_SUCCEEDED");
        vectorString.push_back("COMMAND_QUEUED");
        vectorString.push_back("FUNCTION_NOT_BOUND");
        vectorString.push_back("COMMAND_HAS_NO_MAILBOX");
        vectorString.push_back("COMMAND_DISABLED");
        vectorString.push_back("INTERFACE_COMMAND_MAILBOX_FULL");
        vectorString.push_back("COMMAND_ARGUMENT_QUEUE_FULL");
        vectorString.push_back("INVALID_INPUT_TYPE");
        vectorString.push_back("METHOD_OR_FUNCTION_FAILED");
        vectorString.push_back("NETWORK_ERROR");
        vectorString.push_back("INVALID_COMMAND_ID");
        vectorString.push_back("ARGUMENT_DYNAMIC_CREATION_FAILED");
        vectorString.push_back("SERIALIZATION_ERROR");
        vectorString.push_back("DESERIALIZATION_ERROR");
        vectorString.push_back("NO_FINISHED_EVENT");
    }
    return vectorString;
}

#if CISST_HAS_JSON
  CMN_IMPLEMENT_DATA_FUNCTIONS_JSON_FOR_ENUM(mtsExecutionResult::Enum, int);
#endif // CISST_HAS_JSON

