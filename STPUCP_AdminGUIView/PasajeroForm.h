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
    private: System::Windows::Forms::Label^ label1;
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
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();
            // 
            // button1
            // 
            this->button1->Location = System::Drawing::Point(11, 154);
            this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(206, 30);
            this->button1->TabIndex = 0;
            this->button1->Text = L"TERMINAR VIAJE";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &PasajeroForm::button1_Click);
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->BackColor = System::Drawing::Color::Yellow;
            this->label1->Location = System::Drawing::Point(53, 9);
            this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(103, 13);
            this->label1->TabIndex = 1;
            this->label1->Text = L"Disfruten de su viaje";
            // 
            // PasajeroForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(228, 195);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->button1);
            this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->Name = L"PasajeroForm";
            this->ShowIcon = false;
            this->Text = L"Comienza el viaje";
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
        Contexto^ contexto = STPUCP_Model::Contexto::ObtenerInstancia();
        int IdUsuario = contexto->ObtenerIdUsuario();

        Usuario^ nuevo_usuario = controller::QueryUsersById(IdUsuario * 10);
        nuevo_usuario->Id = IdUsuario * 10;
        nuevo_usuario->IdUltimoViaje = 0;
        nuevo_usuario->ApellidoPaterno = "a"; // Asumiendo que esto no es nulo
        nuevo_usuario->ApellidoMaterno = "a"; // Asumiendo que esto no es nulo
        nuevo_usuario->CodigoPUCP = IdUsuario * 10; // Asumiendo que esto no es nulo
        nuevo_usuario->NumeroTelefono = 1; // Asumiendo que esto no es nulo
        nuevo_usuario->Correo = "a"; // Asumiendo que esto no es nulo
        nuevo_usuario->Contraseña = "a"; // Asumiendo que esto no es nulo
        nuevo_usuario->Nombre = "b"; // Asumiendo que esto no es nulo
        nuevo_usuario->Rol = "Pasajero"; // Asumiendo que esto no es nulo
        nuevo_usuario->DNI = 1; // Asumiendo que esto no es nulo
        controller::UpdateUser(nuevo_usuario);

    }
    };
}

