#include "PasajeroRutaForm.h"

#pragma once

namespace STPUCPAdminGUIView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de PasajeroForm
	/// </summary>
	public ref class PasajeroForm : public System::Windows::Forms::Form
	{
	public:
		PasajeroForm(void)
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
		~PasajeroForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ listBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;

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
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(43) {
				L"Ancón", L"Ate", L"Barranco", L"Breña", L"Carabayllo",
					L"Chaclacayo", L"Chorrillos", L"Cieneguilla", L"Comas", L"El Agustino", L"Independencia", L"Jesús María", L"La Molina", L"La Victoria",
					L"Lima (Cercado de Lima)", L"Lince", L"Los Olivos", L"Lurigancho (Chosica)", L"Lurín", L"Magdalena del Mar", L"Pueblo Libre",
					L"Miraflores", L"Pachacámac", L"Pucusana", L"Puente Piedra", L"Punta Hermosa", L"Punta Negra", L"Rímac", L"San Bartolo", L"San Borja",
					L"San Isidro", L"San Juan de Lurigancho", L"San Juan de Miraflores", L"San Luis", L"San Martín de Porres", L"San Miguel", L"Santa Anita",
					L"Santa María del Mar", L"Santa Rosa", L"Santiago de Surco", L"Surquillo", L"Villa El Salvador", L"Villa María del Triunfo"
			});
			this->listBox1->Location = System::Drawing::Point(51, 77);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(557, 164);
			this->listBox1->TabIndex = 0;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &PasajeroForm::listBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(48, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(177, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Seleccione lugar de destino:";
			// 
			// PasajeroForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(725, 278);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox1);
			this->Name = L"PasajeroForm";
			this->Text = L"ELIGE TU DESTINO";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		int selectedIndex = listBox1->SelectedIndex;
		if (selectedIndex >= 1 && selectedIndex <= 100) {
			// Crear una nueva instancia de la ventana 
			PasajeroRutaForm^ rutaForm = gcnew PasajeroRutaForm();
			// Mostrar la ventana 
			this->Close();
			rutaForm->ShowDialog();
		}
	}
	};
}
