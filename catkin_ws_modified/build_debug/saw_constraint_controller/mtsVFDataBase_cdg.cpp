// file automatically generated, do not modify
// cisst version: 1.0.8
// source file: /home/davincic2/catkin_ws/src/cisst-saw/sawConstraintController/components/code/mtsVFDataBase.cdg

#include <sawConstraintController/mtsVFDataBase.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>

/* source line: 1 */

/* source line: 7 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(mtsVFDataBaseProxy);

mtsVFDataBase::mtsVFDataBase(void):
      Name()
    , Importance(1.0)
    , Active(true)
    , KinNames()
    , SensorNames()
    , SlackLimits()
    , SlackCosts()
    , NumSlacks(0)
    , DOFSelections()
    , ObjectiveRows(0)
    , IneqConstraintRows(0)
    , EqConstraintRows(0)
    , ObjectiveMatrix()
    , ObjectiveVector()
    , IneqConstraintMatrix()
    , IneqConstraintVector()
    , EqConstraintMatrix()
    , EqConstraintVector()
{}

mtsVFDataBase::mtsVFDataBase(const mtsVFDataBase & other):
      Name(other.Name)
    , Importance(other.Importance)
    , Active(other.Active)
    , KinNames(other.KinNames)
    , SensorNames(other.SensorNames)
    , SlackLimits(other.SlackLimits)
    , SlackCosts(other.SlackCosts)
    , NumSlacks(other.NumSlacks)
    , DOFSelections(other.DOFSelections)
    , ObjectiveRows(other.ObjectiveRows)
    , IneqConstraintRows(other.IneqConstraintRows)
    , EqConstraintRows(other.EqConstraintRows)
    , ObjectiveMatrix(other.ObjectiveMatrix)
    , ObjectiveVector(other.ObjectiveVector)
    , IneqConstraintMatrix(other.IneqConstraintMatrix)
    , IneqConstraintVector(other.IneqConstraintVector)
    , EqConstraintMatrix(other.EqConstraintMatrix)
    , EqConstraintVector(other.EqConstraintVector)
{}

mtsVFDataBase::~mtsVFDataBase(void){}


void mtsVFDataBase::SerializeRaw(std::ostream & outputStream) const
{
    cmnSerializeRaw(outputStream, this->Name);
    cmnSerializeRaw(outputStream, this->Importance);
    cmnSerializeRaw(outputStream, this->Active);
    cmnSerializeRaw(outputStream, this->KinNames);
    cmnSerializeRaw(outputStream, this->SensorNames);
    cmnSerializeRaw(outputStream, this->SlackLimits);
    cmnSerializeRaw(outputStream, this->SlackCosts);
    cmnSerializeSizeRaw(outputStream, this->NumSlacks);
    cmnSerializeRaw(outputStream, this->DOFSelections);
    cmnSerializeSizeRaw(outputStream, this->ObjectiveRows);
    cmnSerializeSizeRaw(outputStream, this->IneqConstraintRows);
    cmnSerializeSizeRaw(outputStream, this->EqConstraintRows);
    cmnSerializeRaw(outputStream, this->ObjectiveMatrix);
    cmnSerializeRaw(outputStream, this->ObjectiveVector);
    cmnSerializeRaw(outputStream, this->IneqConstraintMatrix);
    cmnSerializeRaw(outputStream, this->IneqConstraintVector);
    cmnSerializeRaw(outputStream, this->EqConstraintMatrix);
    cmnSerializeRaw(outputStream, this->EqConstraintVector);
}


void mtsVFDataBase::DeSerializeRaw(std::istream & inputStream)
{
    cmnDeSerializeRaw(inputStream, this->Name);
    cmnDeSerializeRaw(inputStream, this->Importance);
    cmnDeSerializeRaw(inputStream, this->Active);
    cmnDeSerializeRaw(inputStream, this->KinNames);
    cmnDeSerializeRaw(inputStream, this->SensorNames);
    cmnDeSerializeRaw(inputStream, this->SlackLimits);
    cmnDeSerializeRaw(inputStream, this->SlackCosts);
    cmnDeSerializeSizeRaw(inputStream, this->NumSlacks);
    cmnDeSerializeRaw(inputStream, this->DOFSelections);
    cmnDeSerializeSizeRaw(inputStream, this->ObjectiveRows);
    cmnDeSerializeSizeRaw(inputStream, this->IneqConstraintRows);
    cmnDeSerializeSizeRaw(inputStream, this->EqConstraintRows);
    cmnDeSerializeRaw(inputStream, this->ObjectiveMatrix);
    cmnDeSerializeRaw(inputStream, this->ObjectiveVector);
    cmnDeSerializeRaw(inputStream, this->IneqConstraintMatrix);
    cmnDeSerializeRaw(inputStream, this->IneqConstraintVector);
    cmnDeSerializeRaw(inputStream, this->EqConstraintMatrix);
    cmnDeSerializeRaw(inputStream, this->EqConstraintVector);
}


void mtsVFDataBase::ToStream(std::ostream & outputStream) const
{
    outputStream << this->HumanReadable();
}

void mtsVFDataBase::ToStreamRaw(std::ostream & outputStream, const char delimiter, bool headerOnly, const std::string & headerPrefix) const
{
    if (headerOnly) {
        outputStream << cmnData<mtsVFDataBase >::SerializeDescription(*this, delimiter, headerPrefix);
    } else {
        cmnData<mtsVFDataBase >::SerializeText(*this, outputStream, delimiter);
    }
}
/* source line: 12 */
/* source line: 19 */
/* source line: 27 */
/* source line: 35 */
/* source line: 42 */
/* source line: 49 */
/* source line: 56 */
/* source line: 63 */
/* source line: 72 */
/* source line: 79 */
/* source line: 88 */
/* source line: 97 */
/* source line: 106 */
/* source line: 113 */
/* source line: 120 */
/* source line: 127 */
/* source line: 134 */
/* source line: 141 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const mtsVFDataBase & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, mtsVFDataBase & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void mtsVFDataBase::Copy(const mtsVFDataBase & source) {
    cmnData<std::string >::Copy(this->Name, source.Name);
    cmnData<double >::Copy(this->Importance, source.Importance);
    cmnData<bool >::Copy(this->Active, source.Active);
    cmnData<std::vector<std::string> >::Copy(this->KinNames, source.KinNames);
    cmnData<std::vector<std::string> >::Copy(this->SensorNames, source.SensorNames);
    cmnData<vctDynamicVector<double> >::Copy(this->SlackLimits, source.SlackLimits);
    cmnData<vctDynamicVector<double> >::Copy(this->SlackCosts, source.SlackCosts);
    cmnData<size_t >::Copy(this->NumSlacks, source.NumSlacks);
    cmnData<vctDynamicVector<size_t> >::Copy(this->DOFSelections, source.DOFSelections);
    cmnData<size_t >::Copy(this->ObjectiveRows, source.ObjectiveRows);
    cmnData<size_t >::Copy(this->IneqConstraintRows, source.IneqConstraintRows);
    cmnData<size_t >::Copy(this->EqConstraintRows, source.EqConstraintRows);
    cmnData<vctDynamicMatrix<double> >::Copy(this->ObjectiveMatrix, source.ObjectiveMatrix);
    cmnData<vctDynamicVector<double> >::Copy(this->ObjectiveVector, source.ObjectiveVector);
    cmnData<vctDynamicMatrix<double> >::Copy(this->IneqConstraintMatrix, source.IneqConstraintMatrix);
    cmnData<vctDynamicVector<double> >::Copy(this->IneqConstraintVector, source.IneqConstraintVector);
    cmnData<vctDynamicMatrix<double> >::Copy(this->EqConstraintMatrix, source.EqConstraintMatrix);
    cmnData<vctDynamicVector<double> >::Copy(this->EqConstraintVector, source.EqConstraintVector);
}
void mtsVFDataBase::SerializeBinary(std::ostream & outputStream) const throw (std::runtime_error) {
    cmnData<std::string >::SerializeBinary(this->Name, outputStream);
    cmnData<double >::SerializeBinary(this->Importance, outputStream);
    cmnData<bool >::SerializeBinary(this->Active, outputStream);
    cmnData<std::vector<std::string> >::SerializeBinary(this->KinNames, outputStream);
    cmnData<std::vector<std::string> >::SerializeBinary(this->SensorNames, outputStream);
    cmnData<vctDynamicVector<double> >::SerializeBinary(this->SlackLimits, outputStream);
    cmnData<vctDynamicVector<double> >::SerializeBinary(this->SlackCosts, outputStream);
    cmnData<size_t >::SerializeBinary(this->NumSlacks, outputStream);
    cmnData<vctDynamicVector<size_t> >::SerializeBinary(this->DOFSelections, outputStream);
    cmnData<size_t >::SerializeBinary(this->ObjectiveRows, outputStream);
    cmnData<size_t >::SerializeBinary(this->IneqConstraintRows, outputStream);
    cmnData<size_t >::SerializeBinary(this->EqConstraintRows, outputStream);
    cmnData<vctDynamicMatrix<double> >::SerializeBinary(this->ObjectiveMatrix, outputStream);
    cmnData<vctDynamicVector<double> >::SerializeBinary(this->ObjectiveVector, outputStream);
    cmnData<vctDynamicMatrix<double> >::SerializeBinary(this->IneqConstraintMatrix, outputStream);
    cmnData<vctDynamicVector<double> >::SerializeBinary(this->IneqConstraintVector, outputStream);
    cmnData<vctDynamicMatrix<double> >::SerializeBinary(this->EqConstraintMatrix, outputStream);
    cmnData<vctDynamicVector<double> >::SerializeBinary(this->EqConstraintVector, outputStream);
}
void mtsVFDataBase::DeSerializeBinary(std::istream & inputStream,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) throw (std::runtime_error) {
    cmnData<std::string >::DeSerializeBinary(this->Name, inputStream, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->Importance, inputStream, localFormat, remoteFormat);
    cmnData<bool >::DeSerializeBinary(this->Active, inputStream, localFormat, remoteFormat);
    cmnData<std::vector<std::string> >::DeSerializeBinary(this->KinNames, inputStream, localFormat, remoteFormat);
    cmnData<std::vector<std::string> >::DeSerializeBinary(this->SensorNames, inputStream, localFormat, remoteFormat);
    cmnData<vctDynamicVector<double> >::DeSerializeBinary(this->SlackLimits, inputStream, localFormat, remoteFormat);
    cmnData<vctDynamicVector<double> >::DeSerializeBinary(this->SlackCosts, inputStream, localFormat, remoteFormat);
    cmnDataDeSerializeBinary_size_t(this->NumSlacks, inputStream, localFormat, remoteFormat);
    cmnData<vctDynamicVector<size_t> >::DeSerializeBinary(this->DOFSelections, inputStream, localFormat, remoteFormat);
    cmnDataDeSerializeBinary_size_t(this->ObjectiveRows, inputStream, localFormat, remoteFormat);
    cmnDataDeSerializeBinary_size_t(this->IneqConstraintRows, inputStream, localFormat, remoteFormat);
    cmnDataDeSerializeBinary_size_t(this->EqConstraintRows, inputStream, localFormat, remoteFormat);
    cmnData<vctDynamicMatrix<double> >::DeSerializeBinary(this->ObjectiveMatrix, inputStream, localFormat, remoteFormat);
    cmnData<vctDynamicVector<double> >::DeSerializeBinary(this->ObjectiveVector, inputStream, localFormat, remoteFormat);
    cmnData<vctDynamicMatrix<double> >::DeSerializeBinary(this->IneqConstraintMatrix, inputStream, localFormat, remoteFormat);
    cmnData<vctDynamicVector<double> >::DeSerializeBinary(this->IneqConstraintVector, inputStream, localFormat, remoteFormat);
    cmnData<vctDynamicMatrix<double> >::DeSerializeBinary(this->EqConstraintMatrix, inputStream, localFormat, remoteFormat);
    cmnData<vctDynamicVector<double> >::DeSerializeBinary(this->EqConstraintVector, inputStream, localFormat, remoteFormat);
}
void mtsVFDataBase::SerializeText(std::ostream & outputStream, const char delimiter) const throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<std::string >::SerializeText(this->Name, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<double >::SerializeText(this->Importance, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<bool >::SerializeText(this->Active, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<std::vector<std::string> >::SerializeText(this->KinNames, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<std::vector<std::string> >::SerializeText(this->SensorNames, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<vctDynamicVector<double> >::SerializeText(this->SlackLimits, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<vctDynamicVector<double> >::SerializeText(this->SlackCosts, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<size_t >::SerializeText(this->NumSlacks, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<vctDynamicVector<size_t> >::SerializeText(this->DOFSelections, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<size_t >::SerializeText(this->ObjectiveRows, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<size_t >::SerializeText(this->IneqConstraintRows, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<size_t >::SerializeText(this->EqConstraintRows, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<vctDynamicMatrix<double> >::SerializeText(this->ObjectiveMatrix, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<vctDynamicVector<double> >::SerializeText(this->ObjectiveVector, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<vctDynamicMatrix<double> >::SerializeText(this->IneqConstraintMatrix, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<vctDynamicVector<double> >::SerializeText(this->IneqConstraintVector, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<vctDynamicMatrix<double> >::SerializeText(this->EqConstraintMatrix, outputStream, delimiter);
    if (someData) {
        outputStream << delimiter;
    }
    someData = true;
    cmnData<vctDynamicVector<double> >::SerializeText(this->EqConstraintVector, outputStream, delimiter);
}
std::string mtsVFDataBase::SerializeDescription(const char delimiter, const std::string & userDescription) const {
    bool someData = false;
    const std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    std::stringstream description;
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<std::string >::SerializeDescription(this->Name, delimiter, prefix + "Name");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<double >::SerializeDescription(this->Importance, delimiter, prefix + "Importance");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<bool >::SerializeDescription(this->Active, delimiter, prefix + "Active");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<std::vector<std::string> >::SerializeDescription(this->KinNames, delimiter, prefix + "KinNames");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<std::vector<std::string> >::SerializeDescription(this->SensorNames, delimiter, prefix + "SensorNames");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<vctDynamicVector<double> >::SerializeDescription(this->SlackLimits, delimiter, prefix + "SlackLimits");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<vctDynamicVector<double> >::SerializeDescription(this->SlackCosts, delimiter, prefix + "SlackCosts");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<size_t >::SerializeDescription(this->NumSlacks, delimiter, prefix + "NumSlacks");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<vctDynamicVector<size_t> >::SerializeDescription(this->DOFSelections, delimiter, prefix + "DOFSelections");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<size_t >::SerializeDescription(this->ObjectiveRows, delimiter, prefix + "ObjectiveRows");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<size_t >::SerializeDescription(this->IneqConstraintRows, delimiter, prefix + "IneqConstraintRows");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<size_t >::SerializeDescription(this->EqConstraintRows, delimiter, prefix + "EqConstraintRows");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<vctDynamicMatrix<double> >::SerializeDescription(this->ObjectiveMatrix, delimiter, prefix + "ObjectiveMatrix");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<vctDynamicVector<double> >::SerializeDescription(this->ObjectiveVector, delimiter, prefix + "ObjectiveVector");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<vctDynamicMatrix<double> >::SerializeDescription(this->IneqConstraintMatrix, delimiter, prefix + "IneqConstraintMatrix");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<vctDynamicVector<double> >::SerializeDescription(this->IneqConstraintVector, delimiter, prefix + "IneqConstraintVector");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<vctDynamicMatrix<double> >::SerializeDescription(this->EqConstraintMatrix, delimiter, prefix + "EqConstraintMatrix");
    if (someData) {
        description << delimiter;
    }
    someData = true;
    description << cmnData<vctDynamicVector<double> >::SerializeDescription(this->EqConstraintVector, delimiter, prefix + "EqConstraintVector");
    return description.str();
}
void mtsVFDataBase::DeSerializeText(std::istream & inputStream,
                                          const char delimiter) throw (std::runtime_error) {
    bool someData = false;
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsVFDataBase");
    }
    someData = true;
    cmnData<std::string >::DeSerializeText(this->Name, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsVFDataBase");
    }
    someData = true;
    cmnData<double >::DeSerializeText(this->Importance, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsVFDataBase");
    }
    someData = true;
    cmnData<bool >::DeSerializeText(this->Active, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsVFDataBase");
    }
    someData = true;
    cmnData<std::vector<std::string> >::DeSerializeText(this->KinNames, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsVFDataBase");
    }
    someData = true;
    cmnData<std::vector<std::string> >::DeSerializeText(this->SensorNames, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsVFDataBase");
    }
    someData = true;
    cmnData<vctDynamicVector<double> >::DeSerializeText(this->SlackLimits, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsVFDataBase");
    }
    someData = true;
    cmnData<vctDynamicVector<double> >::DeSerializeText(this->SlackCosts, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsVFDataBase");
    }
    someData = true;
    cmnData<size_t >::DeSerializeText(this->NumSlacks, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsVFDataBase");
    }
    someData = true;
    cmnData<vctDynamicVector<size_t> >::DeSerializeText(this->DOFSelections, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsVFDataBase");
    }
    someData = true;
    cmnData<size_t >::DeSerializeText(this->ObjectiveRows, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsVFDataBase");
    }
    someData = true;
    cmnData<size_t >::DeSerializeText(this->IneqConstraintRows, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsVFDataBase");
    }
    someData = true;
    cmnData<size_t >::DeSerializeText(this->EqConstraintRows, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsVFDataBase");
    }
    someData = true;
    cmnData<vctDynamicMatrix<double> >::DeSerializeText(this->ObjectiveMatrix, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsVFDataBase");
    }
    someData = true;
    cmnData<vctDynamicVector<double> >::DeSerializeText(this->ObjectiveVector, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsVFDataBase");
    }
    someData = true;
    cmnData<vctDynamicMatrix<double> >::DeSerializeText(this->IneqConstraintMatrix, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsVFDataBase");
    }
    someData = true;
    cmnData<vctDynamicVector<double> >::DeSerializeText(this->IneqConstraintVector, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsVFDataBase");
    }
    someData = true;
    cmnData<vctDynamicMatrix<double> >::DeSerializeText(this->EqConstraintMatrix, inputStream, delimiter);
    if (someData) {
        cmnDataDeSerializeTextDelimiter(inputStream, delimiter, "mtsVFDataBase");
    }
    someData = true;
    cmnData<vctDynamicVector<double> >::DeSerializeText(this->EqConstraintVector, inputStream, delimiter);
}
std::string mtsVFDataBase::HumanReadable(void) const {
    std::stringstream description;
    description << "mtsVFDataBase" << std::endl;
    description << "  Name:" << cmnData<std::string >::HumanReadable(this->Name);
    description << "  Importance:" << cmnData<double >::HumanReadable(this->Importance);
    description << "  Active:" << cmnData<bool >::HumanReadable(this->Active);
    description << "  KinNames:" << cmnData<std::vector<std::string> >::HumanReadable(this->KinNames);
    description << "  SensorNames:" << cmnData<std::vector<std::string> >::HumanReadable(this->SensorNames);
    description << "  SlackLimits:" << cmnData<vctDynamicVector<double> >::HumanReadable(this->SlackLimits);
    description << "  SlackCosts:" << cmnData<vctDynamicVector<double> >::HumanReadable(this->SlackCosts);
    description << "  NumSlacks:" << cmnData<size_t >::HumanReadable(this->NumSlacks);
    description << "  DOFSelections:" << cmnData<vctDynamicVector<size_t> >::HumanReadable(this->DOFSelections);
    description << "  ObjectiveRows:" << cmnData<size_t >::HumanReadable(this->ObjectiveRows);
    description << "  IneqConstraintRows:" << cmnData<size_t >::HumanReadable(this->IneqConstraintRows);
    description << "  EqConstraintRows:" << cmnData<size_t >::HumanReadable(this->EqConstraintRows);
    description << "  ObjectiveMatrix:" << cmnData<vctDynamicMatrix<double> >::HumanReadable(this->ObjectiveMatrix);
    description << "  ObjectiveVector:" << cmnData<vctDynamicVector<double> >::HumanReadable(this->ObjectiveVector);
    description << "  IneqConstraintMatrix:" << cmnData<vctDynamicMatrix<double> >::HumanReadable(this->IneqConstraintMatrix);
    description << "  IneqConstraintVector:" << cmnData<vctDynamicVector<double> >::HumanReadable(this->IneqConstraintVector);
    description << "  EqConstraintMatrix:" << cmnData<vctDynamicMatrix<double> >::HumanReadable(this->EqConstraintMatrix);
    description << "  EqConstraintVector:" << cmnData<vctDynamicVector<double> >::HumanReadable(this->EqConstraintVector);
    return description.str();
}
bool mtsVFDataBase::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<std::string >::ScalarNumberIsFixed(this->Name)
           && cmnData<double >::ScalarNumberIsFixed(this->Importance)
           && cmnData<bool >::ScalarNumberIsFixed(this->Active)
           && cmnData<std::vector<std::string> >::ScalarNumberIsFixed(this->KinNames)
           && cmnData<std::vector<std::string> >::ScalarNumberIsFixed(this->SensorNames)
           && cmnData<vctDynamicVector<double> >::ScalarNumberIsFixed(this->SlackLimits)
           && cmnData<vctDynamicVector<double> >::ScalarNumberIsFixed(this->SlackCosts)
           && cmnData<size_t >::ScalarNumberIsFixed(this->NumSlacks)
           && cmnData<vctDynamicVector<size_t> >::ScalarNumberIsFixed(this->DOFSelections)
           && cmnData<size_t >::ScalarNumberIsFixed(this->ObjectiveRows)
           && cmnData<size_t >::ScalarNumberIsFixed(this->IneqConstraintRows)
           && cmnData<size_t >::ScalarNumberIsFixed(this->EqConstraintRows)
           && cmnData<vctDynamicMatrix<double> >::ScalarNumberIsFixed(this->ObjectiveMatrix)
           && cmnData<vctDynamicVector<double> >::ScalarNumberIsFixed(this->ObjectiveVector)
           && cmnData<vctDynamicMatrix<double> >::ScalarNumberIsFixed(this->IneqConstraintMatrix)
           && cmnData<vctDynamicVector<double> >::ScalarNumberIsFixed(this->IneqConstraintVector)
           && cmnData<vctDynamicMatrix<double> >::ScalarNumberIsFixed(this->EqConstraintMatrix)
           && cmnData<vctDynamicVector<double> >::ScalarNumberIsFixed(this->EqConstraintVector)
    ;
}
size_t mtsVFDataBase::ScalarNumber(void) const {
    return 0
           + cmnData<std::string >::ScalarNumber(this->Name)
           + cmnData<double >::ScalarNumber(this->Importance)
           + cmnData<bool >::ScalarNumber(this->Active)
           + cmnData<std::vector<std::string> >::ScalarNumber(this->KinNames)
           + cmnData<std::vector<std::string> >::ScalarNumber(this->SensorNames)
           + cmnData<vctDynamicVector<double> >::ScalarNumber(this->SlackLimits)
           + cmnData<vctDynamicVector<double> >::ScalarNumber(this->SlackCosts)
           + cmnData<size_t >::ScalarNumber(this->NumSlacks)
           + cmnData<vctDynamicVector<size_t> >::ScalarNumber(this->DOFSelections)
           + cmnData<size_t >::ScalarNumber(this->ObjectiveRows)
           + cmnData<size_t >::ScalarNumber(this->IneqConstraintRows)
           + cmnData<size_t >::ScalarNumber(this->EqConstraintRows)
           + cmnData<vctDynamicMatrix<double> >::ScalarNumber(this->ObjectiveMatrix)
           + cmnData<vctDynamicVector<double> >::ScalarNumber(this->ObjectiveVector)
           + cmnData<vctDynamicMatrix<double> >::ScalarNumber(this->IneqConstraintMatrix)
           + cmnData<vctDynamicVector<double> >::ScalarNumber(this->IneqConstraintVector)
           + cmnData<vctDynamicMatrix<double> >::ScalarNumber(this->EqConstraintMatrix)
           + cmnData<vctDynamicVector<double> >::ScalarNumber(this->EqConstraintVector)
    ;
}
std::string mtsVFDataBase::ScalarDescription(const size_t index, const std::string & userDescription) const throw (std::out_of_range) {
    std::string prefix = (userDescription == "") ? "" : (userDescription + ".");
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->Name);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::ScalarDescription(this->Name, index - baseIndex, prefix + "Name");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<double >::ScalarNumber(this->Importance);
    if (index < currentMaxIndex) {
        return cmnData<double >::ScalarDescription(this->Importance, index - baseIndex, prefix + "Importance");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<bool >::ScalarNumber(this->Active);
    if (index < currentMaxIndex) {
        return cmnData<bool >::ScalarDescription(this->Active, index - baseIndex, prefix + "Active");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<std::vector<std::string> >::ScalarNumber(this->KinNames);
    if (index < currentMaxIndex) {
        return cmnData<std::vector<std::string> >::ScalarDescription(this->KinNames, index - baseIndex, prefix + "KinNames");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<std::vector<std::string> >::ScalarNumber(this->SensorNames);
    if (index < currentMaxIndex) {
        return cmnData<std::vector<std::string> >::ScalarDescription(this->SensorNames, index - baseIndex, prefix + "SensorNames");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vctDynamicVector<double> >::ScalarNumber(this->SlackLimits);
    if (index < currentMaxIndex) {
        return cmnData<vctDynamicVector<double> >::ScalarDescription(this->SlackLimits, index - baseIndex, prefix + "SlackLimits");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vctDynamicVector<double> >::ScalarNumber(this->SlackCosts);
    if (index < currentMaxIndex) {
        return cmnData<vctDynamicVector<double> >::ScalarDescription(this->SlackCosts, index - baseIndex, prefix + "SlackCosts");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<size_t >::ScalarNumber(this->NumSlacks);
    if (index < currentMaxIndex) {
        return cmnData<size_t >::ScalarDescription(this->NumSlacks, index - baseIndex, prefix + "NumSlacks");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vctDynamicVector<size_t> >::ScalarNumber(this->DOFSelections);
    if (index < currentMaxIndex) {
        return cmnData<vctDynamicVector<size_t> >::ScalarDescription(this->DOFSelections, index - baseIndex, prefix + "DOFSelections");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<size_t >::ScalarNumber(this->ObjectiveRows);
    if (index < currentMaxIndex) {
        return cmnData<size_t >::ScalarDescription(this->ObjectiveRows, index - baseIndex, prefix + "ObjectiveRows");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<size_t >::ScalarNumber(this->IneqConstraintRows);
    if (index < currentMaxIndex) {
        return cmnData<size_t >::ScalarDescription(this->IneqConstraintRows, index - baseIndex, prefix + "IneqConstraintRows");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<size_t >::ScalarNumber(this->EqConstraintRows);
    if (index < currentMaxIndex) {
        return cmnData<size_t >::ScalarDescription(this->EqConstraintRows, index - baseIndex, prefix + "EqConstraintRows");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vctDynamicMatrix<double> >::ScalarNumber(this->ObjectiveMatrix);
    if (index < currentMaxIndex) {
        return cmnData<vctDynamicMatrix<double> >::ScalarDescription(this->ObjectiveMatrix, index - baseIndex, prefix + "ObjectiveMatrix");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vctDynamicVector<double> >::ScalarNumber(this->ObjectiveVector);
    if (index < currentMaxIndex) {
        return cmnData<vctDynamicVector<double> >::ScalarDescription(this->ObjectiveVector, index - baseIndex, prefix + "ObjectiveVector");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vctDynamicMatrix<double> >::ScalarNumber(this->IneqConstraintMatrix);
    if (index < currentMaxIndex) {
        return cmnData<vctDynamicMatrix<double> >::ScalarDescription(this->IneqConstraintMatrix, index - baseIndex, prefix + "IneqConstraintMatrix");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vctDynamicVector<double> >::ScalarNumber(this->IneqConstraintVector);
    if (index < currentMaxIndex) {
        return cmnData<vctDynamicVector<double> >::ScalarDescription(this->IneqConstraintVector, index - baseIndex, prefix + "IneqConstraintVector");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vctDynamicMatrix<double> >::ScalarNumber(this->EqConstraintMatrix);
    if (index < currentMaxIndex) {
        return cmnData<vctDynamicMatrix<double> >::ScalarDescription(this->EqConstraintMatrix, index - baseIndex, prefix + "EqConstraintMatrix");
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vctDynamicVector<double> >::ScalarNumber(this->EqConstraintVector);
    if (index < currentMaxIndex) {
        return cmnData<vctDynamicVector<double> >::ScalarDescription(this->EqConstraintVector, index - baseIndex, prefix + "EqConstraintVector");
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: mtsVFDataBase index out of range"));
    return "";
}
double mtsVFDataBase::Scalar(const size_t index) const throw (std::out_of_range) {
    size_t baseIndex = 0;
    size_t currentMaxIndex = 0;
    currentMaxIndex += cmnData<std::string >::ScalarNumber(this->Name);
    if (index < currentMaxIndex) {
        return cmnData<std::string >::Scalar(this->Name, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<double >::ScalarNumber(this->Importance);
    if (index < currentMaxIndex) {
        return cmnData<double >::Scalar(this->Importance, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<bool >::ScalarNumber(this->Active);
    if (index < currentMaxIndex) {
        return cmnData<bool >::Scalar(this->Active, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<std::vector<std::string> >::ScalarNumber(this->KinNames);
    if (index < currentMaxIndex) {
        return cmnData<std::vector<std::string> >::Scalar(this->KinNames, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<std::vector<std::string> >::ScalarNumber(this->SensorNames);
    if (index < currentMaxIndex) {
        return cmnData<std::vector<std::string> >::Scalar(this->SensorNames, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vctDynamicVector<double> >::ScalarNumber(this->SlackLimits);
    if (index < currentMaxIndex) {
        return cmnData<vctDynamicVector<double> >::Scalar(this->SlackLimits, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vctDynamicVector<double> >::ScalarNumber(this->SlackCosts);
    if (index < currentMaxIndex) {
        return cmnData<vctDynamicVector<double> >::Scalar(this->SlackCosts, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<size_t >::ScalarNumber(this->NumSlacks);
    if (index < currentMaxIndex) {
        return cmnData<size_t >::Scalar(this->NumSlacks, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vctDynamicVector<size_t> >::ScalarNumber(this->DOFSelections);
    if (index < currentMaxIndex) {
        return cmnData<vctDynamicVector<size_t> >::Scalar(this->DOFSelections, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<size_t >::ScalarNumber(this->ObjectiveRows);
    if (index < currentMaxIndex) {
        return cmnData<size_t >::Scalar(this->ObjectiveRows, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<size_t >::ScalarNumber(this->IneqConstraintRows);
    if (index < currentMaxIndex) {
        return cmnData<size_t >::Scalar(this->IneqConstraintRows, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<size_t >::ScalarNumber(this->EqConstraintRows);
    if (index < currentMaxIndex) {
        return cmnData<size_t >::Scalar(this->EqConstraintRows, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vctDynamicMatrix<double> >::ScalarNumber(this->ObjectiveMatrix);
    if (index < currentMaxIndex) {
        return cmnData<vctDynamicMatrix<double> >::Scalar(this->ObjectiveMatrix, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vctDynamicVector<double> >::ScalarNumber(this->ObjectiveVector);
    if (index < currentMaxIndex) {
        return cmnData<vctDynamicVector<double> >::Scalar(this->ObjectiveVector, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vctDynamicMatrix<double> >::ScalarNumber(this->IneqConstraintMatrix);
    if (index < currentMaxIndex) {
        return cmnData<vctDynamicMatrix<double> >::Scalar(this->IneqConstraintMatrix, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vctDynamicVector<double> >::ScalarNumber(this->IneqConstraintVector);
    if (index < currentMaxIndex) {
        return cmnData<vctDynamicVector<double> >::Scalar(this->IneqConstraintVector, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vctDynamicMatrix<double> >::ScalarNumber(this->EqConstraintMatrix);
    if (index < currentMaxIndex) {
        return cmnData<vctDynamicMatrix<double> >::Scalar(this->EqConstraintMatrix, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    currentMaxIndex += cmnData<vctDynamicVector<double> >::ScalarNumber(this->EqConstraintVector);
    if (index < currentMaxIndex) {
        return cmnData<vctDynamicVector<double> >::Scalar(this->EqConstraintVector, index - baseIndex);
    }
    baseIndex = currentMaxIndex;
    cmnThrow(std::out_of_range("cmnDataScalar: mtsVFDataBase index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<mtsVFDataBase >::SerializeText(const mtsVFDataBase & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void mtsVFDataBase::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<std::string >::SerializeText(this->Name, jsonValue["Name"]);
    cmnDataJSON<double >::SerializeText(this->Importance, jsonValue["Importance"]);
    cmnDataJSON<bool >::SerializeText(this->Active, jsonValue["Active"]);
    cmnDataJSON<std::vector<std::string> >::SerializeText(this->KinNames, jsonValue["KinNames"]);
    cmnDataJSON<std::vector<std::string> >::SerializeText(this->SensorNames, jsonValue["SensorNames"]);
    cmnDataJSON<vctDynamicVector<double> >::SerializeText(this->SlackLimits, jsonValue["SlackLimits"]);
    cmnDataJSON<vctDynamicVector<double> >::SerializeText(this->SlackCosts, jsonValue["SlackCosts"]);
    cmnDataJSON<size_t >::SerializeText(this->NumSlacks, jsonValue["NumSlacks"]);
    cmnDataJSON<vctDynamicVector<size_t> >::SerializeText(this->DOFSelections, jsonValue["DOFSelections"]);
    cmnDataJSON<size_t >::SerializeText(this->ObjectiveRows, jsonValue["ObjectiveRows"]);
    cmnDataJSON<size_t >::SerializeText(this->IneqConstraintRows, jsonValue["IneqConstraintRows"]);
    cmnDataJSON<size_t >::SerializeText(this->EqConstraintRows, jsonValue["EqConstraintRows"]);
    cmnDataJSON<vctDynamicMatrix<double> >::SerializeText(this->ObjectiveMatrix, jsonValue["ObjectiveMatrix"]);
    cmnDataJSON<vctDynamicVector<double> >::SerializeText(this->ObjectiveVector, jsonValue["ObjectiveVector"]);
    cmnDataJSON<vctDynamicMatrix<double> >::SerializeText(this->IneqConstraintMatrix, jsonValue["IneqConstraintMatrix"]);
    cmnDataJSON<vctDynamicVector<double> >::SerializeText(this->IneqConstraintVector, jsonValue["IneqConstraintVector"]);
    cmnDataJSON<vctDynamicMatrix<double> >::SerializeText(this->EqConstraintMatrix, jsonValue["EqConstraintMatrix"]);
    cmnDataJSON<vctDynamicVector<double> >::SerializeText(this->EqConstraintVector, jsonValue["EqConstraintVector"]);
}
template<>
void cmnDataJSON<mtsVFDataBase >::DeSerializeText(mtsVFDataBase & data, const Json::Value & jsonValue) throw (std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void mtsVFDataBase::DeSerializeTextJSON(const Json::Value & jsonValue) throw (std::runtime_error) {
    cmnDataJSON<std::string >::DeSerializeText(this->Name, jsonValue["Name"]);
    cmnDataJSON<double >::DeSerializeText(this->Importance, jsonValue["Importance"]);
    cmnDataJSON<bool >::DeSerializeText(this->Active, jsonValue["Active"]);
    cmnDataJSON<std::vector<std::string> >::DeSerializeText(this->KinNames, jsonValue["KinNames"]);
    cmnDataJSON<std::vector<std::string> >::DeSerializeText(this->SensorNames, jsonValue["SensorNames"]);
    cmnDataJSON<vctDynamicVector<double> >::DeSerializeText(this->SlackLimits, jsonValue["SlackLimits"]);
    cmnDataJSON<vctDynamicVector<double> >::DeSerializeText(this->SlackCosts, jsonValue["SlackCosts"]);
    cmnDataJSON<size_t >::DeSerializeText(this->NumSlacks, jsonValue["NumSlacks"]);
    cmnDataJSON<vctDynamicVector<size_t> >::DeSerializeText(this->DOFSelections, jsonValue["DOFSelections"]);
    cmnDataJSON<size_t >::DeSerializeText(this->ObjectiveRows, jsonValue["ObjectiveRows"]);
    cmnDataJSON<size_t >::DeSerializeText(this->IneqConstraintRows, jsonValue["IneqConstraintRows"]);
    cmnDataJSON<size_t >::DeSerializeText(this->EqConstraintRows, jsonValue["EqConstraintRows"]);
    cmnDataJSON<vctDynamicMatrix<double> >::DeSerializeText(this->ObjectiveMatrix, jsonValue["ObjectiveMatrix"]);
    cmnDataJSON<vctDynamicVector<double> >::DeSerializeText(this->ObjectiveVector, jsonValue["ObjectiveVector"]);
    cmnDataJSON<vctDynamicMatrix<double> >::DeSerializeText(this->IneqConstraintMatrix, jsonValue["IneqConstraintMatrix"]);
    cmnDataJSON<vctDynamicVector<double> >::DeSerializeText(this->IneqConstraintVector, jsonValue["IneqConstraintVector"]);
    cmnDataJSON<vctDynamicMatrix<double> >::DeSerializeText(this->EqConstraintMatrix, jsonValue["EqConstraintMatrix"]);
    cmnDataJSON<vctDynamicVector<double> >::DeSerializeText(this->EqConstraintVector, jsonValue["EqConstraintVector"]);
}
#endif // CISST_HAS_JSON

