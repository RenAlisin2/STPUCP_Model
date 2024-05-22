/**
 * Project Restaurant Sales Systen
 * @author Johan Baldeón
 */
#pragma once

#ifndef _ORDERDISH_H
#define _ORDERDISH_H

using namespace System;

namespace SalesSystemModel {
    public ref class OrderDish {
    public:
        property int Id;
        property int Quantity;
        property double SubTotal;
    };
}

#endif //_ORDERDISH_H