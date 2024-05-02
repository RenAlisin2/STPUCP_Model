#pragma once

namespace STPUCPGUIAPP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de SeleccionarActuarForm
	/// </summary>
	public ref class SeleccionarActuarForm : public System::Windows::Forms::Form
	{
	public:
		SeleccionarActuarForm(void)
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
		~SeleccionarActuarForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_IngresarPasajero;
	private: System::Windows::Forms::Button^ btnIngresarConductor;
	protected:


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
			this->btn_IngresarPasajero = (gcnew System::Windows::Forms::Button());
			this->btnIngresarConductor = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btn_IngresarPasajero
			// 
			this->btn_IngresarPasajero->Location = System::Drawing::Point(89, 75);
			this->btn_IngresarPasajero->Name = L"btn_IngresarPasajero";
			this->btn_IngresarPasajero->Size = System::Drawing::Size(314, 23);
			this->btn_IngresarPasajero->TabIndex = 0;
			this->btn_IngresarPasajero->Text = L"INGRESAR  COMO PASAJERO";
			this->btn_IngresarPasajero->UseVisualStyleBackColor = true;
			// 
			// btnIngresarConductor
			// 
			this->btnIngresarConductor->Location = System::Drawing::Point(89, 135);
			this->btnIngresarConductor->Name = L"btnIngresarConductor";
			this->btnIngresarConductor->Size = System::Drawing::Size(314, 23);
			this->btnIngresarConductor->TabIndex = 1;
			this->btnIngresarConductor->Text = L"INGRESAR COMO CONDUCTOR";
			this->btnIngresarConductor->UseVisualStyleBackColor = true;
			// 
			// SeleccionarActuarForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(564, 368);
			this->Controls->Add(this->btnIngresarConductor);
			this->Controls->Add(this->btn_IngresarPasajero);
			this->Name = L"SeleccionarActuarForm";
			this->Text = L"SeleccionarActuarForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
