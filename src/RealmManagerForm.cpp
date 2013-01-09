#include "stdafx.h"
#include "RealmManagerForm.h"
#include "FavoritesForm.h"

extern bool InRunning;
extern std::string WowDir;
extern std::string Fav1;
extern std::string Fav2;
extern std::string Fav3;
extern std::string cliente;

bool SaveConfig();

System::Void RealmManager::RealmManagerForm::OpenRealmlist()
{
    if (WowDir != "" && cliente != "")
    {
        std::string line;
        std::string dir = WowDir + "\\" + "Data" + "\\" + cliente + "\\" + "realmlist.wtf";
        std::ifstream myfile (dir);
        if (myfile.is_open())
        {
            if ( myfile.good())
            {
                std::getline (myfile, line);
                CurrentRealmText->Text = gcnew String(line.c_str());
            }
            myfile.close();
        }
    }
}

System::Void RealmManager::RealmManagerForm::SaveRealmlist()
{
    if (WowDir != "" && cliente != "")
    {
        std::string dir = WowDir + "\\" + "Data" + "\\" + cliente + "\\" + "realmlist.wtf";
        std::ofstream myfile (dir);
        if (myfile.is_open())
        {
            myfile << msclr::interop::marshal_as<std::string>(NewRealmText->Text);
            myfile.close();
        }
        else MessageBox::Show("No se pudo guardar el realmlist.");
    }
}

System::Void RealmManager::RealmManagerForm::RealmManagerForm_Load(System::Object^ sender, System::EventArgs^ e)
{
    if (WowDir != "")
        Dir_Label->Text = gcnew String(WowDir.c_str());
    if (cliente != "")
        clientBox->Text = gcnew String(cliente.c_str());

    OpenRealmlist();
}

System::Void RealmManager::RealmManagerForm::DirSelect_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (Dialog_Dir_Select->ShowDialog() == System::Windows::Forms::DialogResult::OK)
    {
        WowDir = msclr::interop::marshal_as<std::string>(Dialog_Dir_Select->SelectedPath);
        Dir_Label->Text = gcnew String(WowDir.c_str());
        OpenRealmlist();
        if (!SaveConfig())
            MessageBox::Show("No se pudo guardar la propiedad, verifique que exista el archivo " + PREF_FILENAME);
    }
}

System::Void RealmManager::RealmManagerForm::ChangeRealmButton_Click(System::Object^ sender, System::EventArgs^ e)
{
    SaveRealmlist();
}

System::Void RealmManager::RealmManagerForm::clientBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
    cliente = msclr::interop::marshal_as<std::string>(clientBox->Text);
    OpenRealmlist();
    if (!SaveConfig())
        MessageBox::Show("No se pudo guardar la propiedad, verifique que exista el archivo " + PREF_FILENAME);
}

System::Void RealmManager::RealmManagerForm::ExitButton_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->Close();
}

System::Void RealmManager::RealmManagerForm::FavFormButton_Click(System::Object^ sender, System::EventArgs^ e)
{
    RealmManager::FavoritesForm form2;
    form2.ShowDialog();
}

System::Void RealmManager::RealmManagerForm::FavButton1_Click(System::Object^ sender, System::EventArgs^ e)
{
    NewRealmText->Text = gcnew String(Fav1.c_str());
    SaveRealmlist();
}

System::Void RealmManager::RealmManagerForm::FavButton2_Click(System::Object^ sender, System::EventArgs^ e)
{
    NewRealmText->Text = gcnew String(Fav2.c_str());
    SaveRealmlist();
}

System::Void RealmManager::RealmManagerForm::FavButton3_Click(System::Object^ sender, System::EventArgs^ e)
{
    NewRealmText->Text = gcnew String(Fav3.c_str());
    SaveRealmlist();
}

System::Void RealmManager::RealmManagerForm::OpenWow_Click(System::Object^ sender, System::EventArgs^ e)
{
    std::string dir = WowDir + "\\" + "wow.exe";
    if (WinExec(dir.c_str(), SW_SHOWNORMAL) > 31)
        this->Close();
    else
        MessageBox::Show("No se pudo abrir wow.");
}

System::Void RealmManager::RealmManagerForm::UnInstallButton_Click(System::Object^ sender, System::EventArgs^ e)
{
    UnInstallButton->Visible = false;
    YesButton->Visible = true;
    NoButton->Visible = true;
    MessageBox::Show("Esta seguro de que desea desinstalar el programa?");
}

System::Void RealmManager::RealmManagerForm::YesButton_Click(System::Object^ sender, System::EventArgs^ e)
{
    String^ dir = Environment::GetFolderPath( Environment::SpecialFolder::ApplicationData );
    dir += "\\" + PREF_FILENAME;

    if(remove(msclr::interop::marshal_as<std::string>(dir).c_str()) != 0)
        MessageBox::Show("Error borrando el archivo de configuracion.");
    else
    {
        MessageBox::Show("Borrado el archivo de configuracion!, elimina el ejecutable y no quedaran rastros del programa en tu pc...");
        this->Close();
    }
}

System::Void RealmManager::RealmManagerForm::NoButton_Click(System::Object^ sender, System::EventArgs^ e)
{
    UnInstallButton->Visible = true;
    YesButton->Visible = false;
    NoButton->Visible = false;
}

System::Void RealmManager::RealmManagerForm::UpdateTimer_Tick(System::Object^ sender, System::EventArgs^ e)
{
    OpenRealmlist();
}

System::Void RealmManager::RealmManagerForm::cache_del_button_Click(System::Object^ sender, System::EventArgs^ e)
{
    std::string dir = WowDir + "\\" + "Cache";
    String^ Str_dir = gcnew String(dir.c_str());

    if (System::IO::Directory::Exists(Str_dir))
    {
        System::IO::Directory::Delete(Str_dir, true);
        MessageBox::Show("Se a borrado la carpeta Cache.");
    }
    else
        MessageBox::Show("No existe la carpeta Cache, seguramente ya fue borrada.");
}
