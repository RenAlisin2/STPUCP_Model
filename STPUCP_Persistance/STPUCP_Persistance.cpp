#include "pch.h"
#include "STPUCP_Persistance.h"

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;
//using namespace STPUCPAdminController;
using namespace System::IO;
using namespace System::Xml::Serialization;
using namespace STPUCP_Model;
using namespace System::Runtime::Serialization::Formatters::Binary;

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
            writer->WriteLine(r->CodigoPUCP + "," + r->Nombre + "," + r->ApellidoPaterno + "," + r->ApellidoMaterno + "," + r->Rol);
        }
    }

    if (persistObject->GetType() == List<Viaje^>::typeid) {
        List<Viaje^>^ viaje = (List<Viaje^>^) persistObject;
        for (int i = 0; i < viaje->Count; i++) {
            Viaje^ v = viaje[i];
            writer->WriteLine(v ->Id + ","  + v->HoraSalida + "," + v->FechaViaje + "," +v -> Lugar +","+ v->UltimoParadero + "," + v->PrecioViaje + "," + v->Distrito + "," + v->ConductorId);
        }
    }
    if (persistObject->GetType() == List<Promocion^>::typeid) {
        List<Promocion^>^ promocion = (List<Promocion^>^) persistObject;
        for (int i = 0; i < promocion->Count; i++) {
            Promocion^ p = promocion[i];
            writer->WriteLine(p->Id + "," + p->Porcentaje + "," + p->NombrePromo+ "," + p->IdUsuario + ",");
        }
    }
    if (persistObject->GetType() == List<Orden^>::typeid) {
        List<Orden^>^ orden = (List<Orden^>^) persistObject;
        for (int i = 0; i < orden->Count; i++) {
            Orden^ o = orden[i];
            writer->WriteLine(o->Id + "," + o->Distrito + "," + o->CalificacionEstrellas + "," + o->Fecha + "," + o->Precio);
        }
    }
    if (persistObject->GetType() == List<Pasajero^>::typeid) {
        List<Pasajero^>^ blacklistPasajeros = (List<Pasajero^>^) persistObject;
        for (int i = 0; i < blacklistPasajeros->Count; i++) {
            Pasajero^ p = blacklistPasajeros[i];
            writer->WriteLine(p->CodigoPUCP + "," + p->Nombre + "," + p->ApellidoPaterno + "," + p->ApellidoMaterno + "," + p->MotivoBan + "," + p->TiempoPenalizacion);
        }
    }

    if (persistObject->GetType() == List<Conductor^>::typeid) {
        List<Conductor^>^ blacklistConductores = (List<Conductor^>^) persistObject;
        for (int i = 0; i < blacklistConductores->Count; i++) {
            Conductor^ c = blacklistConductores[i];
            writer->WriteLine(c->CodigoPUCP + "," + c->Nombre + "," + c->ApellidoPaterno + "," + c->ApellidoMaterno + "," + c->MotivoBan + "," + c->TiempoPenalizacion);
        }
    }


    if (writer != nullptr) writer->Close();
    if (file != nullptr) file->Close();
}


Object^ STPUCPPersistance::Persistance::LoadTextFile(String^ fileName)
{
    FileStream^ file;
    StreamReader^ reader;
    Object^ result;
    if (File::Exists(fileName)) {
        file = gcnew FileStream(fileName, FileMode::Open, FileAccess::Read);
        reader = gcnew StreamReader(file);
        if (fileName->Equals(TXT_USUARIO_FILE_NAME)) {
            result = gcnew List<Usuario^>();
            while (true) {
                String^ line = reader->ReadLine();
                if (line == nullptr) break;
                array<String^>^ record = line->Split(',');
                Usuario^ usuario = gcnew Usuario();
                usuario->CodigoPUCP = Convert::ToInt32(record[0]);
                usuario->Nombre = record[1];
                usuario->ApellidoPaterno = record[2];
                usuario->ApellidoMaterno = record[3];
                usuario->Rol = record[4];
                
                ((List<Usuario^>^)result)->Add(usuario);
            }
        }
        if (fileName->Equals(VIAJE_FILE_NAME)) {
            result = gcnew List<Viaje^>();
            while (true) {
                String^ line = reader->ReadLine();
                if (line == nullptr) break;
                array<String^>^ record = line->Split(',');
                Viaje^ viaje = gcnew Viaje();
                viaje->Id = Convert::ToInt32(record[0]);
                viaje->HoraSalida = Convert::ToInt32(record[1]);
                viaje->FechaViaje = record[2];
                viaje->Lugar = record[3];
                viaje->UltimoParadero = record[4];
                viaje->PrecioViaje = Convert::ToInt32(record[5]);
                viaje->Distrito = record[6];
                viaje->ConductorId = Convert::ToInt32(record[7]);
                ((List<Viaje^>^)result)->Add(viaje);
            }
        }
        if (fileName->Equals(PROMOCION_FILE_NAME)) {
            result = gcnew List<Promocion^>();
            while (true) {
                String^ line = reader->ReadLine();
                if (line == nullptr) break;
                
                array<String^>^ record = line->Split(',');
                Promocion^ promocion = gcnew Promocion();
                promocion->Id = Convert::ToInt32(record[0]);
                promocion->Porcentaje = Convert::ToInt32(record[1]);
                promocion->NombrePromo = record[2];
                promocion->IdUsuario= Convert::ToInt32(record[3]);
                ((List<Promocion^>^)result)->Add(promocion);
               
            }
        }
        if (fileName->Equals(ORDER_FILE_NAME)) {
            result = gcnew List<Orden^>();
            while (true) {
                String^ line = reader->ReadLine();
                if (line == nullptr) break;
                array<String^>^ record = line->Split(',');
                Orden^ orden = gcnew Orden();
                orden->Id = Convert::ToInt32(record[0]);
                orden->Distrito = record[1];
                orden->CalificacionEstrellas = Convert::ToInt32(record[2]);
                orden->Fecha = record[3];
                orden->Precio = Convert::ToDouble(record[4]);
                ((List<Orden^>^)result)->Add(orden);
            }
        }

        if (fileName->Equals(BL_PASAJEROS_FILE_NAME)) {
            List<Pasajero^>^ blacklistPasajeros = gcnew List<Pasajero^>();
            while (true) {
                String^ line = reader->ReadLine();
                if (line == nullptr) break;
                array<String^>^ record = line->Split(',');
                Pasajero^ BLpasajero = gcnew Pasajero();
                BLpasajero->CodigoPUCP = Convert::ToInt32(record[0]);
                BLpasajero->Nombre = record[1];
                BLpasajero->ApellidoPaterno = record[2];
                BLpasajero->ApellidoMaterno = record[3];
                BLpasajero->MotivoBan = record[4];
                BLpasajero->TiempoPenalizacion = Convert::ToInt32(record[5]);
                blacklistPasajeros->Add(BLpasajero);
            }
            result = blacklistPasajeros;
        }

        if (fileName->Equals(BL_CONDUCTORES_FILE_NAME)) {
            List<Conductor^>^ blacklistConductores = gcnew List<Conductor^>();
            while (true) {
                String^ line = reader->ReadLine();
                if (line == nullptr) break;
                array<String^>^ record = line->Split(',');
                Conductor^ BLconductor = gcnew Conductor();
                BLconductor->CodigoPUCP = Convert::ToInt32(record[0]);
                BLconductor->Nombre = record[1];
                BLconductor->ApellidoPaterno = record[2];
                BLconductor->ApellidoMaterno = record[3];
                BLconductor->MotivoBan = record[4];
                BLconductor->TiempoPenalizacion = Convert::ToInt32(record[5]);
                blacklistConductores->Add(BLconductor);
            }
            result = blacklistConductores;
        }


        if (reader != nullptr) reader->Close();
        if (file != nullptr) file->Close();
    }
    return result;
}




void STPUCPPersistance::Persistance::PersistBinaryFile(String^ fileName, List<Object^>^ persistObject)
{
    for each (Object ^ obj in persistObject) {
        Usuario^ usuario = dynamic_cast<Usuario^>(obj);
        if (usuario != nullptr) {
            String^ userFileName = "Usuario_" + usuario->CodigoPUCP + ".bin";
            FileStream^ file;
            BinaryFormatter^ formatter = gcnew BinaryFormatter();
            try {
                file = gcnew FileStream(userFileName, FileMode::Create, FileAccess::Write);
                formatter->Serialize(file, usuario);
            }
            catch (Exception^ ex) {
                throw ex;
            }
            finally {
                if (file != nullptr) file->Close();
            }
        }
    }
}


List<Object^>^ STPUCPPersistance::Persistance::LoadBinaryFile(String^ fileName)
{
    List<Object^>^ results = gcnew List<Object^>();
    try {
        for each (String ^ file in Directory::GetFiles(".", "Usuario_*.bin")) {
            FileStream^ fileStream = nullptr;
            try {
                fileStream = gcnew FileStream(file, FileMode::Open, FileAccess::Read);
                BinaryFormatter^ formatter = gcnew BinaryFormatter();
                while (fileStream->Position < fileStream->Length) {
                    results->Add(formatter->Deserialize(fileStream));
                }
            }
            catch (Exception^ ex) {
                throw ex;
            }
            finally {
                if (fileStream != nullptr) fileStream->Close();
            }
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    return results;
}

//PERSISTENCIAS//
SqlConnection^ STPUCPPersistance::Persistance::GetConnection() {
    SqlConnection^ conn = gcnew SqlConnection();
    String^ password = "lpoostpucp";
    conn->ConnectionString = "Server=a20213166.c70qyic6wm2b.us-east-1.rds.amazonaws.com;" +
        "Database = a20213166;" +
        "User ID = a20213166; " +
        "Password = " + password + ";";
    conn->Open();
    return conn;
}

int STPUCPPersistance::Persistance::AddUser(Usuario^ usuario) {
    /*List<Object^>^ usuarios = LoadBinaryFile(BIN_USUARIO_FILE_NAME);
    usuarios->Add(usuario);
    PersistBinaryFile(BIN_USUARIO_FILE_NAME, usuarios);
    return 1;
    */
    SqlConnection^ conn;
    SqlCommand^ cmd;

    try {
        conn = GetConnection();
        String^ sqlStr = "dbo.usp_AddUsuario";
        cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;

        cmd->Parameters->Add("@ApellidoPaterno", System::Data::SqlDbType::VarChar, 100)->Value = usuario->ApellidoPaterno;
        cmd->Parameters->Add("@ApellidoMaterno", System::Data::SqlDbType::VarChar, 100)->Value = usuario->ApellidoMaterno;
        cmd->Parameters->Add("@CodigoPUCP", System::Data::SqlDbType::Int)->Value = usuario->CodigoPUCP;
        cmd->Parameters->Add("@NumeroTelefono", System::Data::SqlDbType::Int)->Value = usuario->NumeroTelefono;
        cmd->Parameters->Add("@Correo", System::Data::SqlDbType::VarChar, 100)->Value = usuario->Correo;
        cmd->Parameters->Add("@Contrasena", System::Data::SqlDbType::VarChar, 100)->Value = usuario->Contraseña;
        cmd->Parameters->Add("@Nombre", System::Data::SqlDbType::VarChar, 100)->Value = usuario->Nombre;
        cmd->Parameters->Add("@Rol", System::Data::SqlDbType::VarChar, 50)->Value = usuario->Rol;
        cmd->Parameters->Add("@DNI", System::Data::SqlDbType::Int)->Value = usuario->DNI;

        if (dynamic_cast<Pasajero^>(usuario)) {
            Pasajero^ pasajero = (Pasajero^)usuario;
            cmd->Parameters->Add("@CantServiciosTomados", System::Data::SqlDbType::Int)->Value = pasajero->CantServiciosTomados;
            cmd->Parameters->Add("@ViajesId", System::Data::SqlDbType::Int)->Value = pasajero->ViajesId;
            cmd->Parameters->Add("@Huella", System::Data::SqlDbType::VarChar, 100)->Value = pasajero->Huella;
        }

        if (dynamic_cast<Administrador^>(usuario)) {
            Administrador^ administrador = (Administrador^)usuario;
            //cmd->Parameters->Add("@CantCuentasModificadas", System::Data::SqlDbType::Int)->Value = administrador->CantCuentasModificadas;
            //cmd->Parameters->Add("@CantServiciosTransporteModificados", System::Data::SqlDbType::Int)->Value = administrador->CantServiciosTransporteModificados;
        }

        if (dynamic_cast<Conductor^>(usuario)) {
            Conductor^ conductor = (Conductor^)usuario;
            cmd->Parameters->Add("@ModeloCarro", System::Data::SqlDbType::VarChar, 100)->Value = conductor->ModeloCarro;
            cmd->Parameters->Add("@PlacaCarro", System::Data::SqlDbType::VarChar, 50)->Value = conductor->PlacaCarro;
            cmd->Parameters->Add("@ColorCarro", System::Data::SqlDbType::VarChar, 50)->Value = conductor->ColorCarro;
            cmd->Parameters->Add("@CantAsientos", System::Data::SqlDbType::Int)->Value = conductor->CantAsientos;
            cmd->Parameters->Add("@FotoConductor", System::Data::SqlDbType::VarBinary)->Value = conductor->FotoConductor;
            cmd->Parameters->Add("@FotoCarro", System::Data::SqlDbType::VarBinary)->Value = conductor->FotoCarro;
            cmd->Parameters->Add("@BreveteConfirmacion", System::Data::SqlDbType::Bit)->Value = conductor->BreveteConfirmacion;
            cmd->Parameters->Add("@HuellaDactilar", System::Data::SqlDbType::VarChar, 100)->Value = conductor->HuellaDactilar;
            cmd->Parameters->Add("@Calificacion", System::Data::SqlDbType::Decimal)->Value = conductor->Calificacion;
            cmd->Parameters->Add("@CantServiciosRealizados", System::Data::SqlDbType::Int)->Value = conductor->CantServiciosRealizados;
            cmd->Parameters->Add("@FotoYape", System::Data::SqlDbType::VarBinary)->Value = conductor->FotoYape;
            
        }

        cmd->Prepare();
        cmd->ExecuteNonQuery();
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (conn != nullptr) conn->Close();
    }
    return 1;
}

void STPUCPPersistance::Persistance::UpdateUser(Usuario^ usuario) {
    /*List<Object^>^ usuarios = LoadBinaryFile(BIN_USUARIO_FILE_NAME);
    for (int i = 0; i < usuarios->Count; i++) {
        Usuario^ currentUser = dynamic_cast<Usuario^>(usuarios[i]);
        if (currentUser != nullptr && currentUser->CodigoPUCP == usuario->CodigoPUCP) {
            usuarios[i] = usuario;
            PersistBinaryFile(BIN_USUARIO_FILE_NAME, usuarios);
            return;
        }
    }*/
    SqlConnection^ conn;
    SqlCommand^ cmd;

    try {
        conn = GetConnection();
        String^ sqlStr = "dbo.usp_UpdateUsuario";
        cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@Id", System::Data::SqlDbType::Int)->Value = usuario->Id;
        cmd->Parameters->Add("@ApellidoPaterno", System::Data::SqlDbType::VarChar, 100)->Value = usuario->ApellidoPaterno;
        cmd->Parameters->Add("@ApellidoMaterno", System::Data::SqlDbType::VarChar, 100)->Value = usuario->ApellidoMaterno;
        cmd->Parameters->Add("@CodigoPUCP", System::Data::SqlDbType::Int)->Value = usuario->CodigoPUCP;
        cmd->Parameters->Add("@NumeroTelefono", System::Data::SqlDbType::Int)->Value = usuario->NumeroTelefono;
        cmd->Parameters->Add("@Correo", System::Data::SqlDbType::VarChar, 100)->Value = usuario->Correo;
        cmd->Parameters->Add("@Contrasena", System::Data::SqlDbType::VarChar, 100)->Value = usuario->Contraseña;
        cmd->Parameters->Add("@Nombre", System::Data::SqlDbType::VarChar, 100)->Value = usuario->Nombre;
        cmd->Parameters->Add("@Rol", System::Data::SqlDbType::VarChar, 50)->Value = usuario->Rol;
        cmd->Parameters->Add("@DNI", System::Data::SqlDbType::Int)->Value = usuario->DNI;

        if (dynamic_cast<Pasajero^>(usuario)) {
            Pasajero^ pasajero = (Pasajero^)usuario;
            cmd->Parameters->Add("@CantServiciosTomados", System::Data::SqlDbType::Int)->Value = pasajero->CantServiciosTomados;
            cmd->Parameters->Add("@ViajesId", System::Data::SqlDbType::Int)->Value = pasajero->ViajesId;
            cmd->Parameters->Add("@Huella", System::Data::SqlDbType::VarChar, 100)->Value = pasajero->Huella;
        }

        if (dynamic_cast<Administrador^>(usuario)) {
            Administrador^ administrador = (Administrador^)usuario;
            //cmd->Parameters->Add("@CantCuentasModificadas", System::Data::SqlDbType::Int)->Value = administrador->CantCuentasModificadas;
            //cmd->Parameters->Add("@CantServiciosTransporteModificados", System::Data::SqlDbType::Int)->Value = administrador->CantServiciosTransporteModificados;
        }

        if (dynamic_cast<Conductor^>(usuario)) {
            Conductor^ conductor = (Conductor^)usuario;
            cmd->Parameters->Add("@ModeloCarro", System::Data::SqlDbType::VarChar, 100)->Value = conductor->ModeloCarro;
            cmd->Parameters->Add("@PlacaCarro", System::Data::SqlDbType::VarChar, 50)->Value = conductor->PlacaCarro;
            cmd->Parameters->Add("@ColorCarro", System::Data::SqlDbType::VarChar, 50)->Value = conductor->ColorCarro;
            cmd->Parameters->Add("@CantAsientos", System::Data::SqlDbType::Int)->Value = conductor->CantAsientos;
            cmd->Parameters->Add("@FotoConductor", System::Data::SqlDbType::VarBinary)->Value = conductor->FotoConductor;
            cmd->Parameters->Add("@FotoCarro", System::Data::SqlDbType::VarBinary)->Value = conductor->FotoCarro;
            cmd->Parameters->Add("@BreveteConfirmacion", System::Data::SqlDbType::Bit)->Value = conductor->BreveteConfirmacion;
            cmd->Parameters->Add("@HuellaDactilar", System::Data::SqlDbType::VarChar, 100)->Value = conductor->HuellaDactilar;
            cmd->Parameters->Add("@Calificacion", System::Data::SqlDbType::Decimal)->Value = conductor->Calificacion;
            cmd->Parameters->Add("@CantServiciosRealizados", System::Data::SqlDbType::Int)->Value = conductor->CantServiciosRealizados;
            cmd->Parameters->Add("@FotoYape", System::Data::SqlDbType::VarBinary)->Value = conductor->FotoYape;
        }

        cmd->Prepare();
        cmd->ExecuteNonQuery();
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (conn != nullptr) conn->Close();
    }
}

void STPUCPPersistance::Persistance::DeleteUser(int UsuarioID) {
    // Eliminar el archivo binario del usuario
    /*String^ fileName = "Usuario_" + UsuarioID + ".bin";
    if (File::Exists(fileName)) {
        File::Delete(fileName);
    }

    // Actualizar la lista de usuarios en la memoria
    List<Object^>^ usuarios = LoadBinaryFile(BIN_USUARIO_FILE_NAME);
    for (int i = 0; i < usuarios->Count; i++) {
        Usuario^ currentUser = dynamic_cast<Usuario^>(usuarios[i]);
        if (currentUser != nullptr && currentUser->CodigoPUCP == UsuarioID) {
            usuarios->RemoveAt(i);
            break;
        }
    }

    // Guardar la lista actualizada de usuarios
    PersistBinaryFile(BIN_USUARIO_FILE_NAME, usuarios);
    */
    SqlConnection^ conn;
    SqlCommand^ cmd;

    try {
        conn = GetConnection();
        String^ sqlStr = "dbo.usp_DeleteUsuario";
        cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@Id", System::Data::SqlDbType::Int)->Value = UsuarioID;
        cmd->Prepare();
        cmd->ExecuteNonQuery();
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (conn != nullptr) conn->Close();
    }
}

Usuario^ STPUCPPersistance::Persistance::QueryUsersById(int UsuarioID) {
    /*List<Object^>^ usuarios = LoadBinaryFile(BIN_USUARIO_FILE_NAME);
    for (int i = 0; i < usuarios->Count; i++) {
        Usuario^ currentUser = dynamic_cast<Usuario^>(usuarios[i]);
        if (currentUser != nullptr && currentUser->CodigoPUCP == UsuarioID) {
            return currentUser;
        }
    }
    return nullptr;*/
    Usuario^ usuario = nullptr;
    SqlConnection^ conn;
    SqlDataReader^ reader;

    try {
        conn = GetConnection();
        String^ sqlStr = "dbo.usp_QueryUsuarioById";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@Id", System::Data::SqlDbType::Int)->Value = UsuarioID;
        cmd->Prepare();
        reader = cmd->ExecuteReader();

        if (reader->Read()) {
            String^ rol = reader["Rol"]->ToString();
            if (rol == "Pasajero") {
                usuario = gcnew Pasajero();
                if (reader["CantServiciosTomados"] == DBNull::Value) {
                    ((Pasajero^)usuario)->CantServiciosTomados = 0;
                }
                else {
                    ((Pasajero^)usuario)->CantServiciosTomados = Convert::ToInt32(reader["CantServiciosTomados"]->ToString());
                }
                if (reader["ViajesId"] == DBNull::Value) {
                    ((Pasajero^)usuario)->ViajesId = 0;
                }
                else {
                    ((Pasajero^)usuario)->ViajesId = Convert::ToInt32(reader["ViajesId"]->ToString());
                }
                if (reader["Huella"] == DBNull::Value) {
                    ((Pasajero^)usuario)->Huella = 0;
                }
                else {
                    ((Pasajero^)usuario)->Huella = Convert::ToInt32(reader["Huella"]->ToString());
                }
            }
            else if (rol == "Administrador") {
                usuario = gcnew Administrador();
                //(Administrador^)usuario)->CantCuentasModificadas = Convert::ToInt32(reader["CantCuentasModificadas"]->ToString());
                //((Administrador^)usuario)->CantServiciosTransporteModificados = Convert::ToInt32(reader["CantServiciosTransporteModificados"]->ToString());
            }
            else if (rol == "Conductor") {
                usuario = gcnew Conductor();
                ((Conductor^)usuario)->ModeloCarro = reader["ModeloCarro"]->ToString();
                ((Conductor^)usuario)->PlacaCarro = reader["PlacaCarro"]->ToString();
                ((Conductor^)usuario)->ColorCarro = reader["ColorCarro"]->ToString();
                ((Conductor^)usuario)->CantAsientos = Convert::ToInt32(reader["CantAsientos"]->ToString());
                ((Conductor^)usuario)->FotoConductor = (array<Byte>^)reader["FotoConductor"];
                ((Conductor^)usuario)->FotoCarro = (array<Byte>^)reader["FotoCarro"];
                ((Conductor^)usuario)->BreveteConfirmacion = Convert::ToBoolean(reader["BreveteConfirmacion"]->ToString());
                ((Conductor^)usuario)->HuellaDactilar = reader["HuellaDactilar"]->ToString();
                ((Conductor^)usuario)->Calificacion = Convert::ToDouble(reader["Calificacion"]->ToString());
                ((Conductor^)usuario)->CantServiciosRealizados = Convert::ToInt32(reader["CantServiciosRealizados"]->ToString());
                ((Conductor^)usuario)->FotoYape = (array<Byte>^)reader["FotoYape"];

            }
            else {
                usuario = gcnew Usuario();
            }

            usuario->Id = Convert::ToInt32(reader["CodigoPUCP"]->ToString());
            usuario->ApellidoPaterno = reader["ApellidoPaterno"]->ToString();
            usuario->ApellidoMaterno = reader["ApellidoMaterno"]->ToString();
            usuario->CodigoPUCP = Convert::ToInt32(reader["CodigoPUCP"]->ToString());
            usuario->NumeroTelefono = Convert::ToInt32(reader["NumeroTelefono"]->ToString());
            usuario->Correo = reader["Correo"]->ToString();
            usuario->Contraseña = reader["Contrasena"]->ToString();
            usuario->Nombre = reader["Nombre"]->ToString();
            usuario->Rol = reader["Rol"]->ToString();
            usuario->DNI = Convert::ToInt32(reader["DNI"]->ToString());
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return usuario;
}

List<Usuario^>^ STPUCPPersistance::Persistance::QueryAllUsers() {
    /*List<Object^>^ objects = LoadBinaryFile(BIN_USUARIO_FILE_NAME);
    List<Usuario^>^ usuarios = gcnew List<Usuario^>();
    for each (Object ^ obj in objects) {
        Usuario^ usuario = dynamic_cast<Usuario^>(obj);
        if (usuario != nullptr) {
            usuarios->Add(usuario);
        }
    }
    return usuarios;*/
    List<Usuario^>^ usuarios = gcnew List<Usuario^>();
    SqlConnection^ conn;
    SqlDataReader^ reader;

    try {
        conn = GetConnection();
        String^ sqlStr = "dbo.usp_QueryAllUsuarios";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Prepare();
        reader = cmd->ExecuteReader();

        while (reader->Read()) {
            Usuario^ usuario = nullptr;
            String^ rol = reader["Rol"]->ToString();
            if (rol == "Pasajero") {
                usuario = gcnew Pasajero();
                if (reader["CantServiciosTomados"] == DBNull::Value) {
                    ((Pasajero^)usuario)->CantServiciosTomados = 0;
                }
                else {
                    ((Pasajero^)usuario)->CantServiciosTomados = Convert::ToInt32(reader["CantServiciosTomados"]->ToString());
                }
                if (reader["ViajesId"] == DBNull::Value) {
                    ((Pasajero^)usuario)->ViajesId = 0;
                }
                else {
                    ((Pasajero^)usuario)->ViajesId = Convert::ToInt32(reader["ViajesId"]->ToString());
                }
                if (reader["Huella"] == DBNull::Value) {
                    ((Pasajero^)usuario)->Huella = 0;
                }
                else {
                    ((Pasajero^)usuario)->Huella = Convert::ToInt32(reader["Huella"]->ToString());
                }
            }
            else if (rol == "Administrador") {
                usuario = gcnew Administrador();
                //((Administrador^)usuario)->CantCuentasModificadas = Convert::ToInt32(reader["CantCuentasModificadas"]->ToString());
                //((Administrador^)usuario)->CantServiciosTransporteModificados = Convert::ToInt32(reader["CantServiciosTransporteModificados"]->ToString());
            }
            else if (rol == "Conductor") {
                usuario = gcnew Conductor();
                ((Conductor^)usuario)->ModeloCarro = reader["ModeloCarro"]->ToString();
                ((Conductor^)usuario)->PlacaCarro = reader["PlacaCarro"]->ToString();
                ((Conductor^)usuario)->ColorCarro = reader["ColorCarro"]->ToString();
                ((Conductor^)usuario)->CantAsientos = Convert::ToInt32(reader["CantAsientos"]->ToString());
                ((Conductor^)usuario)->FotoConductor = (array<Byte>^)reader["FotoConductor"];
                ((Conductor^)usuario)->FotoCarro = (array<Byte>^)reader["FotoCarro"];
                ((Conductor^)usuario)->BreveteConfirmacion = Convert::ToBoolean(reader["BreveteConfirmacion"]->ToString());
                ((Conductor^)usuario)->HuellaDactilar = reader["HuellaDactilar"]->ToString();
                ((Conductor^)usuario)->Calificacion = Convert::ToDouble(reader["Calificacion"]->ToString());
                ((Conductor^)usuario)->CantServiciosRealizados = Convert::ToInt32(reader["CantServiciosRealizados"]->ToString());
                ((Conductor^)usuario)->FotoYape = (array<Byte>^)reader["FotoYape"];
            }
            else {
                usuario = gcnew Usuario();
            }

            usuario->Id = Convert::ToInt32(reader["CodigoPUCP"]->ToString());
            usuario->ApellidoPaterno = reader["ApellidoPaterno"]->ToString();
            usuario->ApellidoMaterno = reader["ApellidoMaterno"]->ToString();
            usuario->CodigoPUCP = Convert::ToInt32(reader["CodigoPUCP"]->ToString());
            usuario->NumeroTelefono = Convert::ToInt32(reader["NumeroTelefono"]->ToString());
            usuario->Correo = reader["Correo"]->ToString();
            usuario->Contraseña = reader["Contrasena"]->ToString();
            usuario->Nombre = reader["Nombre"]->ToString();
            usuario->Rol = reader["Rol"]->ToString();
            usuario->DNI = Convert::ToInt32(reader["DNI"]->ToString());
            usuarios->Add(usuario);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return usuarios;
}

//Falta (Ya no :v) (Falta probar si funciona esta parte... fe no más)

int STPUCPPersistance::Persistance::AddJourney(Viaje^ viaje)
{
    /*ViajesListDB->Add(Viaje);
    PersistTextFile(VIAJE_FILE_NAME, ViajesListDB);
    return 1;*/
    SqlConnection^ conn;
    SqlCommand^ cmd;

    try {
        conn = GetConnection();
        String^ sqlStr = "dbo.usp_AddViaje";
        cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;

        cmd->Parameters->Add("@HoraSalida", System::Data::SqlDbType::Int)->Value = viaje->HoraSalida;
        cmd->Parameters->Add("@FechaViaje", System::Data::SqlDbType::VarChar, 100)->Value = viaje->FechaViaje;
        cmd->Parameters->Add("@Lugar", System::Data::SqlDbType::VarChar, 100)->Value = viaje->Lugar;
        cmd->Parameters->Add("@UltimoParadero", System::Data::SqlDbType::VarChar, 100)->Value = viaje->UltimoParadero;
        cmd->Parameters->Add("@PrecioViaje", System::Data::SqlDbType::Decimal)->Value = viaje->PrecioViaje;
        cmd->Parameters->Add("@Distrito", System::Data::SqlDbType::VarChar, 100)->Value = viaje->Distrito;
        cmd->Parameters->Add("@ConductorId", System::Data::SqlDbType::Int)->Value = viaje->ConductorId;

        SqlParameter^ outIdParam = gcnew SqlParameter("@Id", System::Data::SqlDbType::Int);
        outIdParam->Direction = System::Data::ParameterDirection::Output;
        cmd->Parameters->Add(outIdParam);

        cmd->Prepare();
        cmd->ExecuteNonQuery();

        viaje->Id = Convert::ToInt32(outIdParam->Value);
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (conn != nullptr) conn->Close();
    }

    return viaje->Id;
}

void STPUCPPersistance::Persistance::UpdateJourney(Viaje^ viaje)
{
    /*for (int i = 0; i < ViajesListDB->Count; i++) {
        if (ViajesListDB[i]->Id == Viaje->Id) {
            ViajesListDB[i] = Viaje;
            PersistTextFile(VIAJE_FILE_NAME, ViajesListDB);
            return;
        }
    }*/
    SqlConnection^ conn;
    SqlCommand^ cmd;

    try {
        conn = GetConnection();
        String^ sqlStr = "dbo.usp_UpdateViaje";
        cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;

        cmd->Parameters->Add("@Id", System::Data::SqlDbType::Int)->Value = viaje->Id;
        cmd->Parameters->Add("@HoraSalida", System::Data::SqlDbType::Int)->Value = viaje->HoraSalida;
        cmd->Parameters->Add("@FechaViaje", System::Data::SqlDbType::VarChar, 100)->Value = viaje->FechaViaje;
        cmd->Parameters->Add("@Lugar", System::Data::SqlDbType::VarChar, 100)->Value = viaje->Lugar;
        cmd->Parameters->Add("@UltimoParadero", System::Data::SqlDbType::VarChar, 100)->Value = viaje->UltimoParadero;
        cmd->Parameters->Add("@PrecioViaje", System::Data::SqlDbType::Decimal)->Value = viaje->PrecioViaje;
        cmd->Parameters->Add("@Distrito", System::Data::SqlDbType::VarChar, 100)->Value = viaje->Distrito;
        cmd->Parameters->Add("@ConductorId", System::Data::SqlDbType::Int)->Value = viaje->ConductorId;

        cmd->Prepare();
        cmd->ExecuteNonQuery();
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (conn != nullptr) conn->Close();
    }
}

void STPUCPPersistance::Persistance::DeleteJourney(int viajeID)
{
    /*for (int i = 0; i < ViajesListDB->Count; i++) {
        if (ViajesListDB[i]->Id == ViajeID) {
            ViajesListDB->RemoveAt(i);
            PersistTextFile(VIAJE_FILE_NAME, ViajesListDB);
            return;
        }
    }*/
    SqlConnection^ conn;
    SqlCommand^ cmd;

    try {
        conn = GetConnection();
        String^ sqlStr = "dbo.usp_DeleteViaje";
        cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@Id", System::Data::SqlDbType::Int)->Value = viajeID;
        cmd->Prepare();
        cmd->ExecuteNonQuery();
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (conn != nullptr) conn->Close();
    }
}

Viaje^ STPUCPPersistance::Persistance::QueryJourneysById(int viajeID)
{
    /*ViajesListDB = (List<Viaje^>^) LoadTextFile(VIAJE_FILE_NAME);
    Viaje^ viaje = nullptr;
    for (int i = 0; i < ViajesListDB->Count; i++) {
        if (ViajesListDB[i]->Id == ViajeID) {
            viaje = ViajesListDB[i];
            return viaje;
        }
    }
    return viaje;*/
    Viaje^ viaje = nullptr;
    SqlConnection^ conn;
    SqlDataReader^ reader;

    try {
        conn = GetConnection();
        String^ sqlStr = "dbo.usp_QueryViajeById";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@Id", System::Data::SqlDbType::Int)->Value = viajeID;
        cmd->Prepare();
        reader = cmd->ExecuteReader();

        if (reader->Read()) {
            viaje = gcnew Viaje();
            viaje->Id = Convert::ToInt32(reader["Id"]);
            viaje->HoraSalida = Convert::ToInt32(reader["HoraSalida"]);
            viaje->FechaViaje = reader["FechaViaje"]->ToString();
            viaje->Lugar = reader["Lugar"]->ToString();
            viaje->UltimoParadero = reader["UltimoParadero"]->ToString();
            viaje->PrecioViaje = Convert::ToDouble(reader["PrecioViaje"]);
            viaje->Distrito = reader["Distrito"]->ToString();
            viaje->ConductorId = Convert::ToInt32(reader["ConductorId"]);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }

    return viaje;
}

List<Viaje^>^ STPUCPPersistance::Persistance::QueryAllJourneys()
{
    /*ViajesListDB = (List<Viaje^>^) LoadTextFile(VIAJE_FILE_NAME);
    if (ViajesListDB == nullptr)
        ViajesListDB = gcnew List<Viaje^>();
    return ViajesListDB;*/
    List<Viaje^>^ viajes = gcnew List<Viaje^>();
    SqlConnection^ conn;
    SqlDataReader^ reader;

    try {
        conn = GetConnection();
        String^ sqlStr = "dbo.usp_QueryAllViajes";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Prepare();
        reader = cmd->ExecuteReader();

        while (reader->Read()) {
            Viaje^ viaje = gcnew Viaje();
            viaje->Id = Convert::ToInt32(reader["Id"]);
            viaje->HoraSalida = Convert::ToInt32(reader["HoraSalida"]);
            viaje->FechaViaje = reader["FechaViaje"]->ToString();
            viaje->Lugar = reader["Lugar"]->ToString();
            viaje->UltimoParadero = reader["UltimoParadero"]->ToString();
            viaje->PrecioViaje = Convert::ToDouble(reader["PrecioViaje"]);
            viaje->Distrito = reader["Distrito"]->ToString();
            viaje->ConductorId = Convert::ToInt32(reader["ConductorId"]);
            viajes->Add(viaje);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }

    return viajes;
}

int STPUCPPersistance::Persistance::AddPromotion(Promocion^ promocion)
{
    /*PromocionesListDB->Add(Promocion);
    PersistTextFile(PROMOCION_FILE_NAME, PromocionesListDB);
    return 1;*/
    SqlConnection^ conn;
    SqlCommand^ cmd;

    try {
        conn = GetConnection();
        String^ sqlStr = "dbo.usp_AddPromocion";
        cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;

        cmd->Parameters->Add("@Porcentaje", System::Data::SqlDbType::Int)->Value = promocion->Porcentaje;
        cmd->Parameters->Add("@NombrePromo", System::Data::SqlDbType::VarChar, 100)->Value = promocion->NombrePromo;
        cmd->Parameters->Add("@IdUsuario", System::Data::SqlDbType::Int)->Value = promocion->IdUsuario;

        SqlParameter^ outIdParam = gcnew SqlParameter("@Id", System::Data::SqlDbType::Int);
        outIdParam->Direction = System::Data::ParameterDirection::Output;
        cmd->Parameters->Add(outIdParam);

        cmd->Prepare();
        cmd->ExecuteNonQuery();

        promocion->Id = Convert::ToInt32(outIdParam->Value);
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (conn != nullptr) conn->Close();
    }

    return promocion->Id;
}

void STPUCPPersistance::Persistance::UpdatePromotion(Promocion^ Promocion)
{
    /*for (int i = 0; i < PromocionesListDB->Count; i++) {
        if (PromocionesListDB[i]->Id == Promocion->Id) {
            PromocionesListDB[i] = Promocion;
            PersistTextFile(PROMOCION_FILE_NAME, PromocionesListDB);
            return;
        }
    }*/
    SqlConnection^ conn;
    SqlCommand^ cmd;

    try {
        conn = GetConnection();
        String^ sqlStr = "dbo.usp_UpdatePromocion";
        cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;

        cmd->Parameters->Add("@Id", System::Data::SqlDbType::Int)->Value = Promocion->Id;
        cmd->Parameters->Add("@Porcentaje", System::Data::SqlDbType::Int)->Value = Promocion->Porcentaje;
        cmd->Parameters->Add("@NombrePromo", System::Data::SqlDbType::VarChar, 100)->Value = Promocion->NombrePromo;
        cmd->Parameters->Add("@IdUsuario", System::Data::SqlDbType::Int)->Value = Promocion->IdUsuario;

        cmd->Prepare();
        cmd->ExecuteNonQuery();
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (conn != nullptr) conn->Close();
    }
}

void STPUCPPersistance::Persistance::DeletePromotion(int promocionID)
{
    /*for (int i = 0; i < PromocionesListDB->Count; i++) {
        if (PromocionesListDB[i]->Id == PromocionID) {
            PromocionesListDB->RemoveAt(i);
            PersistTextFile(PROMOCION_FILE_NAME, PromocionesListDB);
            return;
        }
    }*/
    SqlConnection^ conn;
    SqlCommand^ cmd;

    try {
        conn = GetConnection();
        String^ sqlStr = "dbo.usp_DeletePromocion";
        cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@Id", System::Data::SqlDbType::Int)->Value = promocionID;
        cmd->Prepare();
        cmd->ExecuteNonQuery();
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (conn != nullptr) conn->Close();
    }
}

Promocion^ STPUCPPersistance::Persistance::QueryPromotionsById(int promocionID)
{
    /*PromocionesListDB = (List<Promocion^>^) LoadTextFile(PROMOCION_FILE_NAME);
    Promocion^ promocion = nullptr;
    for (int i = 0; i < PromocionesListDB->Count; i++) {
        if (PromocionesListDB[i]->Id == PromocionID) {
            promocion = PromocionesListDB[i];
            return promocion;
        }
    }
    return promocion;*/
    Promocion^ promocion = nullptr;
    SqlConnection^ conn;
    SqlDataReader^ reader;

    try {
        conn = GetConnection();
        String^ sqlStr = "dbo.usp_QueryPromocionById";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@Id", System::Data::SqlDbType::Int)->Value = promocionID;
        cmd->Prepare();
        reader = cmd->ExecuteReader();

        if (reader->Read()) {
            promocion = gcnew Promocion();
            promocion->Id = Convert::ToInt32(reader["Id"]);
            promocion->Porcentaje = Convert::ToInt32(reader["Porcentaje"]);
            promocion->NombrePromo = reader["NombrePromo"]->ToString();
            promocion->IdUsuario = Convert::ToInt32(reader["IdUsuario"]);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }

    return promocion;
}

List<Promocion^>^ STPUCPPersistance::Persistance::QueryAllPromotions()
{
    /*PromocionesListDB = (List<Promocion^>^) LoadTextFile(PROMOCION_FILE_NAME);
    if (PromocionesListDB == nullptr)
        PromocionesListDB = gcnew List<Promocion^>();
    return PromocionesListDB;*/
    List<Promocion^>^ promociones = gcnew List<Promocion^>();
    SqlConnection^ conn;
    SqlDataReader^ reader;

    try {
        conn = GetConnection();
        String^ sqlStr = "dbo.usp_QueryAllPromociones";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Prepare();
        reader = cmd->ExecuteReader();

        while (reader->Read()) {
            Promocion^ promocion = gcnew Promocion();
            promocion->Id = Convert::ToInt32(reader["Id"]);
            promocion->Porcentaje = Convert::ToInt32(reader["Porcentaje"]);
            promocion->NombrePromo = reader["NombrePromo"]->ToString();
            promocion->IdUsuario = Convert::ToInt32(reader["IdUsuario"]);
            promociones->Add(promocion);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }

    return promociones;
}

int STPUCPPersistance::Persistance::AddOrder(Orden^ orden)
{
    /*OrdenListDB->Add(orden);
    PersistTextFile(ORDER_FILE_NAME, OrdenListDB);
    return 1;*/
    SqlConnection^ conn;
    SqlCommand^ cmd;

    try {
        conn = GetConnection();
        String^ sqlStr = "dbo.usp_AddOrden";
        cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;

        cmd->Parameters->Add("@Distrito", System::Data::SqlDbType::VarChar, 100)->Value = orden->Distrito;
        cmd->Parameters->Add("@CalificacionEstrellas", System::Data::SqlDbType::Int)->Value = orden->CalificacionEstrellas;
        cmd->Parameters->Add("@Precio", System::Data::SqlDbType::Decimal)->Value = orden->Precio;
        cmd->Parameters->Add("@Fecha", System::Data::SqlDbType::DateTime)->Value = orden->Fecha;
        cmd->Parameters->Add("@Id_viaje", System::Data::SqlDbType::Int)->Value = orden->Id_viaje;
        cmd->Parameters->Add("@PasajeroId", System::Data::SqlDbType::Int)->Value = orden->PasajeroId;
        //
        SqlParameter^ outIdParam = gcnew SqlParameter("@Id", System::Data::SqlDbType::Int);
        outIdParam->Direction = System::Data::ParameterDirection::Output;
        cmd->Parameters->Add(outIdParam);

        cmd->Prepare();
        cmd->ExecuteNonQuery();

        orden->Id = Convert::ToInt32(outIdParam->Value);
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (conn != nullptr) conn->Close();
    }

    return orden->Id;
}

void STPUCPPersistance::Persistance::UpdateOrder(Orden^ orden)
{
    /*for (int i = 0; i < OrdenListDB->Count; i++) {
        if (OrdenListDB[i]->Id == orden->Id) {
            OrdenListDB[i] = orden;
            PersistTextFile(ORDER_FILE_NAME, OrdenListDB);
            return;
        }
    }*/
    SqlConnection^ conn;
    SqlCommand^ cmd;

    try {
        conn = GetConnection();
        String^ sqlStr = "dbo.usp_UpdateOrden";
        cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;

        cmd->Parameters->Add("@Id", System::Data::SqlDbType::Int)->Value = orden->Id;
        cmd->Parameters->Add("@Distrito", System::Data::SqlDbType::VarChar, 100)->Value = orden->Distrito;
        cmd->Parameters->Add("@CalificacionEstrellas", System::Data::SqlDbType::Int)->Value = orden->CalificacionEstrellas;
        cmd->Parameters->Add("@Precio", System::Data::SqlDbType::Decimal)->Value = orden->Precio;
        cmd->Parameters->Add("@Fecha", System::Data::SqlDbType::DateTime)->Value = orden->Fecha;
        cmd->Parameters->Add("@Id_viaje", System::Data::SqlDbType::Int)->Value = orden->Id_viaje;
        cmd->Parameters->Add("@PasajeroId", System::Data::SqlDbType::Int)->Value = orden->PasajeroId;

        cmd->Prepare();
        cmd->ExecuteNonQuery();
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (conn != nullptr) conn->Close();
    }
}

void STPUCPPersistance::Persistance::DeleteOrder(int ordenID)
{
    /*for (int i = 0; i < OrdenListDB->Count; i++) {
        if (OrdenListDB[i]->Id == ordenID) {
            OrdenListDB->RemoveAt(i);
            PersistTextFile(ORDER_FILE_NAME, OrdenListDB);
            return;
        }
    }*/
    SqlConnection^ conn;
    SqlCommand^ cmd;

    try {
        conn = GetConnection();
        String^ sqlStr = "dbo.usp_DeleteOrden";
        cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@Id", System::Data::SqlDbType::Int)->Value = ordenID;
        cmd->Prepare();
        cmd->ExecuteNonQuery();
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (conn != nullptr) conn->Close();
    }
}

Orden^ STPUCPPersistance::Persistance::QueryOrderById(int ordenID)
{
    /*OrdenListDB = (List<Orden^>^) LoadTextFile(ORDER_FILE_NAME);
    Orden^ orden = nullptr;
    for (int i = 0; i < OrdenListDB->Count; i++) {
        if (OrdenListDB[i]->Id == ordenID) {
            orden = OrdenListDB[i];
            return orden;
        }
    }
    return orden;*/
    Orden^ orden = nullptr;
    SqlConnection^ conn;
    SqlDataReader^ reader;

    try {
        conn = GetConnection();
        String^ sqlStr = "dbo.usp_QueryOrdenById";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@Id", System::Data::SqlDbType::Int)->Value = ordenID;
        cmd->Prepare();
        reader = cmd->ExecuteReader();

        if (reader->Read()) {
            orden = gcnew Orden();
            orden->Id = Convert::ToInt32(reader["Id"]);
            orden->Distrito = reader["Distrito"]->ToString();
            orden->CalificacionEstrellas = Convert::ToInt32(reader["CalificacionEstrellas"]);
            orden->Precio = Convert::ToDouble(reader["Precio"]);
            orden->Fecha = Convert::ToDateTime(reader["Fecha"]).ToString();
            orden->Id_viaje = Convert::ToInt32(reader["Id_viaje"]);
            orden->PasajeroId = Convert::ToInt32(reader["PasajeroId"]);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }

    return orden;
}

List<Orden^>^ STPUCPPersistance::Persistance::QueryAllOrders()
{
    /*OrdenListDB = (List<Orden^>^) LoadTextFile(ORDER_FILE_NAME);
    if (OrdenListDB == nullptr)
        OrdenListDB = gcnew List<Orden^>();
    return OrdenListDB;*/
    List<Orden^>^ ordenes = gcnew List<Orden^>();
    SqlConnection^ conn;
    SqlDataReader^ reader;

    try {
        conn = GetConnection();
        String^ sqlStr = "dbo.usp_QueryAllOrdenes";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Prepare();
        reader = cmd->ExecuteReader();

        while (reader->Read()) {
            Orden^ orden = gcnew Orden();
            orden->Id = Convert::ToInt32(reader["Id"]);
            orden->Distrito = reader["Distrito"]->ToString();
            orden->CalificacionEstrellas = Convert::ToInt32(reader["CalificacionEstrellas"]);
            orden->Precio = Convert::ToDouble(reader["Precio"]);
            orden->Fecha = Convert::ToDateTime(reader["Fecha"]).ToString();
            orden->Id_viaje = Convert::ToInt32(reader["Id_viaje"]);
            orden->PasajeroId = Convert::ToInt32(reader["PasajeroId"]);
            ordenes->Add(orden);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }

    return ordenes;
}

// Mejor eliminaremos estos persistances
int STPUCPPersistance::Persistance::AddBL_Pasajero(Pasajero^ BL_Pasajero)
{
    if (BL_Pasajero->ListaNegra) {
        BL_PasajeroListDB->Add(BL_Pasajero);
        PersistTextFile(BL_PASAJEROS_FILE_NAME, BL_PasajeroListDB);
        return 1;
    }
    return 0;
}   

void STPUCPPersistance::Persistance::UpdateBL_Pasajero(Pasajero^ BL_Pasajero)
{
    for (int i = 0; i < BL_PasajeroListDB->Count; i++) {
        if (BL_PasajeroListDB[i]->Id == BL_Pasajero->Id) {
            BL_PasajeroListDB[i] = BL_Pasajero;
            PersistTextFile(BL_PASAJEROS_FILE_NAME, BL_PasajeroListDB);
            break;
        }
    }
}

void STPUCPPersistance::Persistance::DeleteBL_Pasajero(int BL_PasajeroID)
{
    for (int i = 0; i < BL_PasajeroListDB->Count; i++) {
        if (BL_PasajeroListDB[i]->Id == BL_PasajeroID) {
            BL_PasajeroListDB->RemoveAt(i);
            PersistTextFile(BL_PASAJEROS_FILE_NAME, BL_PasajeroListDB);
            break;
        }
    }
}

Pasajero^ STPUCPPersistance::Persistance::QueryBL_PasajeroById(int BL_PasajeroID)
{
    BL_PasajeroListDB = (List<Pasajero^>^) LoadTextFile(BL_PASAJEROS_FILE_NAME);
    Pasajero^ BL_pasajero = nullptr;
    for (int i = 0; i < BL_PasajeroListDB->Count; i++) {
        if (BL_PasajeroListDB[i]->Id == BL_PasajeroID) {
            BL_pasajero = BL_PasajeroListDB[i];
            return BL_pasajero;
        }
    }
    return BL_pasajero;
}

List<Pasajero^>^ STPUCPPersistance::Persistance::QueryAllBL_Pasajeros()
{
    BL_PasajeroListDB = (List<Pasajero^>^) LoadTextFile(BL_PASAJEROS_FILE_NAME);
    if (BL_PasajeroListDB == nullptr)
        BL_PasajeroListDB = gcnew List<Pasajero^>();
    return BL_PasajeroListDB;
}

int STPUCPPersistance::Persistance::AddBL_Conductor(Conductor^ BL_Conductor)
{
    if (BL_Conductor->ListaNegra) {
        BL_ConductorListDB->Add(BL_Conductor);
        PersistTextFile(BL_CONDUCTORES_FILE_NAME, BL_ConductorListDB);
        return 1;
    }
    return 0;
}

void STPUCPPersistance::Persistance::UpdateBL_Conductor(Conductor^ BL_Conductor)
{
    for (int i = 0; i < BL_ConductorListDB->Count; i++) {
        if (BL_ConductorListDB[i]->Id == BL_Conductor->Id) {
            BL_ConductorListDB[i] = BL_Conductor;
            PersistTextFile(BL_CONDUCTORES_FILE_NAME, BL_ConductorListDB);
            break;
        }
    }
}

void STPUCPPersistance::Persistance::DeleteBL_Conductor(int BL_ConductorID)
{
    for (int i = 0; i < BL_ConductorListDB->Count; i++) {
        if (BL_ConductorListDB[i]->Id == BL_ConductorID) {
            BL_ConductorListDB->RemoveAt(i);
            PersistTextFile(BL_CONDUCTORES_FILE_NAME, BL_ConductorListDB);
            break;
        }
    }
}

Conductor^ STPUCPPersistance::Persistance::QueryBL_ConductorById(int BL_ConductorID)
{
    BL_ConductorListDB = (List<Conductor^>^) LoadTextFile(BL_CONDUCTORES_FILE_NAME);
    Conductor^ BL_conductor = nullptr;
    for (int i = 0; i < BL_ConductorListDB->Count; i++) {
        if (BL_ConductorListDB[i]->Id == BL_ConductorID) {
            BL_conductor = BL_ConductorListDB[i];
            return BL_conductor;
        }
    }
    return BL_conductor;
}

List<Conductor^>^ STPUCPPersistance::Persistance::QueryAllBL_Conductores()
{
    BL_ConductorListDB = (List<Conductor^>^) LoadTextFile(BL_CONDUCTORES_FILE_NAME);
    if (BL_ConductorListDB == nullptr)
        BL_ConductorListDB = gcnew List<Conductor^>();
    return BL_ConductorListDB;
}

Usuario^ STPUCPPersistance::Persistance::ValidarUsuario(int codigoPucp, String^ password)
{
    Usuario^ result = nullptr;
    UsuarioListDB = QueryAllUsers();
    for (int i = 0; i < UsuarioListDB->Count; i++) {
        Usuario^ usuario = UsuarioListDB[i];
        if (usuario->CodigoPUCP == codigoPucp && usuario->Contraseña->Equals(password))
            result = usuario;
    }
    return result;
}


