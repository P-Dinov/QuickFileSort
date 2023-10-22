#pragma once

#include"FileSortControl.h"
#include <msclr/marshal.h>
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace QuickFileSort {

	/// <summary>
	/// Summary for ManualDestination
	/// </summary>
	public ref class ManualDestination : public System::Windows::Forms::UserControl
	{
	public:
		ManualDestination(const std::filesystem::path & newDirectory, const std::string & newName)
		{
			System::String^ mName = msclr::interop::marshal_as<System::String^>(newName);
			InitializeComponent(mName);
			//
			//TODO: Add the constructor code here
			//
			DestinationDirectory = new std::filesystem::path(newDirectory);
			std::wstring OnlyFolder = DestinationDirectory->wstring();
			  //msclr::interop::marshal_as<std::wstring>(DestinationDirectory->SelectedPath);

			int FinalSlash = OnlyFolder.find_last_of('\\');
			if(FinalSlash > -1 && FinalSlash+1 < OnlyFolder.size())
			{
				OnlyFolder = OnlyFolder.substr(FinalSlash+1);
			}

			DestinationSelected->Text = msclr::interop::marshal_as<String^>(OnlyFolder);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ManualDestination()
		{
			if (components)
			{
				delete components;
			}
			if (DestinationDirectory)
			{
				delete DestinationDirectory;
				DestinationDirectory = nullptr;
			}

		}
	public: System::Windows::Forms::CheckBox^ DestinationSelected;
	public: System::Windows::Forms::Button^ DeleteButton;
	public: std::filesystem::path * DestinationDirectory;
	public:
	protected:





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
		void InitializeComponent(System::String^ newName)
		{
			this->DestinationSelected = (gcnew System::Windows::Forms::CheckBox());
			this->DeleteButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// DestinationSelected
			// 
			this->DestinationSelected->AutoSize = true;
			this->DestinationSelected->Location = System::Drawing::Point(12, 7);
			this->DestinationSelected->Name = L"DestinationSelected";
			this->DestinationSelected->Size = System::Drawing::Size(80, 17);
			this->DestinationSelected->TabIndex = 0;
			this->DestinationSelected->Text = L"checkBox1";
			this->DestinationSelected->UseVisualStyleBackColor = true;
			// 
			// DeleteButton
			// 
			this->DeleteButton->Location = System::Drawing::Point(174, 3);
			this->DeleteButton->Name = L"DeleteButton";
			this->DeleteButton->Size = System::Drawing::Size(24, 20);
			this->DeleteButton->TabIndex = 2;
			this->DeleteButton->Text = L"X";
			this->DeleteButton->UseVisualStyleBackColor = true;
			this->DeleteButton->Click += gcnew System::EventHandler(this, &ManualDestination::DeleteButton_Click);
			// 
			// ManualDestination
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->DeleteButton);
			this->Controls->Add(this->DestinationSelected);
			this->Name = newName;
			this->Size = System::Drawing::Size(202, 25);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void DeleteButton_Click(System::Object^ sender, System::EventArgs^ e) {
		delete this;
	}
	};
}
