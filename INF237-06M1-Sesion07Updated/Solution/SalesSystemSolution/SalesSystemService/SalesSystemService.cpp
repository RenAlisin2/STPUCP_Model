#include "pch.h"

#include "SalesSystemService.h"
using namespace SalesSystemPersistance;

int SalesSystemService::Service::AddRobot(RobotWaiter^ robot)
{
    //RobotsDB->Add(robot);
    Persistance::AddRobot(robot);
    return robot->Id;
}

int SalesSystemService::Service::UpdateRobot(RobotWaiter^ robot)
{   /*
    for (int i = 0; i < RobotsDB->Count; i++) {
        if (RobotsDB[i]->Id == robot->Id) {
            RobotsDB[i] = robot;
            return robot->Id;
        }
    }
    return 0;
    */
    return Persistance::UpdateRobot(robot);    
}

int SalesSystemService::Service::DeleteRobot(int robotId)
{   /*
    for (int i = 0; i < RobotsDB->Count; i++) {
        if (RobotsDB[i]->Id == robotId) {
            RobotsDB->RemoveAt(i);
            return robotId;
        }
    }
    return 0;
    */
    return Persistance::DeleteRobot(robotId);
}

List<RobotWaiter^>^ SalesSystemService::Service::QueryAllRobots()
{
    //return RobotsDB;
    return Persistance::QueryAllRobots();
}

RobotWaiter^ SalesSystemService::Service::QueryRobotById(int robotId)
{   /*
    for (int i = 0; i < RobotsDB->Count; i++) {
        if (RobotsDB[i]->Id == robotId) {
            return RobotsDB[i];
        }
    }
    return nullptr;
    */
    return Persistance::QueryRobotById(robotId);
}

List<String^>^ SalesSystemService::Service::QueryAllBrands()
{
    return Persistance::QueryAllBrands();
}

List<Brand^>^ SalesSystemService::Service::QueryAllBrandObjects()
{
    return Persistance::QueryAllBrandObjects();
}

Brand^ SalesSystemService::Service::QueryBrandById(int brandId)
{
    return Persistance::QueryBrandById(brandId);
}
