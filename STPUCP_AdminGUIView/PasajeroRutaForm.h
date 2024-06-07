#include "BoletaInterfazForm.h"
#include "BuscarViajesForm.h"

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

    /// <summary>
    /// Resumen de PasajeroRutaForm
    /// </summary>
    public ref class PasajeroRutaForm : public System::Windows::Forms::Form
    {
    public:
        PasajeroRutaForm(void)
        {
            InitializeComponent();
            LoadConductores(); // Llama al método para llenar la tabla
        }

    protected:
        /// <summary>
        /// Limpiar los recursos que se estén usando.
        /// </summary>
        ~PasajeroRutaForm()
        {
            if (components)
            {
                delete components;
            }
        }

    protected:
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::DataGridView^ dataGridView1;

    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Hora;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Lugar;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Precio;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::Button^ searchButton; // New button for searching

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
            this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
            this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Hora = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Lugar = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Precio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->searchButton = (gcnew System::Windows::Forms::Button()); // Initialize search button
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(12, 9);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(115, 16);
            this->label1->TabIndex = 1;
            this->label1->Text = L"Elija su conductor:";
            this->label1->Click += gcnew System::EventHandler(this, &PasajeroRutaForm::label1_Click);
            // 
            // dataGridView1
            // 
            this->dataGridView1->AllowUserToDeleteRows = false;
            this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
                this->Column1,
                    this->Column2, this->Column3, this->Column4, this->Hora, this->Lugar, this->Precio
            });
            this->dataGridView1->Location = System::Drawing::Point(12, 50);
            this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->dataGridView1->Name = L"dataGridView1";
            this->dataGridView1->RowHeadersWidth = 51;
            this->dataGridView1->RowTemplate->Height = 24;
            this->dataGridView1->Size = System::Drawing::Size(933, 159);
            this->dataGridView1->TabIndex = 2;
            this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &PasajeroRutaForm::dgvConductor_CellClick);
            this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &PasajeroRutaForm::dgvConductor_CellContentClick);
            // 
            // Column1
            // 
            this->Column1->HeaderText = L"Nombre";
            this->Column1->MinimumWidth = 6;
            this->Column1->Name = L"Column1";
            this->Column1->Width = 125;
            // 
            // Column2
            // 
            this->Column2->HeaderText = L"Apellido Paterno";
            this->Column2->MinimumWidth = 6;
            this->Column2->Name = L"Column2";
            this->Column2->Width = 125;
            // 
            // Column3
            // 
            this->Column3->HeaderText = L"Apellido Materno";
            this->Column3->MinimumWidth = 6;
            this->Column3->Name = L"Column3";
            this->Column3->Width = 125;
            // 
            // Column4
            // 
            this->Column4->HeaderText = L"Codigo PUCP";
            this->Column4->MinimumWidth = 6;
            this->Column4->Name = L"Column4";
            this->Column4->Width = 125;
            // 
            // Hora
            // 
            this->Hora->HeaderText = L"Lugar";
            this->Hora->MinimumWidth = 6;
            this->Hora->Name = L"Hora";
            this->Hora->Width = 125;
            // 
            // Lugar
            // 
            this->Lugar->HeaderText = L"Hora";
            this->Lugar->MinimumWidth = 6;
            this->Lugar->Name = L"Lugar";
            this->Lugar->Width = 125;
            // 
            // Precio
            // 
            this->Precio->HeaderText = L"Precio";
            this->Precio->MinimumWidth = 6;
            this->Precio->Name = L"Precio";
            this->Precio->Width = 125;
            // 
            // button1
            // 
            this->button1->Location = System::Drawing::Point(1045, 207);
            this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(117, 39);
            this->button1->TabIndex = 3;
            this->button1->Text = L"ACEPTAR";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &PasajeroRutaForm::btnBoleta_Click);
            // 
            // textBox1
            // 
            this->textBox1->Location = System::Drawing::Point(1027, 94);
            this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(135, 22);
            this->textBox1->TabIndex = 4;
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(1024, 63);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(137, 16);
            this->label2->TabIndex = 5;
            this->label2->Text = L"Seleccione conductor";
            // 
            // button2
            // 
            this->button2->Location = System::Drawing::Point(1045, 124);
            this->button2->Margin = System::Windows::Forms::Padding(4);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(112, 58);
            this->button2->TabIndex = 6;
            this->button2->Text = L"continuar";
            this->button2->UseVisualStyleBackColor = true;
            this->button2->Click += gcnew System::EventHandler(this, &PasajeroRutaForm::button2_Click);
            // 
            // searchButton
            // 
            this->searchButton->Location = System::Drawing::Point(1027, 10);
            this->searchButton->Name = L"searchButton";
            this->searchButton->Size = System::Drawing::Size(135, 30);
            this->searchButton->TabIndex = 7;
            this->searchButton->Text = L"Buscar";
            this->searchButton->UseVisualStyleBackColor = true;
            this->searchButton->Click += gcnew System::EventHandler(this, &PasajeroRutaForm::searchButton_Click);
            // 
            // PasajeroRutaForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1248, 260);
            this->Controls->Add(this->searchButton);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->textBox1);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->dataGridView1);
            this->Controls->Add(this->label1);
            this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->Name = L"PasajeroRutaForm";
            this->Text = L"SERVICIOS DISPONIBLES";
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

    private: void LoadConductores() {
        // Filtrar solo los conductores de la lista de usuarios
        List<Conductor^>^ conductores = gcnew List<Conductor^>();
        List<Usuario^>^ usuarios = gcnew List<Usuario^>(); // Simulating user list retrieval

        // This should be replaced with actual data fetching logic
        // For example, fetching from a database or a file
        for each (Usuario ^ usuario in usuarios) {
            Conductor^ conductor = dynamic_cast<Conductor^>(usuario);
            if (conductor != nullptr) {
                conductores->Add(conductor);
            }
        }

        if (conductores != nullptr && conductores->Count > 0) {
            dataGridView1->Rows->Clear();

            for each (Conductor ^ conductor in conductores) {
                dataGridView1->Rows->Add(conductor->Nombre, conductor->ApellidoPaterno, conductor->ApellidoMaterno, conductor->CodigoPUCP);
            }
        }
    }

    private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
    }

    private: System::Void btnBoleta_Click(System::Object^ sender, System::EventArgs^ e) {
        STPUCPAdminGUIView::BoletaInterfazForm^ boletaForm = gcnew STPUCPAdminGUIView::BoletaInterfazForm();
        this->Close();
        boletaForm->TopMost = true;
        boletaForm->ShowDialog();
    }

    private: System::Void dgvConductor_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
    }

    private: System::Void dgvConductor_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
        if (e->RowIndex >= 0 && e->ColumnIndex >= 0) {
            int rowIndex = e->RowIndex;
            String^ nombre = dataGridView1->Rows[rowIndex]->Cells["Column1"]->Value->ToString();
            String^ apellidoPaterno = dataGridView1->Rows[rowIndex]->Cells["Column2"]->Value->ToString();
            String^ apellidoMaterno = dataGridView1->Rows[rowIndex]->Cells["Column3"]->Value->ToString();
            String^ codigoPUCP = dataGridView1->Rows[rowIndex]->Cells["Column4"]->Value->ToString();
            String^ lugar = dataGridView1->Rows[rowIndex]->Cells["Hora"]->Value->ToString();
            String^ hora = dataGridView1->Rows[rowIndex]->Cells["Lugar"]->Value->ToString();
            String^ precio = dataGridView1->Rows[rowIndex]->Cells["Precio"]->Value->ToString();

            textBox1->Text = codigoPUCP;
        }
    }

    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
        BuscarViajesForm^ buscarViajes = gcnew BuscarViajesForm();
        this->Close();
        buscarViajes->TopMost = true;
        buscarViajes->ShowDialog();
    }

    private: System::Void searchButton_Click(System::Object^ sender, System::EventArgs^ e) {
        String^ searchText = textBox1->Text;
        for (int i = 0; i < dataGridView1->Rows->Count; i++) {
            DataGridViewRow^ row = dataGridView1->Rows[i];
            if (row->Cells["Column4"]->Value->ToString()->Equals(searchText)) {
                row->Selected = true;
                break;
            }
        }
    }
           void SetUserData(String^ nombre, String^ apellidoPaterno, String^ apellidoMaterno);
};
}
