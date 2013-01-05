#pragma once

namespace RealmManager {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FavoritesForm
	/// </summary>
	public ref class FavoritesForm : public System::Windows::Forms::Form
	{
	public:
		FavoritesForm(void)
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
		~FavoritesForm()
		{
			if (components)
			{
				delete components;
			}
		}
    private: System::Windows::Forms::TextBox^  Fav1Text;
    private: System::Windows::Forms::TextBox^  Fav2Text;
    private: System::Windows::Forms::TextBox^  Fav3Text;
    private: System::Windows::Forms::Button^  SaveFavButton;
    private: System::Windows::Forms::Button^  ReturnButton;
    private: System::Windows::Forms::Label^  SomeLabel;
    private: System::Windows::Forms::Label^  Favorito3Label;
    private: System::Windows::Forms::Label^  Favorito2Label;
    private: System::Windows::Forms::Label^  Favorito1Label;

	private:
		/// <summary>
		/// Variable del diseñador requerida.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido del método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
            this->Fav1Text = (gcnew System::Windows::Forms::TextBox());
            this->Fav2Text = (gcnew System::Windows::Forms::TextBox());
            this->Fav3Text = (gcnew System::Windows::Forms::TextBox());
            this->SaveFavButton = (gcnew System::Windows::Forms::Button());
            this->ReturnButton = (gcnew System::Windows::Forms::Button());
            this->SomeLabel = (gcnew System::Windows::Forms::Label());
            this->Favorito3Label = (gcnew System::Windows::Forms::Label());
            this->Favorito2Label = (gcnew System::Windows::Forms::Label());
            this->Favorito1Label = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();
            // 
            // Fav1Text
            // 
            this->Fav1Text->Location = System::Drawing::Point(79, 6);
            this->Fav1Text->Name = L"Fav1Text";
            this->Fav1Text->Size = System::Drawing::Size(298, 20);
            this->Fav1Text->TabIndex = 0;
            // 
            // Fav2Text
            // 
            this->Fav2Text->Location = System::Drawing::Point(79, 32);
            this->Fav2Text->Name = L"Fav2Text";
            this->Fav2Text->Size = System::Drawing::Size(298, 20);
            this->Fav2Text->TabIndex = 1;
            // 
            // Fav3Text
            // 
            this->Fav3Text->Location = System::Drawing::Point(79, 58);
            this->Fav3Text->Name = L"Fav3Text";
            this->Fav3Text->Size = System::Drawing::Size(298, 20);
            this->Fav3Text->TabIndex = 2;
            // 
            // SaveFavButton
            // 
            this->SaveFavButton->Location = System::Drawing::Point(15, 101);
            this->SaveFavButton->Name = L"SaveFavButton";
            this->SaveFavButton->Size = System::Drawing::Size(135, 23);
            this->SaveFavButton->TabIndex = 3;
            this->SaveFavButton->Text = L"Guardar.";
            this->SaveFavButton->UseVisualStyleBackColor = true;
            this->SaveFavButton->Click += gcnew System::EventHandler(this, &FavoritesForm::SaveFavButton_Click);
            // 
            // ReturnButton
            // 
            this->ReturnButton->Location = System::Drawing::Point(15, 130);
            this->ReturnButton->Name = L"ReturnButton";
            this->ReturnButton->Size = System::Drawing::Size(135, 23);
            this->ReturnButton->TabIndex = 4;
            this->ReturnButton->Text = L"Volver.";
            this->ReturnButton->UseVisualStyleBackColor = true;
            this->ReturnButton->Click += gcnew System::EventHandler(this, &FavoritesForm::ReturnButton_Click);
            // 
            // SomeLabel
            // 
            this->SomeLabel->AutoSize = true;
            this->SomeLabel->Location = System::Drawing::Point(168, 111);
            this->SomeLabel->Name = L"SomeLabel";
            this->SomeLabel->Size = System::Drawing::Size(190, 13);
            this->SomeLabel->TabIndex = 5;
            this->SomeLabel->Text = L"En todos hay que incluir \"set realmlist\".";
            // 
            // Favorito3Label
            // 
            this->Favorito3Label->AutoSize = true;
            this->Favorito3Label->Location = System::Drawing::Point(12, 65);
            this->Favorito3Label->Name = L"Favorito3Label";
            this->Favorito3Label->Size = System::Drawing::Size(54, 13);
            this->Favorito3Label->TabIndex = 6;
            this->Favorito3Label->Text = L"Favorito 3";
            // 
            // Favorito2Label
            // 
            this->Favorito2Label->AutoSize = true;
            this->Favorito2Label->Location = System::Drawing::Point(12, 39);
            this->Favorito2Label->Name = L"Favorito2Label";
            this->Favorito2Label->Size = System::Drawing::Size(54, 13);
            this->Favorito2Label->TabIndex = 7;
            this->Favorito2Label->Text = L"Favorito 2";
            // 
            // Favorito1Label
            // 
            this->Favorito1Label->AutoSize = true;
            this->Favorito1Label->Location = System::Drawing::Point(12, 13);
            this->Favorito1Label->Name = L"Favorito1Label";
            this->Favorito1Label->Size = System::Drawing::Size(54, 13);
            this->Favorito1Label->TabIndex = 8;
            this->Favorito1Label->Text = L"Favorito 1";
            // 
            // FavoritesForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(389, 165);
            this->ControlBox = false;
            this->Controls->Add(this->Favorito1Label);
            this->Controls->Add(this->Favorito2Label);
            this->Controls->Add(this->Favorito3Label);
            this->Controls->Add(this->SomeLabel);
            this->Controls->Add(this->ReturnButton);
            this->Controls->Add(this->SaveFavButton);
            this->Controls->Add(this->Fav3Text);
            this->Controls->Add(this->Fav2Text);
            this->Controls->Add(this->Fav1Text);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
            this->MaximizeBox = false;
            this->MinimizeBox = false;
            this->Name = L"FavoritesForm";
            this->ShowIcon = false;
            this->ShowInTaskbar = false;
            this->Text = L"Favoritos.";
            this->Load += gcnew System::EventHandler(this, &FavoritesForm::FavoritesForm_Load);
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

private:
    System::Void FavoritesForm_Load(System::Object^ sender, System::EventArgs^ e);
    System::Void SaveFavButton_Click(System::Object^ sender, System::EventArgs^ e);
    System::Void ReturnButton_Click(System::Object^ sender, System::EventArgs^ e);
};
}
