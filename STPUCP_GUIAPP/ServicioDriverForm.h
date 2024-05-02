#include "VerificarHuellaDactilarForm.h"
#pragma once

namespace STPUCPGUIAPP {

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
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ServicioDriverForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ label1;
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
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(42) {
				L"Ancón", L"Ate", L"Barranco", L"Breña", L"Carabayllo",
					L"Chaclacayo", L"Chorrillos", L"Cieneguilla", L"Comas", L"El Agustino", L"Independencia", L"Jesús María", L"La Molina", L"La Victoria",
					L"Lince", L"Los Olivos", L"Lurigancho-Chosica", L"Lurín", L"Magdalena del Mar", L"Miraflores", L"Pachacámac", L"Pucusana", L"Pueblo Libre",
					L"Puente Piedra", L"Punta Hermosa", L"Punta Negra", L"Rímac", L"San Bartolo", L"San Borja", L"San Isidro", L"San Juan de Lurigancho",
					L"San Juan de Miraflores", L"San Luis", L"San Martín de Porres", L"San Miguel", L"Santa Anita", L"Santa María del Mar", L"Santa Rosa",
					L"Santiago de Surco", L"Surquillo", L"Villa El Salvador", L"Villa María del Triunfo"
			});
			this->listBox1->Location = System::Drawing::Point(-1, 38);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(601, 292);
			this->listBox1->TabIndex = 0;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &ServicioDriverForm::listBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label1->Location = System::Drawing::Point(12, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(149, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Elija su lugar de destino";
			this->label1->Click += gcnew System::EventHandler(this, &ServicioDriverForm::label1_Click);
			// 
			// ServicioDriverForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(603, 342);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox1);
			this->Name = L"ServicioDriverForm";
			this->Text = L"Driver - Elige destino";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		int selectedIndex = listBox1->SelectedIndex;
		if (selectedIndex>=1 && selectedIndex<=100) {
			// Crear una nueva instancia de la ventana de ingreso de huella dactilar
			VerificarHuellaDactilarForm^ huellaForm = gcnew VerificarHuellaDactilarForm();
			// Mostrar la ventana de ingreso de huella dactilar
			this->Close();
			huellaForm->TopMost = true;
			huellaForm->Show();
		}
		
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
