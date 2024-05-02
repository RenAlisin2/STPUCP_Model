#pragma once
#include "VentanadeConfirmacionForm.h"






namespace STPUCPGUIAPP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace STPUCP_Model;
	using namespace STPUCP_SERVICE;
	using namespace System::Collections::Generic;


	/// <summary>
	/// Resumen de CondicionesDellevadoForm
	/// </summary>
	public ref class CondicionesDellevadoForm : public System::Windows::Forms::Form
	{
	public:
		CondicionesDellevadoForm(void)
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
		~CondicionesDellevadoForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ text_HORA;
	private: System::Windows::Forms::TextBox^ text_LUGAR;


	private: System::Windows::Forms::TextBox^ text_COSTO;
	private: System::Windows::Forms::TextBox^ text_ASIENTOS;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ text_FECHA;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ text_ID;

	private: System::Windows::Forms::Button^ btn_eliminar;


	private: System::Windows::Forms::Button^ btn_modificar;
	private: System::Windows::Forms::Button^ btn_add;
	private: System::Windows::Forms::DataGridView^ dgv_VIAJE;



	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ HORA;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ COSTO;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ FECHA;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ LUGAR;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ASIENTOS;







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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->text_HORA = (gcnew System::Windows::Forms::TextBox());
			this->text_LUGAR = (gcnew System::Windows::Forms::TextBox());
			this->text_COSTO = (gcnew System::Windows::Forms::TextBox());
			this->text_ASIENTOS = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->text_FECHA = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->text_ID = (gcnew System::Windows::Forms::TextBox());
			this->btn_eliminar = (gcnew System::Windows::Forms::Button());
			this->btn_modificar = (gcnew System::Windows::Forms::Button());
			this->btn_add = (gcnew System::Windows::Forms::Button());
			this->dgv_VIAJE = (gcnew System::Windows::Forms::DataGridView());
			this->ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->HORA = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->COSTO = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->FECHA = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->LUGAR = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ASIENTOS = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_VIAJE))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(801, 27);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(189, 79);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Confirmar Viaje";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CondicionesDellevadoForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(67, 62);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(149, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Ingrese hora de partida:";
			this->label1->Click += gcnew System::EventHandler(this, &CondicionesDellevadoForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(64, 90);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(91, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Ingrese costo:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(64, 155);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(152, 16);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Ingrese lugar de partida:";
			this->label3->Click += gcnew System::EventHandler(this, &CondicionesDellevadoForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(64, 187);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(173, 16);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Ingrese asientos ocupados:";
			// 
			// text_HORA
			// 
			this->text_HORA->Location = System::Drawing::Point(245, 56);
			this->text_HORA->Name = L"text_HORA";
			this->text_HORA->Size = System::Drawing::Size(65, 22);
			this->text_HORA->TabIndex = 5;
			// 
			// text_LUGAR
			// 
			this->text_LUGAR->Location = System::Drawing::Point(245, 152);
			this->text_LUGAR->Name = L"text_LUGAR";
			this->text_LUGAR->Size = System::Drawing::Size(175, 22);
			this->text_LUGAR->TabIndex = 6;
			// 
			// text_COSTO
			// 
			this->text_COSTO->Location = System::Drawing::Point(245, 84);
			this->text_COSTO->Name = L"text_COSTO";
			this->text_COSTO->Size = System::Drawing::Size(56, 22);
			this->text_COSTO->TabIndex = 7;
			// 
			// text_ASIENTOS
			// 
			this->text_ASIENTOS->Location = System::Drawing::Point(254, 187);
			this->text_ASIENTOS->Name = L"text_ASIENTOS";
			this->text_ASIENTOS->Size = System::Drawing::Size(68, 22);
			this->text_ASIENTOS->TabIndex = 8;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(64, 135);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(152, 16);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Ingrese fecha de partida";
			// 
			// text_FECHA
			// 
			this->text_FECHA->Location = System::Drawing::Point(245, 116);
			this->text_FECHA->Name = L"text_FECHA";
			this->text_FECHA->Size = System::Drawing::Size(100, 22);
			this->text_FECHA->TabIndex = 10;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(67, 27);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(68, 16);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Ingrese ID";
			// 
			// text_ID
			// 
			this->text_ID->Location = System::Drawing::Point(245, 21);
			this->text_ID->Name = L"text_ID";
			this->text_ID->Size = System::Drawing::Size(100, 22);
			this->text_ID->TabIndex = 12;
			// 
			// btn_eliminar
			// 
			this->btn_eliminar->Location = System::Drawing::Point(494, 135);
			this->btn_eliminar->Name = L"btn_eliminar";
			this->btn_eliminar->Size = System::Drawing::Size(109, 23);
			this->btn_eliminar->TabIndex = 13;
			this->btn_eliminar->Text = L"ELIMINAR";
			this->btn_eliminar->UseVisualStyleBackColor = true;
			this->btn_eliminar->Click += gcnew System::EventHandler(this, &CondicionesDellevadoForm::btn_eliminar_Click);
			// 
			// btn_modificar
			// 
			this->btn_modificar->Location = System::Drawing::Point(494, 83);
			this->btn_modificar->Name = L"btn_modificar";
			this->btn_modificar->Size = System::Drawing::Size(109, 23);
			this->btn_modificar->TabIndex = 14;
			this->btn_modificar->Text = L"MODIFICAR";
			this->btn_modificar->UseVisualStyleBackColor = true;
			this->btn_modificar->Click += gcnew System::EventHandler(this, &CondicionesDellevadoForm::btn_modificar_Click);
			// 
			// btn_add
			// 
			this->btn_add->Location = System::Drawing::Point(494, 27);
			this->btn_add->Name = L"btn_add";
			this->btn_add->Size = System::Drawing::Size(109, 23);
			this->btn_add->TabIndex = 15;
			this->btn_add->Text = L"AÑADIR";
			this->btn_add->UseVisualStyleBackColor = true;
			this->btn_add->Click += gcnew System::EventHandler(this, &CondicionesDellevadoForm::button4_Click);
			// 
			// dgv_VIAJE
			// 
			this->dgv_VIAJE->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_VIAJE->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->ID, this->HORA,
					this->COSTO, this->FECHA, this->LUGAR, this->ASIENTOS
			});
			this->dgv_VIAJE->Location = System::Drawing::Point(26, 290);
			this->dgv_VIAJE->Name = L"dgv_VIAJE";
			this->dgv_VIAJE->RowHeadersWidth = 51;
			this->dgv_VIAJE->RowTemplate->Height = 24;
			this->dgv_VIAJE->Size = System::Drawing::Size(798, 141);
			this->dgv_VIAJE->TabIndex = 16;
			this->dgv_VIAJE->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &CondicionesDellevadoForm::dataGridView1_CellContentClick);
			// 
			// ID
			// 
			this->ID->DataPropertyName = L"ID";
			this->ID->HeaderText = L"ID";
			this->ID->MinimumWidth = 6;
			this->ID->Name = L"ID";
			this->ID->Width = 125;
			// 
			// HORA
			// 
			this->HORA->HeaderText = L"HORA";
			this->HORA->MinimumWidth = 6;
			this->HORA->Name = L"HORA";
			this->HORA->Width = 125;
			// 
			// COSTO
			// 
			this->COSTO->HeaderText = L"PRECIO";
			this->COSTO->MinimumWidth = 6;
			this->COSTO->Name = L"COSTO";
			this->COSTO->Width = 125;
			// 
			// FECHA
			// 
			this->FECHA->HeaderText = L"FECHA";
			this->FECHA->MinimumWidth = 6;
			this->FECHA->Name = L"FECHA";
			this->FECHA->Width = 125;
			// 
			// LUGAR
			// 
			this->LUGAR->HeaderText = L"LUGAR";
			this->LUGAR->MinimumWidth = 6;
			this->LUGAR->Name = L"LUGAR";
			this->LUGAR->Width = 125;
			// 
			// ASIENTOS
			// 
			this->ASIENTOS->HeaderText = L"ASIENTOS";
			this->ASIENTOS->MinimumWidth = 6;
			this->ASIENTOS->Name = L"ASIENTOS";
			this->ASIENTOS->Width = 125;
			// 
			// CondicionesDellevadoForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1042, 492);
			this->Controls->Add(this->dgv_VIAJE);
			this->Controls->Add(this->btn_add);
			this->Controls->Add(this->btn_modificar);
			this->Controls->Add(this->btn_eliminar);
			this->Controls->Add(this->text_ID);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->text_FECHA);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->text_ASIENTOS);
			this->Controls->Add(this->text_COSTO);
			this->Controls->Add(this->text_LUGAR);
			this->Controls->Add(this->text_HORA);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"CondicionesDellevadoForm";
			this->Text = L"INFORMACION DEL CONDUCTOR";
			this->Load += gcnew System::EventHandler(this, &CondicionesDellevadoForm::CondicionesDellevadoForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_VIAJE))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
     private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		VentanadeConfirmacionForm^ confirmacion = gcnew VentanadeConfirmacionForm();
	    this->Close();
		confirmacion->TopMost = true;
		confirmacion->Show();
     }
	private: System::Void CondicionesDellevadoForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

    Void VerificarServicios() {
		List<Viaje^>^ Viajelista = Service::consultarViajes();
			   if (Viajelista->Count == 0) {
				   btn_add->Enabled = true; // Habilitar el botón Agregar
				   btn_eliminar->Enabled = false;
				   btn_modificar->Enabled = false;
			   }
			   else {
				   btn_add->Enabled = false; // Deshabilitar el botón Agregar
				   btn_eliminar->Enabled = true;
				   btn_modificar->Enabled = true;
			   }
		   }
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}

	   void ClearControls() {
		   text_ID->Text = "";
		   text_HORA->Text = "";
		   text_LUGAR->Text = "";
		   text_FECHA->Text = "";
		   text_COSTO->Text = "";
	
		   
	   }
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	int id = Convert::ToInt32(text_ID->Text);
	int horaSalida = Convert::ToInt32(text_HORA->Text);
	String^ ultimoParadero = text_LUGAR->Text;
	String^ fechaViaje = text_FECHA->Text;
	
	double precioViaje = Convert::ToDouble(text_COSTO->Text);
	

	Viaje ^viajecito = gcnew Viaje();
	viajecito->Id = id;
	viajecito->HoraSalida = horaSalida;
	viajecito->UltimoParadero = ultimoParadero;
	viajecito->FechaViaje = fechaViaje;
	viajecito->PrecioViaje = precioViaje;

	Service::AddViaje(viajecito);
	VerificarServicios();

	ShowViaje();
	

}

	   

void ShowViaje() {
	List<Viaje^>^ Viajelista = Service::consultarViajes();
	dgv_VIAJE->Rows->Clear();
	for (int i = 0; i < Viajelista->Count; i++) {
		dgv_VIAJE->Rows->Add(gcnew array<String^> {"" + Viajelista[i]->Id, "" + Viajelista[i]->HoraSalida,
			Viajelista[i]->UltimoParadero, Viajelista[i]->FechaViaje, "" + Viajelista[i]->PrecioViaje});
	}
}
private: System::Void btn_eliminar_Click(System::Object^ sender, System::EventArgs^ e) {
	int id = Convert::ToInt32(text_ID->Text);
	Service::EliminarViaje(id);
	ShowViaje();
	VerificarServicios();
}
private: System::Void btn_modificar_Click(System::Object^ sender, System::EventArgs^ e) {
	int id = Convert::ToInt32(text_ID->Text);
	int horaSalida = Convert::ToInt32(text_HORA->Text);
	String^ ultimoParadero = text_LUGAR->Text;
	String^ fechaViaje = text_FECHA->Text;

	double precioViaje = Convert::ToDouble(text_COSTO->Text);
	

	Viaje^ viajecito = gcnew Viaje();
	viajecito->Id = id;
	viajecito->HoraSalida = horaSalida;
	viajecito->UltimoParadero = ultimoParadero;
	viajecito->FechaViaje = fechaViaje;
	viajecito->PrecioViaje = precioViaje;
	

	Service::ModificarViaje(viajecito);
	ShowViaje();
	VerificarServicios();
}
};
}
