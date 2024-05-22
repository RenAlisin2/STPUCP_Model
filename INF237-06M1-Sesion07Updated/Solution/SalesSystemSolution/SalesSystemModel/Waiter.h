/**
 * Project Restaurant Sales Systen
 * @author Johan Baldeón
 */
#ifndef _WAITER_H
#define _WAITER_H

#include "User.h"

using namespace System;

namespace SalesSystemModel {
    public ref class Waiter : public User {
    public:
        property array<int>^ Tables;
        property double Tips;
        Waiter() {}
        Waiter(int id, String^ username, String^ password, String^ name, String^ lastName,
            String^ status, array<int>^ tables, double tips) :
            User(id, username, password, name, lastName, status) {
            Tables = tables;
            Tips = tips;
        }
    };
}
#endif //_WAITER_H