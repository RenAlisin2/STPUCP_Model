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
	/// Resumen de MetricasPasajero
	/// </summary>
	public ref class MetricasPasajero : public System::Windows::Forms::Form
	{
	public:
		MetricasPasajero(void)
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
		~MetricasPasajero()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ MontoMensual;
	protected:

	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ MontoMes;


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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->MontoMensual = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->MontoMes = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MontoMensual))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MontoMes))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(54, 47);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(662, 438);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// MontoMensual
			// 
			chartArea1->Name = L"ChartArea1";
			this->MontoMensual->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->MontoMensual->Legends->Add(legend1);
			this->MontoMensual->Location = System::Drawing::Point(89, 63);
			this->MontoMensual->Name = L"MontoMensual";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->MontoMensual->Series->Add(series1);
			this->MontoMensual->Size = System::Drawing::Size(627, 400);
			this->MontoMensual->TabIndex = 1;
			this->MontoMensual->Text = L"chart1";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(736, 47);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(519, 416);
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// MontoMes
			// 
			chartArea2->Name = L"ChartArea1";
			this->MontoMes->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->MontoMes->Legends->Add(legend2);
			this->MontoMes->Location = System::Drawing::Point(773, 63);
			this->MontoMes->Name = L"MontoMes";
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L"Series1";
			this->MontoMes->Series->Add(series2);
			this->MontoMes->Size = System::Drawing::Size(462, 385);
			this->MontoMes->TabIndex = 3;
			this->MontoMes->Text = L"chart2";
			// 
			// MetricasPasajero
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1292, 545);
			this->Controls->Add(this->MontoMes);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->MontoMensual);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MetricasPasajero";
			this->Text = L"MetricasPasajero";
			this->Load += gcnew System::EventHandler(this, &MetricasPasajero::MetricasPasajero_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MontoMensual))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MontoMes))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MetricasPasajero_Load(System::Object^ sender, System::EventArgs^ e) {
		Contexto^ contexto = STPUCP_Model::Contexto::ObtenerInstancia();
		// Obtener las órdenes del pasajero por ID
		List<Orden^>^ ordenesList = controller::QueryOrdenesByIdPasajero(contexto->ObtenerIdUsuario());

		// Inicializar diccionario para almacenar la suma de precios por mes
		Dictionary<int, double>^ preciosPorMes = gcnew Dictionary<int, double>();
		for (int i = 1; i <= 12; i++) {
			preciosPorMes[i] = 0.0;
		}

		// Calcular la suma de precios por mes
		for each (Orden ^ orden in ordenesList) {
			int month;
			try {
				month = Convert::ToInt32(orden->Fecha->Substring(3, 2));
			}
			catch (...) {
				try {
					month = Convert::ToInt32(orden->Fecha->Substring(2, 2)); // Intentar de nuevo con "tostring2,2"
				}
				catch (...) {
					continue; // Saltar esta orden si no se puede obtener el mes válido
				}
			}
			if (month >= 1 && month <= 12) {
				preciosPorMes[month] += orden->Precio; // Sumar el precio de la orden al mes correspondiente
			}
			else {
				MessageBox::Show("Fecha inválida en la orden ID: " + orden->Id.ToString());
			}
		}

		// Crear y llenar el gráfico
		MontoMensual->Series->Clear();
		Series^ series = gcnew Series("Suma de Precios por Mes");
		series->Color = Color::Gold;
		series->ChartType = SeriesChartType::Column;
		for (int i = 1; i <= 12; i++) {
			series->Points->AddXY(i, preciosPorMes[i]);
		}
		MontoMensual->Series->Add(series);

		// Configurar el gráfico para mostrar etiquetas de valores
		series->IsValueShownAsLabel = true;
		MontoMensual->ChartAreas[0]->AxisX->Title = "Mes";
		MontoMensual->ChartAreas[0]->AxisY->Title = "Suma de Precios Totales";
		MontoMensual->ChartAreas[0]->AxisX->Interval = 1;



		// Obtener el ID del pasajero del cuadro de texto
		int pasajeroId = Convert::ToInt32(contexto->ObtenerIdUsuario());

		// Obtener las órdenes del pasajero por ID
		List<Orden^>^ ordenesLista = controller::QueryOrdenesByIdPasajero(pasajeroId);

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
		MontoMes->Series->Clear();
		Series^ seriesa = gcnew Series("Ordenes por mes");
		seriesa->Color = Color::Gold;
		seriesa->ChartType = SeriesChartType::Column;
		for (int i = 1; i <= 12; i++) {
			seriesa->Points->AddXY(i, ordersByMonth[i]);
		}
		MontoMes->Series->Add(seriesa);

		// Configurar el gráfico para mostrar etiquetas de valores
		seriesa->IsValueShownAsLabel = true;
		MontoMes->ChartAreas[0]->AxisX->Title = "Mes";
		MontoMes->ChartAreas[0]->AxisY->Title = "Cantidad de Órdenes";
		MontoMes->ChartAreas[0]->AxisX->Interval = 1;
































	}
};
}
