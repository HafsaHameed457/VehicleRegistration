#pragma once
#include "GlobalClass.h"
#include "frmRegistrationNumber.h"

namespace VehicleRegistrationSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace Globals;

	/// <summary>
	/// Summary for frmNewDealer
	/// </summary>
	public ref class frmNewDealer : public System::Windows::Forms::Form
	{
	public:

		int i = GlobalClass::registeredVehicles;

		frmNewDealer(void)
		{
			GlobalClass::NewDealerForm = this;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::Button^ btnDealerBack;
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmNewDealer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblDealerHeading;
	private: System::Windows::Forms::TextBox^ txtDealerCNIC;
	private: System::Windows::Forms::Label^ lblDealerCNIC;
	private: System::Windows::Forms::TextBox^ txtDealerName;
	private: System::Windows::Forms::Label^ lblDealerName;
	private: System::Windows::Forms::TextBox^ txtDealerAddress;
	private: System::Windows::Forms::Label^ lblDealerAddress;
	private: System::Windows::Forms::TextBox^ txtDealerPhone;
	private: System::Windows::Forms::Label^ lblDealerPhone;
	private: System::Windows::Forms::Button^ btnDealerRegistration;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmNewDealer::typeid));
			this->lblDealerHeading = (gcnew System::Windows::Forms::Label());
			this->txtDealerCNIC = (gcnew System::Windows::Forms::TextBox());
			this->lblDealerCNIC = (gcnew System::Windows::Forms::Label());
			this->txtDealerName = (gcnew System::Windows::Forms::TextBox());
			this->lblDealerName = (gcnew System::Windows::Forms::Label());
			this->txtDealerAddress = (gcnew System::Windows::Forms::TextBox());
			this->lblDealerAddress = (gcnew System::Windows::Forms::Label());
			this->txtDealerPhone = (gcnew System::Windows::Forms::TextBox());
			this->lblDealerPhone = (gcnew System::Windows::Forms::Label());
			this->btnDealerRegistration = (gcnew System::Windows::Forms::Button());
			this->btnDealerBack = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lblDealerHeading
			// 
			this->lblDealerHeading->AutoSize = true;
			this->lblDealerHeading->Font = (gcnew System::Drawing::Font(L"Cooper Black", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDealerHeading->Location = System::Drawing::Point(25, 27);
			this->lblDealerHeading->Name = L"lblDealerHeading";
			this->lblDealerHeading->Size = System::Drawing::Size(218, 36);
			this->lblDealerHeading->TabIndex = 0;
			this->lblDealerHeading->Text = L"Dealer\'s Info";
			// 
			// txtDealerCNIC
			// 
			this->txtDealerCNIC->Location = System::Drawing::Point(226, 118);
			this->txtDealerCNIC->Name = L"txtDealerCNIC";
			this->txtDealerCNIC->Size = System::Drawing::Size(211, 20);
			this->txtDealerCNIC->TabIndex = 2;
			// 
			// lblDealerCNIC
			// 
			this->lblDealerCNIC->AutoSize = true;
			this->lblDealerCNIC->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDealerCNIC->Location = System::Drawing::Point(26, 115);
			this->lblDealerCNIC->Name = L"lblDealerCNIC";
			this->lblDealerCNIC->Size = System::Drawing::Size(53, 25);
			this->lblDealerCNIC->TabIndex = 50;
			this->lblDealerCNIC->Text = L"CNIC";
			// 
			// txtDealerName
			// 
			this->txtDealerName->Location = System::Drawing::Point(226, 92);
			this->txtDealerName->Name = L"txtDealerName";
			this->txtDealerName->Size = System::Drawing::Size(211, 20);
			this->txtDealerName->TabIndex = 1;
			// 
			// lblDealerName
			// 
			this->lblDealerName->AutoSize = true;
			this->lblDealerName->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDealerName->Location = System::Drawing::Point(26, 89);
			this->lblDealerName->Name = L"lblDealerName";
			this->lblDealerName->Size = System::Drawing::Size(59, 25);
			this->lblDealerName->TabIndex = 48;
			this->lblDealerName->Text = L"Name";
			// 
			// txtDealerAddress
			// 
			this->txtDealerAddress->Location = System::Drawing::Point(226, 172);
			this->txtDealerAddress->Name = L"txtDealerAddress";
			this->txtDealerAddress->Size = System::Drawing::Size(211, 20);
			this->txtDealerAddress->TabIndex = 4;
			// 
			// lblDealerAddress
			// 
			this->lblDealerAddress->AutoSize = true;
			this->lblDealerAddress->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDealerAddress->Location = System::Drawing::Point(26, 166);
			this->lblDealerAddress->Name = L"lblDealerAddress";
			this->lblDealerAddress->Size = System::Drawing::Size(83, 25);
			this->lblDealerAddress->TabIndex = 44;
			this->lblDealerAddress->Text = L"Address";
			// 
			// txtDealerPhone
			// 
			this->txtDealerPhone->Location = System::Drawing::Point(226, 146);
			this->txtDealerPhone->Name = L"txtDealerPhone";
			this->txtDealerPhone->Size = System::Drawing::Size(211, 20);
			this->txtDealerPhone->TabIndex = 3;
			// 
			// lblDealerPhone
			// 
			this->lblDealerPhone->AutoSize = true;
			this->lblDealerPhone->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDealerPhone->Location = System::Drawing::Point(26, 140);
			this->lblDealerPhone->Name = L"lblDealerPhone";
			this->lblDealerPhone->Size = System::Drawing::Size(137, 25);
			this->lblDealerPhone->TabIndex = 42;
			this->lblDealerPhone->Text = L"Phone Number";
			// 
			// btnDealerRegistration
			// 
			this->btnDealerRegistration->Location = System::Drawing::Point(264, 226);
			this->btnDealerRegistration->Name = L"btnDealerRegistration";
			this->btnDealerRegistration->Size = System::Drawing::Size(173, 25);
			this->btnDealerRegistration->TabIndex = 5;
			this->btnDealerRegistration->Text = L"Generate Registration Number";
			this->btnDealerRegistration->UseVisualStyleBackColor = true;
			this->btnDealerRegistration->Click += gcnew System::EventHandler(this, &frmNewDealer::btnDealerRegistration_Click);
			// 
			// btnDealerBack
			// 
			this->btnDealerBack->Location = System::Drawing::Point(50, 228);
			this->btnDealerBack->Name = L"btnDealerBack";
			this->btnDealerBack->Size = System::Drawing::Size(75, 23);
			this->btnDealerBack->TabIndex = 6;
			this->btnDealerBack->Text = L"Back";
			this->btnDealerBack->UseVisualStyleBackColor = true;
			this->btnDealerBack->Click += gcnew System::EventHandler(this, &frmNewDealer::btnDealerBack_Click);
			// 
			// frmNewDealer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->ClientSize = System::Drawing::Size(496, 283);
			this->Controls->Add(this->btnDealerBack);
			this->Controls->Add(this->btnDealerRegistration);
			this->Controls->Add(this->lblDealerHeading);
			this->Controls->Add(this->txtDealerCNIC);
			this->Controls->Add(this->lblDealerCNIC);
			this->Controls->Add(this->txtDealerName);
			this->Controls->Add(this->lblDealerName);
			this->Controls->Add(this->txtDealerAddress);
			this->Controls->Add(this->lblDealerAddress);
			this->Controls->Add(this->txtDealerPhone);
			this->Controls->Add(this->lblDealerPhone);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"frmNewDealer";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"New Registration - Dealer\'s Info";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnDealerRegistration_Click(System::Object^ sender, System::EventArgs^ e) {

		bool IsEmpty;

		IsEmpty = String::IsNullOrEmpty(txtDealerName->Text);
		IsEmpty = IsEmpty || String::IsNullOrEmpty(txtDealerCNIC->Text);
		IsEmpty = IsEmpty || String::IsNullOrEmpty(txtDealerPhone->Text);
		IsEmpty = IsEmpty || String::IsNullOrEmpty(txtDealerAddress->Text);

		if (IsEmpty) {
			MessageBox::Show("Please fill all the fields", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			GlobalClass::DealerName[i] = txtDealerName->Text;
			GlobalClass::DealerCNIC[i] = txtDealerCNIC->Text;
			GlobalClass::DealerPhone[i] = txtDealerPhone->Text;
			GlobalClass::DealerAddress[i] = txtDealerAddress->Text;

			(gcnew frmRegistrationNumber)->Show();
			this->Hide();

		}
	}
private: System::Void btnDealerBack_Click(System::Object^ sender, System::EventArgs^ e) {

	GlobalClass::NewVehicleForm->Show();
	this->Hide();
}
};
}
