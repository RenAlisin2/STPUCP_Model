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

int STPUCPAdminController::controller::AddJourney(Viaje^)
{
	return 0;
}

void STPUCPAdminController::controller::UpdateJourney(Viaje^)
{
	throw gcnew System::NotImplementedException();
}

void STPUCPAdminController::controller::DeleteJourney(int ViajeID)
{
	throw gcnew System::NotImplementedException();
}

Viaje^ STPUCPAdminController::controller::QueryJourneysById(int ViajeID)
{
	throw gcnew System::NotImplementedException();
	// TODO: Insertar una instrucción "return" aquí
}

List<Viaje^>^ STPUCPAdminController::controller::QueryAllJourneys()
{
	throw gcnew System::NotImplementedException();
	// TODO: Insertar una instrucción "return" aquí
}

int STPUCPAdminController::controller::AddPromotion(Promocion^)
{
	return 0;
}

void STPUCPAdminController::controller::UpdatePromotion(Promocion^)
{
	throw gcnew System::NotImplementedException();
}

void STPUCPAdminController::controller::DeletePromotion(int PromocionID)
{
	throw gcnew System::NotImplementedException();
}

Promocion^ STPUCPAdminController::controller::QueryPromotionsById(int PromocionID)
{
	throw gcnew System::NotImplementedException();
	// TODO: Insertar una instrucción "return" aquí
}

List<Promocion^>^ STPUCPAdminController::controller::QueryAllPromotions()
{
	throw gcnew System::NotImplementedException();
	// TODO: Insertar una instrucción "return" aquí
}
