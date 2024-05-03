#pragma once

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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(22, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(119, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Elija el destino a ofrecer";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(43) {
				L"- Ancón", L"- Ate", L"- Barranco", L"- Breña",
					L"- Carabayllo", L"- Chaclacayo", L"- Chorrillos", L"- Cieneguilla", L"- Comas", L"- El Agustino", L"- Independencia", L"- Jesús María",
					L"- La Molina", L"- La Victoria", L"- Lima", L"- Lince", L"- Los Olivos", L"- Lurigancho-Chosica", L"- Lurín", L"- Magdalena del Mar",
					L"- Pueblo Libre", L"- Miraflores", L"- Pachacámac", L"- Pucusana", L"- Puente Piedra", L"- Punta Hermosa", L"- Punta Negra",
					L"- Rímac", L"- San Bartolo", L"- San Borja", L"- San Isidro", L"- San Juan de Lurigancho", L"- San Juan de Miraflores", L"- San Luis",
					L"- San Martín de Porres", L"- San Miguel", L"- Santa Anita", L"- Santa María del Mar", L"- Santa Rosa", L"- Santiago de Surco",
					L"- Surquillo", L"- Villa El Salvador", L"- Villa María del Triunfo"
			});
			this->comboBox1->Location = System::Drawing::Point(21, 48);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(538, 21);
			this->comboBox1->TabIndex = 1;
			// 
			// ServicioDriverForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(572, 261);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label1);
			this->Name = L"ServicioDriverForm";
			this->Text = L"ServicioDriverForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
