#pragma once

#include"Warning1.h"

namespace QuickFileSort {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Step1
	/// </summary>
	public ref class Step1 : public System::Windows::Forms::Form
	{
	public:
		Step1(void)
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
		~Step1()
		{
			if (components)
			{
				delete components;
			}
		}



	public: System::Windows::Forms::Button^ ButtonTargetFolder;
	public: System::Windows::Forms::TextBox^ TargetTextBox;

	public: System::Windows::Forms::Button^ ButtonNext;
	public: System::Windows::Forms::RadioButton^ ChoiceAutomatic;
	public: System::Windows::Forms::RadioButton^ ChoiceManual;





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
			this->ButtonTargetFolder = (gcnew System::Windows::Forms::Button());
			this->TargetTextBox = (gcnew System::Windows::Forms::TextBox());
			this->ButtonNext = (gcnew System::Windows::Forms::Button());
			this->ChoiceAutomatic = (gcnew System::Windows::Forms::RadioButton());
			this->ChoiceManual = (gcnew System::Windows::Forms::RadioButton());
			this->SuspendLayout();
			// 
			// ButtonTargetFolder
			// 
			this->ButtonTargetFolder->Location = System::Drawing::Point(287, 73);
			this->ButtonTargetFolder->Name = L"ButtonTargetFolder";
			this->ButtonTargetFolder->Size = System::Drawing::Size(75, 23);
			this->ButtonTargetFolder->TabIndex = 0;
			this->ButtonTargetFolder->Text = L"Select";
			this->ButtonTargetFolder->UseVisualStyleBackColor = true;
			// 
			// TargetTextBox
			// 
			this->TargetTextBox->AllowDrop = true;
			this->TargetTextBox->Location = System::Drawing::Point(12, 73);
			this->TargetTextBox->Name = L"TargetTextBox";
			this->TargetTextBox->Size = System::Drawing::Size(269, 20);
			this->TargetTextBox->TabIndex = 1;
			// 
			// ButtonNext
			// 
			this->ButtonNext->Location = System::Drawing::Point(287, 141);
			this->ButtonNext->Name = L"ButtonNext";
			this->ButtonNext->Size = System::Drawing::Size(75, 23);
			this->ButtonNext->TabIndex = 2;
			this->ButtonNext->Text = L"Next";
			this->ButtonNext->UseVisualStyleBackColor = true;
			// 
			// ChoiceAutomatic
			// 
			this->ChoiceAutomatic->AutoSize = true;
			this->ChoiceAutomatic->Checked = true;
			this->ChoiceAutomatic->Location = System::Drawing::Point(12, 40);
			this->ChoiceAutomatic->Name = L"ChoiceAutomatic";
			this->ChoiceAutomatic->Size = System::Drawing::Size(72, 17);
			this->ChoiceAutomatic->TabIndex = 3;
			this->ChoiceAutomatic->TabStop = true;
			this->ChoiceAutomatic->Text = L"Automatic";
			this->ChoiceAutomatic->UseVisualStyleBackColor = true;
			// 
			// ChoiceManual
			// 
			this->ChoiceManual->AutoSize = true;
			this->ChoiceManual->Location = System::Drawing::Point(103, 40);
			this->ChoiceManual->Name = L"ChoiceManual";
			this->ChoiceManual->Size = System::Drawing::Size(60, 17);
			this->ChoiceManual->TabIndex = 4;
			this->ChoiceManual->Text = L"Manual";
			this->ChoiceManual->UseVisualStyleBackColor = true;
			// 
			// Step1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(374, 176);
			this->ControlBox = false;
			this->Controls->Add(this->ChoiceManual);
			this->Controls->Add(this->ChoiceAutomatic);
			this->Controls->Add(this->ButtonNext);
			this->Controls->Add(this->TargetTextBox);
			this->Controls->Add(this->ButtonTargetFolder);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Step1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Quick Sort";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion




	//private: System::Void ButtonTargetFolder_Click(System::Object^ sender, System::EventArgs^ e) {
	//	//if (TargetFolderSearch->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	//	{
	//		//TargetTextBox->Text = TargetFolderSearch->SelectedPath;

	//	}
	//}
	/*
private: System::Void ButtonToStepTwo(System::Object^ sender, System::EventArgs^ e) {


	if (!std::filesystem::is_directory(msclr::interop::marshal_as<std::wstring>(TargetTextBox->Text)))
	{
		warning1.ShowDialog();
	}
	else
	{
		TargetFolderSearch->SelectedPath = TargetTextBox->Text;
		DestinationFolderSearch->SelectedPath = TargetFolderSearch->SelectedPath;
		Step2();
		ClearStep1();
	}
}*/
	};
}
