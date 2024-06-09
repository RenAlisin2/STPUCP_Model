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
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~VentanaPagoForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	public: System::Windows::Forms::TextBox^ text_orden;
	private:

	private: System::Windows::Forms::Label^ label2;
	public: System::Windows::Forms::TextBox^ text_viaje;
	private:


	protected:

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->text_orden = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->text_viaje = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBox1->Location = System::Drawing::Point(31, 28);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(453, 298);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(31, 408);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
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
			this->label1->Location = System::Drawing::Point(31, 364);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Id Orden";
			// 
			// text_orden
			// 
			this->text_orden->Location = System::Drawing::Point(114, 364);
			this->text_orden->Name = L"text_orden";
			this->text_orden->Size = System::Drawing::Size(100, 22);
			this->text_orden->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(322, 364);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 16);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Id Viaje";
			// 
			// text_viaje
			// 
			this->text_viaje->Location = System::Drawing::Point(410, 363);
			this->text_viaje->Name = L"text_viaje";
			this->text_viaje->Size = System::Drawing::Size(100, 22);
			this->text_viaje->TabIndex = 5;
			// 
			// VentanaPagoForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(669, 496);
			this->Controls->Add(this->text_viaje);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->text_orden);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"VentanaPagoForm";
			this->Text = L"Ventana de pago";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {


		int idorden = Convert::ToInt32(text_orden->Text);
		int idviaje = Convert::ToInt32(text_viaje ->Text);
		Viaje^ viaje= controller::QueryJourneysById(idviaje);


		Orden^ nueva_orden = gcnew Orden();
		nueva_orden->Id = idorden;
		nueva_orden->Id_viaje = idviaje;
		nueva_orden->Distrito = viaje->Distrito;
		nueva_orden->Precio = viaje->PrecioViaje;
		nueva_orden->Fecha = viaje->FechaViaje;

		controller::AddOrder(nueva_orden);
		


		RecepcionForm^ recepcionform = gcnew RecepcionForm();
		recepcionform->text_ordenId->Text = text_orden->Text;
		recepcionform->text_viajeId->Text = text_viaje->Text;
		recepcionform->ShowDialog();
		this->Close();
	}
	};
}
