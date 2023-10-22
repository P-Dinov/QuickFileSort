#pragma once

namespace QuickFileSort {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DateOptions
	/// </summary>
	public ref class DateOptions : public System::Windows::Forms::Form
	{
	public:
		DateOptions(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			DateType->SelectedIndex = 1;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DateOptions()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::CheckBox^ YearDivision;
	public: System::Windows::Forms::CheckBox^ MonthDivision;
	public: System::Windows::Forms::CheckBox^ DayDivision;
	public: System::Windows::Forms::ComboBox^ DateType;

	public:
	protected:

	public:


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
			this->YearDivision = (gcnew System::Windows::Forms::CheckBox());
			this->MonthDivision = (gcnew System::Windows::Forms::CheckBox());
			this->DayDivision = (gcnew System::Windows::Forms::CheckBox());
			this->DateType = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// YearDivision
			// 
			this->YearDivision->AutoSize = true;
			this->YearDivision->Checked = true;
			this->YearDivision->CheckState = System::Windows::Forms::CheckState::Checked;
			this->YearDivision->Location = System::Drawing::Point(32, 47);
			this->YearDivision->Name = L"YearDivision";
			this->YearDivision->Size = System::Drawing::Size(48, 17);
			this->YearDivision->TabIndex = 0;
			this->YearDivision->Text = L"Year";
			this->YearDivision->UseVisualStyleBackColor = true;
			// 
			// MonthDivision
			// 
			this->MonthDivision->AutoSize = true;
			this->MonthDivision->Checked = true;
			this->MonthDivision->CheckState = System::Windows::Forms::CheckState::Checked;
			this->MonthDivision->Location = System::Drawing::Point(119, 47);
			this->MonthDivision->Name = L"MonthDivision";
			this->MonthDivision->Size = System::Drawing::Size(56, 17);
			this->MonthDivision->TabIndex = 1;
			this->MonthDivision->Text = L"Month";
			this->MonthDivision->UseVisualStyleBackColor = true;
			// 
			// DayDivision
			// 
			this->DayDivision->AutoSize = true;
			this->DayDivision->Checked = true;
			this->DayDivision->CheckState = System::Windows::Forms::CheckState::Checked;
			this->DayDivision->Location = System::Drawing::Point(206, 47);
			this->DayDivision->Name = L"DayDivision";
			this->DayDivision->Size = System::Drawing::Size(45, 17);
			this->DayDivision->TabIndex = 2;
			this->DayDivision->Text = L"Day";
			this->DayDivision->UseVisualStyleBackColor = true;
			// 
			// DateType
			// 
			this->DateType->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->DateType->FormattingEnabled = true;
			this->DateType->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Created", L"Modified", L"Accessed" });
			this->DateType->Location = System::Drawing::Point(69, 70);
			this->DateType->Name = L"DateType";
			this->DateType->Size = System::Drawing::Size(135, 21);
			this->DateType->TabIndex = 3;
			// 
			// DateOptions
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(310, 133);
			this->Controls->Add(this->DateType);
			this->Controls->Add(this->DayDivision);
			this->Controls->Add(this->MonthDivision);
			this->Controls->Add(this->YearDivision);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Location = System::Drawing::Point(40, 100);
			this->Name = L"DateOptions";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"DateOptions";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
