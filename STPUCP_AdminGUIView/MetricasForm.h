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
	/// Resumen de MetricasForm
	/// </summary>
	public ref class MetricasForm : public System::Windows::Forms::Form
	{
	public:
		MetricasForm(void)
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
		~MetricasForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ IDUsuario;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ txtCodigoPasajero;
	private: System::Windows::Forms::TextBox^ txtCodigoConductor;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ M_EstrellasP;




	private: System::Windows::Forms::DataVisualization::Charting::Chart^ M_ServiciosTP;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ M_ServiciosT;


	private: System::Windows::Forms::DataVisualization::Charting::Chart^ M_Estrellas;



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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea4 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->IDUsuario = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->txtCodigoPasajero = (gcnew System::Windows::Forms::TextBox());
			this->txtCodigoConductor = (gcnew System::Windows::Forms::TextBox());
			this->M_EstrellasP = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->M_ServiciosTP = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->M_ServiciosT = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->M_Estrellas = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->M_EstrellasP))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->M_ServiciosTP))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->M_ServiciosT))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->M_Estrellas))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(43, 64);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(389, 202);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(126, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(205, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Métrica de Servicios tomados de Usuarios";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(572, 35);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(223, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Métrica de Estrellas promedio de Conductores";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(497, 64);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(389, 202);
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// IDUsuario
			// 
			this->IDUsuario->AutoSize = true;
			this->IDUsuario->Location = System::Drawing::Point(43, 310);
			this->IDUsuario->Name = L"IDUsuario";
			this->IDUsuario->Size = System::Drawing::Size(97, 13);
			this->IDUsuario->TabIndex = 4;
			this->IDUsuario->Text = L"Código de Usuario:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(497, 310);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(112, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Código del Conductor:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(126, 353);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(200, 13);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Métrica de Servicios tomados de Usuario";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(46, 382);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(389, 202);
			this->pictureBox3->TabIndex = 6;
			this->pictureBox3->TabStop = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(583, 353);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(212, 13);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Métrica de Estrellas promedio de Conductor";
			// 
			// pictureBox4
			// 
			this->pictureBox4->Location = System::Drawing::Point(500, 382);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(389, 202);
			this->pictureBox4->TabIndex = 8;
			this->pictureBox4->TabStop = false;
			// 
			// menuStrip1
			// 
			this->menuStrip1->AllowMerge = false;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->archivoToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(933, 24);
			this->menuStrip1->TabIndex = 10;
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
			// txtCodigoPasajero
			// 
			this->txtCodigoPasajero->Location = System::Drawing::Point(146, 307);
			this->txtCodigoPasajero->Name = L"txtCodigoPasajero";
			this->txtCodigoPasajero->Size = System::Drawing::Size(100, 20);
			this->txtCodigoPasajero->TabIndex = 11;
			// 
			// txtCodigoConductor
			// 
			this->txtCodigoConductor->Location = System::Drawing::Point(615, 307);
			this->txtCodigoConductor->Name = L"txtCodigoConductor";
			this->txtCodigoConductor->Size = System::Drawing::Size(100, 20);
			this->txtCodigoConductor->TabIndex = 12;
			// 
			// M_EstrellasP
			// 
			this->M_EstrellasP->BackColor = System::Drawing::Color::WhiteSmoke;
			chartArea1->Name = L"ChartArea1";
			this->M_EstrellasP->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->M_EstrellasP->Legends->Add(legend1);
			this->M_EstrellasP->Location = System::Drawing::Point(497, 64);
			this->M_EstrellasP->Name = L"M_EstrellasP";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Estrellas";
			this->M_EstrellasP->Series->Add(series1);
			this->M_EstrellasP->Size = System::Drawing::Size(392, 202);
			this->M_EstrellasP->TabIndex = 13;
			this->M_EstrellasP->Text = L"chart1";
			// 
			// M_ServiciosTP
			// 
			this->M_ServiciosTP->BackColor = System::Drawing::Color::WhiteSmoke;
			chartArea2->Name = L"ChartArea1";
			this->M_ServiciosTP->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->M_ServiciosTP->Legends->Add(legend2);
			this->M_ServiciosTP->Location = System::Drawing::Point(43, 64);
			this->M_ServiciosTP->Name = L"M_ServiciosTP";
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L"Servicios";
			this->M_ServiciosTP->Series->Add(series2);
			this->M_ServiciosTP->Size = System::Drawing::Size(392, 202);
			this->M_ServiciosTP->TabIndex = 14;
			this->M_ServiciosTP->Text = L"chart1";
			// 
			// M_ServiciosT
			// 
			this->M_ServiciosT->BackColor = System::Drawing::Color::WhiteSmoke;
			chartArea3->Name = L"ChartArea1";
			this->M_ServiciosT->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->M_ServiciosT->Legends->Add(legend3);
			this->M_ServiciosT->Location = System::Drawing::Point(46, 369);
			this->M_ServiciosT->Name = L"M_ServiciosT";
			series3->ChartArea = L"ChartArea1";
			series3->Legend = L"Legend1";
			series3->Name = L"Servicios";
			this->M_ServiciosT->Series->Add(series3);
			this->M_ServiciosT->Size = System::Drawing::Size(392, 202);
			this->M_ServiciosT->TabIndex = 15;
			this->M_ServiciosT->Text = L"chart1";
			// 
			// M_Estrellas
			// 
			this->M_Estrellas->BackColor = System::Drawing::Color::WhiteSmoke;
			chartArea4->Name = L"ChartArea1";
			this->M_Estrellas->ChartAreas->Add(chartArea4);
			legend4->Name = L"Legend1";
			this->M_Estrellas->Legends->Add(legend4);
			this->M_Estrellas->Location = System::Drawing::Point(500, 382);
			this->M_Estrellas->Name = L"M_Estrellas";
			series4->ChartArea = L"ChartArea1";
			series4->Legend = L"Legend1";
			series4->Name = L"Estrellas";
			this->M_Estrellas->Series->Add(series4);
			this->M_Estrellas->Size = System::Drawing::Size(392, 202);
			this->M_Estrellas->TabIndex = 16;
			this->M_Estrellas->Text = L"chart1";
			// 
			// MetricasForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(933, 635);
			this->Controls->Add(this->M_Estrellas);
			this->Controls->Add(this->M_ServiciosT);
			this->Controls->Add(this->M_ServiciosTP);
			this->Controls->Add(this->M_EstrellasP);
			this->Controls->Add(this->txtCodigoConductor);
			this->Controls->Add(this->txtCodigoPasajero);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->IDUsuario);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MetricasForm";
			this->Text = L"MetricasForm";
			this->Load += gcnew System::EventHandler(this, &MetricasForm::MetricasForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->M_EstrellasP))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->M_ServiciosTP))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->M_ServiciosT))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->M_Estrellas))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MetricasForm_Load(System::Object^ sender, System::EventArgs^ e) {
		List<Orden^>^ ordenesList = controller::QueryAllOrders();
		Dictionary<String^, double>^ estrellasPorMes = gcnew Dictionary<String^, double>();

		// Dividir el gráfico de estrellas por mes
		
		for (int i = 0; i < ordenesList->Count; i++) {
			String^ fecha = ordenesList[i]->Fecha;
			
			if (!String::IsNullOrEmpty(fecha) && fecha->Length >= 5) {
				String^ mes = ordenesList[i]->Fecha->Substring(3, 2); // DD/MM/YYYY
				if (!estrellasPorMes->ContainsKey(mes)) {
					estrellasPorMes[mes] = 0;
				}
				estrellasPorMes[mes] += ordenesList[i]->CalificacionEstrellas;
			}
		}

		int j = 0;
		for each (String ^ mes in estrellasPorMes->Keys) {
			M_EstrellasP->Series["Estrellas"]->Points->Add(estrellasPorMes[mes]);
			M_EstrellasP->Series["Estrellas"]->Points[j]->AxisLabel = mes;
			M_EstrellasP->Series["Estrellas"]->Points[j]->Label = "" + estrellasPorMes[mes];
			j++;
		}

		// Acceder a CantServiciosTomados en Pasajero
		List<Usuario^>^ serviciosTList = controller::QueryAllUsers();
		List<Pasajero^>^ pasajerosList = gcnew List<Pasajero^>();
		List<Orden^>^ ordenes = gcnew List<Orden^>();
		List<Orden^>^ ordenes_1 = controller::QueryAllOrders();

		for each (Usuario ^ usuario in serviciosTList) {
			Pasajero^ pasajero = dynamic_cast<Pasajero^>(usuario);
			if (pasajero != nullptr) {
				pasajerosList->Add(pasajero);
			}
		}


		for (int i = 0; i < 12; i++) {
			ordenes = controller::QueryOrdersbyDate(""+i);
			String^ mes = ordenes_1[i]->Fecha->Substring(3, 2); // DD/MM/YYYY

			M_ServiciosTP->Series["Servicios"]->Points->Add((ordenes)->Count);
			M_ServiciosTP->Series["Servicios"]->Points[i]->AxisLabel = "0"+(i+1); //Yo creo que deberíamos crear una fecha de último servicio para usarla en métricas
			M_ServiciosTP->Series["Servicios"]->Points[i]->Label = "" + (ordenes)->Count;
		}

		// Agregar eventos de tecla presionada
		txtCodigoConductor->KeyDown += gcnew KeyEventHandler(this, &MetricasForm::txtCodigoConductor_KeyDown);
		txtCodigoPasajero->KeyDown += gcnew KeyEventHandler(this, &MetricasForm::txtCodigoPasajero_KeyDown);
	}

	private: System::Void txtCodigoConductor_KeyDown(System::Object^ sender, KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Enter) {
			int codigoPUCP = Convert::ToInt32(txtCodigoConductor->Text);
			MostrarGraficoConductor(codigoPUCP);
		}
	}

	private: System::Void txtCodigoPasajero_KeyDown(System::Object^ sender, KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Enter) {
			int codigoPUCP = Convert::ToInt32(txtCodigoPasajero->Text);
			MostrarGraficoPasajero(codigoPUCP);
		}
	}

		

		  

	private: void MostrarGraficoConductor(int codigoPUCP) {
		List<Orden^>^ ordenesList = controller::QueryAllOrders();
		M_Estrellas->Series["Estrellas"]->Points->Clear();
		List<Orden^>^ ordenesrelacionadas = controller::QueryAllOrders();

		List<Viaje^>^ viajeList = controller::QueryViajesByIdConductor(codigoPUCP);
		for each(Viaje ^ viaje in viajeList) {
			List<Orden^>^ ordensita = controller::QueryOrdenesByIdViajes(viaje->Id);
			// Paso 3: Acumular todas las órdenes encontradas
			for each (Orden ^ orden in ordensita) {
				ordenesrelacionadas->Add(orden);
			}
		}


		

		
		



		for (int i = 0; i < ordenesList->Count; i++) {
			if (ordenesList[i] == ordenesrelacionadas[i]) { //Renato aquí es lo que te decía de relacionar el ID de orden con el código de pasajero :,v
				M_Estrellas->Series["Estrellas"]->Points->Add(ordenesList[i]->CalificacionEstrellas);
				M_Estrellas->Series["Estrellas"]->Points[i]->AxisLabel = "" + ordenesList[i]->Fecha;
				M_Estrellas->Series["Estrellas"]->Points[i]->Label = "" + ordenesList[i]->CalificacionEstrellas;
			}
		}
	}

	private: void MostrarGraficoPasajero(int codigoPUCP) {
		List<Usuario^>^ serviciosTList = controller::QueryAllUsers();
		List<Pasajero^>^ pasajerosList = gcnew List<Pasajero^>();

		for each (Usuario ^ usuario in serviciosTList) {
			Pasajero^ pasajero = dynamic_cast<Pasajero^>(usuario);
			if (pasajero != nullptr) {
				pasajerosList->Add(pasajero);
			}
		}

		M_ServiciosT->Series["Servicios"]->Points->Clear();
		int i = 0;
		for each (Pasajero ^ pasajero in pasajerosList) {
			if (pasajero->CodigoPUCP == codigoPUCP) {
				M_ServiciosT->Series["Servicios"]->Points->Add(pasajero->CantServiciosTomados);
				//M_ServiciosT->Series["Servicios"]->Points[i]->AxisLabel = "" + pasajero->FechaUltimoServicio;
				M_ServiciosT->Series["Servicios"]->Points[i]->Label = "" + pasajero->CantServiciosTomados;
			}
		}
	}
};
}

