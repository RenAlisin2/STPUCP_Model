
#include "VentanaPagoForm.h"
#include "PromocionesForm.h"
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
    //using namespace STPUCPPersistance;

    public ref class BoletaInterfazForm : public System::Windows::Forms::Form
    {
    public:
        BoletaInterfazForm(void)
        {
            InitializeComponent();
            LoadPromociones();
        }

    protected:
        ~BoletaInterfazForm()
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
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::Button^ button3;
    private: System::Windows::Forms::ComboBox^ comboBox1;
    private: System::Windows::Forms::ComboBox^ comboBox2;
    private: System::Windows::Forms::ComboBox^ comboBox3;
    private: System::Windows::Forms::ComboBox^ comboBox4;

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
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
            this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
            this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
            this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(80, 48);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(118, 16);
            this->label1->TabIndex = 0;
            this->label1->Text = L"Precio de servicio:";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(80, 85);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(118, 16);
            this->label2->TabIndex = 1;
            this->label2->Text = L"¿Usar Promoción\?";
            this->label2->Click += gcnew System::EventHandler(this, &BoletaInterfazForm::label2_Click);
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Location = System::Drawing::Point(80, 125);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(72, 16);
            this->label3->TabIndex = 2;
            this->label3->Text = L"Descuento";
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Location = System::Drawing::Point(80, 173);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(81, 16);
            this->label4->TabIndex = 3;
            this->label4->Text = L"Precio Final:";
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Location = System::Drawing::Point(80, 222);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(111, 16);
            this->label5->TabIndex = 4;
            this->label5->Text = L"Hora de la orden:";
            // 
            // button1
            // 
            this->button1->Location = System::Drawing::Point(213, 82);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(75, 23);
            this->button1->TabIndex = 5;
            this->button1->Text = L"SI";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &BoletaInterfazForm::button1_Click);
            // 
            // button2
            // 
            this->button2->Location = System::Drawing::Point(304, 82);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(75, 23);
            this->button2->TabIndex = 6;
            this->button2->Text = L"NO";
            this->button2->UseVisualStyleBackColor = true;
            this->button2->Click += gcnew System::EventHandler(this, &BoletaInterfazForm::button2_Click);
            // 
            // button3
            // 
            this->button3->Location = System::Drawing::Point(246, 278);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(240, 23);
            this->button3->TabIndex = 7;
            this->button3->Text = L"CONTINUAR";
            this->button3->UseVisualStyleBackColor = true;
            this->button3->Click += gcnew System::EventHandler(this, &BoletaInterfazForm::btn_Continuar_Click);
            // 
            // comboBox1
            // 
            this->comboBox1->FormattingEnabled = true;
            this->comboBox1->Location = System::Drawing::Point(213, 45);
            this->comboBox1->Name = L"comboBox1";
            this->comboBox1->Size = System::Drawing::Size(122, 24);
            this->comboBox1->TabIndex = 8;
            // 
            // comboBox2
            // 
            this->comboBox2->FormattingEnabled = true;
            this->comboBox2->Location = System::Drawing::Point(176, 122);
            this->comboBox2->Name = L"comboBox2";
            this->comboBox2->Size = System::Drawing::Size(122, 24);
            this->comboBox2->TabIndex = 9;
            // 
            // comboBox3
            // 
            this->comboBox3->FormattingEnabled = true;
            this->comboBox3->Location = System::Drawing::Point(176, 173);
            this->comboBox3->Name = L"comboBox3";
            this->comboBox3->Size = System::Drawing::Size(122, 24);
            this->comboBox3->TabIndex = 10;
            // 
            // comboBox4
            // 
            this->comboBox4->FormattingEnabled = true;
            this->comboBox4->Location = System::Drawing::Point(199, 219);
            this->comboBox4->Name = L"comboBox4";
            this->comboBox4->Size = System::Drawing::Size(122, 24);
            this->comboBox4->TabIndex = 11;
            // 
            // BoletaInterfazForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(684, 329);
            this->Controls->Add(this->comboBox4);
            this->Controls->Add(this->comboBox3);
            this->Controls->Add(this->comboBox2);
            this->Controls->Add(this->comboBox1);
            this->Controls->Add(this->button3);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Name = L"BoletaInterfazForm";
            this->Text = L"BoletaInterfazForm";
            this->ResumeLayout(false);
            this->PerformLayout();
        }
#pragma endregion

    private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
    }

    private: System::Void btn_Continuar_Click(System::Object^ sender, System::EventArgs^ e) {
        STPUCPAdminGUIView::VentanaPagoForm^ ventana = gcnew STPUCPAdminGUIView::VentanaPagoForm();
        this->Close();
        ventana->TopMost = true;
        ventana->ShowDialog();
    }

    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
        // Maneja la lógica cuando el botón "SI" es presionado
        comboBox2->Enabled = true;
        comboBox3->Enabled = true;
        LoadPromociones();
    }

    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
        // Maneja la lógica cuando el botón "NO" es presionado
        comboBox2->Items->Clear();
        comboBox3->Items->Clear();
        comboBox2->Enabled = false;
        comboBox3->Enabled = false;
    }

    private: void LoadPromociones() {

        List<Promocion^>^ promociones = STPUCPAdminController::controller::QueryAllPromotions();

        comboBox2->Items->Clear();
        comboBox3->Items->Clear();

        for each (Promocion ^ promocion in promociones) {
            comboBox2->Items->Add(promocion->Porcentaje);
        }
        double porcentajeDescuento = Convert::ToDouble(comboBox2->SelectedItem);

        // Obtener el precio de servicio 
        double precioServicio = Convert::ToDouble(comboBox1->SelectedItem);

        // Calcular el precio final después del descuento
        double precioFinal = precioServicio * (1 - (porcentajeDescuento / 100));

        // Mostrar el precio final en comboBox3
        comboBox3->Text = precioFinal.ToString();
    }
    };
}
