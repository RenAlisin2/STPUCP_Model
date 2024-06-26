/*   * Project Sistema STPUCP
*  */

#pragma once

#ifndef _ADMINISTRADOR_H
#define _ADMINISTRADOR_H

#include "Usuario.h"
using namespace System;

namespace STPUCP_Model {
    [Serializable]
    public ref class Administrador : public Usuario {
    public:
        property int CantCuentasModificadas;
        property int CantServiciosTransporteModificados;
        //void VerMetricas();

        void ModificarUsuario();

        void ModificarTransporteServicio();

        void GenerarPromo();

        Administrador() {}
        Administrador(int id, String^ apellidoPaterno, String^ apellidoMaterno, int codigoPUCP, int numeroTelefono, String^ correo, String^ contraseņa, String^ nombre, String^ rol, int dni, int cantServiciosTransporteModificados, int cantCuentasModificadas) :
        Usuario(id, apellidoPaterno, apellidoMaterno, codigoPUCP, numeroTelefono, correo, contraseņa, nombre, rol, dni) {
            CantCuentasModificadas = cantCuentasModificadas;
            CantServiciosTransporteModificados = cantServiciosTransporteModificados;
        }
    };
}

#endif //_ADMINISTRADOR_H