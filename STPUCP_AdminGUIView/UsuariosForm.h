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
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
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
	private: System::Windows::Forms::Label^ lblId;
	private: System::Windows::Forms::Label^ lblNombre;
	private: System::Windows::Forms::TextBox^ txtId;








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
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ UsuarioID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ UsuarioNombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ApellidoPaterno;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ApellidoMaterno;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CodigoPUCP;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Contrase�a;
	private: System::Windows::Forms::TextBox^ txtContrase�a;
	private: System::Windows::Forms::Label^ label1;






















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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nuevoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modificarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lblId = (gcnew System::Windows::Forms::Label());
			this->lblNombre = (gcnew System::Windows::Forms::Label());
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			this->btnAgregar = (gcnew System::Windows::Forms::Button());
			this->btnModificar = (gcnew System::Windows::Forms::Button());
			this->btnEliminar = (gcnew System::Windows::Forms::Button());
			this->dgvUsuarios = (gcnew System::Windows::Forms::DataGridView());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->lblApellidoPaterno = (gcnew System::Windows::Forms::Label());
			this->lblApellidoMaterno = (gcnew System::Windows::Forms::Label());
			this->txtApellidoPaterno = (gcnew System::Windows::Forms::TextBox());
			this->txtApellidoMaterno = (gcnew System::Windows::Forms::TextBox());
			this->lblCodigoPUCP = (gcnew System::Windows::Forms::Label());
			this->txtCodigoPUCP = (gcnew System::Windows::Forms::TextBox());
			this->txtContrase�a = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->UsuarioID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->UsuarioNombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ApellidoPaterno = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ApellidoMaterno = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CodigoPUCP = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Contrase�a = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvUsuarios))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->AllowMerge = false;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->archivoToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(506, 24);
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
			// lblId
			// 
			this->lblId->AutoSize = true;
			this->lblId->Location = System::Drawing::Point(17, 39);
			this->lblId->Name = L"lblId";
			this->lblId->Size = System::Drawing::Size(19, 13);
			this->lblId->TabIndex = 1;
			this->lblId->Text = L"Id:";
			this->lblId->Click += gcnew System::EventHandler(this, &UsuariosForm::lblId_Click);
			// 
			// lblNombre
			// 
			this->lblNombre->AutoSize = true;
			this->lblNombre->Location = System::Drawing::Point(17, 65);
			this->lblNombre->Name = L"lblNombre";
			this->lblNombre->Size = System::Drawing::Size(47, 13);
			this->lblNombre->TabIndex = 2;
			this->lblNombre->Text = L"Nombre:";
			this->lblNombre->Click += gcnew System::EventHandler(this, &UsuariosForm::lblNombre_Click);
			// 
			// txtId
			// 
			this->txtId->Location = System::Drawing::Point(134, 32);
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(64, 20);
			this->txtId->TabIndex = 4;
			this->txtId->TextChanged += gcnew System::EventHandler(this, &UsuariosForm::txtId_TextChanged);
			// 
			// btnAgregar
			// 
			this->btnAgregar->Location = System::Drawing::Point(89, 217);
			this->btnAgregar->Name = L"btnAgregar";
			this->btnAgregar->Size = System::Drawing::Size(75, 23);
			this->btnAgregar->TabIndex = 7;
			this->btnAgregar->Text = L"Agregar";
			this->btnAgregar->UseVisualStyleBackColor = true;
			this->btnAgregar->Click += gcnew System::EventHandler(this, &UsuariosForm::btnAgregar_Click);
			// 
			// btnModificar
			// 
			this->btnModificar->Location = System::Drawing::Point(206, 217);
			this->btnModificar->Name = L"btnModificar";
			this->btnModificar->Size = System::Drawing::Size(75, 23);
			this->btnModificar->TabIndex = 8;
			this->btnModificar->Text = L"Modificar";
			this->btnModificar->UseVisualStyleBackColor = true;
			this->btnModificar->Click += gcnew System::EventHandler(this, &UsuariosForm::btnModificar_Click);
			// 
			// btnEliminar
			// 
			this->btnEliminar->Location = System::Drawing::Point(322, 217);
			this->btnEliminar->Name = L"btnEliminar";
			this->btnEliminar->Size = System::Drawing::Size(75, 23);
			this->btnEliminar->TabIndex = 9;
			this->btnEliminar->Text = L"Eliminar";
			this->btnEliminar->UseVisualStyleBackColor = true;
			this->btnEliminar->Click += gcnew System::EventHandler(this, &UsuariosForm::btnEliminar_Click);
			// 
			// dgvUsuarios
			// 
			this->dgvUsuarios->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvUsuarios->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->UsuarioID,
					this->UsuarioNombre, this->ApellidoPaterno, this->ApellidoMaterno, this->CodigoPUCP, this->Contrase�a
			});
			this->dgvUsuarios->Location = System::Drawing::Point(12, 266);
			this->dgvUsuarios->Name = L"dgvUsuarios";
			this->dgvUsuarios->Size = System::Drawing::Size(482, 253);
			this->dgvUsuarios->TabIndex = 10;
			this->dgvUsuarios->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &UsuariosForm::dgvUsuarios_CellClick);
			this->dgvUsuarios->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &UsuariosForm::dgvUsuarios_CellContentClick);
			// 
			// txtNombre
			// 
			this->txtNombre->Location = System::Drawing::Point(134, 62);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(140, 20);
			this->txtNombre->TabIndex = 11;
			this->txtNombre->TextChanged += gcnew System::EventHandler(this, &UsuariosForm::txtNombre_TextChanged);
			// 
			// lblApellidoPaterno
			// 
			this->lblApellidoPaterno->AutoSize = true;
			this->lblApellidoPaterno->Location = System::Drawing::Point(17, 94);
			this->lblApellidoPaterno->Name = L"lblApellidoPaterno";
			this->lblApellidoPaterno->Size = System::Drawing::Size(87, 13);
			this->lblApellidoPaterno->TabIndex = 12;
			this->lblApellidoPaterno->Text = L"Apellido Paterno:";
			this->lblApellidoPaterno->Click += gcnew System::EventHandler(this, &UsuariosForm::lblApellidoPaterno_Click);
			// 
			// lblApellidoMaterno
			// 
			this->lblApellidoMaterno->AutoSize = true;
			this->lblApellidoMaterno->Location = System::Drawing::Point(17, 121);
			this->lblApellidoMaterno->Name = L"lblApellidoMaterno";
			this->lblApellidoMaterno->Size = System::Drawing::Size(89, 13);
			this->lblApellidoMaterno->TabIndex = 13;
			this->lblApellidoMaterno->Text = L"Apellido Materno:";
			this->lblApellidoMaterno->Click += gcnew System::EventHandler(this, &UsuariosForm::lblApellidoMaterno_Click);
			// 
			// txtApellidoPaterno
			// 
			this->txtApellidoPaterno->Location = System::Drawing::Point(134, 91);
			this->txtApellidoPaterno->Name = L"txtApellidoPaterno";
			this->txtApellidoPaterno->Size = System::Drawing::Size(140, 20);
			this->txtApellidoPaterno->TabIndex = 14;
			this->txtApellidoPaterno->TextChanged += gcnew System::EventHandler(this, &UsuariosForm::txtApellidoPaterno_TextChanged);
			// 
			// txtApellidoMaterno
			// 
			this->txtApellidoMaterno->Location = System::Drawing::Point(134, 121);
			this->txtApellidoMaterno->Name = L"txtApellidoMaterno";
			this->txtApellidoMaterno->Size = System::Drawing::Size(140, 20);
			this->txtApellidoMaterno->TabIndex = 15;
			this->txtApellidoMaterno->TextChanged += gcnew System::EventHandler(this, &UsuariosForm::txtApellidoMaterno_TextChanged);
			// 
			// lblCodigoPUCP
			// 
			this->lblCodigoPUCP->AutoSize = true;
			this->lblCodigoPUCP->Location = System::Drawing::Point(17, 151);
			this->lblCodigoPUCP->Name = L"lblCodigoPUCP";
			this->lblCodigoPUCP->Size = System::Drawing::Size(72, 13);
			this->lblCodigoPUCP->TabIndex = 16;
			this->lblCodigoPUCP->Text = L"CodigoPUCP:";
			this->lblCodigoPUCP->Click += gcnew System::EventHandler(this, &UsuariosForm::lblCodigoPUCP_Click);
			// 
			// txtCodigoPUCP
			// 
			this->txtCodigoPUCP->Location = System::Drawing::Point(134, 151);
			this->txtCodigoPUCP->Name = L"txtCodigoPUCP";
			this->txtCodigoPUCP->Size = System::Drawing::Size(140, 20);
			this->txtCodigoPUCP->TabIndex = 17;
			this->txtCodigoPUCP->TextChanged += gcnew System::EventHandler(this, &UsuariosForm::txtCodigoPUCP_TextChanged);
			// 
			// txtContrase�a
			// 
			this->txtContrase�a->Location = System::Drawing::Point(134, 177);
			this->txtContrase�a->Name = L"txtContrase�a";
			this->txtContrase�a->Size = System::Drawing::Size(140, 20);
			this->txtContrase�a->TabIndex = 19;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(17, 177);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(64, 13);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Contrase�a:";
			// 
			// UsuarioID
			// 
			this->UsuarioID->HeaderText = L"ID";
			this->UsuarioID->Name = L"UsuarioID";
			this->UsuarioID->Width = 50;
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
			// CodigoPUCP
			// 
			this->CodigoPUCP->HeaderText = L"Codigo PUCP";
			this->CodigoPUCP->Name = L"CodigoPUCP";
			// 
			// Contrase�a
			// 
			this->Contrase�a->HeaderText = L"Contrase�a";
			this->Contrase�a->Name = L"Contrase�a";
			// 
			// UsuariosForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(506, 541);
			this->Controls->Add(this->txtContrase�a);
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
			this->Controls->Add(this->txtId);
			this->Controls->Add(this->lblNombre);
			this->Controls->Add(this->lblId);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"UsuariosForm";
			this->Text = L"UsuariosForm";
			this->Load += gcnew System::EventHandler(this, &UsuariosForm::UsuariosForm_Load_1);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvUsuarios))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void btnAgregar_Click(System::Object^ sender, System::EventArgs^ e) {
		STPUCP_Model::Usuario^ usuario = gcnew STPUCP_Model::Usuario();
		usuario->Id = Int32::Parse(txtId->Text);
		usuario->Nombre = txtNombre->Text;
		usuario->ApellidoPaterno = txtApellidoPaterno->Text;
		usuario->ApellidoMaterno = txtApellidoMaterno->Text;
		usuario->CodigoPUCP = Int32::Parse(txtCodigoPUCP->Text);
		usuario->Contrase�a = txtContrase�a->Text;

		STPUCPAdminController::controller::AddUser(usuario);
				RefreshGrid();
	}

		   void RefreshGrid() {
			   List<Usuario^>^ UsuarioList = controller::QueryAllUsers();
			   dgvUsuarios->Rows->Clear();
			   for (int i = 0; i < UsuarioList->Count; i++) {
				   Usuario^ usuario = UsuarioList[i];
				   dgvUsuarios->Rows->Add(gcnew array<String^> {"" + usuario->Id, usuario->Nombre, usuario->ApellidoPaterno, usuario->ApellidoMaterno, "" + usuario->CodigoPUCP, usuario->Contrase�a});
			   }
		   }
	private: System::Void dgvUsuarios_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		int UsuarioID = Int32::Parse(dgvUsuarios->Rows[dgvUsuarios->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString());
		Usuario^ Usuario = controller::QueryUsersById(UsuarioID);
		txtId->Text = "" + Usuario->Id;
		txtNombre->Text = Usuario->Nombre;
		txtApellidoPaterno->Text = Usuario->ApellidoPaterno;
		txtApellidoMaterno->Text = Usuario->ApellidoMaterno;
		txtCodigoPUCP->Text = "" + Usuario->CodigoPUCP;
		txtContrase�a->Text = Usuario->Contrase�a;
     }
		   
private: System::Void btnModificar_Click(System::Object^ sender, System::EventArgs^ e) {
	Usuario^ Usuario = gcnew STPUCP_Model::Usuario();
	Usuario->Id = Int32::Parse(txtId->Text);

	Usuario->Nombre = txtNombre->Text;
	Usuario->ApellidoPaterno = txtApellidoPaterno->Text ;
	Usuario->ApellidoMaterno = txtApellidoMaterno->Text ;
	Usuario->CodigoPUCP = Int32::Parse(txtCodigoPUCP->Text);
	Usuario->Contrase�a = txtContrase�a->Text;
	controller::UpdateUser(Usuario);
	RefreshGrid();
}
private: System::Void btnEliminar_Click(System::Object^ sender, System::EventArgs^ e) {
	int id = Int32::Parse(txtId->Text);
	controller::DeleteUser(id);
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
