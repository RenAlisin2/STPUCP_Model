#pragma once

namespace STPUCPAdminGUIView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace STPUCP_Model;
	using namespace STPUCPAdminController;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Resumen de Presente
	/// </summary>
	public ref class Presente : public System::Windows::Forms::Form
	{
	public:
		Presente(void)
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
		~Presente()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	public: System::Windows::Forms::TextBox^ textOrden;
	private: System::Windows::Forms::Button^ button1;
	public:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private:



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
			this->textOrden = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(17, 17);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(74, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Id de la Orden";
			// 
			// textOrden
			// 
			this->textOrden->Location = System::Drawing::Point(95, 14);
			this->textOrden->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textOrden->Name = L"textOrden";
			this->textOrden->Size = System::Drawing::Size(76, 20);
			this->textOrden->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(25, 96);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(318, 33);
			this->button1->TabIndex = 2;
			this->button1->Text = L"VIAJE TERMINADO";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Presente::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::Info;
			this->label2->Location = System::Drawing::Point(17, 42);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(326, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"**Presione el botón cuando se encuentre en  el punto de encuentro";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(22, 66);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(46, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Estrellas";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"1", L"2", L"3", L"4", L"5" });
			this->comboBox1->Location = System::Drawing::Point(95, 63);
			this->comboBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(103, 21);
			this->comboBox1->TabIndex = 5;
			// 
			// Presente
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(362, 143);
			this->ControlBox = false;
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textOrden);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"Presente";
			this->Text = L"Presente";
			this->Load += gcnew System::EventHandler(this, &Presente::Presente_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		Orden^ orden = controller::QueryOrdenById(Convert::ToInt32(textOrden->Text));
		orden->Id = orden->Id;
		orden->Distrito = orden->Distrito;
		orden->Precio = orden->Precio;
		orden->Fecha = orden->Fecha;
		orden->Id_viaje = orden->Id_viaje;
		orden->PasajeroId = orden->PasajeroId;
		orden->OrdenPagada = orden->OrdenPagada;
		orden->Presente = orden->Presente;
		orden->CalificacionEstrellas = Convert::ToInt32(comboBox1->Items[comboBox1->SelectedIndex]->ToString());
		controller::UpdateOrder(orden);


	}
private: System::Void Presente_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
