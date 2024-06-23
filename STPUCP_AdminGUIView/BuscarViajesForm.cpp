#include "pch.h"
#include "BuscarViajesForm.h"
#include "PasajeroRutaForm.h"

System::Void STPUCPAdminGUIView::BuscarViajesForm::DGVBuscar_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
    int viajeID = Convert::ToInt32(DGVBuscar->Rows[DGVBuscar->SelectedCells[0]->RowIndex]->Cells[0]->Value);
    Viaje^ viaje = controller:: QueryJourneysById(viajeID);

    int condcutorid = viaje->ConductorId;
    Usuario^ Usuario = controller::QueryUsersById(condcutorid);
    Conductor^ conductor = dynamic_cast<Conductor^>(Usuario);
    int asientos_disponibles = conductor->CantAsientos;
   


    if (asientos_disponibles >controller::QueryOrdenesByIdViajes(viajeID)->Count) {



        if (refForm->GetType() == PasajeroRutaForm::typeid)
            ((PasajeroRutaForm^)refForm)->AddJourneyToGrid(viaje);
        this->Close();
    }
    else {
        MessageBox::Show("Este viaje se encuentra lleno");
    }
}
