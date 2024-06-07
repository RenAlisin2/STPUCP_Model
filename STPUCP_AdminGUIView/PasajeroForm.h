#include "PasajeroRutaForm.h"

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
    /// Resumen de PasajeroForm
    /// </summary>
    public ref class PasajeroForm : public System::Windows::Forms::Form
    {
    public:
        PasajeroForm(void)
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
        ~PasajeroForm()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::Button^ button1;
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
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->SuspendLayout();
            // 
            // button1
            // 
            this->button1->Location = System::Drawing::Point(163, 71);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(298, 110);
            this->button1->TabIndex = 0;
            this->button1->Text = L"Continue con su eleccion";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &PasajeroForm::button1_Click);
            // 
            // PasajeroForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(625, 278);
            this->Controls->Add(this->button1);
            this->Name = L"PasajeroForm";
            this->Text = L"ELIGE TU DESTINO";
            this->ResumeLayout(false);

        }
#pragma endregion

    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
        PasajeroRutaForm^ pasajeroRutaForm = gcnew PasajeroRutaForm();
        pasajeroRutaForm->ShowDialog(); // Open the new form as a dialog
    }
    };
}

