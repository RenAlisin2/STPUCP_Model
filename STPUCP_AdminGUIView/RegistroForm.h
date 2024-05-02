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
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~RegistroForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button1;



	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
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
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(136, 33);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(260, 20);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(181, 85);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(215, 20);
			this->textBox2->TabIndex = 3;
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
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(181, 59);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(215, 20);
			this->textBox3->TabIndex = 5;
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
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(120, 137);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(276, 20);
			this->textBox4->TabIndex = 11;
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
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(181, 163);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(215, 20);
			this->textBox5->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(36, 166);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(143, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Ingrese su n�mero telef�nico";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(165, 111);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(231, 20);
			this->textBox6->TabIndex = 7;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(36, 114);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(123, 13);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Ingrese su c�digo PUCP";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(161, 215);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(235, 20);
			this->textBox7->TabIndex = 17;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(36, 218);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(119, 13);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Ingrese una contrase�a";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(161, 241);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(235, 20);
			this->textBox8->TabIndex = 15;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(36, 244);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(114, 13);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Repita esa contrase�a";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(181, 189);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(215, 20);
			this->textBox9->TabIndex = 13;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(36, 192);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(144, 13);
			this->label9->TabIndex = 12;
			this->label9->Text = L"Ingrese su correo electr�nico";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(39, 283);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(356, 57);
			this->button1->TabIndex = 18;
			this->button1->Text = L"Crear cuenta";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &RegistroForm::button1_Click);
			// 
			// RegistroForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(448, 353);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"RegistroForm";
			this->Text = L"Nueva Cuenta";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		QuesoyForm^ quesoyform = gcnew QuesoyForm();
		quesoyform->TopMost = true;
		quesoyform->Show();
	}
};
}
