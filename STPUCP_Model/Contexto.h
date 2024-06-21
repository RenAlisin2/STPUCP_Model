#pragma once

using namespace System;

#ifndef _CONTEXTO_H
#define _CONTEXTO_H

#include "Usuario.h"

namespace STPUCP_Model {


    [Serializable]

    public ref class Contexto {
    public:
        property int IdUsuario;
        property int IdViaje;
        property int IdOrden;

        // Instancia única 
        static Contexto^ instancia = nullptr;
        // Constructor privado para evitar instanciación directa
        Contexto() {}
        static Contexto^ ObtenerInstancia() {
            if (instancia == nullptr) { 
                instancia = gcnew Contexto(); 
            }
            return instancia; 
        }

        int ObtenerIdUsuario();
        int ObtenerIdViaje();
        int ObtenerIdOrden();
        void GuardarUsuario(int IdUsuario);
        void GuardarViaje(int IdViaje);
        void GuardarOrden(int IdOrden);


       

       
        

    };


   
    
}
#endif