#pragma once
#include "SeleccionarActuarForm.h"



namespace STPUCPGUIAPP {

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
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textRegistro_nombre;
	private: System::Windows::Forms::TextBox^ textRegistro_DNI;


	private: System::Windows::Forms::TextBox^ textRegistro_codigo;

	private: System::Windows::Forms::TextBox^ textRegistroApellidom;

	private: System::Windows::Forms::TextBox^ textRegistro_Apellidop;
	private: System::Windows::Forms::TextBox^ textRegistro_correo;


	private: System::Windows::Forms::TextBox^ textRegistro_telefono;
	private: System::Windows::Forms::TextBox^ textRegistro_contraeña;
	private: System::Windows::Forms::TextBox^ textRegistro_confirmarcontraseña;
	private: System::Windows::Forms::Button^ btn_CrearCuenta;



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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textRegistro_nombre = (gcnew System::Windows::Forms::TextBox());
			this->textRegistro_DNI = (gcnew System::Windows::Forms::TextBox());
			this->textRegistro_codigo = (gcnew System::Windows::Forms::TextBox());
			this->textRegistroApellidom = (gcnew System::Windows::Forms::TextBox());
			this->textRegistro_Apellidop = (gcnew System::Windows::Forms::TextBox());
			this->textRegistro_correo = (gcnew System::Windows::Forms::TextBox());
			this->textRegistro_telefono = (gcnew System::Windows::Forms::TextBox());
			this->textRegistro_contraeña = (gcnew System::Windows::Forms::TextBox());
			this->textRegistro_confirmarcontraseña = (gcnew System::Windows::Forms::TextBox());
			this->btn_CrearCuenta = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 65);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(151, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"INGRESE SU NOMBRE";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 105);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(225, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"INGRESE SU APELLIDO PATERNO";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 143);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(227, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"INGRESE SU APELLIDO MATERNO";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 187);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(184, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"INGRESE SU CODIGO PUCP";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 238);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(118, 16);
			this->label5->TabIndex = 4;
			this->label5->Text = L"lINGRESE SU DNI";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 278);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(239, 16);
			this->label6->TabIndex = 5;
			this->label6->Text = L"INGRESE SU NUMERO TELEFONICO";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(12, 308);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(150, 16);
			this->label7->TabIndex = 6;
			this->label7->Text = L"INGRESE SU CORREO";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(12, 339);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(164, 16);
			this->label8->TabIndex = 7;
			this->label8->Text = L"INGRESE CONTRASEÑA";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(12, 365);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(184, 16);
			this->label9->TabIndex = 8;
			this->label9->Text = L"CONFIRMAR CONTRASEÑA";
			// 
			// textRegistro_nombre
			// 
			this->textRegistro_nombre->Location = System::Drawing::Point(296, 65);
			this->textRegistro_nombre->Name = L"textRegistro_nombre";
			this->textRegistro_nombre->Size = System::Drawing::Size(133, 22);
			this->textRegistro_nombre->TabIndex = 9;
			// 
			// textRegistro_DNI
			// 
			this->textRegistro_DNI->Location = System::Drawing::Point(296, 232);
			this->textRegistro_DNI->Name = L"textRegistro_DNI";
			this->textRegistro_DNI->Size = System::Drawing::Size(100, 22);
			this->textRegistro_DNI->TabIndex = 10;
			// 
			// textRegistro_codigo
			// 
			this->textRegistro_codigo->Location = System::Drawing::Point(296, 187);
			this->textRegistro_codigo->Name = L"textRegistro_codigo";
			this->textRegistro_codigo->Size = System::Drawing::Size(100, 22);
			this->textRegistro_codigo->TabIndex = 11;
			// 
			// textRegistroApellidom
			// 
			this->textRegistroApellidom->Location = System::Drawing::Point(296, 143);
			this->textRegistroApellidom->Name = L"textRegistroApellidom";
			this->textRegistroApellidom->Size = System::Drawing::Size(133, 22);
			this->textRegistroApellidom->TabIndex = 12;
			// 
			// textRegistro_Apellidop
			// 
			this->textRegistro_Apellidop->Location = System::Drawing::Point(296, 105);
			this->textRegistro_Apellidop->Name = L"textRegistro_Apellidop";
			this->textRegistro_Apellidop->Size = System::Drawing::Size(133, 22);
			this->textRegistro_Apellidop->TabIndex = 13;
			// 
			// textRegistro_correo
			// 
			this->textRegistro_correo->Location = System::Drawing::Point(296, 308);
			this->textRegistro_correo->Name = L"textRegistro_correo";
			this->textRegistro_correo->Size = System::Drawing::Size(133, 22);
			this->textRegistro_correo->TabIndex = 14;
			// 
			// textRegistro_telefono
			// 
			this->textRegistro_telefono->Location = System::Drawing::Point(296, 272);
			this->textRegistro_telefono->Name = L"textRegistro_telefono";
			this->textRegistro_telefono->Size = System::Drawing::Size(100, 22);
			this->textRegistro_telefono->TabIndex = 15;
			// 
			// textRegistro_contraeña
			// 
			this->textRegistro_contraeña->Location = System::Drawing::Point(296, 339);
			this->textRegistro_contraeña->Name = L"textRegistro_contraeña";
			this->textRegistro_contraeña->Size = System::Drawing::Size(133, 22);
			this->textRegistro_contraeña->TabIndex = 16;
			// 
			// textRegistro_confirmarcontraseña
			// 
			this->textRegistro_confirmarcontraseña->Location = System::Drawing::Point(296, 367);
			this->textRegistro_confirmarcontraseña->Name = L"textRegistro_confirmarcontraseña";
			this->textRegistro_confirmarcontraseña->Size = System::Drawing::Size(133, 22);
			this->textRegistro_confirmarcontraseña->TabIndex = 17;
			// 
			// btn_CrearCuenta
			// 
			this->btn_CrearCuenta->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btn_CrearCuenta->Location = System::Drawing::Point(253, 410);
			this->btn_CrearCuenta->Name = L"btn_CrearCuenta";
			this->btn_CrearCuenta->Size = System::Drawing::Size(229, 23);
			this->btn_CrearCuenta->TabIndex = 18;
			this->btn_CrearCuenta->Text = L"CREAR CUENTA";
			this->btn_CrearCuenta->UseVisualStyleBackColor = false;
			this->btn_CrearCuenta->Click += gcnew System::EventHandler(this, &RegistroForm::btn_CrearCuenta_Click);
			// 
			// RegistroForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(749, 445);
			this->Controls->Add(this->btn_CrearCuenta);
			this->Controls->Add(this->textRegistro_confirmarcontraseña);
			this->Controls->Add(this->textRegistro_contraeña);
			this->Controls->Add(this->textRegistro_telefono);
			this->Controls->Add(this->textRegistro_correo);
			this->Controls->Add(this->textRegistro_Apellidop);
			this->Controls->Add(this->textRegistroApellidom);
			this->Controls->Add(this->textRegistro_codigo);
			this->Controls->Add(this->textRegistro_DNI);
			this->Controls->Add(this->textRegistro_nombre);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"RegistroForm";
			this->Text = L"Registro Inicial";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_CrearCuenta_Click(System::Object^ sender, System::EventArgs^ e) {
		SeleccionarActuarForm^ seleccionarTipo = gcnew SeleccionarActuarForm();
		this->Close();
	   // seleccionarTipo->StartPosition = FormStartPosition::CenterScreen;
		seleccionarTipo->Show();
	}
};
}
