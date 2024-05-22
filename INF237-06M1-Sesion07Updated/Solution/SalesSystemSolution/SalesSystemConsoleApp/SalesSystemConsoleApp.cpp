#include "pch.h"

using namespace SalesSystemModel;
using namespace SalesSystemService;
using namespace System::Collections::Generic;
using namespace System;


int main(array<System::String ^> ^args)
{
    RobotWaiter^ objRobot1 = gcnew RobotWaiter();
    RobotWaiter^ objRobot2 = gcnew RobotWaiter();

    objRobot1->Id = 1;
    objRobot1->Brand = "LG";
    objRobot1->LoadCapacity = 50;
    objRobot1->Model = "2000";
    objRobot1->Name = "Darwin";
    objRobot1->Speed = 3.2;

    objRobot2->Id = 2;
    objRobot2->Brand = "Pudu";
    objRobot2->LoadCapacity = 60;
    objRobot2->Model = "Bellabot";
    objRobot2->Name = "Kitty";
    objRobot2->Speed = 3.5;

    Service::AddRobot(objRobot1);
    Service::AddRobot(objRobot2);

    Console::WriteLine("Ingrese el código del robot a buscar: ");
    int robotId = Int32::Parse(Console::ReadLine());
    RobotWaiter^ robot = Service::QueryRobotById(robotId);
    if (robot != nullptr) {
        Console::WriteLine("El robot es "+ robot->Id + " - " + robot->Name + " - " + robot->Model + ", Marca " + robot->Brand);
    }
    else {
        Console::WriteLine("No hay un robot con ese Id.");
    }
    return 0;
}
