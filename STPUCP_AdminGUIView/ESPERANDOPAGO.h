#pragma once

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
			this->textViaje = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->PasajeroID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->MainApellido = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Precio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Promocion = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvRecepcionPago))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(15, 239);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(380, 70);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Terminar viaje";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(401, 239);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(420, 70);
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
			this->dgvRecepcionPago->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->PasajeroID,
					this->Nombre, this->MainApellido, this->Precio, this->Promocion
			});
			this->dgvRecepcionPago->GridColor = System::Drawing::SystemColors::ControlText;
			this->dgvRecepcionPago->Location = System::Drawing::Point(16, 53);
			this->dgvRecepcionPago->Margin = System::Windows::Forms::Padding(4);
			this->dgvRecepcionPago->Name = L"dgvRecepcionPago";
			this->dgvRecepcionPago->RowHeadersVisible = false;
			this->dgvRecepcionPago->RowHeadersWidth = 51;
			this->dgvRecepcionPago->Size = System::Drawing::Size(805, 165);
			this->dgvRecepcionPago->TabIndex = 2;
			// 
			// textViaje
			// 
			this->textViaje->Location = System::Drawing::Point(176, 13);
			this->textViaje->Name = L"textViaje";
			this->textViaje->Size = System::Drawing::Size(100, 22);
			this->textViaje->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(91, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(52, 16);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Id Viaje";
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
			// ESPERANDOPAGO
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(853, 332);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textViaje);
			this->Controls->Add(this->dgvRecepcionPago);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
					dgvRecepcionPago->Rows->Add(orden->PasajeroId, usuari->Nombre, usuari->ApellidoPaterno, orden->Precio, "si");
				}
				else {
					Usuario^ usuari = controller::QueryUsersById(orden->PasajeroId);
					dgvRecepcionPago->Rows->Add(orden->PasajeroId, usuari->Nombre, usuari->ApellidoPaterno, orden->Precio, "No");
				}
			}
		}
		
	}
private: System::Void ESPERANDOPAGO_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
