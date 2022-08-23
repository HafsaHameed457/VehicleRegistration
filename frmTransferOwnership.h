#pragma once
#include "frmNewUser.h"

namespace VehicleRegistrationSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmTransferOwnership
	/// </summary>
	public ref class frmTransferOwnership : public System::Windows::Forms::Form
	{
	public:
		frmTransferOwnership(void)
		{
			GlobalClass::TransferOwnershipForm = this;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	private: System::Windows::Forms::Label^ lblTransferRegistration;
	private: System::Windows::Forms::TextBox^ txtTransferRegistration;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lblTransferName;
	private: System::Windows::Forms::Label^ lblTransferCNIC;
	private: System::Windows::Forms::TextBox^ txtTransferName;
	private: System::Windows::Forms::TextBox^ txtTransferCNIC;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnTransferNext;
	private: System::Windows::Forms::Button^ btnMain;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmTransferOwnership()
		{
			if (components)
			{
				delete components;
			}
		}

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmTransferOwnership::typeid));
			this->btnMain = (gcnew System::Windows::Forms::Button());
			this->lblTransferRegistration = (gcnew System::Windows::Forms::Label());
			this->txtTransferRegistration = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lblTransferName = (gcnew System::Windows::Forms::Label());
			this->lblTransferCNIC = (gcnew System::Windows::Forms::Label());
			this->txtTransferName = (gcnew System::Windows::Forms::TextBox());
			this->txtTransferCNIC = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnTransferNext = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnMain
			// 
			this->btnMain->Location = System::Drawing::Point(39, 193);
			this->btnMain->Name = L"btnMain";
			this->btnMain->Size = System::Drawing::Size(75, 23);
			this->btnMain->TabIndex = 5;
			this->btnMain->Text = L"Main Menu";
			this->btnMain->UseVisualStyleBackColor = true;
			this->btnMain->Click += gcnew System::EventHandler(this, &frmTransferOwnership::btnMain_Click);
			// 
			// lblTransferRegistration
			// 
			this->lblTransferRegistration->AutoSize = true;
			this->lblTransferRegistration->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblTransferRegistration->Location = System::Drawing::Point(17, 142);
			this->lblTransferRegistration->Name = L"lblTransferRegistration";
			this->lblTransferRegistration->Size = System::Drawing::Size(126, 13);
			this->lblTransferRegistration->TabIndex = 70;
			this->lblTransferRegistration->Text = L"Registration Number:";
			// 
			// txtTransferRegistration
			// 
			this->txtTransferRegistration->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->txtTransferRegistration->Location = System::Drawing::Point(160, 139);
			this->txtTransferRegistration->Name = L"txtTransferRegistration";
			this->txtTransferRegistration->Size = System::Drawing::Size(144, 20);
			this->txtTransferRegistration->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Cooper Black", 24));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(345, 36);
			this->label1->TabIndex = 74;
			this->label1->Text = L"Transfer Ownership";
			// 
			// lblTransferName
			// 
			this->lblTransferName->AutoSize = true;
			this->lblTransferName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTransferName->Location = System::Drawing::Point(17, 92);
			this->lblTransferName->Name = L"lblTransferName";
			this->lblTransferName->Size = System::Drawing::Size(43, 13);
			this->lblTransferName->TabIndex = 68;
			this->lblTransferName->Text = L"Name:";
			// 
			// lblTransferCNIC
			// 
			this->lblTransferCNIC->AutoSize = true;
			this->lblTransferCNIC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTransferCNIC->Location = System::Drawing::Point(17, 118);
			this->lblTransferCNIC->Name = L"lblTransferCNIC";
			this->lblTransferCNIC->Size = System::Drawing::Size(40, 13);
			this->lblTransferCNIC->TabIndex = 69;
			this->lblTransferCNIC->Text = L"CNIC:";
			// 
			// txtTransferName
			// 
			this->txtTransferName->Location = System::Drawing::Point(160, 87);
			this->txtTransferName->Name = L"txtTransferName";
			this->txtTransferName->Size = System::Drawing::Size(144, 20);
			this->txtTransferName->TabIndex = 1;
			// 
			// txtTransferCNIC
			// 
			this->txtTransferCNIC->Location = System::Drawing::Point(160, 113);
			this->txtTransferCNIC->Name = L"txtTransferCNIC";
			this->txtTransferCNIC->Size = System::Drawing::Size(144, 20);
			this->txtTransferCNIC->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(15, 59);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(183, 18);
			this->label2->TabIndex = 75;
			this->label2->Text = L"Former Owner Information";
			// 
			// btnTransferNext
			// 
			this->btnTransferNext->Location = System::Drawing::Point(217, 193);
			this->btnTransferNext->Name = L"btnTransferNext";
			this->btnTransferNext->Size = System::Drawing::Size(75, 23);
			this->btnTransferNext->TabIndex = 4;
			this->btnTransferNext->Text = L"Next";
			this->btnTransferNext->UseVisualStyleBackColor = true;
			this->btnTransferNext->Click += gcnew System::EventHandler(this, &frmTransferOwnership::btnTransferNext_Click);
			// 
			// frmTransferOwnership
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->ClientSize = System::Drawing::Size(375, 234);
			this->Controls->Add(this->btnTransferNext);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtTransferRegistration);
			this->Controls->Add(this->txtTransferCNIC);
			this->Controls->Add(this->txtTransferName);
			this->Controls->Add(this->lblTransferRegistration);
			this->Controls->Add(this->lblTransferCNIC);
			this->Controls->Add(this->lblTransferName);
			this->Controls->Add(this->btnMain);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"frmTransferOwnership";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Transfer Ownership";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnMain_Click(System::Object^ sender, System::EventArgs^ e) {

		GlobalClass::MainForm->Show();
		this->Hide();

	}
	private: System::Void btnTransferNext_Click(System::Object^ sender, System::EventArgs^ e) {

		bool IsValid;
		int i;

		for (i = 0; i < 100; i++) {

			IsValid = (txtTransferName->Text == GlobalClass::UserName[i]);
			IsValid = IsValid && (txtTransferCNIC->Text == GlobalClass::UserCNIC[i]);
			IsValid = IsValid && (txtTransferRegistration->Text == GlobalClass::RegistrationNumber[i]);

			if (IsValid == 1) {
				break;
			}
		}

		if (IsValid == 1) {
			(gcnew frmNewUser(i))->Show();
			this->Hide();
		}
		else {
			MessageBox::Show("Vehicle not found", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
};
}
