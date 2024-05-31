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

    
    //HARDCODE//
    //Administrador^ usuario1 = gcnew Administrador(1, "Hinojosa", "Gonzales", 20212123, 1209382, "a2021@pucp.edu.pe", "lpoo", "marco","Administrador", 2, 2);
    //Pasajero^ usuario2 = gcnew Pasajero(2, "tumbalobos", "kevin", 231242242, 2424242, "a2133@pucp.edu.pe", "lpoo", "kevin","Pasajero", 0, 3, false, 12, "se durmio");
    //Usuario^ usuario3 = gcnew Conductor(3, "baldeon", "medina", 202, 1282, "a2021@p.edu.pe", "lpoo", "marco", "Conductor", "", "", "rojo", 2, "", "", 702231, true, "", 1.2, 2, 2, false);

    //STPUCPAdminController::controller::AddUser(usuario1);
    //STPUCPAdminController::controller::AddUser(usuario2);
    //STPUCPAdminController::controller::AddUser(usuario3);
    
    //Usuario ^ us = STPUCPAdminController::controller::ValidarUsuario(231242242, "lpoo");

    STPUCPAdminGUIView::AdminMainForm form;
    Application::Run(% form);
    return 0;
}
