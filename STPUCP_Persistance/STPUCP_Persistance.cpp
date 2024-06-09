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
            writer->WriteLine(p->Id + "," + p->Porcentaje + "," + p->NombrePromo);
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
                orden->Precio = Convert::ToInt32(record[4]);
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

int STPUCPPersistance::Persistance::AddUser(Usuario^ usuario)
{
    List<Object^>^ usuarios = LoadBinaryFile(BIN_USUARIO_FILE_NAME);
    usuarios->Add(usuario);
    PersistBinaryFile(BIN_USUARIO_FILE_NAME, usuarios);
    return 1;
}

void STPUCPPersistance::Persistance::UpdateUser(Usuario^ usuario)
{
    List<Object^>^ usuarios = LoadBinaryFile(BIN_USUARIO_FILE_NAME);
    for (int i = 0; i < usuarios->Count; i++) {
        Usuario^ currentUser = dynamic_cast<Usuario^>(usuarios[i]);
        if (currentUser != nullptr && currentUser->CodigoPUCP == usuario->CodigoPUCP) {
            usuarios[i] = usuario;
            PersistBinaryFile(BIN_USUARIO_FILE_NAME, usuarios);
            return;
        }
    }
}

void STPUCPPersistance::Persistance::DeleteUser(int UsuarioID)
{
    // Eliminar el archivo binario del usuario
    String^ fileName = "Usuario_" + UsuarioID + ".bin";
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
}

Usuario^ STPUCPPersistance::Persistance::QueryUsersById(int UsuarioID)
{
    List<Object^>^ usuarios = LoadBinaryFile(BIN_USUARIO_FILE_NAME);
    for (int i = 0; i < usuarios->Count; i++) {
        Usuario^ currentUser = dynamic_cast<Usuario^>(usuarios[i]);
        if (currentUser != nullptr && currentUser->CodigoPUCP == UsuarioID) {
            return currentUser;
        }
    }
    return nullptr;
}

List<Usuario^>^ STPUCPPersistance::Persistance::QueryAllUsers()
{
    List<Object^>^ objects = LoadBinaryFile(BIN_USUARIO_FILE_NAME);
    List<Usuario^>^ usuarios = gcnew List<Usuario^>();
    for each (Object ^ obj in objects) {
        Usuario^ usuario = dynamic_cast<Usuario^>(obj);
        if (usuario != nullptr) {
            usuarios->Add(usuario);
        }
    }
    return usuarios;
}

int STPUCPPersistance::Persistance::AddJourney(Viaje^ Viaje)
{
    ViajesListDB->Add(Viaje);
    PersistTextFile(VIAJE_FILE_NAME, ViajesListDB);
    return 1;
}

void STPUCPPersistance::Persistance::UpdateJourney(Viaje^ Viaje)
{
    for (int i = 0; i < ViajesListDB->Count; i++) {
        if (ViajesListDB[i]->Id == Viaje->Id) {
            ViajesListDB[i] = Viaje;
            PersistTextFile(VIAJE_FILE_NAME, ViajesListDB);
            return;
        }
    }
}

void STPUCPPersistance::Persistance::DeleteJourney(int ViajeID)
{
    for (int i = 0; i < ViajesListDB->Count; i++) {
        if (ViajesListDB[i]->Id == ViajeID) {
            ViajesListDB->RemoveAt(i);
            PersistTextFile(VIAJE_FILE_NAME, ViajesListDB);
            return;
        }
    }
}

Viaje^ STPUCPPersistance::Persistance::QueryJourneysById(int ViajeID)
{
    ViajesListDB = (List<Viaje^>^) LoadTextFile(VIAJE_FILE_NAME);
    Viaje^ viaje = nullptr;
    for (int i = 0; i < ViajesListDB->Count; i++) {
        if (ViajesListDB[i]->Id == ViajeID) {
            viaje = ViajesListDB[i];
            return viaje;
        }
    }
    return viaje;
}

List<Viaje^>^ STPUCPPersistance::Persistance::QueryAllJourneys()
{
    ViajesListDB = (List<Viaje^>^) LoadTextFile(VIAJE_FILE_NAME);
    if (ViajesListDB == nullptr)
        ViajesListDB = gcnew List<Viaje^>();
    return ViajesListDB;
}

int STPUCPPersistance::Persistance::AddPromotion(Promocion^ Promocion)
{
    PromocionesListDB->Add(Promocion);
    PersistTextFile(PROMOCION_FILE_NAME, PromocionesListDB);
    return 1;
}

void STPUCPPersistance::Persistance::UpdatePromotion(Promocion^ Promocion)
{
    for (int i = 0; i < PromocionesListDB->Count; i++) {
        if (PromocionesListDB[i]->Id == Promocion->Id) {
            PromocionesListDB[i] = Promocion;
            PersistTextFile(PROMOCION_FILE_NAME, PromocionesListDB);
            return;
        }
    }
}

void STPUCPPersistance::Persistance::DeletePromotion(int PromocionID)
{
    for (int i = 0; i < PromocionesListDB->Count; i++) {
        if (PromocionesListDB[i]->Id == PromocionID) {
            PromocionesListDB->RemoveAt(i);
            PersistTextFile(PROMOCION_FILE_NAME, PromocionesListDB);
            return;
        }
    }
}

Promocion^ STPUCPPersistance::Persistance::QueryPromotionsById(int PromocionID)
{
    PromocionesListDB = (List<Promocion^>^) LoadTextFile(PROMOCION_FILE_NAME);
    Promocion^ promocion = nullptr;
    for (int i = 0; i < PromocionesListDB->Count; i++) {
        if (PromocionesListDB[i]->Id == PromocionID) {
            promocion = PromocionesListDB[i];
            return promocion;
        }
    }
    return promocion;
}

List<Promocion^>^ STPUCPPersistance::Persistance::QueryAllPromotions()
{
    PromocionesListDB = (List<Promocion^>^) LoadTextFile(PROMOCION_FILE_NAME);
    if (PromocionesListDB == nullptr)
        PromocionesListDB = gcnew List<Promocion^>();
    return PromocionesListDB;
}

int STPUCPPersistance::Persistance::AddOrder(Orden^ orden)
{
    OrdenListDB->Add(orden);
    PersistTextFile(ORDER_FILE_NAME, OrdenListDB);
    return 1;
}

void STPUCPPersistance::Persistance::UpdateOrder(Orden^ orden)
{
    for (int i = 0; i < OrdenListDB->Count; i++) {
        if (OrdenListDB[i]->Id == orden->Id) {
            OrdenListDB[i] = orden;
            PersistTextFile(ORDER_FILE_NAME, OrdenListDB);
            return;
        }
    }
}

void STPUCPPersistance::Persistance::DeleteOrder(int ordenID)
{
    for (int i = 0; i < OrdenListDB->Count; i++) {
        if (OrdenListDB[i]->Id == ordenID) {
            OrdenListDB->RemoveAt(i);
            PersistTextFile(ORDER_FILE_NAME, OrdenListDB);
            return;
        }
    }
}

Orden^ STPUCPPersistance::Persistance::QueryOrderById(int ordenID)
{
    OrdenListDB = (List<Orden^>^) LoadTextFile(ORDER_FILE_NAME);
    Orden^ orden = nullptr;
    for (int i = 0; i < OrdenListDB->Count; i++) {
        if (OrdenListDB[i]->Id == ordenID) {
            orden = OrdenListDB[i];
            return orden;
        }
    }
    return orden;
}

List<Orden^>^ STPUCPPersistance::Persistance::QueryAllOrders()
{
    OrdenListDB = (List<Orden^>^) LoadTextFile(ORDER_FILE_NAME);
    if (OrdenListDB == nullptr)
        OrdenListDB = gcnew List<Orden^>();
    return OrdenListDB;
}

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
    List<Usuario^>^ UsersList = QueryAllUsers();
    for (int i = 0; i < UsersList->Count; i++) {
        if (UsersList[i]->CodigoPUCP==codigoPucp && UsersList[i]->Contraseña->Equals(password)) {
            return UsersList[i];
        }
    }
}


