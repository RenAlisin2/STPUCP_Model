/*   * Project Sistema STPUCP
*  */


#pragma once 
#include "Conductor.h"
#ifndef _VIAJE_H
#define _VIAJE_H
using namespace System;

namespace STPUCP_Model {
    public ref class Viaje : public Conductor {
    private:

    public:
        property int Id_Viaje;
        property int HoraSalida;
        property String^ FechaViaje;
        property String^ DescripcionViaje;
        property String^ UltimoParadero;
        property double PrecioViaje;
        //property int ConductorId;


    };
}

#endif //_VIAJE_H