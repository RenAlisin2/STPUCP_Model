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
			this->CONTINUAR->Location = System::Drawing::Point(70, 327);
			this->CONTINUAR->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->CONTINUAR->Name = L"CONTINUAR";
			this->CONTINUAR->Size = System::Drawing::Size(188, 25);
			this->CONTINUAR->TabIndex = 1;
			this->CONTINUAR->Text = L"Verificarme";
			this->CONTINUAR->UseVisualStyleBackColor = true;
			this->CONTINUAR->Click += gcnew System::EventHandler(this, &HuellaForm::CONTINUAR_Click);
			// 
			// HuellaForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(358, 439);
			this->Controls->Add(this->CONTINUAR);
			this->Controls->Add(this->label1);
			this->Name = L"HuellaForm";
			this->Text = L"HuellaForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CONTINUAR_Click(System::Object^ sender, System::EventArgs^ e) {
		ESPERANDOPAGO^ esperaform = gcnew ESPERANDOPAGO();
		esperaform->TopMost = true;
		esperaform->Show();
	}
	};
}

