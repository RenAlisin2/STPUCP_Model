/**
 * Project Restaurant Sales Systen
 * @author Johan Baldeón
 */
#pragma once
#include "User.h"

#ifndef _CHEF_H
#define _CHEF_H
using namespace System;

namespace SalesSystemModel {
    public ref class Chef : public User {
    public:
        property String^ Specialty;
        Chef() {}
        Chef(int id, String^ username, String^ password, String^ name, String^ lastName,
            String^ status, String^ specialty) :
            User(id, username, password, name, lastName, status) {
            Specialty = specialty;
        }
    };
}

#endif //_CHEF_H