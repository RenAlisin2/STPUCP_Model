#pragma once

using namespace System;

namespace STPUCP_Model {
    [Serializable]
    ref class Usuario;

    public ref class Contexto
    {
    public:
        static initonly Contexto^ instancia = gcnew Contexto();
        Usuario^ usuario_registrado;

        Contexto() {}

    public:
        static property Contexto^ Instancia {
            Contexto^ get() {
                return instancia;
            }
        }

        property Usuario^ Usuario_registrado {
            Usuario^ get() { return usuario_registrado; }
            void set(Usuario^ value) { usuario_registrado = value; }
        }
    };
}