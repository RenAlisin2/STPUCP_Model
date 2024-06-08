#pragma once

namespace STPUCPAdminGUIView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ESPERANDOPAGO
	/// </summary>
	public ref class ESPERANDOPAGO : public System::Windows::Forms::Form
	{
	public:
		ESPERANDOPAGO(void)
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
		~ESPERANDOPAGO()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridView^ dgvRecepcionPago;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PasajeroID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ MainApellido;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Precio;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Promocion;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Pago;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dgvRecepcionPago = (gcnew System::Windows::Forms::DataGridView());
			this->PasajeroID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->MainApellido = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Precio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Promocion = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Pago = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvRecepcionPago))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(11, 194);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(285, 57);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Terminar viaje";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(301, 194);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(315, 57);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Actualizar Lista";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ESPERANDOPAGO::button2_Click);
			// 
			// dgvRecepcionPago
			// 
			this->dgvRecepcionPago->AllowUserToAddRows = false;
			this->dgvRecepcionPago->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			this->dgvRecepcionPago->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvRecepcionPago->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->PasajeroID,
					this->Nombre, this->MainApellido, this->Precio, this->Promocion, this->Pago
			});
			this->dgvRecepcionPago->GridColor = System::Drawing::SystemColors::ControlText;
			this->dgvRecepcionPago->Location = System::Drawing::Point(12, 43);
			this->dgvRecepcionPago->Name = L"dgvRecepcionPago";
			this->dgvRecepcionPago->RowHeadersVisible = false;
			this->dgvRecepcionPago->Size = System::Drawing::Size(604, 134);
			this->dgvRecepcionPago->TabIndex = 2;
			// 
			// PasajeroID
			// 
			this->PasajeroID->HeaderText = L"Código de Alumno";
			this->PasajeroID->Name = L"PasajeroID";
			// 
			// Nombre
			// 
			this->Nombre->HeaderText = L"Nombre";
			this->Nombre->Name = L"Nombre";
			// 
			// MainApellido
			// 
			this->MainApellido->HeaderText = L"Primer Apellido";
			this->MainApellido->Name = L"MainApellido";
			// 
			// Precio
			// 
			this->Precio->HeaderText = L"Precio pagado";
			this->Precio->Name = L"Precio";
			// 
			// Promocion
			// 
			this->Promocion->HeaderText = L"Hubo Promoción";
			this->Promocion->Name = L"Promocion";
			// 
			// Pago
			// 
			this->Pago->HeaderText = L"¿Pagó\?";
			this->Pago->Name = L"Pago";
			// 
			// ESPERANDOPAGO
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(640, 270);
			this->Controls->Add(this->dgvRecepcionPago);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"ESPERANDOPAGO";
			this->Text = L"Recepcion de Pago";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvRecepcionPago))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
};
}
