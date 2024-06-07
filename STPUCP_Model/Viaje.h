/*   * Project Sistema STPUCP
*  */


#pragma once 
#include "Conductor.h"
#ifndef _VIAJE_H
#define _VIAJE_H
using namespace System;

namespace STPUCP_Model {
    [Serializable]
    public ref class Viaje{
    private:

    public:
        property int Id;
        property int HoraSalida;
        property String^ FechaViaje;
        property String^ Lugar;
        property String^ UltimoParadero;
        property double PrecioViaje;
        property String^ Distrito;
        //property int ConductorId;
        //property List<String^> viajes;

    };
}

#endif //_VIAJE_H