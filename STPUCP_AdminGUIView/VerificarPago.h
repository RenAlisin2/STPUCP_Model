#pragma once
#include "RecepcionForm.h"

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
	/// Resumen de VerificarPago
	/// </summary>
	public ref class VerificarPago : public System::Windows::Forms::Form
	{
	public:
		VerificarPago(void)
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
		~VerificarPago()
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
	public: System::Windows::Forms::TextBox^ textIdOrden;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textIdOrden = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(112, 124);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(256, 97);
			this->button1->TabIndex = 0;
			this->button1->Text = L"VERIFICAR";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &VerificarPago::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Menu;
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(95, 88);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(305, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"EL CONDUCTOR ESTA VERIFICANDO EL PAGO";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(57, 257);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(113, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"ID DE LA ORDEN";
			// 
			// textIdOrden
			// 
			this->textIdOrden->Location = System::Drawing::Point(178, 257);
			this->textIdOrden->Name = L"textIdOrden";
			this->textIdOrden->Size = System::Drawing::Size(100, 22);
			this->textIdOrden->TabIndex = 3;
			// 
			// VerificarPago
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(506, 301);
			this->Controls->Add(this->textIdOrden);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"VerificarPago";
			this->Text = L"VerificarPago";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Orden^ ordencita = controller::QueryOrdenById(Convert::ToInt32(textIdOrden->Text));
		if (ordencita->OrdenPagada == 0) {
			MessageBox::Show("EL CONDUCTOR A�N NO REVISA SU ESTADO DE PAGO");

		}
		else {
			if (ordencita->OrdenPagada == 1) {
				MessageBox::Show("EL CONDUCTOR HA RECIBIDO SU PAGO, PROCEDA A IR AL VEHICULO A LA HORA ACORDADA Y MARCAR SUS ASISTENCIA");

				RecepcionForm^ presente = gcnew RecepcionForm();
				//this->Close();
				//boletaForm->TopMost = true;
				presente->text_ordenId->Text = textIdOrden->Text;

				presente->TopMost = true;




				presente->ShowDialog();


			}
			else {
				MessageBox::Show("EL CONDUCTOR NO HA RECIBIDO SU PAGO, PROCEDA A HACERLO O SU ORDEN SER� ELIMINADA");
			}
		}


	}
	};
}
