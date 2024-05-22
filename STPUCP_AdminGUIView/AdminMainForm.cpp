#include "pch.h"
#include "AdminMainForm.h"

using namespace System;
using namespace STPUCPAdminGUIView;

[STAThreadAttribute]
int main(array<String^>^ args)
{
    AdminMainForm^ mainForm = gcnew AdminMainForm();
    Application::Run(mainForm);
    return 0;
}