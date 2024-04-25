/*   * Project Sistema STPUCP
*  */

#pragma once
using namespace System;

#ifndef _CONDUCTOR_H
#define _CONDUCTOR_H

#include "Pasajero.h"

namespace STPUCP_Model {
    public ref class Conductor : public Usuario {
    public:
        property String^ ModeloCarro;
        property String^ PlacaCarro;
        property String^ ColorCarro;
        property int CantAsientos;
        property array<Byte>^ FotoConductor;
        property array<Byte>^ FotoCarro;
        property int DNI;
        property bool BreveteConfirmacion;
        property String^ HuellaDactilar;
        property double Calificacion;
        property int CantServiciosRealizados;
        property int TiempoPenalizacion;
        property bool ListaNegra;


        void ValidarLicencia();

        void RegistroBiometrico();

        void AunteticaciónBiometrica();

        void VerMetricas();

        void AsientosDisponibles();

        void RegistroConductor();

        void DefinirDistrito();

        void CancelarPasajero();

    };
}
#endif //_CONDUCTOR_H