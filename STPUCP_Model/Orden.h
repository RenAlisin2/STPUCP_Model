/*   * Project Sistema STPUCP
*  */
#pragma once
#ifndef _ORDEN_H
#define _ORDEN_H

using namespace System;
#include "Pasajero.h"
namespace STPUCP_Model {
    [Serializable]
    public ref class Orden{
    public:
        // Id propia que enumera los numeros de orden , pero asimismo tiene un ID que lo relaciona con la persona
        property int Id;
        property String^ Distrito;
        property double CalificacionEstrellas;
        property double Precio;
        property String^ Fecha;
    };
}

#endif //_ORDEN_H

