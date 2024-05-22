#pragma once
#include "RobotForm.h"

namespace SalesSystemGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de SalesSystemMainForm
	/// </summary>
	public ref class SalesSystemMainForm : public System::Windows::Forms::Form
	{
	public:
		SalesSystemMainForm(void)
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
		~SalesSystemMainForm()
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
	private: System::Windows::Forms::ToolStripMenuItem^ mantenimientoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ transacciónToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reporteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ayudaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ robotsMeseroToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ trabajadoresToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ platosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ clientesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ generarOrdenDePedidoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ realizarVentaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ enviarPlatoConRobotToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reporteDeRobotsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reporteDeÓrdenesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reporteDeVentasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ chatToolStripMenuItem;

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
			this->mantenimientoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->transacciónToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reporteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ayudaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->robotsMeseroToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->trabajadoresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->platosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clientesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->generarOrdenDePedidoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->realizarVentaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->enviarPlatoConRobotToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reporteDeRobotsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reporteDeÓrdenesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reporteDeVentasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->chatToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(32, 32);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->archivoToolStripMenuItem,
					this->mantenimientoToolStripMenuItem, this->transacciónToolStripMenuItem, this->reporteToolStripMenuItem, this->ayudaToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1772, 42);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->salirToolStripMenuItem });
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(114, 38);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(359, 44);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &SalesSystemMainForm::salirToolStripMenuItem_Click);
			// 
			// mantenimientoToolStripMenuItem
			// 
			this->mantenimientoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->robotsMeseroToolStripMenuItem,
					this->trabajadoresToolStripMenuItem, this->platosToolStripMenuItem, this->clientesToolStripMenuItem
			});
			this->mantenimientoToolStripMenuItem->Name = L"mantenimientoToolStripMenuItem";
			this->mantenimientoToolStripMenuItem->Size = System::Drawing::Size(199, 38);
			this->mantenimientoToolStripMenuItem->Text = L"Mantenimiento";
			// 
			// transacciónToolStripMenuItem
			// 
			this->transacciónToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->generarOrdenDePedidoToolStripMenuItem,
					this->realizarVentaToolStripMenuItem, this->enviarPlatoConRobotToolStripMenuItem
			});
			this->transacciónToolStripMenuItem->Name = L"transacciónToolStripMenuItem";
			this->transacciónToolStripMenuItem->Size = System::Drawing::Size(157, 38);
			this->transacciónToolStripMenuItem->Text = L"Transacción";
			// 
			// reporteToolStripMenuItem
			// 
			this->reporteToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->reporteDeRobotsToolStripMenuItem,
					this->reporteDeÓrdenesToolStripMenuItem, this->reporteDeVentasToolStripMenuItem
			});
			this->reporteToolStripMenuItem->Name = L"reporteToolStripMenuItem";
			this->reporteToolStripMenuItem->Size = System::Drawing::Size(117, 38);
			this->reporteToolStripMenuItem->Text = L"Reporte";
			// 
			// ayudaToolStripMenuItem
			// 
			this->ayudaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->chatToolStripMenuItem });
			this->ayudaToolStripMenuItem->Name = L"ayudaToolStripMenuItem";
			this->ayudaToolStripMenuItem->Size = System::Drawing::Size(101, 38);
			this->ayudaToolStripMenuItem->Text = L"Ayuda";
			// 
			// robotsMeseroToolStripMenuItem
			// 
			this->robotsMeseroToolStripMenuItem->Name = L"robotsMeseroToolStripMenuItem";
			this->robotsMeseroToolStripMenuItem->Size = System::Drawing::Size(359, 44);
			this->robotsMeseroToolStripMenuItem->Text = L"Robots mesero";
			this->robotsMeseroToolStripMenuItem->Click += gcnew System::EventHandler(this, &SalesSystemMainForm::robotsMeseroToolStripMenuItem_Click);
			// 
			// trabajadoresToolStripMenuItem
			// 
			this->trabajadoresToolStripMenuItem->Name = L"trabajadoresToolStripMenuItem";
			this->trabajadoresToolStripMenuItem->Size = System::Drawing::Size(359, 44);
			this->trabajadoresToolStripMenuItem->Text = L"Empleados";
			// 
			// platosToolStripMenuItem
			// 
			this->platosToolStripMenuItem->Name = L"platosToolStripMenuItem";
			this->platosToolStripMenuItem->Size = System::Drawing::Size(359, 44);
			this->platosToolStripMenuItem->Text = L"Platos";
			// 
			// clientesToolStripMenuItem
			// 
			this->clientesToolStripMenuItem->Name = L"clientesToolStripMenuItem";
			this->clientesToolStripMenuItem->Size = System::Drawing::Size(359, 44);
			this->clientesToolStripMenuItem->Text = L"Clientes";
			// 
			// generarOrdenDePedidoToolStripMenuItem
			// 
			this->generarOrdenDePedidoToolStripMenuItem->Name = L"generarOrdenDePedidoToolStripMenuItem";
			this->generarOrdenDePedidoToolStripMenuItem->Size = System::Drawing::Size(417, 44);
			this->generarOrdenDePedidoToolStripMenuItem->Text = L"Generar orden de pedido";
			// 
			// realizarVentaToolStripMenuItem
			// 
			this->realizarVentaToolStripMenuItem->Name = L"realizarVentaToolStripMenuItem";
			this->realizarVentaToolStripMenuItem->Size = System::Drawing::Size(417, 44);
			this->realizarVentaToolStripMenuItem->Text = L"Realizar venta";
			// 
			// enviarPlatoConRobotToolStripMenuItem
			// 
			this->enviarPlatoConRobotToolStripMenuItem->Name = L"enviarPlatoConRobotToolStripMenuItem";
			this->enviarPlatoConRobotToolStripMenuItem->Size = System::Drawing::Size(417, 44);
			this->enviarPlatoConRobotToolStripMenuItem->Text = L"Enviar plato con robot";
			// 
			// reporteDeRobotsToolStripMenuItem
			// 
			this->reporteDeRobotsToolStripMenuItem->Name = L"reporteDeRobotsToolStripMenuItem";
			this->reporteDeRobotsToolStripMenuItem->Size = System::Drawing::Size(359, 44);
			this->reporteDeRobotsToolStripMenuItem->Text = L"Reporte de robots";
			// 
			// reporteDeÓrdenesToolStripMenuItem
			// 
			this->reporteDeÓrdenesToolStripMenuItem->Name = L"reporteDeÓrdenesToolStripMenuItem";
			this->reporteDeÓrdenesToolStripMenuItem->Size = System::Drawing::Size(359, 44);
			this->reporteDeÓrdenesToolStripMenuItem->Text = L"Reporte de órdenes";
			// 
			// reporteDeVentasToolStripMenuItem
			// 
			this->reporteDeVentasToolStripMenuItem->Name = L"reporteDeVentasToolStripMenuItem";
			this->reporteDeVentasToolStripMenuItem->Size = System::Drawing::Size(359, 44);
			this->reporteDeVentasToolStripMenuItem->Text = L"Reporte de ventas";
			// 
			// chatToolStripMenuItem
			// 
			this->chatToolStripMenuItem->Name = L"chatToolStripMenuItem";
			this->chatToolStripMenuItem->Size = System::Drawing::Size(359, 44);
			this->chatToolStripMenuItem->Text = L"Chat del equipo";
			// 
			// SalesSystemMainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1772, 872);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"SalesSystemMainForm";
			this->Text = L"Sistema de Ventas";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
private: System::Void robotsMeseroToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	//Form^ robotForm = gcnew Form();
	RobotForm^ robotForm = gcnew RobotForm();
	robotForm->MdiParent = this;
	robotForm->Show();
}
};
}
