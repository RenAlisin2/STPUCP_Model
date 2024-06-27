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
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
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
			this->label1->Location = System::Drawing::Point(36, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"IdOrden";
			// 
			// textOrden
			// 
			this->textOrden->Location = System::Drawing::Point(125, 41);
			this->textOrden->Name = L"textOrden";
			this->textOrden->Size = System::Drawing::Size(100, 22);
			this->textOrden->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(135, 152);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(143, 56);
			this->button1->TabIndex = 2;
			this->button1->Text = L"VIAJE TERMINADO";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Presente::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::Info;
			this->label2->Location = System::Drawing::Point(36, 75);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(401, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Presionar el bot�n cuando se encuentra ene el punto de encuentro";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(36, 112);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(85, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"ESTRELLAS";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"1", L"2", L"3", L"4", L"5" });
			this->comboBox1->Location = System::Drawing::Point(135, 112);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 5;
			// 
			// Presente
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(503, 245);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textOrden);
			this->Controls->Add(this->label1);
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
