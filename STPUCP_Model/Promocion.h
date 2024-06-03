/*   * Project Sistema STPUCP
*  */

#pragma once
#include "Pasajero.h"

#ifndef _PROMOCION_H
#define _PROMOCION_H
using namespace System;

namespace STPUCP_Model {
    public ref class Promocion : public Usuario {
    public:
        // Aparte de las Ids , se crea una id individual para verificar el numero de promos , pero estas estan ajustadas al ID general del usuario
        property int Id_promo;
        property int Porcentaje;
        property String^ NombrePromo;
    };
}

#endif //_PROMOCION_H