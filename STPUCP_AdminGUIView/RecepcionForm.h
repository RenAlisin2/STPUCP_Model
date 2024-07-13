#pragma once
#include "Presente.h"

namespace STPUCPAdminGUIView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace STPUCP_Model;
	using namespace STPUCPAdminController;

	/// <summary>
	/// Resumen de RecepcionForm
	/// </summary>
	public ref class RecepcionForm : public System::Windows::Forms::Form
	{
	public:
		RecepcionForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~RecepcionForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pBVehiculo;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label6;
	public: System::Windows::Forms::TextBox^ text_ordenId;
	private:

	private: System::Windows::Forms::Label^ label7;
	public: System::Windows::Forms::TextBox^ text_viajeId;

	public:

	private:


	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pBVehiculo = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->text_ordenId = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->text_viajeId = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pBVehiculo))->BeginInit();
			this->SuspendLayout();
			// 
			// pBVehiculo
			// 
			this->pBVehiculo->Location = System::Drawing::Point(317, 51);
			this->pBVehiculo->Name = L"pBVehiculo";
			this->pBVehiculo->Size = System::Drawing::Size(229, 180);
			this->pBVehiculo->TabIndex = 0;
			this->pBVehiculo->TabStop = false;
			this->pBVehiculo->Click += gcnew System::EventHandler(this, &RecepcionForm::pBVehiculo_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(195, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Dirigase al carro del modelo de la figura:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 54);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(88, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"N�mero de placa";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox1->Location = System::Drawing::Point(140, 51);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(153, 20);
			this->textBox1->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 85);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(75, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Color del carro";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox2->Location = System::Drawing::Point(140, 82);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(153, 20);
			this->textBox2->TabIndex = 5;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox3->Location = System::Drawing::Point(140, 148);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(153, 20);
			this->textBox3->TabIndex = 9;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 151);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(100, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Lugar de encuentro";
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox4->Location = System::Drawing::Point(140, 115);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(153, 20);
			this->textBox4->TabIndex = 7;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 118);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(110, 13);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Nombre de conductor";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(4, 251);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(556, 37);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Ya llegu�";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &RecepcionForm::button1_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 182);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(49, 13);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Id_orden";
			// 
			// text_ordenId
			// 
			this->text_ordenId->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->text_ordenId->Location = System::Drawing::Point(140, 182);
			this->text_ordenId->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->text_ordenId->Name = L"text_ordenId";
			this->text_ordenId->ReadOnly = true;
			this->text_ordenId->Size = System::Drawing::Size(153, 20);
			this->text_ordenId->TabIndex = 12;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(12, 211);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(44, 13);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Id_viaje";
			// 
			// text_viajeId
			// 
			this->text_viajeId->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->text_viajeId->Location = System::Drawing::Point(140, 211);
			this->text_viajeId->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->text_viajeId->Name = L"text_viajeId";
			this->text_viajeId->ReadOnly = true;
			this->text_viajeId->Size = System::Drawing::Size(153, 20);
			this->text_viajeId->TabIndex = 14;
			// 
			// RecepcionForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(572, 299);
			this->Controls->Add(this->text_viajeId);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->text_ordenId);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pBVehiculo);
			this->Name = L"RecepcionForm";
			this->ShowIcon = false;
			this->Text = L"Recepcion de clientes";
			this->Load += gcnew System::EventHandler(this, &RecepcionForm::RecepcionForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pBVehiculo))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void RecepcionForm_Load(System::Object^ sender, System::EventArgs^ e) {

		int idorden_ = Convert::ToInt32(text_ordenId->Text);
		Orden^ new_orden = controller::QueryOrderById(idorden_);
		int idViaje = new_orden->Id_viaje;
		Viaje^ viajecito = controller::QueryJourneysById(idViaje);

		int idconductor = viajecito->ConductorId;
		MessageBox::Show("codigo :" + idconductor);
		Usuario^ Usuario = controller::QueryUsersById(idconductor);
		Conductor^ conductor = dynamic_cast<Conductor^>(Usuario);

		textBox1->Text = conductor->PlacaCarro;
		textBox2->Text = conductor->ColorCarro;
		textBox4->Text = conductor->Nombre;
		textBox3->Text = viajecito->Lugar;

	}
	private: System::Void pBVehiculo_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void text_estrellas_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int idorden = Convert::ToInt32(text_ordenId->Text);

		Orden^ orden = controller::QueryOrdenById(idorden);
		MessageBox::Show("La lista Orden es : " + idorden);


		orden->Id = orden->Id;
		orden->Distrito = orden->Distrito;
		orden->Precio = orden->Precio;
		orden->Fecha = orden->Fecha;
		orden->Id_viaje = orden->Id_viaje;
		orden->PasajeroId = orden->PasajeroId;
		orden->OrdenPagada = orden->OrdenPagada;
		orden->Presente = 1;
		controller::UpdateOrder(orden);

		Presente^ presente = gcnew Presente();
		//this->Close();
		//boletaForm->TopMost = true;
		presente->textOrden->Text = text_ordenId->Text;

		presente->TopMost = true;




		presente->ShowDialog();

		// Cerrar los formularios
		 // Cierra el formulario actual
	}
	};
}
