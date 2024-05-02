#pragma once
//
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

	};
}
