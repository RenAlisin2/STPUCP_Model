/**
 * Project Restaurant Sales Systen
 * @author Johan Baldeón
 */
#pragma once

#ifndef _SALE_H
#define _SALE_H

using namespace System;

namespace SalesSystemModel {
    public ref class Sale {
    public:
        property int Id;
        property double Tax;
        property double TotalAmounWithoutTax;
        property double TotalAmountWithTax;
    };
}

#endif //_SALE_H