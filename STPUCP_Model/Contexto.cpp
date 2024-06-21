/**
 * Project Sistema STPUCP
 * @author Kevin Tumbalobos
 */

#include "pch.h"
#include "Contexto.h"

 /**
  * Orden implementation
  */



int STPUCP_Model::Contexto::ObtenerIdUsuario()
{
    return this->IdUsuario;
}

int STPUCP_Model::Contexto::ObtenerIdViaje()
{
    return this->IdViaje;
}

int STPUCP_Model::Contexto::ObtenerIdOrden()
{
    return this->IdOrden;
}

void STPUCP_Model::Contexto::GuardarUsuario(int IdUsuario)
{
    this->IdUsuario = IdUsuario;
}

void STPUCP_Model::Contexto::GuardarViaje(int IdViaje)
{
    this->IdViaje = IdViaje;
}

void STPUCP_Model::Contexto::GuardarOrden(int IdOrden)
{
    this->IdOrden = IdOrden;
}
