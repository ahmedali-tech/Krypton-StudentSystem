#pragma once
#include "SignUp.h"
#include <mysql.h>
#include <iostream>
#include <sqltypes.h>
#include <sqlext.h>
#include "Homepage.h"
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>


#include <msclr/marshal.h>

#include <string>


namespace GUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
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
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label5;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(872, 210);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(303, 25);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Login::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(872, 309);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(302, 25);
			this->textBox2->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Gold;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label1->Location = System::Drawing::Point(867, 178);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(124, 29);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Username";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Gold;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label2->Location = System::Drawing::Point(871, 277);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(120, 29);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Password";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Gold;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24.8F, System::Drawing::FontStyle::Bold));
			this->label3->Location = System::Drawing::Point(309, 28);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(590, 48);
			this->label3->TabIndex = 4;
			this->label3->Text = L"SEECS Management System";
			this->label3->Click += gcnew System::EventHandler(this, &Login::label3_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Khaki;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button1->Location = System::Drawing::Point(968, 397);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(114, 39);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Login::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Gold;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label4->Location = System::Drawing::Point(886, 524);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(179, 29);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Not Signed up\?";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Khaki;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button2->Location = System::Drawing::Point(963, 593);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(118, 44);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Sign Up";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Login::button2_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->ForeColor = System::Drawing::Color::Red;
			this->label5->Location = System::Drawing::Point(929, 353);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 16);
			this->label5->TabIndex = 8;
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1237, 726);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"Login";
			this->Text = L"Login";
			this->Load += gcnew System::EventHandler(this, &Login::Login_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		SignUp^ f1=gcnew SignUp();
		f1->Show();
		this->Hide();

	}
private: System::Void Login_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	MYSQL* conn;
	MYSQL_RES* result;
	MYSQL_ROW row;
	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "10.7.101.66", "ahmed", "password", "seecs", 0, NULL, 0);
	if (conn) {
		cout << "yes";
	}
	else {
		cout << "no";
	}
	msclr::interop::marshal_context oMarshalContext;
	const char* username = oMarshalContext.marshal_as<const char*>(textBox1->Text);
	const char* password = oMarshalContext.marshal_as<const char*>(textBox2->Text);

	const char* part1 = "SELECT * FROM SEECS.LOGIN";
	
	int state = mysql_query(conn, part1);

	result = mysql_store_result(conn);


	row = mysql_fetch_row(result);

	

	while ((row = mysql_fetch_row(result)) != NULL) {
		
		if (username ==(string)row[1] && password==(string)row[2]) {
			
			Homepage^ f2 = gcnew Homepage();
			f2->Show();
			this->Hide();
			break;
			
		}
		
	}
	label5->Text = "Wrong user name or password";
	

}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
