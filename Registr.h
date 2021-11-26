#pragma once

namespace TFStudents 
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Registr
	/// </summary>
	public ref class Registr : public System::Windows::Forms::Form
	{
	public:
		Registr(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Registr()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::MaskedTextBox^ maskedTextBoxFam;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	public: System::Windows::Forms::MaskedTextBox^ maskedTextBoxName;

	private: System::Windows::Forms::Label^ label3;
	public: System::Windows::Forms::MaskedTextBox^ maskedTextBoxMidName;


	private: System::Windows::Forms::Label^ label4;
	public: System::Windows::Forms::MaskedTextBox^ maskedTextBoxGroup;
	private: System::Windows::Forms::Button^ buttonStartTest;

	public: System::Windows::Forms::ComboBox^ comboBoxTheme;

	private: System::Windows::Forms::Label^ label5;
	private: System::ComponentModel::IContainer^ components;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Registr::typeid));
			this->maskedTextBoxFam = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBoxName = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBoxMidName = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBoxGroup = (gcnew System::Windows::Forms::MaskedTextBox());
			this->buttonStartTest = (gcnew System::Windows::Forms::Button());
			this->comboBoxTheme = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// maskedTextBoxFam
			// 
			this->maskedTextBoxFam->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->maskedTextBoxFam->Location = System::Drawing::Point(65, 57);
			this->maskedTextBoxFam->Name = L"maskedTextBoxFam";
			this->maskedTextBoxFam->Size = System::Drawing::Size(169, 20);
			this->maskedTextBoxFam->TabIndex = 0;
			this->maskedTextBoxFam->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Registr::maskedTextBoxFam_KeyDown);
			this->maskedTextBoxFam->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Registr::maskedTextBoxFam_KeyPress);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(61, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(96, 24);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Фамилия:";
			this->label1->Click += gcnew System::EventHandler(this, &Registr::label1_Click);
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(61, 94);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 24);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Имя:";
			this->label2->Click += gcnew System::EventHandler(this, &Registr::label2_Click);
			// 
			// maskedTextBoxName
			// 
			this->maskedTextBoxName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->maskedTextBoxName->Location = System::Drawing::Point(65, 121);
			this->maskedTextBoxName->Name = L"maskedTextBoxName";
			this->maskedTextBoxName->Size = System::Drawing::Size(169, 20);
			this->maskedTextBoxName->TabIndex = 2;
			this->maskedTextBoxName->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Registr::maskedTextBoxName_KeyDown);
			this->maskedTextBoxName->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Registr::maskedTextBoxFam_KeyPress);
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(61, 163);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(103, 24);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Отчество:";
			this->label3->Click += gcnew System::EventHandler(this, &Registr::label3_Click);
			// 
			// maskedTextBoxMidName
			// 
			this->maskedTextBoxMidName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->maskedTextBoxMidName->Location = System::Drawing::Point(65, 190);
			this->maskedTextBoxMidName->Name = L"maskedTextBoxMidName";
			this->maskedTextBoxMidName->Size = System::Drawing::Size(169, 20);
			this->maskedTextBoxMidName->TabIndex = 4;
			this->maskedTextBoxMidName->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Registr::maskedTextBoxMidName_KeyDown);
			this->maskedTextBoxMidName->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Registr::maskedTextBoxFam_KeyPress);
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(61, 235);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(78, 24);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Группа:";
			this->label4->Click += gcnew System::EventHandler(this, &Registr::label4_Click);
			// 
			// maskedTextBoxGroup
			// 
			this->maskedTextBoxGroup->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->maskedTextBoxGroup->Location = System::Drawing::Point(65, 262);
			this->maskedTextBoxGroup->Name = L"maskedTextBoxGroup";
			this->maskedTextBoxGroup->Size = System::Drawing::Size(169, 20);
			this->maskedTextBoxGroup->TabIndex = 6;
			this->maskedTextBoxGroup->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Registr::maskedTextBoxGroup_KeyDown);
			// 
			// buttonStartTest
			// 
			this->buttonStartTest->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->buttonStartTest->BackColor = System::Drawing::Color::AliceBlue;
			this->buttonStartTest->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonStartTest->FlatAppearance->MouseDownBackColor = System::Drawing::Color::AntiqueWhite;
			this->buttonStartTest->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::Info;
			this->buttonStartTest->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonStartTest->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonStartTest->Location = System::Drawing::Point(64, 386);
			this->buttonStartTest->Name = L"buttonStartTest";
			this->buttonStartTest->Size = System::Drawing::Size(170, 37);
			this->buttonStartTest->TabIndex = 8;
			this->buttonStartTest->Text = L"Начать тестирование";
			this->buttonStartTest->UseVisualStyleBackColor = false;
			this->buttonStartTest->Click += gcnew System::EventHandler(this, &Registr::buttonStartTest_Click);
			// 
			// comboBoxTheme
			// 
			this->comboBoxTheme->DisplayMember = L"0";
			this->comboBoxTheme->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxTheme->FormattingEnabled = true;
			this->comboBoxTheme->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Микроэкономика Часть 1", L"Микроэкономика Часть 2",
					L"Микроэкономика Часть 3", L"----------------------------", L"Макроэкономика Часть 1", L"Макроэкономика Часть 2", L"Макроэкономика Часть 3"
			});
			this->comboBoxTheme->Location = System::Drawing::Point(64, 331);
			this->comboBoxTheme->Name = L"comboBoxTheme";
			this->comboBoxTheme->Size = System::Drawing::Size(170, 21);
			this->comboBoxTheme->TabIndex = 9;
			this->comboBoxTheme->SelectedIndexChanged += gcnew System::EventHandler(this, &Registr::comboBoxTheme_SelectedIndexChanged);
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(61, 304);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(56, 24);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Тема";
			// 
			// Registr
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(301, 461);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->comboBoxTheme);
			this->Controls->Add(this->buttonStartTest);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->maskedTextBoxGroup);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->maskedTextBoxMidName);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->maskedTextBoxName);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->maskedTextBoxFam);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(317, 500);
			this->MinimumSize = System::Drawing::Size(317, 500);
			this->Name = L"Registr";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Экономическая теория";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		/* ... Функции и переменные ... */
		// TODO:
		/* ^^^ Функции и переменные ^^^ */


		/* ... События ... */
private: System::Void maskedTextBoxFam_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);
private: System::Void maskedTextBoxName_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);
private: System::Void maskedTextBoxMidName_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);
private: System::Void maskedTextBoxGroup_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonStartTest_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void comboBoxTheme_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void maskedTextBoxFam_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e);
};		/* ^^^ События ^^^ */
}
