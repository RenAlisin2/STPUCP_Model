/**
 * Project Restaurant Sales Systen
 * @author Johan Baldeón
 */
#pragma once

#ifndef _DISHINGREDIENT_H
#define _DISHINGREDIENT_H

using namespace System;

namespace SalesSystemModel {
    public ref class DishIngredient {
    public:
        property double Quantity;
        property String^ Unity;
    };
}

#endif //_DISHINGREDIENT_H