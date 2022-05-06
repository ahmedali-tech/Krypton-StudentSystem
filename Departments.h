#pragma once

#include "ok.h"
#include "BEECLASS1.h"
#include "SECLASS.h"
namespace GUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Departments
	/// </summary>
	public ref class Departments : public System::Windows::Forms::Form
	{
	public:
		Departments(void)
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
		~Departments()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label3;
	protected:
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Departments::typeid));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24.8F, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(513, 125);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(409, 48);
			this->label3->TabIndex = 31;
			this->label3->Text = L"Choose Department";
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Ivory;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(605, 258);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(178, 69);
			this->button6->TabIndex = 30;
			this->button6->Text = L"BEE";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Departments::button6_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Ivory;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(817, 258);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(166, 69);
			this->button3->TabIndex = 27;
			this->button3->Text = L"BSCS";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Departments::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Ivory;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(389, 258);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(175, 71);
			this->button2->TabIndex = 26;
			this->button2->Text = L"BESE";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Departments::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(25, 487);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(178, 69);
			this->button1->TabIndex = 43;
			this->button1->Text = L"Back to Home";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Departments::button1_Click);
			// 
			// Departments
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1046, 581);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Name = L"Departments";
			this->Text = L"Departments";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		SECLASS^ f1 = gcnew SECLASS();
		f1->Show();
		this->Hide();
	}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	BEECLASS^ f1 = gcnew BEECLASS();
	f1->Show();
	this->Hide();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	ok^ f1 = gcnew ok();
	f1->Show();
	this->Hide();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}
};
}
