#pragma once

using namespace System;
using namespace STPUCP_Model;
using namespace System::Collections::Generic;

namespace STPUCPAdminController {  
	public ref class controller
	{
	private:

		static List<Usuario^>^ UserlistDB = gcnew List<Usuario^>();
		static List<Viaje^>^ JourneyListDB = gcnew List<Viaje^>();
		static List<Promocion^>^ PromotionListDB = gcnew List<Promocion^>();
		static List<Viaje^>^ ViajeDB = gcnew List<Viaje^>();
		static List<Orden^>^ OrdenListDB = gcnew List<Orden^>();
		static List<Pasajero^>^ BL_PasajeroListDB = gcnew List<Pasajero^>();
		static List<Conductor^>^ BL_ConductorListDB = gcnew List<Conductor^>();

	public:

		static int AddUser(Usuario^ Usuario);
		static void UpdateUser(Usuario^ Usuario);
		static void DeleteUser(int UsuarioID);
		static Usuario^ QueryUsersById(int UsuarioId);
		static List<Usuario^>^ QueryAllUsers();

		static int AddJourney(Viaje^ Viaje);
		static void UpdateJourney(Viaje^ Viaje);
		static void DeleteJourney(int ViajeID);
		static Viaje^ QueryJourneysById(int ViajeID);
		static List<Viaje^>^ QueryAllJourneys();

		static int AddPromotion(Promocion^ Promocion);
		static void UpdatePromotion(Promocion^ Promocion);
		static void DeletePromotion(int PromocionID);
		static Promocion^ QueryPromotionsById(int PromocionID);
		static List<Promocion^>^ QueryAllPromotions();

		static int AddOrder(Orden^ orden);
		static void UpdateOrder(Orden^ orden);
		static void DeleteOrder(int ordenID);
		static Orden^ QueryOrderById(int ordenID);
		static List<Orden^>^ QueryAllOrders();

		static int AddBL_Pasajero(Pasajero^ BL_Pasajero);
		static void UpdateBL_Pasajero(Pasajero^ BL_Pasajero);
		static void DeleteBL_Pasajero(int BL_PasajeroID);
		static Pasajero^ QueryBL_PasajeroById(int BL_PasajeroID);
		static List<Pasajero^>^ QueryAllBL_Pasajeros();

		static int AddBL_Conductor(Conductor^ BL_Conductor);
		static void UpdateBL_Conductor(Conductor^ BL_Conductor);
		static void DeleteBL_Conductor(int BL_ConductorID);
		static Conductor^ QueryBL_ConductorById(int BL_ConductorID);
		static List<Conductor^>^ QueryAllBL_Conductores();
		
		//CHOFER
		static int AddViaje(Viaje^);
		static void EliminarViaje(int viajeid);
		static void ModificarViaje(Viaje^);
		static List<Viaje^>^ consultarViajes();
		static Viaje^ ConsultarviajeporID(int viajeid);
		
	};
}
