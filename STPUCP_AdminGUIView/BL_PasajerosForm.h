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
	/// Resumen de BL_PasajerosForm
	/// </summary>
	public ref class BL_PasajerosForm : public System::Windows::Forms::Form
	{
	public:
		BL_PasajerosForm(void)
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
		~BL_PasajerosForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textTiempoPenalizacion;
	protected:

	private: System::Windows::Forms::Label^ Id;
	private: System::Windows::Forms::TextBox^ txtMotivoBan;
	private: System::Windows::Forms::Label^ lblPrecio;
	private: System::Windows::Forms::TextBox^ txtApellidoMaterno;
	private: System::Windows::Forms::Label^ lblUltimoParadero;
	private: System::Windows::Forms::TextBox^ txtApellidoPaterno;
	private: System::Windows::Forms::Label^ lblFechaViaje;
	private: System::Windows::Forms::TextBox^ txtNombre;
	private: System::Windows::Forms::DataGridView^ dgvBLPasajeros;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ BLConductoresID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Distrito;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ApellidoPaterno;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ApellidoMaterno;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Precio;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ TiempoPenalizacion;
	private: System::Windows::Forms::Button^ btnEliminar;
	private: System::Windows::Forms::Button^ btnModificar;
	private: System::Windows::Forms::Button^ btnAgregar;
	private: System::Windows::Forms::TextBox^ txtId;
	private: System::Windows::Forms::Label^ lblHSalida;
	private: System::Windows::Forms::Label^ label1;

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
			this->textTiempoPenalizacion = (gcnew System::Windows::Forms::TextBox());
			this->Id = (gcnew System::Windows::Forms::Label());
			this->txtMotivoBan = (gcnew System::Windows::Forms::TextBox());
			this->lblPrecio = (gcnew System::Windows::Forms::Label());
			this->txtApellidoMaterno = (gcnew System::Windows::Forms::TextBox());
			this->lblUltimoParadero = (gcnew System::Windows::Forms::Label());
			this->txtApellidoPaterno = (gcnew System::Windows::Forms::TextBox());
			this->lblFechaViaje = (gcnew System::Windows::Forms::Label());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->dgvBLPasajeros = (gcnew System::Windows::Forms::DataGridView());
			this->BLConductoresID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Distrito = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ApellidoPaterno = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ApellidoMaterno = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Precio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TiempoPenalizacion = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnEliminar = (gcnew System::Windows::Forms::Button());
			this->btnModificar = (gcnew System::Windows::Forms::Button());
			this->btnAgregar = (gcnew System::Windows::Forms::Button());
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			this->lblHSalida = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvBLPasajeros))->BeginInit();
			this->SuspendLayout();
			// 
			// textTiempoPenalizacion
			// 
			this->textTiempoPenalizacion->Location = System::Drawing::Point(145, 155);
			this->textTiempoPenalizacion->Name = L"textTiempoPenalizacion";
			this->textTiempoPenalizacion->Size = System::Drawing::Size(140, 20);
			this->textTiempoPenalizacion->TabIndex = 82;
			// 
			// Id
			// 
			this->Id->AutoSize = true;
			this->Id->Location = System::Drawing::Point(12, 22);
			this->Id->Name = L"Id";
			this->Id->Size = System::Drawing::Size(21, 13);
			this->Id->TabIndex = 80;
			this->Id->Text = L"ID:";
			// 
			// txtMotivoBan
			// 
			this->txtMotivoBan->Location = System::Drawing::Point(145, 126);
			this->txtMotivoBan->Name = L"txtMotivoBan";
			this->txtMotivoBan->Size = System::Drawing::Size(140, 20);
			this->txtMotivoBan->TabIndex = 79;
			// 
			// lblPrecio
			// 
			this->lblPrecio->AutoSize = true;
			this->lblPrecio->Location = System::Drawing::Point(9, 134);
			this->lblPrecio->Name = L"lblPrecio";
			this->lblPrecio->Size = System::Drawing::Size(91, 13);
			this->lblPrecio->TabIndex = 78;
			this->lblPrecio->Text = L"Motivo de Baneo:";
			// 
			// txtApellidoMaterno
			// 
			this->txtApellidoMaterno->Location = System::Drawing::Point(145, 96);
			this->txtApellidoMaterno->Name = L"txtApellidoMaterno";
			this->txtApellidoMaterno->Size = System::Drawing::Size(140, 20);
			this->txtApellidoMaterno->TabIndex = 77;
			// 
			// lblUltimoParadero
			// 
			this->lblUltimoParadero->AutoSize = true;
			this->lblUltimoParadero->Location = System::Drawing::Point(9, 105);
			this->lblUltimoParadero->Name = L"lblUltimoParadero";
			this->lblUltimoParadero->Size = System::Drawing::Size(89, 13);
			this->lblUltimoParadero->TabIndex = 76;
			this->lblUltimoParadero->Text = L"Apellido Materno:";
			// 
			// txtApellidoPaterno
			// 
			this->txtApellidoPaterno->Location = System::Drawing::Point(145, 70);
			this->txtApellidoPaterno->Name = L"txtApellidoPaterno";
			this->txtApellidoPaterno->Size = System::Drawing::Size(140, 20);
			this->txtApellidoPaterno->TabIndex = 75;
			// 
			// lblFechaViaje
			// 
			this->lblFechaViaje->AutoSize = true;
			this->lblFechaViaje->Location = System::Drawing::Point(9, 78);
			this->lblFechaViaje->Name = L"lblFechaViaje";
			this->lblFechaViaje->Size = System::Drawing::Size(87, 13);
			this->lblFechaViaje->TabIndex = 74;
			this->lblFechaViaje->Text = L"Apellido Paterno:";
			// 
			// txtNombre
			// 
			this->txtNombre->Location = System::Drawing::Point(145, 44);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(140, 20);
			this->txtNombre->TabIndex = 73;
			// 
			// dgvBLPasajeros
			// 
			this->dgvBLPasajeros->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvBLPasajeros->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->BLConductoresID,
					this->Distrito, this->ApellidoPaterno, this->ApellidoMaterno, this->Precio, this->TiempoPenalizacion
			});
			this->dgvBLPasajeros->Location = System::Drawing::Point(17, 256);
			this->dgvBLPasajeros->Name = L"dgvBLPasajeros";
			this->dgvBLPasajeros->Size = System::Drawing::Size(440, 253);
			this->dgvBLPasajeros->TabIndex = 72;
			// 
			// BLConductoresID
			// 
			this->BLConductoresID->HeaderText = L"ID";
			this->BLConductoresID->Name = L"BLConductoresID";
			this->BLConductoresID->Width = 50;
			// 
			// Distrito
			// 
			this->Distrito->HeaderText = L"Nombre";
			this->Distrito->Name = L"Distrito";
			// 
			// ApellidoPaterno
			// 
			this->ApellidoPaterno->HeaderText = L"Apellido Paterno";
			this->ApellidoPaterno->Name = L"ApellidoPaterno";
			// 
			// ApellidoMaterno
			// 
			this->ApellidoMaterno->HeaderText = L"Apellido Materno";
			this->ApellidoMaterno->Name = L"ApellidoMaterno";
			// 
			// Precio
			// 
			this->Precio->HeaderText = L"Motivo de Baneo";
			this->Precio->Name = L"Precio";
			// 
			// TiempoPenalizacion
			// 
			this->TiempoPenalizacion->HeaderText = L"Tiempo de penalización";
			this->TiempoPenalizacion->Name = L"TiempoPenalizacion";
			// 
			// btnEliminar
			// 
			this->btnEliminar->Location = System::Drawing::Point(333, 207);
			this->btnEliminar->Name = L"btnEliminar";
			this->btnEliminar->Size = System::Drawing::Size(75, 23);
			this->btnEliminar->TabIndex = 71;
			this->btnEliminar->Text = L"Eliminar";
			this->btnEliminar->UseVisualStyleBackColor = true;
			this->btnEliminar->Click += gcnew System::EventHandler(this, &BL_PasajerosForm::btnEliminar_Click);
			// 
			// btnModificar
			// 
			this->btnModificar->Location = System::Drawing::Point(217, 207);
			this->btnModificar->Name = L"btnModificar";
			this->btnModificar->Size = System::Drawing::Size(75, 23);
			this->btnModificar->TabIndex = 70;
			this->btnModificar->Text = L"Modificar";
			this->btnModificar->UseVisualStyleBackColor = true;
			this->btnModificar->Click += gcnew System::EventHandler(this, &BL_PasajerosForm::btnModificar_Click);
			// 
			// btnAgregar
			// 
			this->btnAgregar->Location = System::Drawing::Point(100, 207);
			this->btnAgregar->Name = L"btnAgregar";
			this->btnAgregar->Size = System::Drawing::Size(75, 23);
			this->btnAgregar->TabIndex = 69;
			this->btnAgregar->Text = L"Agregar";
			this->btnAgregar->UseVisualStyleBackColor = true;
			this->btnAgregar->Click += gcnew System::EventHandler(this, &BL_PasajerosForm::btnAgregar_Click);
			// 
			// txtId
			// 
			this->txtId->Location = System::Drawing::Point(145, 15);
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(64, 20);
			this->txtId->TabIndex = 68;
			// 
			// lblHSalida
			// 
			this->lblHSalida->AutoSize = true;
			this->lblHSalida->Location = System::Drawing::Point(9, 49);
			this->lblHSalida->Name = L"lblHSalida";
			this->lblHSalida->Size = System::Drawing::Size(47, 13);
			this->lblHSalida->TabIndex = 67;
			this->lblHSalida->Text = L"Nombre:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 155);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(123, 26);
			this->label1->TabIndex = 83;
			this->label1->Text = L"Tiempo de Penalización:\r\n(Días)";
			// 
			// BL_PasajerosForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(479, 527);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textTiempoPenalizacion);
			this->Controls->Add(this->Id);
			this->Controls->Add(this->txtMotivoBan);
			this->Controls->Add(this->lblPrecio);
			this->Controls->Add(this->txtApellidoMaterno);
			this->Controls->Add(this->lblUltimoParadero);
			this->Controls->Add(this->txtApellidoPaterno);
			this->Controls->Add(this->lblFechaViaje);
			this->Controls->Add(this->txtNombre);
			this->Controls->Add(this->dgvBLPasajeros);
			this->Controls->Add(this->btnEliminar);
			this->Controls->Add(this->btnModificar);
			this->Controls->Add(this->btnAgregar);
			this->Controls->Add(this->txtId);
			this->Controls->Add(this->lblHSalida);
			this->Name = L"BL_PasajerosForm";
			this->Text = L"BL_PasajerosForm";
			this->Load += gcnew System::EventHandler(this, &BL_PasajerosForm::BL_PasajerosForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvBLPasajeros))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnAgregar_Click(System::Object^ sender, System::EventArgs^ e) {
		STPUCP_Model::Pasajero^ BLPasajero = gcnew STPUCP_Model::Pasajero();
		BLPasajero->Id = Int32::Parse(txtId->Text);
		BLPasajero->Nombre = txtNombre->Text;
		BLPasajero->ApellidoPaterno = txtApellidoPaterno->Text;
		BLPasajero->ApellidoMaterno = txtApellidoMaterno->Text;
		BLPasajero->MotivoBan = txtMotivoBan->Text;
		BLPasajero->TiempoPenalizacion = Int32::Parse(textTiempoPenalizacion->Text);
		BLPasajero->ListaNegra = true;

		STPUCPAdminController::controller::AddBL_Pasajero(BLPasajero);
		RefreshGrid();
	}

		   void RefreshGrid() {
			   List<Pasajero^>^ BLPasajeroList = controller::QueryAllBL_Pasajeros();
			   dgvBLPasajeros->Rows->Clear();
			   for (int i = 0; i < BLPasajeroList->Count; i++) {
				   Pasajero^ BLPasajero = BLPasajeroList[i];
				   dgvBLPasajeros->Rows->Add(gcnew array<String^> {"" + BLPasajero->Id, BLPasajero->Nombre, BLPasajero->ApellidoPaterno, BLPasajero->ApellidoMaterno, BLPasajero->MotivoBan, "" + BLPasajero->TiempoPenalizacion});
			   }
		   }
private: System::Void btnModificar_Click(System::Object^ sender, System::EventArgs^ e) {
	Pasajero^ BLPasajero = gcnew STPUCP_Model::Pasajero();
	BLPasajero->Id = Int32::Parse(txtId->Text);
	BLPasajero->Nombre = txtNombre->Text;
	BLPasajero->ApellidoPaterno = txtApellidoPaterno->Text;
	BLPasajero->ApellidoMaterno = txtApellidoMaterno->Text;
	BLPasajero->MotivoBan = txtMotivoBan->Text;
	BLPasajero->TiempoPenalizacion = Int32::Parse(textTiempoPenalizacion->Text);

	controller::UpdateBL_Pasajero(BLPasajero);
	RefreshGrid();
}
private: System::Void btnEliminar_Click(System::Object^ sender, System::EventArgs^ e) {
	int id = Int32::Parse(txtId->Text);
	controller::DeleteBL_Pasajero(id);
	RefreshGrid();
}
private: System::Void BL_PasajerosForm_Load(System::Object^ sender, System::EventArgs^ e) {
	RefreshGrid();
}
};
}
