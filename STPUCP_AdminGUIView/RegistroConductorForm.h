#pragma once
#include "ServicioDriverForm.h"
#include "RegistroForm.h"
#include "Contexto.h"
namespace STPUCPAdminGUIView {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace STPUCP_Model;

    public ref class RegistroConductorForm : public System::Windows::Forms::Form
    {
    public:
        RegistroConductorForm(void)
        {
            InitializeComponent();
        }

    protected:
        ~RegistroConductorForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private: System::Windows::Forms::Button^ button1;
    protected:

    private: System::Windows::Forms::Label^ label8;
    private: System::Windows::Forms::TextBox^ txtCantidadAsientos;

    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::TextBox^ txtColorCarro;
    private: System::Windows::Forms::TextBox^ txtPlacaCarro;
    private: System::Windows::Forms::TextBox^ txtModeloCarro;
    private: System::Windows::Forms::PictureBox^ pBConductor;
    private: System::Windows::Forms::PictureBox^ pBCarro;
    private: System::Windows::Forms::Button^ btnCarro;
    private: System::Windows::Forms::Button^ btnConductor;
    private: System::Windows::Forms::Button^ btnHuella;
    private: System::Windows::Forms::PictureBox^ pBHuellaDactilar;

    private:
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->txtCantidadAsientos = (gcnew System::Windows::Forms::TextBox());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->txtColorCarro = (gcnew System::Windows::Forms::TextBox());
            this->txtPlacaCarro = (gcnew System::Windows::Forms::TextBox());
            this->txtModeloCarro = (gcnew System::Windows::Forms::TextBox());
            this->pBConductor = (gcnew System::Windows::Forms::PictureBox());
            this->pBCarro = (gcnew System::Windows::Forms::PictureBox());
            this->btnCarro = (gcnew System::Windows::Forms::Button());
            this->btnConductor = (gcnew System::Windows::Forms::Button());
            this->btnHuella = (gcnew System::Windows::Forms::Button());
            this->pBHuellaDactilar = (gcnew System::Windows::Forms::PictureBox());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pBConductor))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pBCarro))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pBHuellaDactilar))->BeginInit();
            this->SuspendLayout();
            // 
            // button1
            // 
            this->button1->Location = System::Drawing::Point(76, 411);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(356, 57);
            this->button1->TabIndex = 37;
            this->button1->Text = L"Verificarme";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &RegistroConductorForm::button1_Click);
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->Location = System::Drawing::Point(204, 383);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(97, 13);
            this->label8->TabIndex = 33;
            this->label8->Text = L"¿Brevete en regla\?";
            // 
            // txtCantidadAsientos
            // 
            this->txtCantidadAsientos->Location = System::Drawing::Point(229, 147);
            this->txtCantidadAsientos->Name = L"txtCantidadAsientos";
            this->txtCantidadAsientos->Size = System::Drawing::Size(204, 20);
            this->txtCantidadAsientos->TabIndex = 30;
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Location = System::Drawing::Point(29, 150);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(194, 13);
            this->label4->TabIndex = 29;
            this->label4->Text = L"Ingrese la cantidad de asientos totales: ";
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Location = System::Drawing::Point(29, 124);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(126, 13);
            this->label6->TabIndex = 25;
            this->label6->Text = L"Ingrese el color del carro:";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Location = System::Drawing::Point(29, 72);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(137, 13);
            this->label3->TabIndex = 23;
            this->label3->Text = L"Ingrese el modelo del carro:";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(29, 98);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(129, 13);
            this->label2->TabIndex = 21;
            this->label2->Text = L"Ingrese la placa del carro:";
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(150, 24);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(199, 13);
            this->label1->TabIndex = 19;
            this->label1->Text = L"CREACIÓN DE CUENTA CONDUCTOR";
            // 
            // txtColorCarro
            // 
            this->txtColorCarro->Location = System::Drawing::Point(229, 121);
            this->txtColorCarro->Name = L"txtColorCarro";
            this->txtColorCarro->Size = System::Drawing::Size(204, 20);
            this->txtColorCarro->TabIndex = 38;
            // 
            // txtPlacaCarro
            // 
            this->txtPlacaCarro->Location = System::Drawing::Point(229, 95);
            this->txtPlacaCarro->Name = L"txtPlacaCarro";
            this->txtPlacaCarro->Size = System::Drawing::Size(204, 20);
            this->txtPlacaCarro->TabIndex = 39;
            // 
            // txtModeloCarro
            // 
            this->txtModeloCarro->Location = System::Drawing::Point(229, 69);
            this->txtModeloCarro->Name = L"txtModeloCarro";
            this->txtModeloCarro->Size = System::Drawing::Size(204, 20);
            this->txtModeloCarro->TabIndex = 40;
            // 
            // pBConductor
            // 
            this->pBConductor->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
            this->pBConductor->Location = System::Drawing::Point(32, 195);
            this->pBConductor->Name = L"pBConductor";
            this->pBConductor->Size = System::Drawing::Size(110, 114);
            this->pBConductor->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pBConductor->TabIndex = 41;
            this->pBConductor->TabStop = false;
            // 
            // pBCarro
            // 
            this->pBCarro->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
            this->pBCarro->Location = System::Drawing::Point(197, 195);
            this->pBCarro->Name = L"pBCarro";
            this->pBCarro->Size = System::Drawing::Size(110, 114);
            this->pBCarro->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pBCarro->TabIndex = 42;
            this->pBCarro->TabStop = false;
            // 
            // btnCarro
            // 
            this->btnCarro->Location = System::Drawing::Point(197, 328);
            this->btnCarro->Name = L"btnCarro";
            this->btnCarro->Size = System::Drawing::Size(110, 23);
            this->btnCarro->TabIndex = 43;
            this->btnCarro->Text = L"Foto del carro";
            this->btnCarro->UseVisualStyleBackColor = true;
            this->btnCarro->Click += gcnew System::EventHandler(this, &RegistroConductorForm::btnCarro_Click);
            // 
            // btnConductor
            // 
            this->btnConductor->Location = System::Drawing::Point(32, 328);
            this->btnConductor->Name = L"btnConductor";
            this->btnConductor->Size = System::Drawing::Size(110, 23);
            this->btnConductor->TabIndex = 44;
            this->btnConductor->Text = L"Foto del conductor";
            this->btnConductor->UseVisualStyleBackColor = true;
            this->btnConductor->Click += gcnew System::EventHandler(this, &RegistroConductorForm::btnConductor_Click);
            // 
            // btnHuella
            // 
            this->btnHuella->Location = System::Drawing::Point(362, 328);
            this->btnHuella->Name = L"btnHuella";
            this->btnHuella->Size = System::Drawing::Size(110, 23);
            this->btnHuella->TabIndex = 46;
            this->btnHuella->Text = L"Huella dactilar";
            this->btnHuella->UseVisualStyleBackColor = true;
            // 
            // pBHuellaDactilar
            // 
            this->pBHuellaDactilar->Location = System::Drawing::Point(362, 195);
            this->pBHuellaDactilar->Name = L"pBHuellaDactilar";
            this->pBHuellaDactilar->Size = System::Drawing::Size(110, 114);
            this->pBHuellaDactilar->TabIndex = 45;
            this->pBHuellaDactilar->TabStop = false;
            // 
            // RegistroConductorForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(512, 503);
            this->Controls->Add(this->btnHuella);
            this->Controls->Add(this->pBHuellaDactilar);
            this->Controls->Add(this->btnConductor);
            this->Controls->Add(this->btnCarro);
            this->Controls->Add(this->pBCarro);
            this->Controls->Add(this->pBConductor);
            this->Controls->Add(this->txtModeloCarro);
            this->Controls->Add(this->txtPlacaCarro);
            this->Controls->Add(this->txtColorCarro);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->label8);
            this->Controls->Add(this->txtCantidadAsientos);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->label6);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Name = L"RegistroConductorForm";
            this->Text = L"RegistroConductorForm";
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pBConductor))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pBCarro))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pBHuellaDactilar))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();
        }
#pragma endregion
        //.

    public: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
        // Verificar si hay un usuario registrado y cambiar su rol
        if (usuario_registrado != nullptr) {
            Conductor^ conductor = gcnew Conductor();

            // Copiar datos del usuario registrado al conductor
            conductor->ApellidoMaterno = usuario_registrado->ApellidoMaterno;
            conductor->ApellidoPaterno = usuario_registrado->ApellidoPaterno;
            conductor->CodigoPUCP = usuario_registrado->CodigoPUCP;
            conductor->NumeroTelefono = usuario_registrado->NumeroTelefono;
            conductor->Correo = usuario_registrado->Correo;
            conductor->Contraseña = usuario_registrado->Contraseña;
            conductor->Nombre = usuario_registrado->Nombre;
            conductor->DNI = usuario_registrado->DNI;

            // Datos específicos del conductor
            conductor->ModeloCarro = txtModeloCarro->Text;
            conductor->PlacaCarro = txtPlacaCarro->Text;
            conductor->ColorCarro = txtColorCarro->Text;
            conductor->CantAsientos = Int32::Parse(txtCantidadAsientos->Text);
            conductor->Rol = "Conductor";

            if (pBConductor != nullptr && pBConductor->Image != nullptr) {
                System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
                pBConductor->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
                conductor->FotoConductor = ms->ToArray();
            }
            if (pBCarro != nullptr && pBCarro->Image != nullptr) {
                System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
                pBCarro->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
                conductor->FotoCarro = ms->ToArray();
            }

            if ((txtModeloCarro->Text != "") && (txtPlacaCarro->Text != "") && (txtColorCarro->Text != "")) {
                STPUCPAdminController::controller::AddUser(conductor);
                MessageBox::Show("Conductor registrado exitosamente");
                this->Close();
            }
            else {
                MessageBox::Show("Llenar todos los espacios", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }
        else {
            MessageBox::Show("No hay usuario registrado para convertir a conductor", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }

private: System::Void btnConductor_Click(System::Object^ sender, System::EventArgs^ e) {
    OpenFileDialog^ ofd = gcnew OpenFileDialog();
    ofd->Filter = "Image Files (*.jpg;*.jpeg;)|*.jpg;*.jpeg;";
    if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
        pBConductor->Image = gcnew Bitmap(ofd->FileName);
    }
}
private: System::Void btnCarro_Click(System::Object^ sender, System::EventArgs^ e) {
    OpenFileDialog^ ofd = gcnew OpenFileDialog();
    ofd->Filter = "Image Files (*.jpg;*.jpeg;)|*.jpg;*.jpeg;";
    if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
        pBCarro->Image = gcnew Bitmap(ofd->FileName);
    }
}
};
}