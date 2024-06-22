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
	using namespace System::Windows::Forms::DataVisualization::Charting;
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
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ RolesReport;
	private: System::Windows::Forms::Button^ Metrica_Pasajero;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textestrellas;




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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea5 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
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
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->RolesReport = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->Metrica_Pasajero = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textestrellas = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->M_EstrellasP))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->M_ServiciosTP))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->M_ServiciosT))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->M_Estrellas))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RolesReport))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(57, 79);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(519, 249);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(168, 43);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(261, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Métrica de Servicios tomados de Usuarios";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(763, 43);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(284, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Métrica de Estrellas promedio de Conductores";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(663, 79);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(519, 249);
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// IDUsuario
			// 
			this->IDUsuario->AutoSize = true;
			this->IDUsuario->Location = System::Drawing::Point(57, 382);
			this->IDUsuario->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->IDUsuario->Name = L"IDUsuario";
			this->IDUsuario->Size = System::Drawing::Size(123, 16);
			this->IDUsuario->TabIndex = 4;
			this->IDUsuario->Text = L"Código de Usuario:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(663, 382);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(140, 16);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Código del Conductor:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(168, 434);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(292, 16);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Métrica de Servicios tomados por cada Usuario";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(61, 470);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(519, 249);
			this->pictureBox3->TabIndex = 6;
			this->pictureBox3->TabStop = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(777, 434);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(170, 16);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Metricas de Viajes por mes";
			// 
			// pictureBox4
			// 
			this->pictureBox4->Location = System::Drawing::Point(667, 470);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(519, 249);
			this->pictureBox4->TabIndex = 8;
			this->pictureBox4->TabStop = false;
			// 
			// menuStrip1
			// 
			this->menuStrip1->AllowMerge = false;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->archivoToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1727, 30);
			this->menuStrip1->TabIndex = 10;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->salirToolStripMenuItem });
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(73, 26);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(121, 26);
			this->salirToolStripMenuItem->Text = L"Salir";
			// 
			// txtCodigoPasajero
			// 
			this->txtCodigoPasajero->Location = System::Drawing::Point(195, 378);
			this->txtCodigoPasajero->Margin = System::Windows::Forms::Padding(4);
			this->txtCodigoPasajero->Name = L"txtCodigoPasajero";
			this->txtCodigoPasajero->Size = System::Drawing::Size(132, 22);
			this->txtCodigoPasajero->TabIndex = 11;
			// 
			// txtCodigoConductor
			// 
			this->txtCodigoConductor->Location = System::Drawing::Point(820, 378);
			this->txtCodigoConductor->Margin = System::Windows::Forms::Padding(4);
			this->txtCodigoConductor->Name = L"txtCodigoConductor";
			this->txtCodigoConductor->Size = System::Drawing::Size(132, 22);
			this->txtCodigoConductor->TabIndex = 12;
			// 
			// M_EstrellasP
			// 
			this->M_EstrellasP->BackColor = System::Drawing::Color::WhiteSmoke;
			chartArea1->Name = L"ChartArea1";
			this->M_EstrellasP->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->M_EstrellasP->Legends->Add(legend1);
			this->M_EstrellasP->Location = System::Drawing::Point(663, 79);
			this->M_EstrellasP->Margin = System::Windows::Forms::Padding(4);
			this->M_EstrellasP->Name = L"M_EstrellasP";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Estrellas";
			this->M_EstrellasP->Series->Add(series1);
			this->M_EstrellasP->Size = System::Drawing::Size(523, 249);
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
			this->M_ServiciosTP->Location = System::Drawing::Point(57, 79);
			this->M_ServiciosTP->Margin = System::Windows::Forms::Padding(4);
			this->M_ServiciosTP->Name = L"M_ServiciosTP";
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L"Servicios";
			this->M_ServiciosTP->Series->Add(series2);
			this->M_ServiciosTP->Size = System::Drawing::Size(523, 249);
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
			this->M_ServiciosT->Location = System::Drawing::Point(61, 454);
			this->M_ServiciosT->Margin = System::Windows::Forms::Padding(4);
			this->M_ServiciosT->Name = L"M_ServiciosT";
			series3->ChartArea = L"ChartArea1";
			series3->Legend = L"Legend1";
			series3->Name = L"Servicios";
			this->M_ServiciosT->Series->Add(series3);
			this->M_ServiciosT->Size = System::Drawing::Size(523, 249);
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
			this->M_Estrellas->Location = System::Drawing::Point(667, 470);
			this->M_Estrellas->Margin = System::Windows::Forms::Padding(4);
			this->M_Estrellas->Name = L"M_Estrellas";
			series4->ChartArea = L"ChartArea1";
			series4->Legend = L"Legend1";
			series4->Name = L"Estrellas";
			this->M_Estrellas->Series->Add(series4);
			this->M_Estrellas->Size = System::Drawing::Size(523, 249);
			this->M_Estrellas->TabIndex = 16;
			this->M_Estrellas->Text = L"chart1";
			this->M_Estrellas->Click += gcnew System::EventHandler(this, &MetricasForm::M_Estrellas_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->Location = System::Drawing::Point(1236, 79);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(394, 249);
			this->pictureBox5->TabIndex = 17;
			this->pictureBox5->TabStop = false;
			// 
			// RolesReport
			// 
			chartArea5->Name = L"ChartArea1";
			this->RolesReport->ChartAreas->Add(chartArea5);
			legend5->Name = L"Legend1";
			this->RolesReport->Legends->Add(legend5);
			this->RolesReport->Location = System::Drawing::Point(1236, 79);
			this->RolesReport->Name = L"RolesReport";
			series5->ChartArea = L"ChartArea1";
			series5->Legend = L"Legend1";
			series5->Name = L"Roles";
			this->RolesReport->Series->Add(series5);
			this->RolesReport->Size = System::Drawing::Size(394, 249);
			this->RolesReport->TabIndex = 18;
			this->RolesReport->Text = L"chart1";
			// 
			// Metrica_Pasajero
			// 
			this->Metrica_Pasajero->Location = System::Drawing::Point(353, 382);
			this->Metrica_Pasajero->Name = L"Metrica_Pasajero";
			this->Metrica_Pasajero->Size = System::Drawing::Size(238, 23);
			this->Metrica_Pasajero->TabIndex = 19;
			this->Metrica_Pasajero->Text = L"Generar Metrica Pasajero";
			this->Metrica_Pasajero->UseVisualStyleBackColor = true;
			this->Metrica_Pasajero->Click += gcnew System::EventHandler(this, &MetricasForm::Metrica_Pasajero_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(984, 376);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(226, 23);
			this->button2->TabIndex = 20;
			this->button2->Text = L"Genererar Metrica Usuario";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MetricasForm::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(1262, 415);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(256, 16);
			this->label3->TabIndex = 21;
			this->label3->Text = L"PROMEDIO DE ESTRELLLAS GENERAL";
			// 
			// textestrellas
			// 
			this->textestrellas->Location = System::Drawing::Point(1303, 434);
			this->textestrellas->Name = L"textestrellas";
			this->textestrellas->ReadOnly = true;
			this->textestrellas->Size = System::Drawing::Size(126, 22);
			this->textestrellas->TabIndex = 22;
			// 
			// MetricasForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1727, 782);
			this->Controls->Add(this->textestrellas);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->Metrica_Pasajero);
			this->Controls->Add(this->RolesReport);
			this->Controls->Add(this->pictureBox5);
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
			this->Margin = System::Windows::Forms::Padding(4);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RolesReport))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MetricasForm_Load(System::Object^ sender, System::EventArgs^ e) {














		List<Orden^>^ ordenesLista = controller::QueryAllOrders();

		// Contar las órdenes por mes
		Dictionary<int, int>^ ordersByMonth = gcnew Dictionary<int, int>();
		for (int i = 1; i <= 12; i++) {
			ordersByMonth[i] = 0;
		}

		// Contar las órdenes por mes
		for each (Orden ^ orden in ordenesLista) {
			int month;
			try {
				month = Convert::ToInt32(orden->Fecha->Substring(3, 2));
			}
			catch (...) {
				try {
					month = Convert::ToInt32(orden->Fecha->Substring(2, 2)); // Tomar "tostring2,2"
				}
				catch (...) {
					continue; // Saltar esta orden si no se puede obtener el mes válido
				}
			}
			if (month >= 1 && month <= 12) {
				ordersByMonth[month]++;
			}
			else {
				MessageBox::Show("Fecha inválida en la orden ID: " + orden->Id.ToString());
			}
		}

		// Crear y llenar el gráfico M_ServiciosTP
		M_ServiciosTP->Series->Clear();

		Series^ seriesServicios = gcnew Series("Pasajeros");
		seriesServicios->Color = Color::Gold;
		seriesServicios->ChartType = SeriesChartType::Column;
		for (int i = 1; i <= 12; i++) {
			seriesServicios->Points->AddXY(i, ordersByMonth[i]);
		}
		M_ServiciosTP->Series->Add(seriesServicios);

		// Configurar el gráfico M_ServiciosTP para mostrar etiquetas de valores
		seriesServicios->IsValueShownAsLabel = true;
		M_ServiciosTP->ChartAreas[0]->AxisX->Title = "Mes";
		M_ServiciosTP->ChartAreas[0]->AxisY->Title = "Cantidad de Pasajeros por mes";
		M_ServiciosTP->ChartAreas[0]->AxisX->Interval = 1;




		List<Viaje^>^ viajemosLista = controller::QueryAllJourneys();

		// Contar las órdenes por mes
		Dictionary<int, int>^ ordersBymes = gcnew Dictionary<int, int>();
		for (int i = 1; i <= 12; i++) {
			ordersBymes[i] = 0;
		}

		// Contar las órdenes por mes
		for each (Viaje ^ viaje in viajemosLista) {
			int month;
			try {
				month = Convert::ToInt32(viaje->FechaViaje->Substring(3, 2));
			}
			catch (...) {
				try {
					month = Convert::ToInt32(viaje->FechaViaje->Substring(2, 2)); // Tomar "tostring2,2"
				}
				catch (...) {
					continue;
				}
			}
			if (month >= 1 && month <= 12) {
				ordersBymes[month]++;
			}
			else {
				MessageBox::Show("Fecha inválida en el viaje ID: " + viaje->Id.ToString());
			}
		}

		// Crear y llenar el gráfico M_Estrellas
		M_Estrellas->Series->Clear();
		Series^ seriesEstrellas = gcnew Series("Viajes"); // Usar un nombre de serie diferente para el segundo gráfico
		seriesEstrellas->ChartType = SeriesChartType::Column;
		for (int i = 1; i <= 12; i++) {
			seriesEstrellas->Points->AddXY(i, ordersBymes[i]);
		}
		M_Estrellas->Series->Add(seriesEstrellas);

		// Configurar el gráfico M_Estrellas para mostrar etiquetas de valores
		seriesEstrellas->IsValueShownAsLabel = true;
		M_Estrellas->ChartAreas[0]->AxisX->Title = "Mes";
		M_Estrellas->ChartAreas[0]->AxisY->Title = "Cantidad de Viajes por mes";
		M_Estrellas->ChartAreas[0]->AxisX->Interval = 1;




		List<Usuario^>^ usuariosList = controller::QueryAllUsers();

		// Contadores para conductores y pasajeros
		int conductoresCount = 0;
		int pasajerosCount = 0;

		// Contar conductores y pasajeros
		for (int i = 0; i < usuariosList->Count; i++) {
			if (usuariosList[i]->Rol == "Conductor") {
				conductoresCount++;
			}
			else if (usuariosList[i]->Rol == "Pasajero") {
				pasajerosCount++;
			}
		}

		// Crear series para el gráfico
		RolesReport->Series->Clear();
		RolesReport->Series->Add("Roles");

		// Agregar datos al gráfico
		RolesReport->Series["Roles"]->Points->AddXY("Conductores", conductoresCount);
		RolesReport->Series["Roles"]->Points->AddXY("Pasajeros", pasajerosCount);

		// Opcional: configurar etiquetas y apariencia del gráfico
		RolesReport->Series["Roles"]->IsValueShownAsLabel = true;
		RolesReport->Series["Roles"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;







		List<Orden^>^ ordenesList = controller::QueryAllOrders();
		Dictionary<String^, List<int>^>^ estrellasPorMes = gcnew Dictionary<String^, List<int>^>();

		// Agrupar estrellas por mes
		for (int i = 0; i < ordenesList->Count; i++) {
			String^ fecha = ordenesList[i]->Fecha;
			if (!String::IsNullOrEmpty(fecha) && fecha->Length >= 5) {
				String^ mes = ordenesList[i]->Fecha->Substring(3, 2); // DD/MM/YYYY
				if (!estrellasPorMes->ContainsKey(mes)) {
					estrellasPorMes[mes] = gcnew List<int>();
				}
				estrellasPorMes[mes]->Add(ordenesList[i]->CalificacionEstrellas);
			}
		}

		// Calcular el promedio de estrellas por mes
		Dictionary<String^, double>^ estrellasPromedioPorMes = gcnew Dictionary<String^, double>();
		for each (String ^ mes in estrellasPorMes->Keys) {
			double sumaEstrellas = 0;
			for each (int estrellas in estrellasPorMes[mes]) {
				sumaEstrellas += estrellas;
			}
			double promedioEstrellas = sumaEstrellas / estrellasPorMes[mes]->Count;
			estrellasPromedioPorMes[mes] = Math::Round(promedioEstrellas, 2);
		}

		// Graficar el promedio de estrellas por mes
		array<String^>^ meses = gcnew array<String^> { "01", "02", "03", "04", "05", "06", "07", "08", "09", "10", "11", "12" };
		int j = 0;
		for each (String ^ mes in meses) {
			if (estrellasPromedioPorMes->ContainsKey(mes)) {
				M_EstrellasP->Series["Estrellas"]->Points->Add(estrellasPromedioPorMes[mes]);
				M_EstrellasP->Series["Estrellas"]->Points[j]->AxisLabel = mes;
				M_EstrellasP->Series["Estrellas"]->Points[j]->Label = "" + estrellasPromedioPorMes[mes];
				j++;
			}
		}

		// Acceder a CantServiciosTomados en Pasajero
		List<Usuario^>^ serviciosTList = controller::QueryAllUsers();
		List<Pasajero^>^ pasajerosList = gcnew List<Pasajero^>();
		List<Orden^>^ ordenes_1 = controller::QueryAllOrders();

		for each (Usuario ^ usuario in serviciosTList) {
			Pasajero^ pasajero = dynamic_cast<Pasajero^>(usuario);
			if (pasajero != nullptr) {
				pasajerosList->Add(pasajero);
			}
		}

		// Agrupar órdenes por mes para contar servicios
		Dictionary<String^, int>^ serviciosPorMes = gcnew Dictionary<String^, int>();
		for (int i = 0; i < ordenes_1->Count; i++) {
			String^ mes = ordenes_1[i]->Fecha->Substring(3, 2); // DD/MM/YYYY
			if (!serviciosPorMes->ContainsKey(mes)) {
				serviciosPorMes[mes] = 0;
			}
			serviciosPorMes[mes]++;
		}

		/*/ Graficar la cantidad de servicios por mes
		int i = 0;
		for each (String ^ mes in meses) {
			if (serviciosPorMes->ContainsKey(mes)) {
				M_ServiciosTP->Series["Servicios"]->Points->Add(serviciosPorMes[mes]);
				M_ServiciosTP->Series["Servicios"]->Points[i]->AxisLabel = mes;
				M_ServiciosTP->Series["Servicios"]->Points[i]->Label = "" + serviciosPorMes[mes];
				i++;
			}
		}*/

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
		List<Orden^>^ ordenesrelacionadas = gcnew List<Orden^>();

		List<Viaje^>^ viajeList = controller::QueryViajesByIdConductor(codigoPUCP);
		for each (Viaje ^ viaje in viajeList) {
			List<Orden^>^ ordensita = controller::QueryOrdenesByIdViajes(viaje->Id);
			// Acumular todas las órdenes encontradas
			for each (Orden ^ orden in ordensita) {
				ordenesrelacionadas->Add(orden);
			}
		}

		// Mostrar gráfico de estrellas del conductor
		int i = 0;
		for each (Orden ^ orden in ordenesList) {
			if (ordenesrelacionadas->Contains(orden)) {
				M_Estrellas->Series["Estrellas"]->Points->Add(orden->CalificacionEstrellas);
				M_Estrellas->Series["Estrellas"]->Points[i]->AxisLabel = orden->Fecha->Substring(3, 2); // Solo mes
				M_Estrellas->Series["Estrellas"]->Points[i]->Label = "" + orden->CalificacionEstrellas;
				i++;
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
				M_ServiciosT->Series["Servicios"]->Points[i]->Label = "" + pasajero->CantServiciosTomados;
				i++;
			}
		}
	}

private: System::Void Metrica_Pasajero_Click(System::Object^ sender, System::EventArgs^ e) {
	// Obtener el ID del pasajero del cuadro de texto
	int pasajeroId = Convert::ToInt32(txtCodigoPasajero->Text);
	
	// Obtener las órdenes del pasajero por ID
	List<Orden^>^ ordenesList = controller::QueryOrdenesByIdPasajero(pasajeroId);

	// Contar las órdenes por mes
	Dictionary<int, int>^ ordersByMonth = gcnew Dictionary<int, int>();
	for (int i = 1; i <= 12; i++) {
		ordersByMonth[i] = 0;
	}

	// Contar las órdenes por mes
	for each (Orden ^ orden in ordenesList) {
		int month;
		try {
			month = Convert::ToInt32(orden->Fecha->Substring(3, 2));
		}
		catch (...) {
			// Si ocurre una excepción al intentar convertir a int, intentamos obtener el mes como "tostring2,2"
			try {
				month = Convert::ToInt32(orden->Fecha->Substring(2, 2)); // Tomar "tostring2,2"
			}
			catch (...) {
				// Si también falla, manejar el caso de mes inválido
				
				continue; // Saltar esta orden y continuar con la siguiente si es un bucle
			}
		}
		if (month >= 1 && month <= 12) {
			ordersByMonth[month]++;
		}
		else {
			// Manejar el caso de mes fuera de rango si es necesario
			MessageBox::Show("Fecha inválida en la orden ID: " + orden->Id.ToString());
		}
	}

	// Crear y llenar el gráfico
	M_ServiciosT->Series->Clear();
	Series^ series = gcnew Series("Servicios");
	series->Color = Color::Gold;
	series->ChartType = SeriesChartType::Column;
	for (int i = 1; i <= 12; i++) {
		series->Points->AddXY(i, ordersByMonth[i]);
	}
	M_ServiciosT->Series->Add(series);

	// Configurar el gráfico para mostrar etiquetas de valores
	series->IsValueShownAsLabel = true;
	M_ServiciosT->ChartAreas[0]->AxisX->Title = "Mes";
	M_ServiciosT->ChartAreas[0]->AxisY->Title = "Cantidad de Órdenes";
	M_ServiciosT->ChartAreas[0]->AxisX->Interval = 1;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	int conductorId = Convert::ToInt32(txtCodigoConductor->Text);

	List<List<Orden^>^>^ ordenList = gcnew List<List<Orden^>^>();

	List<Viaje^>^ viajenesList = controller::QueryViajesByIdConductor(conductorId);

	for (int i = 0; i < viajenesList->Count; i++) {
		List<Orden^>^ ordenes = controller::QueryOrdenesByIdViajes(viajenesList[i]->Id);
		ordenList->Add(ordenes);

	}

	

	// Inicializar un diccionario para almacenar la suma de estrellas por mes y el conteo de órdenes por mes
	Dictionary<int, double>^ sumEstrellasByMonth = gcnew Dictionary<int, double>();
	Dictionary<int, int>^ countOrdersByMonth = gcnew Dictionary<int, int>();

	// Inicializar los diccionarios para cada mes del año
	for (int i = 1; i <= 12; i++) {
		sumEstrellasByMonth[i] = 0.0;
		countOrdersByMonth[i] = 0;
	}

	// Calcular la suma de estrellas y el conteo de órdenes por mes
	for each (List<Orden^> ^ ordenesLista in ordenList) {
		// Iterar sobre cada orden dentro de la lista actual
		for each (Orden ^ orden in ordenesLista) {
			int month;
			try {
				month = Convert::ToInt32(orden->Fecha->Substring(3, 2));
			}
			catch (...) {
				try {
					month = Convert::ToInt32(orden->Fecha->Substring(2, 2));
				}
				catch (...) {
					continue; // Saltar esta orden si no se puede obtener el mes válido
				}
			}

			
			if (month >= 1 && month <= 12) {
				double estrellas = Convert::ToDouble(orden->CalificacionEstrellas);
				sumEstrellasByMonth[month] += estrellas;
				countOrdersByMonth[month]++;
			}
		}
	}

	// Calcular el promedio de estrellas por mes
	Dictionary<int, double>^ averageStarsByMonth = gcnew Dictionary<int, double>();
	for (int i = 1; i <= 12; i++) {
		if (countOrdersByMonth[i] > 0) {
			averageStarsByMonth[i] = sumEstrellasByMonth[i] / countOrdersByMonth[i];
		}
		else {
			averageStarsByMonth[i] = 0.0; // o cualquier otro valor por defecto si no hay órdenes ese mes
		}
	}

	// Crear y llenar el gráfico de promedio de estrellas por mes
	M_EstrellasP->Series->Clear();
	Series^ series = gcnew Series("Promedio de Estrellas");
	series->ChartType = SeriesChartType::Column;
	for (int i = 1; i <= 12; i++) {
		series->Points->AddXY(i, averageStarsByMonth[i]);
	}
	M_EstrellasP->Series->Add(series);

	// Configurar el gráfico para mostrar etiquetas de valores
	series->IsValueShownAsLabel = true;
	M_EstrellasP->ChartAreas[0]->AxisX->Title = "Mes";
	M_EstrellasP->ChartAreas[0]->AxisY->Title = "Promedio de Estrellas";
	M_EstrellasP->ChartAreas[0]->AxisX->Interval = 1;









	// Obtener la lista de viajes del conductor
	List<Viaje^>^ viajecitoList = controller::QueryViajesByIdConductor(conductorId);

	// Inicializar una lista para almacenar todas las órdenes del conductor
	List<Orden^>^ todasOrdenes = gcnew List<Orden^>();

	// Iterar sobre la lista de viajes y obtener todas las órdenes del conductor
	for (int i = 0; i < viajecitoList->Count; i++) {
		List<Orden^>^ ordenes = controller::QueryOrdenesByIdViajes(viajecitoList[i]->Id);
		todasOrdenes->AddRange(ordenes); // Agregar las órdenes del viaje actual a todasOrdenes
	}

	// Calcular el promedio de estrellas de todas las órdenes
	double sumEstrellasTotal = 0.0;
	int countOrdenesTotal = todasOrdenes->Count;

	for each (Orden ^ orden in todasOrdenes) {
		double estrellas = Convert::ToDouble(orden->CalificacionEstrellas);
		sumEstrellasTotal += estrellas;
	}

	double promedioEstrellasTotal = 0.0;
	if (countOrdenesTotal > 0) {
		promedioEstrellasTotal = sumEstrellasTotal / countOrdenesTotal;
	}

	textestrellas->Text = "" + promedioEstrellasTotal;

}
private: System::Void M_Estrellas_Click(System::Object^ sender, System::EventArgs^ e) {
}
};

}


