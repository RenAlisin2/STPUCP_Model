/**
 * Project Restaurant Sales Systen
 * @author Johan Baldeón
 */
#pragma once

#ifndef _ORDER_H
#define _ORDER_H

using namespace System;

namespace SalesSystemModel {
    public ref class Order {
    public:
        property int Id;
        property String^ Date;
        property int TableNumber;
        property double TotalAmount;
    };
}

#endif //_ORDER_H