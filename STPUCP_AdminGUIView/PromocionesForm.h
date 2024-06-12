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
	/// Resumen de PromocionesForm
	/// </summary>
	public ref class PromocionesForm : public System::Windows::Forms::Form
	{
	public:
		PromocionesForm(void)
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
		~PromocionesForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ txtNombrePromo;





	private: System::Windows::Forms::Label^ lblApellidoPaterno;
	private: System::Windows::Forms::TextBox^ txtPorcentajePromo;

	private: System::Windows::Forms::DataGridView^ dgvPromo;






	private: System::Windows::Forms::Button^ btnEliminar;
	private: System::Windows::Forms::Button^ btnModificar;
	private: System::Windows::Forms::Button^ btnAgregar;
	private: System::Windows::Forms::TextBox^ txtIdPromo;

	private: System::Windows::Forms::Label^ lblNombre;
	private: System::Windows::Forms::Label^ lblId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PromoID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PorcentajePromo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NombrePromo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ UserID;







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
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->txtNombrePromo = (gcnew System::Windows::Forms::TextBox());
			this->lblApellidoPaterno = (gcnew System::Windows::Forms::Label());
			this->txtPorcentajePromo = (gcnew System::Windows::Forms::TextBox());
			this->dgvPromo = (gcnew System::Windows::Forms::DataGridView());
			this->PromoID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PorcentajePromo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NombrePromo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnEliminar = (gcnew System::Windows::Forms::Button());
			this->btnModificar = (gcnew System::Windows::Forms::Button());
			this->btnAgregar = (gcnew System::Windows::Forms::Button());
			this->txtIdPromo = (gcnew System::Windows::Forms::TextBox());
			this->lblNombre = (gcnew System::Windows::Forms::Label());
			this->lblId = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->UserID = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPromo))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->AllowMerge = false;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->archivoToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(699, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->salirToolStripMenuItem });
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(73, 24);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(121, 26);
			this->salirToolStripMenuItem->Text = L"Salir";
			// 
			// txtNombrePromo
			// 
			this->txtNombrePromo->Location = System::Drawing::Point(224, 135);
			this->txtNombrePromo->Margin = System::Windows::Forms::Padding(4);
			this->txtNombrePromo->Name = L"txtNombrePromo";
			this->txtNombrePromo->Size = System::Drawing::Size(185, 22);
			this->txtNombrePromo->TabIndex = 28;
			// 
			// lblApellidoPaterno
			// 
			this->lblApellidoPaterno->AutoSize = true;
			this->lblApellidoPaterno->Location = System::Drawing::Point(27, 135);
			this->lblApellidoPaterno->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblApellidoPaterno->Name = L"lblApellidoPaterno";
			this->lblApellidoPaterno->Size = System::Drawing::Size(160, 16);
			this->lblApellidoPaterno->TabIndex = 26;
			this->lblApellidoPaterno->Text = L"Nombre de la Promoción:";
			// 
			// txtPorcentajePromo
			// 
			this->txtPorcentajePromo->Location = System::Drawing::Point(224, 87);
			this->txtPorcentajePromo->Margin = System::Windows::Forms::Padding(4);
			this->txtPorcentajePromo->Name = L"txtPorcentajePromo";
			this->txtPorcentajePromo->Size = System::Drawing::Size(185, 22);
			this->txtPorcentajePromo->TabIndex = 25;
			// 
			// dgvPromo
			// 
			this->dgvPromo->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvPromo->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->PromoID, this->PorcentajePromo,
					this->NombrePromo, this->Column1
			});
			this->dgvPromo->Location = System::Drawing::Point(27, 279);
			this->dgvPromo->Margin = System::Windows::Forms::Padding(4);
			this->dgvPromo->Name = L"dgvPromo";
			this->dgvPromo->RowHeadersWidth = 51;
			this->dgvPromo->Size = System::Drawing::Size(585, 165);
			this->dgvPromo->TabIndex = 24;
			this->dgvPromo->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &PromocionesForm::dgvPromo_CellClick);
			// 
			// PromoID
			// 
			this->PromoID->HeaderText = L"ID Promoción";
			this->PromoID->MinimumWidth = 6;
			this->PromoID->Name = L"PromoID";
			this->PromoID->Width = 125;
			// 
			// PorcentajePromo
			// 
			this->PorcentajePromo->HeaderText = L"Porcentaje de Promoción";
			this->PorcentajePromo->MinimumWidth = 6;
			this->PorcentajePromo->Name = L"PorcentajePromo";
			this->PorcentajePromo->Width = 125;
			// 
			// NombrePromo
			// 
			this->NombrePromo->HeaderText = L"Nombre de Promoción";
			this->NombrePromo->MinimumWidth = 6;
			this->NombrePromo->Name = L"NombrePromo";
			this->NombrePromo->Width = 125;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"IDUser";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// btnEliminar
			// 
			this->btnEliminar->Location = System::Drawing::Point(488, 221);
			this->btnEliminar->Margin = System::Windows::Forms::Padding(4);
			this->btnEliminar->Name = L"btnEliminar";
			this->btnEliminar->Size = System::Drawing::Size(100, 28);
			this->btnEliminar->TabIndex = 23;
			this->btnEliminar->Text = L"Eliminar";
			this->btnEliminar->UseVisualStyleBackColor = true;
			this->btnEliminar->Click += gcnew System::EventHandler(this, &PromocionesForm::btnEliminar_Click);
			// 
			// btnModificar
			// 
			this->btnModificar->Location = System::Drawing::Point(274, 221);
			this->btnModificar->Margin = System::Windows::Forms::Padding(4);
			this->btnModificar->Name = L"btnModificar";
			this->btnModificar->Size = System::Drawing::Size(100, 28);
			this->btnModificar->TabIndex = 22;
			this->btnModificar->Text = L"Modificar";
			this->btnModificar->UseVisualStyleBackColor = true;
			this->btnModificar->Click += gcnew System::EventHandler(this, &PromocionesForm::btnModificar_Click);
			// 
			// btnAgregar
			// 
			this->btnAgregar->Location = System::Drawing::Point(66, 221);
			this->btnAgregar->Margin = System::Windows::Forms::Padding(4);
			this->btnAgregar->Name = L"btnAgregar";
			this->btnAgregar->Size = System::Drawing::Size(100, 28);
			this->btnAgregar->TabIndex = 21;
			this->btnAgregar->Text = L"Agregar";
			this->btnAgregar->UseVisualStyleBackColor = true;
			this->btnAgregar->Click += gcnew System::EventHandler(this, &PromocionesForm::btnAgregar_Click);
			// 
			// txtIdPromo
			// 
			this->txtIdPromo->Location = System::Drawing::Point(224, 45);
			this->txtIdPromo->Margin = System::Windows::Forms::Padding(4);
			this->txtIdPromo->Name = L"txtIdPromo";
			this->txtIdPromo->Size = System::Drawing::Size(185, 22);
			this->txtIdPromo->TabIndex = 20;
			// 
			// lblNombre
			// 
			this->lblNombre->AutoSize = true;
			this->lblNombre->Location = System::Drawing::Point(27, 93);
			this->lblNombre->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblNombre->Name = L"lblNombre";
			this->lblNombre->Size = System::Drawing::Size(161, 16);
			this->lblNombre->TabIndex = 19;
			this->lblNombre->Text = L"Porcentaje de promoción:";
			// 
			// lblId
			// 
			this->lblId->AutoSize = true;
			this->lblId->Location = System::Drawing::Point(27, 48);
			this->lblId->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblId->Name = L"lblId";
			this->lblId->Size = System::Drawing::Size(89, 16);
			this->lblId->TabIndex = 18;
			this->lblId->Text = L"Id Promoción:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(27, 177);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(73, 16);
			this->label1->TabIndex = 29;
			this->label1->Text = L"ID Usuario:";
			// 
			// UserID
			// 
			this->UserID->Location = System::Drawing::Point(224, 177);
			this->UserID->Margin = System::Windows::Forms::Padding(4);
			this->UserID->Name = L"UserID";
			this->UserID->Size = System::Drawing::Size(185, 22);
			this->UserID->TabIndex = 30;
			// 
			// PromocionesForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(699, 565);
			this->Controls->Add(this->UserID);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtNombrePromo);
			this->Controls->Add(this->lblApellidoPaterno);
			this->Controls->Add(this->txtPorcentajePromo);
			this->Controls->Add(this->dgvPromo);
			this->Controls->Add(this->btnEliminar);
			this->Controls->Add(this->btnModificar);
			this->Controls->Add(this->btnAgregar);
			this->Controls->Add(this->txtIdPromo);
			this->Controls->Add(this->lblNombre);
			this->Controls->Add(this->lblId);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"PromocionesForm";
			this->Text = L"PromocionesForm";
			this->Load += gcnew System::EventHandler(this, &PromocionesForm::PromocionesForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPromo))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void btnAgregar_Click(System::Object^ sender, System::EventArgs^ e) {
	STPUCP_Model::Promocion^ promocion = gcnew STPUCP_Model::Promocion();
	promocion->Id = Int32::Parse(txtIdPromo->Text);
	promocion->Porcentaje = Int32::Parse(txtPorcentajePromo->Text);
	promocion->NombrePromo = txtNombrePromo->Text;
	promocion->IdUser = Int32::Parse(UserID->Text);

	STPUCPAdminController::controller::AddPromotion(promocion);
	RefreshGrid();
}

	   void RefreshGrid() {
		   List<Promocion^>^ promocionList = controller::QueryAllPromotions();
		   dgvPromo->Rows->Clear();
		   for (int i = 0; i < promocionList->Count; i++) {
			   Promocion^ promocion = promocionList[i];
			   dgvPromo->Rows->Add(gcnew array<String^> {"" + promocion->Id, "" + promocion->Porcentaje, promocion->NombrePromo , "" + promocion-> IdUser});
		   }
	   }

private: System::Void btnModificar_Click(System::Object^ sender, System::EventArgs^ e) {
	Promocion^ promocion = gcnew STPUCP_Model::Promocion();
	promocion->Id = Int32::Parse(txtIdPromo->Text);

	promocion->Porcentaje = Int32::Parse(txtPorcentajePromo->Text);
	promocion->NombrePromo = txtNombrePromo->Text;
	promocion->IdUser = Int32::Parse(UserID->Text);


	controller::UpdatePromotion(promocion);
	RefreshGrid();
}
private: System::Void btnEliminar_Click(System::Object^ sender, System::EventArgs^ e) {
	int id = Int32::Parse(txtIdPromo->Text);
	controller::DeletePromotion(id);
	RefreshGrid();
}
private: System::Void dgvPromo_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	int PromocionID = Int32::Parse(dgvPromo->Rows[dgvPromo->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString());
	Promocion^ promocion = controller::QueryPromotionsById(PromocionID);
	txtIdPromo->Text = "" + promocion->Id;
	txtPorcentajePromo->Text = "" + promocion->Porcentaje;
	txtNombrePromo->Text = promocion->NombrePromo;
	promocion->IdUser = Int32::Parse(UserID->Text);

}
private: System::Void PromocionesForm_Load(System::Object^ sender, System::EventArgs^ e) {
	RefreshGrid();
}
};
}
