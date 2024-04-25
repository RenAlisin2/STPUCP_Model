/*   * Project Sistema STPUCP
*  */

#pragma once

#ifndef _USUARIO_H
#define _USUARIO_H
using namespace System;

namespace STPUCP_Model {
    public ref class Usuario {
    public:
        property int Id;
        property String^ ApellidoPaterno;
        property String^ ApellidoMaterno;
        property int CodigoPUCP;
        property int NumeroTelefono;
        property String^ Correo;
        property String^ Contraseña;
        property String^ Nombre;
        void Verificarcontraseña();

        Usuario();
        Usuario(int id, String^ apellidoPaterno, String^ apellidoMaterno, int codigoPUCP, int numeroTelefono, String^ correo, String^ contraseña, String^ nombre);


    };
}

#endif //_USUARIO_H