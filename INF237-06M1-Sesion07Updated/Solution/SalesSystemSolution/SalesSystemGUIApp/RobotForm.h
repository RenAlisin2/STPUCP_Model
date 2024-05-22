#pragma once
#include "ComboBoxItem.h"

namespace SalesSystemGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SalesSystemModel;
	using namespace SalesSystemService;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Resumen de RobotForm
	/// </summary>
	public ref class RobotForm : public System::Windows::Forms::Form
	{
	public:
		RobotForm(void)
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
		~RobotForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::PictureBox^ pbPhoto;

	private: System::Windows::Forms::TextBox^ txtId;
	private: System::Windows::Forms::TextBox^ txtName;

	private: System::Windows::Forms::TextBox^ txtModel;
	private: System::Windows::Forms::TextBox^ txtLoadCapacity;
	private: System::Windows::Forms::TextBox^ txtSpeed;
	private: System::Windows::Forms::Button^ btnAlterPhoto;







	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::DataGridView^ dgvRobots;









	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ nuevoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ editarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ RobotId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ RobotName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ RobotBrand;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ RobotModel;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ LoadCapacity;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ RobotSpeed;
	private: System::Windows::Forms::ComboBox^ cmbBrands;







































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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pbPhoto = (gcnew System::Windows::Forms::PictureBox());
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->txtModel = (gcnew System::Windows::Forms::TextBox());
			this->txtLoadCapacity = (gcnew System::Windows::Forms::TextBox());
			this->txtSpeed = (gcnew System::Windows::Forms::TextBox());
			this->btnAlterPhoto = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->dgvRobots = (gcnew System::Windows::Forms::DataGridView());
			this->RobotId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->RobotName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->RobotBrand = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->RobotModel = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->LoadCapacity = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->RobotSpeed = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nuevoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cmbBrands = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPhoto))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvRobots))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(49, 68);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Id:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(293, 68);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nombre:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(49, 142);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(78, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Marca:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(49, 205);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(89, 25);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Modelo:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(49, 264);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(202, 25);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Cap. de carga (kg.):";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(435, 261);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(167, 25);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Velocidad (m/s):";
			// 
			// pbPhoto
			// 
			this->pbPhoto->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pbPhoto->Location = System::Drawing::Point(788, 48);
			this->pbPhoto->Name = L"pbPhoto";
			this->pbPhoto->Size = System::Drawing::Size(234, 253);
			this->pbPhoto->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbPhoto->TabIndex = 6;
			this->pbPhoto->TabStop = false;
			// 
			// txtId
			// 
			this->txtId->Location = System::Drawing::Point(162, 68);
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(100, 31);
			this->txtId->TabIndex = 7;
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(406, 68);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(349, 31);
			this->txtName->TabIndex = 8;
			// 
			// txtModel
			// 
			this->txtModel->Location = System::Drawing::Point(162, 202);
			this->txtModel->Name = L"txtModel";
			this->txtModel->Size = System::Drawing::Size(593, 31);
			this->txtModel->TabIndex = 10;
			// 
			// txtLoadCapacity
			// 
			this->txtLoadCapacity->Location = System::Drawing::Point(266, 261);
			this->txtLoadCapacity->Name = L"txtLoadCapacity";
			this->txtLoadCapacity->Size = System::Drawing::Size(100, 31);
			this->txtLoadCapacity->TabIndex = 11;
			// 
			// txtSpeed
			// 
			this->txtSpeed->Location = System::Drawing::Point(655, 264);
			this->txtSpeed->Name = L"txtSpeed";
			this->txtSpeed->Size = System::Drawing::Size(100, 31);
			this->txtSpeed->TabIndex = 12;
			// 
			// btnAlterPhoto
			// 
			this->btnAlterPhoto->Location = System::Drawing::Point(816, 322);
			this->btnAlterPhoto->Name = L"btnAlterPhoto";
			this->btnAlterPhoto->Size = System::Drawing::Size(203, 45);
			this->btnAlterPhoto->TabIndex = 13;
			this->btnAlterPhoto->Text = L"Cambiar foto";
			this->btnAlterPhoto->UseVisualStyleBackColor = true;
			this->btnAlterPhoto->Click += gcnew System::EventHandler(this, &RobotForm::btnAlterPhoto_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->Enabled = false;
			this->btnAdd->Location = System::Drawing::Point(54, 323);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(203, 44);
			this->btnAdd->TabIndex = 14;
			this->btnAdd->Text = L"Agregar";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &RobotForm::btnAdd_Click);
			// 
			// btnUpdate
			// 
			this->btnUpdate->Enabled = false;
			this->btnUpdate->Location = System::Drawing::Point(306, 322);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(203, 45);
			this->btnUpdate->TabIndex = 15;
			this->btnUpdate->Text = L"Modificar";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &RobotForm::btnUpdate_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Enabled = false;
			this->btnDelete->Location = System::Drawing::Point(559, 322);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(203, 45);
			this->btnDelete->TabIndex = 16;
			this->btnDelete->Text = L"Eliminar";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &RobotForm::btnDelete_Click);
			// 
			// dgvRobots
			// 
			this->dgvRobots->AllowUserToAddRows = false;
			this->dgvRobots->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvRobots->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->RobotId, this->RobotName,
					this->RobotBrand, this->RobotModel, this->LoadCapacity, this->RobotSpeed
			});
			this->dgvRobots->Location = System::Drawing::Point(54, 397);
			this->dgvRobots->Name = L"dgvRobots";
			this->dgvRobots->RowHeadersVisible = false;
			this->dgvRobots->RowHeadersWidth = 82;
			this->dgvRobots->RowTemplate->Height = 33;
			this->dgvRobots->Size = System::Drawing::Size(968, 370);
			this->dgvRobots->TabIndex = 17;
			this->dgvRobots->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &RobotForm::dgvRobots_CellClick);
			// 
			// RobotId
			// 
			this->RobotId->HeaderText = L"Id";
			this->RobotId->MinimumWidth = 10;
			this->RobotId->Name = L"RobotId";
			this->RobotId->Width = 30;
			// 
			// RobotName
			// 
			this->RobotName->HeaderText = L"Nombre";
			this->RobotName->MinimumWidth = 10;
			this->RobotName->Name = L"RobotName";
			this->RobotName->Width = 110;
			// 
			// RobotBrand
			// 
			this->RobotBrand->HeaderText = L"Marca";
			this->RobotBrand->MinimumWidth = 10;
			this->RobotBrand->Name = L"RobotBrand";
			this->RobotBrand->Width = 120;
			// 
			// RobotModel
			// 
			this->RobotModel->HeaderText = L"Modelo";
			this->RobotModel->MinimumWidth = 10;
			this->RobotModel->Name = L"RobotModel";
			this->RobotModel->Width = 120;
			// 
			// LoadCapacity
			// 
			this->LoadCapacity->HeaderText = L"Cap. carga";
			this->LoadCapacity->MinimumWidth = 10;
			this->LoadCapacity->Name = L"LoadCapacity";
			this->LoadCapacity->Width = 50;
			// 
			// RobotSpeed
			// 
			this->RobotSpeed->HeaderText = L"Velocidad";
			this->RobotSpeed->MinimumWidth = 10;
			this->RobotSpeed->Name = L"RobotSpeed";
			this->RobotSpeed->Width = 55;
			// 
			// menuStrip1
			// 
			this->menuStrip1->AllowMerge = false;
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(32, 32);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->archivoToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1078, 40);
			this->menuStrip1->TabIndex = 18;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->nuevoToolStripMenuItem,
					this->editarToolStripMenuItem, this->salirToolStripMenuItem
			});
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(114, 36);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// nuevoToolStripMenuItem
			// 
			this->nuevoToolStripMenuItem->Name = L"nuevoToolStripMenuItem";
			this->nuevoToolStripMenuItem->Size = System::Drawing::Size(218, 44);
			this->nuevoToolStripMenuItem->Text = L"Nuevo";
			this->nuevoToolStripMenuItem->Click += gcnew System::EventHandler(this, &RobotForm::nuevoToolStripMenuItem_Click);
			// 
			// editarToolStripMenuItem
			// 
			this->editarToolStripMenuItem->Name = L"editarToolStripMenuItem";
			this->editarToolStripMenuItem->Size = System::Drawing::Size(218, 44);
			this->editarToolStripMenuItem->Text = L"Editar";
			this->editarToolStripMenuItem->Click += gcnew System::EventHandler(this, &RobotForm::editarToolStripMenuItem_Click);
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(218, 44);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &RobotForm::salirToolStripMenuItem_Click);
			// 
			// cmbBrands
			// 
			this->cmbBrands->FormattingEnabled = true;
			this->cmbBrands->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"Keenon", L"Pudu", L"OrionStar", L"UBTECH", L"TEMI" });
			this->cmbBrands->Location = System::Drawing::Point(164, 145);
			this->cmbBrands->Name = L"cmbBrands";
			this->cmbBrands->Size = System::Drawing::Size(590, 33);
			this->cmbBrands->TabIndex = 19;
			// 
			// RobotForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1078, 824);
			this->Controls->Add(this->cmbBrands);
			this->Controls->Add(this->dgvRobots);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->btnAlterPhoto);
			this->Controls->Add(this->txtSpeed);
			this->Controls->Add(this->txtLoadCapacity);
			this->Controls->Add(this->txtModel);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->txtId);
			this->Controls->Add(this->pbPhoto);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"RobotForm";
			this->Text = L"Mantenimiento de robots";
			this->Load += gcnew System::EventHandler(this, &RobotForm::RobotForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPhoto))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvRobots))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	void ClearControls() {
		txtId->Text = "";
		txtName->Text = "";
		//txtBrand->Text = "";
		txtLoadCapacity->Text = "";
		txtModel->Text = "";
		txtSpeed->Text = "";
		pbPhoto->Image = nullptr;
		pbPhoto->Invalidate();
	}

private: System::Void nuevoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ClearControls();
	btnAdd->Enabled = true;
	btnUpdate->Enabled = false;
	btnDelete->Enabled = false;

}
private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	int id = Convert::ToInt32(txtId->Text);
	String^ name = txtName->Text;
	String^ model = txtModel->Text;
	String^ brandText = cmbBrands->Items[cmbBrands->SelectedIndex]->ToString();//txtBrand->Text;
	double speed = Convert::ToDouble(txtSpeed->Text);
	double loadCapacity = Convert::ToDouble(txtLoadCapacity->Text);

	RobotWaiter^ robot = gcnew RobotWaiter();
	robot->Id = id;
	robot->Name = name;
	Brand^ brand = Service::QueryBrandById(
						((ComboBoxItem^)(cmbBrands->Items[cmbBrands->SelectedIndex]))->Value);
	robot->Brand = brand;
	robot->Model = model;
	robot->Speed = speed;
	robot->LoadCapacity = loadCapacity;
	if (pbPhoto != nullptr && pbPhoto->Image != nullptr) {
		System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
		pbPhoto->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
		robot->Photo = ms->ToArray();
	}

	Service::AddRobot(robot);
	ShowRobots();
}
	   void ShowRobots() {
		   List<RobotWaiter^>^ robotsList = Service::QueryAllRobots();
		   if (robotsList != nullptr) {
			   dgvRobots->Rows->Clear();
			   for (int i = 0; i < robotsList->Count; i++) {
				   dgvRobots->Rows->Add(gcnew array<String^> {"" + robotsList[i]->Id, robotsList[i]->Name,
					   robotsList[i]->Brand->Name, robotsList[i]->Model, "" + robotsList[i]->LoadCapacity, "" + robotsList[i]->Speed});
			   }
		   }
	   }

	   void FillCmbBrand() {
		   //List<String^>^ brandsList = Service::QueryAllBrands();
		   List<Brand^>^ brandObjectsList = Service::QueryAllBrandObjects();
		   if (brandObjectsList != nullptr) {
			   cmbBrands->Items->Clear();
			   for (int i = 0; i < brandObjectsList->Count; i++) {
				   //cmbBrands->Items->Add(brandsList[i]);
				   cmbBrands->Items->Add(gcnew ComboBoxItem(brandObjectsList[i]->Id, 
															brandObjectsList[i]->Name));
			   }
		   }
	   }

private: System::Void dgvRobots_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	int robotId = Int32::Parse(dgvRobots->Rows[dgvRobots->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString());
	RobotWaiter^ robot = Service::QueryRobotById(robotId);
	if (robot != nullptr) {
		txtId->Text = Convert::ToString(robot->Id); // "" + robot->Id;
		//txtBrand->Text = robot->Brand;
		//for (int i = 0; i < cmbBrands->Items->Count; i++) {
		//	if (cmbBrands->Items[i]->ToString()->Equals(robot->Brand)) {
		//		cmbBrands->SelectedIndex = i;
		//		break;
		//	}
		//}
		for (int i = 0; i < cmbBrands->Items->Count; i++) {
			if (((ComboBoxItem^)cmbBrands->Items[i])->Value == robot->Brand->Id) {
				cmbBrands->SelectedIndex = i;
				break;
			}
		}
		txtModel->Text = robot->Model;
		txtName->Text = robot->Name;
		txtSpeed->Text = "" + robot->Speed;
		txtLoadCapacity->Text = "" + robot->LoadCapacity;

		if (robot->Photo != nullptr) {
			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(robot->Photo);
			pbPhoto->Image = Image::FromStream(ms);
		}
		else {
			pbPhoto->Image = nullptr;
			pbPhoto->Invalidate();
		}
	}
}
private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
	int id = Convert::ToInt32(txtId->Text);
	String^ name = txtName->Text;
	String^ model = txtModel->Text;
	String^ brandText = cmbBrands->Items[cmbBrands->SelectedIndex]->ToString();//txtBrand->Text;
	double speed = Convert::ToDouble(txtSpeed->Text);
	double loadCapacity = Convert::ToDouble(txtLoadCapacity->Text);

	RobotWaiter^ robot = gcnew RobotWaiter();
	robot->Id = id;
	robot->Name = name;
	Brand^ brand = Service::QueryBrandById(
		((ComboBoxItem^)(cmbBrands->Items[cmbBrands->SelectedIndex]))->Value);
	robot->Brand = brand;
	robot->Model = model;
	robot->Speed = speed;
	robot->LoadCapacity = loadCapacity;
	if (pbPhoto != nullptr && pbPhoto->Image != nullptr) {
		System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
		pbPhoto->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
		robot->Photo = ms->ToArray();
	}

	Service::UpdateRobot(robot);
	ShowRobots();
}
private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	int id = Convert::ToInt32(txtId->Text);
	Service::DeleteRobot(id);
	ShowRobots();
}
private: System::Void btnAlterPhoto_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ ofd = gcnew OpenFileDialog();
	ofd->Filter = "Image Files (*.jpg;*.jpeg;)|*.jpg;*.jpeg;";
	if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		pbPhoto->Image = gcnew Bitmap(ofd->FileName);
	}
}
private: System::Void editarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	btnAdd->Enabled = false;
	btnUpdate->Enabled = true;
	btnDelete->Enabled = true;
}
private: System::Void RobotForm_Load(System::Object^ sender, System::EventArgs^ e) {
	ShowRobots();
	FillCmbBrand();
}
};
}
