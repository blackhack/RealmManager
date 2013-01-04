#include "stdafx.h"
#include "FavoritesForm.h"

extern std::string Fav1;
extern std::string Fav2;
extern std::string Fav3;

bool SaveConfig();

System::Void RealmManager::FavoritesForm::FavoritesForm_Load(System::Object^ sender, System::EventArgs^ e)
{
    Fav1Text->Text = gcnew String(Fav1.c_str());
    Fav2Text->Text = gcnew String(Fav2.c_str());
    Fav3Text->Text = gcnew String(Fav3.c_str());
}


System::Void RealmManager::FavoritesForm::SaveFavButton_Click(System::Object^ sender, System::EventArgs^ e)
{
    Fav1 = msclr::interop::marshal_as<std::string>(Fav1Text->Text);
    Fav2 = msclr::interop::marshal_as<std::string>(Fav2Text->Text);
    Fav3 = msclr::interop::marshal_as<std::string>(Fav3Text->Text);

    if (!SaveConfig())
        MessageBox::Show("No se pudo guardar, verifique que exista el archivo realmchanger.conf.");
    else
        MessageBox::Show("Favoritos guardados correctamente.");
}

System::Void RealmManager::FavoritesForm::ReturnButton_Click(System::Object^ sender, System::EventArgs^ e)
{
    Close();
}
