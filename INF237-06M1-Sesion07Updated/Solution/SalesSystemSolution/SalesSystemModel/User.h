/**
 * Project Restaurant Sales Systen
 * @author Johan Baldeón
 */
#pragma once

#ifndef _USER_H
#define _USER_H

using namespace System;

namespace SalesSystemModel {
    public ref class User {
    public:
        property int Id;
        property String^ Username;
        property String^ Password;
        property String^ Name;
        property String^ LastName;
        property String^ Status;
        User();
        User(int id, String^ username, String^ password, String^ name, 
             String^ lastName, String^ status);
    };

}
#endif //_USER_H