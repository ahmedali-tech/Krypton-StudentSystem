#pragma once

#include "Feedback.h"
namespace GUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FeedbackSubjects
	/// </summary>
	public ref class FeedbackSubjects : public System::Windows::Forms::Form
	{
	public:
		FeedbackSubjects(void)
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
		~FeedbackSubjects()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label3;
	protected:
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button7;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FeedbackSubjects::typeid));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24.8F, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(599, 34);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(312, 48);
			this->label3->TabIndex = 31;
			this->label3->Text = L"Choose course";
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Ivory;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(512, 335);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(178, 69);
			this->button6->TabIndex = 30;
			this->button6->Text = L"Technical Writing";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &FeedbackSubjects::button6_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Ivory;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(838, 335);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(169, 67);
			this->button5->TabIndex = 29;
			this->button5->Text = L"Electronics";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &FeedbackSubjects::button5_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Ivory;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(837, 462);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(170, 67);
			this->button4->TabIndex = 28;
			this->button4->Text = L"Database systems";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &FeedbackSubjects::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Ivory;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(837, 183);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(166, 69);
			this->button3->TabIndex = 27;
			this->button3->Text = L"Probability";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &FeedbackSubjects::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Ivory;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(515, 183);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(175, 71);
			this->button2->TabIndex = 26;
			this->button2->Text = L"DSA";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &FeedbackSubjects::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Ivory;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(515, 462);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(178, 69);
			this->button1->TabIndex = 25;
			this->button1->Text = L"Software Engineering";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &FeedbackSubjects::button1_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(31, 504);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(178, 69);
			this->button7->TabIndex = 43;
			this->button7->Text = L"Back to Home";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &FeedbackSubjects::button7_Click);
			// 
			// FeedbackSubjects
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1085, 610);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"FeedbackSubjects";
			this->Text = L"FeedbackSubjects";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Feedback^ f1 = gcnew Feedback();
		f1->Show();
		this->Hide();
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Feedback^ f1 = gcnew Feedback();
	f1->Show();
	this->Hide();
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	Feedback^ f1 = gcnew Feedback();
	f1->Show();
	this->Hide();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	Feedback^ f1 = gcnew Feedback();
	f1->Show();
	this->Hide();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Feedback^ f1 = gcnew Feedback();
	f1->Show();
	this->Hide();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	Feedback^ f1 = gcnew Feedback();
	f1->Show();
	this->Hide();
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}
};
}
