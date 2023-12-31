#pragma once

namespace Calculator {

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

	private: System::Windows::Forms::Label^ Display;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ buttonDot;

	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ buttonMultiply;



	private: System::Windows::Forms::Button^ buttondDvide;
	private: System::Windows::Forms::Button^ buttonMinus;
	private: System::Windows::Forms::Button^ buttonEquals;
	private: System::Windows::Forms::Button^ buttonClear;





	private: System::Windows::Forms::Button^ buttonPercent;
	private: System::Windows::Forms::Button^ buttonPlusMinus;


	private: System::Windows::Forms::Button^ buttonPlus;


	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Display = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->buttonDot = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->buttonMultiply = (gcnew System::Windows::Forms::Button());
			this->buttondDvide = (gcnew System::Windows::Forms::Button());
			this->buttonMinus = (gcnew System::Windows::Forms::Button());
			this->buttonEquals = (gcnew System::Windows::Forms::Button());
			this->buttonClear = (gcnew System::Windows::Forms::Button());
			this->buttonPercent = (gcnew System::Windows::Forms::Button());
			this->buttonPlusMinus = (gcnew System::Windows::Forms::Button());
			this->buttonPlus = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Display
			// 
			this->Display->Font = (gcnew System::Drawing::Font(L"Arial", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Display->ForeColor = System::Drawing::Color::White;
			this->Display->Location = System::Drawing::Point(30, 28);
			this->Display->Name = L"Display";
			this->Display->Size = System::Drawing::Size(230, 45);
			this->Display->TabIndex = 1;
			this->Display->Text = L"0";
			this->Display->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(34, 297);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(110, 42);
			this->button2->TabIndex = 2;
			this->button2->Text = L"0";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::ButtonWrite);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(34, 249);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(52, 42);
			this->button3->TabIndex = 3;
			this->button3->Text = L"1";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::ButtonWrite);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(34, 201);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(52, 42);
			this->button4->TabIndex = 4;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::ButtonWrite);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(34, 153);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(52, 42);
			this->button5->TabIndex = 5;
			this->button5->Text = L"7";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::ButtonWrite);
			// 
			// buttonDot
			// 
			this->buttonDot->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->buttonDot->FlatAppearance->BorderSize = 0;
			this->buttonDot->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonDot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonDot->ForeColor = System::Drawing::Color::White;
			this->buttonDot->Location = System::Drawing::Point(150, 297);
			this->buttonDot->Name = L"buttonDot";
			this->buttonDot->Size = System::Drawing::Size(52, 42);
			this->buttonDot->TabIndex = 6;
			this->buttonDot->Text = L".";
			this->buttonDot->UseVisualStyleBackColor = false;
			this->buttonDot->Click += gcnew System::EventHandler(this, &MyForm::buttonDot_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::White;
			this->button7->Location = System::Drawing::Point(92, 249);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(52, 42);
			this->button7->TabIndex = 7;
			this->button7->Text = L"2";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::ButtonWrite);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::White;
			this->button8->Location = System::Drawing::Point(92, 201);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(52, 42);
			this->button8->TabIndex = 8;
			this->button8->Text = L"5";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::ButtonWrite);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::White;
			this->button9->Location = System::Drawing::Point(92, 153);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(52, 42);
			this->button9->TabIndex = 9;
			this->button9->Text = L"8";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::ButtonWrite);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->button10->FlatAppearance->BorderSize = 0;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::Color::White;
			this->button10->Location = System::Drawing::Point(150, 153);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(52, 42);
			this->button10->TabIndex = 10;
			this->button10->Text = L"9";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::ButtonWrite);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->button11->FlatAppearance->BorderSize = 0;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::Color::White;
			this->button11->Location = System::Drawing::Point(150, 201);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(52, 42);
			this->button11->TabIndex = 11;
			this->button11->Text = L"6";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::ButtonWrite);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->button12->FlatAppearance->BorderSize = 0;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->ForeColor = System::Drawing::Color::White;
			this->button12->Location = System::Drawing::Point(150, 249);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(52, 42);
			this->button12->TabIndex = 12;
			this->button12->Text = L"3";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::ButtonWrite);
			// 
			// buttonMultiply
			// 
			this->buttonMultiply->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(159)),
				static_cast<System::Int32>(static_cast<System::Byte>(10)));
			this->buttonMultiply->FlatAppearance->BorderSize = 0;
			this->buttonMultiply->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonMultiply->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonMultiply->ForeColor = System::Drawing::Color::White;
			this->buttonMultiply->Location = System::Drawing::Point(208, 153);
			this->buttonMultiply->Name = L"buttonMultiply";
			this->buttonMultiply->Size = System::Drawing::Size(52, 42);
			this->buttonMultiply->TabIndex = 13;
			this->buttonMultiply->Text = L"×";
			this->buttonMultiply->UseVisualStyleBackColor = false;
			this->buttonMultiply->Click += gcnew System::EventHandler(this, &MyForm::buttonMultiply_Click);
			// 
			// buttondDvide
			// 
			this->buttondDvide->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(159)),
				static_cast<System::Int32>(static_cast<System::Byte>(10)));
			this->buttondDvide->FlatAppearance->BorderSize = 0;
			this->buttondDvide->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttondDvide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttondDvide->ForeColor = System::Drawing::Color::White;
			this->buttondDvide->Location = System::Drawing::Point(208, 105);
			this->buttondDvide->Name = L"buttondDvide";
			this->buttondDvide->Size = System::Drawing::Size(52, 42);
			this->buttondDvide->TabIndex = 14;
			this->buttondDvide->Text = L"÷";
			this->buttondDvide->UseVisualStyleBackColor = false;
			this->buttondDvide->Click += gcnew System::EventHandler(this, &MyForm::buttondDvide_Click);
			// 
			// buttonMinus
			// 
			this->buttonMinus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(159)),
				static_cast<System::Int32>(static_cast<System::Byte>(10)));
			this->buttonMinus->FlatAppearance->BorderSize = 0;
			this->buttonMinus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonMinus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonMinus->ForeColor = System::Drawing::Color::White;
			this->buttonMinus->Location = System::Drawing::Point(208, 201);
			this->buttonMinus->Name = L"buttonMinus";
			this->buttonMinus->Size = System::Drawing::Size(52, 42);
			this->buttonMinus->TabIndex = 15;
			this->buttonMinus->Text = L"-";
			this->buttonMinus->UseVisualStyleBackColor = false;
			this->buttonMinus->Click += gcnew System::EventHandler(this, &MyForm::buttonMinus_Click);
			// 
			// buttonEquals
			// 
			this->buttonEquals->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(159)),
				static_cast<System::Int32>(static_cast<System::Byte>(10)));
			this->buttonEquals->FlatAppearance->BorderSize = 0;
			this->buttonEquals->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonEquals->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonEquals->ForeColor = System::Drawing::Color::White;
			this->buttonEquals->Location = System::Drawing::Point(208, 297);
			this->buttonEquals->Name = L"buttonEquals";
			this->buttonEquals->Size = System::Drawing::Size(52, 42);
			this->buttonEquals->TabIndex = 16;
			this->buttonEquals->Text = L"=";
			this->buttonEquals->UseVisualStyleBackColor = false;
			this->buttonEquals->Click += gcnew System::EventHandler(this, &MyForm::buttonEquals_Click);
			// 
			// buttonClear
			// 
			this->buttonClear->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(165)), static_cast<System::Int32>(static_cast<System::Byte>(165)),
				static_cast<System::Int32>(static_cast<System::Byte>(165)));
			this->buttonClear->FlatAppearance->BorderSize = 0;
			this->buttonClear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonClear->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonClear->Location = System::Drawing::Point(34, 105);
			this->buttonClear->Name = L"buttonClear";
			this->buttonClear->Size = System::Drawing::Size(52, 42);
			this->buttonClear->TabIndex = 17;
			this->buttonClear->Text = L"AC";
			this->buttonClear->UseVisualStyleBackColor = false;
			this->buttonClear->Click += gcnew System::EventHandler(this, &MyForm::buttonClear_Click);
			// 
			// buttonPercent
			// 
			this->buttonPercent->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(165)), static_cast<System::Int32>(static_cast<System::Byte>(165)),
				static_cast<System::Int32>(static_cast<System::Byte>(165)));
			this->buttonPercent->FlatAppearance->BorderSize = 0;
			this->buttonPercent->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonPercent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonPercent->Location = System::Drawing::Point(150, 105);
			this->buttonPercent->Name = L"buttonPercent";
			this->buttonPercent->Size = System::Drawing::Size(52, 42);
			this->buttonPercent->TabIndex = 18;
			this->buttonPercent->Text = L"%";
			this->buttonPercent->UseVisualStyleBackColor = false;
			this->buttonPercent->Click += gcnew System::EventHandler(this, &MyForm::buttonPercent_Click);
			// 
			// buttonPlusMinus
			// 
			this->buttonPlusMinus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(165)), static_cast<System::Int32>(static_cast<System::Byte>(165)),
				static_cast<System::Int32>(static_cast<System::Byte>(165)));
			this->buttonPlusMinus->FlatAppearance->BorderSize = 0;
			this->buttonPlusMinus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonPlusMinus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonPlusMinus->Location = System::Drawing::Point(92, 105);
			this->buttonPlusMinus->Name = L"buttonPlusMinus";
			this->buttonPlusMinus->Size = System::Drawing::Size(52, 42);
			this->buttonPlusMinus->TabIndex = 19;
			this->buttonPlusMinus->Text = L"+/-";
			this->buttonPlusMinus->UseVisualStyleBackColor = false;
			this->buttonPlusMinus->Click += gcnew System::EventHandler(this, &MyForm::buttonPlusMinus_Click);
			// 
			// buttonPlus
			// 
			this->buttonPlus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(159)),
				static_cast<System::Int32>(static_cast<System::Byte>(10)));
			this->buttonPlus->FlatAppearance->BorderSize = 0;
			this->buttonPlus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonPlus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonPlus->ForeColor = System::Drawing::Color::White;
			this->buttonPlus->Location = System::Drawing::Point(208, 249);
			this->buttonPlus->Name = L"buttonPlus";
			this->buttonPlus->Size = System::Drawing::Size(52, 42);
			this->buttonPlus->TabIndex = 20;
			this->buttonPlus->Text = L"+";
			this->buttonPlus->UseVisualStyleBackColor = false;
			this->buttonPlus->Click += gcnew System::EventHandler(this, &MyForm::buttonPlus_Click);
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(284, 377);
			this->Controls->Add(this->buttonPlus);
			this->Controls->Add(this->buttonPlusMinus);
			this->Controls->Add(this->buttonPercent);
			this->Controls->Add(this->buttonClear);
			this->Controls->Add(this->buttonEquals);
			this->Controls->Add(this->buttonMinus);
			this->Controls->Add(this->buttondDvide);
			this->Controls->Add(this->buttonMultiply);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->buttonDot);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->Display);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"MyForm";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Iphone";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: double firstNum;
	private: char action = ' ';

	private: bool isMousePress = false;
	private: Point _clickPoint;
	private: Point _formStartPoint;

	private: System::Void ButtonClose(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void ButtonWrite(System::Object^ sender, System::EventArgs^ e) {
		Button^ button = safe_cast<Button^>(sender);

		if (this->Display->Text == "0") {
			this->Display->Text = button->Text;
		}
		else {
			this->Display->Text += button->Text;
		}
	}

	private: System::Void buttonMinus_Click(System::Object^ sender, System::EventArgs^ e) {
		userAction('-');
	}
	private: System::Void buttondDvide_Click(System::Object^ sender, System::EventArgs^ e) {
		userAction('/');
	}
	private: System::Void buttonMultiply_Click(System::Object^ sender, System::EventArgs^ e) {
		userAction('*');
	}
	private: System::Void buttonPlus_Click(System::Object^ sender, System::EventArgs^ e) {
		userAction('+');
	}
	private: System::Void userAction(char action) {
		this->firstNum = System::Convert::ToDouble(this->Display->Text);
		this->action = action;
		this->Display->Text = "0";
		   }
	private: System::Void buttonEquals_Click(System::Object^ sender, System::EventArgs^ e) {
		if (action == ' ') {
			return;
		}
		double result;
		double secondNum = System::Convert::ToDouble(this->Display->Text);
		switch (this->action) {
		case'+':
			result = firstNum + secondNum;
			break;
		case'-':
			result = firstNum - secondNum;
			break;
		case'/':
			if (secondNum == 0) {
				result = 0;
				MessageBox::Show(this, "Na nol' delit' nelsya, dubina", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else {
				result = firstNum - secondNum;
			}
			break;
		case'*':
			result = firstNum * secondNum;
			break;
		case'%':
			result = firstNum * secondNum / 100;
			break;
		}
		this->Display->Text = System::Convert::ToString(result);
	}
	
	private: System::Void buttonClear_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Display->Text = "0";
		firstNum = 0;
		action = ' ';
	}
	private: System::Void buttonPlusMinus_Click(System::Object^ sender, System::EventArgs^ e) {
		double num = System::Convert::ToDouble(this->Display->Text);
		num *= -1;
		this->Display->Text = System::Convert::ToString(num);
	}
	private: System::Void buttonPercent_Click(System::Object^ sender, System::EventArgs^ e) {
		userAction('%');
	}
	private: System::Void buttonDot_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!this->Display->Text->Contains(".")) {
			this->Display->Text += ".";
		}
	}
	
};
}
