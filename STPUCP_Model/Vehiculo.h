/*   * Project Sistema STPUCP
*  */

#include "Conductor.h"

#pragma once 
#ifndef _VEHICULO_H
#define _VEHICULO_H
using namespace System;

namespace STPUCP_Model {
    public ref class Vehiculo {
    public:
        property int CantAsientos;
        property int AsientosOcupados;
       
    };
}

#endif //_VEHICULO_H