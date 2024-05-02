#pragma once

#include <string>
#include <iostream>
#include <msclr/marshal_cppstd.h>

#include "RegistroHuellaDactilarForm.h"
#include "ServicioDriverForm.h"

namespace STPUCPGUIAPP {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Drawing;

    public ref class Registro_Conductor : public System::Windows::Forms::Form
    {
    public:
        Registro_Conductor(void)
        {
            InitializeComponent();
        }

    protected:
        ~Registro_Conductor()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::Label^ label8;
    private: System::Windows::Forms::Label^ label9;
    private: System::Windows::Forms::TextBox^ textRegistro_ModelodeCarro;
    private: System::Windows::Forms::TextBox^ textRegistro_PlacadeCarro;
    private: System::Windows::Forms::TextBox^ textRegistro_ColordeCarro;
    private: System::Windows::Forms::TextBox^ textRegistro_CantidaddeAsientosdelcarro;


    private: System::Windows::Forms::Button^ btn_FotoConductor;
    private: System::Windows::Forms::TextBox^ textRegistro_FotodelConductor;

    private: System::Windows::Forms::Button^ btn_FotoCarro;
    private: System::Windows::Forms::TextBox^ textRegistro_FotodelCarro;

    private: System::Windows::Forms::Button^ btn_RegistroHuella;
    private: System::Windows::Forms::Button^ btn_VerifiqueAQUI;
    private: System::Windows::Forms::Button^ btn_CrearCuentaConductor;

    protected:

    private:
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

        void InitializeComponent(void)
        {
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->label8 = (gcnew System::Windows::Forms::Label());
            //this->label9 = (gcnew System::Windows::Forms::Label());
            this->textRegistro_ModelodeCarro = (gcnew System::Windows::Forms::TextBox());
            this->textRegistro_PlacadeCarro = (gcnew System::Windows::Forms::TextBox());
            this->textRegistro_ColordeCarro = (gcnew System::Windows::Forms::TextBox());
            this->textRegistro_CantidaddeAsientosdelcarro = (gcnew System::Windows::Forms::TextBox());
            this->btn_FotoConductor = (gcnew System::Windows::Forms::Button());
            this->btn_FotoCarro = (gcnew System::Windows::Forms::Button());
            this->btn_RegistroHuella = (gcnew System::Windows::Forms::Button());
            this->btn_VerifiqueAQUI = (gcnew System::Windows::Forms::Button());
            this->btn_CrearCuentaConductor = (gcnew System::Windows::Forms::Button());
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(12, 65);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(106, 16);
            this->label1->TabIndex = 0;
            this->label1->Text = L"Modelo de carro";
            this->label1->Click += gcnew System::EventHandler(this, &Registro_Conductor::label1_Click);
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(12, 102);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(95, 16);
            this->label2->TabIndex = 1;
            this->label2->Text = L"Placa de carro";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Location = System::Drawing::Point(12, 143);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(92, 16);
            this->label3->TabIndex = 2;
            this->label3->Text = L"Color de carro";
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Location = System::Drawing::Point(12, 187);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(190, 16);
            this->label4->TabIndex = 3;
            this->label4->Text = L"Cantidad de asientos del carro";
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Location = System::Drawing::Point(12, 238);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(94, 16);
            this->label5->TabIndex = 4;
            this->label5->Text = L"Ingrese su foto";
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Location = System::Drawing::Point(12, 278);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(142, 16);
            this->label6->TabIndex = 5;
            this->label6->Text = L"Ingrese foto de su auto";
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Location = System::Drawing::Point(12, 308);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(274, 16);
            this->label7->TabIndex = 6;
            this->label7->Text = L"Presione aqui para registro de huella dactilar";
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->Location = System::Drawing::Point(12, 339);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(217, 16);
            this->label8->TabIndex = 7;
            this->label8->Text = L"Verifique si cumple las condiciones";
            // 
            
            // textRegistro_ModelodeCarro
            // 
            this->textRegistro_ModelodeCarro->Location = System::Drawing::Point(235, 62);
            this->textRegistro_ModelodeCarro->Name = L"textRegistro_ModelodeCarro";
            this->textRegistro_ModelodeCarro->Size = System::Drawing::Size(320, 22);
            this->textRegistro_ModelodeCarro->TabIndex = 8;
            // 
            // textRegistro_PlacadeCarro
            // 
            this->textRegistro_PlacadeCarro->Location = System::Drawing::Point(235, 99);
            this->textRegistro_PlacadeCarro->Name = L"textRegistro_PlacadeCarro";
            this->textRegistro_PlacadeCarro->Size = System::Drawing::Size(320, 22);
            this->textRegistro_PlacadeCarro->TabIndex = 9;
            // 
            // textRegistro_ColordeCarro
            // 
            this->textRegistro_ColordeCarro->Location = System::Drawing::Point(235, 137);
            this->textRegistro_ColordeCarro->Name = L"textRegistro_ColordeCarro";
            this->textRegistro_ColordeCarro->Size = System::Drawing::Size(320, 22);
            this->textRegistro_ColordeCarro->TabIndex = 10;
            // 
            // textRegistro_CantidaddeAsientosdelcarro
            // 
            this->textRegistro_CantidaddeAsientosdelcarro->Location = System::Drawing::Point(235, 181);
            this->textRegistro_CantidaddeAsientosdelcarro->Name = L"textRegistro_CantidaddeAsientosdelcarro";
            this->textRegistro_CantidaddeAsientosdelcarro->Size = System::Drawing::Size(320, 22);
            this->textRegistro_CantidaddeAsientosdelcarro->TabIndex = 11;
            // 
            // btn_FotoConductor
            // 
            this->btn_FotoConductor->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->btn_FotoConductor->Location = System::Drawing::Point(169, 235);
            this->btn_FotoConductor->Name = L"btn_FotoConductor";
            this->btn_FotoConductor->Size = System::Drawing::Size(80, 23);
            this->btn_FotoConductor->TabIndex = 14;
            this->btn_FotoConductor->Text = L"Subir";
            this->btn_FotoConductor->UseVisualStyleBackColor = false;
            this->btn_FotoConductor->Click += gcnew System::EventHandler(this, &Registro_Conductor::btn_FotoConductor_Click);
            // 
            // btn_FotoCarro
            // 
            this->btn_FotoCarro->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->btn_FotoCarro->Location = System::Drawing::Point(206, 275);
            this->btn_FotoCarro->Name = L"btn_FotoCarro";
            this->btn_FotoCarro->Size = System::Drawing::Size(80, 23);
            this->btn_FotoCarro->TabIndex = 15;
            this->btn_FotoCarro->Text = L"Subir";
            this->btn_FotoCarro->UseVisualStyleBackColor = false;
            this->btn_FotoCarro->Click += gcnew System::EventHandler(this, &Registro_Conductor::btn_FotoCarro_Click);
            // 
            // btn_RegistroHuella
            // 
            this->btn_RegistroHuella->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->btn_RegistroHuella->Location = System::Drawing::Point(323, 305);
            this->btn_RegistroHuella->Name = L"btn_RegistroHuella";
            this->btn_RegistroHuella->Size = System::Drawing::Size(123, 25);
            this->btn_RegistroHuella->TabIndex = 16;
            this->btn_RegistroHuella->Text = L"Registrar";
            this->btn_RegistroHuella->UseVisualStyleBackColor = false;
            this->btn_RegistroHuella->Click += gcnew System::EventHandler(this, &Registro_Conductor::btn_RegistroHuella_Click);
            // 
            // btn_VerifiqueAQUI
            // 
            this->btn_VerifiqueAQUI->BackColor = System::Drawing::SystemColors::ControlLightLight;
            this->btn_VerifiqueAQUI->Location = System::Drawing::Point(257, 336);
            this->btn_VerifiqueAQUI->Name = L"btn_VerifiqueAQUI";
            this->btn_VerifiqueAQUI->Size = System::Drawing::Size(165, 22);
            this->btn_VerifiqueAQUI->TabIndex = 17;
            this->btn_VerifiqueAQUI->Text = L"Probar";
            this->btn_VerifiqueAQUI->UseVisualStyleBackColor = false;
            this->btn_VerifiqueAQUI->Click += gcnew System::EventHandler(this, &Registro_Conductor::btn_Verificar_Click);
            // 
            // btn_CrearCuentaConductor
            // 
            this->btn_CrearCuentaConductor->Location = System::Drawing::Point(235, 389);
            this->btn_CrearCuentaConductor->Name = L"btn_CrearCuentaConductor";
            this->btn_CrearCuentaConductor->Size = System::Drawing::Size(238, 30);
            this->btn_CrearCuentaConductor->TabIndex = 18;
            this->btn_CrearCuentaConductor->Text = L"Crear Cuenta";
            this->btn_CrearCuentaConductor->UseVisualStyleBackColor = true;
            this->btn_CrearCuentaConductor->Click += gcnew System::EventHandler(this, &Registro_Conductor::btn_CrearCuentaConductor_Click);
            // 
            // Registro_Conductor
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->AutoSize = false;
            this->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->ClientSize = System::Drawing::Size(749, 445);
            this->Controls->Add(this->btn_CrearCuentaConductor);
            this->Controls->Add(this->btn_VerifiqueAQUI);
            this->Controls->Add(this->btn_RegistroHuella);
            this->Controls->Add(this->btn_FotoCarro);
            this->Controls->Add(this->btn_FotoConductor);
            this->Controls->Add(this->textRegistro_CantidaddeAsientosdelcarro);
            this->Controls->Add(this->textRegistro_ColordeCarro);
            this->Controls->Add(this->textRegistro_PlacadeCarro);
            this->Controls->Add(this->textRegistro_ModelodeCarro);
            this->Controls->Add(this->label8);
            this->Controls->Add(this->label7);
            this->Controls->Add(this->label6);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->IsMdiContainer = true;
            this->KeyPreview = true;
            this->Location = System::Drawing::Point(253, 410);
            this->Name = L"Registro_Conductor";
            this->Text = L"Registro de Conductor";
            this->Load += gcnew System::EventHandler(this, &Registro_Conductor::Registro_Conductor_Load);
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

    private:
        System::Void Registro_Conductor_Load(System::Object^ sender, System::EventArgs^ e) {
        }

        System::Void btn_FotoConductor_Click(System::Object^ sender, System::EventArgs^ e) {
            OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog();
            openFileDialog1->Filter = "Imagenes|*.png;*.jpg;*.jpeg;*.bmp;*.gif;";
            openFileDialog1->Title = "Selecciona la foto del conductor";

            if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
                textRegistro_FotodelConductor->Text = openFileDialog1->FileName;
            }
        }

        System::Void btn_FotoCarro_Click(System::Object^ sender, System::EventArgs^ e) {
            OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog();
            openFileDialog1->Filter = "Imagenes|*.png;*.jpg;*.jpeg;*.bmp;*.gif;";
            openFileDialog1->Title = "Selecciona la foto del auto";

            if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
                textRegistro_FotodelCarro->Text = openFileDialog1->FileName;
            }
        }

        System::Void btn_Verificar_Click(System::Object^ sender, System::EventArgs^ e) {
            // Obtener la placa del auto ingresada por el usuario
            String^ placaAuto = textRegistro_PlacadeCarro->Text;

            // Verificar si se ha ingresado la placa del auto
            if (String::IsNullOrEmpty(placaAuto)) {
                MessageBox::Show("Por favor, ingrese la placa del auto.", "Verificación Fallida", MessageBoxButtons::OK, MessageBoxIcon::Error);
                return; 
            }

            // Verificar si se ha seleccionado la foto del conductor
            if (String::IsNullOrEmpty(textRegistro_FotodelConductor->Text)) {
                MessageBox::Show("Por favor, seleccione la foto del conductor.", "Verificación Fallida", MessageBoxButtons::OK, MessageBoxIcon::Error);
                return; 
            }

            // Verificar si se ha seleccionado la foto del auto
            if (String::IsNullOrEmpty(textRegistro_FotodelCarro->Text)) {
                MessageBox::Show("Por favor, seleccione la foto del auto.", "Verificación Fallida", MessageBoxButtons::OK, MessageBoxIcon::Error);
                return; 
            }

           
            MessageBox::Show("Verificación exitosa. Todos los datos requeridos han sido proporcionados.", "Verificación Exitosa", MessageBoxButtons::OK, MessageBoxIcon::Information);
        }
        System::Void btn_RegistroHuella_Click(System::Object^ sender, System::EventArgs^ e) {
            // Abre el formulario para registrar la huella dactilar
            RegistroHuellaDactilarForm^ huellaForm = gcnew RegistroHuellaDactilarForm();
            huellaForm->ShowDialog();
        }
        System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
        }

        System::Void btn_CrearCuentaConductor_Click(System::Object^ sender, System::EventArgs^ e) {
            ServicioDriverForm^ servicedriverForm = gcnew ServicioDriverForm();
            this->Close();
            servicedriverForm->StartPosition = FormStartPosition::CenterScreen;
            servicedriverForm->TopMost = true;
            servicedriverForm->ShowDialog();
         }
    };
}


