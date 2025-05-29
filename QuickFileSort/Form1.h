#pragma once
#include"Warning1.h"
#include"Step1.h"
#include"Step2.h"
#include"Step3.h"
#include"AlphabeticOptions.h"
#include"DateOptions.h"
namespace CppCLRWinFormsProject {



	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			
			InitializeComponent();
			Step1();
			//
			//TODO: Add the constructor code here
			//
			this->TargetFolderSearch = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->DestinationFolderSearch = (gcnew System::Windows::Forms::FolderBrowserDialog());

			this->TargetFolderSearch->ShowNewFolderButton = false;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::FolderBrowserDialog^ TargetFolderSearch;
	private: System::Windows::Forms::FolderBrowserDialog^ DestinationFolderSearch;


	
	private: QuickFileSort::Step1^ Step1_1;
	private: QuickFileSort::Step2^ Step2_1;
	private: QuickFileSort::Step3^ Step3_1;
	private: QuickFileSort::AlphabeticOptions^ AlphaOp;
	private: QuickFileSort::DateOptions^ DateOp;

	private: QuickFileSort::Warning1 warning1;
	





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
			this->SuspendLayout();
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(404, 206);
			this->Name = L"Form1";
			this->ShowIcon = false;
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Show;
			this->Text = L"Quick Sort";
			this->Layout += gcnew System::Windows::Forms::LayoutEventHandler(this, &Form1::Form1_Layout);
			this->ResumeLayout(false);

		}

		void Step1(void)
		{
			InitializeComponent();
			this->Step1_1 = (gcnew QuickFileSort::Step1);
			this->Step1_1->TopLevel = false;
			this->Step1_1->ButtonTargetFolder->Click += gcnew System::EventHandler(this, &Form1::ButtonTargetFolder_Click);
			this->Step1_1->ButtonNext->Click += gcnew System::EventHandler(this, &Form1::ButtonToNextStep);
			this->Controls->Add(this->Step1_1);
			this->Step1_1->Show();

		}

		void Step2(void)
		{
			


			this->SuspendLayout();


			this->Step2_1 = (gcnew QuickFileSort::Step2);
			this->Step2_1->TopLevel = false;

			this->Controls->Add(this->Step2_1);
			this->Step2_1->Show();


			this->Step2_1->DestinationTextBox->Text = this->DestinationFolderSearch->SelectedPath;
			this->Step2_1->AutomaticType->SelectedIndex = 0;

			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(404, 306);

			this->Step2_1->ButtonDestination->Click += gcnew System::EventHandler(this, &Form1::ButtonDestination_Click);
			this->Step2_1->ButtonBack->Click += gcnew System::EventHandler(this, &Form1::ButtonBackToStepOne);
			this->Step2_1->ButtonBeginSort->Click += gcnew System::EventHandler(this, &Form1::ButtonBeginSort_Click);
			this->Step2_1->AutomaticType->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::AutoTypeChange);


			this->Name = L"Form2";
			this->Text = L"Quick Sort - select destination";

			Step2Alpha();

			this->ResumeLayout(false);
			this->PerformLayout();


		}



	void Step2Alpha(void)
	{

		this->AlphaOp = (gcnew QuickFileSort::AlphabeticOptions);
		this->AlphaOp->TopLevel = false;
		this->Step2_1->Controls->Add(this->AlphaOp);
		this->AlphaOp->Show();

	}
	void Step2Date(void)
	{
		this->DateOp = (gcnew QuickFileSort::DateOptions);
		this->DateOp->TopLevel = false;
		this->Step2_1->Controls->Add(this->DateOp);
		this->DateOp->Show();
	}


	void Step3(void)
	{

		this->SuspendLayout();

		this->Step3_1 = (gcnew QuickFileSort::Step3(msclr::interop::marshal_as<std::wstring>(TargetFolderSearch->SelectedPath)));
		this->Step3_1->TopLevel = false;
		this->Step3_1->Closed += gcnew System::EventHandler(this, &Form1::ButtonBackToStepOne);
		this->Controls->Add(this->Step3_1);
		this->Step3_1->Show();
		//// 
		//// Form1
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
		this->ClientSize = System::Drawing::Size(516, 484);

		this->Name = L"Form3";
		this->Text = L"Quick Sort";
		this->ResumeLayout(false);
		this->PerformLayout();

	}

	void ClearStep1(void)
	{
		if (this->Step1_1)
		{
			delete this->Step1_1;
			this->Step1_1 = nullptr;
		}
	}
	void ClearStep2(void)
	{


		ClearStep2Alpha();
		ClearStep2Date();

		if (this->Step2_1)
		{
			delete this->Step2_1;
			this->Step2_1 = nullptr;
		}

	}
	void ClearStep2Alpha(void)
	{
		if (this->AlphaOp)
		{
			delete this->AlphaOp;
			this->AlphaOp = nullptr;
		}

	}
	void ClearStep2Date(void)
	{
		if (this->DateOp)
		{
			delete this->DateOp;
			this->DateOp = nullptr;
		}
	}


	void ClearStep3(void)
	{
		if (this->Step3_1)
		{
			delete this->Step3_1;
			this->Step3_1 = nullptr;
		}
	}

#pragma endregion




private: System::Void ButtonTargetFolder_Click(System::Object^ sender, System::EventArgs^ e) {
	if (TargetFolderSearch->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		Step1_1->TargetTextBox->Text = TargetFolderSearch->SelectedPath;
	}
}
	
private: System::Void ButtonToNextStep(System::Object^ sender, System::EventArgs^ e) {

	
	if(!std::filesystem::is_directory(msclr::interop::marshal_as<std::wstring>(Step1_1->TargetTextBox->Text)))
	{
		warning1.ShowDialog();
	}
	else
	{
		TargetFolderSearch->SelectedPath = Step1_1->TargetTextBox->Text;
		if(Step1_1->ChoiceAutomatic->Checked)
		{
			DestinationFolderSearch->SelectedPath = TargetFolderSearch->SelectedPath;
			Step2();
			ClearStep1();
		}
		else
		{
			Step3();
			ClearStep1();
		}
	}
}

private: System::Void ButtonDestination_Click(System::Object^ sender, System::EventArgs^ e) {
	if (DestinationFolderSearch->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		Step2_1->DestinationTextBox->Text = DestinationFolderSearch->SelectedPath;

	}
}

private: System::Void ButtonBackToStepOne(System::Object^ sender, System::EventArgs^ e) {

	Step1();
	Step1_1->TargetTextBox->Text = TargetFolderSearch->SelectedPath;
	ClearStep2();
	ClearStep3();
	}

	   
private: System::Void BackToStepOne(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {

		   Step1();
		   Step1_1->TargetTextBox->Text = TargetFolderSearch->SelectedPath;
		   ClearStep2();
		   ClearStep3();
	   }

private: System::Void AutoTypeChange(System::Object^ sender, System::EventArgs^ e)
{
	ClearStep2Alpha();
	ClearStep2Date();

	switch (Step2_1->AutomaticType->SelectedIndex)
	{
		case 0 :
		Step2Alpha();
		break;
		case 1 :
		Step2Date();
		break;
	}
}

private: System::Void ButtonBeginSort_Click(System::Object^ sender, System::EventArgs^ e) {

	DestinationFolderSearch->SelectedPath = Step2_1->DestinationTextBox->Text;

	if (!std::filesystem::is_directory
	  (msclr::interop::marshal_as<std::wstring>(DestinationFolderSearch->SelectedPath))) // makes new folder if destination doesn't exist
	{
		std::filesystem::create_directory
		  (msclr::interop::marshal_as<std::wstring>(DestinationFolderSearch->SelectedPath));

	}

	QuickFileSort::FileSortControl* selectedFile = nullptr;
	
	if(Step2_1->AutomaticType->SelectedIndex == 0)
	{
		int capitalization = 0;
		if (AlphaOp->AlphabeticChoiseUp->Checked)
		{
			capitalization = 1;
		}
		else if (AlphaOp->AlphabeticChoiseLow->Checked)
		{
			capitalization = 2;
		}
		for (const std::filesystem::directory_entry& entry : std::filesystem::directory_iterator
		(msclr::interop::marshal_as<std::wstring>(TargetFolderSearch->SelectedPath)))
		{
			if (is_directory(entry.path())) // skips over folders : does not copy folders
			{
				continue;
			}

			std::filesystem::path DestinationAsPath =
				msclr::interop::marshal_as<std::wstring>(DestinationFolderSearch->SelectedPath);

			selectedFile = new QuickFileSort::AlphabeticSort
			  (entry.path(), DestinationAsPath, size_t(AlphaOp->LettersCount->Value), capitalization);

			selectedFile->SortAndCopy();
			delete selectedFile;
			selectedFile = nullptr;

		}
	}

	else if (Step2_1->AutomaticType->SelectedIndex == 1)
	{
		int YearMonthDay = 0;

		if (DateOp->YearDivision->Checked)
		{
			YearMonthDay += 1;
		}
		if (DateOp->MonthDivision->Checked)
		{
			YearMonthDay += 10;
		}
		if (DateOp->DayDivision->Checked)
		{
			YearMonthDay += 100;
		}

		for (const std::filesystem::directory_entry& entry : std::filesystem::directory_iterator
		(msclr::interop::marshal_as<std::wstring>(TargetFolderSearch->SelectedPath)))
		{
			if (is_directory(entry.path())) // skips over folders : does not copy folders
			{
				continue;
			}
			const std::wstring temp = entry.path().wstring();

			_WIN32_FILE_ATTRIBUTE_DATA entryData;
			GetFileAttributesEx(temp.c_str(), GetFileExInfoStandard, &entryData);
			FILETIME ft;
			if(DateOp->DateType->SelectedIndex == 0)
			{
				 ft = entryData.ftCreationTime;
			}
			else if (DateOp->DateType->SelectedIndex == 1)
			{
				ft = entryData.ftLastWriteTime;
			}
			else if (DateOp->DateType->SelectedIndex == 2)
			{
				ft = entryData.ftLastAccessTime;
			}

			SYSTEMTIME entryTime;

			FileTimeToSystemTime(&ft, &entryTime);

			std::filesystem::path DestinationAsPath =
				msclr::interop::marshal_as<std::wstring>(DestinationFolderSearch->SelectedPath);

			selectedFile = new QuickFileSort::DateSort
			  (entry.path(), DestinationAsPath, entryTime, YearMonthDay);


			selectedFile->SortAndCopy();
			delete selectedFile;
			selectedFile = nullptr;

		}
	}

	delete selectedFile;
	selectedFile = nullptr;
}

private: System::Void Form1_Layout(System::Object^ sender, System::Windows::Forms::LayoutEventArgs^ e) {

	System::Windows::Forms::Control^ updated_form = (System::Windows::Forms::Control^)sender;

	for each (System::Windows::Forms::Control ^ var in updated_form->Controls)
	{
		var->Size = System::Drawing::Size( updated_form->Size.Width - 50, updated_form->Size.Height - 50);
	}
}
};
}
