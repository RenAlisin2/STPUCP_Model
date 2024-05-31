#pragma once

#include "RegistroForm.h"

//#include "AdminMainForm.h"

namespace STPUCPAdminGUIView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	//using namespace STPUCPAdminController;

	/// <summary>
	/// Resumen de LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	private:
		Form^ RefAdminMainForm; 
	public:
		LoginForm(Form^ Form)
		{
			this->RefAdminMainForm;

			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtUsuario;
	private: System::Windows::Forms::TextBox^ txtContraseña;
	private: System::Windows::Forms::Button^ btnIngresar;
	private: System::Windows::Forms::Button^ btnRegistrarse;
	private: System::Windows::Forms::Label^ label3;
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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtUsuario = (gcnew System::Windows::Forms::TextBox());
			this->txtContraseña = (gcnew System::Windows::Forms::TextBox());
			this->btnIngresar = (gcnew System::Windows::Forms::Button());
			this->btnRegistrarse = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(65, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(75, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Código PUCP:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(65, 70);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Contraseña";
			// 
			// txtUsuario
			// 
			this->txtUsuario->Location = System::Drawing::Point(154, 34);
			this->txtUsuario->Name = L"txtUsuario";
			this->txtUsuario->Size = System::Drawing::Size(205, 20);
			this->txtUsuario->TabIndex = 2;
			// 
			// txtContraseña
			// 
			this->txtContraseña->Location = System::Drawing::Point(154, 67);
			this->txtContraseña->Name = L"txtContraseña";
			this->txtContraseña->Size = System::Drawing::Size(205, 20);
			this->txtContraseña->TabIndex = 3;
			this->txtContraseña->UseSystemPasswordChar = true;
			this->txtContraseña->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &LoginForm::txtContraseña_KeyDown);
			// 
			// btnIngresar
			// 
			this->btnIngresar->Location = System::Drawing::Point(156, 132);
			this->btnIngresar->Name = L"btnIngresar";
			this->btnIngresar->Size = System::Drawing::Size(158, 31);
			this->btnIngresar->TabIndex = 4;
			this->btnIngresar->Text = L"Ingresar";
			this->btnIngresar->UseVisualStyleBackColor = true;
			this->btnIngresar->Click += gcnew System::EventHandler(this, &LoginForm::btnIngresar_Click);
			// 
			// btnRegistrarse
			// 
			this->btnRegistrarse->Location = System::Drawing::Point(154, 209);
			this->btnRegistrarse->Name = L"btnRegistrarse";
			this->btnRegistrarse->Size = System::Drawing::Size(160, 25);
			this->btnRegistrarse->TabIndex = 5;
			this->btnRegistrarse->Text = L"Registrarse";
			this->btnRegistrarse->UseVisualStyleBackColor = true;
			this->btnRegistrarse->Click += gcnew System::EventHandler(this, &LoginForm::btnRegistrarse_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(167, 181);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(135, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"¿No tienes alguna cuenta\?";
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(458, 259);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->btnRegistrarse);
			this->Controls->Add(this->btnIngresar);
			this->Controls->Add(this->txtContraseña);
			this->Controls->Add(this->txtUsuario);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"LoginForm";
			this->Text = L"LoginForm";
//			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &LoginForm::LoginForm_FormClosing);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	

private: System::Void btnRegistrarse_Click(System::Object^ sender, System::EventArgs^ e){
	
	RegistroForm^ registroform = gcnew RegistroForm();

	registroform->ShowDialog();


}
	private: System::Void btnIngresar_Click(System::Object^ sender, System::EventArgs^ e);
    //private: System::Void LoginForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e); 
	
	
private: System::Void txtContraseña_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyData == Keys::Enter)
		btnIngresar->PerformClick();
}
};
}
