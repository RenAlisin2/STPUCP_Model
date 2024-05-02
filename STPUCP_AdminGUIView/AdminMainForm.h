#pragma once
#include "UsuariosForm.h"
#include "ServiciosForm.h"
#include "MetricasForm.h"
#include "BlackListForm.h"
#include "PromocionesForm.h"

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
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modificarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->serviciosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->conductoresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->métricasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->verToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->promocionesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->verTodasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->blackListToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->verToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->archivoToolStripMenuItem,
					this->modificarToolStripMenuItem, this->métricasToolStripMenuItem, this->promocionesToolStripMenuItem, this->blackListToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
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
			this->modificarToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->serviciosToolStripMenuItem,
					this->conductoresToolStripMenuItem
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
			this->verTodasToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->verTodasToolStripMenuItem->Text = L"Ver";
			this->verTodasToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminMainForm::verTodasToolStripMenuItem_Click);
			// 
			// blackListToolStripMenuItem
			// 
			this->blackListToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->verToolStripMenuItem1 });
			this->blackListToolStripMenuItem->Name = L"blackListToolStripMenuItem";
			this->blackListToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->blackListToolStripMenuItem->Text = L"BlackList";
			// 
			// verToolStripMenuItem1
			// 
			this->verToolStripMenuItem1->Name = L"verToolStripMenuItem1";
			this->verToolStripMenuItem1->Size = System::Drawing::Size(180, 22);
			this->verToolStripMenuItem1->Text = L"Ver";
			this->verToolStripMenuItem1->Click += gcnew System::EventHandler(this, &AdminMainForm::verToolStripMenuItem1_Click);
			// 
			// AdminMainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(954, 629);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"AdminMainForm";
			this->Text = L"AdminMainForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void conductoresToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	UsuariosForm^ usuariosForm = gcnew UsuariosForm();
	usuariosForm->MdiParent = this;
	usuariosForm->Show();

}

private: System::Void serviciosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ServiciosForm^ serviciosForm = gcnew ServiciosForm();
	serviciosForm->MdiParent = this;
	serviciosForm->Show();
}
private: System::Void verToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MetricasForm^ metricasForm = gcnew MetricasForm();
	metricasForm->MdiParent = this;
	metricasForm->Show();
}
private: System::Void verTodasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	PromocionesForm^ promocionesForm = gcnew PromocionesForm();
	promocionesForm->MdiParent = this;
	promocionesForm->Show();
}
private: System::Void verToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	BlackListForm^ blackListForm = gcnew BlackListForm();
	blackListForm->MdiParent = this;
	blackListForm->Show();
}

};
}
