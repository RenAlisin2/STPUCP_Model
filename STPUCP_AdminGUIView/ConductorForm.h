#pragma once

#include "HuellaForm.h"

namespace STPUCPAdminGUIView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace STPUCP_Model;
	using namespace STPUCPAdminController;

	/// <summary>
	/// Resumen de ConductorForm
	/// </summary>
	public ref class ConductorForm : public System::Windows::Forms::Form
	{
	public:
		ConductorForm(void)
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
		~ConductorForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dgv_VIAJE;
	protected:






	private: System::Windows::Forms::Button^ btn_add;
	private: System::Windows::Forms::Button^ btn_modificar;
	private: System::Windows::Forms::Button^ btn_eliminar;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ txtID;
	private: System::Windows::Forms::TextBox^ txtHoraPartida;
	private: System::Windows::Forms::TextBox^ txtCosto;
	private: System::Windows::Forms::TextBox^ txtFecha;
	private: System::Windows::Forms::TextBox^ txtAsientos;





	private: System::Windows::Forms::TextBox^ txtLugar;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label7;






	public: System::Windows::Forms::TextBox^ txtConductorID;
	private:

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ txtUltimoparadero;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ IDCONDUCTOR;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ HORA;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ COSTO;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ FECHA;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ LUGAR;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ASIENTOS;








	public:
	private:


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
			this->dgv_VIAJE = (gcnew System::Windows::Forms::DataGridView());
			this->ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->IDCONDUCTOR = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->HORA = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->COSTO = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->FECHA = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->LUGAR = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ASIENTOS = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btn_add = (gcnew System::Windows::Forms::Button());
			this->btn_modificar = (gcnew System::Windows::Forms::Button());
			this->btn_eliminar = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txtID = (gcnew System::Windows::Forms::TextBox());
			this->txtHoraPartida = (gcnew System::Windows::Forms::TextBox());
			this->txtCosto = (gcnew System::Windows::Forms::TextBox());
			this->txtFecha = (gcnew System::Windows::Forms::TextBox());
			this->txtAsientos = (gcnew System::Windows::Forms::TextBox());
			this->txtLugar = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtConductorID = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtUltimoparadero = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_VIAJE))->BeginInit();
			this->SuspendLayout();
			// 
			// dgv_VIAJE
			// 
			this->dgv_VIAJE->AllowUserToAddRows = false;
			this->dgv_VIAJE->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			this->dgv_VIAJE->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_VIAJE->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->ID, this->IDCONDUCTOR,
					this->HORA, this->COSTO, this->FECHA, this->LUGAR, this->ASIENTOS
			});
			this->dgv_VIAJE->Location = System::Drawing::Point(15, 302);
			this->dgv_VIAJE->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dgv_VIAJE->Name = L"dgv_VIAJE";
			this->dgv_VIAJE->RowHeadersVisible = false;
			this->dgv_VIAJE->RowHeadersWidth = 51;
			this->dgv_VIAJE->RowTemplate->Height = 24;
			this->dgv_VIAJE->Size = System::Drawing::Size(1001, 162);
			this->dgv_VIAJE->TabIndex = 33;
			this->dgv_VIAJE->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ConductorForm::dgv_VIAJE_CellContentClick);
			// 
			// ID
			// 
			this->ID->DataPropertyName = L"ID";
			this->ID->HeaderText = L"ID";
			this->ID->MinimumWidth = 6;
			this->ID->Name = L"ID";
			this->ID->Width = 30;
			// 
			// IDCONDUCTOR
			// 
			this->IDCONDUCTOR->HeaderText = L"ID del conductor";
			this->IDCONDUCTOR->MinimumWidth = 6;
			this->IDCONDUCTOR->Name = L"IDCONDUCTOR";
			this->IDCONDUCTOR->Width = 125;
			// 
			// HORA
			// 
			this->HORA->HeaderText = L"HORA";
			this->HORA->MinimumWidth = 6;
			this->HORA->Name = L"HORA";
			this->HORA->Width = 50;
			// 
			// COSTO
			// 
			this->COSTO->HeaderText = L"LUGAR DE RECOJO";
			this->COSTO->MinimumWidth = 6;
			this->COSTO->Name = L"COSTO";
			this->COSTO->Width = 125;
			// 
			// FECHA
			// 
			this->FECHA->HeaderText = L"FECHA";
			this->FECHA->MinimumWidth = 6;
			this->FECHA->Name = L"FECHA";
			this->FECHA->Width = 60;
			// 
			// LUGAR
			// 
			this->LUGAR->HeaderText = L"PRECIO";
			this->LUGAR->MinimumWidth = 6;
			this->LUGAR->Name = L"LUGAR";
			this->LUGAR->Width = 50;
			// 
			// ASIENTOS
			// 
			this->ASIENTOS->HeaderText = L"DISTRITO";
			this->ASIENTOS->MinimumWidth = 6;
			this->ASIENTOS->Name = L"ASIENTOS";
			this->ASIENTOS->Width = 125;
			// 
			// btn_add
			// 
			this->btn_add->Location = System::Drawing::Point(540, 31);
			this->btn_add->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_add->Name = L"btn_add";
			this->btn_add->Size = System::Drawing::Size(167, 50);
			this->btn_add->TabIndex = 32;
			this->btn_add->Text = L"AÑADIR";
			this->btn_add->UseVisualStyleBackColor = true;
			this->btn_add->Click += gcnew System::EventHandler(this, &ConductorForm::button4_Click);
			// 
			// btn_modificar
			// 
			this->btn_modificar->Location = System::Drawing::Point(540, 114);
			this->btn_modificar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_modificar->Name = L"btn_modificar";
			this->btn_modificar->Size = System::Drawing::Size(167, 48);
			this->btn_modificar->TabIndex = 31;
			this->btn_modificar->Text = L"MODIFICAR";
			this->btn_modificar->UseVisualStyleBackColor = true;
			this->btn_modificar->Click += gcnew System::EventHandler(this, &ConductorForm::btn_modificar_Click);
			// 
			// btn_eliminar
			// 
			this->btn_eliminar->Location = System::Drawing::Point(540, 193);
			this->btn_eliminar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_eliminar->Name = L"btn_eliminar";
			this->btn_eliminar->Size = System::Drawing::Size(167, 52);
			this->btn_eliminar->TabIndex = 30;
			this->btn_eliminar->Text = L"ELIMINAR";
			this->btn_eliminar->UseVisualStyleBackColor = true;
			this->btn_eliminar->Click += gcnew System::EventHandler(this, &ConductorForm::btn_eliminar_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(15, 28);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(68, 16);
			this->label6->TabIndex = 28;
			this->label6->Text = L"Ingrese ID";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(15, 130);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(152, 16);
			this->label5->TabIndex = 26;
			this->label5->Text = L"Ingrese fecha de partida";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(15, 229);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(173, 16);
			this->label4->TabIndex = 21;
			this->label4->Text = L"Ingrese asientos ocupados:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(15, 164);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(152, 16);
			this->label3->TabIndex = 20;
			this->label3->Text = L"Ingrese lugar de partida:";
			this->label3->Click += gcnew System::EventHandler(this, &ConductorForm::label3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(15, 96);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(91, 16);
			this->label2->TabIndex = 19;
			this->label2->Text = L"Ingrese costo:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(15, 64);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(149, 16);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Ingrese hora de partida:";
			this->label1->Click += gcnew System::EventHandler(this, &ConductorForm::label1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(776, 98);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(167, 79);
			this->button1->TabIndex = 17;
			this->button1->Text = L"Confirmar Viaje";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ConductorForm::button1_Click);
			// 
			// txtID
			// 
			this->txtID->Location = System::Drawing::Point(259, 25);
			this->txtID->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtID->Name = L"txtID";
			this->txtID->ReadOnly = true;
			this->txtID->Size = System::Drawing::Size(223, 22);
			this->txtID->TabIndex = 34;
			// 
			// txtHoraPartida
			// 
			this->txtHoraPartida->Location = System::Drawing::Point(259, 57);
			this->txtHoraPartida->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtHoraPartida->Name = L"txtHoraPartida";
			this->txtHoraPartida->Size = System::Drawing::Size(223, 22);
			this->txtHoraPartida->TabIndex = 35;
			// 
			// txtCosto
			// 
			this->txtCosto->Location = System::Drawing::Point(259, 92);
			this->txtCosto->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtCosto->Name = L"txtCosto";
			this->txtCosto->Size = System::Drawing::Size(223, 22);
			this->txtCosto->TabIndex = 36;
			// 
			// txtFecha
			// 
			this->txtFecha->Location = System::Drawing::Point(259, 127);
			this->txtFecha->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtFecha->Name = L"txtFecha";
			this->txtFecha->Size = System::Drawing::Size(223, 22);
			this->txtFecha->TabIndex = 37;
			// 
			// txtAsientos
			// 
			this->txtAsientos->Location = System::Drawing::Point(259, 225);
			this->txtAsientos->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtAsientos->Name = L"txtAsientos";
			this->txtAsientos->Size = System::Drawing::Size(223, 22);
			this->txtAsientos->TabIndex = 39;
			// 
			// txtLugar
			// 
			this->txtLugar->Location = System::Drawing::Point(259, 160);
			this->txtLugar->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtLugar->Name = L"txtLugar";
			this->txtLugar->Size = System::Drawing::Size(223, 22);
			this->txtLugar->TabIndex = 38;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(83) {
				L"Ancón", L"", L"Ate", L"", L"Barranco", L"", L"Breña",
					L"", L"Carabayllo", L"", L"Chaclacayo", L"", L"Chorrillos", L"", L"Cieneguilla", L"", L"Comas", L"", L"El Agustino", L"", L"Independencia",
					L"", L"Jesús María", L"", L"La Molina", L"", L"La Victoria", L"", L"Lince", L"", L"Los Olivos", L"", L"Lurigancho", L"", L"Lurín",
					L"", L"Magdalena del Mar", L"", L"Miraflores", L"", L"Pachacámac", L"", L"Pucusana", L"", L"Pueblo Libre", L"", L"Puente Piedra",
					L"", L"Punta Hermosa", L"", L"Punta Negra", L"", L"Rímac", L"", L"San Bartolo", L"", L"San Borja", L"", L"San Isidro", L"", L"San Juan de Lurigancho",
					L"", L"San Juan de Miraflores", L"", L"San Luis", L"", L"San Martín de Porres", L"", L"San Miguel", L"", L"Santa Anita", L"",
					L"Santa María del Mar", L"", L"Santa Rosa", L"", L"Santiago de Surco", L"", L"Surquillo", L"", L"Villa El Salvador", L"", L"Villa María del Triunfo"
			});
			this->comboBox1->Location = System::Drawing::Point(259, 260);
			this->comboBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(223, 24);
			this->comboBox1->TabIndex = 40;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(15, 263);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(130, 16);
			this->label7->TabIndex = 42;
			this->label7->Text = L"Ingrese distrito meta:";
			// 
			// txtConductorID
			// 
			this->txtConductorID->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->txtConductorID->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->txtConductorID->Location = System::Drawing::Point(776, 50);
			this->txtConductorID->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtConductorID->Name = L"txtConductorID";
			this->txtConductorID->ReadOnly = true;
			this->txtConductorID->Size = System::Drawing::Size(172, 22);
			this->txtConductorID->TabIndex = 43;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(771, 31);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(71, 16);
			this->label8->TabIndex = 44;
			this->label8->Text = L"USUARIO:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(15, 197);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(104, 16);
			this->label9->TabIndex = 45;
			this->label9->Text = L"Último paradero";
			// 
			// txtUltimoparadero
			// 
			this->txtUltimoparadero->Location = System::Drawing::Point(259, 193);
			this->txtUltimoparadero->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtUltimoparadero->Name = L"txtUltimoparadero";
			this->txtUltimoparadero->Size = System::Drawing::Size(223, 22);
			this->txtUltimoparadero->TabIndex = 46;
			// 
			// ConductorForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1031, 466);
			this->Controls->Add(this->txtUltimoparadero);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->txtConductorID);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->txtAsientos);
			this->Controls->Add(this->txtLugar);
			this->Controls->Add(this->txtFecha);
			this->Controls->Add(this->txtCosto);
			this->Controls->Add(this->txtHoraPartida);
			this->Controls->Add(this->txtID);
			this->Controls->Add(this->dgv_VIAJE);
			this->Controls->Add(this->btn_add);
			this->Controls->Add(this->btn_modificar);
			this->Controls->Add(this->btn_eliminar);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"ConductorForm";
			this->Text = L"ConductorForm";
			this->Load += gcnew System::EventHandler(this, &ConductorForm::ConductorForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_VIAJE))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	btn_add->Enabled = false;
	int id = Convert::ToInt32(txtID->Text);
	int horaSalida = Convert::ToInt32(txtHoraPartida->Text);
	String^ fechaViaje = txtFecha->Text;
	String^ lugardePartida = txtLugar->Text;
	String^ ultimoparadero = txtUltimoparadero->Text;
	String^ distrito = comboBox1->Items[comboBox1->SelectedIndex]->ToString(); // Obtener el rol seleccionado

	//MessageBox::Show ("codigo del conductor" + txtConductorID->Text);
	Contexto^ contexto = STPUCP_Model::Contexto::ObtenerInstancia();
	double precioViaje = Convert::ToDouble(txtCosto->Text);
	int idConductor = Convert::ToInt32(contexto->ObtenerIdUsuario());


	Viaje^ viajecito = gcnew Viaje();
	viajecito->Id = id;
	viajecito->HoraSalida = horaSalida;
	viajecito->FechaViaje = fechaViaje;
	viajecito->Lugar = lugardePartida;
	viajecito->UltimoParadero = ultimoparadero;
	viajecito->PrecioViaje = precioViaje;
	viajecito->Distrito = distrito;
	viajecito->ConductorId = idConductor;
	
	controller::AddJourney(viajecito);
	ShowViaje();


}

Void VerificarServicios() {
	List<Viaje^>^ Viajelista = controller::QueryAllJourneys();
	if (Viajelista->Count == 0) {
		btn_add->Enabled = true; // Habilitar el botón Agregar
		btn_eliminar->Enabled = true;
		btn_modificar->Enabled = true;
	}
	else {
		btn_add->Enabled = true;
		btn_eliminar->Enabled = true;
		btn_modificar->Enabled = true;
	}
}

void ClearControls() {
	txtID->Text = "";
	txtHoraPartida->Text = "";
	txtLugar->Text = "";
	txtFecha->Text = "";
	txtCosto->Text = "";
}

void ShowViaje() {
	List<Viaje^>^ Viajelista = controller::QueryAllJourneys();
	dgv_VIAJE->Rows->Clear();
	int i = controller::QueryAllJourneys()->Count - 1;
	dgv_VIAJE->Rows->Add(gcnew array<String^> {"" + Viajelista[i]->Id, "" + Viajelista[i]->ConductorId, "" + Viajelista[i]->HoraSalida,
	Viajelista[i]->Lugar, Viajelista[i]->FechaViaje, "" + Viajelista[i]->PrecioViaje,"" + Viajelista[i]->Distrito});
	 
}
private: System::Void btn_eliminar_Click(System::Object^ sender, System::EventArgs^ e) {
	btn_add->Enabled = true;
	int id = Convert::ToInt32(txtID->Text);
	controller::DeleteJourney(id);
	ShowViaje();
	//VerificarServicios();
}
private: System::Void btn_modificar_Click(System::Object^ sender, System::EventArgs^ e) {
	int id = Convert::ToInt32(txtID->Text);
	int horaSalida = Convert::ToInt32(txtHoraPartida->Text);
	String^ ultimoParadero = txtLugar->Text;
	String^ fechaViaje = txtFecha->Text;
	String^ distrito = comboBox1->Items[comboBox1->SelectedIndex]->ToString();
	double precioViaje = Convert::ToDouble(txtCosto->Text);


	Viaje^ viajecito = gcnew Viaje();
	viajecito->Id = id;
	viajecito->HoraSalida = horaSalida;
	viajecito->UltimoParadero = ultimoParadero;
	viajecito->FechaViaje = fechaViaje;
	viajecito->PrecioViaje = precioViaje;
	viajecito->Distrito = distrito;

	controller::UpdateJourney(viajecito);
	ShowViaje();
	//VerificarServicios();
}

private: System::Void ConductorForm_Load(System::Object^ sender, System::EventArgs^ e) {


	List<Viaje^>^ Viajelist = controller::QueryAllJourneys();
	int mayor = 0;
	for (int i = 0; i < Viajelist->Count; i++) {
		if (Viajelist[i]->Id > mayor) {
			mayor = Viajelist[i]->Id;
		}

	}
	txtID->Text = "" + (1 + mayor);
	txtID->ReadOnly = true;
	//VerificarServicios();
}

private: System::Void dgv_VIAJE_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
 	ClearControls();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("SE PROCEDERA A REALIZAR MUESTRA BIOMETRICA , INSERTE SU DEDO PULGAR DERECHO", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	HuellaForm^ huellitaform = gcnew HuellaForm();

	


	huellitaform->textIdViaje->Text = txtID->Text;
	huellitaform-> TopMost = true;
	huellitaform->Show();
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
