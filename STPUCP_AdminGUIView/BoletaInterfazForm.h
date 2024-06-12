
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
            //LoadPromociones();
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

    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::Button^ button3;




    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::TextBox^ txtID;
    private: System::Windows::Forms::Button^ button4;
    private: System::Windows::Forms::Label^ label7;
    public: System::Windows::Forms::TextBox^ text_viajeid;
    private: System::Windows::Forms::TextBox^ textPrecio;
    private: System::Windows::Forms::Label^ label5;
    public: System::Windows::Forms::TextBox^ textPasajero;
    private: System::Windows::Forms::TextBox^ textdescuento;
    public:
    private: System::Windows::Forms::TextBox^ textPrecioActual;
    private:


    public:

    public:
    private:



    private:
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->txtID = (gcnew System::Windows::Forms::TextBox());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->text_viajeid = (gcnew System::Windows::Forms::TextBox());
            this->textPrecio = (gcnew System::Windows::Forms::TextBox());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->textPasajero = (gcnew System::Windows::Forms::TextBox());
            this->textdescuento = (gcnew System::Windows::Forms::TextBox());
            this->textPrecioActual = (gcnew System::Windows::Forms::TextBox());
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(83, 63);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(118, 16);
            this->label1->TabIndex = 0;
            this->label1->Text = L"Precio de servicio:";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(80, 101);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(118, 16);
            this->label2->TabIndex = 1;
            this->label2->Text = L"¿Usar Promoción\?";
            this->label2->Click += gcnew System::EventHandler(this, &BoletaInterfazForm::label2_Click);
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Location = System::Drawing::Point(80, 142);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(72, 16);
            this->label3->TabIndex = 2;
            this->label3->Text = L"Descuento";
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Location = System::Drawing::Point(80, 186);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(81, 16);
            this->label4->TabIndex = 3;
            this->label4->Text = L"Precio Final:";
            // 
            // button1
            // 
            this->button1->Location = System::Drawing::Point(213, 101);
            this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(189, 23);
            this->button1->TabIndex = 5;
            this->button1->Text = L"SI";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &BoletaInterfazForm::button1_Click);
            // 
            // button2
            // 
            this->button2->Location = System::Drawing::Point(408, 101);
            this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(199, 23);
            this->button2->TabIndex = 6;
            this->button2->Text = L"NO";
            this->button2->UseVisualStyleBackColor = true;
            this->button2->Click += gcnew System::EventHandler(this, &BoletaInterfazForm::button2_Click);
            // 
            // button3
            // 
            this->button3->Location = System::Drawing::Point(84, 266);
            this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(253, 39);
            this->button3->TabIndex = 7;
            this->button3->Text = L"Continuar";
            this->button3->UseVisualStyleBackColor = true;
            this->button3->Click += gcnew System::EventHandler(this, &BoletaInterfazForm::btn_Continuar_Click);
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Location = System::Drawing::Point(83, 25);
            this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(91, 16);
            this->label6->TabIndex = 12;
            this->label6->Text = L"Id de la Orden";
            // 
            // txtID
            // 
            this->txtID->Location = System::Drawing::Point(215, 20);
            this->txtID->Margin = System::Windows::Forms::Padding(4);
            this->txtID->Name = L"txtID";
            this->txtID->ReadOnly = true;
            this->txtID->Size = System::Drawing::Size(73, 22);
            this->txtID->TabIndex = 13;
            // 
            // button4
            // 
            this->button4->Location = System::Drawing::Point(355, 267);
            this->button4->Margin = System::Windows::Forms::Padding(4);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(251, 37);
            this->button4->TabIndex = 14;
            this->button4->Text = L"Cancelar";
            this->button4->UseVisualStyleBackColor = true;
            this->button4->Click += gcnew System::EventHandler(this, &BoletaInterfazForm::button4_Click);
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Location = System::Drawing::Point(331, 24);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(54, 16);
            this->label7->TabIndex = 15;
            this->label7->Text = L"Id_viaje";
            // 
            // text_viajeid
            // 
            this->text_viajeid->Location = System::Drawing::Point(392, 19);
            this->text_viajeid->Name = L"text_viajeid";
            this->text_viajeid->ReadOnly = true;
            this->text_viajeid->Size = System::Drawing::Size(100, 22);
            this->text_viajeid->TabIndex = 16;
            // 
            // textPrecio
            // 
            this->textPrecio->Location = System::Drawing::Point(215, 63);
            this->textPrecio->Name = L"textPrecio";
            this->textPrecio->ReadOnly = true;
            this->textPrecio->Size = System::Drawing::Size(392, 22);
            this->textPrecio->TabIndex = 17;
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Location = System::Drawing::Point(515, 25);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(98, 16);
            this->label5->TabIndex = 18;
            this->label5->Text = L"Id del Pasajero";
            // 
            // textPasajero
            // 
            this->textPasajero->Location = System::Drawing::Point(643, 19);
            this->textPasajero->Name = L"textPasajero";
            this->textPasajero->ReadOnly = true;
            this->textPasajero->Size = System::Drawing::Size(100, 22);
            this->textPasajero->TabIndex = 19;
            // 
            // textdescuento
            // 
            this->textdescuento->Location = System::Drawing::Point(215, 142);
            this->textdescuento->Name = L"textdescuento";
            this->textdescuento->ReadOnly = true;
            this->textdescuento->Size = System::Drawing::Size(391, 22);
            this->textdescuento->TabIndex = 20;
            // 
            // textPrecioActual
            // 
            this->textPrecioActual->Location = System::Drawing::Point(213, 186);
            this->textPrecioActual->Name = L"textPrecioActual";
            this->textPrecioActual->ReadOnly = true;
            this->textPrecioActual->Size = System::Drawing::Size(394, 22);
            this->textPrecioActual->TabIndex = 21;
            // 
            // BoletaInterfazForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(896, 422);
            this->Controls->Add(this->textPrecioActual);
            this->Controls->Add(this->textdescuento);
            this->Controls->Add(this->textPasajero);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->textPrecio);
            this->Controls->Add(this->text_viajeid);
            this->Controls->Add(this->label7);
            this->Controls->Add(this->button4);
            this->Controls->Add(this->txtID);
            this->Controls->Add(this->label6);
            this->Controls->Add(this->button3);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->Name = L"BoletaInterfazForm";
            this->Text = L"BoletaInterfazForm";
            this->Load += gcnew System::EventHandler(this, &BoletaInterfazForm::BoletaInterfazForm_Load);
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

    private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
    }

    private: System::Void btn_Continuar_Click(System::Object^ sender, System::EventArgs^ e) {
        VentanaPagoForm^ ventana = gcnew VentanaPagoForm();
        this->Close();
        ventana->TopMost = true;
       
        ventana->text_orden->Text = txtID->Text;
        ventana->text_viaje->Text = text_viajeid->Text;
        ventana->textPrecio->Text = textPrecioActual->Text;
        ventana->ShowDialog();
    }

    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
        Promocion^ promocion = controller::QueryPromotionsByUsuarioId(Convert::ToInt32(textPasajero->Text));


        Viaje^ viajecito = controller::QueryJourneysById(Convert::ToInt32(text_viajeid->Text));
        textPrecio->Text = "" + viajecito->PrecioViaje;
        if (promocion != nullptr) {
            double porcentaje_descuento = promocion->Porcentaje;
            double descuento = porcentaje_descuento * (viajecito->PrecioViaje) / 100;

            textdescuento->Text = "" + descuento;
            textPrecioActual->Text = "" + (viajecito->PrecioViaje - descuento);

        }
        // Maneja la lógica cuando el botón "SI" es presionado
        //comboBox2->Enabled = true;
        //comboBox3->Enabled = true;
       // LoadPromociones();
    }

    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
        Viaje^ viajecito = controller::QueryJourneysById(Convert::ToInt32(text_viajeid->Text));
        textPrecio->Text = "" + viajecito->PrecioViaje;
        textdescuento->Text = "" + 0;
        textPrecioActual->Text = "" + (viajecito->PrecioViaje);



        // Maneja la lógica cuando el botón "NO" es presionado
        //comboBox2->Items->Clear();
        //comboBox3->Items->Clear();
        //comboBox2->Enabled = false;
        //comboBox3->Enabled = false;
    }

    /*private: void LoadPromociones() {

        List<Promocion^>^ promociones = STPUCPAdminController::controller::QueryAllPromotions();

        comboBox2->Items->Clear();
        comboBox3->Items->Clear();

        for each (Promocion ^ promocion in promociones) {
            comboBox2->Items->Add(promocion->Porcentaje);
        }
        double porcentajeDescuento = Convert::ToDouble(comboBox2->SelectedItem);

        // Obtener el precio de servicio 

        

        double precioServicio = Convert::ToDouble(textPrecio->Text);

        // Calcular el precio final después del descuento
        double precioFinal = precioServicio * (1 - (porcentajeDescuento / 100));

        // Mostrar el precio final en comboBox3
        comboBox3->Text = precioFinal.ToString();
    }*/
    private: System::Void BoletaInterfazForm_Load(System::Object^ sender, System::EventArgs^ e) {

        Promocion^ promocion = controller::QueryPromotionsByUsuarioId(Convert::ToInt32(textPasajero->Text));
        

        Viaje^ viajecito = controller::QueryJourneysById(Convert::ToInt32(text_viajeid->Text));
        textPrecio->Text = "" + viajecito->PrecioViaje;
        if (promocion != nullptr) {
            double porcentaje_descuento = promocion->Porcentaje;
            double descuento = porcentaje_descuento * (viajecito->PrecioViaje) / 100;

            textdescuento->Text = "" + descuento;
            textPrecioActual->Text = "" + (viajecito->PrecioViaje - descuento);

        }
        else {
            textdescuento->Text = "" + 0;
            textPrecioActual->Text = "" + (viajecito->PrecioViaje);
        }
     

        
        txtID->Text = "" + (1 + controller::QueryAllOrders()->Count);
        txtID->ReadOnly = true;


       
    }
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
    this->Close();

}
};
}
