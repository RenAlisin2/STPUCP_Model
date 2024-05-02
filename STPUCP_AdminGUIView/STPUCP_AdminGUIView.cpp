#include "pch.h"
#include "AdminMainForm.h"
using namespace System;
using namespace System::Windows::Forms;
int Main(array<System::String ^> ^args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    STPUCPAdminGUIView::AdminMainForm form;
    Application::Run(% form);
    return 0;
}
