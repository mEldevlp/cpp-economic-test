#pragma once
#include "Registr.h"

namespace TFStudents {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Passtest
	/// </summary>
	public ref class Passtest : public System::Windows::Forms::Form
	{
	public:
		Passtest(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
		Passtest(Registr^ f)
		{
			InitializeComponent();

			mainForm = f;

			Theme = f->comboBoxTheme->Text;

			Name = f->maskedTextBoxName->Text;
			Fam = f->maskedTextBoxFam->Text;
			MidName = f->maskedTextBoxMidName->Text;
			Group = f->maskedTextBoxGroup->Text;

			_RightAnswerCount = 0;
			_QuestionCount = 0;
			Passagetime = 900;

			StartTest();
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Passtest()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labelQuestion;
	private: System::Windows::Forms::Button^ buttonAnswer1;
	private: System::Windows::Forms::Button^ buttonAnswer2;
	private: System::Windows::Forms::Button^ buttonAnswer3;
	private: System::Windows::Forms::Button^ buttonAnswer4;
	private: System::Windows::Forms::Button^ buttonAnswer5;
	private: System::Windows::Forms::Button^ buttonAnswer6;
	private: System::Windows::Forms::Label^ labelQuestionCounter;


	private: System::Windows::Forms::Label^ labelTimer;

	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Label^ labelAssess;
	private: System::Windows::Forms::Label^ labelInfo;

	private: System::ComponentModel::IContainer^ components;

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Passtest::typeid));
			this->labelQuestion = (gcnew System::Windows::Forms::Label());
			this->buttonAnswer1 = (gcnew System::Windows::Forms::Button());
			this->buttonAnswer2 = (gcnew System::Windows::Forms::Button());
			this->buttonAnswer3 = (gcnew System::Windows::Forms::Button());
			this->buttonAnswer4 = (gcnew System::Windows::Forms::Button());
			this->buttonAnswer5 = (gcnew System::Windows::Forms::Button());
			this->buttonAnswer6 = (gcnew System::Windows::Forms::Button());
			this->labelQuestionCounter = (gcnew System::Windows::Forms::Label());
			this->labelTimer = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->labelAssess = (gcnew System::Windows::Forms::Label());
			this->labelInfo = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// labelQuestion
			// 
			this->labelQuestion->AutoSize = true;
			this->labelQuestion->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelQuestion->Location = System::Drawing::Point(12, 9);
			this->labelQuestion->MaximumSize = System::Drawing::Size(597, 0);
			this->labelQuestion->Name = L"labelQuestion";
			this->labelQuestion->Size = System::Drawing::Size(596, 46);
			this->labelQuestion->TabIndex = 0;
			this->labelQuestion->Text = L"отражает изменени€ совокупного реального объЄма производства всех товаров и услуг"
				L" в св€зи с изменением уровн€ цен.";
			// 
			// buttonAnswer1
			// 
			this->buttonAnswer1->BackColor = System::Drawing::Color::AliceBlue;
			this->buttonAnswer1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonAnswer1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::AntiqueWhite;
			this->buttonAnswer1->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::Info;
			this->buttonAnswer1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonAnswer1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonAnswer1->Location = System::Drawing::Point(17, 170);
			this->buttonAnswer1->Name = L"buttonAnswer1";
			this->buttonAnswer1->Size = System::Drawing::Size(200, 100);
			this->buttonAnswer1->TabIndex = 1;
			this->buttonAnswer1->Text = L" рива€ AS";
			this->buttonAnswer1->UseVisualStyleBackColor = false;
			this->buttonAnswer1->Click += gcnew System::EventHandler(this, &Passtest::buttonAnswer_Click);
			// 
			// buttonAnswer2
			// 
			this->buttonAnswer2->BackColor = System::Drawing::Color::AliceBlue;
			this->buttonAnswer2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonAnswer2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::AntiqueWhite;
			this->buttonAnswer2->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::Info;
			this->buttonAnswer2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonAnswer2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonAnswer2->Location = System::Drawing::Point(223, 170);
			this->buttonAnswer2->Name = L"buttonAnswer2";
			this->buttonAnswer2->Size = System::Drawing::Size(200, 100);
			this->buttonAnswer2->TabIndex = 2;
			this->buttonAnswer2->Text = L"2";
			this->buttonAnswer2->UseVisualStyleBackColor = false;
			this->buttonAnswer2->Click += gcnew System::EventHandler(this, &Passtest::buttonAnswer_Click);
			// 
			// buttonAnswer3
			// 
			this->buttonAnswer3->BackColor = System::Drawing::Color::AliceBlue;
			this->buttonAnswer3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonAnswer3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::AntiqueWhite;
			this->buttonAnswer3->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::Info;
			this->buttonAnswer3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonAnswer3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonAnswer3->Location = System::Drawing::Point(429, 170);
			this->buttonAnswer3->Name = L"buttonAnswer3";
			this->buttonAnswer3->Size = System::Drawing::Size(200, 100);
			this->buttonAnswer3->TabIndex = 3;
			this->buttonAnswer3->Text = L"3";
			this->buttonAnswer3->UseVisualStyleBackColor = false;
			this->buttonAnswer3->Click += gcnew System::EventHandler(this, &Passtest::buttonAnswer_Click);
			// 
			// buttonAnswer4
			// 
			this->buttonAnswer4->BackColor = System::Drawing::Color::AliceBlue;
			this->buttonAnswer4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonAnswer4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::AntiqueWhite;
			this->buttonAnswer4->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::Info;
			this->buttonAnswer4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonAnswer4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonAnswer4->Location = System::Drawing::Point(17, 276);
			this->buttonAnswer4->Name = L"buttonAnswer4";
			this->buttonAnswer4->Size = System::Drawing::Size(200, 100);
			this->buttonAnswer4->TabIndex = 4;
			this->buttonAnswer4->Text = L"ѕарадокс бережливости";
			this->buttonAnswer4->UseVisualStyleBackColor = false;
			this->buttonAnswer4->Click += gcnew System::EventHandler(this, &Passtest::buttonAnswer_Click);
			// 
			// buttonAnswer5
			// 
			this->buttonAnswer5->BackColor = System::Drawing::Color::AliceBlue;
			this->buttonAnswer5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonAnswer5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::AntiqueWhite;
			this->buttonAnswer5->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::Info;
			this->buttonAnswer5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonAnswer5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonAnswer5->Location = System::Drawing::Point(223, 276);
			this->buttonAnswer5->Name = L"buttonAnswer5";
			this->buttonAnswer5->Size = System::Drawing::Size(200, 100);
			this->buttonAnswer5->TabIndex = 5;
			this->buttonAnswer5->Text = L"5";
			this->buttonAnswer5->UseVisualStyleBackColor = false;
			this->buttonAnswer5->Click += gcnew System::EventHandler(this, &Passtest::buttonAnswer_Click);
			// 
			// buttonAnswer6
			// 
			this->buttonAnswer6->BackColor = System::Drawing::Color::AliceBlue;
			this->buttonAnswer6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonAnswer6->FlatAppearance->MouseDownBackColor = System::Drawing::Color::AntiqueWhite;
			this->buttonAnswer6->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::Info;
			this->buttonAnswer6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonAnswer6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonAnswer6->Location = System::Drawing::Point(429, 276);
			this->buttonAnswer6->Name = L"buttonAnswer6";
			this->buttonAnswer6->Size = System::Drawing::Size(200, 100);
			this->buttonAnswer6->TabIndex = 6;
			this->buttonAnswer6->Text = L"6";
			this->buttonAnswer6->UseVisualStyleBackColor = false;
			this->buttonAnswer6->Click += gcnew System::EventHandler(this, &Passtest::buttonAnswer_Click);
			// 
			// labelQuestionCounter
			// 
			this->labelQuestionCounter->AutoSize = true;
			this->labelQuestionCounter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->labelQuestionCounter->Location = System::Drawing::Point(12, 416);
			this->labelQuestionCounter->MaximumSize = System::Drawing::Size(1000, 0);
			this->labelQuestionCounter->Name = L"labelQuestionCounter";
			this->labelQuestionCounter->Size = System::Drawing::Size(139, 25);
			this->labelQuestionCounter->TabIndex = 7;
			this->labelQuestionCounter->Text = L"¬опрос: 1/25";
			// 
			// labelTimer
			// 
			this->labelTimer->AutoSize = true;
			this->labelTimer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelTimer->Location = System::Drawing::Point(357, 413);
			this->labelTimer->MaximumSize = System::Drawing::Size(1000, 0);
			this->labelTimer->Name = L"labelTimer";
			this->labelTimer->Size = System::Drawing::Size(284, 25);
			this->labelTimer->TabIndex = 9;
			this->labelTimer->Text = L"ќсталось времени - 15 : 00";
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Passtest::timer1_Tick);
			// 
			// labelAssess
			// 
			this->labelAssess->AutoSize = true;
			this->labelAssess->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 140));
			this->labelAssess->ForeColor = System::Drawing::SystemColors::ControlText;
			this->labelAssess->Location = System::Drawing::Point(223, 230);
			this->labelAssess->Name = L"labelAssess";
			this->labelAssess->Size = System::Drawing::Size(193, 211);
			this->labelAssess->TabIndex = 11;
			this->labelAssess->Text = L"4";
			this->labelAssess->Visible = false;
			// 
			// labelInfo
			// 
			this->labelInfo->AutoSize = true;
			this->labelInfo->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelInfo->Location = System::Drawing::Point(12, 9);
			this->labelInfo->Name = L"labelInfo";
			this->labelInfo->Size = System::Drawing::Size(564, 27);
			this->labelInfo->TabIndex = 12;
			this->labelInfo->Text = L"им€, фам, отчество, группа, верных ответов, решил за";
			this->labelInfo->Visible = false;
			// 
			// Passtest
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(647, 451);
			this->Controls->Add(this->labelInfo);
			this->Controls->Add(this->labelAssess);
			this->Controls->Add(this->labelTimer);
			this->Controls->Add(this->labelQuestionCounter);
			this->Controls->Add(this->buttonAnswer6);
			this->Controls->Add(this->buttonAnswer5);
			this->Controls->Add(this->buttonAnswer4);
			this->Controls->Add(this->buttonAnswer3);
			this->Controls->Add(this->buttonAnswer2);
			this->Controls->Add(this->buttonAnswer1);
			this->Controls->Add(this->labelQuestion);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(663, 490);
			this->MinimumSize = System::Drawing::Size(663, 490);
			this->Name = L"Passtest";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Ёкономическа€ теори€";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Passtest::Passtest_FormClosing);
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Passtest::Passtest_FormClosed);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		Registr^ mainForm;
		String^ Theme;

		String^ Name;
		String^ Fam;
		String^ MidName;
		String^ Group;

		short Passagetime;

		public: array<String^>^ arrayOfQuestion;
		public: array<String^>^ arrayOfAnswers;

		private:

		int timeCounter;

		int _RightAnswerCount;
		int _QuestionCount;

		short SizeOfQAarray;
		short PART;

		void StartTest();
		void StopTest();

		int getAssess(int score);

		void StartTestMircoEcoPart_I();
		void StartTestMircoEcoPart_II();
		void StartTestMircoEcoPart_III();

		void StartTestMacroEco_I();
		void StartTestMacroEco_II();
		void StartTestMacroEco_III();

		void RandomQuestion();
		void arrShafle(array<String^>^ arrQues, array<String^>^ arrAnsw, int lenght);

	private: System::Void Passtest_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e);
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonAnswer_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Passtest_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e);
};
}
