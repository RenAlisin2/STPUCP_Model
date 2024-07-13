#pragma once

#include "ESPERANDOPAGO.h"
namespace STPUCPAdminGUIView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de HuellaForm
	/// </summary>
	public ref class HuellaForm : public System::Windows::Forms::Form
	{
	public:
		HuellaForm(void)
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
		~HuellaForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ CONTINUAR;
	private: System::Windows::Forms::Label^ label2;
	public: System::Windows::Forms::TextBox^ textIdViaje;

	private: System::Windows::Forms::Button^ button1;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->CONTINUAR = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textIdViaje = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(20, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(126, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ingrese su Huella dactilar";
			// 
			// CONTINUAR
			// 
			this->CONTINUAR->Location = System::Drawing::Point(23, 56);
			this->CONTINUAR->Margin = System::Windows::Forms::Padding(2);
			this->CONTINUAR->Name = L"CONTINUAR";
			this->CONTINUAR->Size = System::Drawing::Size(123, 27);
			this->CONTINUAR->TabIndex = 1;
			this->CONTINUAR->Text = L"Verificarme";
			this->CONTINUAR->UseVisualStyleBackColor = true;
			this->CONTINUAR->Click += gcnew System::EventHandler(this, &HuellaForm::CONTINUAR_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(184, 28);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"ID del Viaje";
			// 
			// textIdViaje
			// 
			this->textIdViaje->Location = System::Drawing::Point(251, 25);
			this->textIdViaje->Name = L"textIdViaje";
			this->textIdViaje->ReadOnly = true;
			this->textIdViaje->Size = System::Drawing::Size(75, 20);
			this->textIdViaje->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(187, 56);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(123, 27);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Volver";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &HuellaForm::button1_Click);
			// 
			// HuellaForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(358, 102);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textIdViaje);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->CONTINUAR);
			this->Controls->Add(this->label1);
			this->Name = L"HuellaForm";
			this->Text = L"HuellaForm";
			this->Load += gcnew System::EventHandler(this, &HuellaForm::HuellaForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CONTINUAR_Click(System::Object^ sender, System::EventArgs^ e) {
		Contexto^ contexto = STPUCP_Model::Contexto::ObtenerInstancia();
		int idConductor = contexto->ObtenerIdUsuario();
		Usuario^ manito = controller::QueryUsersById(idConductor);
		bool verificado=false;
		while(!verificado){
			verificado = controller::LeerHuella(manito->Huella);
		}

		ESPERANDOPAGO^ esperaform = gcnew ESPERANDOPAGO();
		esperaform->textViaje->Text = textIdViaje->Text;
		esperaform->TopMost = true;
		esperaform->Show();
	}
	private: System::Void HuellaForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}

