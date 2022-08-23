#pragma once
#include "frmSearch.h"
#include "frmNewUser.h"
#include "frmRegistrationNumber.h"
#include "frmTransferOwnership.h"
#include "GlobalClass.h"

namespace VehicleRegistrationSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace Globals;
	
	/// <summary>
	/// Summary for frmMain
	/// </summary>
	public ref class frmMain : public System::Windows::Forms::Form
	{
	public:
		frmMain(void)
		{
			
			InitializeComponent();

			// Dummy Info
			GlobalClass::UserName[0] = "Syed Bilal Abbas";
			GlobalClass::UserCNIC[0] = "12345-1234567-1";
			GlobalClass::UserFather[0] = "Syed Arshad Abbas";
			GlobalClass::UserMobile[0] = "03304359994";
			GlobalClass::UserTelephone[0] = "0";
			GlobalClass::UserTAddress[0] = "ABC";
			GlobalClass::UserPAddress[0] = "DEF";
			GlobalClass::UserEmail[0] = "abbasb000@gmail.com";
			GlobalClass::UserNTN[0] = "1234567890";
			GlobalClass::UserPostal[0] = "12345";
			GlobalClass::UserCity[0] = "Lahore";

			GlobalClass::VehicleEngine[0] = "9616173";
			GlobalClass::VehicleChasis[0] = "JH428732";
			GlobalClass::VehicleMake[0] = "	HONDA - CD 70";
			GlobalClass::VehicleCompany[0] = "HONDA";
			GlobalClass::VehicleModel[0] = "2017";
			GlobalClass::VehicleColor[0] = "RED";
			GlobalClass::VehicleHorse[0] = "70 CC";
			GlobalClass::VehicleSeating[0] = "2";
			GlobalClass::VehiclePrice[0] = "63,500";
			GlobalClass::VehicleBody[0] = "Car";

			GlobalClass::RegistrationDate[0] = "10-JUL-17";
			GlobalClass::RegistrationTime[0] = "12:00:00";
			GlobalClass::RegistrationNumber[0] = "ABC-20-1234";

			GlobalClass::MainForm = this;
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmMain()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ lblMainHeading;
	private: System::Windows::Forms::Button^ btnRegistration;
	private: System::Windows::Forms::Button^ btnSearch;
	private: System::Windows::Forms::Button^ btnQuit;
	private: System::Windows::Forms::Button^ btnTransfer;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmMain::typeid));
			this->lblMainHeading = (gcnew System::Windows::Forms::Label());
			this->btnRegistration = (gcnew System::Windows::Forms::Button());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->btnQuit = (gcnew System::Windows::Forms::Button());
			this->btnTransfer = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lblMainHeading
			// 
			this->lblMainHeading->AutoSize = true;
			this->lblMainHeading->Font = (gcnew System::Drawing::Font(L"Cooper Black", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMainHeading->Location = System::Drawing::Point(78, 52);
			this->lblMainHeading->Name = L"lblMainHeading";
			this->lblMainHeading->Size = System::Drawing::Size(145, 34);
			this->lblMainHeading->TabIndex = 0;
			this->lblMainHeading->Text = L"Welcome";
			// 
			// btnRegistration
			// 
			this->btnRegistration->Location = System::Drawing::Point(94, 110);
			this->btnRegistration->Name = L"btnRegistration";
			this->btnRegistration->Size = System::Drawing::Size(114, 23);
			this->btnRegistration->TabIndex = 1;
			this->btnRegistration->Text = L"New Registration";
			this->btnRegistration->UseVisualStyleBackColor = true;
			this->btnRegistration->Click += gcnew System::EventHandler(this, &frmMain::btnRegistration_Click);
			// 
			// btnSearch
			// 
			this->btnSearch->Location = System::Drawing::Point(94, 139);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(114, 23);
			this->btnSearch->TabIndex = 2;
			this->btnSearch->Text = L"Search Record";
			this->btnSearch->UseVisualStyleBackColor = true;
			this->btnSearch->Click += gcnew System::EventHandler(this, &frmMain::btnSearch_Click);
			// 
			// btnQuit
			// 
			this->btnQuit->Location = System::Drawing::Point(94, 197);
			this->btnQuit->Name = L"btnQuit";
			this->btnQuit->Size = System::Drawing::Size(114, 23);
			this->btnQuit->TabIndex = 4;
			this->btnQuit->Text = L"Quit Program";
			this->btnQuit->UseVisualStyleBackColor = true;
			this->btnQuit->Click += gcnew System::EventHandler(this, &frmMain::btnQuit_Click);
			// 
			// btnTransfer
			// 
			this->btnTransfer->Location = System::Drawing::Point(94, 168);
			this->btnTransfer->Name = L"btnTransfer";
			this->btnTransfer->Size = System::Drawing::Size(114, 23);
			this->btnTransfer->TabIndex = 3;
			this->btnTransfer->Text = L"Transfer Ownership";
			this->btnTransfer->UseVisualStyleBackColor = true;
			this->btnTransfer->Click += gcnew System::EventHandler(this, &frmMain::btnTransfer_Click);
			// 
			// frmMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->ClientSize = System::Drawing::Size(313, 254);
			this->Controls->Add(this->btnTransfer);
			this->Controls->Add(this->btnQuit);
			this->Controls->Add(this->btnSearch);
			this->Controls->Add(this->btnRegistration);
			this->Controls->Add(this->lblMainHeading);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"frmMain";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Vehicle Registration System";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnRegistration_Click(System::Object^ sender, System::EventArgs^ e) {
		
		(gcnew frmNewUser)->Show();
		this->Hide();

	}
	private: System::Void btnQuit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {
	
		(gcnew frmSearch)->Show();
		this->Hide();
	}
	private: System::Void btnTransfer_Click(System::Object^ sender, System::EventArgs^ e) {
		
		(gcnew frmTransferOwnership)->Show();
		this->Hide();
	}
};
}