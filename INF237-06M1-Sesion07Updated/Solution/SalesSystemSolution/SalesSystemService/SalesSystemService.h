#pragma once

using namespace System;
using namespace SalesSystemModel;
using namespace System::Collections::Generic;

namespace SalesSystemService {
	public ref class Service
	{
	private:
		//Mi BD de robots
		static List<RobotWaiter^>^ RobotsDB = gcnew List<RobotWaiter^>();
	public:
		//Métodos para el mantenimiento (CRUD) de Robots
		static int AddRobot(RobotWaiter^);
		static int UpdateRobot(RobotWaiter^);
		static int DeleteRobot(int robotId);
		static List<RobotWaiter^>^ QueryAllRobots();
		static RobotWaiter^ QueryRobotById(int robotId);
		static List<String^>^ QueryAllBrands();
		static List<Brand^>^ QueryAllBrandObjects();
		static Brand^ QueryBrandById(int brandId);
	};
}
