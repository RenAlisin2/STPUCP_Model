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
		static List<Orden^>^ OrdenListDB = gcnew List<Orden^>();
		static List<Pasajero^>^ BL_PasajeroListDB = gcnew List<Pasajero^>();
		static List<Conductor^>^ BL_ConductorListDB = gcnew List<Conductor^>();

		static void PersistTextFile(String^ fileName, Object^ persistObject);
		static void PersistBinaryFile(String^ fileName, List<Object^>^ persistObject);

		static Object^ LoadTextFile(String^ fileName);
		static List<Object^>^ LoadBinaryFile(String^ fileName);


	public:
		static String^ BIN_USUARIO_FILE_NAME = "UsuariosDB.bin";
		static String^ TXT_USUARIO_FILE_NAME = "UsuariosDB.txt";
		static int AddUser(Usuario^ Usuario);
		static void UpdateUser(Usuario^ Usuario);
		static void DeleteUser(int UsuarioID);
		static Usuario^ QueryUsersById(int UsuarioID);
		static List<Usuario^>^ QueryAllUsers();

		//Métodos para viajes
		static String^ VIAJE_FILE_NAME = "ViajesDB.txt";
		static int AddJourney(Viaje^ Viaje);
		static void UpdateJourney(Viaje^ Viaje);
		static void DeleteJourney(int ViajeID);
		static Viaje^ QueryJourneysById(int ViajeID);
		static List<Viaje^>^ QueryAllJourneys();

		//Métodos para promociones
		static String^ PROMOCION_FILE_NAME = "PromocionesDB.txt";
		static int AddPromotion(Promocion^ Promocion);
		static void UpdatePromotion(Promocion^ Promocion);
		static void DeletePromotion(int PromocionID);
		static Promocion^ QueryPromotionsById(int PromocionID);
		static List<Promocion^>^ QueryAllPromotions();

		//Métodos para ordenes
		static String^ ORDER_FILE_NAME = "OrdenesDB.txt";
		static int AddOrder(Orden^ orden);
		static void UpdateOrder(Orden^ orden);
		static void DeleteOrder(int ordenID);
		static Orden^ QueryOrderById(int ordenID);
		static List<Orden^>^ QueryAllOrders();

		//Métodos para pasajeros
		static String^ BL_PASAJEROS_FILE_NAME = "BL_PasajerosDB.txt";
		static int AddBL_Pasajero(Pasajero^ BL_Pasajero);
		static void UpdateBL_Pasajero(Pasajero^ BL_Pasajero);
		static void DeleteBL_Pasajero(int BL_PasajeroID);
		static Pasajero^ QueryBL_PasajeroById(int BL_PasajeroID);
		static List<Pasajero^>^ QueryAllBL_Pasajeros();

		//Métodos para conductores
		static String^ BL_CONDUCTORES_FILE_NAME = "BL_ConductoresDB.txt";
		static int AddBL_Conductor(Conductor^ BL_Conductor);
		static void UpdateBL_Conductor(Conductor^ BL_Conductor);
		static void DeleteBL_Conductor(int BL_ConductorID);
		static Conductor^ QueryBL_ConductorById(int BL_ConductorID);
		static List<Conductor^>^ QueryAllBL_Conductores();



		static Usuario^ ValidarUsuario(int codigoPUCP, String^ password);

		

	};
}
