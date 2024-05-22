/**
 * Project Restaurant Sales Systen
 * @author Johan Baldeón
 */
#pragma once

#ifndef _INGREDIENT_H
#define _INGREDIENT_H

using namespace System;

namespace SalesSystemModel {
    public ref class Ingredient {
    public:
        property int Id;
        property String^ Name;
        property int Calories;
    };
}

#endif //_INGREDIENT_H