#include "pch.h"
#include "AdminMainForm.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace STPUCP_Model;
using namespace STPUCPAdminController;

int Main(array<System::String ^> ^args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    
    // HARDCODE//
    Usuario^ Admin = gcnew Administrador();
    Admin->CodigoPUCP = 1;
    Admin->Nombre = "Laurel";
    Admin->ApellidoPaterno = "Bravo";
    Admin->ApellidoMaterno = "Admin";
    Admin->Contraseña = "lpoo";
    Admin->Rol = "Administrador";
    Admin->DNI = 65401234;
    Admin->NumeroTelefono = 910910910;
    Admin->Correo = "Administrador@pucp.edu.pe";

    STPUCPAdminController::controller::AddUser(Admin);
    

    STPUCPAdminGUIView::AdminMainForm form;
    Application::Run(% form);
    return 0;
}
