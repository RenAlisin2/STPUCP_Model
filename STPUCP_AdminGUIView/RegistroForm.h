#pragma once
#include "QuesoyForm.h"

namespace STPUCPAdminGUIView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de RegistroForm
	/// </summary>
	public ref class RegistroForm : public System::Windows::Forms::Form
	{
	public:
		RegistroForm(void)
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
		~RegistroForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textNOMBRE;
	private: System::Windows::Forms::TextBox^ textAP_MATERNO;

	protected:


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textAP_PATERNO;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textID;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ text_telefono;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textCodigo;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ text_contraseña;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textrepeat_contraseña;


	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ text_correo;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ btnCreate;




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
			this->textNOMBRE = (gcnew System::Windows::Forms::TextBox());
			this->textAP_MATERNO = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textAP_PATERNO = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textID = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->text_telefono = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textCodigo = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->text_contraseña = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textrepeat_contraseña = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->text_correo = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->btnCreate = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(36, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(94, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ingrese su nombre";
			// 
			// textNOMBRE
			// 
			this->textNOMBRE->Location = System::Drawing::Point(136, 33);
			this->textNOMBRE->Name = L"textNOMBRE";
			this->textNOMBRE->Size = System::Drawing::Size(260, 20);
			this->textNOMBRE->TabIndex = 1;
			// 
			// textAP_MATERNO
			// 
			this->textAP_MATERNO->Location = System::Drawing::Point(181, 85);
			this->textAP_MATERNO->Name = L"textAP_MATERNO";
			this->textAP_MATERNO->Size = System::Drawing::Size(215, 20);
			this->textAP_MATERNO->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(36, 88);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(138, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Ingrese su Apellido Materno";
			// 
			// textAP_PATERNO
			// 
			this->textAP_PATERNO->Location = System::Drawing::Point(181, 59);
			this->textAP_PATERNO->Name = L"textAP_PATERNO";
			this->textAP_PATERNO->Size = System::Drawing::Size(215, 20);
			this->textAP_PATERNO->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(36, 62);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(136, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Ingrese su Apellido Paterno";
			// 
			// textID
			// 
			this->textID->Location = System::Drawing::Point(120, 137);
			this->textID->Name = L"textID";
			this->textID->Size = System::Drawing::Size(276, 20);
			this->textID->TabIndex = 11;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(36, 140);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(78, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Ingrese su DNI";
			// 
			// text_telefono
			// 
			this->text_telefono->Location = System::Drawing::Point(181, 163);
			this->text_telefono->Name = L"text_telefono";
			this->text_telefono->Size = System::Drawing::Size(215, 20);
			this->text_telefono->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(36, 166);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(143, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Ingrese su número telefónico";
			// 
			// textCodigo
			// 
			this->textCodigo->Location = System::Drawing::Point(165, 111);
			this->textCodigo->Name = L"textCodigo";
			this->textCodigo->Size = System::Drawing::Size(231, 20);
			this->textCodigo->TabIndex = 7;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(36, 114);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(123, 13);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Ingrese su código PUCP";
			// 
			// text_contraseña
			// 
			this->text_contraseña->Location = System::Drawing::Point(161, 215);
			this->text_contraseña->Name = L"text_contraseña";
			this->text_contraseña->Size = System::Drawing::Size(235, 20);
			this->text_contraseña->TabIndex = 17;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(36, 218);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(119, 13);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Ingrese una contraseña";
			// 
			// textrepeat_contraseña
			// 
			this->textrepeat_contraseña->Location = System::Drawing::Point(161, 241);
			this->textrepeat_contraseña->Name = L"textrepeat_contraseña";
			this->textrepeat_contraseña->Size = System::Drawing::Size(235, 20);
			this->textrepeat_contraseña->TabIndex = 15;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(36, 244);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(114, 13);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Repita esa contraseña";
			// 
			// text_correo
			// 
			this->text_correo->Location = System::Drawing::Point(181, 189);
			this->text_correo->Name = L"text_correo";
			this->text_correo->Size = System::Drawing::Size(215, 20);
			this->text_correo->TabIndex = 13;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(36, 192);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(144, 13);
			this->label9->TabIndex = 12;
			this->label9->Text = L"Ingrese su correo electrónico";
			// 
			// btnCreate
			// 
			this->btnCreate->Location = System::Drawing::Point(39, 283);
			this->btnCreate->Name = L"btnCreate";
			this->btnCreate->Size = System::Drawing::Size(356, 57);
			this->btnCreate->TabIndex = 18;
			this->btnCreate->Text = L"Crear cuenta";
			this->btnCreate->UseVisualStyleBackColor = true;
			this->btnCreate->Click += gcnew System::EventHandler(this, &RegistroForm::button1_Click);
			// 
			// RegistroForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(448, 353);
			this->Controls->Add(this->btnCreate);
			this->Controls->Add(this->text_contraseña);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textrepeat_contraseña);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->text_correo);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textID);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->text_telefono);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textCodigo);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textAP_PATERNO);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textAP_MATERNO);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textNOMBRE);
			this->Controls->Add(this->label1);
			this->Name = L"RegistroForm";
			this->Text = L"Nueva Cuenta";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		String^ nombre = textNOMBRE->Text;
		String^ apellido_paterno = textAP_PATERNO->Text;
		String^ apellido_materno = textAP_MATERNO->Text;
		int codigo = Int32::Parse(textCodigo->Text);
		int telefono = Int32::Parse(text_telefono->Text);
		String^ correo = text_correo->Text;
		String^ contraseña = text_contraseña->Text;
		String^ repetir_contraseña = textrepeat_contraseña->Text;
		
		
		if (String::IsNullOrWhiteSpace(nombre) || String::IsNullOrWhiteSpace(apellido_paterno) || String::IsNullOrWhiteSpace(apellido_paterno)) {
			MessageBox::Show("Falta completar algún(unos) campos del registro", "Advertencia", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		
	
		if ((nombre != "") && (apellido_paterno != "") && (apellido_materno != "") && (contraseña != "") && (repetir_contraseña != "") && (correo != "")) {

			if (contraseña == repetir_contraseña) {
				Usuario^ nuevo_usuario = gcnew Usuario();
				nuevo_usuario->Id = id;
				nuevo_usuario->ApellidoMaterno = apellido_materno;
				nuevo_usuario->ApellidoPaterno = apellido_paterno;
				nuevo_usuario->CodigoPUCP = codigo;

				nuevo_usuario->NumeroTelefono = telefono;
				nuevo_usuario->Correo = correo;
				nuevo_usuario->Contraseña = contraseña;
				nuevo_usuario->Nombre = nombre;



				STPUCPAdminController::controller::AddUser(nuevo_usuario);
				MessageBox::Show("Cuenta creada con exito.");
				QuesoyForm^ quesoyform = gcnew QuesoyForm();
				this->Close();
				quesoyform->TopMost = true;
				quesoyform->Show();
			}
			else {
				MessageBox::Show(" LAS CONTRASEÑAS NO SON IGUALES", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}

		}
		else {
			MessageBox::Show("SE DEBE COMPLETAR TODOS LOS ESPACIOS", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		
		
		
	}

};
}
