#include "STPUCPMainForm.h"

using namespace System;
using namespace STPUCPGUIAPP;

[STAThread]

int Main(array<String^>^ args) {
	STPUCPMainForm^ mainForm = gcnew STPUCPMainForm();
	Application::Run(mainForm);
	//Application::Run(mainForm);
	//Application::Run(gcnew Registro_Conductor());

	return 0;

}


	