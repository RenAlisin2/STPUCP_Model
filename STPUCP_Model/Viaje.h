/*   * Project Sistema STPUCP
*  */


#pragma once 
#ifndef _VIAJE_H
#define _VIAJE_H
using namespace System;

namespace STPUCP_Model {
    public ref class Viaje {
    private:

    public:
        property int Id;
        property int HoraSalida;
        property String^ FechaViaje;
        property String^ DescripcionViaje;
        property String^ UltimoParadero;
        property double PrecioViaje;
        property int ConductorId;


    };
}

#endif //_VIAJE_H