/**
 * Project Sistema STPUCP
 * @author Kevin Tumbalobos
 */

#include "pch.h"
#include "Usuario.h"

 /**
  * Usuario implementation
  */

void STPUCP_Model::Usuario::Verificarcontraseņa()
{

}

STPUCP_Model::Usuario::Usuario() {
}

STPUCP_Model::Usuario::Usuario(int id, String^ apellidoPaterno, String^ apellidoMaterno, int codigoPUCP, int numeroTelefono, String^ correo, String^ contraseņa, String^ nombre, String^ rol, int dni)
{
	this->Id = id;
	this->ApellidoMaterno = apellidoMaterno;
	this->ApellidoPaterno = apellidoPaterno;
	this->CodigoPUCP = codigoPUCP;
	this->NumeroTelefono = numeroTelefono;
	this->Correo = correo;
	this->Contraseņa = contraseņa;
	this->Nombre = nombre;
	this->Rol = rol;
	this->DNI = dni;
}

