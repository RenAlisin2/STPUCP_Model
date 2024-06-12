#include "pch.h"

#include "STPUCP_Admin_Controller.h"
using namespace STPUCPPersistance;

int STPUCPAdminController::controller::AddUser(Usuario^ Usuario)
{
	return Persistance::AddUser(Usuario);
}

void STPUCPAdminController::controller::UpdateUser(Usuario^ Usuario)
{
	Persistance::UpdateUser(Usuario);
}

void STPUCPAdminController::controller::DeleteUser(int UsuarioId)
{
	Persistance::DeleteUser(UsuarioId);
}

Usuario^ STPUCPAdminController::controller::QueryUsersById(int UsuarioID)
{
	return Persistance::QueryUsersById(UsuarioID);
}

List<Usuario^>^ STPUCPAdminController::controller::QueryAllUsers()
{
	return Persistance::QueryAllUsers();
}

int STPUCPAdminController::controller::AddJourney(Viaje^ viaje)
{
	return Persistance::AddJourney(viaje);
}

void STPUCPAdminController::controller::UpdateJourney(Viaje^ viaje)
{
	Persistance::UpdateJourney(viaje);
}

void STPUCPAdminController::controller::DeleteJourney(int ViajeID)
{
	Persistance::DeleteJourney(ViajeID);
}

Viaje^ STPUCPAdminController::controller::QueryJourneysById(int ViajeID)
{
	return Persistance::QueryJourneysById(ViajeID);
}

List<Viaje^>^ STPUCPAdminController::controller::QueryAllJourneys()
{
	return Persistance::QueryAllJourneys();
}

List<Viaje^>^ STPUCPAdminController::controller::QueryViajesByName(String^ name)
{
	List<Viaje^>^ viajesList = Persistance::QueryAllJourneys();
	List<Viaje^>^ listToReturn = gcnew List<Viaje^>();
	for (int i = 0; i < viajesList->Count; i++) {
		if (viajesList[i]->Distrito->Contains(name))
			listToReturn->Add(viajesList[i]);
	}
	return listToReturn;
	
}

List<Viaje^>^ STPUCPAdminController::controller::QueryViajesByIdConductor(int codigo)
{

	List<Viaje^>^ viajesList = Persistance::QueryAllJourneys();
	List<Viaje^>^ listToReturn = gcnew List<Viaje^>();
	for (int i = 0; i < viajesList->Count; i++) {
		if (viajesList[i]->ConductorId==codigo)
			listToReturn->Add(viajesList[i]);
	}
	return listToReturn;
}


int STPUCPAdminController::controller::AddPromotion(Promocion^ promocion)
{
	return Persistance::AddPromotion(promocion);
}

void STPUCPAdminController::controller::UpdatePromotion(Promocion^ promocion)
{
	Persistance::UpdatePromotion(promocion);
}

void STPUCPAdminController::controller::DeletePromotion(int PromocionID)
{
	Persistance::DeletePromotion(PromocionID);
}

Promocion^ STPUCPAdminController::controller::QueryPromotionsById(int PromocionID)
{
	return Persistance::QueryPromotionsById(PromocionID);
}

List<Promocion^>^ STPUCPAdminController::controller::QueryAllPromotions()
{
	return Persistance::QueryAllPromotions();
}

Promocion^ STPUCPAdminController::controller::QueryPromotionsByUsuarioId(int UsuarioID)
{
	List<Promocion^>^ promocionList = Persistance::QueryAllPromotions();
	Promocion^ promocion = nullptr;
	for (int i = 0; i < promocionList->Count; i++) {
		if (promocionList[i]->IdUsuario == UsuarioID) {
			promocion = promocionList[i];
			return promocion;
		}
	}
	return promocion;
}

int STPUCPAdminController::controller::AddOrder(Orden^ orden)
{
	return Persistance::AddOrder(orden);
}

void STPUCPAdminController::controller::UpdateOrder(Orden^ orden)
{
	Persistance::UpdateOrder(orden);
}

void STPUCPAdminController::controller::DeleteOrder(int ordenID)
{
	Persistance::DeleteOrder(ordenID);
}

Orden^ STPUCPAdminController::controller::QueryOrderById(int ordenID)
{
	return Persistance::QueryOrderById(ordenID);
}

List<Orden^>^ STPUCPAdminController::controller::QueryAllOrders()
{
	return Persistance::QueryAllOrders();
}

List<Orden^>^ STPUCPAdminController::controller::QueryOrdenesByIdViajes(int IdViaje)
{
	List<Orden^>^ ordenlist = Persistance::QueryAllOrders();
	List<Orden^>^ listToReturn = gcnew List<Orden^>();
	for (int i = 0; i < ordenlist->Count; i++) {
		if (ordenlist[i]->Id_viaje == IdViaje)
			listToReturn->Add(ordenlist[i]);
	}
	return listToReturn;
}

List<Orden^>^ STPUCPAdminController::controller::QueryOrdersbyDate(String^ month)
{
	List<Orden^>^ ordenList = Persistance::QueryAllOrders();
	List<Orden^>^ listToReturn = gcnew List<Orden^>();
	for (int i = 0; i < ordenList->Count; i++) {
		if (ordenList[i]->Fecha->Substring(3, 2)->Contains(month))
			listToReturn->Add(ordenList[i]);
	}
	return listToReturn;
}

int STPUCPAdminController::controller::AddBL_Pasajero(Pasajero^ BL_Pasajero)
{
	return Persistance::AddBL_Pasajero(BL_Pasajero);
}

void STPUCPAdminController::controller::UpdateBL_Pasajero(Pasajero^ BL_Pasajero)
{
	Persistance::UpdateBL_Pasajero(BL_Pasajero);
}

void STPUCPAdminController::controller::DeleteBL_Pasajero(int BL_PasajeroID)
{
	Persistance::DeleteBL_Pasajero(BL_PasajeroID);
}

Pasajero^ STPUCPAdminController::controller::QueryBL_PasajeroById(int BL_PasajeroID)
{
	return Persistance::QueryBL_PasajeroById(BL_PasajeroID);
}

List<Pasajero^>^ STPUCPAdminController::controller::QueryAllBL_Pasajeros()
{
	return Persistance::QueryAllBL_Pasajeros();
}

int STPUCPAdminController::controller::AddBL_Conductor(Conductor^ BL_Conductor)
{
	return Persistance::AddBL_Conductor(BL_Conductor);
}

void STPUCPAdminController::controller::UpdateBL_Conductor(Conductor^ BL_Conductor)
{
	Persistance::UpdateBL_Conductor(BL_Conductor);
}

void STPUCPAdminController::controller::DeleteBL_Conductor(int BL_ConductorID)
{
	Persistance::DeleteBL_Conductor(BL_ConductorID);
}

Conductor^ STPUCPAdminController::controller::QueryBL_ConductorById(int BL_ConductorID)
{
	return Persistance::QueryBL_ConductorById(BL_ConductorID);
}

List<Conductor^>^ STPUCPAdminController::controller::QueryAllBL_Conductores()
{
	return Persistance::QueryAllBL_Conductores();
}

Usuario^ STPUCPAdminController::controller::ValidarUsuario(int codigoPUCP, String^ password)
{
	return Persistance::ValidarUsuario(codigoPUCP, password);
}

void STPUCPAdminController::controller::OpenPort()
{
	try {
		ArduinoPort = gcnew SerialPort();
		ArduinoPort->PortName = "COM3"; //COMPLETAR CON EL PUERTO
		ArduinoPort->BaudRate = 9600;
		ArduinoPort->Open();

	}
	catch (Exception^ ex) {
		throw ex;
	}
}

void STPUCPAdminController::controller::ClosePort()
{
	try {
		if (ArduinoPort->IsOpen) ArduinoPort->Close();

	}
	catch (Exception^ ex) {
		throw ex;
	}
}

/*
bool^ STPUCPAdminController::controller::GuardarHuella()
{
	bool Result;
	try {
		OpenPort();
		ArduinoPort->Write(Convert::ToInt32(huella));
		Result = ArduinoPort->ReadLine();
	}
	catch(Exception^ ex) {
		throw ex;
	}
	finally {
		ClosePort();
	}
	return Result;
}
*/
