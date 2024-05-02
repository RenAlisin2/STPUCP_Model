#include "pch.h"
#include "STPUCP_SERVICE.h"







int STPUCP_SERVICE::Service::AddViaje(Viaje^ viajecito)
{
	ViajeDB->Add(viajecito);
	return viajecito->Id;

}

int STPUCP_SERVICE::Service::EliminarViaje(int viajeid)
{
	for (int i = 0; i < ViajeDB->Count; i++) {
		if (ViajeDB[i]->Id == viajeid) {
			ViajeDB->RemoveAt(i);
			return viajeid;
		}
	}
	return 0;

}

int STPUCP_SERVICE::Service::ModificarViaje(Viaje ^viajecito)
{
	for (int i = 0; i < ViajeDB->Count; i++) {
		if (ViajeDB[i]->Id == viajecito->Id) {
			ViajeDB[i] = viajecito;
			return viajecito->Id;
		}
	}
	return 0;
}

List<Viaje^>^ STPUCP_SERVICE::Service::consultarViajes()
{
	return ViajeDB;
}



Viaje^ STPUCP_SERVICE::Service::ConsultarviajeporID(int viajeId)
{
	for (int i = 0; i < ViajeDB->Count; i++) {
		if (ViajeDB[i]->Id == viajeId) {
			return ViajeDB[i];
		}
	}
	return nullptr;
}
