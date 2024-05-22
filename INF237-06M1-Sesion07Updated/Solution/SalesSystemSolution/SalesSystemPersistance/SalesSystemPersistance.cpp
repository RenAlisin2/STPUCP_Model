#include "pch.h"

#include "SalesSystemPersistance.h"
using namespace System::IO;
using namespace System::Xml::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;

void SalesSystemPersistance::Persistance::PersistTextFile(String^ fileName, Object^ persistObject)
{
    FileStream^ file;
    StreamWriter^ writer;
    file = gcnew FileStream(fileName, FileMode::Create, FileAccess::Write);
    writer = gcnew StreamWriter(file);
    if (persistObject->GetType() == List<RobotWaiter^>::typeid) {
        List<RobotWaiter^>^ robots = (List<RobotWaiter^>^)persistObject;
        for (int i = 0; i < robots->Count; i++) {
            RobotWaiter^ robot = robots[i];
            writer->WriteLine(robot->Id + "," + robot->Name + "," + robot->Brand + "," + robot->Model + "," +
                            robot->LoadCapacity + "," + robot->Speed);
        }
    }
    if (writer != nullptr) writer->Close();
    if (file != nullptr) file->Close();
}

Object^ SalesSystemPersistance::Persistance::LoadTextFile(String^ fileName)
{
    FileStream^ file;
    StreamReader^ reader;
    Object^ result;
    if (File::Exists(fileName)) {
        file = gcnew FileStream(fileName, FileMode::Open, FileAccess::Read);
        reader = gcnew StreamReader(file);
        int i = 1;
        if (fileName->Equals(TXT_ROBOT_FILE_NAME)) {
            result = gcnew List<RobotWaiter^>();
            while (true) {
                String^ line = reader->ReadLine();
                if (line == nullptr) break;
                array<String^>^ record = line->Split(',');
                RobotWaiter^ robot = gcnew RobotWaiter();
                robot->Id = Convert::ToInt32(record[0]);
                robot->Name = record[1];
                Brand^ brand = gcnew Brand();
                brand->Id = i++;
                brand->Name = record[2];
                //robot->Brand = record[2];
                robot->Brand = brand;
                robot->Model = record[3];
                robot->LoadCapacity = Convert::ToDouble(record[4]);
                robot->Speed = Convert::ToDouble(record[5]);
                ((List<RobotWaiter^>^)result)->Add(robot);
            }
        }

        if (reader != nullptr) reader->Close();
        if (file != nullptr) file->Close();
    }
    return result;
}

void SalesSystemPersistance::Persistance::PersistXMLFile(String^ fileName, Object^ persistObject)
{
    StreamWriter^ writer;
    try {
        writer = gcnew StreamWriter(fileName);
        if (persistObject->GetType() == List<RobotWaiter^>::typeid) {
            XmlSerializer^ xmlSerializer = gcnew XmlSerializer(List<RobotWaiter^>::typeid);
            xmlSerializer->Serialize(writer, persistObject);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (writer != nullptr) writer->Close();
    }
}

Object^ SalesSystemPersistance::Persistance::LoadXMLFile(String^ fileName)
{
    StreamReader^ reader;
    Object^ result;
    XmlSerializer^ xmlSerializer;
    try {
        if (File::Exists(fileName)) {
            reader = gcnew StreamReader(fileName);
            if (fileName->Equals(XML_ROBOT_FILE_NAME)) {
                xmlSerializer = gcnew XmlSerializer(List<RobotWaiter^>::typeid);
                result = xmlSerializer->Deserialize(reader);
            }
            if (fileName->Equals(XML_BRAND_FILE_NAME)) {
                xmlSerializer = gcnew XmlSerializer(List<String^>::typeid);
                result = xmlSerializer->Deserialize(reader);
            }
            if (fileName->Equals(XML_BRAND_OBJECTS_FILE_NAME)) {
                xmlSerializer = gcnew XmlSerializer(List<Brand^>::typeid);
                result = xmlSerializer->Deserialize(reader);
            }
            //reader->Close();  //Aquí no debería estar.
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (reader != nullptr) reader->Close();
    }

    return result;
}

void SalesSystemPersistance::Persistance::PersistBinaryFile(String^ fileName, Object^ persistObject)
{
    FileStream^ file;
    BinaryFormatter^ formatter = gcnew BinaryFormatter();
    try {
        file = gcnew FileStream(fileName, FileMode::Create, FileAccess::Write);
        formatter->Serialize(file, persistObject);
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (file != nullptr) file->Close();
    }

}

Object^ SalesSystemPersistance::Persistance::LoadBinaryFile(String^ fileName)
{
    FileStream^ file;
    Object^ result;
    BinaryFormatter^ formatter;
    try {
        if (File::Exists(fileName)) {
            file = gcnew FileStream(fileName, FileMode::Open, FileAccess::Read);
            formatter = gcnew BinaryFormatter();
            result = formatter->Deserialize(file);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (file != nullptr) file->Close();
    }

    return result;
}


int SalesSystemPersistance::Persistance::AddRobot(RobotWaiter^ robot)
{
    robotsListDB->Add(robot);
    //PersistTextFile(TXT_ROBOT_FILE_NAME, robotsListDB);
    //PersistXMLFile(XML_ROBOT_FILE_NAME, robotsListDB);
    PersistBinaryFile(BIN_ROBOT_FILE_NAME, robotsListDB);
    return 1;
}

List<RobotWaiter^>^ SalesSystemPersistance::Persistance::QueryAllRobots()
{
    //robotsListDB = (List<RobotWaiter^>^)LoadTextFile(TXT_ROBOT_FILE_NAME);
    //robotsListDB = (List<RobotWaiter^>^)LoadXMLFile(XML_ROBOT_FILE_NAME);
    robotsListDB = (List<RobotWaiter^>^)LoadBinaryFile(BIN_ROBOT_FILE_NAME);
    if (robotsListDB == nullptr)
        robotsListDB = gcnew List<RobotWaiter^>();
    return robotsListDB;
}

int SalesSystemPersistance::Persistance::UpdateRobot(RobotWaiter^ robot)
{
    for (int i = 0; i < robotsListDB->Count; i++) {
        if (robotsListDB[i]->Id == robot->Id) {
            robotsListDB[i] = robot;
            //PersistTextFile(TXT_ROBOT_FILE_NAME, robotsListDB);
            //PersistXMLFile(XML_ROBOT_FILE_NAME, robotsListDB);
            PersistBinaryFile(BIN_ROBOT_FILE_NAME, robotsListDB);
            return robot->Id;
        }
    }
    return 0;
}

int SalesSystemPersistance::Persistance::DeleteRobot(int robotId)
{
    for (int i = 0; i < robotsListDB->Count; i++) {
        if (robotsListDB[i]->Id == robotId) {
            robotsListDB->RemoveAt(i);
            //PersistTextFile(TXT_ROBOT_FILE_NAME, robotsListDB);
            //PersistXMLFile(XML_ROBOT_FILE_NAME, robotsListDB);
            PersistBinaryFile(BIN_ROBOT_FILE_NAME, robotsListDB);
            return robotId;
        }
    }
    return 0;
}

RobotWaiter^ SalesSystemPersistance::Persistance::QueryRobotById(int robotId)
{
    //robotsListDB = (List<RobotWaiter^>^)LoadTextFile(TXT_ROBOT_FILE_NAME);
    //robotsListDB = (List<RobotWaiter^>^)LoadXMLFile(XML_ROBOT_FILE_NAME);
    robotsListDB = (List<RobotWaiter^>^)LoadBinaryFile(BIN_ROBOT_FILE_NAME);
    for (int i = 0; i < robotsListDB->Count; i++) {
        if (robotsListDB[i]->Id == robotId) {
            return robotsListDB[i];
        }
    }
    return nullptr;
}

List<String^>^ SalesSystemPersistance::Persistance::QueryAllBrands()
{
    brandsListDB = (List<String^>^)LoadXMLFile(XML_BRAND_FILE_NAME);
    if (brandsListDB == nullptr)
        brandsListDB = gcnew List<String^>();
    return brandsListDB;
}

List<Brand^>^ SalesSystemPersistance::Persistance::QueryAllBrandObjects()
{
    brandObjectsListDB = (List<Brand^>^)LoadXMLFile(XML_BRAND_OBJECTS_FILE_NAME);
    if (brandObjectsListDB == nullptr)
        brandObjectsListDB = gcnew List<Brand^>();
    return brandObjectsListDB;
}

Brand^ SalesSystemPersistance::Persistance::QueryBrandById(int brandId)
{
    brandObjectsListDB = (List<Brand^>^)LoadXMLFile(XML_BRAND_OBJECTS_FILE_NAME);
    if (brandObjectsListDB == nullptr)
        brandObjectsListDB = gcnew List<Brand^>();
    else {
        for (int i = 0; i < brandObjectsListDB->Count; i++) {
            if (brandObjectsListDB[i]->Id == brandId)
                return brandObjectsListDB[i];
        }
    }
    return nullptr;
}
