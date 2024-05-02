#pragma once
#include "CondicionesDellevadoForm.h"
namespace STPUCPGUIAPP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de VerificarHuellaDactilarForm
	/// </summary>
	public ref class VerificarHuellaDactilarForm : public System::Windows::Forms::Form
	{
	public:
		VerificarHuellaDactilarForm(void)
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
		~VerificarHuellaDactilarForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(218, 207);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(314, 62);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Comprobar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &VerificarHuellaDactilarForm::button1_Click);
			// 
			// VerificarHuellaDactilarForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(746, 295);
			this->Controls->Add(this->button1);
			this->Name = L"VerificarHuellaDactilarForm";
			this->Text = L"Ventana de Verificación";
			this->Load += gcnew System::EventHandler(this, &VerificarHuellaDactilarForm::VerificarHuellaDactilarForm_Load);
			this->ResumeLayout(false);


			///this->Controls->Add(this->button1);
		}
#pragma endregion
	private: System::Void VerificarHuellaDactilarForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		CondicionesDellevadoForm^ llevado = gcnew CondicionesDellevadoForm();
		this->Close();
		llevado->TopMost = true;
		llevado->Show();

	}
	};
}
