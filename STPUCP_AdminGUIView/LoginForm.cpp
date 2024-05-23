#include "pch.h"
#include "LoginForm.h"
#include "AdminMainForm.h"

System::Void STPUCPAdminGUIView::LoginForm::btnIngresar_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ password = txtContraseña->Text;
	int codigoPUCP = Int32::Parse(txtUsuario->Text);

	Usuario^ usuarios = STPUCPAdminController::controller::ValidarUsuario(codigoPUCP, password);


	if (usuarios != nullptr) {
		MessageBox::Show("Bienvenido" + usuarios->Nombre + "" + usuarios->ApellidoPaterno);
		AdminMainForm::user = usuarios;
		this->Close();
	}
	else {
		MessageBox::Show("Usuario y contraseña incorrectos");
	}
}
/*
System::Void STPUCPAdminGUIView::LoginForm::LoginForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)
{
	if (AdminMainForm::user == nullptr) {
		Application::Exit();
	}
}
*/