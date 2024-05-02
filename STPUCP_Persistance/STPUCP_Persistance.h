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
	};
}
