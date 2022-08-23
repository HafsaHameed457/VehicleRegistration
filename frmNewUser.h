#pragma once
#include "GlobalClass.h"
#include "frmNewVehicle.h"

namespace VehicleRegistrationSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace Globals;

	/// <summary>
	/// Summary for frmNewUser
	/// </summary>
	public ref class frmNewUser : public System::Windows::Forms::Form
	{
		
	public:
		
		int i = GlobalClass::registeredVehicles;
		int TransferIndex = -1;

		frmNewUser(void)
		{
			GlobalClass::NewUserForm = this;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		frmNewUser(int i)
		{
			TransferIndex = i;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	private: System::Windows::Forms::Button^ btnUserMainMenu;
	private: System::Windows::Forms::TextBox^ txtUserCity;
	private: System::Windows::Forms::Label^ lblUserCity;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmNewUser()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblUserName;
	private: System::Windows::Forms::TextBox^ txtUserName;
	private: System::Windows::Forms::TextBox^ txtUserCNIC;
	private: System::Windows::Forms::Label^ lblUserCNIC;
	private: System::Windows::Forms::TextBox^ txtUserMobile;
	private: System::Windows::Forms::Label^ lblUserMobile;
	private: System::Windows::Forms::TextBox^ txtUserFather;
	private: System::Windows::Forms::Label^ lblUserFather;
	private: System::Windows::Forms::TextBox^ txtUserTAddress;
	private: System::Windows::Forms::Label^ lblUserTAddress;
	private: System::Windows::Forms::TextBox^ txtUserTelephone;
	private: System::Windows::Forms::Label^ lblUserTelephone;
	private: System::Windows::Forms::TextBox^ txtUserEmail;
	private: System::Windows::Forms::Label^ lblUserEmail;
	private: System::Windows::Forms::TextBox^ txtUserPAddress;
	private: System::Windows::Forms::Label^ lblUserPAddress;
	private: System::Windows::Forms::TextBox^ txtUserPostal;
	private: System::Windows::Forms::Label^ lblUserPostal;
	private: System::Windows::Forms::TextBox^ txtUserNTN;
	private: System::Windows::Forms::Label^ lblUserNTN;
	private: System::Windows::Forms::Label^ lblUserHeading;
	private: System::Windows::Forms::Button^ btnUserNext;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmNewUser::typeid));
			this->lblUserName = (gcnew System::Windows::Forms::Label());
			this->txtUserName = (gcnew System::Windows::Forms::TextBox());
			this->txtUserCNIC = (gcnew System::Windows::Forms::TextBox());
			this->lblUserCNIC = (gcnew System::Windows::Forms::Label());
			this->txtUserMobile = (gcnew System::Windows::Forms::TextBox());
			this->lblUserMobile = (gcnew System::Windows::Forms::Label());
			this->txtUserFather = (gcnew System::Windows::Forms::TextBox());
			this->lblUserFather = (gcnew System::Windows::Forms::Label());
			this->txtUserTAddress = (gcnew System::Windows::Forms::TextBox());
			this->lblUserTAddress = (gcnew System::Windows::Forms::Label());
			this->txtUserTelephone = (gcnew System::Windows::Forms::TextBox());
			this->lblUserTelephone = (gcnew System::Windows::Forms::Label());
			this->txtUserEmail = (gcnew System::Windows::Forms::TextBox());
			this->lblUserEmail = (gcnew System::Windows::Forms::Label());
			this->txtUserPAddress = (gcnew System::Windows::Forms::TextBox());
			this->lblUserPAddress = (gcnew System::Windows::Forms::Label());
			this->txtUserPostal = (gcnew System::Windows::Forms::TextBox());
			this->lblUserPostal = (gcnew System::Windows::Forms::Label());
			this->txtUserNTN = (gcnew System::Windows::Forms::TextBox());
			this->lblUserNTN = (gcnew System::Windows::Forms::Label());
			this->lblUserHeading = (gcnew System::Windows::Forms::Label());
			this->btnUserNext = (gcnew System::Windows::Forms::Button());
			this->btnUserMainMenu = (gcnew System::Windows::Forms::Button());
			this->txtUserCity = (gcnew System::Windows::Forms::TextBox());
			this->lblUserCity = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lblUserName
			// 
			this->lblUserName->AutoSize = true;
			this->lblUserName->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblUserName->Location = System::Drawing::Point(28, 66);
			this->lblUserName->Name = L"lblUserName";
			this->lblUserName->Size = System::Drawing::Size(59, 25);
			this->lblUserName->TabIndex = 0;
			this->lblUserName->Text = L"Name";
			// 
			// txtUserName
			// 
			this->txtUserName->Location = System::Drawing::Point(221, 72);
			this->txtUserName->Name = L"txtUserName";
			this->txtUserName->Size = System::Drawing::Size(211, 20);
			this->txtUserName->TabIndex = 1;
			// 
			// txtUserCNIC
			// 
			this->txtUserCNIC->Location = System::Drawing::Point(221, 98);
			this->txtUserCNIC->Name = L"txtUserCNIC";
			this->txtUserCNIC->Size = System::Drawing::Size(211, 20);
			this->txtUserCNIC->TabIndex = 2;
			// 
			// lblUserCNIC
			// 
			this->lblUserCNIC->AutoSize = true;
			this->lblUserCNIC->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblUserCNIC->Location = System::Drawing::Point(28, 92);
			this->lblUserCNIC->Name = L"lblUserCNIC";
			this->lblUserCNIC->Size = System::Drawing::Size(53, 25);
			this->lblUserCNIC->TabIndex = 2;
			this->lblUserCNIC->Text = L"CNIC";
			// 
			// txtUserMobile
			// 
			this->txtUserMobile->Location = System::Drawing::Point(221, 150);
			this->txtUserMobile->Name = L"txtUserMobile";
			this->txtUserMobile->Size = System::Drawing::Size(211, 20);
			this->txtUserMobile->TabIndex = 4;
			// 
			// lblUserMobile
			// 
			this->lblUserMobile->AutoSize = true;
			this->lblUserMobile->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblUserMobile->Location = System::Drawing::Point(28, 144);
			this->lblUserMobile->Name = L"lblUserMobile";
			this->lblUserMobile->Size = System::Drawing::Size(140, 25);
			this->lblUserMobile->TabIndex = 6;
			this->lblUserMobile->Text = L"Mobile Number";
			// 
			// txtUserFather
			// 
			this->txtUserFather->Location = System::Drawing::Point(221, 124);
			this->txtUserFather->Name = L"txtUserFather";
			this->txtUserFather->Size = System::Drawing::Size(211, 20);
			this->txtUserFather->TabIndex = 3;
			// 
			// lblUserFather
			// 
			this->lblUserFather->AutoSize = true;
			this->lblUserFather->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblUserFather->Location = System::Drawing::Point(28, 118);
			this->lblUserFather->Name = L"lblUserFather";
			this->lblUserFather->Size = System::Drawing::Size(133, 25);
			this->lblUserFather->TabIndex = 4;
			this->lblUserFather->Text = L"Father\'s Name";
			// 
			// txtUserTAddress
			// 
			this->txtUserTAddress->Location = System::Drawing::Point(221, 202);
			this->txtUserTAddress->Name = L"txtUserTAddress";
			this->txtUserTAddress->Size = System::Drawing::Size(211, 20);
			this->txtUserTAddress->TabIndex = 6;
			// 
			// lblUserTAddress
			// 
			this->lblUserTAddress->AutoSize = true;
			this->lblUserTAddress->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblUserTAddress->Location = System::Drawing::Point(28, 196);
			this->lblUserTAddress->Name = L"lblUserTAddress";
			this->lblUserTAddress->Size = System::Drawing::Size(180, 25);
			this->lblUserTAddress->TabIndex = 10;
			this->lblUserTAddress->Text = L"Temporary Address";
			// 
			// txtUserTelephone
			// 
			this->txtUserTelephone->Location = System::Drawing::Point(221, 176);
			this->txtUserTelephone->Name = L"txtUserTelephone";
			this->txtUserTelephone->Size = System::Drawing::Size(211, 20);
			this->txtUserTelephone->TabIndex = 5;
			// 
			// lblUserTelephone
			// 
			this->lblUserTelephone->AutoSize = true;
			this->lblUserTelephone->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblUserTelephone->Location = System::Drawing::Point(28, 170);
			this->lblUserTelephone->Name = L"lblUserTelephone";
			this->lblUserTelephone->Size = System::Drawing::Size(173, 25);
			this->lblUserTelephone->TabIndex = 8;
			this->lblUserTelephone->Text = L"Telephone Number";
			// 
			// txtUserEmail
			// 
			this->txtUserEmail->Location = System::Drawing::Point(221, 280);
			this->txtUserEmail->Name = L"txtUserEmail";
			this->txtUserEmail->Size = System::Drawing::Size(211, 20);
			this->txtUserEmail->TabIndex = 9;
			// 
			// lblUserEmail
			// 
			this->lblUserEmail->AutoSize = true;
			this->lblUserEmail->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblUserEmail->Location = System::Drawing::Point(28, 274);
			this->lblUserEmail->Name = L"lblUserEmail";
			this->lblUserEmail->Size = System::Drawing::Size(58, 25);
			this->lblUserEmail->TabIndex = 14;
			this->lblUserEmail->Text = L"Email";
			// 
			// txtUserPAddress
			// 
			this->txtUserPAddress->Location = System::Drawing::Point(221, 228);
			this->txtUserPAddress->Name = L"txtUserPAddress";
			this->txtUserPAddress->Size = System::Drawing::Size(211, 20);
			this->txtUserPAddress->TabIndex = 7;
			// 
			// lblUserPAddress
			// 
			this->lblUserPAddress->AutoSize = true;
			this->lblUserPAddress->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblUserPAddress->Location = System::Drawing::Point(28, 222);
			this->lblUserPAddress->Name = L"lblUserPAddress";
			this->lblUserPAddress->Size = System::Drawing::Size(179, 25);
			this->lblUserPAddress->TabIndex = 12;
			this->lblUserPAddress->Text = L"Permanent Address";
			// 
			// txtUserPostal
			// 
			this->txtUserPostal->Location = System::Drawing::Point(221, 332);
			this->txtUserPostal->Name = L"txtUserPostal";
			this->txtUserPostal->Size = System::Drawing::Size(211, 20);
			this->txtUserPostal->TabIndex = 11;
			// 
			// lblUserPostal
			// 
			this->lblUserPostal->AutoSize = true;
			this->lblUserPostal->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblUserPostal->Location = System::Drawing::Point(28, 326);
			this->lblUserPostal->Name = L"lblUserPostal";
			this->lblUserPostal->Size = System::Drawing::Size(114, 25);
			this->lblUserPostal->TabIndex = 18;
			this->lblUserPostal->Text = L"Postal Code";
			// 
			// txtUserNTN
			// 
			this->txtUserNTN->Location = System::Drawing::Point(221, 306);
			this->txtUserNTN->Name = L"txtUserNTN";
			this->txtUserNTN->Size = System::Drawing::Size(211, 20);
			this->txtUserNTN->TabIndex = 10;
			// 
			// lblUserNTN
			// 
			this->lblUserNTN->AutoSize = true;
			this->lblUserNTN->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblUserNTN->Location = System::Drawing::Point(28, 300);
			this->lblUserNTN->Name = L"lblUserNTN";
			this->lblUserNTN->Size = System::Drawing::Size(118, 25);
			this->lblUserNTN->TabIndex = 16;
			this->lblUserNTN->Text = L"NTN Number";
			// 
			// lblUserHeading
			// 
			this->lblUserHeading->AutoSize = true;
			this->lblUserHeading->Font = (gcnew System::Drawing::Font(L"Cooper Black", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblUserHeading->Location = System::Drawing::Point(27, 12);
			this->lblUserHeading->Name = L"lblUserHeading";
			this->lblUserHeading->Size = System::Drawing::Size(187, 36);
			this->lblUserHeading->TabIndex = 0;
			this->lblUserHeading->Text = L"User\'s Info";
			// 
			// btnUserNext
			// 
			this->btnUserNext->Location = System::Drawing::Point(300, 400);
			this->btnUserNext->Name = L"btnUserNext";
			this->btnUserNext->Size = System::Drawing::Size(75, 23);
			this->btnUserNext->TabIndex = 12;
			this->btnUserNext->Text = L"Next";
			this->btnUserNext->UseVisualStyleBackColor = true;
			this->btnUserNext->Click += gcnew System::EventHandler(this, &frmNewUser::btnUserNext_Click);
			// 
			// btnUserMainMenu
			// 
			this->btnUserMainMenu->Location = System::Drawing::Point(60, 400);
			this->btnUserMainMenu->Name = L"btnUserMainMenu";
			this->btnUserMainMenu->Size = System::Drawing::Size(75, 23);
			this->btnUserMainMenu->TabIndex = 13;
			this->btnUserMainMenu->Text = L"Main Menu";
			this->btnUserMainMenu->UseVisualStyleBackColor = true;
			this->btnUserMainMenu->Click += gcnew System::EventHandler(this, &frmNewUser::btnUserMainMenu_Click);
			// 
			// txtUserCity
			// 
			this->txtUserCity->Location = System::Drawing::Point(221, 254);
			this->txtUserCity->Name = L"txtUserCity";
			this->txtUserCity->Size = System::Drawing::Size(211, 20);
			this->txtUserCity->TabIndex = 8;
			// 
			// lblUserCity
			// 
			this->lblUserCity->AutoSize = true;
			this->lblUserCity->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblUserCity->Location = System::Drawing::Point(28, 248);
			this->lblUserCity->Name = L"lblUserCity";
			this->lblUserCity->Size = System::Drawing::Size(45, 25);
			this->lblUserCity->TabIndex = 23;
			this->lblUserCity->Text = L"City";
			// 
			// frmNewUser
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->ClientSize = System::Drawing::Size(458, 454);
			this->Controls->Add(this->txtUserCity);
			this->Controls->Add(this->lblUserCity);
			this->Controls->Add(this->btnUserMainMenu);
			this->Controls->Add(this->btnUserNext);
			this->Controls->Add(this->lblUserHeading);
			this->Controls->Add(this->txtUserPostal);
			this->Controls->Add(this->lblUserPostal);
			this->Controls->Add(this->txtUserNTN);
			this->Controls->Add(this->lblUserNTN);
			this->Controls->Add(this->txtUserEmail);
			this->Controls->Add(this->lblUserEmail);
			this->Controls->Add(this->txtUserPAddress);
			this->Controls->Add(this->lblUserPAddress);
			this->Controls->Add(this->txtUserTAddress);
			this->Controls->Add(this->lblUserTAddress);
			this->Controls->Add(this->txtUserTelephone);
			this->Controls->Add(this->lblUserTelephone);
			this->Controls->Add(this->txtUserMobile);
			this->Controls->Add(this->lblUserMobile);
			this->Controls->Add(this->txtUserFather);
			this->Controls->Add(this->lblUserFather);
			this->Controls->Add(this->txtUserCNIC);
			this->Controls->Add(this->lblUserCNIC);
			this->Controls->Add(this->txtUserName);
			this->Controls->Add(this->lblUserName);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"frmNewUser";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"New Registration - User\'s Info";
			this->Load += gcnew System::EventHandler(this, &frmNewUser::frmNewUser_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void frmNewUser_Load(System::Object^ sender, System::EventArgs^ e) {

	if (TransferIndex != -1) {
			btnUserNext->Text = "Transfer";
			btnUserMainMenu->Text = "Back";
			this->Text = "Transfer Ownership";
		}
}
private: System::Void btnUserNext_Click(System::Object^ sender, System::EventArgs^ e) {

		bool IsEmpty;

		IsEmpty = String::IsNullOrEmpty(txtUserName->Text);
		IsEmpty = IsEmpty || String::IsNullOrEmpty(txtUserCNIC->Text);
		IsEmpty = IsEmpty || String::IsNullOrEmpty(txtUserFather->Text);
		IsEmpty = IsEmpty || String::IsNullOrEmpty(txtUserMobile->Text);
		IsEmpty = IsEmpty || String::IsNullOrEmpty(txtUserTelephone->Text);
		IsEmpty = IsEmpty || String::IsNullOrEmpty(txtUserTAddress->Text);
		IsEmpty = IsEmpty || String::IsNullOrEmpty(txtUserPAddress->Text);
		IsEmpty = IsEmpty || String::IsNullOrEmpty(txtUserEmail->Text);
		IsEmpty = IsEmpty || String::IsNullOrEmpty(txtUserNTN->Text);
		IsEmpty = IsEmpty || String::IsNullOrEmpty(txtUserPostal->Text);
		IsEmpty = IsEmpty || String::IsNullOrEmpty(txtUserCity->Text);

		if (IsEmpty == 1) {
			MessageBox::Show("Please fill all the fields", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {

			if (TransferIndex == -1) {

				GlobalClass::UserName[i] = txtUserName->Text;
				GlobalClass::UserCNIC[i] = txtUserCNIC->Text;
				GlobalClass::UserFather[i] = txtUserFather->Text;
				GlobalClass::UserMobile[i] = txtUserMobile->Text;
				GlobalClass::UserTelephone[i] = txtUserTelephone->Text;
				GlobalClass::UserTAddress[i] = txtUserTAddress->Text;
				GlobalClass::UserPAddress[i] = txtUserPAddress->Text;
				GlobalClass::UserEmail[i] = txtUserEmail->Text;
				GlobalClass::UserNTN[i] = txtUserNTN->Text;
				GlobalClass::UserPostal[i] = txtUserPostal->Text;
				GlobalClass::UserCity[i] = txtUserCity->Text;

				(gcnew frmNewVehicle)->Show();
				this->Hide();

			}
			else {

				GlobalClass::TUserName[TransferIndex] = GlobalClass::UserName[TransferIndex];
				GlobalClass::TUserCNIC[TransferIndex] = GlobalClass::UserCNIC[TransferIndex];
				GlobalClass::TUserFather[TransferIndex] = GlobalClass::UserFather[TransferIndex];
				GlobalClass::TUserMobile[TransferIndex] = GlobalClass::UserMobile[TransferIndex];
				GlobalClass::TUserTelephone[TransferIndex] = GlobalClass::UserTelephone[TransferIndex];
				GlobalClass::TUserTAddress[TransferIndex] = GlobalClass::UserTAddress[TransferIndex];
				GlobalClass::TUserPAddress[TransferIndex] = GlobalClass::UserPAddress[TransferIndex];
				GlobalClass::TUserNTN[TransferIndex] = GlobalClass::UserNTN[TransferIndex];
				GlobalClass::TUserPostal[TransferIndex] = GlobalClass::UserPostal[TransferIndex];
				GlobalClass::TUserCity[TransferIndex] = GlobalClass::UserCity[TransferIndex];

				GlobalClass::UserName[TransferIndex] = txtUserName->Text;
				GlobalClass::UserCNIC[TransferIndex] = txtUserCNIC->Text;
				GlobalClass::UserFather[TransferIndex] = txtUserFather->Text;
				GlobalClass::UserMobile[TransferIndex] = txtUserMobile->Text;
				GlobalClass::UserTelephone[TransferIndex] = txtUserTelephone->Text;
				GlobalClass::UserTAddress[TransferIndex] = txtUserTAddress->Text;
				GlobalClass::UserPAddress[TransferIndex] = txtUserPAddress->Text;
				GlobalClass::UserEmail[TransferIndex] = txtUserEmail->Text;
				GlobalClass::UserNTN[TransferIndex] = txtUserNTN->Text;
				GlobalClass::UserPostal[TransferIndex] = txtUserPostal->Text;
				GlobalClass::UserCity[TransferIndex] = txtUserCity->Text;

				TransferIndex = -1;

				MessageBox::Show("Transferred Succesfully", "Transfer", MessageBoxButtons::OK, MessageBoxIcon::Information);

				GlobalClass::MainForm->Show();
				this->Hide();
			}
		}
}

private: System::Void btnUserMainMenu_Click(System::Object^ sender, System::EventArgs^ e) {

		if (TransferIndex == -1) {
			GlobalClass::MainForm->Show();
			this->Hide();
		}
		else{
			GlobalClass::TransferOwnershipForm->Show();
			this->Hide();
		}
	}
};
}
