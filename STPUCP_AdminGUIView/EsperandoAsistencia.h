#pragma once
#include "PasajeroForm.h"

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
	/// Resumen de EsperandoAsistencia
	/// </summary>
	public ref class EsperandoAsistencia : public System::Windows::Forms::Form
	{
	public:
		EsperandoAsistencia(void)
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
		~EsperandoAsistencia()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dgvAsistencia;
	protected:

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NOMBRE;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ APELLIDO;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ IDORDEN;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PRESENTE;
	private: System::Windows::Forms::Button^ asistencia;
	private: System::Windows::Forms::Label^ label1;
	public: System::Windows::Forms::TextBox^ textviaje;
	private: System::Windows::Forms::Button^ empezar;
	public:
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
			this->dgvAsistencia = (gcnew System::Windows::Forms::DataGridView());
			this->NOMBRE = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->APELLIDO = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->IDORDEN = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PRESENTE = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->asistencia = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textviaje = (gcnew System::Windows::Forms::TextBox());
			this->empezar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvAsistencia))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvAsistencia
			// 
			this->dgvAsistencia->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvAsistencia->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->NOMBRE,
					this->APELLIDO, this->IDORDEN, this->PRESENTE
			});
			this->dgvAsistencia->Location = System::Drawing::Point(26, 103);
			this->dgvAsistencia->Name = L"dgvAsistencia";
			this->dgvAsistencia->RowHeadersWidth = 51;
			this->dgvAsistencia->RowTemplate->Height = 24;
			this->dgvAsistencia->Size = System::Drawing::Size(616, 150);
			this->dgvAsistencia->TabIndex = 0;
			this->dgvAsistencia->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &EsperandoAsistencia::dataGridView1_CellContentClick);
			// 
			// NOMBRE
			// 
			this->NOMBRE->HeaderText = L"nombre";
			this->NOMBRE->MinimumWidth = 6;
			this->NOMBRE->Name = L"NOMBRE";
			this->NOMBRE->Width = 125;
			// 
			// APELLIDO
			// 
			this->APELLIDO->HeaderText = L"APELLIDO";
			this->APELLIDO->MinimumWidth = 6;
			this->APELLIDO->Name = L"APELLIDO";
			this->APELLIDO->Width = 125;
			// 
			// IDORDEN
			// 
			this->IDORDEN->HeaderText = L"ID ORDEN ";
			this->IDORDEN->MinimumWidth = 6;
			this->IDORDEN->Name = L"IDORDEN";
			this->IDORDEN->Width = 125;
			// 
			// PRESENTE
			// 
			this->PRESENTE->HeaderText = L"ASISTENCIA";
			this->PRESENTE->MinimumWidth = 6;
			this->PRESENTE->Name = L"PRESENTE";
			this->PRESENTE->Width = 125;
			// 
			// asistencia
			// 
			this->asistencia->Location = System::Drawing::Point(63, 278);
			this->asistencia->Name = L"asistencia";
			this->asistencia->Size = System::Drawing::Size(173, 47);
			this->asistencia->TabIndex = 1;
			this->asistencia->Text = L"VERIFICAR ASISTENCIA";
			this->asistencia->UseVisualStyleBackColor = true;
			this->asistencia->Click += gcnew System::EventHandler(this, &EsperandoAsistencia::asistencia_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(26, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(89, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"ID DEL VIAJE";
			// 
			// textviaje
			// 
			this->textviaje->Location = System::Drawing::Point(136, 30);
			this->textviaje->Name = L"textviaje";
			this->textviaje->Size = System::Drawing::Size(100, 22);
			this->textviaje->TabIndex = 3;
			// 
			// empezar
			// 
			this->empezar->Location = System::Drawing::Point(385, 278);
			this->empezar->Name = L"empezar";
			this->empezar->Size = System::Drawing::Size(181, 47);
			this->empezar->TabIndex = 4;
			this->empezar->Text = L"EMPEZARVIAJE";
			this->empezar->UseVisualStyleBackColor = true;
			this->empezar->Click += gcnew System::EventHandler(this, &EsperandoAsistencia::empezar_Click);
			// 
			// EsperandoAsistencia
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(791, 337);
			this->Controls->Add(this->empezar);
			this->Controls->Add(this->textviaje);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->asistencia);
			this->Controls->Add(this->dgvAsistencia);
			this->Name = L"EsperandoAsistencia";
			this->Text = L"EsperandoAsistencia";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvAsistencia))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void asistencia_Click(System::Object^ sender, System::EventArgs^ e) {

		Contexto^ contexto = STPUCP_Model::Contexto::ObtenerInstancia();

		// Obtener la lista de viajes del conductor
		List<Viaje^>^ viajecitoList = controller::QueryViajesByIdConductor(contexto->ObtenerIdUsuario());

		// Inicializar una lista para almacenar todas las �rdenes del conductor
		List<Orden^>^ todasOrdenes = controller::QueryOrdenesByIdViajes(Int32::Parse(textviaje->Text));
		Viaje^ viajecito = controller::QueryJourneysById(Int32::Parse(textviaje->Text));


		if (todasOrdenes != nullptr && todasOrdenes->Count > 0) {
			dgvAsistencia->Rows->Clear();

			for each (Orden ^ orden in todasOrdenes ) {
				if (orden->OrdenPagada == 1) {



					if (orden->Presente == 1) {
						Usuario^ usuari = controller::QueryUsersById(orden->PasajeroId);
						dgvAsistencia->Rows->Add(usuari->Nombre, usuari->ApellidoPaterno, orden->Id, "SI");
					}
					else {
						Usuario^ usuari = controller::QueryUsersById(orden->PasajeroId);
						dgvAsistencia->Rows->Add(usuari->Nombre, usuari->ApellidoPaterno, orden->Id, "NO");
					}
				}
			}
		}



	}
private: System::Void empezar_Click(System::Object^ sender, System::EventArgs^ e) {
	PasajeroForm^ esperandoAsistencia = gcnew PasajeroForm();
	
	esperandoAsistencia->TopMost = true;

	
	esperandoAsistencia->ShowDialog();

}
};
}
