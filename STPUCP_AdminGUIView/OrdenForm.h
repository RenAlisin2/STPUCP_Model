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
	/// Resumen de OrdenForm
	/// </summary>
	public ref class OrdenForm : public System::Windows::Forms::Form
	{
	public:
		OrdenForm(void)
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
		~OrdenForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtPrecioOrden;
	protected:

	protected:
	private: System::Windows::Forms::Label^ lblPrecio;
	private: System::Windows::Forms::TextBox^ txtFechaOrden;

	private: System::Windows::Forms::Label^ lblUltimoParadero;

	private: System::Windows::Forms::TextBox^ txtCalifacionEstrellas;


	private: System::Windows::Forms::Label^ lblFechaViaje;
	private: System::Windows::Forms::TextBox^ txtDistrito;
	private: System::Windows::Forms::DataGridView^ dgvOrden;








	private: System::Windows::Forms::Button^ btnEliminar;
	private: System::Windows::Forms::Button^ btnModificar;
	private: System::Windows::Forms::Button^ btnAgregar;
	private: System::Windows::Forms::TextBox^ txtId;
	private: System::Windows::Forms::Label^ lblHSalida;
	private: System::Windows::Forms::Label^ lblId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ UsuarioID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Distrito;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CalifiicacionEstrellas;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Fecha;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Precio;








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
			this->txtPrecioOrden = (gcnew System::Windows::Forms::TextBox());
			this->lblPrecio = (gcnew System::Windows::Forms::Label());
			this->txtFechaOrden = (gcnew System::Windows::Forms::TextBox());
			this->lblUltimoParadero = (gcnew System::Windows::Forms::Label());
			this->txtCalifacionEstrellas = (gcnew System::Windows::Forms::TextBox());
			this->lblFechaViaje = (gcnew System::Windows::Forms::Label());
			this->txtDistrito = (gcnew System::Windows::Forms::TextBox());
			this->dgvOrden = (gcnew System::Windows::Forms::DataGridView());
			this->UsuarioID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Distrito = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CalifiicacionEstrellas = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Fecha = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Precio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnEliminar = (gcnew System::Windows::Forms::Button());
			this->btnModificar = (gcnew System::Windows::Forms::Button());
			this->btnAgregar = (gcnew System::Windows::Forms::Button());
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			this->lblHSalida = (gcnew System::Windows::Forms::Label());
			this->lblId = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvOrden))->BeginInit();
			this->SuspendLayout();
			// 
			// txtPrecioOrden
			// 
			this->txtPrecioOrden->Location = System::Drawing::Point(192, 159);
			this->txtPrecioOrden->Name = L"txtPrecioOrden";
			this->txtPrecioOrden->Size = System::Drawing::Size(140, 20);
			this->txtPrecioOrden->TabIndex = 49;
			this->txtPrecioOrden->TextChanged += gcnew System::EventHandler(this, &OrdenForm::txtPrecioOrden_TextChanged);
			// 
			// lblPrecio
			// 
			this->lblPrecio->AutoSize = true;
			this->lblPrecio->Location = System::Drawing::Point(50, 159);
			this->lblPrecio->Name = L"lblPrecio";
			this->lblPrecio->Size = System::Drawing::Size(98, 26);
			this->lblPrecio->TabIndex = 48;
			this->lblPrecio->Text = L"Precio de la Orden:\r\n(Soles)";
			this->lblPrecio->Click += gcnew System::EventHandler(this, &OrdenForm::lblPrecio_Click);
			// 
			// txtFechaOrden
			// 
			this->txtFechaOrden->Location = System::Drawing::Point(192, 130);
			this->txtFechaOrden->Name = L"txtFechaOrden";
			this->txtFechaOrden->Size = System::Drawing::Size(140, 20);
			this->txtFechaOrden->TabIndex = 47;
			this->txtFechaOrden->TextChanged += gcnew System::EventHandler(this, &OrdenForm::txtFechaOrden_TextChanged);
			// 
			// lblUltimoParadero
			// 
			this->lblUltimoParadero->AutoSize = true;
			this->lblUltimoParadero->Location = System::Drawing::Point(50, 130);
			this->lblUltimoParadero->Name = L"lblUltimoParadero";
			this->lblUltimoParadero->Size = System::Drawing::Size(98, 13);
			this->lblUltimoParadero->TabIndex = 46;
			this->lblUltimoParadero->Text = L"Fecha de la Orden:";
			this->lblUltimoParadero->Click += gcnew System::EventHandler(this, &OrdenForm::lblUltimoParadero_Click);
			// 
			// txtCalifacionEstrellas
			// 
			this->txtCalifacionEstrellas->Location = System::Drawing::Point(192, 100);
			this->txtCalifacionEstrellas->Name = L"txtCalifacionEstrellas";
			this->txtCalifacionEstrellas->Size = System::Drawing::Size(140, 20);
			this->txtCalifacionEstrellas->TabIndex = 44;
			this->txtCalifacionEstrellas->TextChanged += gcnew System::EventHandler(this, &OrdenForm::txtCalifacionEstrellas_TextChanged);
			// 
			// lblFechaViaje
			// 
			this->lblFechaViaje->AutoSize = true;
			this->lblFechaViaje->Location = System::Drawing::Point(50, 103);
			this->lblFechaViaje->Name = L"lblFechaViaje";
			this->lblFechaViaje->Size = System::Drawing::Size(121, 13);
			this->lblFechaViaje->TabIndex = 42;
			this->lblFechaViaje->Text = L"Calificación de Estrellas:";
			this->lblFechaViaje->Click += gcnew System::EventHandler(this, &OrdenForm::lblFechaViaje_Click);
			// 
			// txtDistrito
			// 
			this->txtDistrito->Location = System::Drawing::Point(192, 71);
			this->txtDistrito->Name = L"txtDistrito";
			this->txtDistrito->Size = System::Drawing::Size(140, 20);
			this->txtDistrito->TabIndex = 41;
			this->txtDistrito->TextChanged += gcnew System::EventHandler(this, &OrdenForm::txtDistrito_TextChanged);
			// 
			// dgvOrden
			// 
			this->dgvOrden->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvOrden->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->UsuarioID, this->Distrito,
					this->CalifiicacionEstrellas, this->Fecha, this->Precio
			});
			this->dgvOrden->Location = System::Drawing::Point(53, 257);
			this->dgvOrden->Name = L"dgvOrden";
			this->dgvOrden->Size = System::Drawing::Size(440, 253);
			this->dgvOrden->TabIndex = 40;
			this->dgvOrden->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &OrdenForm::dgvOrden_CellContentClick);
			// 
			// UsuarioID
			// 
			this->UsuarioID->HeaderText = L"ID";
			this->UsuarioID->Name = L"UsuarioID";
			this->UsuarioID->Width = 50;
			// 
			// Distrito
			// 
			this->Distrito->HeaderText = L"Distrito";
			this->Distrito->Name = L"Distrito";
			// 
			// CalifiicacionEstrellas
			// 
			this->CalifiicacionEstrellas->HeaderText = L"Calificación de Estrellas";
			this->CalifiicacionEstrellas->Name = L"CalifiicacionEstrellas";
			// 
			// Fecha
			// 
			this->Fecha->HeaderText = L"Fecha";
			this->Fecha->Name = L"Fecha";
			// 
			// Precio
			// 
			this->Precio->HeaderText = L"Precio";
			this->Precio->Name = L"Precio";
			this->Precio->Width = 50;
			// 
			// btnEliminar
			// 
			this->btnEliminar->Location = System::Drawing::Point(369, 208);
			this->btnEliminar->Name = L"btnEliminar";
			this->btnEliminar->Size = System::Drawing::Size(75, 23);
			this->btnEliminar->TabIndex = 39;
			this->btnEliminar->Text = L"Eliminar";
			this->btnEliminar->UseVisualStyleBackColor = true;
			this->btnEliminar->Click += gcnew System::EventHandler(this, &OrdenForm::btnEliminar_Click);
			// 
			// btnModificar
			// 
			this->btnModificar->Location = System::Drawing::Point(253, 208);
			this->btnModificar->Name = L"btnModificar";
			this->btnModificar->Size = System::Drawing::Size(75, 23);
			this->btnModificar->TabIndex = 38;
			this->btnModificar->Text = L"Modificar";
			this->btnModificar->UseVisualStyleBackColor = true;
			this->btnModificar->Click += gcnew System::EventHandler(this, &OrdenForm::btnModificar_Click);
			// 
			// btnAgregar
			// 
			this->btnAgregar->Location = System::Drawing::Point(136, 208);
			this->btnAgregar->Name = L"btnAgregar";
			this->btnAgregar->Size = System::Drawing::Size(75, 23);
			this->btnAgregar->TabIndex = 37;
			this->btnAgregar->Text = L"Agregar";
			this->btnAgregar->UseVisualStyleBackColor = true;
			this->btnAgregar->Click += gcnew System::EventHandler(this, &OrdenForm::btnAgregar_Click);
			// 
			// txtId
			// 
			this->txtId->Location = System::Drawing::Point(192, 41);
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(64, 20);
			this->txtId->TabIndex = 36;
			this->txtId->TextChanged += gcnew System::EventHandler(this, &OrdenForm::txtId_TextChanged);
			// 
			// lblHSalida
			// 
			this->lblHSalida->AutoSize = true;
			this->lblHSalida->Location = System::Drawing::Point(50, 74);
			this->lblHSalida->Name = L"lblHSalida";
			this->lblHSalida->Size = System::Drawing::Size(44, 13);
			this->lblHSalida->TabIndex = 35;
			this->lblHSalida->Text = L"Distriito:";
			this->lblHSalida->Click += gcnew System::EventHandler(this, &OrdenForm::lblHSalida_Click);
			// 
			// lblId
			// 
			this->lblId->AutoSize = true;
			this->lblId->Location = System::Drawing::Point(50, 48);
			this->lblId->Name = L"lblId";
			this->lblId->Size = System::Drawing::Size(19, 13);
			this->lblId->TabIndex = 34;
			this->lblId->Text = L"Id:";
			this->lblId->Click += gcnew System::EventHandler(this, &OrdenForm::lblId_Click);
			// 
			// OrdenForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(545, 534);
			this->Controls->Add(this->txtPrecioOrden);
			this->Controls->Add(this->lblPrecio);
			this->Controls->Add(this->txtFechaOrden);
			this->Controls->Add(this->lblUltimoParadero);
			this->Controls->Add(this->txtCalifacionEstrellas);
			this->Controls->Add(this->lblFechaViaje);
			this->Controls->Add(this->txtDistrito);
			this->Controls->Add(this->dgvOrden);
			this->Controls->Add(this->btnEliminar);
			this->Controls->Add(this->btnModificar);
			this->Controls->Add(this->btnAgregar);
			this->Controls->Add(this->txtId);
			this->Controls->Add(this->lblHSalida);
			this->Controls->Add(this->lblId);
			this->Name = L"OrdenForm";
			this->Text = L"OrdenForm";
			this->Load += gcnew System::EventHandler(this, &OrdenForm::OrdenForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvOrden))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void btnAgregar_Click(System::Object^ sender, System::EventArgs^ e) {
	Usuario^ usuario_registrado = STPUCP_Model::Contexto::Instancia->Usuario_registrado;
	if (usuario_registrado != nullptr) {
		STPUCP_Model::Orden^ orden = gcnew STPUCP_Model::Orden();
		orden->Id = Int32::Parse(txtId->Text);
		orden->Precio = Convert::ToDouble(txtPrecioOrden->Text); // Usa ToDouble para consistencia
		orden->CalificacionEstrellas = Int32::Parse(txtCalifacionEstrellas->Text);
		orden->Distrito = txtDistrito->Text;
		orden->Fecha = txtFechaOrden->Text;
		orden->PasajeroId = usuario_registrado->CodigoPUCP; // Asigna el CodigoPUCP del pasajero registrado

		STPUCPAdminController::controller::AddOrder(orden);
		RefreshGrid();
	}
	else {
		MessageBox::Show("No hay pasajero registrado para asignar a la orden", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

	   void RefreshGrid() {
		   List<Orden^>^ OrdenList = controller::QueryAllOrders();
		   dgvOrden->Rows->Clear();
		   for (int i = 0; i < OrdenList->Count; i++) {
			   Orden^ orden = OrdenList[i];
			   dgvOrden->Rows->Add(gcnew array<String^> {"" + orden->Id, orden->Distrito, "" + orden->CalificacionEstrellas, orden->Fecha, "" + orden->Precio});
		   }
}
private: System::Void btnModificar_Click(System::Object^ sender, System::EventArgs^ e) {
	Usuario^ usuario_registrado = STPUCP_Model::Contexto::Instancia->Usuario_registrado;
	if (usuario_registrado != nullptr) {
		Orden^ orden = gcnew STPUCP_Model::Orden();
		orden->Id = Int32::Parse(txtId->Text);
		orden->Precio = Convert::ToDouble(txtPrecioOrden->Text); // Usa ToDouble para consistencia
		orden->CalificacionEstrellas = Int32::Parse(txtCalifacionEstrellas->Text);
		orden->Distrito = txtDistrito->Text;
		orden->Fecha = txtFechaOrden->Text;
		orden->PasajeroId = usuario_registrado->CodigoPUCP; // Asigna el CodigoPUCP del pasajero registrado

		controller::UpdateOrder(orden);
		RefreshGrid();
	}
	else {
		MessageBox::Show("No hay pasajero registrado para asignar a la orden", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void btnEliminar_Click(System::Object^ sender, System::EventArgs^ e) {
	int id = Int32::Parse(txtId->Text);
	controller::DeleteOrder(id);
	RefreshGrid();
}
private: System::Void OrdenForm_Load(System::Object^ sender, System::EventArgs^ e) {
	RefreshGrid();
}
private: System::Void lblPrecio_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txtFechaOrden_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void lblUltimoParadero_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txtCalifacionEstrellas_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void lblFechaViaje_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txtDistrito_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dgvOrden_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void txtPrecioOrden_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txtId_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void lblHSalida_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void lblId_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
