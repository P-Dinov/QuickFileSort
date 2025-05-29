#pragma once

#include"Warning1.h"
#include"ManualDestination.h"
#include <string>
#include <filesystem>
#include <fstream>




namespace QuickFileSort {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Step3
	/// </summary>
	public ref class Step3 : public System::Windows::Forms::Form
	{
	public:
		Step3(const std::wstring& itteratorOgirin)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			FileCycler = new std::filesystem::directory_iterator(itteratorOgirin);
			if (0 < FileCyclerNext(true))
			{
				PicturePreviewUpdate();
			}


		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Step3()
		{
			if (components)
			{
				delete components;
			}
			if (FileCycler)
			{
				delete FileCycler;
				FileCycler = nullptr;
			}
		}
	public: System::Windows::Forms::PictureBox^ PicturePreview;
	private: System::Windows::Forms::FolderBrowserDialog^ DestinationFolderBrowser;

	public: System::Windows::Forms::Button^ AddDestination;
	public: System::Windows::Forms::FlowLayoutPanel^ ListDestinations;
	public: System::Windows::Forms::Button^ CopyCurrentFile;



	public: unsigned int ManualDestCount = 0;


	public: std::filesystem::directory_iterator* FileCycler;
	public: System::Windows::Forms::Button^ BackButton;
	public: System::Windows::Forms::Label^ FileNamePreview;
	public: System::Windows::Forms::RichTextBox^ TextPreivew;
	private: System::Windows::Forms::Button^ SkipButton;
	private: System::Windows::Forms::Label^ NoChoiseWarning;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ MoveCurrentFile;


	public:

	public:

	public:
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
			this->PicturePreview = (gcnew System::Windows::Forms::PictureBox());
			this->DestinationFolderBrowser = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->AddDestination = (gcnew System::Windows::Forms::Button());
			this->ListDestinations = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->CopyCurrentFile = (gcnew System::Windows::Forms::Button());
			this->BackButton = (gcnew System::Windows::Forms::Button());
			this->FileNamePreview = (gcnew System::Windows::Forms::Label());
			this->TextPreivew = (gcnew System::Windows::Forms::RichTextBox());
			this->SkipButton = (gcnew System::Windows::Forms::Button());
			this->NoChoiseWarning = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->MoveCurrentFile = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PicturePreview))->BeginInit();
			this->SuspendLayout();
			// 
			// PicturePreview
			// 
			this->PicturePreview->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->PicturePreview->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->PicturePreview->ImageLocation = L"";
			this->PicturePreview->Location = System::Drawing::Point(12, 77);
			this->PicturePreview->Name = L"PicturePreview";
			this->PicturePreview->Size = System::Drawing::Size(245, 314);
			this->PicturePreview->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->PicturePreview->TabIndex = 0;
			this->PicturePreview->TabStop = false;
			this->PicturePreview->LoadCompleted += gcnew System::ComponentModel::AsyncCompletedEventHandler(this, &Step3::PicturePreview_LoadCompleted);
			// 
			// AddDestination
			// 
			this->AddDestination->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->AddDestination->Location = System::Drawing::Point(344, 51);
			this->AddDestination->Name = L"AddDestination";
			this->AddDestination->Size = System::Drawing::Size(75, 23);
			this->AddDestination->TabIndex = 2;
			this->AddDestination->Text = L"Add";
			this->AddDestination->UseVisualStyleBackColor = true;
			this->AddDestination->Click += gcnew System::EventHandler(this, &Step3::AddDestination_Click);
			// 
			// ListDestinations
			// 
			this->ListDestinations->AllowDrop = true;
			this->ListDestinations->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ListDestinations->AutoScroll = true;
			this->ListDestinations->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->ListDestinations->Location = System::Drawing::Point(274, 92);
			this->ListDestinations->Name = L"ListDestinations";
			this->ListDestinations->Size = System::Drawing::Size(230, 295);
			this->ListDestinations->TabIndex = 3;
			this->ListDestinations->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &Step3::ListDestinations_DragDrop);
			this->ListDestinations->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &Step3::ListDestinations_DragEnter);
			// 
			// CopyCurrentFile
			// 
			this->CopyCurrentFile->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->CopyCurrentFile->Location = System::Drawing::Point(137, 397);
			this->CopyCurrentFile->Name = L"CopyCurrentFile";
			this->CopyCurrentFile->Size = System::Drawing::Size(75, 23);
			this->CopyCurrentFile->TabIndex = 4;
			this->CopyCurrentFile->Text = L"Copy";
			this->CopyCurrentFile->UseVisualStyleBackColor = true;
			this->CopyCurrentFile->Click += gcnew System::EventHandler(this, &Step3::CopyCurrentFile_Click);
			// 
			// BackButton
			// 
			this->BackButton->Location = System::Drawing::Point(11, 12);
			this->BackButton->Name = L"BackButton";
			this->BackButton->Size = System::Drawing::Size(75, 23);
			this->BackButton->TabIndex = 5;
			this->BackButton->Text = L"Done";
			this->BackButton->UseVisualStyleBackColor = true;
			this->BackButton->Click += gcnew System::EventHandler(this, &Step3::BackButton_Click);
			// 
			// FileNamePreview
			// 
			this->FileNamePreview->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->FileNamePreview->AutoSize = true;
			this->FileNamePreview->Location = System::Drawing::Point(99, 56);
			this->FileNamePreview->Name = L"FileNamePreview";
			this->FileNamePreview->Size = System::Drawing::Size(49, 13);
			this->FileNamePreview->TabIndex = 6;
			this->FileNamePreview->Text = L"file name";
			// 
			// TextPreivew
			// 
			this->TextPreivew->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->TextPreivew->Enabled = false;
			this->TextPreivew->Location = System::Drawing::Point(11, 77);
			this->TextPreivew->Name = L"TextPreivew";
			this->TextPreivew->ReadOnly = true;
			this->TextPreivew->Size = System::Drawing::Size(245, 314);
			this->TextPreivew->TabIndex = 7;
			this->TextPreivew->Text = L"";
			this->TextPreivew->Visible = false;
			// 
			// SkipButton
			// 
			this->SkipButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->SkipButton->Location = System::Drawing::Point(24, 413);
			this->SkipButton->Name = L"SkipButton";
			this->SkipButton->Size = System::Drawing::Size(75, 23);
			this->SkipButton->TabIndex = 8;
			this->SkipButton->Text = L"Skip";
			this->SkipButton->UseVisualStyleBackColor = true;
			this->SkipButton->Click += gcnew System::EventHandler(this, &Step3::SkipButton_Click);
			// 
			// NoChoiseWarning
			// 
			this->NoChoiseWarning->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->NoChoiseWarning->AutoSize = true;
			this->NoChoiseWarning->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NoChoiseWarning->Location = System::Drawing::Point(319, 416);
			this->NoChoiseWarning->Name = L"NoChoiseWarning";
			this->NoChoiseWarning->Size = System::Drawing::Size(129, 15);
			this->NoChoiseWarning->TabIndex = 9;
			this->NoChoiseWarning->Text = L"No directories chosen!";
			this->NoChoiseWarning->Visible = false;
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Enabled = false;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7));
			this->label1->Location = System::Drawing::Point(341, 77);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(85, 13);
			this->label1->TabIndex = 10;
			this->label1->Text = L"or drag and drop";
			// 
			// MoveCurrentFile
			// 
			this->MoveCurrentFile->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->MoveCurrentFile->Location = System::Drawing::Point(137, 441);
			this->MoveCurrentFile->Name = L"MoveCurrentFile";
			this->MoveCurrentFile->Size = System::Drawing::Size(75, 23);
			this->MoveCurrentFile->TabIndex = 11;
			this->MoveCurrentFile->Text = L"Move";
			this->MoveCurrentFile->UseVisualStyleBackColor = true;
			this->MoveCurrentFile->Click += gcnew System::EventHandler(this, &Step3::CopyCurrentFile_Click);
			// 
			// Step3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(516, 465);
			this->Controls->Add(this->MoveCurrentFile);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->NoChoiseWarning);
			this->Controls->Add(this->SkipButton);
			this->Controls->Add(this->FileNamePreview);
			this->Controls->Add(this->BackButton);
			this->Controls->Add(this->CopyCurrentFile);
			this->Controls->Add(this->ListDestinations);
			this->Controls->Add(this->AddDestination);
			this->Controls->Add(this->PicturePreview);
			this->Controls->Add(this->TextPreivew);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Step3";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Step3";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PicturePreview))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


private: void SelfDestruct(void)
{
	this->Close();
}


	private: System::Void ListDestinations_DragEnter(System::Object^ sender, System::Windows::Forms::DragEventArgs^ e) {

		if (e->Data->GetDataPresent(DataFormats::FileDrop))
			e->Effect = DragDropEffects::All;
		else
			e->Effect = DragDropEffects::None;
	}
	private: System::Void ListDestinations_DragDrop(System::Object^ sender, System::Windows::Forms::DragEventArgs^ e) {
	
		array<System::String^>^ DropedDirs = 
		  (array<System::String^>^)e->Data->GetData(DataFormats::FileDrop, false);
		
		const int NumDroped = DropedDirs->Length;

		for (int i = 0; i < NumDroped; i++)
		{
			std::filesystem::path temp =
				msclr::interop::marshal_as<std::wstring>((System::String^) DropedDirs[i]);


				if(std::filesystem::is_directory(temp))
					AddDestinationControl(temp);
		}

	}

	private: System::Void AddDestinationControl(std::filesystem::path & newPath)
	{
		std::string nName = "mdc" + std::to_string(ManualDestCount);
		ManualDestCount += 1;



		QuickFileSort::ManualDestination^ mdNext =
			(gcnew QuickFileSort::ManualDestination(newPath, nName));


		ListDestinations->Controls->Add(mdNext);

	}

private: System::Void AddDestination_Click(System::Object^ sender, System::EventArgs^ e) {

	if (DestinationFolderBrowser->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		std::filesystem::path temp =
		  msclr::interop::marshal_as<std::wstring>(DestinationFolderBrowser->SelectedPath);

		AddDestinationControl(temp);	


	}
}



private: void ReachedEnd()
{
	QuickFileSort::Warning1^ DialogPopup(gcnew QuickFileSort::Warning1());
	DialogPopup->Name = "finished";
	DialogPopup->Text = "Done!";
	DialogPopup->textBox1->Text = "End of files.";

	DialogPopup->ShowDialog();
	delete DialogPopup;

	SelfDestruct();
}

private: System::Void CopyCurrentFile_Click(System::Object^ sender, System::EventArgs^ e) {

	size_t DestinationChosen = 0;

	for each (const System::Object^ var in ListDestinations->Controls)
	{
		if(sender == MoveCurrentFile && DestinationChosen)
		{
			break;
		}
		try
		{

			const QuickFileSort::ManualDestination ^ temp = dynamic_cast<const QuickFileSort::ManualDestination^>(var);
	
			if (temp->DestinationSelected->Checked)
			{
				DestinationChosen++;
				const std::filesystem::path DestinationAsPath = *(temp->DestinationDirectory);

				QuickFileSort::FileSortControl* fileTemp =
				  new QuickFileSort::FileSortControl((*FileCycler)->path(), DestinationAsPath);

				if(sender == CopyCurrentFile)
				{
					fileTemp->CopyToSorted();
				}
				else if (sender == MoveCurrentFile)
				{
					fileTemp->MoveToSorted();
				}
				delete fileTemp;
				fileTemp = nullptr;
				temp->DestinationSelected->Checked = false;
			}
		}
		catch (const std::bad_cast & fail)
		{
			continue;
		}
	}

	if(DestinationChosen)
	{	
		NoChoiseWarning->Hide();

		FileCyclerNext(false);


	}
	else
	{
		NoChoiseWarning->Show();
	}

	

}



protected: void PicturePreviewUpdate(void)
{
	PicturePreview->Visible = true;
	TextPreivew->Visible = false;



	PicturePreview->ImageLocation =
		msclr::interop::marshal_as<String^>((*FileCycler)->path().wstring());

	PicturePreview->Refresh();


	


	FileNamePreview->Text =
		msclr::interop::marshal_as<String^>((*FileCycler)->path().filename().wstring());
}

protected: void TextPreviewUpdate(void)
{
	
		TextPreivew->Visible = true;
		TextPreivew->Text = L"";
		if ((*FileCycler)->path().extension() != ".txt")
			return;

		std::wifstream TextRead((*FileCycler)->path().wstring());
		std::wstring TextNew;
		for (int i = 0; i < 20; i++)
		{
			std::getline(TextRead, TextNew);
			TextPreivew->Text += msclr::interop::marshal_as<String^>(TextNew);
			TextPreivew->Text += L"\n";
		}

		TextRead.close();

		TextPreivew->Refresh();
	
}

protected: int FileCyclerNext(bool FirstTime)
{


	if(!FirstTime)
	{
		(*FileCycler)++;
	}

	if ((*FileCycler) == std::filesystem::end((*FileCycler)))
	{
		ReachedEnd();
		return -1;
	}

	while ((*FileCycler)->is_directory())
	{
		
		(*FileCycler)++;

		if ((*FileCycler) == std::filesystem::end((*FileCycler)))
		{
			ReachedEnd();
			return -1;
		}
	}

	if ((*FileCycler) == std::filesystem::end((*FileCycler)))
	{
		ReachedEnd();
		return -1;
	}

	

	PicturePreviewUpdate();
	

	return 1;
}




private: System::Void BackButton_Click(System::Object^ sender, System::EventArgs^ e) {
	SelfDestruct();
}
private: System::Void PicturePreview_LoadCompleted(System::Object^ sender, System::ComponentModel::AsyncCompletedEventArgs^ e) {


	if (PicturePreview->Image == PicturePreview->ErrorImage)
	{
		PicturePreview->Visible = false;
		TextPreviewUpdate();
	}

	
}
private: System::Void SkipButton_Click(System::Object^ sender, System::EventArgs^ e) {
	NoChoiseWarning->Hide();
	FileCyclerNext(false);
}

};
}
