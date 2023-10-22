#pragma once

namespace QuickFileSort {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Step2
	/// </summary>
	public ref class Step2 : public System::Windows::Forms::Form
	{
	public:
		Step2(void)
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
		~Step2()
		{
			if (components)
			{
				delete components;
			}
		}


	public:
	System::Windows::Forms::Button^ ButtonDestination;
	System::Windows::Forms::TextBox^ DestinationTextBox;

	System::Windows::Forms::Button^ ButtonBack;

	System::Windows::Forms::Button^ ButtonBeginSort;

	System::Windows::Forms::ComboBox^ AutomaticType;


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
			this->ButtonDestination = (gcnew System::Windows::Forms::Button());
			this->DestinationTextBox = (gcnew System::Windows::Forms::TextBox());
			this->ButtonBack = (gcnew System::Windows::Forms::Button());
			this->ButtonBeginSort = (gcnew System::Windows::Forms::Button());
			this->AutomaticType = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// ButtonDestination
			// 
			this->ButtonDestination->Location = System::Drawing::Point(287, 32);
			this->ButtonDestination->Name = L"ButtonDestination";
			this->ButtonDestination->Size = System::Drawing::Size(75, 23);
			this->ButtonDestination->TabIndex = 0;
			this->ButtonDestination->Text = L"Select";
			this->ButtonDestination->UseVisualStyleBackColor = true;
			// 
			// DestinationTextBox
			// 
			this->DestinationTextBox->AllowDrop = true;
			this->DestinationTextBox->Location = System::Drawing::Point(12, 32);
			this->DestinationTextBox->Name = L"DestinationTextBox";
			this->DestinationTextBox->Size = System::Drawing::Size(269, 20);
			this->DestinationTextBox->TabIndex = 1;
			// 
			// ButtonBack
			// 
			this->ButtonBack->Location = System::Drawing::Point(10, 241);
			this->ButtonBack->Name = L"ButtonBack";
			this->ButtonBack->Size = System::Drawing::Size(75, 23);
			this->ButtonBack->TabIndex = 2;
			this->ButtonBack->Text = L"Back";
			this->ButtonBack->UseVisualStyleBackColor = true;
			// 
			// ButtonBeginSort
			// 
			this->ButtonBeginSort->Location = System::Drawing::Point(287, 241);
			this->ButtonBeginSort->Name = L"ButtonBeginSort";
			this->ButtonBeginSort->Size = System::Drawing::Size(75, 23);
			this->ButtonBeginSort->TabIndex = 2;
			this->ButtonBeginSort->Text = L"Sort";
			this->ButtonBeginSort->UseVisualStyleBackColor = true;
			// 
			// AutomaticType
			// 
			this->AutomaticType->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->AutomaticType->FormattingEnabled = true;
			this->AutomaticType->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Alphabetic", L"Date" });
			this->AutomaticType->Location = System::Drawing::Point(20, 65);
			this->AutomaticType->Name = L"AutomaticType";
			this->AutomaticType->Size = System::Drawing::Size(299, 21);
			this->AutomaticType->TabIndex = 5;
			// 
			// Step2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(368, 278);
			this->Controls->Add(this->ButtonDestination);
			this->Controls->Add(this->DestinationTextBox);
			this->Controls->Add(this->ButtonBack);
			this->Controls->Add(this->ButtonBeginSort);
			this->Controls->Add(this->AutomaticType);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Step2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Step2";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
