#pragma once

namespace Kalkulator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o Pomoc
	/// </summary>
	public ref class Pomoc : public System::Windows::Forms::Form
	{
	public:
		Pomoc(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyść wszystkie używane zasoby.
		/// </summary>
		~Pomoc()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  Zamknij;
	private: System::Windows::Forms::Label^  lblinfo;
	private: System::Windows::Forms::TextBox^  textBox1;


	protected:

	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Wymagana metoda obsługi projektanta — nie należy modyfikować 
		/// zawartość tej metody z edytorem kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Zamknij = (gcnew System::Windows::Forms::Button());
			this->lblinfo = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// Zamknij
			// 
			this->Zamknij->Location = System::Drawing::Point(106, 226);
			this->Zamknij->Name = L"Zamknij";
			this->Zamknij->Size = System::Drawing::Size(75, 23);
			this->Zamknij->TabIndex = 0;
			this->Zamknij->Text = L" zamknij";
			this->Zamknij->UseVisualStyleBackColor = true;
			this->Zamknij->Click += gcnew System::EventHandler(this, &Pomoc::button1_Click);
			// 
			// lblinfo
			// 
			this->lblinfo->AutoSize = true;
			this->lblinfo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblinfo->Location = System::Drawing::Point(71, 43);
			this->lblinfo->Name = L"lblinfo";
			this->lblinfo->Size = System::Drawing::Size(45, 16);
			this->lblinfo->TabIndex = 1;
			this->lblinfo->Text = L"label1";
			this->lblinfo->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblinfo->Click += gcnew System::EventHandler(this, &Pomoc::lblinfo_Click);
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(70, 130);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(163, 89);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"Kalkulator\r\n\r\n-------------------\r\n\r\nAutor : Flip Zych\r\n";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Pomoc
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(280, 261);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->lblinfo);
			this->Controls->Add(this->Zamknij);
			this->Name = L"Pomoc";
			this->Text = L" ";
			this->Load += gcnew System::EventHandler(this, &Pomoc::Pomoc_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	
	private: System::Void Pomoc_Load(System::Object^  sender, System::EventArgs^  e) {
		lblinfo->Text = "Calculator made by \n  Filip Zych \n in Visual Studio C++";
	
	}
	private: System::Void lblinfo_Click(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
