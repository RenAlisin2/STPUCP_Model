#pragma once

namespace STPUCPAdminGUIView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de BlackListForm
	/// </summary>
	public ref class BlackListForm : public System::Windows::Forms::Form
	{
	public:
		BlackListForm(void)
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
		~BlackListForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtDescripcion;
	protected:
	private: System::Windows::Forms::TextBox^ txtFechaViaje;
	private: System::Windows::Forms::Label^ lblFechaDesbaneo;
	private: System::Windows::Forms::Label^ lblMotivo;
	private: System::Windows::Forms::TextBox^ txtHoraBaneo;
	private: System::Windows::Forms::DataGridView^ dgvServicios;






	private: System::Windows::Forms::Button^ btnEliminar;
	private: System::Windows::Forms::Button^ btnAgregar;
	private: System::Windows::Forms::TextBox^ txtId;
	private: System::Windows::Forms::Label^ lblFechabaneo;
	private: System::Windows::Forms::Label^ lblId;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ UsuarioID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ FechaViaje;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Descripcion;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ UltimParadero;

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
			this->txtDescripcion = (gcnew System::Windows::Forms::TextBox());
			this->txtFechaViaje = (gcnew System::Windows::Forms::TextBox());
			this->lblFechaDesbaneo = (gcnew System::Windows::Forms::Label());
			this->lblMotivo = (gcnew System::Windows::Forms::Label());
			this->txtHoraBaneo = (gcnew System::Windows::Forms::TextBox());
			this->dgvServicios = (gcnew System::Windows::Forms::DataGridView());
			this->UsuarioID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->FechaViaje = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Descripcion = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->UltimParadero = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnEliminar = (gcnew System::Windows::Forms::Button());
			this->btnAgregar = (gcnew System::Windows::Forms::Button());
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			this->lblFechabaneo = (gcnew System::Windows::Forms::Label());
			this->lblId = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvServicios))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// txtDescripcion
			// 
			this->txtDescripcion->Location = System::Drawing::Point(129, 117);
			this->txtDescripcion->Name = L"txtDescripcion";
			this->txtDescripcion->Size = System::Drawing::Size(140, 20);
			this->txtDescripcion->TabIndex = 45;
			// 
			// txtFechaViaje
			// 
			this->txtFechaViaje->Location = System::Drawing::Point(129, 87);
			this->txtFechaViaje->Name = L"txtFechaViaje";
			this->txtFechaViaje->Size = System::Drawing::Size(140, 20);
			this->txtFechaViaje->TabIndex = 44;
			// 
			// lblFechaDesbaneo
			// 
			this->lblFechaDesbaneo->AutoSize = true;
			this->lblFechaDesbaneo->Location = System::Drawing::Point(12, 117);
			this->lblFechaDesbaneo->Name = L"lblFechaDesbaneo";
			this->lblFechaDesbaneo->Size = System::Drawing::Size(105, 13);
			this->lblFechaDesbaneo->TabIndex = 43;
			this->lblFechaDesbaneo->Text = L"Fecha de desbaneo:";
			// 
			// lblMotivo
			// 
			this->lblMotivo->AutoSize = true;
			this->lblMotivo->Location = System::Drawing::Point(12, 90);
			this->lblMotivo->Name = L"lblMotivo";
			this->lblMotivo->Size = System::Drawing::Size(42, 13);
			this->lblMotivo->TabIndex = 42;
			this->lblMotivo->Text = L"Motivo:";
			// 
			// txtHoraBaneo
			// 
			this->txtHoraBaneo->Location = System::Drawing::Point(129, 58);
			this->txtHoraBaneo->Name = L"txtHoraBaneo";
			this->txtHoraBaneo->Size = System::Drawing::Size(140, 20);
			this->txtHoraBaneo->TabIndex = 41;
			// 
			// dgvServicios
			// 
			this->dgvServicios->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvServicios->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->UsuarioID,
					this->FechaViaje, this->Descripcion, this->UltimParadero
			});
			this->dgvServicios->Location = System::Drawing::Point(12, 206);
			this->dgvServicios->Name = L"dgvServicios";
			this->dgvServicios->Size = System::Drawing::Size(392, 253);
			this->dgvServicios->TabIndex = 40;
			// 
			// UsuarioID
			// 
			this->UsuarioID->HeaderText = L"ID";
			this->UsuarioID->Name = L"UsuarioID";
			this->UsuarioID->Width = 50;
			// 
			// FechaViaje
			// 
			this->FechaViaje->HeaderText = L"Fecha de Baneo";
			this->FechaViaje->Name = L"FechaViaje";
			// 
			// Descripcion
			// 
			this->Descripcion->HeaderText = L"Motivo";
			this->Descripcion->Name = L"Descripcion";
			// 
			// UltimParadero
			// 
			this->UltimParadero->HeaderText = L"Fecha de desbaneo";
			this->UltimParadero->Name = L"UltimParadero";
			// 
			// btnEliminar
			// 
			this->btnEliminar->Location = System::Drawing::Point(237, 165);
			this->btnEliminar->Name = L"btnEliminar";
			this->btnEliminar->Size = System::Drawing::Size(75, 23);
			this->btnEliminar->TabIndex = 39;
			this->btnEliminar->Text = L"Eliminar";
			this->btnEliminar->UseVisualStyleBackColor = true;
			// 
			// btnAgregar
			// 
			this->btnAgregar->Location = System::Drawing::Point(101, 165);
			this->btnAgregar->Name = L"btnAgregar";
			this->btnAgregar->Size = System::Drawing::Size(75, 23);
			this->btnAgregar->TabIndex = 37;
			this->btnAgregar->Text = L"Agregar";
			this->btnAgregar->UseVisualStyleBackColor = true;
			// 
			// txtId
			// 
			this->txtId->Location = System::Drawing::Point(129, 28);
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(64, 20);
			this->txtId->TabIndex = 36;
			// 
			// lblFechabaneo
			// 
			this->lblFechabaneo->AutoSize = true;
			this->lblFechabaneo->Location = System::Drawing::Point(12, 61);
			this->lblFechabaneo->Name = L"lblFechabaneo";
			this->lblFechabaneo->Size = System::Drawing::Size(89, 13);
			this->lblFechabaneo->TabIndex = 35;
			this->lblFechabaneo->Text = L"Fecha de Baneo:";
			// 
			// lblId
			// 
			this->lblId->AutoSize = true;
			this->lblId->Location = System::Drawing::Point(12, 35);
			this->lblId->Name = L"lblId";
			this->lblId->Size = System::Drawing::Size(19, 13);
			this->lblId->TabIndex = 34;
			this->lblId->Text = L"Id:";
			// 
			// menuStrip1
			// 
			this->menuStrip1->AllowMerge = false;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->archivoToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(415, 24);
			this->menuStrip1->TabIndex = 50;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->salirToolStripMenuItem });
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(96, 22);
			this->salirToolStripMenuItem->Text = L"Salir";
			// 
			// BlackListForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(415, 470);
			this->Controls->Add(this->txtDescripcion);
			this->Controls->Add(this->txtFechaViaje);
			this->Controls->Add(this->lblFechaDesbaneo);
			this->Controls->Add(this->lblMotivo);
			this->Controls->Add(this->txtHoraBaneo);
			this->Controls->Add(this->dgvServicios);
			this->Controls->Add(this->btnEliminar);
			this->Controls->Add(this->btnAgregar);
			this->Controls->Add(this->txtId);
			this->Controls->Add(this->lblFechabaneo);
			this->Controls->Add(this->lblId);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"BlackListForm";
			this->Text = L"BlackListForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvServicios))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
