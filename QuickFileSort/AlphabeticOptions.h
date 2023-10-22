#pragma once

namespace QuickFileSort {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AlphabeticOptions
	/// </summary>
	public ref class AlphabeticOptions : public System::Windows::Forms::Form
	{
	public:
		AlphabeticOptions(void)
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
		~AlphabeticOptions()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::RadioButton^ AlphabeticChoiseUp;
	public: System::Windows::Forms::RadioButton^ AlphabeticChoiseLow;

	public: System::Windows::Forms::NumericUpDown^ LettersCount;
	private: System::Windows::Forms::Label^ Description1;
	public:
	protected:

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
			this->AlphabeticChoiseUp = (gcnew System::Windows::Forms::RadioButton());
			this->AlphabeticChoiseLow = (gcnew System::Windows::Forms::RadioButton());
			this->LettersCount = (gcnew System::Windows::Forms::NumericUpDown());
			this->Description1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LettersCount))->BeginInit();
			this->SuspendLayout();
			// 
			// AlphabeticChoiseUp
			// 
			this->AlphabeticChoiseUp->AutoSize = true;
			this->AlphabeticChoiseUp->Checked = true;
			this->AlphabeticChoiseUp->Location = System::Drawing::Point(88, 26);
			this->AlphabeticChoiseUp->Name = L"AlphabeticChoiseUp";
			this->AlphabeticChoiseUp->Size = System::Drawing::Size(58, 17);
			this->AlphabeticChoiseUp->TabIndex = 0;
			this->AlphabeticChoiseUp->TabStop = true;
			this->AlphabeticChoiseUp->Text = L"A, B, C";
			this->AlphabeticChoiseUp->UseVisualStyleBackColor = true;
			this->AlphabeticChoiseUp->CheckedChanged += gcnew System::EventHandler(this, &AlphabeticOptions::AlphabeticChoiseUp_CheckedChanged);
			// 
			// AlphabeticChoiseLow
			// 
			this->AlphabeticChoiseLow->AutoSize = true;
			this->AlphabeticChoiseLow->Location = System::Drawing::Point(187, 26);
			this->AlphabeticChoiseLow->Name = L"AlphabeticChoiseLow";
			this->AlphabeticChoiseLow->Size = System::Drawing::Size(55, 17);
			this->AlphabeticChoiseLow->TabIndex = 1;
			this->AlphabeticChoiseLow->Text = L"a, b, c";
			this->AlphabeticChoiseLow->UseVisualStyleBackColor = true;
			// 
			// LettersCount
			// 
			this->LettersCount->Location = System::Drawing::Point(137, 67);
			this->LettersCount->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 256, 0, 0, 0 });
			this->LettersCount->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->LettersCount->Name = L"LettersCount";
			this->LettersCount->Size = System::Drawing::Size(56, 20);
			this->LettersCount->TabIndex = 3;
			this->LettersCount->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// Description1
			// 
			this->Description1->AutoSize = true;
			this->Description1->Location = System::Drawing::Point(47, 69);
			this->Description1->Name = L"Description1";
			this->Description1->Size = System::Drawing::Size(87, 13);
			this->Description1->TabIndex = 4;
			this->Description1->Text = L"Characters used:";
			// 
			// AlphabeticOptions
			// 
			this->AccessibleRole = System::Windows::Forms::AccessibleRole::Pane;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(346, 149);
			this->ControlBox = false;
			this->Controls->Add(this->Description1);
			this->Controls->Add(this->LettersCount);
			this->Controls->Add(this->AlphabeticChoiseLow);
			this->Controls->Add(this->AlphabeticChoiseUp);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Location = System::Drawing::Point(5, 100);
			this->Name = L"AlphabeticOptions";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"AlphabeticOptions";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LettersCount))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void AlphabeticChoiseUp_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
