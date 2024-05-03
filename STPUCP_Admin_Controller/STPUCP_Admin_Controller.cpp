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



/*
int STPUCPAdminController::controller::AddViaje(Viaje^ viajecito)
{
	ViajeDB->Add(viajecito);
	return viajecito->Id;

}

int STPUCPAdminController::controller::EliminarViaje(int viajeid)
{
	for (int i = 0; i < ViajeDB->Count; i++) {
		if (ViajeDB[i]->Id == viajeid) {
			ViajeDB->RemoveAt(i);
			return viajeid;
		}
	}
	return 0;

}

int STPUCPAdminController::controller::ModificarViaje(Viaje^ viajecito)
{
	for (int i = 0; i < ViajeDB->Count; i++) {
		if (ViajeDB[i]->Id == viajecito->Id) {
			ViajeDB[i] = viajecito;
			return viajecito->Id;
		}
	}
	return 0;
}

List<Viaje^>^ STPUCPAdminController::controller::consultarViajes()
{
	return ViajeDB;
}



Viaje^ STPUCPAdminController::controller::ConsultarviajeporID(int viajeId)
{
	for (int i = 0; i < ViajeDB->Count; i++) {
		if (ViajeDB[i]->Id == viajeId) {
			return ViajeDB[i];
		}
	}
	return nullptr;
}
*/