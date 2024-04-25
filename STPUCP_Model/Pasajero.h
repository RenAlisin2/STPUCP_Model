/*   * Project Sistema STPUCP
*  */

#pragma once
#ifndef _PASAJERO_H
#define _PASAJERO_H

#include "Usuario.h"
using namespace System;

namespace STPUCP_Model {
    public ref  class Pasajero : public Usuario {
    public:
        property int CantServiciosTomados;
        property int TiempoPenalizacion;
        property bool ListaNegra;

        Pasajero() {}
        Pasajero(int id, String^ apellidoPaterno, String^ apellidoMaterno, int codigoPUCP, int numeroTelefono, String^ correo, String^ contraseña, String^ nombre, int tiempoPenalizacion, int cantServiciosTomados , bool listaNegra) :
            Usuario(id, apellidoPaterno, apellidoMaterno, codigoPUCP, numeroTelefono, correo, contraseña, nombre) {
            TiempoPenalizacion = tiempoPenalizacion;
            CantServiciosTomados = cantServiciosTomados;
            ListaNegra = listaNegra;
        }

        void ElegirVehiculo();

        void Cancelar();

        void SeleccionarDistrito();

        void VerServicios();

        void VerMetricas();
    };
}

#endif //_PASAJERO_H