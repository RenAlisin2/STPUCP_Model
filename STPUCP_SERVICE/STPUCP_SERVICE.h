#pragma once



using namespace System;
using namespace STPUCP_Model;

using namespace System::Collections::Generic;


namespace STPUCP_SERVICE {
	public ref class Service
	{
	private:
		
		static List<Viaje^>^ ViajeDB = gcnew List<Viaje^>();
	public:

		
		
		// METODOS CRUD CONDUCTOR
		

		static int AddViaje(Viaje^);
		static int EliminarViaje(int viajeid);
		static int ModificarViaje(Viaje^);
		static List<Viaje^>^ consultarViajes();
		static Viaje^ ConsultarviajeporID(int viajeId);
	};
}
