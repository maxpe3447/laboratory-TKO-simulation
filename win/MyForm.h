﻿#pragma once
#include "Fizika.cpp"
namespace win {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		int task1 = 1, task2 = 1;
		
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutProgramToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ developerToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::BindingSource^ bindingSource1;




	public:
	private: System::Windows::Forms::Button^ button1;
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Laba;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton10;
	private: System::Windows::Forms::RadioButton^ radioButton9;
	private: System::Windows::Forms::RadioButton^ radioButton8;
	private: System::Windows::Forms::RadioButton^ radioButton7;
	private: System::Windows::Forms::RadioButton^ radioButton6;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;

	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::RadioButton^ radioButton11;
	private: System::Windows::Forms::RadioButton^ radioButton12;
	private: System::Windows::Forms::RadioButton^ radioButton13;
	private: System::Windows::Forms::RadioButton^ radioButton14;
	private: System::Windows::Forms::RadioButton^ radioButton15;
	private: System::Windows::Forms::RadioButton^ radioButton16;
	private: System::Windows::Forms::RadioButton^ radioButton17;
	private: System::Windows::Forms::RadioButton^ radioButton18;
	private: System::Windows::Forms::RadioButton^ radioButton19;
	private: System::Windows::Forms::RadioButton^ radioButton20;
	private: System::ComponentModel::IContainer^ components;





	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->Laba = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->radioButton10 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton9 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton11 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton12 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton13 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton14 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton15 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton16 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton17 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton18 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton19 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton20 = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->aboutProgramToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->developerToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->SuspendLayout();
			// 
			// Laba
			// 
			this->Laba->AutoSize = true;
			this->Laba->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Laba->Location = System::Drawing::Point(176, 58);
			this->Laba->Name = L"Laba";
			this->Laba->Size = System::Drawing::Size(319, 37);
			this->Laba->TabIndex = 0;
			this->Laba->Text = L"Лабораторна робота";
			this->Laba->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			this->Laba->MouseHover += gcnew System::EventHandler(this, &MyForm::Laba_MouseHover);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->numericUpDown2);
			this->groupBox1->Controls->Add(this->numericUpDown1);
			this->groupBox1->Controls->Add(this->radioButton10);
			this->groupBox1->Controls->Add(this->radioButton9);
			this->groupBox1->Controls->Add(this->radioButton8);
			this->groupBox1->Controls->Add(this->radioButton7);
			this->groupBox1->Controls->Add(this->radioButton6);
			this->groupBox1->Controls->Add(this->radioButton5);
			this->groupBox1->Controls->Add(this->radioButton4);
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Location = System::Drawing::Point(73, 158);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(665, 325);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Обрати варіант";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(401, 260);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(46, 25);
			this->label4->TabIndex = 14;
			this->label4->Text = L"мм";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(401, 205);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(29, 25);
			this->label3->TabIndex = 6;
			this->label3->Text = L"M";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(208, 254);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 32);
			this->label2->TabIndex = 13;
			this->label2->Text = L"d = ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 14, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(217, 198);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(52, 31);
			this->label1->TabIndex = 13;
			this->label1->Text = L"l = ";
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown2->Location = System::Drawing::Point(275, 262);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(120, 30);
			this->numericUpDown2->TabIndex = 12;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->DecimalPlaces = 3;
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown1->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 196608 });
			this->numericUpDown1->Location = System::Drawing::Point(275, 205);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 30);
			this->numericUpDown1->TabIndex = 12;
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown1_ValueChanged);
			// 
			// radioButton10
			// 
			this->radioButton10->AutoSize = true;
			this->radioButton10->Location = System::Drawing::Point(499, 112);
			this->radioButton10->Name = L"radioButton10";
			this->radioButton10->Size = System::Drawing::Size(115, 24);
			this->radioButton10->TabIndex = 11;
			this->radioButton10->Text = L"Варіант 10";
			this->radioButton10->UseVisualStyleBackColor = true;
			this->radioButton10->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton10_CheckedChanged);
			// 
			// radioButton9
			// 
			this->radioButton9->AutoSize = true;
			this->radioButton9->Location = System::Drawing::Point(381, 112);
			this->radioButton9->Name = L"radioButton9";
			this->radioButton9->Size = System::Drawing::Size(106, 24);
			this->radioButton9->TabIndex = 10;
			this->radioButton9->Text = L"Варіант 9";
			this->radioButton9->UseVisualStyleBackColor = true;
			this->radioButton9->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton9_CheckedChanged);
			// 
			// radioButton8
			// 
			this->radioButton8->AutoSize = true;
			this->radioButton8->Location = System::Drawing::Point(263, 112);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(106, 24);
			this->radioButton8->TabIndex = 9;
			this->radioButton8->Text = L"Варіант 8";
			this->radioButton8->UseVisualStyleBackColor = true;
			this->radioButton8->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton8_CheckedChanged);
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->Location = System::Drawing::Point(145, 112);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(106, 24);
			this->radioButton7->TabIndex = 8;
			this->radioButton7->Text = L"Варіант 7";
			this->radioButton7->UseVisualStyleBackColor = true;
			this->radioButton7->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton7_CheckedChanged);
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(27, 112);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(106, 24);
			this->radioButton6->TabIndex = 7;
			this->radioButton6->Text = L"Варіант 6";
			this->radioButton6->UseVisualStyleBackColor = true;
			this->radioButton6->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton6_CheckedChanged);
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(499, 35);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(106, 24);
			this->radioButton5->TabIndex = 6;
			this->radioButton5->Text = L"Варіант 5";
			this->radioButton5->UseVisualStyleBackColor = true;
			this->radioButton5->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton5_CheckedChanged);
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(381, 35);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(106, 24);
			this->radioButton4->TabIndex = 5;
			this->radioButton4->Text = L"Варіант 4";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(263, 35);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(106, 24);
			this->radioButton3->TabIndex = 4;
			this->radioButton3->Text = L"Варіант 3";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton3_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(145, 35);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(106, 24);
			this->radioButton2->TabIndex = 3;
			this->radioButton2->Text = L"Варіант 2";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(27, 35);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(106, 24);
			this->radioButton1->TabIndex = 2;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Варіант 1";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radioButton11);
			this->groupBox2->Controls->Add(this->radioButton12);
			this->groupBox2->Controls->Add(this->radioButton13);
			this->groupBox2->Controls->Add(this->radioButton14);
			this->groupBox2->Controls->Add(this->radioButton15);
			this->groupBox2->Controls->Add(this->radioButton16);
			this->groupBox2->Controls->Add(this->radioButton17);
			this->groupBox2->Controls->Add(this->radioButton18);
			this->groupBox2->Controls->Add(this->radioButton19);
			this->groupBox2->Controls->Add(this->radioButton20);
			this->groupBox2->Location = System::Drawing::Point(73, 603);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(665, 190);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Обрати варіант";
			// 
			// radioButton11
			// 
			this->radioButton11->AutoSize = true;
			this->radioButton11->Location = System::Drawing::Point(499, 112);
			this->radioButton11->Name = L"radioButton11";
			this->radioButton11->Size = System::Drawing::Size(115, 24);
			this->radioButton11->TabIndex = 11;
			this->radioButton11->Text = L"Варіант 10";
			this->radioButton11->UseVisualStyleBackColor = true;
			this->radioButton11->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton11_CheckedChanged);
			// 
			// radioButton12
			// 
			this->radioButton12->AutoSize = true;
			this->radioButton12->Location = System::Drawing::Point(381, 112);
			this->radioButton12->Name = L"radioButton12";
			this->radioButton12->Size = System::Drawing::Size(106, 24);
			this->radioButton12->TabIndex = 10;
			this->radioButton12->Text = L"Варіант 9";
			this->radioButton12->UseVisualStyleBackColor = true;
			this->radioButton12->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton12_CheckedChanged);
			// 
			// radioButton13
			// 
			this->radioButton13->AutoSize = true;
			this->radioButton13->Location = System::Drawing::Point(263, 112);
			this->radioButton13->Name = L"radioButton13";
			this->radioButton13->Size = System::Drawing::Size(106, 24);
			this->radioButton13->TabIndex = 9;
			this->radioButton13->Text = L"Варіант 8";
			this->radioButton13->UseVisualStyleBackColor = true;
			this->radioButton13->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton13_CheckedChanged);
			// 
			// radioButton14
			// 
			this->radioButton14->AutoSize = true;
			this->radioButton14->Location = System::Drawing::Point(145, 112);
			this->radioButton14->Name = L"radioButton14";
			this->radioButton14->Size = System::Drawing::Size(106, 24);
			this->radioButton14->TabIndex = 8;
			this->radioButton14->Text = L"Варіант 7";
			this->radioButton14->UseVisualStyleBackColor = true;
			this->radioButton14->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton14_CheckedChanged);
			// 
			// radioButton15
			// 
			this->radioButton15->AutoSize = true;
			this->radioButton15->Location = System::Drawing::Point(27, 112);
			this->radioButton15->Name = L"radioButton15";
			this->radioButton15->Size = System::Drawing::Size(106, 24);
			this->radioButton15->TabIndex = 7;
			this->radioButton15->Text = L"Варіант 6";
			this->radioButton15->UseVisualStyleBackColor = true;
			this->radioButton15->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton15_CheckedChanged);
			// 
			// radioButton16
			// 
			this->radioButton16->AutoSize = true;
			this->radioButton16->Location = System::Drawing::Point(499, 35);
			this->radioButton16->Name = L"radioButton16";
			this->radioButton16->Size = System::Drawing::Size(106, 24);
			this->radioButton16->TabIndex = 6;
			this->radioButton16->Text = L"Варіант 5";
			this->radioButton16->UseVisualStyleBackColor = true;
			this->radioButton16->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton16_CheckedChanged);
			// 
			// radioButton17
			// 
			this->radioButton17->AutoSize = true;
			this->radioButton17->Location = System::Drawing::Point(381, 35);
			this->radioButton17->Name = L"radioButton17";
			this->radioButton17->Size = System::Drawing::Size(106, 24);
			this->radioButton17->TabIndex = 5;
			this->radioButton17->Text = L"Варіант 4";
			this->radioButton17->UseVisualStyleBackColor = true;
			this->radioButton17->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton17_CheckedChanged);
			// 
			// radioButton18
			// 
			this->radioButton18->AutoSize = true;
			this->radioButton18->Location = System::Drawing::Point(263, 35);
			this->radioButton18->Name = L"radioButton18";
			this->radioButton18->Size = System::Drawing::Size(106, 24);
			this->radioButton18->TabIndex = 4;
			this->radioButton18->Text = L"Варіант 3";
			this->radioButton18->UseVisualStyleBackColor = true;
			this->radioButton18->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton18_CheckedChanged);
			// 
			// radioButton19
			// 
			this->radioButton19->AutoSize = true;
			this->radioButton19->Location = System::Drawing::Point(145, 35);
			this->radioButton19->Name = L"radioButton19";
			this->radioButton19->Size = System::Drawing::Size(106, 24);
			this->radioButton19->TabIndex = 3;
			this->radioButton19->Text = L"Варіант 2";
			this->radioButton19->UseVisualStyleBackColor = true;
			this->radioButton19->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton19_CheckedChanged);
			// 
			// radioButton20
			// 
			this->radioButton20->AutoSize = true;
			this->radioButton20->Checked = true;
			this->radioButton20->Location = System::Drawing::Point(27, 35);
			this->radioButton20->Name = L"radioButton20";
			this->radioButton20->Size = System::Drawing::Size(106, 24);
			this->radioButton20->TabIndex = 2;
			this->radioButton20->TabStop = true;
			this->radioButton20->Text = L"Варіант 1";
			this->radioButton20->UseVisualStyleBackColor = true;
			this->radioButton20->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton20_CheckedChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(970, 635);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(259, 65);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Розрахувати";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(799, 58);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(616, 554);
			this->richTextBox1->TabIndex = 5;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::richTextBox1_TextChanged);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->aboutProgramToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1468, 33);
			this->menuStrip1->TabIndex = 6;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// aboutProgramToolStripMenuItem
			// 
			this->aboutProgramToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->developerToolStripMenuItem,
					this->exitToolStripMenuItem
			});
			this->aboutProgramToolStripMenuItem->Name = L"aboutProgramToolStripMenuItem";
			this->aboutProgramToolStripMenuItem->Size = System::Drawing::Size(158, 29);
			this->aboutProgramToolStripMenuItem->Text = L"About program ";
			this->aboutProgramToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::aboutProgramToolStripMenuItem_Click);
			// 
			// developerToolStripMenuItem
			// 
			this->developerToolStripMenuItem->Name = L"developerToolStripMenuItem";
			this->developerToolStripMenuItem->Size = System::Drawing::Size(195, 34);
			this->developerToolStripMenuItem->Text = L"Developer";
			this->developerToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::developerToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(195, 34);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(269, 114);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(144, 29);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Завдання 1";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(269, 541);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(144, 29);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Завдання 2";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1468, 823);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->Laba);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"ТКО";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		MyForm::Text = "ТКО";

	}
	private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
		  
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->task1 = 1;
		//radioButton1->Select();
		
	}
	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->task1 = 2;
		//radioButton2->Select();
	}
	private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->task1 = 3;
		
	}
	private: System::Void radioButton4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->task1 = 4;
		
	}
	private: System::Void radioButton5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->task1 = 5;
		
	}
	private: System::Void radioButton6_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->task1 = 6;
	}
	private: System::Void radioButton7_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->task1 = 7;
		
	}
	private: System::Void radioButton8_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->task1 = 8;
		
	}
	private: System::Void radioButton9_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->task1 = 9;
		
	}
	private: System::Void radioButton10_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->task1 = 10;
	}
		   Rezistor CheckTermoStatus() {
			   switch (task2)
			   {
			   case 1:
				   return Rezistor(1.166, 1.533 * std::pow(10, -4)); //Si
				   break;
			   case 2:
				   return Rezistor(0.74, 2.333 * std::pow(10, -4)); //Ge
				   break;
			   case 3:
				   return Rezistor(0.334, 0.467 * std::pow(10, -4)); //Te
				   break;
			   case 4:
				   return Rezistor(0.81, 4.0 * std::pow(10, -4)); //GaSb
				   break;
			   case 5:
				   return Rezistor(0.43, 2.333 * std::pow(10, -4)); //InAs
				   break;
			   case 6:
				   return Rezistor(0.235, 1.833 * std::pow(10, -4)); //InSb
				   break;
			   case 7:
				   return Rezistor(0.29, -4.0 * std::pow(10, -4)); //PbS
				   break;
			   case 8:
				   return Rezistor(0.165, -2.5 * std::pow(10, -4)); //PbSe
				   break;
			   case 9:
				   return Rezistor(0.19, -4.0 * std::pow(10, -4)); //PbTe
				   break;
			   case 10:
				   return Rezistor(0.3, 5.667 * std::pow(10, -4)); //SnTe
				   break;
			   }
		   }
	///////////////

	private: System::Void radioButton20_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->task2 = 1;
	}

	private: System::Void radioButton19_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->task2 = 2;
		
	}
	private: System::Void radioButton18_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->task2 = 3;
		
	}
	private: System::Void radioButton17_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->task2 = 4;
		
	}
	private: System::Void radioButton16_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->task2 = 5;
		
	}
	private: System::Void radioButton15_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->task2 = 6;
		
	}
	private: System::Void radioButton14_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->task2 = 7;
		
	}
	private: System::Void radioButton13_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->task2 = 8;
		
	}
	private: System::Void radioButton12_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->task2 = 9;
		
	}

	private: System::Void radioButton11_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->task2 = 10;
		
	}

		   Metalls CheckMetalStatus() {
			   switch (task1)
			   {
			   case 1:
				   return Metalls(1.59 * std::pow(10, -8), 3.8 * std::pow(10, -3)); // Ag
				   break;
			   case 2:
				   return Metalls(1.68 * std::pow(10, -8), 3.9 * std::pow(10, -3)); // Cu
				   break;
			   case 3:
				   return Metalls(2.44 * std::pow(10, -8), 3.4 * std::pow(10, -3)); // Au
				   break;
			   case 4:
				   return Metalls(2.82 * std::pow(10, -8), 3.9 * std::pow(10, -3)); // Al
				   break;
			   case 5:
				   return Metalls(5.6 * std::pow(10, -8), 4.5 * std::pow(10, -3)); // W
				   break;
			   case 6:
				   return Metalls(5.9 * std::pow(10, -8), 3.7 * std::pow(10, -3)); // Zn
				   break;
			   case 7:
				   return Metalls(6.99 * std::pow(10, -8), 6 * std::pow(10, -3)); // Ni
				   break;
			   case 8:
				   return Metalls(10 * std::pow(10, -8), 5 * std::pow(10, -3)); // Fe
				   break;
			   case 9:
				   return Metalls(10.6 * std::pow(10, -8), 3.9 * std::pow(10, -3)); // Pt
				   break;
			   case 10:
				   return Metalls(22 * std::pow(10, -8), 3.9 * std::pow(10, -3)); // Pb
				   break;
			   }
		   }
	   /////
		   
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->Clear();
		richTextBox1->ForeColor = Color::Black;

		Laba->ForeColor = Color::Black;

		Rezistor rez = CheckTermoStatus();
		Metalls metal = CheckMetalStatus();

	Phisics obj(rez, metal, numericUpDown1->Value, numericUpDown2->Value);

	if (task1 == 0 && task2 == 0 && numericUpDown1->Value == 0 && numericUpDown2->Value == 0) {
		richTextBox1->ForeColor = Color::Red;
		richTextBox1->Text = ("\n\t\t\tERROR!!");
		Laba->ForeColor = Color::Red;

		MessageBox::Show("Оберіть варіант та заповніть порожні поля!", "Fatal Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {

		richTextBox1->AppendText("\t" + " \t\tЗавдання 1" + "\tЗавдання 2\n\n\t T" + " \t\tR(mOm)" + "\t\tR(kOm)\n");

		for (int i = 0; i < 14; i++) {
			if (task2 == 3 || task2 == 4 || task2 == 7 || task2 == 9)
				richTextBox1->AppendText("\t" + Convert::ToString(obj.Term[i]) + "\t\t" + obj.R_arr[i].ToString("0.000") + "\t\t" + obj.R_termo[i].ToString("0.000000") + "\n");
			else
				richTextBox1->AppendText("\t" + Convert::ToString(obj.Term[i]) + "\t\t" + obj.R_arr[i].ToString("0.000") + "\t\t" + obj.R_termo[i].ToString("0.000") + "\n");
		}

		richTextBox1->AppendText("\n\t\t" + (L"\u03C1") + "(20) = " + obj.get_ro().ToString("0.000000000") + "\tEg(0) = " + Convert::ToString(obj.get_close_zone()) + "(eB)\n\t\t\t\t\tR0 = " + (obj.get_zero_error()).ToString("0.000") + "(Om)");
	}
}
private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void contextMenuStrip1_Opening(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
}
private: System::Void Laba_MouseHover(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void developerToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	(gcnew System::Diagnostics::Process())->Start("https://github.com/maxpe3447/laboratory-TKO-simulation");
}
private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm::Close();
}
private: System::Void aboutProgramToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton21_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->task1 = 1;
	radioButton1->Select();
}
};
}
