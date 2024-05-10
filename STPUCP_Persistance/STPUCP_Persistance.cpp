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

    if (persistObject->GetType() == List<Viaje^>::typeid) {
        List<Viaje^>^ viaje = (List<Viaje^>^) persistObject;
        for (int i = 0; i < viaje->Count; i++) {
            Viaje^ v = viaje[i];
            writer->WriteLine(v->Id + "," + v->HoraSalida + "," + v->FechaViaje + "," + v->DescripcionViaje + "," + v->UltimoParadero + "," + v->PrecioViaje);
        }
    }
    if (persistObject->GetType() == List<Promocion^>::typeid) {
        List<Promocion^>^ promocion = (List<Promocion^>^) persistObject;
        for (int i = 0; i < promocion->Count; i++) {
            Promocion^ p = promocion[i];
            writer->WriteLine(p->Id + "," + p->Porcentaje + "," + p->NombrePromo);
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
                viaje->DescripcionViaje = record[3];
                viaje->UltimoParadero = record[4];
                viaje->PrecioViaje = Convert::ToInt32(record[5]);
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


//CHOFER
int STPUCPPersistance::Persistance::AddViaje(Viaje^ viajecito)
{
    ViajeConductorDB->Add(viajecito);
    PersistTextFile(VIAJECONDUCTOR_FILE_NAME, ViajeConductorDB);
    return 1;
}

void STPUCPPersistance::Persistance::ModificarViaje(Viaje^ viajecito)
{
    for (int i = 0; i < ViajeConductorDB->Count; i++) {
        if (ViajeConductorDB[i]->Id == viajecito->Id) {
            ViajeConductorDB[i] = viajecito;
            PersistTextFile(VIAJECONDUCTOR_FILE_NAME, ViajeConductorDB);
            return;
        }
    }
}

void STPUCPPersistance::Persistance::EliminarViaje(int viajeid)
{
    for (int i = 0; i < PromocionesListDB->Count; i++) {
        if (ViajeConductorDB[i]->Id == viajeid) {
            ViajeConductorDB->RemoveAt(i);
            PersistTextFile(VIAJECONDUCTOR_FILE_NAME, ViajeConductorDB);
            return;
        }
    }
}

Viaje^ STPUCPPersistance::Persistance::ConsultarviajeporID(int viajeId)
{
    ViajeConductorDB = (List<Viaje^>^) LoadTextFile(VIAJECONDUCTOR_FILE_NAME);
    Viaje^ viaje = nullptr;
    for (int i = 0; i < ViajeConductorDB->Count; i++) {
        if (ViajeConductorDB[i]->Id == viajeId) {
            viaje = ViajeConductorDB[i];
            return viaje;
        }
    }
    return viaje;
}

List<Viaje^>^ STPUCPPersistance::Persistance::consultarViajes()
{
    ViajeConductorDB = (List<Viaje^>^) LoadTextFile(VIAJECONDUCTOR_FILE_NAME);
    if (ViajeConductorDB == nullptr)
        ViajeConductorDB = gcnew List<Viaje^>();
    return ViajeConductorDB;
}
