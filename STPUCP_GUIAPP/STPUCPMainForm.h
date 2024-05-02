#pragma once
#include "RegistroForm.h"
#include "Registro_Conductor.h"

namespace STPUCPGUIAPP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de STPUCPMainForm
	/// </summary>
	public ref class STPUCPMainForm : public System::Windows::Forms::Form
	{
	public:
		STPUCPMainForm(void)
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
		~STPUCPMainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::Button^ btn_IngresarCuenta;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btn_salir;
	private: System::Windows::Forms::Button^ btn_registrarse;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textIngresar_usuario;
	private: System::Windows::Forms::TextBox^ textIngresar_contraseña;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->btn_IngresarCuenta = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btn_salir = (gcnew System::Windows::Forms::Button());
			this->btn_registrarse = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textIngresar_usuario = (gcnew System::Windows::Forms::TextBox());
			this->textIngresar_contraseña = (gcnew System::Windows::Forms::TextBox());
			this->StartPosition = FormStartPosition::CenterScreen;
			this->SuspendLayout();
			
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(698, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// btn_IngresarCuenta
			// 
			this->btn_IngresarCuenta->Location = System::Drawing::Point(255, 311);
			this->btn_IngresarCuenta->Name = L"btn_IngresarCuenta";
			this->btn_IngresarCuenta->Size = System::Drawing::Size(171, 40);
			this->btn_IngresarCuenta->TabIndex = 2;
			this->btn_IngresarCuenta->Text = L"INGRESAR CUENTA";
			this->btn_IngresarCuenta->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(120, 16);
			this->label1->TabIndex = 4;
			this->label1->Text = L"INICIO DE SESION";
			this->label1->Click += gcnew System::EventHandler(this, &STPUCPMainForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(252, 396);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(149, 16);
			this->label2->TabIndex = 5;
			this->label2->Text = L"¿NO POSEE CUENTA\?";
			this->label2->Click += gcnew System::EventHandler(this, &STPUCPMainForm::label2_Click);
			// 
			// btn_salir
			// 
			this->btn_salir->Location = System::Drawing::Point(556, 425);
			this->btn_salir->Name = L"btn_salir";
			this->btn_salir->Size = System::Drawing::Size(130, 23);
			this->btn_salir->TabIndex = 7;
			this->btn_salir->Text = L"SALIR";
			this->btn_salir->UseVisualStyleBackColor = true;
			this->btn_salir->Click += gcnew System::EventHandler(this, &STPUCPMainForm::btn_salir_Click);
			// 
			// btn_registrarse
			// 
			this->btn_registrarse->Location = System::Drawing::Point(260, 415);
			this->btn_registrarse->Name = L"btn_registrarse";
			this->btn_registrarse->Size = System::Drawing::Size(130, 23);
			this->btn_registrarse->TabIndex = 9;
			this->btn_registrarse->Text = L"REGISTRARSE";
			this->btn_registrarse->UseVisualStyleBackColor = true;
			this->btn_registrarse->Click += gcnew System::EventHandler(this, &STPUCPMainForm::button3_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(252, 166);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(174, 16);
			this->label3->TabIndex = 11;
			this->label3->Text = L"INGRESAR CONTRASEÑA";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(257, 98);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(144, 16);
			this->label4->TabIndex = 12;
			this->label4->Text = L"IINGRESAR USUARIO";
			this->label4->Click += gcnew System::EventHandler(this, &STPUCPMainForm::label4_Click);
			// 
			// textIngresar_usuario
			// 
			this->textIngresar_usuario->Location = System::Drawing::Point(273, 126);
			this->textIngresar_usuario->Name = L"textIngresar_usuario";
			this->textIngresar_usuario->Size = System::Drawing::Size(117, 22);
			this->textIngresar_usuario->TabIndex = 13;
			this->textIngresar_usuario->TextChanged += gcnew System::EventHandler(this, &STPUCPMainForm::textIngresar_usuario_TextChanged);
			// 
			// textIngresar_contraseña
			// 
			this->textIngresar_contraseña->Location = System::Drawing::Point(273, 195);
			this->textIngresar_contraseña->Name = L"textIngresar_contraseña";
			this->textIngresar_contraseña->Size = System::Drawing::Size(117, 22);
			this->textIngresar_contraseña->TabIndex = 14;
			// 
			// STPUCPMainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(698, 460);
			this->Controls->Add(this->textIngresar_contraseña);
			this->Controls->Add(this->textIngresar_usuario);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->btn_registrarse);
			this->Controls->Add(this->btn_salir);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btn_IngresarCuenta);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"STPUCPMainForm";
			this->Text = L"ST PUCP";
			this->Load += gcnew System::EventHandler(this, &STPUCPMainForm::STPUCPMainForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void STPUCPMainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn_salir_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	RegistroForm^ registroform = gcnew RegistroForm();
	registroform->StartPosition = FormStartPosition::CenterScreen; 
	registroform->TopMost = true; 
	registroform->Show();
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textIngresar_usuario_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
