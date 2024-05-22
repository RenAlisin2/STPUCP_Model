#pragma once

using namespace System;
using namespace SalesSystemModel;
using namespace System::Collections::Generic;

namespace SalesSystemPersistance {
	public ref class Persistance
	{
	private:
		static List<RobotWaiter^>^ robotsListDB = gcnew List<RobotWaiter^>();
		static List<String^>^ brandsListDB = gcnew List<String^>();
		static List<Brand^>^ brandObjectsListDB = gcnew List<Brand^>();

		static void PersistTextFile(String^ fileName, Object^ persistObject);
		static Object^ LoadTextFile(String^ fileName);
		static void PersistXMLFile(String^ fileName, Object^ persistObject);
		static Object^ LoadXMLFile(String^ fileName);
		static void PersistBinaryFile(String^ fileName, Object^ persistObject);
		static Object^ LoadBinaryFile(String^ fileName);


	public:
		static String^ TXT_ROBOT_FILE_NAME = "robots.txt";
		static String^ XML_ROBOT_FILE_NAME = "robots.xml";
		static String^ BIN_ROBOT_FILE_NAME = "robots.bin";
		static String^ XML_BRAND_FILE_NAME = "brands.xml";
		static String^ XML_BRAND_OBJECTS_FILE_NAME = "brandObjects.xml";

		static int AddRobot(RobotWaiter^ robot);
		static List<RobotWaiter^>^ QueryAllRobots();
		static int UpdateRobot(RobotWaiter^ robot);
		static int DeleteRobot(int robotId);
		static RobotWaiter^ QueryRobotById(int robotId);
		static List<String^>^ QueryAllBrands();
		static List<Brand^>^ QueryAllBrandObjects();
		static Brand^ QueryBrandById(int brandId);
	};
}
