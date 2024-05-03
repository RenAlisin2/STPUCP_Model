#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace STPUCP_Model;
namespace STPUCPPersistance {
	public ref class Persistance
	{
	private:
		//Miembro estático o variable de clase
		static List<Usuario^>^ UsuarioListDB = gcnew List<Usuario^>();
		static List<Viaje^>^ ViajesListDB = gcnew List<Viaje^>();
		static List<Promocion^>^ PromocionesListDB = gcnew List<Promocion^>();

	public:
		static String^ USUARIO_FILE_NAME = "UsuariosDB.txt";

		static void PersistTextFile(String^ fileName, Object^ persistObject);
		static void PersistXMLFile(String^ fileName, Object^ persistObject);
		static void PersistBinaryFile(String^ fileName, Object^ persistObject);

		static Object^ LoadTextFile(String^ fileName);
		static Object^ LoadXMLFile(String^ fileName);
		static Object^ LoadBinaryFile(String^ fileName);

		static int AddUser(Usuario^ Usuario);
		static void UpdateUser(Usuario^ Usuario);
		static void DeleteUser(int UsuarioID);
		static Usuario^ QueryUsersById(int UsuarioID);
		static List<Usuario^>^ QueryAllUsers();

		static String^ VIAJE_FILE_NAME = "ViajesDB.txt";

		static int AddJourney(Viaje^ Viaje);
		static void UpdateJourney(Viaje^ Viaje);
		static void DeleteJourney(int ViajeID);
		static Viaje^ QueryJourneysById(int ViajeID);
		static List<Viaje^>^ QueryAllJourneys();

		static String^ PROMOCION_FILE_NAME = "PromocionesDB.txt";

		static int AddPromotion(Promocion^ Promocion);
		static void UpdatePromotion(Promocion^ Promocion);
		static void DeletePromotion(int PromocionID);
		static Promocion^ QueryPromotionsById(int PromocionID);
		static List<Promocion^>^ QueryAllPromotions();
		/*
		static String^ VIAJECONDUCTOR_FILE_NAME = "ViajeConductorDB.txt";

		static int AddViaje(Promocion^ Promocion);
		static void ModificarViaje(Promocion^ Promocion);
		static void EliminarViaje(int PromocionID);
		static Promocion^ ConsultarviajeporID(int PromocionID);
		static List<Promocion^>^ consultarViajes();
		*/

	};
}
