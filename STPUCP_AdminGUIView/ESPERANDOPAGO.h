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
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~ESPERANDOPAGO()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(124, 242);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(244, 60);
			this->button1->TabIndex = 0;
			this->button1->Text = L"CONFIRMAR RECEPCION DE PAGO";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// ESPERANDOPAGO
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(502, 325);
			this->Controls->Add(this->button1);
			this->Name = L"ESPERANDOPAGO";
			this->Text = L"Recepcion de Pago";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
