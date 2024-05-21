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
	//
}

void STPUCPAdminController::controller::DeleteUser(int UsuarioID)
{
	Persistance::DeleteUser(UsuarioID);
}

Usuario^ STPUCPAdminController::controller::QueryUsersById(int UsuarioId)
{
	return Persistance::QueryUsersById(UsuarioId);
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




int STPUCPAdminController::controller::AddViaje(Viaje^ viajecito)
{
	
	return Persistance::AddViaje(viajecito);

}

void STPUCPAdminController::controller::EliminarViaje(int viajeid)
{
	return Persistance::EliminarViaje(viajeid);

}

void STPUCPAdminController::controller::ModificarViaje(Viaje^ viajecito)
{
	return Persistance::ModificarViaje(viajecito);
}

List<Viaje^>^ STPUCPAdminController::controller::consultarViajes()
{
	return Persistance::consultarViajes();
}



Viaje^ STPUCPAdminController::controller::ConsultarviajeporID(int viajeId)
{
	return Persistance::ConsultarviajeporID(viajeId);
}
