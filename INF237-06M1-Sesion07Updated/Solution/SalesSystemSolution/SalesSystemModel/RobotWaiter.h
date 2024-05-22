/**
 * Project Restaurant Sales Systen
 * @author Johan Baldeón
 */
#include "Brand.h"
#pragma once

#ifndef _ROBOTWAITER_H
#define _ROBOTWAITER_H


using namespace System;

namespace SalesSystemModel {
    [Serializable]
    public ref class RobotWaiter {
    public:
        property int Id;
        property String^ Name;
        //property String^ Brand;
        property Brand^ Brand;
        property String^ Model;
        property double LoadCapacity;
        property double Speed;
        property array<Byte>^ Photo;

        void Move();
    };
}
#endif //_ROBOTWAITER_H