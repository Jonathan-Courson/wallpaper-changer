#pragma once
#include <windows.h>

namespace wallpaperchanger {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ folderGroupBox;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ playBtn;

	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->folderGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->playBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// folderGroupBox
			// 
			this->folderGroupBox->Location = System::Drawing::Point(12, 12);
			this->folderGroupBox->Name = L"folderGroupBox";
			this->folderGroupBox->Size = System::Drawing::Size(767, 209);
			this->folderGroupBox->TabIndex = 0;
			this->folderGroupBox->TabStop = false;
			this->folderGroupBox->Text = L"Folders";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(514, 227);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(124, 35);
			this->button1->TabIndex = 1;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(644, 227);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(124, 35);
			this->button2->TabIndex = 2;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(464, 490);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Forwards";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(302, 490);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Backwards";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(368, 464);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 6;
			// 
			// playBtn
			// 
			this->playBtn->Location = System::Drawing::Point(383, 490);
			this->playBtn->Name = L"playBtn";
			this->playBtn->Size = System::Drawing::Size(75, 23);
			this->playBtn->TabIndex = 7;
			this->playBtn->Text = L"Play";
			this->playBtn->UseVisualStyleBackColor = true;
			this->playBtn->Click += gcnew System::EventHandler(this, &MyForm::playBtn_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(791, 571);
			this->Controls->Add(this->playBtn);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->folderGroupBox);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void playBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}