#include "pch.h"
#include "STPUCP_SERVICE.h"

int STPUCP_SERVICE::Service::AddUser(Usuario^)
{
	return 0;
}

int STPUCP_SERVICE::Service::UpdateUser(Usuario^)
{
	return 0;
}



Usuario^ STPUCP_SERVICE::Service::(int Id)
{
	throw gcnew System::NotImplementedException();
	// TODO: Insertar una instrucción "return" aquí
}
