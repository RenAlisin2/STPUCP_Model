/*   * Project Sistema STPUCP
*  */
#pragma once
#ifndef _ORDEN_H
#define _ORDEN_H

using namespace System;
#include "Pasajero.h"
namespace STPUCP_Model {
    [Serializable]
        public ref class Orden {
        public:
            // Id propia que enumera los numeros de orden , pero asimismo tiene un ID que lo relaciona con la persona
            property int Id;
            property String^ Distrito;
            property int CalificacionEstrellas;
            property double Precio;
            property String^ Fecha;
            property int Id_viaje;
            property int PasajeroId;
            property int OrdenTerminada;
            property int OrdenPagada;
            property int  Presente;
    };
}

#endif //_ORDEN_H

