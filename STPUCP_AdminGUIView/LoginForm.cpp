#include "pch.h"
#include "LoginForm.h"
#include "AdminMainForm.h"
#include "QuesoyForm.h"

System::Void STPUCPAdminGUIView::LoginForm::btnIngresar_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ password = txtContraseña->Text;
	int codigoPUCP = Int32::Parse(txtUsuario->Text);
	//String^ codigoPUCPStr = txtUsuario->Text;

	Usuario^ usuarios = STPUCPAdminController::controller::ValidarUsuario(codigoPUCP, password);
	if (String::IsNullOrWhiteSpace(password)) {
		MessageBox::Show("Falta completar el usuario o la contraseña", "Advertencia", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	if (usuarios != nullptr) {
		MessageBox::Show("Bienvenido" + usuarios->Nombre + "" + usuarios->ApellidoPaterno);
		AdminMainForm::user = usuarios;
		if (usuarios->GetType() == Administrador::typeid) {
			((AdminMainForm^)this->RefAdminMainForm)->EnablePermisoAdministrador();
		}	
		else if (usuarios->GetType() == Pasajero::typeid) {
			((AdminMainForm^)this->RefAdminMainForm)->EnablePermisoPasajero();
		}	
		else {
			((AdminMainForm^)this->RefAdminMainForm)->EnablePermisoConductor();
		}			
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