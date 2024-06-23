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
	public: System::Windows::Forms::TextBox^ textIdViaje;
	private:

	private: System::Windows::Forms::Label^ label2;
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
			this->textIdViaje = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(27, 34);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(158, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ingrese su Huella dactilar";
			// 
			// CONTINUAR
			// 
			this->CONTINUAR->Location = System::Drawing::Point(93, 402);
			this->CONTINUAR->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->CONTINUAR->Name = L"CONTINUAR";
			this->CONTINUAR->Size = System::Drawing::Size(251, 31);
			this->CONTINUAR->TabIndex = 1;
			this->CONTINUAR->Text = L"Verificarme";
			this->CONTINUAR->UseVisualStyleBackColor = true;
			this->CONTINUAR->Click += gcnew System::EventHandler(this, &HuellaForm::CONTINUAR_Click);
			// 
			// textIdViaje
			// 
			this->textIdViaje->Location = System::Drawing::Point(319, 12);
			this->textIdViaje->Name = L"textIdViaje";
			this->textIdViaje->ReadOnly = true;
			this->textIdViaje->Size = System::Drawing::Size(100, 22);
			this->textIdViaje->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(261, 18);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Id Viaje";
			// 
			// HuellaForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(477, 540);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textIdViaje);
			this->Controls->Add(this->CONTINUAR);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"HuellaForm";
			this->Text = L"HuellaForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CONTINUAR_Click(System::Object^ sender, System::EventArgs^ e) {
		ESPERANDOPAGO^ esperaform = gcnew ESPERANDOPAGO();
		esperaform->textViaje->Text = textIdViaje->Text;
		esperaform->TopMost = true;
		esperaform->Show();
	}
	};
}

