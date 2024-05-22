/**
 * Project Restaurant Sales Systen
 * @author Johan Baldeón
 */
#pragma once
#include "User.h"

#ifndef _CUSTOMER_H
#define _CUSTOMER_H

using namespace System;

namespace SalesSystemModel {
    public ref class Customer : public User {
    public:
        property int LoyaltyPoints;
        Customer() {}
        Customer(int id, String^ username, String^ password, String^ name, String^ lastName,
            String^ status, int loyaltyPoints) :
            User(id, username, password, name, lastName, status) {
            LoyaltyPoints = loyaltyPoints;
        }
    };
}
#endif //_CUSTOMER_H