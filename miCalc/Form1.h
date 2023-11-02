#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ nomer2;
	private: System::Windows::Forms::TextBox^ resultat;


	private: System::Windows::Forms::TextBox^ nomer1;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->nomer2 = (gcnew System::Windows::Forms::TextBox());
			this->resultat = (gcnew System::Windows::Forms::TextBox());
			this->nomer1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->button1->Location = System::Drawing::Point(12, 119);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(147, 52);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Плюс";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->button2->Location = System::Drawing::Point(191, 119);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(147, 52);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Мінус";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->button3->Location = System::Drawing::Point(12, 189);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(147, 52);
			this->button3->TabIndex = 2;
			this->button3->Text = L"множення";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->button4->Location = System::Drawing::Point(191, 189);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(147, 52);
			this->button4->TabIndex = 3;
			this->button4->Text = L"ділення";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// nomer2
			// 
			this->nomer2->Location = System::Drawing::Point(184, 35);
			this->nomer2->Name = L"nomer2";
			this->nomer2->Size = System::Drawing::Size(154, 20);
			this->nomer2->TabIndex = 5;
			// 
			// resultat
			// 
			this->resultat->Location = System::Drawing::Point(101, 81);
			this->resultat->Name = L"resultat";
			this->resultat->Size = System::Drawing::Size(147, 20);
			this->resultat->TabIndex = 6;
			// 
			// nomer1
			// 
			this->nomer1->Location = System::Drawing::Point(12, 35);
			this->nomer1->Name = L"nomer1";
			this->nomer1->Size = System::Drawing::Size(154, 20);
			this->nomer1->TabIndex = 7;
			this->nomer1->Tag = L"";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label1->Location = System::Drawing::Point(8, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(135, 20);
			this->label1->TabIndex = 8;
			this->label1->Text = L"перший номер ";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label2->Location = System::Drawing::Point(180, 12);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(129, 20);
			this->label2->TabIndex = 9;
			this->label2->Text = L"другий номер ";
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label3->Location = System::Drawing::Point(125, 58);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(96, 20);
			this->label3->TabIndex = 10;
			this->label3->Text = L"результат";
			this->label3->Click += gcnew System::EventHandler(this, &Form1::label3_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(350, 271);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->nomer1);
			this->Controls->Add(this->resultat);
			this->Controls->Add(this->nomer2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		double num1, num2, result;
		num1 = System::Convert::ToInt32(nomer1->Text);
		num2 = System::Convert::ToInt32(nomer2->Text);
		result = num1 + num2;
		resultat->Text = System::Convert::ToString(result);
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		double num1, num2, result;
		num1 = System::Convert::ToInt32(nomer1->Text);
		num2 = System::Convert::ToInt32(nomer2->Text);
		result = num1 * num2;
		resultat->Text = System::Convert::ToString(result);
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	double num1, num2, result;
	num1 = System::Convert::ToInt32(nomer1->Text);
	num2 = System::Convert::ToInt32(nomer2->Text);
	result = num1 - num2;
	resultat->Text = System::Convert::ToString(result);
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	double num1, num2, result;
	num1 = System::Convert::ToInt32(nomer1->Text);
	num2 = System::Convert::ToInt32(nomer2->Text);
	result = num1 / num2;
	resultat->Text = System::Convert::ToString(result);
}

private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
