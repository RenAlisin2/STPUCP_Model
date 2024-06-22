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
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ IdCondcutor;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ IdViaje;








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
			this->IdCondcutor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->IdViaje = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvOrden))->BeginInit();
			this->SuspendLayout();
			// 
			// txtPrecioOrden
			// 
			this->txtPrecioOrden->Location = System::Drawing::Point(256, 196);
			this->txtPrecioOrden->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtPrecioOrden->Name = L"txtPrecioOrden";
			this->txtPrecioOrden->Size = System::Drawing::Size(185, 22);
			this->txtPrecioOrden->TabIndex = 49;
			this->txtPrecioOrden->TextChanged += gcnew System::EventHandler(this, &OrdenForm::txtPrecioOrden_TextChanged);
			// 
			// lblPrecio
			// 
			this->lblPrecio->AutoSize = true;
			this->lblPrecio->Location = System::Drawing::Point(67, 196);
			this->lblPrecio->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblPrecio->Name = L"lblPrecio";
			this->lblPrecio->Size = System::Drawing::Size(122, 32);
			this->lblPrecio->TabIndex = 48;
			this->lblPrecio->Text = L"Precio de la Orden:\r\n(Soles)";
			this->lblPrecio->Click += gcnew System::EventHandler(this, &OrdenForm::lblPrecio_Click);
			// 
			// txtFechaOrden
			// 
			this->txtFechaOrden->Location = System::Drawing::Point(256, 160);
			this->txtFechaOrden->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtFechaOrden->Name = L"txtFechaOrden";
			this->txtFechaOrden->Size = System::Drawing::Size(185, 22);
			this->txtFechaOrden->TabIndex = 47;
			this->txtFechaOrden->TextChanged += gcnew System::EventHandler(this, &OrdenForm::txtFechaOrden_TextChanged);
			// 
			// lblUltimoParadero
			// 
			this->lblUltimoParadero->AutoSize = true;
			this->lblUltimoParadero->Location = System::Drawing::Point(67, 160);
			this->lblUltimoParadero->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblUltimoParadero->Name = L"lblUltimoParadero";
			this->lblUltimoParadero->Size = System::Drawing::Size(121, 16);
			this->lblUltimoParadero->TabIndex = 46;
			this->lblUltimoParadero->Text = L"Fecha de la Orden:";
			this->lblUltimoParadero->Click += gcnew System::EventHandler(this, &OrdenForm::lblUltimoParadero_Click);
			// 
			// txtCalifacionEstrellas
			// 
			this->txtCalifacionEstrellas->Location = System::Drawing::Point(256, 123);
			this->txtCalifacionEstrellas->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtCalifacionEstrellas->Name = L"txtCalifacionEstrellas";
			this->txtCalifacionEstrellas->Size = System::Drawing::Size(185, 22);
			this->txtCalifacionEstrellas->TabIndex = 44;
			this->txtCalifacionEstrellas->TextChanged += gcnew System::EventHandler(this, &OrdenForm::txtCalifacionEstrellas_TextChanged);
			// 
			// lblFechaViaje
			// 
			this->lblFechaViaje->AutoSize = true;
			this->lblFechaViaje->Location = System::Drawing::Point(67, 127);
			this->lblFechaViaje->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblFechaViaje->Name = L"lblFechaViaje";
			this->lblFechaViaje->Size = System::Drawing::Size(153, 16);
			this->lblFechaViaje->TabIndex = 42;
			this->lblFechaViaje->Text = L"Calificación de Estrellas:";
			this->lblFechaViaje->Click += gcnew System::EventHandler(this, &OrdenForm::lblFechaViaje_Click);
			// 
			// txtDistrito
			// 
			this->txtDistrito->Location = System::Drawing::Point(256, 87);
			this->txtDistrito->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtDistrito->Name = L"txtDistrito";
			this->txtDistrito->Size = System::Drawing::Size(185, 22);
			this->txtDistrito->TabIndex = 41;
			this->txtDistrito->TextChanged += gcnew System::EventHandler(this, &OrdenForm::txtDistrito_TextChanged);
			// 
			// dgvOrden
			// 
			this->dgvOrden->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvOrden->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->UsuarioID, this->Distrito,
					this->CalifiicacionEstrellas, this->Fecha, this->Precio, this->IdCondcutor, this->IdViaje
			});
			this->dgvOrden->Location = System::Drawing::Point(71, 316);
			this->dgvOrden->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dgvOrden->Name = L"dgvOrden";
			this->dgvOrden->RowHeadersWidth = 51;
			this->dgvOrden->Size = System::Drawing::Size(764, 311);
			this->dgvOrden->TabIndex = 40;
			this->dgvOrden->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &OrdenForm::dgvOrden_CellContentClick);
			// 
			// UsuarioID
			// 
			this->UsuarioID->HeaderText = L"ID";
			this->UsuarioID->MinimumWidth = 6;
			this->UsuarioID->Name = L"UsuarioID";
			this->UsuarioID->Width = 50;
			// 
			// Distrito
			// 
			this->Distrito->HeaderText = L"Distrito";
			this->Distrito->MinimumWidth = 6;
			this->Distrito->Name = L"Distrito";
			this->Distrito->Width = 125;
			// 
			// CalifiicacionEstrellas
			// 
			this->CalifiicacionEstrellas->HeaderText = L"Calificación de Estrellas";
			this->CalifiicacionEstrellas->MinimumWidth = 6;
			this->CalifiicacionEstrellas->Name = L"CalifiicacionEstrellas";
			this->CalifiicacionEstrellas->Width = 125;
			// 
			// Fecha
			// 
			this->Fecha->HeaderText = L"Fecha";
			this->Fecha->MinimumWidth = 6;
			this->Fecha->Name = L"Fecha";
			this->Fecha->Width = 125;
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
			this->btnEliminar->Location = System::Drawing::Point(492, 256);
			this->btnEliminar->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnEliminar->Name = L"btnEliminar";
			this->btnEliminar->Size = System::Drawing::Size(100, 28);
			this->btnEliminar->TabIndex = 39;
			this->btnEliminar->Text = L"Eliminar";
			this->btnEliminar->UseVisualStyleBackColor = true;
			this->btnEliminar->Click += gcnew System::EventHandler(this, &OrdenForm::btnEliminar_Click);
			// 
			// btnModificar
			// 
			this->btnModificar->Location = System::Drawing::Point(337, 256);
			this->btnModificar->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnModificar->Name = L"btnModificar";
			this->btnModificar->Size = System::Drawing::Size(100, 28);
			this->btnModificar->TabIndex = 38;
			this->btnModificar->Text = L"Modificar";
			this->btnModificar->UseVisualStyleBackColor = true;
			this->btnModificar->Click += gcnew System::EventHandler(this, &OrdenForm::btnModificar_Click);
			// 
			// btnAgregar
			// 
			this->btnAgregar->Location = System::Drawing::Point(181, 256);
			this->btnAgregar->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnAgregar->Name = L"btnAgregar";
			this->btnAgregar->Size = System::Drawing::Size(100, 28);
			this->btnAgregar->TabIndex = 37;
			this->btnAgregar->Text = L"Agregar";
			this->btnAgregar->UseVisualStyleBackColor = true;
			this->btnAgregar->Click += gcnew System::EventHandler(this, &OrdenForm::btnAgregar_Click);
			// 
			// txtId
			// 
			this->txtId->Location = System::Drawing::Point(256, 50);
			this->txtId->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(84, 22);
			this->txtId->TabIndex = 36;
			this->txtId->TextChanged += gcnew System::EventHandler(this, &OrdenForm::txtId_TextChanged);
			// 
			// lblHSalida
			// 
			this->lblHSalida->AutoSize = true;
			this->lblHSalida->Location = System::Drawing::Point(67, 91);
			this->lblHSalida->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblHSalida->Name = L"lblHSalida";
			this->lblHSalida->Size = System::Drawing::Size(54, 16);
			this->lblHSalida->TabIndex = 35;
			this->lblHSalida->Text = L"Distriito:";
			this->lblHSalida->Click += gcnew System::EventHandler(this, &OrdenForm::lblHSalida_Click);
			// 
			// lblId
			// 
			this->lblId->AutoSize = true;
			this->lblId->Location = System::Drawing::Point(67, 59);
			this->lblId->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblId->Name = L"lblId";
			this->lblId->Size = System::Drawing::Size(21, 16);
			this->lblId->TabIndex = 34;
			this->lblId->Text = L"Id:";
			this->lblId->Click += gcnew System::EventHandler(this, &OrdenForm::lblId_Click);
			// 
			// IdCondcutor
			// 
			this->IdCondcutor->HeaderText = L"IdCondcutor";
			this->IdCondcutor->MinimumWidth = 6;
			this->IdCondcutor->Name = L"IdCondcutor";
			this->IdCondcutor->Width = 125;
			// 
			// IdViaje
			// 
			this->IdViaje->HeaderText = L"IdViaje";
			this->IdViaje->MinimumWidth = 6;
			this->IdViaje->Name = L"IdViaje";
			this->IdViaje->Width = 125;
			// 
			// OrdenForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(913, 657);
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
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"OrdenForm";
			this->Text = L"OrdenForm";
			this->Load += gcnew System::EventHandler(this, &OrdenForm::OrdenForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvOrden))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void btnAgregar_Click(System::Object^ sender, System::EventArgs^ e) {
	Contexto^ contexto = STPUCP_Model::Contexto::ObtenerInstancia();
	if (contexto->ObtenerIdUsuario() !=0) {
		STPUCP_Model::Orden^ orden = gcnew STPUCP_Model::Orden();
		orden->Id = Int32::Parse(txtId->Text);
		orden->Precio = Convert::ToDouble(txtPrecioOrden->Text); // Usa ToDouble para consistencia
		orden->CalificacionEstrellas = Int32::Parse(txtCalifacionEstrellas->Text);
		orden->Distrito = txtDistrito->Text;
		orden->Fecha = txtFechaOrden->Text;
		orden->PasajeroId = contexto->ObtenerIdUsuario(); // Asigna el CodigoPUCP del pasajero registrado

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
			   Viaje^ viajecito = controller::QueryJourneysById(orden->Id_viaje);

			   dgvOrden->Rows->Add(gcnew array<String^> {"" + orden->Id, orden->Distrito, "" + orden->CalificacionEstrellas, orden->Fecha, "" + orden->Precio,""+viajecito->ConductorId,""+orden->Id_viaje});
		   }
}
private: System::Void btnModificar_Click(System::Object^ sender, System::EventArgs^ e) {
	Contexto^ contexto = STPUCP_Model::Contexto::ObtenerInstancia();
	if (contexto->ObtenerIdUsuario() !=0) {
		Orden^ orden = gcnew STPUCP_Model::Orden();
		orden->Id = Int32::Parse(txtId->Text);
		orden->Precio = Convert::ToDouble(txtPrecioOrden->Text); // Usa ToDouble para consistencia
		orden->CalificacionEstrellas = Int32::Parse(txtCalifacionEstrellas->Text);
		orden->Distrito = txtDistrito->Text;
		orden->Fecha = txtFechaOrden->Text;
		orden->PasajeroId = contexto->ObtenerIdUsuario(); // Asigna el CodigoPUCP del pasajero registrado

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
