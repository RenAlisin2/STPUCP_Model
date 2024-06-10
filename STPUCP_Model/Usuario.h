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
            property String^ Contraseña;
            property String^ Nombre;
            property String^ Rol;
            
            //Añadimos DNI para que verifique el brevete con este
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
            void Verificarcontraseña();

            Usuario();
            Usuario(int id, String^ apellidoPaterno, String^ apellidoMaterno, int codigoPUCP, int numeroTelefono, String^ correo, String^ contraseña, String^ nombre, String^ rol, int dni);
    };
}

#endif //_USUARIO_H