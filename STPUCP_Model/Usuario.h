#pragma once

#ifndef _USUARIO_H
#define _USUARIO_H
using namespace System;

namespace STPUCP_Model {
    [Serializable]
        public ref class Usuario {
        public:
            property String^ ApellidoPaterno;
            property String^ ApellidoMaterno;
            property int CodigoPUCP;
            property int NumeroTelefono;
            property String^ Correo;
            property String^ Contraseņa;
            property String^ Nombre;
            property String^ Rol;
            property int IdUltimoViaje;
            property int IdUltimaOrden;
            property int Huella;

            //Aņadimos DNI para que verifique el brevete con este
            property int DNI;
            //Hacemos que el codigo PUCP sea el ID 
            property int Id {
                int get() {
                    return CodigoPUCP;
                }
                void set(int value) {
                    CodigoPUCP = value;
                }
            }
            void Verificarcontraseņa();

            Usuario();
            Usuario(int id, String^ apellidoPaterno, String^ apellidoMaterno, int codigoPUCP, int numeroTelefono, String^ correo, String^ contraseņa, String^ nombre, String^ rol, int dni);
    };
}

#endif //_USUARIO_H