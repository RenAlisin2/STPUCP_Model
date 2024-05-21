/*   * Project Sistema STPUCP
*  */
#pragma once
#ifndef _ORDEN_H
#define _ORDEN_H

using namespace System;
#include "Pasajero.h"
namespace STPUCP_Model {
    public ref class Orden {
    public:
        property int Id;
        property String^ Distrito;
        property double CalificacionEstrellas;
        property double Precio;
        property String^ Fecha;
    };
}

#endif //_ORDEN_H

