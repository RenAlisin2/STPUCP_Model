/**
 * Project Restaurant Sales Systen
 * @author Johan Baldeón
 */
#pragma once

#ifndef _DISH_H
#define _DISH_H

using namespace System;

namespace SalesSystemModel {
    public ref class Dish {
    public:
        property int Id;
        property bool GlutenFree;
        property String^ Name;
        property String^ Description;
        property double Price;
        property int Stock;
        property array<Byte>^ Photo;
    };
}

#endif //_DISH_H