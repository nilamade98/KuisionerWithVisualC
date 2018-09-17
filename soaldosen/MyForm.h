#pragma once
#include <string>

namespace CppWinForm1 {

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
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;












	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::ListBox^  listBox2;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;


	private: System::Windows::Forms::RadioButton^  tidak2;
	private: System::Windows::Forms::RadioButton^  ya2;



	private: System::Windows::Forms::RadioButton^  tidak3;
	private: System::Windows::Forms::RadioButton^  ya3;



	private: System::Windows::Forms::RadioButton^  tidak4;
	private: System::Windows::Forms::RadioButton^  ya4;



	private: System::Windows::Forms::RadioButton^  tidak5;
	private: System::Windows::Forms::RadioButton^  ya5;


	private: System::Windows::Forms::Label^  label8;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::RadioButton^  ya1;
	private: System::Windows::Forms::RadioButton^  tidak1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::Label^  label9;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tidak2 = (gcnew System::Windows::Forms::RadioButton());
			this->ya2 = (gcnew System::Windows::Forms::RadioButton());
			this->tidak3 = (gcnew System::Windows::Forms::RadioButton());
			this->ya3 = (gcnew System::Windows::Forms::RadioButton());
			this->tidak4 = (gcnew System::Windows::Forms::RadioButton());
			this->ya4 = (gcnew System::Windows::Forms::RadioButton());
			this->tidak5 = (gcnew System::Windows::Forms::RadioButton());
			this->ya5 = (gcnew System::Windows::Forms::RadioButton());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->ya1 = (gcnew System::Windows::Forms::RadioButton());
			this->tidak1 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(5, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(356, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Apakah dosen menjelaskan gambaran seluruh materi di awal perkuliahan\?";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(5, 16);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(337, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Apakah dosen mampu menjawab pertanyan mahasiswa dengan baik\?";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(5, 14);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(233, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Apakah materi yang diberikan mudah dipahami\?";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(5, 16);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(346, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Apakah dosen mampu menjelaskan materi yang diberikan dengan baik\?";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(5, 16);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(313, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Apakah dosen mampu mendorong semangat belajar mahasiswa\?";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(6) {L"Dwi Kurnia Basuki", L"Tri Harsono", L"Iwan Kurnianto", 
				L"Sigit Wasista", L"Alfian Hidayat", L"Bima Sena"});
			this->listBox1->Location = System::Drawing::Point(359, 39);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(120, 56);
			this->listBox1->TabIndex = 15;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox1_SelectedIndexChanged);
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Items->AddRange(gcnew cli::array< System::Object^  >(6) {L"Aljabar Linear", L"Matematika 2", L"Rangkaian Elektronika 2", 
				L"Praktikum Elektronika 2", L"Pemrograman Dasar 2", L"Workshop Basis Data"});
			this->listBox2->Location = System::Drawing::Point(3, 39);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(120, 56);
			this->listBox2->TabIndex = 16;
			this->listBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox2_SelectedIndexChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(442, 23);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(38, 13);
			this->label6->TabIndex = 17;
			this->label6->Text = L"Dosen";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(1, 23);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(63, 13);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Mata Kuliah";
			// 
			// tidak2
			// 
			this->tidak2->AutoSize = true;
			this->tidak2->Location = System::Drawing::Point(412, 12);
			this->tidak2->Name = L"tidak2";
			this->tidak2->Size = System::Drawing::Size(57, 17);
			this->tidak2->TabIndex = 14;
			this->tidak2->TabStop = true;
			this->tidak2->Text = L"TIDAK";
			this->tidak2->UseVisualStyleBackColor = true;
			// 
			// ya2
			// 
			this->ya2->AutoSize = true;
			this->ya2->Location = System::Drawing::Point(367, 12);
			this->ya2->Name = L"ya2";
			this->ya2->Size = System::Drawing::Size(39, 17);
			this->ya2->TabIndex = 10;
			this->ya2->TabStop = true;
			this->ya2->Text = L"YA";
			this->ya2->UseVisualStyleBackColor = true;
			// 
			// tidak3
			// 
			this->tidak3->AutoSize = true;
			this->tidak3->Location = System::Drawing::Point(412, 10);
			this->tidak3->Name = L"tidak3";
			this->tidak3->Size = System::Drawing::Size(57, 17);
			this->tidak3->TabIndex = 14;
			this->tidak3->TabStop = true;
			this->tidak3->Text = L"TIDAK";
			this->tidak3->UseVisualStyleBackColor = true;
			// 
			// ya3
			// 
			this->ya3->AutoSize = true;
			this->ya3->Location = System::Drawing::Point(367, 10);
			this->ya3->Name = L"ya3";
			this->ya3->Size = System::Drawing::Size(39, 17);
			this->ya3->TabIndex = 10;
			this->ya3->TabStop = true;
			this->ya3->Text = L"YA";
			this->ya3->UseVisualStyleBackColor = true;
			// 
			// tidak4
			// 
			this->tidak4->AutoSize = true;
			this->tidak4->Location = System::Drawing::Point(412, 12);
			this->tidak4->Name = L"tidak4";
			this->tidak4->Size = System::Drawing::Size(57, 17);
			this->tidak4->TabIndex = 14;
			this->tidak4->TabStop = true;
			this->tidak4->Text = L"TIDAK";
			this->tidak4->UseVisualStyleBackColor = true;
			// 
			// ya4
			// 
			this->ya4->AutoSize = true;
			this->ya4->Location = System::Drawing::Point(367, 12);
			this->ya4->Name = L"ya4";
			this->ya4->Size = System::Drawing::Size(39, 17);
			this->ya4->TabIndex = 10;
			this->ya4->TabStop = true;
			this->ya4->Text = L"YA";
			this->ya4->UseVisualStyleBackColor = true;
			// 
			// tidak5
			// 
			this->tidak5->AutoSize = true;
			this->tidak5->Location = System::Drawing::Point(412, 12);
			this->tidak5->Name = L"tidak5";
			this->tidak5->Size = System::Drawing::Size(57, 17);
			this->tidak5->TabIndex = 14;
			this->tidak5->TabStop = true;
			this->tidak5->Text = L"TIDAK";
			this->tidak5->UseVisualStyleBackColor = true;
			// 
			// ya5
			// 
			this->ya5->AutoSize = true;
			this->ya5->Location = System::Drawing::Point(367, 12);
			this->ya5->Name = L"ya5";
			this->ya5->Size = System::Drawing::Size(39, 17);
			this->ya5->TabIndex = 10;
			this->ya5->TabStop = true;
			this->ya5->Text = L"YA";
			this->ya5->UseVisualStyleBackColor = true;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(15, 309);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(30, 13);
			this->label8->TabIndex = 24;
			this->label8->Text = L"Hasil";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(383, 326);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 26;
			this->button1->Text = L"SELESAI";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(383, 372);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 27;
			this->button2->Text = L"CANCEL";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(15, 326);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(343, 69);
			this->textBox1->TabIndex = 28;
			// 
			// ya1
			// 
			this->ya1->AutoSize = true;
			this->ya1->Location = System::Drawing::Point(367, 12);
			this->ya1->Name = L"ya1";
			this->ya1->Size = System::Drawing::Size(39, 17);
			this->ya1->TabIndex = 10;
			this->ya1->TabStop = true;
			this->ya1->Text = L"YA";
			this->ya1->UseVisualStyleBackColor = true;
			// 
			// tidak1
			// 
			this->tidak1->AutoSize = true;
			this->tidak1->Location = System::Drawing::Point(412, 12);
			this->tidak1->Name = L"tidak1";
			this->tidak1->Size = System::Drawing::Size(57, 17);
			this->tidak1->TabIndex = 14;
			this->tidak1->TabStop = true;
			this->tidak1->Text = L"TIDAK";
			this->tidak1->UseVisualStyleBackColor = true;
			this->tidak1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton10_CheckedChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->tidak1);
			this->groupBox1->Controls->Add(this->ya1);
			this->groupBox1->Location = System::Drawing::Point(4, 101);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(476, 35);
			this->groupBox1->TabIndex = 29;
			this->groupBox1->TabStop = false;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->tidak2);
			this->groupBox2->Controls->Add(this->ya2);
			this->groupBox2->Location = System::Drawing::Point(4, 142);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(476, 35);
			this->groupBox2->TabIndex = 30;
			this->groupBox2->TabStop = false;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Controls->Add(this->tidak3);
			this->groupBox3->Controls->Add(this->ya3);
			this->groupBox3->Location = System::Drawing::Point(3, 183);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(476, 35);
			this->groupBox3->TabIndex = 31;
			this->groupBox3->TabStop = false;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->label4);
			this->groupBox4->Controls->Add(this->tidak4);
			this->groupBox4->Controls->Add(this->ya4);
			this->groupBox4->Location = System::Drawing::Point(4, 224);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(476, 35);
			this->groupBox4->TabIndex = 32;
			this->groupBox4->TabStop = false;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->label5);
			this->groupBox5->Controls->Add(this->tidak5);
			this->groupBox5->Controls->Add(this->ya5);
			this->groupBox5->Location = System::Drawing::Point(4, 265);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(476, 35);
			this->groupBox5->TabIndex = 33;
			this->groupBox5->TabStop = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(139, 68);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(207, 16);
			this->label9->TabIndex = 34;
			this->label9->Text = L"Isilah Pooling berikut dengan jujur";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(483, 416);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox1);
			this->Name = L"MyForm";
			this->Text = L"Pooling";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void radioButton10_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ kategori;
			 int nilai=0;

			 if(ya1->Checked) nilai+=20; else nilai+=0;
			 if(ya2->Checked) nilai+=20; else nilai+=0;
			 if(ya3->Checked) nilai+=20; else nilai+=0;
			 if(ya4->Checked) nilai+=20; else nilai+=0;
			 if(ya5->Checked) nilai+=20; else nilai+=0;
			 if(nilai ==100) kategori="(SANGAT BAIK)";
			 else if(nilai ==80) kategori="(BAIK)";
			 else if(nilai ==60) kategori="(CUKUP)";
			 else if(nilai ==40) kategori="(KURANG)";
			 else kategori="(SANGAT KURANG)";
			 textBox1->Text="Dosen\t\t: " + listBox1->Text + "\r\nMata Kuliah\t: " + listBox2->Text 
				 + "\r\nPenilaian\t\t: " + nilai.ToString() + kategori;
		 }
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
			 button1->Enabled=false;
		 }
private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 button1->Enabled=true;
		 }
private: System::Void listBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 button1->Enabled=true;
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
		 }
};
}
