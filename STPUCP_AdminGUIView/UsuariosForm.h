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
	/// Resumen de UsuariosForm
	/// </summary>
	public ref class UsuariosForm : public System::Windows::Forms::Form
	{
	public:
		UsuariosForm(void)
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
		~UsuariosForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ nuevoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ modificarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;

	private: System::Windows::Forms::Label^ lblNombre;









	private: System::Windows::Forms::Button^ btnAgregar;
	private: System::Windows::Forms::Button^ btnModificar;
	private: System::Windows::Forms::Button^ btnEliminar;
	private: System::Windows::Forms::DataGridView^ dgvUsuarios;
	private: System::Windows::Forms::TextBox^ txtNombre;






	private: System::Windows::Forms::Label^ lblApellidoPaterno;
	private: System::Windows::Forms::Label^ lblApellidoMaterno;
	private: System::Windows::Forms::TextBox^ txtApellidoPaterno;
	private: System::Windows::Forms::TextBox^ txtApellidoMaterno;








	private: System::Windows::Forms::Label^ lblCodigoPUCP;
	private: System::Windows::Forms::TextBox^ txtCodigoPUCP;






	private: System::Windows::Forms::TextBox^ txtContraseña;
	private: System::Windows::Forms::Label^ label1;






	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtTipoUsuario;













	private: System::Windows::Forms::PictureBox^ pBConductor;
	private: System::Windows::Forms::PictureBox^ pBCarro;
	private: System::Windows::Forms::PictureBox^ pBQR;


	private: System::Windows::Forms::TextBox^ txtAsientos;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtColor;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtDNI;

	private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::TextBox^ txtPlaca;

private: System::Windows::Forms::TextBox^ txtModelo;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::TextBox^ txtTelefono;

	private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::TextBox^ txtBreveteEnRegla;

	private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::TextBox^ txtcorreo;

	private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ CodigoPUCP;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ UsuarioNombre;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ ApellidoPaterno;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ ApellidoMaterno;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Contraseña;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ DNI;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Teléfono;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ CorreoElectrónico;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ TipoUsuario;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ ModeloVehiculo;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ PlacaVehiculo;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColorVehiculo;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ CantidadAsientos;



























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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nuevoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modificarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lblNombre = (gcnew System::Windows::Forms::Label());
			this->btnAgregar = (gcnew System::Windows::Forms::Button());
			this->btnModificar = (gcnew System::Windows::Forms::Button());
			this->btnEliminar = (gcnew System::Windows::Forms::Button());
			this->dgvUsuarios = (gcnew System::Windows::Forms::DataGridView());
			this->CodigoPUCP = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->UsuarioNombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ApellidoPaterno = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ApellidoMaterno = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Contraseña = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DNI = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Teléfono = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CorreoElectrónico = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TipoUsuario = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ModeloVehiculo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PlacaVehiculo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColorVehiculo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CantidadAsientos = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->lblApellidoPaterno = (gcnew System::Windows::Forms::Label());
			this->lblApellidoMaterno = (gcnew System::Windows::Forms::Label());
			this->txtApellidoPaterno = (gcnew System::Windows::Forms::TextBox());
			this->txtApellidoMaterno = (gcnew System::Windows::Forms::TextBox());
			this->lblCodigoPUCP = (gcnew System::Windows::Forms::Label());
			this->txtCodigoPUCP = (gcnew System::Windows::Forms::TextBox());
			this->txtContraseña = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtTipoUsuario = (gcnew System::Windows::Forms::TextBox());
			this->pBConductor = (gcnew System::Windows::Forms::PictureBox());
			this->pBCarro = (gcnew System::Windows::Forms::PictureBox());
			this->pBQR = (gcnew System::Windows::Forms::PictureBox());
			this->txtAsientos = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtColor = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtDNI = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtPlaca = (gcnew System::Windows::Forms::TextBox());
			this->txtModelo = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtTelefono = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtBreveteEnRegla = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtcorreo = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvUsuarios))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pBConductor))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pBCarro))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pBQR))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->AllowMerge = false;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->archivoToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1198, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->nuevoToolStripMenuItem,
					this->modificarToolStripMenuItem, this->salirToolStripMenuItem
			});
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// nuevoToolStripMenuItem
			// 
			this->nuevoToolStripMenuItem->Name = L"nuevoToolStripMenuItem";
			this->nuevoToolStripMenuItem->Size = System::Drawing::Size(125, 22);
			this->nuevoToolStripMenuItem->Text = L"Nuevo";
			// 
			// modificarToolStripMenuItem
			// 
			this->modificarToolStripMenuItem->Name = L"modificarToolStripMenuItem";
			this->modificarToolStripMenuItem->Size = System::Drawing::Size(125, 22);
			this->modificarToolStripMenuItem->Text = L"Modificar";
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(125, 22);
			this->salirToolStripMenuItem->Text = L"Salir";
			// 
			// lblNombre
			// 
			this->lblNombre->AutoSize = true;
			this->lblNombre->Location = System::Drawing::Point(12, 56);
			this->lblNombre->Name = L"lblNombre";
			this->lblNombre->Size = System::Drawing::Size(47, 13);
			this->lblNombre->TabIndex = 2;
			this->lblNombre->Text = L"Nombre:";
			this->lblNombre->Click += gcnew System::EventHandler(this, &UsuariosForm::lblNombre_Click);
			// 
			// btnAgregar
			// 
			this->btnAgregar->Location = System::Drawing::Point(30, 246);
			this->btnAgregar->Name = L"btnAgregar";
			this->btnAgregar->Size = System::Drawing::Size(91, 33);
			this->btnAgregar->TabIndex = 7;
			this->btnAgregar->Text = L"Agregar";
			this->btnAgregar->UseVisualStyleBackColor = true;
			this->btnAgregar->Click += gcnew System::EventHandler(this, &UsuariosForm::btnAgregar_Click);
			// 
			// btnModificar
			// 
			this->btnModificar->Location = System::Drawing::Point(153, 246);
			this->btnModificar->Name = L"btnModificar";
			this->btnModificar->Size = System::Drawing::Size(87, 33);
			this->btnModificar->TabIndex = 8;
			this->btnModificar->Text = L"Modificar";
			this->btnModificar->UseVisualStyleBackColor = true;
			this->btnModificar->Click += gcnew System::EventHandler(this, &UsuariosForm::btnModificar_Click);
			// 
			// btnEliminar
			// 
			this->btnEliminar->Location = System::Drawing::Point(275, 246);
			this->btnEliminar->Name = L"btnEliminar";
			this->btnEliminar->Size = System::Drawing::Size(89, 33);
			this->btnEliminar->TabIndex = 9;
			this->btnEliminar->Text = L"Eliminar";
			this->btnEliminar->UseVisualStyleBackColor = true;
			this->btnEliminar->Click += gcnew System::EventHandler(this, &UsuariosForm::btnEliminar_Click);
			// 
			// dgvUsuarios
			// 
			this->dgvUsuarios->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvUsuarios->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(13) {
				this->CodigoPUCP,
					this->UsuarioNombre, this->ApellidoPaterno, this->ApellidoMaterno, this->Contraseña, this->DNI, this->Teléfono, this->CorreoElectrónico,
					this->TipoUsuario, this->ModeloVehiculo, this->PlacaVehiculo, this->ColorVehiculo, this->CantidadAsientos
			});
			this->dgvUsuarios->Location = System::Drawing::Point(12, 289);
			this->dgvUsuarios->Name = L"dgvUsuarios";
			this->dgvUsuarios->Size = System::Drawing::Size(1174, 230);
			this->dgvUsuarios->TabIndex = 10;
			this->dgvUsuarios->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &UsuariosForm::dgvUsuarios_CellClick);
			this->dgvUsuarios->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &UsuariosForm::dgvUsuarios_CellContentClick);
			// 
			// CodigoPUCP
			// 
			this->CodigoPUCP->HeaderText = L"Codigo PUCP";
			this->CodigoPUCP->Name = L"CodigoPUCP";
			// 
			// UsuarioNombre
			// 
			this->UsuarioNombre->HeaderText = L"Nombre";
			this->UsuarioNombre->Name = L"UsuarioNombre";
			// 
			// ApellidoPaterno
			// 
			this->ApellidoPaterno->HeaderText = L"Apellido Paterno";
			this->ApellidoPaterno->Name = L"ApellidoPaterno";
			// 
			// ApellidoMaterno
			// 
			this->ApellidoMaterno->HeaderText = L"Apellido Materno";
			this->ApellidoMaterno->Name = L"ApellidoMaterno";
			// 
			// Contraseña
			// 
			this->Contraseña->HeaderText = L"Contraseña";
			this->Contraseña->Name = L"Contraseña";
			// 
			// DNI
			// 
			this->DNI->HeaderText = L"DNI";
			this->DNI->Name = L"DNI";
			// 
			// Teléfono
			// 
			this->Teléfono->HeaderText = L"Teléfono";
			this->Teléfono->Name = L"Teléfono";
			// 
			// CorreoElectrónico
			// 
			this->CorreoElectrónico->HeaderText = L"Correo Electrónico";
			this->CorreoElectrónico->Name = L"CorreoElectrónico";
			this->CorreoElectrónico->Width = 150;
			// 
			// TipoUsuario
			// 
			this->TipoUsuario->HeaderText = L"Tipo de Usuario";
			this->TipoUsuario->Name = L"TipoUsuario";
			// 
			// ModeloVehiculo
			// 
			this->ModeloVehiculo->HeaderText = L"Modelo de Vehículo";
			this->ModeloVehiculo->Name = L"ModeloVehiculo";
			// 
			// PlacaVehiculo
			// 
			this->PlacaVehiculo->HeaderText = L"Placa de Vehículo";
			this->PlacaVehiculo->Name = L"PlacaVehiculo";
			// 
			// ColorVehiculo
			// 
			this->ColorVehiculo->HeaderText = L"Color de Vehículo";
			this->ColorVehiculo->Name = L"ColorVehiculo";
			// 
			// CantidadAsientos
			// 
			this->CantidadAsientos->HeaderText = L"Cantidad de Asientos";
			this->CantidadAsientos->Name = L"CantidadAsientos";
			// 
			// txtNombre
			// 
			this->txtNombre->Location = System::Drawing::Point(111, 53);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(140, 20);
			this->txtNombre->TabIndex = 11;
			this->txtNombre->TextChanged += gcnew System::EventHandler(this, &UsuariosForm::txtNombre_TextChanged);
			// 
			// lblApellidoPaterno
			// 
			this->lblApellidoPaterno->AutoSize = true;
			this->lblApellidoPaterno->Location = System::Drawing::Point(12, 85);
			this->lblApellidoPaterno->Name = L"lblApellidoPaterno";
			this->lblApellidoPaterno->Size = System::Drawing::Size(87, 13);
			this->lblApellidoPaterno->TabIndex = 12;
			this->lblApellidoPaterno->Text = L"Apellido Paterno:";
			this->lblApellidoPaterno->Click += gcnew System::EventHandler(this, &UsuariosForm::lblApellidoPaterno_Click);
			// 
			// lblApellidoMaterno
			// 
			this->lblApellidoMaterno->AutoSize = true;
			this->lblApellidoMaterno->Location = System::Drawing::Point(12, 112);
			this->lblApellidoMaterno->Name = L"lblApellidoMaterno";
			this->lblApellidoMaterno->Size = System::Drawing::Size(89, 13);
			this->lblApellidoMaterno->TabIndex = 13;
			this->lblApellidoMaterno->Text = L"Apellido Materno:";
			this->lblApellidoMaterno->Click += gcnew System::EventHandler(this, &UsuariosForm::lblApellidoMaterno_Click);
			// 
			// txtApellidoPaterno
			// 
			this->txtApellidoPaterno->Location = System::Drawing::Point(111, 82);
			this->txtApellidoPaterno->Name = L"txtApellidoPaterno";
			this->txtApellidoPaterno->Size = System::Drawing::Size(140, 20);
			this->txtApellidoPaterno->TabIndex = 14;
			this->txtApellidoPaterno->TextChanged += gcnew System::EventHandler(this, &UsuariosForm::txtApellidoPaterno_TextChanged);
			// 
			// txtApellidoMaterno
			// 
			this->txtApellidoMaterno->Location = System::Drawing::Point(111, 109);
			this->txtApellidoMaterno->Name = L"txtApellidoMaterno";
			this->txtApellidoMaterno->Size = System::Drawing::Size(140, 20);
			this->txtApellidoMaterno->TabIndex = 15;
			this->txtApellidoMaterno->TextChanged += gcnew System::EventHandler(this, &UsuariosForm::txtApellidoMaterno_TextChanged);
			// 
			// lblCodigoPUCP
			// 
			this->lblCodigoPUCP->AutoSize = true;
			this->lblCodigoPUCP->Location = System::Drawing::Point(12, 25);
			this->lblCodigoPUCP->Name = L"lblCodigoPUCP";
			this->lblCodigoPUCP->Size = System::Drawing::Size(72, 13);
			this->lblCodigoPUCP->TabIndex = 16;
			this->lblCodigoPUCP->Text = L"CodigoPUCP:";
			this->lblCodigoPUCP->Click += gcnew System::EventHandler(this, &UsuariosForm::lblCodigoPUCP_Click);
			// 
			// txtCodigoPUCP
			// 
			this->txtCodigoPUCP->Location = System::Drawing::Point(111, 25);
			this->txtCodigoPUCP->Name = L"txtCodigoPUCP";
			this->txtCodigoPUCP->Size = System::Drawing::Size(140, 20);
			this->txtCodigoPUCP->TabIndex = 17;
			this->txtCodigoPUCP->TextChanged += gcnew System::EventHandler(this, &UsuariosForm::txtCodigoPUCP_TextChanged);
			// 
			// txtContraseña
			// 
			this->txtContraseña->Location = System::Drawing::Point(111, 142);
			this->txtContraseña->Name = L"txtContraseña";
			this->txtContraseña->Size = System::Drawing::Size(140, 20);
			this->txtContraseña->TabIndex = 19;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 138);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(64, 13);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Contraseña:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 171);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(83, 13);
			this->label2->TabIndex = 20;
			this->label2->Text = L"Tipo de usuario:";
			// 
			// txtTipoUsuario
			// 
			this->txtTipoUsuario->Location = System::Drawing::Point(111, 171);
			this->txtTipoUsuario->Name = L"txtTipoUsuario";
			this->txtTipoUsuario->Size = System::Drawing::Size(140, 20);
			this->txtTipoUsuario->TabIndex = 21;
			// 
			// pBConductor
			// 
			this->pBConductor->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pBConductor->Location = System::Drawing::Point(565, 47);
			this->pBConductor->Name = L"pBConductor";
			this->pBConductor->Size = System::Drawing::Size(138, 147);
			this->pBConductor->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pBConductor->TabIndex = 42;
			this->pBConductor->TabStop = false;
			// 
			// pBCarro
			// 
			this->pBCarro->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pBCarro->Location = System::Drawing::Point(793, 47);
			this->pBCarro->Name = L"pBCarro";
			this->pBCarro->Size = System::Drawing::Size(138, 147);
			this->pBCarro->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pBCarro->TabIndex = 43;
			this->pBCarro->TabStop = false;
			// 
			// pBQR
			// 
			this->pBQR->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pBQR->Location = System::Drawing::Point(1015, 47);
			this->pBQR->Name = L"pBQR";
			this->pBQR->Size = System::Drawing::Size(138, 147);
			this->pBQR->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pBQR->TabIndex = 44;
			this->pBQR->TabStop = false;
			// 
			// txtAsientos
			// 
			this->txtAsientos->Location = System::Drawing::Point(375, 174);
			this->txtAsientos->Name = L"txtAsientos";
			this->txtAsientos->Size = System::Drawing::Size(140, 20);
			this->txtAsientos->TabIndex = 56;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(276, 174);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(84, 13);
			this->label3->TabIndex = 55;
			this->label3->Text = L"Asientos totales:";
			// 
			// txtColor
			// 
			this->txtColor->Location = System::Drawing::Point(375, 145);
			this->txtColor->Name = L"txtColor";
			this->txtColor->Size = System::Drawing::Size(140, 20);
			this->txtColor->TabIndex = 54;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(276, 141);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(34, 13);
			this->label4->TabIndex = 53;
			this->label4->Text = L"Color:";
			// 
			// txtDNI
			// 
			this->txtDNI->Location = System::Drawing::Point(375, 28);
			this->txtDNI->Name = L"txtDNI";
			this->txtDNI->Size = System::Drawing::Size(140, 20);
			this->txtDNI->TabIndex = 52;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(276, 28);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(29, 13);
			this->label5->TabIndex = 51;
			this->label5->Text = L"DNI:";
			// 
			// txtPlaca
			// 
			this->txtPlaca->Location = System::Drawing::Point(375, 112);
			this->txtPlaca->Name = L"txtPlaca";
			this->txtPlaca->Size = System::Drawing::Size(140, 20);
			this->txtPlaca->TabIndex = 50;
			// 
			// txtModelo
			// 
			this->txtModelo->Location = System::Drawing::Point(375, 85);
			this->txtModelo->Name = L"txtModelo";
			this->txtModelo->Size = System::Drawing::Size(140, 20);
			this->txtModelo->TabIndex = 49;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(276, 115);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(37, 13);
			this->label6->TabIndex = 48;
			this->label6->Text = L"Placa:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(276, 88);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(45, 13);
			this->label7->TabIndex = 47;
			this->label7->Text = L"Modelo:";
			// 
			// txtTelefono
			// 
			this->txtTelefono->Location = System::Drawing::Point(375, 56);
			this->txtTelefono->Name = L"txtTelefono";
			this->txtTelefono->Size = System::Drawing::Size(140, 20);
			this->txtTelefono->TabIndex = 46;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(276, 59);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(52, 13);
			this->label8->TabIndex = 45;
			this->label8->Text = L"Teléfono:";
			// 
			// txtBreveteEnRegla
			// 
			this->txtBreveteEnRegla->Location = System::Drawing::Point(375, 205);
			this->txtBreveteEnRegla->Name = L"txtBreveteEnRegla";
			this->txtBreveteEnRegla->Size = System::Drawing::Size(140, 20);
			this->txtBreveteEnRegla->TabIndex = 60;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(276, 205);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(88, 13);
			this->label9->TabIndex = 59;
			this->label9->Text = L"Brevete en regla:";
			// 
			// txtcorreo
			// 
			this->txtcorreo->Location = System::Drawing::Point(111, 202);
			this->txtcorreo->Name = L"txtcorreo";
			this->txtcorreo->Size = System::Drawing::Size(140, 20);
			this->txtcorreo->TabIndex = 58;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(12, 202);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(97, 13);
			this->label10->TabIndex = 57;
			this->label10->Text = L"Correo Electrónico:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(587, 203);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(96, 13);
			this->label11->TabIndex = 61;
			this->label11->Text = L"Foto del conductor";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(812, 203);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(91, 13);
			this->label12->TabIndex = 62;
			this->label12->Text = L"Foto del Vehículo";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(1051, 203);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(64, 13);
			this->label13->TabIndex = 63;
			this->label13->Text = L"Foto del QR";
			// 
			// UsuariosForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1198, 541);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->txtBreveteEnRegla);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->txtcorreo);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->txtAsientos);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtColor);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtDNI);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txtPlaca);
			this->Controls->Add(this->txtModelo);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txtTelefono);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->pBQR);
			this->Controls->Add(this->pBCarro);
			this->Controls->Add(this->pBConductor);
			this->Controls->Add(this->txtTipoUsuario);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtContraseña);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtCodigoPUCP);
			this->Controls->Add(this->lblCodigoPUCP);
			this->Controls->Add(this->txtApellidoMaterno);
			this->Controls->Add(this->txtApellidoPaterno);
			this->Controls->Add(this->lblApellidoMaterno);
			this->Controls->Add(this->lblApellidoPaterno);
			this->Controls->Add(this->txtNombre);
			this->Controls->Add(this->dgvUsuarios);
			this->Controls->Add(this->btnEliminar);
			this->Controls->Add(this->btnModificar);
			this->Controls->Add(this->btnAgregar);
			this->Controls->Add(this->lblNombre);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"UsuariosForm";
			this->Text = L"UsuariosForm";
			this->Load += gcnew System::EventHandler(this, &UsuariosForm::UsuariosForm_Load_1);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvUsuarios))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pBConductor))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pBCarro))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pBQR))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void btnAgregar_Click(System::Object^ sender, System::EventArgs^ e) {
		STPUCP_Model::Usuario^ usuario;

		String^ tipoUsuario = txtTipoUsuario->Text;

		if (tipoUsuario == "Administrador") {
			usuario = gcnew STPUCP_Model::Administrador();
		}
		else if (tipoUsuario == "Pasajero") {
			usuario = gcnew STPUCP_Model::Pasajero();
		}
		else if (tipoUsuario == "Conductor") {
			usuario = gcnew STPUCP_Model::Conductor();
			Conductor^ conductor = dynamic_cast<Conductor^>(usuario);
			conductor->ModeloCarro = txtModelo->Text;
			conductor->PlacaCarro = txtPlaca->Text;
			conductor->ColorCarro = txtColor->Text;
			conductor->CantAsientos = Int32::Parse(txtAsientos->Text);
		}
		else {

			MessageBox::Show("Seleccione un tipo de usuario válido.");
			return;
		}

		usuario->CodigoPUCP = Int32::Parse(txtCodigoPUCP->Text);
		usuario->Nombre = txtNombre->Text;
		usuario->ApellidoPaterno = txtApellidoPaterno->Text;
		usuario->ApellidoMaterno = txtApellidoMaterno->Text;
		usuario->Contraseña = txtContraseña->Text;
		usuario->Rol = txtTipoUsuario->Text;
		usuario->Correo = txtcorreo->Text;
		usuario->DNI = Int32::Parse(txtDNI->Text);
		usuario->NumeroTelefono = Int32::Parse(txtTelefono->Text);

		STPUCPAdminController::controller::AddUser(usuario);
		RefreshGrid();
	}

		   void RefreshGrid() {
			   List<Usuario^>^ UsuarioList = controller::QueryAllUsers();
			   dgvUsuarios->Rows->Clear();
			   for (int i = 0; i < UsuarioList->Count; i++) {
				   Usuario^ usuario = UsuarioList[i];
				   if (usuario->Rol == "Conductor") {
					   Conductor^ conductor = dynamic_cast<Conductor^>(usuario);
					   dgvUsuarios->Rows->Add(gcnew array<String^> {"" + conductor->CodigoPUCP, conductor->Nombre, conductor->ApellidoPaterno, conductor->ApellidoMaterno, conductor->Contraseña, "" + conductor->DNI, "" + conductor->NumeroTelefono, conductor->Correo, conductor->Rol, conductor->ModeloCarro, conductor->PlacaCarro, conductor->ColorCarro, "" + conductor->CantAsientos});
				   }
				   else
					   dgvUsuarios->Rows->Add(gcnew array<String^> {"" + usuario->CodigoPUCP, usuario->Nombre, usuario->ApellidoPaterno, usuario->ApellidoMaterno, usuario->Contraseña, "" + usuario->DNI, "" + usuario->NumeroTelefono, usuario->Correo, usuario->Rol});
			   }
		   }


private: System::Void dgvUsuarios_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (dgvUsuarios->Rows[dgvUsuarios->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString() != nullptr) {
		int UsuarioID = Int32::Parse(dgvUsuarios->Rows[dgvUsuarios->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString());
		Usuario^ Usuario = controller::QueryUsersById(UsuarioID);
		if (Usuario != nullptr) {
			txtCodigoPUCP->Text = "" + Usuario->CodigoPUCP;
			txtNombre->Text = Usuario->Nombre;
			txtApellidoPaterno->Text = Usuario->ApellidoPaterno;
			txtApellidoMaterno->Text = Usuario->ApellidoMaterno;
			txtContraseña->Text = Usuario->Contraseña;
			txtTipoUsuario->Text = Usuario->Rol;
			txtcorreo->Text = Usuario->Correo;
			txtDNI->Text = "" + Usuario->DNI;
			txtTelefono->Text = "" + Usuario->NumeroTelefono;
		}
		if (Usuario->Rol == "Conductor") {
			Conductor^ conductor = dynamic_cast<Conductor^>(Usuario);
			txtModelo->Text = conductor->ModeloCarro;
			txtPlaca->Text = conductor->PlacaCarro;
			txtColor->Text = conductor->ColorCarro;
			txtAsientos->Text = "" + conductor->CantAsientos;

			// Cargar la imagen del conductor
			if (conductor->FotoConductor != nullptr) {
				System::IO::MemoryStream^ msConductor = gcnew System::IO::MemoryStream(conductor->FotoConductor);
				pBConductor->Image = Image::FromStream(msConductor);
			}
			else {
				pBConductor->Image = nullptr;
			}

			// Cargar la imagen del carro
			if (conductor->FotoCarro != nullptr) {
				System::IO::MemoryStream^ msCarro = gcnew System::IO::MemoryStream(conductor->FotoCarro);
				pBCarro->Image = Image::FromStream(msCarro);
			}
			else {
				pBCarro->Image = nullptr;
			}

			//Cargar la imagen del QR
			if (conductor->FotoYape != nullptr) {
				System::IO::MemoryStream^ msQR = gcnew System::IO::MemoryStream(conductor->FotoYape);
				pBQR->Image = Image::FromStream(msQR);
			}
			else {
				pBQR->Image = nullptr;
			}
		}
		else {
			pBConductor->Image = nullptr;
			pBCarro->Image = nullptr;
			pBQR->Image = nullptr;
		}
	}
}

private: System::Void btnModificar_Click(System::Object^ sender, System::EventArgs^ e) {
	STPUCP_Model::Usuario^ usuario;

	String^ tipoUsuario = txtTipoUsuario->Text;

	if (tipoUsuario == "Administrador") {
		usuario = gcnew STPUCP_Model::Administrador();
	}
	else if (tipoUsuario == "Pasajero") {
		usuario = gcnew STPUCP_Model::Pasajero();
	}
	else if (tipoUsuario == "Conductor") {
		usuario = gcnew STPUCP_Model::Conductor();
		Conductor^ conductor = dynamic_cast<Conductor^>(usuario);
		conductor->ModeloCarro = txtModelo->Text;
		conductor->PlacaCarro = txtPlaca->Text;
		conductor->ColorCarro = txtColor->Text;
		conductor->CantAsientos = Int32::Parse(txtAsientos->Text);
	}
	else {
		MessageBox::Show("Seleccione un tipo de usuario válido.");
		return;
	}

	usuario->CodigoPUCP = Int32::Parse(txtCodigoPUCP->Text);
	usuario->Nombre = txtNombre->Text;
	usuario->ApellidoPaterno = txtApellidoPaterno->Text;
	usuario->ApellidoMaterno = txtApellidoMaterno->Text;
	usuario->Contraseña = txtContraseña->Text;
	usuario->Rol = txtTipoUsuario->Text;
	usuario->Correo = txtcorreo->Text;
	usuario->DNI = Int32::Parse(txtDNI->Text);
	usuario->NumeroTelefono = Int32::Parse(txtTelefono->Text);

	STPUCPAdminController::controller::UpdateUser(usuario);
	RefreshGrid();
}

private: System::Void btnEliminar_Click(System::Object^ sender, System::EventArgs^ e) {
	int codigoPUCP = Int32::Parse(txtCodigoPUCP->Text);
	controller::DeleteUser(codigoPUCP);
	RefreshGrid();
}

private: System::Void UsuariosForm_Load_1(System::Object^ sender, System::EventArgs^ e) {
	RefreshGrid();
}
private: System::Void lblCodigoPUCP_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txtApellidoMaterno_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txtApellidoPaterno_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void lblApellidoMaterno_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void lblApellidoPaterno_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txtNombre_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dgvUsuarios_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void txtCodigoPUCP_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txtId_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void lblNombre_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void lblId_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}