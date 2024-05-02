/*   * Project Sistema STPUCP
*  */

#pragma once
//#include "Pasajero.h"

#ifndef _PROMOCION_H
#define _PROMOCION_H
using namespace System;

namespace STPUCP_Model {
    public ref class Promocion {
    public:
        property int Id;
        property int Porcentaje;
        property String^ NombrePromo;
    };
}

#endif //_PROMOCION_H