#pragma once

#include "ConductorForm.h"

namespace STPUCPAdminGUIView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ServicioDriverForm
	/// </summary>
	public ref class ServicioDriverForm : public System::Windows::Forms::Form
	{
	public:
		ServicioDriverForm(void)
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
		~ServicioDriverForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ button2;

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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(51, 56);
			this->label1->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(272, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Elija el destino a ofrecer";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(43) {
				L"- Anc�n", L"- Ate", L"- Barranco", L"- Bre�a",
					L"- Carabayllo", L"- Chaclacayo", L"- Chorrillos", L"- Cieneguilla", L"- Comas", L"- El Agustino", L"- Independencia", L"- Jes�s Mar�a",
					L"- La Molina", L"- La Victoria", L"- Lima", L"- Lince", L"- Los Olivos", L"- Lurigancho-Chosica", L"- Lur�n", L"- Magdalena del Mar",
					L"- Pueblo Libre", L"- Miraflores", L"- Pachac�mac", L"- Pucusana", L"- Puente Piedra", L"- Punta Hermosa", L"- Punta Negra",
					L"- R�mac", L"- San Bartolo", L"- San Borja", L"- San Isidro", L"- San Juan de Lurigancho", L"- San Juan de Miraflores", L"- San Luis",
					L"- San Mart�n de Porres", L"- San Miguel", L"- Santa Anita", L"- Santa Mar�a del Mar", L"- Santa Rosa", L"- Santiago de Surco",
					L"- Surquillo", L"- Villa El Salvador", L"- Villa Mar�a del Triunfo"
			});
			this->comboBox1->Location = System::Drawing::Point(49, 107);
			this->comboBox1->Margin = System::Windows::Forms::Padding(7, 7, 7, 7);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(1250, 37);
			this->comboBox1->TabIndex = 1;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(425, 243);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(212, 80);
			this->button2->TabIndex = 3;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ServicioDriverForm::button2_Click);
			// 
			// ServicioDriverForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(14, 29);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1335, 582);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(7, 7, 7, 7);
			this->Name = L"ServicioDriverForm";
			this->Text = L"ServicioDriverForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		STPUCPAdminGUIView::ConductorForm^ conductorForm = gcnew STPUCPAdminGUIView::ConductorForm();
		this->Close();
		conductorForm->TopMost = true;
		conductorForm->ShowDialog();
	
	}
};
}
