#pragma once
#include "VentanadeConfirmacionForm.h"

namespace STPUCPGUIAPP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de CondicionesDellevadoForm
	/// </summary>
	public ref class CondicionesDellevadoForm : public System::Windows::Forms::Form
	{
	public:
		CondicionesDellevadoForm(void)
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
		~CondicionesDellevadoForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(133, 240);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(189, 34);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Confirmar Viaje";
			this->button1->UseVisualStyleBackColor = true;
			this->button1-> Click += gcnew System::EventHandler(this, &CondicionesDellevadoForm::button1_Click);

			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(64, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(149, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Ingrese hora de partida:";
			this->label1->Click += gcnew System::EventHandler(this, &CondicionesDellevadoForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(64, 94);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(91, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Ingrese costo:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(64, 141);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(152, 16);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Ingrese lugar de partida:";
			this->label3->Click += gcnew System::EventHandler(this, &CondicionesDellevadoForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(64, 187);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(173, 16);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Ingrese asientos ocupados:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(290, 47);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(65, 22);
			this->textBox1->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(245, 138);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(175, 22);
			this->textBox2->TabIndex = 6;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(204, 91);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(56, 22);
			this->textBox3->TabIndex = 7;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(254, 187);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(68, 22);
			this->textBox4->TabIndex = 8;
			// 
			// CondicionesDellevadoForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(441, 320);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"CondicionesDellevadoForm";
			this->Text = L"INFORMACION DEL CONDUCTOR";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
     private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		VentanadeConfirmacionForm^ confirmacion = gcnew VentanadeConfirmacionForm();
	    this->Close();
		confirmacion->TopMost = true;
		confirmacion->Show();
     }
    };
}
