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
#include "MetricasPasajero.h"
#include "MetricasConductorh.h"





namespace STPUCPAdminGUIView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;

	/// <summary>
	/// Resumen de AdminMainForm
	/// </summary
	public ref class AdminMainForm : public System::Windows::Forms::Form
	{
	public:
		static Usuario^ user; //Cuando no hay un usuario identificado será null y cundo halla alguno cambiará al usuario identificado//
		//con este miembro se habilitarán las opciones del menu
		Thread^ myThread;
	


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

	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::ToolStripMenuItem^ metricasUsuarioToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ metricasConductorToolStripMenuItem;

	private:


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
			this->metricasConductorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->escogerServicioToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->transporteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->metricasUsuarioToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
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
			this->menuStrip1->Size = System::Drawing::Size(636, 24);
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
			this->salirToolStripMenuItem->Size = System::Drawing::Size(180, 22);
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
			this->serviciosToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->serviciosToolStripMenuItem->Text = L"Servicios";
			this->serviciosToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminMainForm::serviciosToolStripMenuItem_Click);
			// 
			// conductoresToolStripMenuItem
			// 
			this->conductoresToolStripMenuItem->Name = L"conductoresToolStripMenuItem";
			this->conductoresToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->conductoresToolStripMenuItem->Text = L"Usuarios";
			this->conductoresToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminMainForm::conductoresToolStripMenuItem_Click);
			// 
			// ordenesToolStripMenuItem
			// 
			this->ordenesToolStripMenuItem->Name = L"ordenesToolStripMenuItem";
			this->ordenesToolStripMenuItem->Size = System::Drawing::Size(180, 22);
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
			this->ofrecerServicioToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->viajeToolStripMenuItem,
					this->metricasConductorToolStripMenuItem
			});
			this->ofrecerServicioToolStripMenuItem->Name = L"ofrecerServicioToolStripMenuItem";
			this->ofrecerServicioToolStripMenuItem->Size = System::Drawing::Size(102, 20);
			this->ofrecerServicioToolStripMenuItem->Text = L"Ofrecer Servicio";
			// 
			// viajeToolStripMenuItem
			// 
			this->viajeToolStripMenuItem->Name = L"viajeToolStripMenuItem";
			this->viajeToolStripMenuItem->Size = System::Drawing::Size(176, 22);
			this->viajeToolStripMenuItem->Text = L"Viaje";
			this->viajeToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminMainForm::viajeToolStripMenuItem_Click);
			// 
			// metricasConductorToolStripMenuItem
			// 
			this->metricasConductorToolStripMenuItem->Name = L"metricasConductorToolStripMenuItem";
			this->metricasConductorToolStripMenuItem->Size = System::Drawing::Size(176, 22);
			this->metricasConductorToolStripMenuItem->Text = L"MetricasConductor";
			this->metricasConductorToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminMainForm::metricasConductorToolStripMenuItem_Click);
			// 
			// escogerServicioToolStripMenuItem
			// 
			this->escogerServicioToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->transporteToolStripMenuItem,
					this->metricasUsuarioToolStripMenuItem
			});
			this->escogerServicioToolStripMenuItem->Name = L"escogerServicioToolStripMenuItem";
			this->escogerServicioToolStripMenuItem->Size = System::Drawing::Size(103, 20);
			this->escogerServicioToolStripMenuItem->Text = L"Escoger servicio";
			// 
			// transporteToolStripMenuItem
			// 
			this->transporteToolStripMenuItem->Name = L"transporteToolStripMenuItem";
			this->transporteToolStripMenuItem->Size = System::Drawing::Size(159, 22);
			this->transporteToolStripMenuItem->Text = L"Transporte";
			this->transporteToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminMainForm::transporteToolStripMenuItem_Click);
			// 
			// metricasUsuarioToolStripMenuItem
			// 
			this->metricasUsuarioToolStripMenuItem->Name = L"metricasUsuarioToolStripMenuItem";
			this->metricasUsuarioToolStripMenuItem->Size = System::Drawing::Size(159, 22);
			this->metricasUsuarioToolStripMenuItem->Text = L"MetricasUsuario";
			this->metricasUsuarioToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminMainForm::metricasUsuarioToolStripMenuItem_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 25);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(239, 135);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->pictureBox2->Location = System::Drawing::Point(238, 25);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(396, 48);
			this->pictureBox2->TabIndex = 6;
			this->pictureBox2->TabStop = false;
			// 
			// AdminMainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(636, 609);
			this->ControlBox = false;
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"AdminMainForm";
			this->Text = L"AdminMainForm";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &AdminMainForm::AdminMainForm_FormClosed);
			this->Load += gcnew System::EventHandler(this, &AdminMainForm::AdminMainForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
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
	myThread = gcnew Thread(gcnew ThreadStart(this, &AdminMainForm::MyExecutionProcess));
	myThread->Start();
}
	   delegate void Midelegado(String^);
	   void UpdateTitle(String^ newTitle) {
		   this->Text = newTitle;
	   }
	   void MyExecutionProcess() {
		   String^ title = "CARPUCP - ";
		   while (true) {
			   try {
				   myThread->Sleep(1000);
				   Invoke(gcnew Midelegado(this, &AdminMainForm::UpdateTitle), title + DateTime::Now);
			   } 
			   catch (Exception^ ex) {
				   return;
			   }
			   
		   }
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
	Contexto^ contexto = STPUCP_Model::Contexto::ObtenerInstancia();

	Usuario^ compa = controller::QueryUsersById(contexto->ObtenerIdUsuario()*10);

	MessageBox::Show("IdConductor " + contexto->ObtenerIdUsuario());
	

	if ( compa != nullptr) {

		if (compa->IdUltimoViaje > 0) {

			MessageBox::Show("" + compa->IdUltimoViaje);
			ESPERANDOPAGO^ esperando = gcnew ESPERANDOPAGO();
			esperando->textViaje->Text = "" + compa->IdUltimoViaje;
			MessageBox::Show(esperando->textViaje->Text);
			esperando->ShowDialog();
		}
		else {
			ConductorForm^ conductorform = gcnew ConductorForm();
			conductorform->ShowDialog();

		}
			
			
	}
	else{
		
		ConductorForm^ conductorform = gcnew ConductorForm();
		conductorform->ShowDialog();

	}
	
}
private: System::Void metricasUsuarioToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MetricasPasajero^ metricaform = gcnew MetricasPasajero();
	metricaform->ShowDialog();
}
private: System::Void metricasConductorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MetricasConductorh^ metricaconductor = gcnew MetricasConductorh();
	metricaconductor->ShowDialog();

}
private: System::Void AdminMainForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
	
}
};
}
