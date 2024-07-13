/*   * Project Sistema STPUCP
*  */

#pragma once
#ifndef _PASAJERO_H
#define _PASAJERO_H

#include "Usuario.h"
using namespace System;

namespace STPUCP_Model {
    [Serializable]
    public ref  class Pasajero : public Usuario {
    public:
        property int CantServiciosTomados;
        property int TiempoPenalizacion;
        property bool ListaNegra;
        property int ViajesId;
        property String^ MotivoBan;
        //property int Huella;
       
        Pasajero() {}
        Pasajero(int id, String^ apellidoPaterno, String^ apellidoMaterno, int codigoPUCP, int numeroTelefono, String^ correo, String^ contraseña, String^ nombre, String^ rol, int dni, int tiempoPenalizacion, int cantServiciosTomados , bool listaNegra, int ViajesId, String^ motivoBan, int huella) :
            Usuario(id, apellidoPaterno, apellidoMaterno, codigoPUCP, numeroTelefono, correo, contraseña, nombre, rol, dni) {
            CantServiciosTomados = cantServiciosTomados;
            TiempoPenalizacion = tiempoPenalizacion;
            CantServiciosTomados = cantServiciosTomados;
            ListaNegra = listaNegra;
            MotivoBan = motivoBan;
            //Huella = huella;
        }

        void ElegirVehiculo();

        void Cancelar();

        void SeleccionarDistrito();

        void VerServicios();

        void VerMetricas();
    };
}

#endif //_PASAJERO_H