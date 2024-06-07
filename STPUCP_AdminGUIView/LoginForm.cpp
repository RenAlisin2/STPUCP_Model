#include "pch.h"
#include "LoginForm.h"
#include "AdminMainForm.h"
#include "QuesoyForm.h"

System::Void STPUCPAdminGUIView::LoginForm::btnIngresar_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ password = txtContraseña->Text;
	int codigoPUCP;
	if (String::IsNullOrWhiteSpace(txtUsuario->Text)){
		codigoPUCP = 0;
	}else
		codigoPUCP = Int32::Parse(txtUsuario->Text);

	Usuario^ usuarios = STPUCPAdminController::controller::ValidarUsuario(codigoPUCP, password);
	if (String::IsNullOrWhiteSpace(password) || codigoPUCP == 0) {
		MessageBox::Show("Falta completar el usuario o la contraseña", "Advertencia", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	if (usuarios != nullptr) {
		MessageBox::Show("Bienvenido " + usuarios->Nombre + " " + usuarios->ApellidoPaterno);
		AdminMainForm::user = usuarios;
		if (dynamic_cast<Administrador^>(usuarios) != nullptr) {
			((AdminMainForm^)this->RefAdminMainForm)->EnablePermisoAdministrador();
		}
		else if (dynamic_cast<Pasajero^>(usuarios) != nullptr) {
			((AdminMainForm^)this->RefAdminMainForm)->EnablePermisoPasajero();
		}
		else if (dynamic_cast<Conductor^>(usuarios) != nullptr) {
			((AdminMainForm^)this->RefAdminMainForm)->EnablePermisoConductor();
		}
		this->Close();
	}
	else {
		MessageBox::Show("Usuario y contraseña incorrectos");
	}

}


