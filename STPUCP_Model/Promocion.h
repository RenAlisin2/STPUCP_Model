/*   * Project Sistema STPUCP
*  */

#pragma once
//#include "Pasajero.h"

#ifndef _PROMOCI�N_H
#define _PROMOCI�N_H
using namespace System;

namespace STPUCP_Model {
    public ref class Promoci�n {
    public:
        property int Id;
        property double Porcentaje;
        property String^ NombrePromo;
    };
}

#endif //_PROMOCI�N_H