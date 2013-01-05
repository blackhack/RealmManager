#pragma once

namespace RealmManager {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de RealmManagerForm
	/// </summary>
	public ref class RealmManagerForm : public System::Windows::Forms::Form
	{
	public:
		RealmManagerForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~RealmManagerForm()
		{
			if (components)
			{
				delete components;
			}
		}
    private: System::Windows::Forms::Button^  DirSelect;
    private: System::Windows::Forms::FolderBrowserDialog^  Dialog_Dir_Select;
    private: System::Windows::Forms::TextBox^  CurrentRealmText;
    private: System::Windows::Forms::TextBox^  NewRealmText;
    private: System::Windows::Forms::Label^  Dir_Label;
    private: System::Windows::Forms::ComboBox^  clientBox;
    private: System::Windows::Forms::Label^  RealmActual_Indicator;
    private: System::Windows::Forms::Label^  RealmNew_Indicator;
    private: System::Windows::Forms::Button^  ChangeRealmButton;
    private: System::Windows::Forms::Button^  ExitButton;
    private: System::Windows::Forms::Button^  FavButton1;
    private: System::Windows::Forms::Button^  FavButton2;
    private: System::Windows::Forms::Button^  FavButton3;
    private: System::Windows::Forms::Button^  FavFormButton;
    private: System::Windows::Forms::Button^  OpenWow;
    private: System::Windows::Forms::Button^  UnInstallButton;
    private: System::Windows::Forms::Button^  YesButton;
    private: System::Windows::Forms::Button^  NoButton;
    private: System::Windows::Forms::Timer^  UpdateTimer;
    private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Variable del diseñador requerida.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido del método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
            this->components = (gcnew System::ComponentModel::Container());
            this->DirSelect = (gcnew System::Windows::Forms::Button());
            this->Dialog_Dir_Select = (gcnew System::Windows::Forms::FolderBrowserDialog());
            this->CurrentRealmText = (gcnew System::Windows::Forms::TextBox());
            this->NewRealmText = (gcnew System::Windows::Forms::TextBox());
            this->Dir_Label = (gcnew System::Windows::Forms::Label());
            this->clientBox = (gcnew System::Windows::Forms::ComboBox());
            this->RealmActual_Indicator = (gcnew System::Windows::Forms::Label());
            this->RealmNew_Indicator = (gcnew System::Windows::Forms::Label());
            this->ChangeRealmButton = (gcnew System::Windows::Forms::Button());
            this->ExitButton = (gcnew System::Windows::Forms::Button());
            this->FavButton1 = (gcnew System::Windows::Forms::Button());
            this->FavButton2 = (gcnew System::Windows::Forms::Button());
            this->FavButton3 = (gcnew System::Windows::Forms::Button());
            this->FavFormButton = (gcnew System::Windows::Forms::Button());
            this->OpenWow = (gcnew System::Windows::Forms::Button());
            this->UnInstallButton = (gcnew System::Windows::Forms::Button());
            this->YesButton = (gcnew System::Windows::Forms::Button());
            this->NoButton = (gcnew System::Windows::Forms::Button());
            this->UpdateTimer = (gcnew System::Windows::Forms::Timer(this->components));
            this->SuspendLayout();
            // 
            // DirSelect
            // 
            this->DirSelect->Location = System::Drawing::Point(12, 12);
            this->DirSelect->Name = L"DirSelect";
            this->DirSelect->Size = System::Drawing::Size(174, 23);
            this->DirSelect->TabIndex = 0;
            this->DirSelect->Text = L"Seleccionar directorio de WoW...";
            this->DirSelect->UseVisualStyleBackColor = true;
            this->DirSelect->Click += gcnew System::EventHandler(this, &RealmManagerForm::DirSelect_Click);
            // 
            // CurrentRealmText
            // 
            this->CurrentRealmText->Location = System::Drawing::Point(12, 84);
            this->CurrentRealmText->Name = L"CurrentRealmText";
            this->CurrentRealmText->ReadOnly = true;
            this->CurrentRealmText->Size = System::Drawing::Size(378, 20);
            this->CurrentRealmText->TabIndex = 1;
            // 
            // NewRealmText
            // 
            this->NewRealmText->Location = System::Drawing::Point(12, 123);
            this->NewRealmText->Name = L"NewRealmText";
            this->NewRealmText->Size = System::Drawing::Size(378, 20);
            this->NewRealmText->TabIndex = 2;
            // 
            // Dir_Label
            // 
            this->Dir_Label->AutoSize = true;
            this->Dir_Label->Location = System::Drawing::Point(12, 38);
            this->Dir_Label->Name = L"Dir_Label";
            this->Dir_Label->Size = System::Drawing::Size(0, 13);
            this->Dir_Label->TabIndex = 3;
            // 
            // clientBox
            // 
            this->clientBox->FormattingEnabled = true;
            this->clientBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"esES", L"esMX", L"enUS"});
            this->clientBox->Location = System::Drawing::Point(217, 12);
            this->clientBox->Name = L"clientBox";
            this->clientBox->Size = System::Drawing::Size(119, 21);
            this->clientBox->TabIndex = 4;
            this->clientBox->SelectedIndexChanged += gcnew System::EventHandler(this, &RealmManagerForm::clientBox_SelectedIndexChanged);
            // 
            // RealmActual_Indicator
            // 
            this->RealmActual_Indicator->AutoSize = true;
            this->RealmActual_Indicator->Location = System::Drawing::Point(12, 68);
            this->RealmActual_Indicator->Name = L"RealmActual_Indicator";
            this->RealmActual_Indicator->Size = System::Drawing::Size(85, 13);
            this->RealmActual_Indicator->TabIndex = 5;
            this->RealmActual_Indicator->Text = L"Realmlist Actual:";
            // 
            // RealmNew_Indicator
            // 
            this->RealmNew_Indicator->AutoSize = true;
            this->RealmNew_Indicator->Location = System::Drawing::Point(12, 107);
            this->RealmNew_Indicator->Name = L"RealmNew_Indicator";
            this->RealmNew_Indicator->Size = System::Drawing::Size(87, 13);
            this->RealmNew_Indicator->TabIndex = 6;
            this->RealmNew_Indicator->Text = L"Nuevo Realmlist:";
            // 
            // ChangeRealmButton
            // 
            this->ChangeRealmButton->Location = System::Drawing::Point(12, 149);
            this->ChangeRealmButton->Name = L"ChangeRealmButton";
            this->ChangeRealmButton->Size = System::Drawing::Size(102, 23);
            this->ChangeRealmButton->TabIndex = 7;
            this->ChangeRealmButton->Text = L"Cambiar Realmlist.";
            this->ChangeRealmButton->UseVisualStyleBackColor = true;
            this->ChangeRealmButton->Click += gcnew System::EventHandler(this, &RealmManagerForm::ChangeRealmButton_Click);
            // 
            // ExitButton
            // 
            this->ExitButton->Location = System::Drawing::Point(12, 226);
            this->ExitButton->Name = L"ExitButton";
            this->ExitButton->Size = System::Drawing::Size(102, 23);
            this->ExitButton->TabIndex = 8;
            this->ExitButton->Text = L"Salir.";
            this->ExitButton->UseVisualStyleBackColor = true;
            this->ExitButton->Click += gcnew System::EventHandler(this, &RealmManagerForm::ExitButton_Click);
            // 
            // FavButton1
            // 
            this->FavButton1->Location = System::Drawing::Point(134, 149);
            this->FavButton1->Name = L"FavButton1";
            this->FavButton1->Size = System::Drawing::Size(75, 23);
            this->FavButton1->TabIndex = 9;
            this->FavButton1->Text = L"Favorito 1.";
            this->FavButton1->UseVisualStyleBackColor = true;
            this->FavButton1->Click += gcnew System::EventHandler(this, &RealmManagerForm::FavButton1_Click);
            // 
            // FavButton2
            // 
            this->FavButton2->Location = System::Drawing::Point(215, 149);
            this->FavButton2->Name = L"FavButton2";
            this->FavButton2->Size = System::Drawing::Size(75, 23);
            this->FavButton2->TabIndex = 10;
            this->FavButton2->Text = L"Favorito 2.";
            this->FavButton2->UseVisualStyleBackColor = true;
            this->FavButton2->Click += gcnew System::EventHandler(this, &RealmManagerForm::FavButton2_Click);
            // 
            // FavButton3
            // 
            this->FavButton3->Location = System::Drawing::Point(296, 149);
            this->FavButton3->Name = L"FavButton3";
            this->FavButton3->Size = System::Drawing::Size(75, 23);
            this->FavButton3->TabIndex = 11;
            this->FavButton3->Text = L"Favorito 3.";
            this->FavButton3->UseVisualStyleBackColor = true;
            this->FavButton3->Click += gcnew System::EventHandler(this, &RealmManagerForm::FavButton3_Click);
            // 
            // FavFormButton
            // 
            this->FavFormButton->Location = System::Drawing::Point(189, 178);
            this->FavFormButton->Name = L"FavFormButton";
            this->FavFormButton->Size = System::Drawing::Size(119, 23);
            this->FavFormButton->TabIndex = 12;
            this->FavFormButton->Text = L"Modificar Favoritos.";
            this->FavFormButton->UseVisualStyleBackColor = true;
            this->FavFormButton->Click += gcnew System::EventHandler(this, &RealmManagerForm::FavFormButton_Click);
            // 
            // OpenWow
            // 
            this->OpenWow->Location = System::Drawing::Point(134, 226);
            this->OpenWow->Name = L"OpenWow";
            this->OpenWow->Size = System::Drawing::Size(119, 23);
            this->OpenWow->TabIndex = 13;
            this->OpenWow->Text = L"Abrir WoW.";
            this->OpenWow->UseVisualStyleBackColor = true;
            this->OpenWow->Click += gcnew System::EventHandler(this, &RealmManagerForm::OpenWow_Click);
            // 
            // UnInstallButton
            // 
            this->UnInstallButton->Location = System::Drawing::Point(311, 226);
            this->UnInstallButton->Name = L"UnInstallButton";
            this->UnInstallButton->Size = System::Drawing::Size(77, 23);
            this->UnInstallButton->TabIndex = 14;
            this->UnInstallButton->Text = L"Desinstalar.";
            this->UnInstallButton->UseVisualStyleBackColor = true;
            this->UnInstallButton->Click += gcnew System::EventHandler(this, &RealmManagerForm::UnInstallButton_Click);
            // 
            // YesButton
            // 
            this->YesButton->Location = System::Drawing::Point(311, 226);
            this->YesButton->Name = L"YesButton";
            this->YesButton->Size = System::Drawing::Size(40, 23);
            this->YesButton->TabIndex = 15;
            this->YesButton->Text = L"Si...";
            this->YesButton->UseVisualStyleBackColor = true;
            this->YesButton->Visible = false;
            this->YesButton->Click += gcnew System::EventHandler(this, &RealmManagerForm::YesButton_Click);
            // 
            // NoButton
            // 
            this->NoButton->Location = System::Drawing::Point(350, 226);
            this->NoButton->Name = L"NoButton";
            this->NoButton->Size = System::Drawing::Size(40, 23);
            this->NoButton->TabIndex = 16;
            this->NoButton->Text = L"No!";
            this->NoButton->UseVisualStyleBackColor = true;
            this->NoButton->Visible = false;
            this->NoButton->Click += gcnew System::EventHandler(this, &RealmManagerForm::NoButton_Click);
            // 
            // UpdateTimer
            // 
            this->UpdateTimer->Enabled = true;
            this->UpdateTimer->Tick += gcnew System::EventHandler(this, &RealmManagerForm::UpdateTimer_Tick);
            // 
            // RealmManagerForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(402, 261);
            this->ControlBox = false;
            this->Controls->Add(this->UnInstallButton);
            this->Controls->Add(this->OpenWow);
            this->Controls->Add(this->FavFormButton);
            this->Controls->Add(this->FavButton3);
            this->Controls->Add(this->FavButton2);
            this->Controls->Add(this->FavButton1);
            this->Controls->Add(this->ExitButton);
            this->Controls->Add(this->ChangeRealmButton);
            this->Controls->Add(this->RealmNew_Indicator);
            this->Controls->Add(this->RealmActual_Indicator);
            this->Controls->Add(this->clientBox);
            this->Controls->Add(this->Dir_Label);
            this->Controls->Add(this->NewRealmText);
            this->Controls->Add(this->CurrentRealmText);
            this->Controls->Add(this->DirSelect);
            this->Controls->Add(this->NoButton);
            this->Controls->Add(this->YesButton);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
            this->MaximizeBox = false;
            this->MinimizeBox = false;
            this->Name = L"RealmManagerForm";
            this->Text = L"RealmManager";
            this->Load += gcnew System::EventHandler(this, &RealmManagerForm::RealmManagerForm_Load);
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
public:
    System::Void OpenRealmlist();
    System::Void SaveRealmlist();

private:
    System::Void RealmManagerForm_Load(System::Object^ sender, System::EventArgs^ e);
    System::Void DirSelect_Click(System::Object^ sender, System::EventArgs^ e);
    System::Void ChangeRealmButton_Click(System::Object^ sender, System::EventArgs^ e);
    System::Void clientBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
    System::Void ExitButton_Click(System::Object^ sender, System::EventArgs^ e);
    System::Void UnInstallButton_Click(System::Object^ sender, System::EventArgs^ e);
    System::Void YesButton_Click(System::Object^ sender, System::EventArgs^ e);
    System::Void NoButton_Click(System::Object^ sender, System::EventArgs^ e);
    System::Void FavFormButton_Click(System::Object^ sender, System::EventArgs^ e);
    System::Void FavButton1_Click(System::Object^ sender, System::EventArgs^ e);
    System::Void FavButton2_Click(System::Object^ sender, System::EventArgs^ e);
    System::Void FavButton3_Click(System::Object^ sender, System::EventArgs^ e);
    System::Void OpenWow_Click(System::Object^ sender, System::EventArgs^ e);
    System::Void UpdateTimer_Tick(System::Object^  sender, System::EventArgs^  e);
};
}
