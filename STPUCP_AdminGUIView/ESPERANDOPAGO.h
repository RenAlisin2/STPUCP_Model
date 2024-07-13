#pragma once
#include "EsperandoAsistencia.h"

namespace STPUCPAdminGUIView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace STPUCP_Model;
	using namespace STPUCPAdminController;
	using namespace System::Collections::Generic;
	/// <summary>
	/// Resumen de ESPERANDOPAGO
	/// </summary>
	public ref class ESPERANDOPAGO : public System::Windows::Forms::Form
	{
	public:
		ESPERANDOPAGO(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ESPERANDOPAGO()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridView^ dgvRecepcionPago;







	public: System::Windows::Forms::TextBox^ textViaje;
	private:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PasajeroID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ MainApellido;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Precio;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Promocion;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ID_ORDEN;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textId;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ ELIMINAR;

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dgvRecepcionPago = (gcnew System::Windows::Forms::DataGridView());
			this->PasajeroID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->MainApellido = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Precio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Promocion = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ID_ORDEN = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textViaje = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textId = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->ELIMINAR = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvRecepcionPago))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(11, 194);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(285, 57);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Esperar Pasajeros";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ESPERANDOPAGO::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(301, 194);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(315, 57);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Actualizar Lista";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ESPERANDOPAGO::button2_Click);
			// 
			// dgvRecepcionPago
			// 
			this->dgvRecepcionPago->AllowUserToAddRows = false;
			this->dgvRecepcionPago->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			this->dgvRecepcionPago->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvRecepcionPago->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->PasajeroID,
					this->Nombre, this->MainApellido, this->Precio, this->Promocion, this->ID_ORDEN
			});
			this->dgvRecepcionPago->GridColor = System::Drawing::SystemColors::ControlText;
			this->dgvRecepcionPago->Location = System::Drawing::Point(12, 43);
			this->dgvRecepcionPago->Name = L"dgvRecepcionPago";
			this->dgvRecepcionPago->RowHeadersVisible = false;
			this->dgvRecepcionPago->RowHeadersWidth = 51;
			this->dgvRecepcionPago->Size = System::Drawing::Size(604, 134);
			this->dgvRecepcionPago->TabIndex = 2;
			this->dgvRecepcionPago->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ESPERANDOPAGO::dgvRecepcionPago_CellContentClick);
			// 
			// PasajeroID
			// 
			this->PasajeroID->HeaderText = L"Código de Alumno";
			this->PasajeroID->MinimumWidth = 6;
			this->PasajeroID->Name = L"PasajeroID";
			this->PasajeroID->Width = 125;
			// 
			// Nombre
			// 
			this->Nombre->HeaderText = L"Nombre";
			this->Nombre->MinimumWidth = 6;
			this->Nombre->Name = L"Nombre";
			this->Nombre->Width = 125;
			// 
			// MainApellido
			// 
			this->MainApellido->HeaderText = L"Primer Apellido";
			this->MainApellido->MinimumWidth = 6;
			this->MainApellido->Name = L"MainApellido";
			this->MainApellido->Width = 125;
			// 
			// Precio
			// 
			this->Precio->HeaderText = L"Precio pagado";
			this->Precio->MinimumWidth = 6;
			this->Precio->Name = L"Precio";
			this->Precio->Width = 125;
			// 
			// Promocion
			// 
			this->Promocion->HeaderText = L"Hubo Promoción";
			this->Promocion->MinimumWidth = 6;
			this->Promocion->Name = L"Promocion";
			this->Promocion->Width = 125;
			// 
			// ID_ORDEN
			// 
			this->ID_ORDEN->HeaderText = L"ID_ORDEN";
			this->ID_ORDEN->MinimumWidth = 6;
			this->ID_ORDEN->Name = L"ID_ORDEN";
			this->ID_ORDEN->Width = 125;
			// 
			// textViaje
			// 
			this->textViaje->Location = System::Drawing::Point(65, 12);
			this->textViaje->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textViaje->Name = L"textViaje";
			this->textViaje->ReadOnly = true;
			this->textViaje->Size = System::Drawing::Size(76, 20);
			this->textViaje->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(19, 15);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Id Viaje";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(651, 63);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(123, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Ingrese el ID de la orden";
			// 
			// textId
			// 
			this->textId->Location = System::Drawing::Point(642, 86);
			this->textId->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textId->Name = L"textId";
			this->textId->Size = System::Drawing::Size(142, 20);
			this->textId->TabIndex = 6;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(642, 116);
			this->button3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(74, 20);
			this->button3->TabIndex = 7;
			this->button3->Text = L"SI";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &ESPERANDOPAGO::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(720, 117);
			this->button4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(64, 19);
			this->button4->TabIndex = 8;
			this->button4->Text = L"NO";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &ESPERANDOPAGO::button4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(650, 172);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(129, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"¿Desea eliminar la orden\?";
			this->label3->Click += gcnew System::EventHandler(this, &ESPERANDOPAGO::label3_Click);
			// 
			// ELIMINAR
			// 
			this->ELIMINAR->Location = System::Drawing::Point(642, 194);
			this->ELIMINAR->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->ELIMINAR->Name = L"ELIMINAR";
			this->ELIMINAR->Size = System::Drawing::Size(143, 57);
			this->ELIMINAR->TabIndex = 10;
			this->ELIMINAR->Text = L"Eliminar";
			this->ELIMINAR->UseVisualStyleBackColor = true;
			this->ELIMINAR->Click += gcnew System::EventHandler(this, &ESPERANDOPAGO::ELIMINAR_Click);
			// 
			// ESPERANDOPAGO
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(810, 270);
			this->Controls->Add(this->ELIMINAR);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textId);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textViaje);
			this->Controls->Add(this->dgvRecepcionPago);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"ESPERANDOPAGO";
			this->Text = L"Recepcion de Pago";
			this->Load += gcnew System::EventHandler(this, &ESPERANDOPAGO::ESPERANDOPAGO_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvRecepcionPago))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Contexto^ contexto = STPUCP_Model::Contexto::ObtenerInstancia();

		// Obtener la lista de viajes del conductor
		List<Viaje^>^ viajecitoList = controller::QueryViajesByIdConductor(contexto->ObtenerIdUsuario());

		// Inicializar una lista para almacenar todas las órdenes del conductor
		List<Orden^>^ todasOrdenes = controller::QueryOrdenesByIdViajes(Int32::Parse( textViaje->Text));
		Viaje^ viajecito = controller::QueryJourneysById(Int32::Parse(textViaje->Text));


		if (todasOrdenes != nullptr && todasOrdenes->Count > 0) {
			dgvRecepcionPago->Rows->Clear();

			for each (Orden ^ orden in todasOrdenes) {
				if (orden->Precio != viajecito->PrecioViaje) {
					Usuario^ usuari = controller::QueryUsersById(orden->PasajeroId);
					dgvRecepcionPago->Rows->Add(orden->PasajeroId, usuari->Nombre, usuari->ApellidoPaterno, orden->Precio, "si", orden->Id);
				}
				else {
					Usuario^ usuari = controller::QueryUsersById(orden->PasajeroId);
					dgvRecepcionPago->Rows->Add(orden->PasajeroId, usuari->Nombre, usuari->ApellidoPaterno, orden->Precio, "No", orden->Id);
				}
			}
		}
		
	}
private: System::Void ESPERANDOPAGO_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dgvRecepcionPago_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	Orden^ orden = controller::QueryOrdenById(Convert::ToInt32(textId->Text));
	orden->Id = orden->Id;
	orden->Distrito = orden->Distrito;
	orden->Precio = orden->Precio;
	orden->Fecha = orden->Fecha;
	orden->Id_viaje = orden->Id_viaje;
	orden->PasajeroId = orden->PasajeroId;
	orden->OrdenPagada = 1;
	controller::UpdateOrder(orden);
}
private: System::Void ELIMINAR_Click(System::Object^ sender, System::EventArgs^ e) {
	int id = Int32::Parse(textId->Text);
	controller::DeleteOrder(id);
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

	Orden^ orden = controller::QueryOrdenById(Convert::ToInt32(textId->Text));
	orden->Id = orden->Id;
	orden->Distrito = orden->Distrito;
	orden->Precio = orden->Precio;
	orden->Fecha = orden->Fecha;
	orden->Id_viaje = orden->Id_viaje;
	orden->PasajeroId = orden->PasajeroId;
	orden->OrdenPagada = 2;
	controller::UpdateOrder(orden);
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	EsperandoAsistencia^ esperandoAsistencia = gcnew EsperandoAsistencia();
	//this->Close();
	//boletaForm->TopMost = true;
	
	esperandoAsistencia->textviaje->Text = textViaje->Text;
	esperandoAsistencia->ShowDialog();


}
};
}
