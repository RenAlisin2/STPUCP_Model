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
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~QuesoyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;

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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(39, 35);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(426, 125);
			this->button1->TabIndex = 0;
			this->button1->Text = L"ALUMNO";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &QuesoyForm::btnIngresarPasajero_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(39, 193);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(426, 125);
			this->button2->TabIndex = 1;
			this->button2->Text = L"CHOFER";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &QuesoyForm::button2_Click);
			// 
			// QuesoyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(522, 387);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"QuesoyForm";
			this->Text = L"QuesoyForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	









	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		RegistroConductorForm^ registroConductorForm = gcnew RegistroConductorForm();
		this->Close();
		registroConductorForm->TopMost = true;
		registroConductorForm->Show();
	}
	private: System::Void btnIngresarPasajero_Click(System::Object^ sender, System::EventArgs^ e) {
		STPUCPAdminGUIView::PasajeroForm^ pasajeroForm = gcnew STPUCPAdminGUIView::PasajeroForm();
		this->Close();
		pasajeroForm->TopMost = true;
		pasajeroForm->ShowDialog();
	}
	};

}
