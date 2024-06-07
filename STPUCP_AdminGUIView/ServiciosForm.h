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
	/// Resumen de ServiciosForm
	/// </summary>
	public ref class ServiciosForm : public System::Windows::Forms::Form
	{
	public:
		ServiciosForm(void)
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
		~ServiciosForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ txtUltimoParadero;

	private: System::Windows::Forms::Label^ lblUltimoParadero;

	private: System::Windows::Forms::TextBox^ txtDescripcion;

	private: System::Windows::Forms::TextBox^ txtFechaViaje;
	private: System::Windows::Forms::Label^ lblDescripcion;




	private: System::Windows::Forms::Label^ lblFechaViaje;



	private: System::Windows::Forms::TextBox^ txtHoraSalida;
	private: System::Windows::Forms::DataGridView^ dgvServicios;







	private: System::Windows::Forms::Button^ btnEliminar;
	private: System::Windows::Forms::Button^ btnModificar;
	private: System::Windows::Forms::Button^ btnAgregar;
	private: System::Windows::Forms::TextBox^ txtId;
	private: System::Windows::Forms::Label^ lblHSalida;

	private: System::Windows::Forms::Label^ lblId;






	private: System::Windows::Forms::Label^ lblPrecio;
	private: System::Windows::Forms::TextBox^ txtPrecio;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ UsuarioID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ HoraSalida;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ FechaViaje;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Descripcion;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ UltimParadero;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Precio;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Distrito;


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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->txtUltimoParadero = (gcnew System::Windows::Forms::TextBox());
			this->lblUltimoParadero = (gcnew System::Windows::Forms::Label());
			this->txtDescripcion = (gcnew System::Windows::Forms::TextBox());
			this->txtFechaViaje = (gcnew System::Windows::Forms::TextBox());
			this->lblDescripcion = (gcnew System::Windows::Forms::Label());
			this->lblFechaViaje = (gcnew System::Windows::Forms::Label());
			this->txtHoraSalida = (gcnew System::Windows::Forms::TextBox());
			this->dgvServicios = (gcnew System::Windows::Forms::DataGridView());
			this->UsuarioID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->HoraSalida = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->FechaViaje = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Distrito = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->UltimParadero = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Precio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnEliminar = (gcnew System::Windows::Forms::Button());
			this->btnModificar = (gcnew System::Windows::Forms::Button());
			this->btnAgregar = (gcnew System::Windows::Forms::Button());
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			this->lblHSalida = (gcnew System::Windows::Forms::Label());
			this->lblId = (gcnew System::Windows::Forms::Label());
			this->lblPrecio = (gcnew System::Windows::Forms::Label());
			this->txtPrecio = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvServicios))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->AllowMerge = false;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->archivoToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(608, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->salirToolStripMenuItem });
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(96, 22);
			this->salirToolStripMenuItem->Text = L"Salir";
			// 
			// txtUltimoParadero
			// 
			this->txtUltimoParadero->Location = System::Drawing::Point(142, 150);
			this->txtUltimoParadero->Name = L"txtUltimoParadero";
			this->txtUltimoParadero->Size = System::Drawing::Size(140, 20);
			this->txtUltimoParadero->TabIndex = 31;
			// 
			// lblUltimoParadero
			// 
			this->lblUltimoParadero->AutoSize = true;
			this->lblUltimoParadero->Location = System::Drawing::Point(25, 150);
			this->lblUltimoParadero->Name = L"lblUltimoParadero";
			this->lblUltimoParadero->Size = System::Drawing::Size(85, 13);
			this->lblUltimoParadero->TabIndex = 30;
			this->lblUltimoParadero->Text = L"Ultimo Paradero:";
			// 
			// txtDescripcion
			// 
			this->txtDescripcion->Location = System::Drawing::Point(142, 120);
			this->txtDescripcion->Name = L"txtDescripcion";
			this->txtDescripcion->Size = System::Drawing::Size(140, 20);
			this->txtDescripcion->TabIndex = 29;
			// 
			// txtFechaViaje
			// 
			this->txtFechaViaje->Location = System::Drawing::Point(142, 90);
			this->txtFechaViaje->Name = L"txtFechaViaje";
			this->txtFechaViaje->Size = System::Drawing::Size(140, 20);
			this->txtFechaViaje->TabIndex = 28;
			// 
			// lblDescripcion
			// 
			this->lblDescripcion->AutoSize = true;
			this->lblDescripcion->Location = System::Drawing::Point(25, 120);
			this->lblDescripcion->Name = L"lblDescripcion";
			this->lblDescripcion->Size = System::Drawing::Size(42, 13);
			this->lblDescripcion->TabIndex = 27;
			this->lblDescripcion->Text = L"Distrito:";
			// 
			// lblFechaViaje
			// 
			this->lblFechaViaje->AutoSize = true;
			this->lblFechaViaje->Location = System::Drawing::Point(25, 93);
			this->lblFechaViaje->Name = L"lblFechaViaje";
			this->lblFechaViaje->Size = System::Drawing::Size(81, 13);
			this->lblFechaViaje->TabIndex = 26;
			this->lblFechaViaje->Text = L"Fecha de Viaje:";
			// 
			// txtHoraSalida
			// 
			this->txtHoraSalida->Location = System::Drawing::Point(142, 61);
			this->txtHoraSalida->Name = L"txtHoraSalida";
			this->txtHoraSalida->Size = System::Drawing::Size(140, 20);
			this->txtHoraSalida->TabIndex = 25;
			// 
			// dgvServicios
			// 
			this->dgvServicios->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvServicios->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->UsuarioID,
					this->HoraSalida, this->FechaViaje, this->Distrito, this->UltimParadero, this->Precio
			});
			this->dgvServicios->Location = System::Drawing::Point(20, 265);
			this->dgvServicios->Name = L"dgvServicios";
			this->dgvServicios->RowHeadersWidth = 51;
			this->dgvServicios->Size = System::Drawing::Size(580, 253);
			this->dgvServicios->TabIndex = 24;
			this->dgvServicios->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ServiciosForm::dgvServicios_CellClick);
			// 
			// UsuarioID
			// 
			this->UsuarioID->HeaderText = L"ID";
			this->UsuarioID->MinimumWidth = 6;
			this->UsuarioID->Name = L"UsuarioID";
			this->UsuarioID->Width = 50;
			// 
			// HoraSalida
			// 
			this->HoraSalida->HeaderText = L"Hora de Salida";
			this->HoraSalida->MinimumWidth = 6;
			this->HoraSalida->Name = L"HoraSalida";
			this->HoraSalida->Width = 125;
			// 
			// FechaViaje
			// 
			this->FechaViaje->HeaderText = L"Fecha de Viaje";
			this->FechaViaje->MinimumWidth = 6;
			this->FechaViaje->Name = L"FechaViaje";
			this->FechaViaje->Width = 125;
			// 
			// Distrito
			// 
			this->Distrito->HeaderText = L"Distrito";
			this->Distrito->MinimumWidth = 6;
			this->Distrito->Name = L"Distrito";
			this->Distrito->Width = 125;
			// 
			// UltimParadero
			// 
			this->UltimParadero->HeaderText = L"Ultimo Paradero";
			this->UltimParadero->MinimumWidth = 6;
			this->UltimParadero->Name = L"UltimParadero";
			this->UltimParadero->Width = 125;
			// 
			// Precio
			// 
			this->Precio->HeaderText = L"Precio";
			this->Precio->MinimumWidth = 6;
			this->Precio->Name = L"Precio";
			this->Precio->Width = 50;
			// 
			// btnEliminar
			// 
			this->btnEliminar->Location = System::Drawing::Point(330, 216);
			this->btnEliminar->Name = L"btnEliminar";
			this->btnEliminar->Size = System::Drawing::Size(75, 23);
			this->btnEliminar->TabIndex = 23;
			this->btnEliminar->Text = L"Eliminar";
			this->btnEliminar->UseVisualStyleBackColor = true;
			this->btnEliminar->Click += gcnew System::EventHandler(this, &ServiciosForm::btnEliminar_Click);
			// 
			// btnModificar
			// 
			this->btnModificar->Location = System::Drawing::Point(214, 216);
			this->btnModificar->Name = L"btnModificar";
			this->btnModificar->Size = System::Drawing::Size(75, 23);
			this->btnModificar->TabIndex = 22;
			this->btnModificar->Text = L"Modificar";
			this->btnModificar->UseVisualStyleBackColor = true;
			this->btnModificar->Click += gcnew System::EventHandler(this, &ServiciosForm::btnModificar_Click);
			// 
			// btnAgregar
			// 
			this->btnAgregar->Location = System::Drawing::Point(97, 216);
			this->btnAgregar->Name = L"btnAgregar";
			this->btnAgregar->Size = System::Drawing::Size(75, 23);
			this->btnAgregar->TabIndex = 21;
			this->btnAgregar->Text = L"Agregar";
			this->btnAgregar->UseVisualStyleBackColor = true;
			this->btnAgregar->Click += gcnew System::EventHandler(this, &ServiciosForm::btnAgregar_Click);
			// 
			// txtId
			// 
			this->txtId->Location = System::Drawing::Point(142, 31);
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(64, 20);
			this->txtId->TabIndex = 20;
			// 
			// lblHSalida
			// 
			this->lblHSalida->AutoSize = true;
			this->lblHSalida->Location = System::Drawing::Point(25, 64);
			this->lblHSalida->Name = L"lblHSalida";
			this->lblHSalida->Size = System::Drawing::Size(80, 13);
			this->lblHSalida->TabIndex = 19;
			this->lblHSalida->Text = L"Hora de Salida:";
			// 
			// lblId
			// 
			this->lblId->AutoSize = true;
			this->lblId->Location = System::Drawing::Point(25, 38);
			this->lblId->Name = L"lblId";
			this->lblId->Size = System::Drawing::Size(19, 13);
			this->lblId->TabIndex = 18;
			this->lblId->Text = L"Id:";
			// 
			// lblPrecio
			// 
			this->lblPrecio->AutoSize = true;
			this->lblPrecio->Location = System::Drawing::Point(25, 179);
			this->lblPrecio->Name = L"lblPrecio";
			this->lblPrecio->Size = System::Drawing::Size(75, 13);
			this->lblPrecio->TabIndex = 32;
			this->lblPrecio->Text = L"Precio (Soles):";
			// 
			// txtPrecio
			// 
			this->txtPrecio->Location = System::Drawing::Point(142, 179);
			this->txtPrecio->Name = L"txtPrecio";
			this->txtPrecio->Size = System::Drawing::Size(140, 20);
			this->txtPrecio->TabIndex = 33;
			// 
			// ServiciosForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(608, 549);
			this->Controls->Add(this->txtPrecio);
			this->Controls->Add(this->lblPrecio);
			this->Controls->Add(this->txtUltimoParadero);
			this->Controls->Add(this->lblUltimoParadero);
			this->Controls->Add(this->txtDescripcion);
			this->Controls->Add(this->txtFechaViaje);
			this->Controls->Add(this->lblDescripcion);
			this->Controls->Add(this->lblFechaViaje);
			this->Controls->Add(this->txtHoraSalida);
			this->Controls->Add(this->dgvServicios);
			this->Controls->Add(this->btnEliminar);
			this->Controls->Add(this->btnModificar);
			this->Controls->Add(this->btnAgregar);
			this->Controls->Add(this->txtId);
			this->Controls->Add(this->lblHSalida);
			this->Controls->Add(this->lblId);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"ServiciosForm";
			this->Text = L"ServiciosForm";
			this->Load += gcnew System::EventHandler(this, &ServiciosForm::ServiciosForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvServicios))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnAgregar_Click(System::Object^ sender, System::EventArgs^ e) {
		STPUCP_Model::Viaje^ viaje = gcnew STPUCP_Model::Viaje();
		viaje->Id = Int32::Parse(txtId->Text);
		viaje->HoraSalida = Int32::Parse(txtHoraSalida->Text);
		viaje->FechaViaje = txtFechaViaje->Text;
		viaje->Distrito = txtDescripcion->Text;
		viaje->UltimoParadero = txtUltimoParadero->Text;
		viaje->PrecioViaje = Int32::Parse(txtPrecio->Text);

		STPUCPAdminController::controller::AddJourney(viaje);
		RefreshGrid();
	}

		   void RefreshGrid() {
			   List<Viaje^>^ viajeList = controller::QueryAllJourneys();
			   dgvServicios->Rows->Clear();
			   for (int i = 0; i < viajeList->Count; i++) {
				   Viaje^ viaje = viajeList[i];
				   dgvServicios->Rows->Add(gcnew array<String^> {"" + viaje->Id, "" + viaje->HoraSalida, "" + viaje->FechaViaje, viaje->Distrito, viaje->UltimoParadero, "" + viaje->PrecioViaje});
			   }
		   }
private: System::Void btnModificar_Click(System::Object^ sender, System::EventArgs^ e) {
	Viaje^ viaje = gcnew STPUCP_Model::Viaje();
	viaje->Id = Int32::Parse(txtId->Text);
	viaje->HoraSalida = Int32::Parse(txtHoraSalida->Text);
	viaje->FechaViaje = txtFechaViaje->Text;
	viaje->Distrito = txtDescripcion->Text;
	viaje->UltimoParadero = txtUltimoParadero->Text;
	viaje->PrecioViaje = Int32::Parse(txtPrecio->Text);

	controller::UpdateJourney(viaje);
	RefreshGrid();
}
private: System::Void btnEliminar_Click(System::Object^ sender, System::EventArgs^ e) {
	int id = Int32::Parse(txtId->Text);
	controller::DeleteJourney(id);
	RefreshGrid();
}

private: System::Void dgvServicios_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	int ViajeID = Int32::Parse(dgvServicios->Rows[dgvServicios->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString());
	Viaje^ viaje = controller::QueryJourneysById(ViajeID);
	txtId->Text = "" + viaje->Id;
	txtHoraSalida->Text = "" + viaje->HoraSalida;
	txtFechaViaje->Text = viaje->FechaViaje;
	txtDescripcion->Text = viaje->Distrito;
	txtUltimoParadero->Text = viaje->UltimoParadero;
	txtPrecio->Text = "" + viaje->PrecioViaje;
}
private: System::Void ServiciosForm_Load(System::Object^ sender, System::EventArgs^ e) {
	RefreshGrid();
}
};
}
