#include "STPUCPMainForm.h"
using namespace System;;
using namespace STPUCPGUIAPP;
int Main(array<String^>^ args) {

	STPUCPMainForm^ mainForm = gcnew STPUCPMainForm();
	Application::Run(mainForm);
	return 0;
}