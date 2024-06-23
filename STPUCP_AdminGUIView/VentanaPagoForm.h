#pragma once
#include "RecepcionForm.h";

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
	/// Resumen de VentanaPagoForm
	/// </summary>
	public ref class VentanaPagoForm : public System::Windows::Forms::Form
	{
	public:
		VentanaPagoForm(void)
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
		~VentanaPagoForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pbYape;
	protected:

	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	public: System::Windows::Forms::TextBox^ text_orden;
	private:

	private: System::Windows::Forms::Label^ label2;
	public: System::Windows::Forms::TextBox^ text_viaje;
	private: System::Windows::Forms::Label^ label3;
	public:
	public: System::Windows::Forms::TextBox^ textPrecio;
	private:
	private:


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
			this->pbYape = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->text_orden = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->text_viaje = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textPrecio = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbYape))->BeginInit();
			this->SuspendLayout();
			// 
			// pbYape
			// 
			this->pbYape->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pbYape->Location = System::Drawing::Point(31, 28);
			this->pbYape->Margin = System::Windows::Forms::Padding(4);
			this->pbYape->Name = L"pbYape";
			this->pbYape->Size = System::Drawing::Size(453, 298);
			this->pbYape->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbYape->TabIndex = 0;
			this->pbYape->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(31, 408);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(449, 63);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Pago realizado";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &VentanaPagoForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(28, 376);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Id Orden";
			// 
			// text_orden
			// 
			this->text_orden->Location = System::Drawing::Point(108, 370);
			this->text_orden->Name = L"text_orden";
			this->text_orden->ReadOnly = true;
			this->text_orden->Size = System::Drawing::Size(100, 22);
			this->text_orden->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(233, 370);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 16);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Id Viaje";
			// 
			// text_viaje
			// 
			this->text_viaje->Location = System::Drawing::Point(291, 367);
			this->text_viaje->Name = L"text_viaje";
			this->text_viaje->ReadOnly = true;
			this->text_viaje->Size = System::Drawing::Size(100, 22);
			this->text_viaje->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(418, 373);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(97, 16);
			this->label3->TabIndex = 6;
			this->label3->Text = L"PRECIO VIAJE";
			// 
			// textPrecio
			// 
			this->textPrecio->Location = System::Drawing::Point(543, 363);
			this->textPrecio->Name = L"textPrecio";
			this->textPrecio->ReadOnly = true;
			this->textPrecio->Size = System::Drawing::Size(100, 22);
			this->textPrecio->TabIndex = 7;
			// 
			// VentanaPagoForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(669, 496);
			this->Controls->Add(this->textPrecio);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->text_viaje);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->text_orden);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pbYape);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"VentanaPagoForm";
			this->Text = L"Ventana de pago";
			this->Load += gcnew System::EventHandler(this, &VentanaPagoForm::VentanaPagoForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbYape))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Contexto^ contexto = STPUCP_Model::Contexto::ObtenerInstancia();
		if (contexto->ObtenerIdUsuario() != 0 && controller::QueryUsersById(contexto->ObtenerIdUsuario())->Rol == "Pasajero") {
			int idorden = Convert::ToInt32(text_orden->Text);
			int idviaje = Convert::ToInt32(text_viaje->Text);
			Viaje^ viaje = controller::QueryJourneysById(idviaje);

			Orden^ nueva_orden = gcnew Orden();
			nueva_orden->Id = idorden;
			MessageBox::Show("El Id de la orden es:" + idorden);
			nueva_orden->Id_viaje = idviaje;
			nueva_orden->Distrito = viaje->Distrito;
			nueva_orden->Precio = Convert::ToDouble(textPrecio->Text);
			
			nueva_orden->Fecha = viaje->FechaViaje;

			nueva_orden->PasajeroId = controller::QueryUsersById(contexto->ObtenerIdUsuario())->CodigoPUCP; // Asigna el CodigoPUCP del pasajero registrado

			controller::AddOrder(nueva_orden);

			RecepcionForm^ recepcionform = gcnew RecepcionForm();
			recepcionform->text_ordenId->Text = text_orden->Text;
			recepcionform->text_viajeId->Text = text_viaje->Text;
			recepcionform->ShowDialog();
			this->Close();
		}
		else {
			MessageBox::Show("No hay pasajero registrado para asignar a la orden", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	
		
	}
	private: System::Void VentanaPagoForm_Load(System::Object^ sender, System::EventArgs^ e) {

		int IdViaje= Convert::ToInt32(text_viaje->Text);
		Viaje^ viaje = controller::QueryJourneysById(IdViaje);
		int codigoPucp = viaje->ConductorId;
		
		int UsuarioID = codigoPucp;
		Usuario^ Usuario = controller::QueryUsersById(UsuarioID);
		Conductor^ conductor = dynamic_cast<Conductor^>(Usuario);
		// Cargar la imagen del conductor
		if (conductor->FotoYape != nullptr) {
			System::IO::MemoryStream^ msQR = gcnew System::IO::MemoryStream(conductor->FotoYape);
			pbYape->Image = Image::FromStream(msQR);
		}
		else {
			pbYape->Image = nullptr;
		}
			
	}
};
}
