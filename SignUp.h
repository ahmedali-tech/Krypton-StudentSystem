#pragma once

#include <mysql.h>
#include <iostream>
#include <sqltypes.h>
#include "Homepage.h"


#include <msclr/marshal.h>

#include <string>



namespace GUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for SignUp
	/// </summary>
	public ref class SignUp : public System::Windows::Forms::Form
	{
	public:
		SignUp(void)
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
		~SignUp()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SignUp::typeid));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Gold;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24.8F, System::Drawing::FontStyle::Bold));
			this->label3->Location = System::Drawing::Point(210, 22);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(590, 48);
			this->label3->TabIndex = 5;
			this->label3->Text = L"SEECS Management System";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Khaki;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button1->Location = System::Drawing::Point(854, 382);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(114, 39);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Sign Up";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &SignUp::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Gold;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label2->Location = System::Drawing::Point(757, 262);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(120, 29);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Password";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Gold;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label1->Location = System::Drawing::Point(753, 163);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(124, 29);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Username";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(758, 294);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(302, 25);
			this->textBox2->TabIndex = 7;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &SignUp::textBox2_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->AccessibleName = L"username";
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(758, 195);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(303, 25);
			this->textBox1->TabIndex = 6;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &SignUp::textBox1_TextChanged);
			// 
			// SignUp
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1093, 664);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Name = L"SignUp";
			this->Text = L"SignUp";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	MYSQL* conn;
	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "10.7.101.66", "ahmed", "password", "seecs", 0, NULL, 0);
	if (conn) {
		cout << "yes";
	}
	else {
		cout << "no";
	}
	msclr::interop::marshal_context oMarshalContext;
	const char* username= oMarshalContext.marshal_as<const char*>(textBox1->Text);
	const char* password = oMarshalContext.marshal_as<const char*>(textBox2->Text);

	const char* part1 = "INSERT INTO seecs.login values (0,'";
	const char* part2 = "','";
	const char* part3 = "')";

	
	string query(string(part1) + username+part2+password+part3);
	
	int querystate= mysql_query(conn, query.c_str());
	cout << querystate;

	
	Homepage^ f1 = gcnew Homepage();
	f1->Show();
	this->Hide();




		


}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
