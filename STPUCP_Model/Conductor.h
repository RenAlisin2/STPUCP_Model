/*   * Project Sistema STPUCP
*  */

#pragma once
using namespace System;

#ifndef _CONDUCTOR_H
#define _CONDUCTOR_H

#include "Pasajero.h"

namespace STPUCP_Model {
    [Serializable]
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
        property String^ MotivoBan;
        property bool ListaNegra;
        Conductor() {}
        Conductor(int id, String^ apellidoPaterno, String^ apellidoMaterno, int codigoPUCP, int numeroTelefono, String^ correo, String^ contrase�a, String^ nombre, String^ rol,
            String^ modeloCarro, String^ placaCarro, String^ colorCarro, int cantAsientos, array<Byte>^ fotoConductor, 
            array<Byte>^ fotoCarro, int dni, bool breveteConfirmacion, String^ huellaDactilar, double calificacion, 
            int cantServiciosRealizados, int tiempoPenalizacion, String^ motivoBan, bool listaNegra) :
            Usuario(id, apellidoPaterno, apellidoMaterno, codigoPUCP, numeroTelefono, correo, contrase�a, nombre, rol) {
            this->ModeloCarro = modeloCarro;
            this->PlacaCarro = placaCarro;
            this->CantAsientos = cantAsientos;
            this->FotoConductor = fotoConductor;
            this->FotoCarro = fotoCarro;
            this->DNI = dni;
            this->BreveteConfirmacion = breveteConfirmacion;
            this->HuellaDactilar = huellaDactilar;
            this->Calificacion = calificacion;
            this->CantServiciosRealizados = cantServiciosRealizados;
            this->TiempoPenalizacion = tiempoPenalizacion;
            this->MotivoBan = motivoBan;
            this->ListaNegra = listaNegra;

        }

        void ValidarLicencia();

        void RegistroBiometrico();

        void Aunteticaci�nBiometrica();

        void VerMetricas();

        void AsientosDisponibles();

        void RegistroConductor();

        void DefinirDistrito();

        void CancelarPasajero();

    };
}
#endif //_CONDUCTOR_H