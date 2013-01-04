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
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n utilizando.
		/// </summary>
		~FavoritesForm()
		{
			if (components)
			{
				delete components;
			}
		}

    protected: 

	private:
		/// <summary>
		/// Variable del dise�ador requerida.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido del m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
            this->SuspendLayout();
            // 
            // FavoritesForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(284, 261);
            this->Name = L"FavoritesForm";
            this->Text = L"FavoritesForm";
            this->ResumeLayout(false);

        }
#pragma endregion

    };
}
