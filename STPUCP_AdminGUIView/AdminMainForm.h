#pragma once
#include "UsuariosForm.h"
#include "ServiciosForm.h"
#include "MetricasForm.h"
#include "BL_ConductoresForm.h"
#include "BL_PasajerosForm.h"
#include "OrdenForm.h"
#include "PromocionesForm.h"
#include "LoginForm.h"
#include "PasajeroRutaForm.h"
#include "ConductorForm.h"





namespace STPUCPAdminGUIView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de AdminMainForm
	/// </summary>
	public ref class AdminMainForm : public System::Windows::Forms::Form
	{
	public:
		static Usuario^ user; //Cuando no hay un usuario identificado será null y cundo halla alguno cambiará al usuario identificado//
		//con este miembro se habilitarán las opciones del menu
		AdminMainForm(void)
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
		~AdminMainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ modificarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ serviciosToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ conductoresToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ métricasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ promocionesToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ verToolStripMenuItem;




	private: System::Windows::Forms::ToolStripMenuItem^ verTodasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ blackListToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ verToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ordenesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ pasajerosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ofrecerServicioToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ viajeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ escogerServicioToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ transporteToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^ pictureBox1;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminMainForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modificarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->serviciosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->conductoresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ordenesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->métricasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->verToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->promocionesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->verTodasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->blackListToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->verToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pasajerosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ofrecerServicioToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->viajeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->escogerServicioToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->transporteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->archivoToolStripMenuItem,
					this->modificarToolStripMenuItem, this->métricasToolStripMenuItem, this->promocionesToolStripMenuItem, this->blackListToolStripMenuItem,
					this->ofrecerServicioToolStripMenuItem, this->escogerServicioToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(954, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->salirToolStripMenuItem });
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(63, 20);
			this->archivoToolStripMenuItem->Text = L" Archivo";
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(96, 22);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminMainForm::salirToolStripMenuItem_Click);
			// 
			// modificarToolStripMenuItem
			// 
			this->modificarToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->serviciosToolStripMenuItem,
					this->conductoresToolStripMenuItem, this->ordenesToolStripMenuItem
			});
			this->modificarToolStripMenuItem->Name = L"modificarToolStripMenuItem";
			this->modificarToolStripMenuItem->Size = System::Drawing::Size(70, 20);
			this->modificarToolStripMenuItem->Text = L"Modificar";
			// 
			// serviciosToolStripMenuItem
			// 
			this->serviciosToolStripMenuItem->Name = L"serviciosToolStripMenuItem";
			this->serviciosToolStripMenuItem->Size = System::Drawing::Size(120, 22);
			this->serviciosToolStripMenuItem->Text = L"Servicios";
			this->serviciosToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminMainForm::serviciosToolStripMenuItem_Click);
			// 
			// conductoresToolStripMenuItem
			// 
			this->conductoresToolStripMenuItem->Name = L"conductoresToolStripMenuItem";
			this->conductoresToolStripMenuItem->Size = System::Drawing::Size(120, 22);
			this->conductoresToolStripMenuItem->Text = L"Usuarios";
			this->conductoresToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminMainForm::conductoresToolStripMenuItem_Click);
			// 
			// ordenesToolStripMenuItem
			// 
			this->ordenesToolStripMenuItem->Name = L"ordenesToolStripMenuItem";
			this->ordenesToolStripMenuItem->Size = System::Drawing::Size(120, 22);
			this->ordenesToolStripMenuItem->Text = L"Ordenes";
			this->ordenesToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminMainForm::ordenesToolStripMenuItem_Click);
			// 
			// métricasToolStripMenuItem
			// 
			this->métricasToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->verToolStripMenuItem });
			this->métricasToolStripMenuItem->Name = L"métricasToolStripMenuItem";
			this->métricasToolStripMenuItem->Size = System::Drawing::Size(64, 20);
			this->métricasToolStripMenuItem->Text = L"Métricas";
			// 
			// verToolStripMenuItem
			// 
			this->verToolStripMenuItem->Name = L"verToolStripMenuItem";
			this->verToolStripMenuItem->Size = System::Drawing::Size(90, 22);
			this->verToolStripMenuItem->Text = L"Ver";
			this->verToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminMainForm::verToolStripMenuItem_Click);
			// 
			// promocionesToolStripMenuItem
			// 
			this->promocionesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->verTodasToolStripMenuItem });
			this->promocionesToolStripMenuItem->Name = L"promocionesToolStripMenuItem";
			this->promocionesToolStripMenuItem->Size = System::Drawing::Size(89, 20);
			this->promocionesToolStripMenuItem->Text = L"Promociones";
			// 
			// verTodasToolStripMenuItem
			// 
			this->verTodasToolStripMenuItem->Name = L"verTodasToolStripMenuItem";
			this->verTodasToolStripMenuItem->Size = System::Drawing::Size(90, 22);
			this->verTodasToolStripMenuItem->Text = L"Ver";
			this->verTodasToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminMainForm::verTodasToolStripMenuItem_Click);
			// 
			// blackListToolStripMenuItem
			// 
			this->blackListToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->verToolStripMenuItem1,
					this->pasajerosToolStripMenuItem
			});
			this->blackListToolStripMenuItem->Name = L"blackListToolStripMenuItem";
			this->blackListToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->blackListToolStripMenuItem->Text = L"BlackList";
			// 
			// verToolStripMenuItem1
			// 
			this->verToolStripMenuItem1->Name = L"verToolStripMenuItem1";
			this->verToolStripMenuItem1->Size = System::Drawing::Size(142, 22);
			this->verToolStripMenuItem1->Text = L"Conductores";
			this->verToolStripMenuItem1->Click += gcnew System::EventHandler(this, &AdminMainForm::verToolStripMenuItem1_Click);
			// 
			// pasajerosToolStripMenuItem
			// 
			this->pasajerosToolStripMenuItem->Name = L"pasajerosToolStripMenuItem";
			this->pasajerosToolStripMenuItem->Size = System::Drawing::Size(142, 22);
			this->pasajerosToolStripMenuItem->Text = L"Pasajeros";
			this->pasajerosToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminMainForm::pasajerosToolStripMenuItem_Click);
			// 
			// ofrecerServicioToolStripMenuItem
			// 
			this->ofrecerServicioToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->viajeToolStripMenuItem });
			this->ofrecerServicioToolStripMenuItem->Name = L"ofrecerServicioToolStripMenuItem";
			this->ofrecerServicioToolStripMenuItem->Size = System::Drawing::Size(102, 20);
			this->ofrecerServicioToolStripMenuItem->Text = L"Ofrecer Servicio";
			// 
			// viajeToolStripMenuItem
			// 
			this->viajeToolStripMenuItem->Name = L"viajeToolStripMenuItem";
			this->viajeToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->viajeToolStripMenuItem->Text = L"Viaje";
			this->viajeToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminMainForm::viajeToolStripMenuItem_Click);
			// 
			// escogerServicioToolStripMenuItem
			// 
			this->escogerServicioToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->transporteToolStripMenuItem });
			this->escogerServicioToolStripMenuItem->Name = L"escogerServicioToolStripMenuItem";
			this->escogerServicioToolStripMenuItem->Size = System::Drawing::Size(103, 20);
			this->escogerServicioToolStripMenuItem->Text = L"Escoger servicio";
			// 
			// transporteToolStripMenuItem
			// 
			this->transporteToolStripMenuItem->Name = L"transporteToolStripMenuItem";
			this->transporteToolStripMenuItem->Size = System::Drawing::Size(129, 22);
			this->transporteToolStripMenuItem->Text = L"Transporte";
			this->transporteToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminMainForm::transporteToolStripMenuItem_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 38);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(517, 265);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// AdminMainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(954, 609);
			this->ControlBox = false;
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"AdminMainForm";
			this->Text = L"AdminMainForm";
			this->Load += gcnew System::EventHandler(this, &AdminMainForm::AdminMainForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void conductoresToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	UsuariosForm^ usuariosForm = gcnew UsuariosForm();
	//usuariosForm->MdiParent = this;
	usuariosForm->ShowDialog();

}

private: System::Void serviciosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ServiciosForm^ serviciosForm = gcnew ServiciosForm();
	//serviciosForm->MdiParent = this;
	serviciosForm->ShowDialog();
}
private: System::Void verToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MetricasForm^ metricasForm = gcnew MetricasForm();
	//metricasForm->MdiParent = this;
	metricasForm->ShowDialog();
}
private: System::Void verTodasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	PromocionesForm^ promocionesForm = gcnew PromocionesForm();
	//promocionesForm->MdiParent = this;
	promocionesForm->ShowDialog();
}
private: System::Void verToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	BL_ConductoresForm^ bl_ConductoresForm = gcnew BL_ConductoresForm();
	//bl_ConductoresForm->MdiParent = this;
	bl_ConductoresForm->ShowDialog();
}

private: System::Void AdminMainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	LoginForm^ loginForm = gcnew LoginForm(this); //Le mandamos este objeto(form) al login
	loginForm->ShowDialog();
}
private: System::Void ordenesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	OrdenForm^ ordenForm = gcnew OrdenForm();
	//ordenForm->MdiParent = this;
	ordenForm->ShowDialog();
}
private: System::Void pasajerosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	BL_PasajerosForm^ bl_PasajerosForm = gcnew BL_PasajerosForm();
	//bl_PasajerosForm->MdiParent = this;
	bl_PasajerosForm->ShowDialog();
}
	   public:
		   void EnablePermisoAdministrador() {
			   this->modificarToolStripMenuItem->Visible = true;
			   this->métricasToolStripMenuItem->Visible = true;
			   this->promocionesToolStripMenuItem->Visible = true;
			   this->blackListToolStripMenuItem->Visible = true;
			   this->ofrecerServicioToolStripMenuItem->Visible = false;
			   this->escogerServicioToolStripMenuItem->Visible = false;
		   }
		   void EnablePermisoPasajero() {
			   this->modificarToolStripMenuItem->Visible = false;
			   this->métricasToolStripMenuItem->Visible = false;
			   this->promocionesToolStripMenuItem->Visible = false;
			   this->blackListToolStripMenuItem->Visible = false;
			   this->ofrecerServicioToolStripMenuItem->Visible = false;
			   this->escogerServicioToolStripMenuItem->Visible = true;
		   }
		   void EnablePermisoConductor() {
			   this->modificarToolStripMenuItem->Visible = false;
			   this->métricasToolStripMenuItem->Visible = false;
			   this->promocionesToolStripMenuItem->Visible = false;
			   this->blackListToolStripMenuItem->Visible = false;
			   this->ofrecerServicioToolStripMenuItem->Visible = true;
			   this->escogerServicioToolStripMenuItem->Visible = false;
		   }

private: System::Void transporteToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	PasajeroRutaForm^ pasajeroRutaForm = gcnew PasajeroRutaForm();
	pasajeroRutaForm->ShowDialog();
}
private: System::Void viajeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ConductorForm^ conductorform = gcnew ConductorForm();
	conductorform->ShowDialog();
}
};
}
