#include "stdafx.h"
#include "RealmManagerForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace msclr::interop;

std::string WowDir = "";
std::string Fav1 = "";
std::string Fav2 = "";
std::string Fav3 = "";
std::string cliente = "";

void LoadConfig()
{
    int count = 0;
    std::string line;
    String^ dir = Environment::GetFolderPath( Environment::SpecialFolder::ApplicationData );
    dir += "\\" + PREF_FILENAME;
    std::fstream myfile (marshal_as<std::string>(dir));
    if (myfile && myfile.is_open())
    {
        while ( myfile.good() )
        {
            std::getline (myfile,line);
            if (count == 0)
                WowDir = line;
            else if (count == 1)
                Fav1 = line;
            else if (count == 2)
                Fav2 = line;
            else if (count == 3)
                Fav3 = line;
            else if (count == 4)
                cliente = line;

            ++count;
        }
        myfile.close();
    }
    else
    {
        std::ofstream myfilee (marshal_as<std::string>(dir));
        myfilee << "\n";
        myfilee << "\n";
        myfilee << "\n";
        myfilee << "\n";
        myfilee << "\n";
    }
}

bool SaveConfig()
{
    String^ dir = Environment::GetFolderPath( Environment::SpecialFolder::ApplicationData );
    dir += "\\" + PREF_FILENAME;
    std::fstream myfile (marshal_as<std::string>(dir));
    if (myfile.is_open())
    {
        myfile << WowDir << "\n";
        myfile << Fav1 << "\n";
        myfile << Fav2 << "\n";
        myfile << Fav3 << "\n";
        myfile << cliente;
        myfile.close();
    }
    else
    {
        std::cout << "No se pudo abrir el config.";
        return false;
    }
    return true;
}

[STAThread]
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd) 
{
    /* Cargamos el archivo de configuracion. */
    LoadConfig();

    /* Iniciamos el Form. */
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    RealmManager::RealmManagerForm form;
    Application::Run(%form);

    return 0;
}