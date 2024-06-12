/*   * Project Sistema STPUCP
*  */

#pragma once
#include "Pasajero.h"

#ifndef _PROMOCION_H
#define _PROMOCION_H
using namespace System;
using namespace System::Collections::Generic;

namespace STPUCP_Model {
    [Serializable]
    public ref class Promocion{
    public:
        // Aparte de las Ids , se crea una id individual para verificar el numero de promos , pero estas estan ajustadas al ID general del usuario
        property int Id;
        property int Porcentaje;
        property String^ NombrePromo;
        property int IdUsuario;
        property List <String^>^ Promociones;
       
    };
}

#endif //_PROMOCION_H