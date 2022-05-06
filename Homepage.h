#pragma once
#include "Subjects.h"
#include "CourseSubjects.h"
#include "FeedbackSubjects.h"
#include "Departments.h"
#include "StudentSubject.h"
namespace GUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Homepage
	/// </summary>
	public ref class Homepage : public System::Windows::Forms::Form
	{
	public:
		Homepage(void)
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
		~Homepage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Homepage::typeid));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Wheat;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24.8F, System::Drawing::FontStyle::Bold));
			this->label3->Location = System::Drawing::Point(279, 143);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(590, 48);
			this->label3->TabIndex = 5;
			this->label3->Text = L"SEECS Management System";
			this->label3->Click += gcnew System::EventHandler(this, &Homepage::label3_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Ivory;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(199, 299);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(178, 69);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Attendence";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Homepage::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Ivory;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(506, 299);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(175, 71);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Course";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Homepage::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Ivory;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(772, 299);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(166, 69);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Student Record";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Homepage::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Ivory;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(345, 447);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(170, 67);
			this->button4->TabIndex = 9;
			this->button4->Text = L"Feedback";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Homepage::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Ivory;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(649, 447);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(169, 67);
			this->button5->TabIndex = 10;
			this->button5->Text = L"Department";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Homepage::button5_Click);
			// 
			// Homepage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1190, 670);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Name = L"Homepage";
			this->Text = L"Homepage";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		Subjects^ f1 = gcnew Subjects();
		f1->Show();
		

	}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	CourseSubjects^ f2 = gcnew CourseSubjects();
	f2->Show();

	


}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	StudentSubject^ f3 = gcnew StudentSubject();
	f3->Show();
	

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	FeedbackSubjects^ f4 = gcnew FeedbackSubjects();
	f4->Show();
	
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	Departments^ f5 = gcnew Departments();
	f5->Show();
	
}
};
}
