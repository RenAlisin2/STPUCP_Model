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
        public ref class Promocion : public Usuario{
    public:
        
        property int Id;
        property int Porcentaje;
        property String^ NombrePromo;
        property List <String^>^ Promociones;
        property int IdUser;
    };
}

#endif //_PROMOCION_H