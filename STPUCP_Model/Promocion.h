/*   * Project Sistema STPUCP
*  */

#pragma once
//#include "Pasajero.h"

#ifndef _PROMOCIÓN_H
#define _PROMOCIÓN_H
using namespace System;

namespace STPUCP_Model {
    public ref class Promoción {
    public:
        property int Id;
        property double Porcentaje;
        property String^ NombrePromo;
    };
}

#endif //_PROMOCIÓN_H