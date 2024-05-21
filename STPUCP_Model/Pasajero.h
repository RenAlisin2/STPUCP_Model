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
        property int ViajesId;
        property String^ MotivoBan;
       
        Pasajero() {}
        Pasajero(int id, String^ apellidoPaterno, String^ apellidoMaterno, int codigoPUCP, int numeroTelefono, String^ correo, String^ contrase�a, String^ nombre, int tiempoPenalizacion, int cantServiciosTomados , bool listaNegra, int ViajesId, String^ motivoBan) :
            Usuario(id, apellidoPaterno, apellidoMaterno, codigoPUCP, numeroTelefono, correo, contrase�a, nombre) {
            TiempoPenalizacion = tiempoPenalizacion;
            CantServiciosTomados = cantServiciosTomados;
            ListaNegra = listaNegra;
            MotivoBan = motivoBan;
        }

        void ElegirVehiculo();

        void Cancelar();

        void SeleccionarDistrito();

        void VerServicios();

        void VerMetricas();
    };
}

#endif //_PASAJERO_H