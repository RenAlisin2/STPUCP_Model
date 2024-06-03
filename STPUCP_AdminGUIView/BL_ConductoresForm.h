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
	/// Resumen de BL_ConductoresForm
	/// </summary>
	public ref class BL_ConductoresForm : public System::Windows::Forms::Form
	{
	public:
		BL_ConductoresForm(void)
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
		~BL_ConductoresForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtMotivoBan;
	protected:

	protected:
	private: System::Windows::Forms::Label^ lblPrecio;
	private: System::Windows::Forms::TextBox^ txtApellidoMaterno;

	private: System::Windows::Forms::Label^ lblUltimoParadero;
	private: System::Windows::Forms::TextBox^ txtApellidoPaterno;

	private: System::Windows::Forms::Label^ lblFechaViaje;
	private: System::Windows::Forms::TextBox^ txtNombre;
	private: System::Windows::Forms::DataGridView^ dgvBLConductores;







	private: System::Windows::Forms::Button^ btnEliminar;
	private: System::Windows::Forms::Button^ btnModificar;
	private: System::Windows::Forms::Button^ btnAgregar;
	private: System::Windows::Forms::TextBox^ txtId;
	private: System::Windows::Forms::Label^ lblHSalida;
	private: System::Windows::Forms::Label^ lblId;
	private: System::Windows::Forms::Label^ Id;
	private: System::Windows::Forms::TextBox^ textTiempoPenalizacion;








	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ BLConductoresID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Distrito;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ApellidoPaterno;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ApellidoMaterno;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Precio;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ TiempoPenalizacion;

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
			this->txtMotivoBan = (gcnew System::Windows::Forms::TextBox());
			this->lblPrecio = (gcnew System::Windows::Forms::Label());
			this->txtApellidoMaterno = (gcnew System::Windows::Forms::TextBox());
			this->lblUltimoParadero = (gcnew System::Windows::Forms::Label());
			this->txtApellidoPaterno = (gcnew System::Windows::Forms::TextBox());
			this->lblFechaViaje = (gcnew System::Windows::Forms::Label());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->dgvBLConductores = (gcnew System::Windows::Forms::DataGridView());
			this->btnEliminar = (gcnew System::Windows::Forms::Button());
			this->btnModificar = (gcnew System::Windows::Forms::Button());
			this->btnAgregar = (gcnew System::Windows::Forms::Button());
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			this->lblHSalida = (gcnew System::Windows::Forms::Label());
			this->lblId = (gcnew System::Windows::Forms::Label());
			this->Id = (gcnew System::Windows::Forms::Label());
			this->textTiempoPenalizacion = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->BLConductoresID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Distrito = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ApellidoPaterno = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ApellidoMaterno = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Precio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TiempoPenalizacion = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvBLConductores))->BeginInit();
			this->SuspendLayout();
			// 
			// txtMotivoBan
			// 
			this->txtMotivoBan->Location = System::Drawing::Point(153, 131);
			this->txtMotivoBan->Name = L"txtMotivoBan";
			this->txtMotivoBan->Size = System::Drawing::Size(140, 20);
			this->txtMotivoBan->TabIndex = 63;
			// 
			// lblPrecio
			// 
			this->lblPrecio->AutoSize = true;
			this->lblPrecio->Location = System::Drawing::Point(11, 138);
			this->lblPrecio->Name = L"lblPrecio";
			this->lblPrecio->Size = System::Drawing::Size(91, 13);
			this->lblPrecio->TabIndex = 62;
			this->lblPrecio->Text = L"Motivo de Baneo:";
			// 
			// txtApellidoMaterno
			// 
			this->txtApellidoMaterno->Location = System::Drawing::Point(153, 101);
			this->txtApellidoMaterno->Name = L"txtApellidoMaterno";
			this->txtApellidoMaterno->Size = System::Drawing::Size(140, 20);
			this->txtApellidoMaterno->TabIndex = 61;
			// 
			// lblUltimoParadero
			// 
			this->lblUltimoParadero->AutoSize = true;
			this->lblUltimoParadero->Location = System::Drawing::Point(11, 109);
			this->lblUltimoParadero->Name = L"lblUltimoParadero";
			this->lblUltimoParadero->Size = System::Drawing::Size(89, 13);
			this->lblUltimoParadero->TabIndex = 60;
			this->lblUltimoParadero->Text = L"Apellido Materno:";
			// 
			// txtApellidoPaterno
			// 
			this->txtApellidoPaterno->Location = System::Drawing::Point(153, 75);
			this->txtApellidoPaterno->Name = L"txtApellidoPaterno";
			this->txtApellidoPaterno->Size = System::Drawing::Size(140, 20);
			this->txtApellidoPaterno->TabIndex = 59;
			// 
			// lblFechaViaje
			// 
			this->lblFechaViaje->AutoSize = true;
			this->lblFechaViaje->Location = System::Drawing::Point(11, 82);
			this->lblFechaViaje->Name = L"lblFechaViaje";
			this->lblFechaViaje->Size = System::Drawing::Size(87, 13);
			this->lblFechaViaje->TabIndex = 58;
			this->lblFechaViaje->Text = L"Apellido Paterno:";
			// 
			// txtNombre
			// 
			this->txtNombre->Location = System::Drawing::Point(153, 49);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(140, 20);
			this->txtNombre->TabIndex = 57;
			// 
			// dgvBLConductores
			// 
			this->dgvBLConductores->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvBLConductores->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->BLConductoresID,
					this->Distrito, this->ApellidoPaterno, this->ApellidoMaterno, this->Precio, this->TiempoPenalizacion
			});
			this->dgvBLConductores->Location = System::Drawing::Point(19, 260);
			this->dgvBLConductores->Name = L"dgvBLConductores";
			this->dgvBLConductores->Size = System::Drawing::Size(440, 253);
			this->dgvBLConductores->TabIndex = 56;
			// 
			// btnEliminar
			// 
			this->btnEliminar->Location = System::Drawing::Point(335, 211);
			this->btnEliminar->Name = L"btnEliminar";
			this->btnEliminar->Size = System::Drawing::Size(75, 23);
			this->btnEliminar->TabIndex = 55;
			this->btnEliminar->Text = L"Eliminar";
			this->btnEliminar->UseVisualStyleBackColor = true;
			this->btnEliminar->Click += gcnew System::EventHandler(this, &BL_ConductoresForm::btnEliminar_Click);
			// 
			// btnModificar
			// 
			this->btnModificar->Location = System::Drawing::Point(219, 211);
			this->btnModificar->Name = L"btnModificar";
			this->btnModificar->Size = System::Drawing::Size(75, 23);
			this->btnModificar->TabIndex = 54;
			this->btnModificar->Text = L"Modificar";
			this->btnModificar->UseVisualStyleBackColor = true;
			this->btnModificar->Click += gcnew System::EventHandler(this, &BL_ConductoresForm::btnModificar_Click);
			// 
			// btnAgregar
			// 
			this->btnAgregar->Location = System::Drawing::Point(102, 211);
			this->btnAgregar->Name = L"btnAgregar";
			this->btnAgregar->Size = System::Drawing::Size(75, 23);
			this->btnAgregar->TabIndex = 53;
			this->btnAgregar->Text = L"Agregar";
			this->btnAgregar->UseVisualStyleBackColor = true;
			this->btnAgregar->Click += gcnew System::EventHandler(this, &BL_ConductoresForm::btnAgregar_Click);
			// 
			// txtId
			// 
			this->txtId->Location = System::Drawing::Point(153, 20);
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(64, 20);
			this->txtId->TabIndex = 52;
			// 
			// lblHSalida
			// 
			this->lblHSalida->AutoSize = true;
			this->lblHSalida->Location = System::Drawing::Point(11, 53);
			this->lblHSalida->Name = L"lblHSalida";
			this->lblHSalida->Size = System::Drawing::Size(47, 13);
			this->lblHSalida->TabIndex = 51;
			this->lblHSalida->Text = L"Nombre:";
			// 
			// lblId
			// 
			this->lblId->AutoSize = true;
			this->lblId->Location = System::Drawing::Point(-19, 2);
			this->lblId->Name = L"lblId";
			this->lblId->Size = System::Drawing::Size(19, 13);
			this->lblId->TabIndex = 50;
			this->lblId->Text = L"Id:";
			// 
			// Id
			// 
			this->Id->AutoSize = true;
			this->Id->Location = System::Drawing::Point(14, 26);
			this->Id->Name = L"Id";
			this->Id->Size = System::Drawing::Size(72, 13);
			this->Id->TabIndex = 64;
			this->Id->Text = L"CodigoPUCP:";
			// 
			// textTiempoPenalizacion
			// 
			this->textTiempoPenalizacion->Location = System::Drawing::Point(153, 160);
			this->textTiempoPenalizacion->Name = L"textTiempoPenalizacion";
			this->textTiempoPenalizacion->Size = System::Drawing::Size(140, 20);
			this->textTiempoPenalizacion->TabIndex = 66;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(11, 163);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(123, 26);
			this->label1->TabIndex = 84;
			this->label1->Text = L"Tiempo de Penalización:\r\n(Días)";
			// 
			// BLConductoresID
			// 
			this->BLConductoresID->HeaderText = L"CodigoPUCP";
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
			// BL_ConductoresForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(483, 529);
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
			this->Controls->Add(this->dgvBLConductores);
			this->Controls->Add(this->btnEliminar);
			this->Controls->Add(this->btnModificar);
			this->Controls->Add(this->btnAgregar);
			this->Controls->Add(this->txtId);
			this->Controls->Add(this->lblHSalida);
			this->Controls->Add(this->lblId);
			this->Name = L"BL_ConductoresForm";
			this->Text = L"BL_ConductoresForm";
			this->Load += gcnew System::EventHandler(this, &BL_ConductoresForm::BL_ConductoresForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvBLConductores))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void btnAgregar_Click(System::Object^ sender, System::EventArgs^ e) {
	STPUCP_Model::Conductor^ BLConductor = gcnew STPUCP_Model::Conductor();
	BLConductor->CodigoPUCP = Int32::Parse(txtId->Text);
	BLConductor->Nombre = txtNombre->Text;
	BLConductor->ApellidoPaterno = txtApellidoPaterno->Text;
	BLConductor->ApellidoMaterno = txtApellidoMaterno->Text;
	BLConductor->MotivoBan = txtMotivoBan->Text;
	BLConductor->TiempoPenalizacion = Int32::Parse(textTiempoPenalizacion->Text);
	BLConductor->ListaNegra = true;
	STPUCPAdminController::controller::AddBL_Conductor(BLConductor);
	RefreshGrid();
}

	   void RefreshGrid() {
		   List<Conductor^>^ BLConductorList = controller::QueryAllBL_Conductores();
		   dgvBLConductores->Rows->Clear();
		   for (int i = 0; i < BLConductorList->Count; i++) {
			   Conductor^ BLConductor = BLConductorList[i];
			   dgvBLConductores->Rows->Add(gcnew array<String^> {"" + BLConductor->CodigoPUCP, BLConductor->Nombre, BLConductor-> ApellidoPaterno, BLConductor-> ApellidoMaterno, BLConductor->MotivoBan, "" + BLConductor->TiempoPenalizacion});
		   }
	   }
private: System::Void btnModificar_Click(System::Object^ sender, System::EventArgs^ e) {
	Conductor^ BLConductor = gcnew STPUCP_Model::Conductor();
	BLConductor->CodigoPUCP = Int32::Parse(txtId->Text);
	BLConductor->Nombre = txtNombre->Text;
	BLConductor->ApellidoPaterno = txtApellidoPaterno->Text;
	BLConductor->ApellidoMaterno = txtApellidoMaterno->Text;
	BLConductor->MotivoBan = txtMotivoBan->Text;
	BLConductor->TiempoPenalizacion = Int32::Parse(textTiempoPenalizacion->Text);

	controller::UpdateBL_Conductor(BLConductor);
	RefreshGrid();
}
private: System::Void btnEliminar_Click(System::Object^ sender, System::EventArgs^ e) {
	int codigopucp = Int32::Parse(txtId->Text);
	controller::DeleteBL_Conductor(codigopucp);
	RefreshGrid();
}
private: System::Void BL_ConductoresForm_Load(System::Object^ sender, System::EventArgs^ e) {
	RefreshGrid();
}
};
}
