#pragma once
#include "QuesoyForm.h"


namespace STPUCPAdminGUIView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace STPUCP_Model;
	using namespace STPUCPAdminController;
	//using namespace STPUCPPersistance;


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
	private: System::Windows::Forms::TextBox^ textDNI;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ text_telefono;

	private: System::Windows::Forms::Label^ label5;



	private: System::Windows::Forms::TextBox^ text_contraseña;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textrepeat_contraseña;


	private: System::Windows::Forms::Label^ label8;



	private: System::Windows::Forms::Button^ btnCreate;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textCodigo;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ text_correo;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label10;






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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textNOMBRE = (gcnew System::Windows::Forms::TextBox());
			this->textAP_MATERNO = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textAP_PATERNO = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textDNI = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->text_telefono = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->text_contraseña = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textrepeat_contraseña = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->btnCreate = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textCodigo = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->text_correo = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(23, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(97, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ingrese su nombre:";
			// 
			// textNOMBRE
			// 
			this->textNOMBRE->Location = System::Drawing::Point(195, 14);
			this->textNOMBRE->Name = L"textNOMBRE";
			this->textNOMBRE->Size = System::Drawing::Size(219, 20);
			this->textNOMBRE->TabIndex = 1;
			// 
			// textAP_MATERNO
			// 
			this->textAP_MATERNO->Location = System::Drawing::Point(195, 66);
			this->textAP_MATERNO->Name = L"textAP_MATERNO";
			this->textAP_MATERNO->Size = System::Drawing::Size(219, 20);
			this->textAP_MATERNO->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(23, 68);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(141, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Ingrese su Apellido Materno:";
			// 
			// textAP_PATERNO
			// 
			this->textAP_PATERNO->Location = System::Drawing::Point(195, 40);
			this->textAP_PATERNO->Name = L"textAP_PATERNO";
			this->textAP_PATERNO->Size = System::Drawing::Size(219, 20);
			this->textAP_PATERNO->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(23, 42);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(139, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Ingrese su Apellido Paterno:";
			// 
			// textDNI
			// 
			this->textDNI->Location = System::Drawing::Point(194, 92);
			this->textDNI->Name = L"textDNI";
			this->textDNI->Size = System::Drawing::Size(220, 20);
			this->textDNI->TabIndex = 11;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(23, 96);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(81, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Ingrese su DNI:";
			// 
			// text_telefono
			// 
			this->text_telefono->Location = System::Drawing::Point(194, 118);
			this->text_telefono->Name = L"text_telefono";
			this->text_telefono->Size = System::Drawing::Size(220, 20);
			this->text_telefono->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(23, 120);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(146, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Ingrese su número telefónico:";
			// 
			// text_contraseña
			// 
			this->text_contraseña->Location = System::Drawing::Point(194, 196);
			this->text_contraseña->Name = L"text_contraseña";
			this->text_contraseña->Size = System::Drawing::Size(220, 20);
			this->text_contraseña->TabIndex = 17;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(22, 198);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(122, 13);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Ingrese una contraseña:";
			// 
			// textrepeat_contraseña
			// 
			this->textrepeat_contraseña->Location = System::Drawing::Point(194, 222);
			this->textrepeat_contraseña->Name = L"textrepeat_contraseña";
			this->textrepeat_contraseña->Size = System::Drawing::Size(220, 20);
			this->textrepeat_contraseña->TabIndex = 15;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(22, 224);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(117, 13);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Repita esa contraseña:";
			// 
			// btnCreate
			// 
			this->btnCreate->Location = System::Drawing::Point(25, 320);
			this->btnCreate->Name = L"btnCreate";
			this->btnCreate->Size = System::Drawing::Size(185, 35);
			this->btnCreate->TabIndex = 18;
			this->btnCreate->Text = L"Crear cuenta";
			this->btnCreate->UseVisualStyleBackColor = true;
			this->btnCreate->Click += gcnew System::EventHandler(this, &RegistroForm::button1_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(22, 146);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(126, 13);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Ingrese su código PUCP:";
			// 
			// textCodigo
			// 
			this->textCodigo->Location = System::Drawing::Point(194, 144);
			this->textCodigo->Name = L"textCodigo";
			this->textCodigo->Size = System::Drawing::Size(220, 20);
			this->textCodigo->TabIndex = 7;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(22, 172);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(147, 13);
			this->label9->TabIndex = 12;
			this->label9->Text = L"Ingrese su correo electrónico:";
			// 
			// text_correo
			// 
			this->text_correo->Location = System::Drawing::Point(194, 170);
			this->text_correo->Name = L"text_correo";
			this->text_correo->Size = System::Drawing::Size(220, 20);
			this->text_correo->TabIndex = 13;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->ForeColor = System::Drawing::Color::Red;
			this->label11->Location = System::Drawing::Point(22, 274);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(404, 13);
			this->label11->TabIndex = 20;
			this->label11->Text = L"**El email debe ser el proporcionado por la universidad, con dominio \'@pucp.edu.p"
				L"e\'";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->ForeColor = System::Drawing::Color::Red;
			this->label12->Location = System::Drawing::Point(22, 253);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(81, 13);
			this->label12->TabIndex = 21;
			this->label12->Text = L"IMPORTANTE:";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(229, 320);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(185, 35);
			this->button2->TabIndex = 23;
			this->button2->Text = L"Retroceder";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &RegistroForm::button2_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->ForeColor = System::Drawing::Color::Red;
			this->label10->Location = System::Drawing::Point(22, 296);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(344, 13);
			this->label10->TabIndex = 24;
			this->label10->Text = L"**Una vez se validen los campos se le pedrirá ingresar su huella dactilar";
			// 
			// RegistroForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(448, 366);
			this->ControlBox = false;
			this->Controls->Add(this->label10);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->text_correo);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->btnCreate);
			this->Controls->Add(this->textCodigo);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->text_contraseña);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textrepeat_contraseña);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textDNI);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->text_telefono);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textAP_PATERNO);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textAP_MATERNO);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textNOMBRE);
			this->Controls->Add(this->label1);
			this->Name = L"RegistroForm";
			this->ShowIcon = false;
			this->Text = L"Nueva Cuenta";
			this->Load += gcnew System::EventHandler(this, &RegistroForm::RegistroForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		public:
		int RegistrarHuella() {
			int cantidad_usuarios, huella;
			List<Usuario^>^ lista_cant_usuarios = controller::QueryAllUsers();
			cantidad_usuarios = lista_cant_usuarios->Count;
			huella = controller::Guardar_Huella(cantidad_usuarios);
			return huella;
		}

		// Variable estática para guardar el usuario registrado
		static STPUCP_Model::Usuario^ usuario_registrado;

	public: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// Obtener datos del formulario
		String^ nombre = textNOMBRE->Text;
		String^ apellido_paterno = textAP_PATERNO->Text;
		String^ apellido_materno = textAP_MATERNO->Text;
		String^ correo = text_correo->Text;
		String^ contraseña = text_contraseña->Text;
		String^ repetir_contraseña = textrepeat_contraseña->Text;

		int codigo, dni, telefono;
		if (String::IsNullOrWhiteSpace(textCodigo->Text)) {
			codigo = 0;
		}
		else if (String::IsNullOrWhiteSpace(textDNI->Text)) {
			dni = 0;
		}
		else if (String::IsNullOrWhiteSpace(text_telefono->Text)) {
			telefono = 0;
		}
		else {
			codigo = Int32::Parse(textCodigo->Text);
			dni = Int32::Parse(textDNI->Text);
			telefono = Int32::Parse(text_telefono->Text);
		}
		// Validación de campos
		if (String::IsNullOrWhiteSpace(nombre) || String::IsNullOrWhiteSpace(apellido_paterno) || String::IsNullOrWhiteSpace(apellido_materno) || String::IsNullOrWhiteSpace(correo) || String::IsNullOrWhiteSpace(contraseña) || String::IsNullOrWhiteSpace(repetir_contraseña) || codigo == 0 || dni == 0 || telefono == 0) {
			MessageBox::Show("Falta completar algún(unos) campos del registro", "Advertencia", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		if (correo->EndsWith("@pucp.edu.pe")) {
			if (contraseña == repetir_contraseña) {
				STPUCP_Model::Usuario^ nuevo_usuario = gcnew STPUCP_Model::Usuario();
				nuevo_usuario->Rol = "Pasajero";
				if (nuevo_usuario->Rol == "Administrador") {
					nuevo_usuario = gcnew STPUCP_Model::Administrador();
				}
				else if (nuevo_usuario->Rol == "Pasajero") {
					nuevo_usuario = gcnew STPUCP_Model::Pasajero();
				}
				else if (nuevo_usuario->Rol == "Conductor") {
					nuevo_usuario = gcnew STPUCP_Model::Conductor();
				}

				nuevo_usuario->ApellidoMaterno = apellido_materno;
				nuevo_usuario->ApellidoPaterno = apellido_paterno;
				nuevo_usuario->CodigoPUCP = codigo;
				nuevo_usuario->NumeroTelefono = telefono;
				nuevo_usuario->Correo = correo;
				nuevo_usuario->Contraseña = contraseña;
				nuevo_usuario->Nombre = nombre;
				nuevo_usuario->DNI = dni;
				nuevo_usuario->NumeroTelefono = telefono;
				nuevo_usuario->Correo = correo;
				nuevo_usuario->Contraseña = contraseña;
				nuevo_usuario->Rol = "Pasajero";
				MessageBox::Show("Ingrese su huella dactilar.");
				nuevo_usuario->Huella = RegistrarHuella();
				System::Threading::Thread::Sleep(20000);
				MessageBox::Show("Huella registrada.");

				// Guardar el usuario registrado
				Contexto^ contexto = Contexto::ObtenerInstancia();
				contexto->GuardarUsuarioRegistrado(nuevo_usuario);

				// Agregar usuario al sistema
				controller::AddUser(nuevo_usuario);
				MessageBox::Show("Cuenta creada con exito.");
				QuesoyForm^ quesoyform = gcnew QuesoyForm();
				this->Close();
				quesoyform->TopMost = true;
				quesoyform->Show();
			}
			else {
				MessageBox::Show("Las contraseñas deben ser iguales", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		else {
			MessageBox::Show("El email debe ser el proporcionado por la universidad, con dominio '@pucp.edu.pe'", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}


	private: System::Void RegistroForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}

};

}
