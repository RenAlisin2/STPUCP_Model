#pragma once
#include "../STPUCP_Model/Usuario.h"

using namespace System;
using namespace STPUCP_Model;
using namespace System::Collections::Generic;

namespace STPUCP_SERVICE {
	public ref class Service
	{
	private:
		
		static List<Usuario^>^ User = gcnew List<Usuario^>();
	public:
		static int AddUser(Usuario^);
		static int UpdateUser(Usuario^);
		
		static List<Usuario^>^ GeneralUsers();
		static Usuario^ IdUsers(int Id);
	};
}
