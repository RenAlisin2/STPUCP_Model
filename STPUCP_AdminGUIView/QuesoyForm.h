#pragma once
#include "RegistroConductorForm.h"
#include "PasajeroForm.h"
namespace STPUCPAdminGUIView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de QuesoyForm
	/// </summary>
	public ref class QuesoyForm : public System::Windows::Forms::Form
	{
	public:
		QuesoyForm(void)
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
		~QuesoyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Pasajero;
	private: System::Windows::Forms::Button^ Conductor;
	protected:

	protected:


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Pasajero = (gcnew System::Windows::Forms::Button());
			this->Conductor = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Pasajero
			// 
			this->Pasajero->Location = System::Drawing::Point(39, 43);
			this->Pasajero->Name = L"Pasajero";
			this->Pasajero->Size = System::Drawing::Size(426, 125);
			this->Pasajero->TabIndex = 0;
			this->Pasajero->Text = L"ALUMNO";
			this->Pasajero->UseVisualStyleBackColor = true;
			this->Pasajero->Click += gcnew System::EventHandler(this, &QuesoyForm::Pasajero_Click);
			// 
			// Conductor
			// 
			this->Conductor->Location = System::Drawing::Point(39, 193);
			this->Conductor->Name = L"Conductor";
			this->Conductor->Size = System::Drawing::Size(426, 125);
			this->Conductor->TabIndex = 1;
			this->Conductor->Text = L"CHOFER";
			this->Conductor->UseVisualStyleBackColor = true;
			this->Conductor->Click += gcnew System::EventHandler(this, &QuesoyForm::Conductor_Click);
			// 
			// QuesoyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(522, 387);
			this->Controls->Add(this->Conductor);
			this->Controls->Add(this->Pasajero);
			this->Name = L"QuesoyForm";
			this->Text = L"QuesoyForm";
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void Conductor_Click(System::Object^ sender, System::EventArgs^ e) {
		RegistroConductorForm^ registroConductorForm = gcnew RegistroConductorForm();
		this->Close();
		registroConductorForm->TopMost = true;
		registroConductorForm->Show();
	}

	private: System::Void Pasajero_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	};
}