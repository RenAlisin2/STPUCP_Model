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

    private: System::Windows::Forms::DataGridView^ dataGridView1;




    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Hora;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Lugar;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Precio;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::Button^ btnAceptar;

    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Button^ btnRetroceder;
    private: System::Windows::Forms::PictureBox^ pBConductor;
    private: System::Windows::Forms::PictureBox^ pBVehículo;


    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::TextBox^ textId;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ ID_viaje;
    private: System::Windows::Forms::TextBox^ text_idViaje;
    private: System::Windows::Forms::Label^ label5;



           // New button for searching

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
            this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
            this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Hora = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Lugar = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Precio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->ID_viaje = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->btnAceptar = (gcnew System::Windows::Forms::Button());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->btnRetroceder = (gcnew System::Windows::Forms::Button());
            this->pBConductor = (gcnew System::Windows::Forms::PictureBox());
            this->pBVehículo = (gcnew System::Windows::Forms::PictureBox());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->textId = (gcnew System::Windows::Forms::TextBox());
            this->text_idViaje = (gcnew System::Windows::Forms::TextBox());
            this->label5 = (gcnew System::Windows::Forms::Label());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pBConductor))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pBVehículo))->BeginInit();
            this->SuspendLayout();
            // 
            // dataGridView1
            // 
            this->dataGridView1->AllowUserToAddRows = false;
            this->dataGridView1->AllowUserToDeleteRows = false;
            this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
            this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
                this->Column1,
                    this->Column2, this->Column3, this->Column4, this->Hora, this->Lugar, this->Precio, this->ID_viaje
            });
            this->dataGridView1->Location = System::Drawing::Point(15, 217);
            this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->dataGridView1->Name = L"dataGridView1";
            this->dataGridView1->RowHeadersVisible = false;
            this->dataGridView1->RowHeadersWidth = 51;
            this->dataGridView1->RowTemplate->Height = 24;
            this->dataGridView1->Size = System::Drawing::Size(1112, 218);
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
            // ID_viaje
            // 
            this->ID_viaje->HeaderText = L"Id del viaje";
            this->ID_viaje->MinimumWidth = 6;
            this->ID_viaje->Name = L"ID_viaje";
            this->ID_viaje->Width = 125;
            // 
            // button2
            // 
            this->button2->Location = System::Drawing::Point(248, 25);
            this->button2->Margin = System::Windows::Forms::Padding(4);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(225, 27);
            this->button2->TabIndex = 6;
            this->button2->Text = L"Viajes Disponible";
            this->button2->UseVisualStyleBackColor = true;
            this->button2->Click += gcnew System::EventHandler(this, &PasajeroRutaForm::button2_Click);
            // 
            // btnAceptar
            // 
            this->btnAceptar->Location = System::Drawing::Point(52, 62);
            this->btnAceptar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->btnAceptar->Name = L"btnAceptar";
            this->btnAceptar->Size = System::Drawing::Size(171, 39);
            this->btnAceptar->TabIndex = 3;
            this->btnAceptar->Text = L"Aceptar";
            this->btnAceptar->UseVisualStyleBackColor = true;
            this->btnAceptar->Click += gcnew System::EventHandler(this, &PasajeroRutaForm::btnBoleta_Click);
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(53, 25);
            this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(170, 16);
            this->label1->TabIndex = 7;
            this->label1->Text = L"Consultar viajes por distrito:";
            // 
            // btnRetroceder
            // 
            this->btnRetroceder->Location = System::Drawing::Point(248, 62);
            this->btnRetroceder->Margin = System::Windows::Forms::Padding(4);
            this->btnRetroceder->Name = L"btnRetroceder";
            this->btnRetroceder->Size = System::Drawing::Size(217, 39);
            this->btnRetroceder->TabIndex = 8;
            this->btnRetroceder->Text = L"Retroceder";
            this->btnRetroceder->UseVisualStyleBackColor = true;
            this->btnRetroceder->Click += gcnew System::EventHandler(this, &PasajeroRutaForm::btnRetroceder_Click);
            // 
            // pBConductor
            // 
            this->pBConductor->Location = System::Drawing::Point(549, 15);
            this->pBConductor->Margin = System::Windows::Forms::Padding(4);
            this->pBConductor->Name = L"pBConductor";
            this->pBConductor->Size = System::Drawing::Size(219, 158);
            this->pBConductor->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pBConductor->TabIndex = 9;
            this->pBConductor->TabStop = false;
            // 
            // pBVehículo
            // 
            this->pBVehículo->Location = System::Drawing::Point(817, 14);
            this->pBVehículo->Margin = System::Windows::Forms::Padding(4);
            this->pBVehículo->Name = L"pBVehículo";
            this->pBVehículo->Size = System::Drawing::Size(236, 158);
            this->pBVehículo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pBVehículo->TabIndex = 10;
            this->pBVehículo->TabStop = false;
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(604, 183);
            this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(118, 16);
            this->label2->TabIndex = 11;
            this->label2->Text = L"Foto del conductor";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Location = System::Drawing::Point(908, 183);
            this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(85, 16);
            this->label3->TabIndex = 12;
            this->label3->Text = L"Foto del auto";
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Location = System::Drawing::Point(53, 125);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(113, 16);
            this->label4->TabIndex = 13;
            this->label4->Text = L"Codigo del chofer";
            // 
            // textId
            // 
            this->textId->Location = System::Drawing::Point(248, 119);
            this->textId->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->textId->Name = L"textId";
            this->textId->ReadOnly = true;
            this->textId->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
            this->textId->Size = System::Drawing::Size(185, 22);
            this->textId->TabIndex = 14;
            this->textId->TextChanged += gcnew System::EventHandler(this, &PasajeroRutaForm::textId_TextChanged);
            // 
            // text_idViaje
            // 
            this->text_idViaje->Location = System::Drawing::Point(248, 165);
            this->text_idViaje->Name = L"text_idViaje";
            this->text_idViaje->ReadOnly = true;
            this->text_idViaje->Size = System::Drawing::Size(185, 22);
            this->text_idViaje->TabIndex = 15;
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Location = System::Drawing::Point(52, 165);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(157, 16);
            this->label5->TabIndex = 16;
            this->label5->Text = L"Id del viaje seleccionado";
            // 
            // PasajeroRutaForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1139, 489);
            this->ControlBox = false;
            this->Controls->Add(this->label5);
            this->Controls->Add(this->text_idViaje);
            this->Controls->Add(this->textId);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->pBVehículo);
            this->Controls->Add(this->pBConductor);
            this->Controls->Add(this->btnRetroceder);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->btnAceptar);
            this->Controls->Add(this->dataGridView1);
            this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->Name = L"PasajeroRutaForm";
            this->Text = L"Servicios Disponibles";
            this->Load += gcnew System::EventHandler(this, &PasajeroRutaForm::PasajeroRutaForm_Load);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pBConductor))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pBVehículo))->EndInit();
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
     BoletaInterfazForm^ boletaForm = gcnew BoletaInterfazForm();
        //this->Close();
        //boletaForm->TopMost = true;

        boletaForm->text_viajeid->Text = text_idViaje->Text;
        boletaForm->ShowDialog();
        


    }

    private: System::Void dgvConductor_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
    }

    private: System::Void dgvConductor_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
        btnAceptar->Enabled = true;
        if (e->RowIndex >= 0 && e->ColumnIndex >= 0) {
            int rowIndex = e->RowIndex;
            String^ nombre = dataGridView1->Rows[rowIndex]->Cells["Column1"]->Value->ToString();
            String^ apellidoPaterno = dataGridView1->Rows[rowIndex]->Cells["Column2"]->Value->ToString();
            String^ apellidoMaterno = dataGridView1->Rows[rowIndex]->Cells["Column3"]->Value->ToString();
            String^ codigoPUCP = dataGridView1->Rows[rowIndex]->Cells["Column4"]->Value->ToString();
            String^ lugar = dataGridView1->Rows[rowIndex]->Cells["Hora"]->Value->ToString();
            String^ hora = dataGridView1->Rows[rowIndex]->Cells["Lugar"]->Value->ToString();
            String^ precio = dataGridView1->Rows[rowIndex]->Cells["Precio"]->Value->ToString();
            int UsuarioID = Int32::Parse(codigoPUCP);
            Usuario^ Usuario = controller::QueryUsersById(UsuarioID);
            Conductor^ conductor = dynamic_cast<Conductor^>(Usuario);
            // Cargar la imagen del conductor
            if (conductor->FotoConductor != nullptr) {
                System::IO::MemoryStream^ msConductor = gcnew System::IO::MemoryStream(conductor->FotoConductor);
                pBConductor->Image = Image::FromStream(msConductor);
            }
            else {
                pBConductor->Image = nullptr;
            }

            // Cargar la imagen del carro
            if (conductor->FotoCarro != nullptr) {
                System::IO::MemoryStream^ msCarro = gcnew System::IO::MemoryStream(conductor->FotoCarro);
                pBVehículo->Image = Image::FromStream(msCarro);
            }
            else {
                pBVehículo->Image = nullptr;
            }

            //textBox1->Text = codigoPUCP;
        }
    }
        public:   void AddJourneyToGrid(Viaje^ viaje) {
            textId->Text = "" + viaje->ConductorId;
            text_idViaje->Text = "" + viaje->Id;
            Usuario^ usuario = controller::QueryUsersById(viaje->ConductorId);
               dataGridView1->Rows->Add(gcnew array<String^> {
                    "" +usuario ->Nombre, //columana1
                        "" +usuario->ApellidoPaterno, //columana2
                        "" +usuario->ApellidoMaterno, //columana3
                        "" +usuario->CodigoPUCP, //columana4
                        "" + viaje->UltimoParadero, //columana5
                        "" + viaje->HoraSalida, //columana6
                        "" + viaje->PrecioViaje, //columana7
                        "" + viaje->Id, //columana7

            });

               
        }



    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
        BuscarViajesForm^ buscarViajes = gcnew BuscarViajesForm(this);
        //this->Close();
        //buscarViajes->TopMost = true;
        buscarViajes->ShowDialog();
    }

    /*private: System::Void searchButton_Click(System::Object^ sender, System::EventArgs^ e) {
        String^ searchText = textBox1->Text;
        for (int i = 0; i < dataGridView1->Rows->Count; i++) {
            DataGridViewRow^ row = dataGridView1->Rows[i];
            if (row->Cells["Column4"]->Value->ToString()->Equals(searchText)) {
                row->Selected = true;
                break;
            }
        }
    }*/
           void SetUserData(String^ nombre, String^ apellidoPaterno, String^ apellidoMaterno);

private: System::Void PasajeroRutaForm_Load(System::Object^ sender, System::EventArgs^ e) {
    btnAceptar->Enabled = false;
}
private: System::Void btnRetroceder_Click(System::Object^ sender, System::EventArgs^ e) {
    this->Close();
}
private: System::Void textId_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
