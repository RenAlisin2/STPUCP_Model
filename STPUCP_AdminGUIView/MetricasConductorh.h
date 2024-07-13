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
	/// Resumen de MetricasConductorh
	/// </summary>
	public ref class MetricasConductorh : public System::Windows::Forms::Form
	{
	public:
		MetricasConductorh(void)
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
		~MetricasConductorh()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::DataVisualization::Charting::Chart^ ViajesMes;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ OrdeenesMes;

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
			this->ViajesMes = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->OrdeenesMes = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ViajesMes))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->OrdeenesMes))->BeginInit();
			this->SuspendLayout();
			// 
			// ViajesMes
			// 
			chartArea1->Name = L"ChartArea1";
			this->ViajesMes->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->ViajesMes->Legends->Add(legend1);
			this->ViajesMes->Location = System::Drawing::Point(396, 55);
			this->ViajesMes->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->ViajesMes->Name = L"ViajesMes";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->ViajesMes->Series->Add(series1);
			this->ViajesMes->Size = System::Drawing::Size(353, 234);
			this->ViajesMes->TabIndex = 2;
			this->ViajesMes->Text = L"chart1";
			// 
			// OrdeenesMes
			// 
			chartArea2->Name = L"ChartArea1";
			this->OrdeenesMes->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->OrdeenesMes->Legends->Add(legend2);
			this->OrdeenesMes->Location = System::Drawing::Point(23, 55);
			this->OrdeenesMes->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->OrdeenesMes->Name = L"OrdeenesMes";
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L"Series1";
			this->OrdeenesMes->Series->Add(series2);
			this->OrdeenesMes->Size = System::Drawing::Size(353, 234);
			this->OrdeenesMes->TabIndex = 3;
			this->OrdeenesMes->Text = L"chart2";
			// 
			// MetricasConductorh
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(780, 322);
			this->Controls->Add(this->OrdeenesMes);
			this->Controls->Add(this->ViajesMes);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"MetricasConductorh";
			this->ShowIcon = false;
			this->Text = L"Metricas del conductor";
			this->Load += gcnew System::EventHandler(this, &MetricasConductorh::MetricasConductorh_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ViajesMes))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->OrdeenesMes))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MetricasConductorh_Load(System::Object^ sender, System::EventArgs^ e) {
		Contexto^ contexto = STPUCP_Model::Contexto::ObtenerInstancia();
		//contexto->ObtenerIdUsuario()
		List<Viaje^>^ viajemosLista = controller::QueryViajesByIdConductor(contexto->ObtenerIdUsuario());

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
		ViajesMes->Series->Clear();
		Series^ seriesEstrellas = gcnew Series("Viajes"); // Usar un nombre de serie diferente para el segundo gráfico
		seriesEstrellas->ChartType = SeriesChartType::Column;
		for (int i = 1; i <= 12; i++) {
			seriesEstrellas->Points->AddXY(i, ordersBymes[i]);
		}
		ViajesMes->Series->Add(seriesEstrellas);

		// Configurar el gráfico M_Estrellas para mostrar etiquetas de valores
		seriesEstrellas->IsValueShownAsLabel = true;
		ViajesMes->ChartAreas[0]->AxisX->Title = "Mes";
		ViajesMes->ChartAreas[0]->AxisY->Title = "Cantidad de Viajes por mes";
		ViajesMes->ChartAreas[0]->AxisX->Interval = 1;

	}
};
}
