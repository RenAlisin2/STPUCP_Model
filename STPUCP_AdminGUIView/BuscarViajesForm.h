

#pragma once

namespace STPUCPAdminGUIView {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::Collections::Generic;
    using namespace STPUCP_Model;
    using namespace STPUCPAdminController;

    /// <summary>
    /// Resumen de BuscarViajesForm
    /// </summary>
    public ref class BuscarViajesForm : public System::Windows::Forms::Form
    {
    private:
        Form^ refForm;
    public:
        BuscarViajesForm(Form^ refForm)
        {
            this->refForm = refForm;
            InitializeComponent();
            //
            //TODO: agregar código de constructor aquí
            //
        }

    protected:
        /// <summary>
        /// Limpiar los recursos que se estén usando.
        /// </summary>
        ~BuscarViajesForm()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::Label^ label1;


    private: System::Windows::Forms::Button^ btnBuscar;
    private: System::Windows::Forms::Button^ btnCancelar;
    private: System::Windows::Forms::DataGridView^ DGVBuscar;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Id;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ HoraSalida;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ FechaViaje;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ UltimoParadero;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ PrecioViaje;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Distrito;
    private: System::Windows::Forms::ComboBox^ comboBox1;













    protected:

    private:
        /// <summary>
        /// Variable del diseñador necesaria.
        /// </summary>
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        /// <summary>
        /// Método necesario para admitir el Diseñador. No se puede modificar
        /// el contenido de este método con el editor de código.
        /// </summary>
        void InitializeComponent(void)
        {
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->btnBuscar = (gcnew System::Windows::Forms::Button());
            this->btnCancelar = (gcnew System::Windows::Forms::Button());
            this->DGVBuscar = (gcnew System::Windows::Forms::DataGridView());
            this->Id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->HoraSalida = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->FechaViaje = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->UltimoParadero = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->PrecioViaje = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Distrito = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGVBuscar))->BeginInit();
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(31, 50);
            this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(139, 16);
            this->label1->TabIndex = 0;
            this->label1->Text = L"Distrito al que quiere ir";
            // 
            // btnBuscar
            // 
            this->btnBuscar->Location = System::Drawing::Point(35, 91);
            this->btnBuscar->Margin = System::Windows::Forms::Padding(4);
            this->btnBuscar->Name = L"btnBuscar";
            this->btnBuscar->Size = System::Drawing::Size(344, 43);
            this->btnBuscar->TabIndex = 2;
            this->btnBuscar->Text = L"Buscar";
            this->btnBuscar->UseVisualStyleBackColor = true;
            this->btnBuscar->Click += gcnew System::EventHandler(this, &BuscarViajesForm::btnBuscar_Click);
            // 
            // btnCancelar
            // 
            this->btnCancelar->Location = System::Drawing::Point(387, 91);
            this->btnCancelar->Margin = System::Windows::Forms::Padding(4);
            this->btnCancelar->Name = L"btnCancelar";
            this->btnCancelar->Size = System::Drawing::Size(367, 43);
            this->btnCancelar->TabIndex = 3;
            this->btnCancelar->Text = L"Cancelar";
            this->btnCancelar->UseVisualStyleBackColor = true;
            this->btnCancelar->Click += gcnew System::EventHandler(this, &BuscarViajesForm::btnCancelar_Click);
            // 
            // DGVBuscar
            // 
            this->DGVBuscar->AllowUserToAddRows = false;
            this->DGVBuscar->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
            this->DGVBuscar->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->DGVBuscar->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
                this->Id, this->HoraSalida,
                    this->FechaViaje, this->UltimoParadero, this->PrecioViaje, this->Distrito
            });
            this->DGVBuscar->Location = System::Drawing::Point(35, 154);
            this->DGVBuscar->Margin = System::Windows::Forms::Padding(4);
            this->DGVBuscar->Name = L"DGVBuscar";
            this->DGVBuscar->RowHeadersVisible = false;
            this->DGVBuscar->RowHeadersWidth = 51;
            this->DGVBuscar->Size = System::Drawing::Size(719, 226);
            this->DGVBuscar->TabIndex = 4;
            this->DGVBuscar->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &BuscarViajesForm::DGVBuscar_CellClick);
            this->DGVBuscar->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &BuscarViajesForm::DGVBuscar_CellContentClick);
            // 
            // Id
            // 
            this->Id->HeaderText = L"Id";
            this->Id->MinimumWidth = 6;
            this->Id->Name = L"Id";
            this->Id->ReadOnly = true;
            this->Id->Width = 125;
            // 
            // HoraSalida
            // 
            this->HoraSalida->HeaderText = L"Hora de salida";
            this->HoraSalida->MinimumWidth = 6;
            this->HoraSalida->Name = L"HoraSalida";
            this->HoraSalida->ReadOnly = true;
            this->HoraSalida->Width = 125;
            // 
            // FechaViaje
            // 
            this->FechaViaje->HeaderText = L"Fecha de Viaje";
            this->FechaViaje->MinimumWidth = 6;
            this->FechaViaje->Name = L"FechaViaje";
            this->FechaViaje->ReadOnly = true;
            this->FechaViaje->Width = 125;
            // 
            // UltimoParadero
            // 
            this->UltimoParadero->HeaderText = L"Ultimo Paradero";
            this->UltimoParadero->MinimumWidth = 6;
            this->UltimoParadero->Name = L"UltimoParadero";
            this->UltimoParadero->ReadOnly = true;
            this->UltimoParadero->Width = 125;
            // 
            // PrecioViaje
            // 
            this->PrecioViaje->HeaderText = L"Precio de Viaje";
            this->PrecioViaje->MinimumWidth = 6;
            this->PrecioViaje->Name = L"PrecioViaje";
            this->PrecioViaje->ReadOnly = true;
            this->PrecioViaje->Width = 125;
            // 
            // Distrito
            // 
            this->Distrito->HeaderText = L"Distrito";
            this->Distrito->MinimumWidth = 6;
            this->Distrito->Name = L"Distrito";
            this->Distrito->ReadOnly = true;
            this->Distrito->Width = 125;
            // 
            // comboBox1
            // 
            this->comboBox1->FormattingEnabled = true;
            this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(43) {
                L"Ancón", L"Ate", L"Barranco", L"Breña", L"Carabayllo",
                    L"Chaclacayo", L"Chorrillos", L"Cieneguilla", L"Comas", L"El Agustino", L"Independencia", L"Jesús María", L"La Molina", L"La Victoria",
                    L"Lima\rLince", L"Los Olivos", L"Lurigancho", L"Chosica", L"Lurín", L"Magdalena del Mar", L"Miraflores", L"Pachacámac", L"Pucusana",
                    L"Pueblo Libre", L"Puente Piedra", L"Punta Hermosa", L"Punta Negra", L"Rímac", L"San Bartolo", L"San Borja", L"San Isidro", L"an Juan de Lurigancho",
                    L"San Juan de Miraflores", L"San Luis", L"San Martín de Porres", L"San Miguel", L"Santa Anita", L"Santa María del Mar", L"Santa Rosa",
                    L"Santiago de Surco", L"Surquillo", L"Villa El Salvador", L"Villa María del Triunfo"
            });
            this->comboBox1->Location = System::Drawing::Point(261, 50);
            this->comboBox1->Name = L"comboBox1";
            this->comboBox1->Size = System::Drawing::Size(363, 24);
            this->comboBox1->TabIndex = 5;
            // 
            // BuscarViajesForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(796, 439);
            this->Controls->Add(this->comboBox1);
            this->Controls->Add(this->DGVBuscar);
            this->Controls->Add(this->btnCancelar);
            this->Controls->Add(this->btnBuscar);
            this->Controls->Add(this->label1);
            this->Margin = System::Windows::Forms::Padding(4);
            this->Name = L"BuscarViajesForm";
            this->Text = L"BuscarViajesForm";
            this->Load += gcnew System::EventHandler(this, &BuscarViajesForm::BuscarViajesForm_Load);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGVBuscar))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

        void AddJourneyToGrid(Viaje^ viaje) {
            DGVBuscar->Rows->Add(gcnew array<String^> {
                    "" + viaje->Id,
                    "" + viaje->HoraSalida,
                    viaje->FechaViaje,
                    viaje->UltimoParadero,
                    "" + viaje->PrecioViaje,
                    viaje->Distrito
            });
        }

    private: System::Void btnCancelar_Click(System::Object^ sender, System::EventArgs^ e) {
        this->Close();
    }

    private: System::Void btnBuscar_Click(System::Object^ sender, System::EventArgs^ e) {
        try {
            String^ Distrito = comboBox1->SelectedItem->ToString();
            DGVBuscar->Rows->Clear();
            List<Viaje^>^ viajeList = controller::QueryViajesByName(Distrito);
            if (viajeList->Count == 0) {
                MessageBox::Show("No se encontraron viajes en el distrito seleccionado.");
            }
            else {
                for (int i = 0; i < viajeList->Count; i++) {
                    AddJourneyToGrid(viajeList[i]);
                }
            }
        }
        catch (Exception^ ex) {
            MessageBox::Show("Ocurrió un error al buscar los viajes: " + ex->Message);
        }
        
        
    }
    private: System::Void DGVBuscar_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
    }
private: System::Void DGVBuscar_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
private: System::Void BuscarViajesForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}

