/*   * Project Sistema STPUCP
*  */

#pragma once
#include "Orden.h"

#ifndef _BOLETA_H
#define _BOLETA_H

using namespace System;

namespace STPUCP_Model {
    public ref class Boleta {
    public:
        property int id;
        property double Precio;
    };
}

#endif //_BOLETA_H