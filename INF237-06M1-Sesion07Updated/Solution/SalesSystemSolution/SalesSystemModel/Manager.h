/**
 * Project Restaurant Sales Systen
 * @author Johan Baldeón
 */
#pragma once
#include "User.h"

#ifndef _MANAGER_H
#define _MANAGER_H

using namespace System;

namespace SalesSystemModel {
    public ref class Manager : public User {
    public:
        property double^ Quota;
        Manager() {}
        Manager(int id, String^ username, String^ password, String^ name, String^ lastName,
            String^ status, double quota) :
            User(id, username, password, name, lastName, status) {
            Quota = quota;
        }
    };
}

#endif //_MANAGER_H