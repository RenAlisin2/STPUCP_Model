#include "pch.h"

#include "STPUCP_Persistance.h"
using namespace System::IO;

void STPUCPPersistance::Persistance::PersistTextFile(String^ fileName, Object^ persistObject)
{
    FileStream^ file;
    StreamWriter^ writer;
    file = gcnew FileStream(fileName, FileMode::Create, FileAccess::Write);
    writer = gcnew StreamWriter(file);
    if (persistObject->GetType() == List<Usuario^>::typeid) {
        List<Usuario^>^ usuario = (List<Usuario^>^) persistObject;
        for (int i = 0; i < usuario->Count; i++) {
            Usuario^ r = usuario[i];
            writer->WriteLine(r->Id + "," + r->Nombre + "," + r->ApellidoPaterno + "," + r->ApellidoMaterno + "," + r->CodigoPUCP);
        }
    }
    if (writer != nullptr) writer->Close();
    if (file != nullptr) file->Close();
}

void STPUCPPersistance::Persistance::PersistXMLFile(String^ fileName, Object^ persistObject)
{
    throw gcnew System::NotImplementedException();
}

void STPUCPPersistance::Persistance::PersistBinaryFile(String^ fileName, Object^ persistObject)
{
    throw gcnew System::NotImplementedException();
}

Object^ STPUCPPersistance::Persistance::LoadTextFile(String^ fileName)
{
    FileStream^ file;
    StreamReader^ reader;
    Object^ result;
    if (File::Exists(fileName)) {
        file = gcnew FileStream(fileName, FileMode::Open, FileAccess::Read);
        reader = gcnew StreamReader(file);
        if (fileName->Equals(USUARIO_FILE_NAME)) {
            result = gcnew List<Usuario^>();
            while (true) {
                String^ line = reader->ReadLine();
                if (line == nullptr) break;
                array<String^>^ record = line->Split(',');
                Usuario^ usuario = gcnew Usuario();
                usuario->Id = Convert::ToInt32(record[0]);
                usuario->Nombre = record[1];
                usuario->ApellidoPaterno = record[2];
                usuario->ApellidoMaterno = record[3];
                usuario->CodigoPUCP = Convert::ToInt32(record[4]);
                ((List<Usuario^>^)result)->Add(usuario);
            }
        }
        if (reader != nullptr) reader->Close();
        if (file != nullptr) file->Close();
    }
    return result;
}

Object^ STPUCPPersistance::Persistance::LoadXMLFile(String^ fileName)
{
    throw gcnew System::NotImplementedException();
    // TODO: Insertar una instrucción "return" aquí
}

Object^ STPUCPPersistance::Persistance::LoadBinaryFile(String^ fileName)
{
    throw gcnew System::NotImplementedException();
    // TODO: Insertar una instrucción "return" aquí
}

int STPUCPPersistance::Persistance::AddUser(Usuario^ Usuario)
{
    UsuarioListDB->Add(Usuario);
    PersistTextFile(USUARIO_FILE_NAME, UsuarioListDB);
    return 1;
}

void STPUCPPersistance::Persistance::UpdateUser(Usuario^ Usuario)
{
    for (int i = 0; i < UsuarioListDB->Count; i++) {
        if (UsuarioListDB[i]->Id == Usuario->Id) {
            UsuarioListDB[i] = Usuario;
            PersistTextFile(USUARIO_FILE_NAME, UsuarioListDB);
            return;
        }
    }
}

void STPUCPPersistance::Persistance::DeleteUser(int UsuarioID)
{
    for (int i = 0; i < UsuarioListDB->Count; i++) {
        if (UsuarioListDB[i]->Id == UsuarioID) {
            UsuarioListDB->RemoveAt(i);
            PersistTextFile(USUARIO_FILE_NAME, UsuarioListDB);
            return;
        }
    }
}

Usuario^ STPUCPPersistance::Persistance::QueryUsersById(int UsuarioID)
{
    UsuarioListDB = (List<Usuario^>^) LoadTextFile(USUARIO_FILE_NAME);
    Usuario^ Usuario = nullptr;
    for (int i = 0; i < UsuarioListDB->Count; i++) {
        if (UsuarioListDB[i]->Id == UsuarioID) {
            Usuario = UsuarioListDB[i];
            return Usuario;
        }
    }
    return Usuario;

}

List<Usuario^>^ STPUCPPersistance::Persistance::QueryAllUsers()
{
    UsuarioListDB = (List<Usuario^>^) LoadTextFile(USUARIO_FILE_NAME);
    if (UsuarioListDB == nullptr)
        UsuarioListDB = gcnew List<Usuario^>();
    return UsuarioListDB;
}
