#pragma once
#include "frmNewDealer.h"
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
	/// Summary for frmNewVehicle
	/// </summary>
	public ref class frmNewVehicle : public System::Windows::Forms::Form
	{
	public:
	
		int i = GlobalClass::registeredVehicles;

		frmNewVehicle(void)
		{
			GlobalClass::NewVehicleForm = this;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	private: System::Windows::Forms::Button^ btnVehicleBack;
	private: System::Windows::Forms::ComboBox^ cboVehicleBody;
	private: System::Windows::Forms::Label^ lblVehicleBody;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmNewVehicle()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblVehicleHeading;
	private: System::Windows::Forms::TextBox^ txtVehiclePrice;
	private: System::Windows::Forms::Label^ lblVehiclePrice;
	private: System::Windows::Forms::TextBox^ txtVehicleChasis;
	private: System::Windows::Forms::Label^ lblVehicleChasis;
	private: System::Windows::Forms::TextBox^ txtVehicleEngine;
	private: System::Windows::Forms::Label^ lblVehicleEngine;
	private: System::Windows::Forms::TextBox^ txtVehicleSeating;
	private: System::Windows::Forms::Label^ lblVehicleSeating;
	private: System::Windows::Forms::TextBox^ txtVehicleHorse;
	private: System::Windows::Forms::Label^ lblVehicleHorse;
	private: System::Windows::Forms::TextBox^ txtVehicleColor;
	private: System::Windows::Forms::Label^ lblVehicleColor;
	private: System::Windows::Forms::TextBox^ txtVehicleModel;
	private: System::Windows::Forms::Label^ lblVehicleModel;
	private: System::Windows::Forms::TextBox^ txtVehicleCompany;
	private: System::Windows::Forms::Label^ lblVehicleCompany;
	private: System::Windows::Forms::TextBox^ txtVehicleMake;
	private: System::Windows::Forms::Label^ lblVehicleMake;
	private: System::Windows::Forms::Button^ btnVehicleNext;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmNewVehicle::typeid));
			this->lblVehicleHeading = (gcnew System::Windows::Forms::Label());
			this->txtVehiclePrice = (gcnew System::Windows::Forms::TextBox());
			this->lblVehiclePrice = (gcnew System::Windows::Forms::Label());
			this->txtVehicleChasis = (gcnew System::Windows::Forms::TextBox());
			this->lblVehicleChasis = (gcnew System::Windows::Forms::Label());
			this->txtVehicleEngine = (gcnew System::Windows::Forms::TextBox());
			this->lblVehicleEngine = (gcnew System::Windows::Forms::Label());
			this->txtVehicleSeating = (gcnew System::Windows::Forms::TextBox());
			this->lblVehicleSeating = (gcnew System::Windows::Forms::Label());
			this->txtVehicleHorse = (gcnew System::Windows::Forms::TextBox());
			this->lblVehicleHorse = (gcnew System::Windows::Forms::Label());
			this->txtVehicleColor = (gcnew System::Windows::Forms::TextBox());
			this->lblVehicleColor = (gcnew System::Windows::Forms::Label());
			this->txtVehicleModel = (gcnew System::Windows::Forms::TextBox());
			this->lblVehicleModel = (gcnew System::Windows::Forms::Label());
			this->txtVehicleCompany = (gcnew System::Windows::Forms::TextBox());
			this->lblVehicleCompany = (gcnew System::Windows::Forms::Label());
			this->txtVehicleMake = (gcnew System::Windows::Forms::TextBox());
			this->lblVehicleMake = (gcnew System::Windows::Forms::Label());
			this->btnVehicleNext = (gcnew System::Windows::Forms::Button());
			this->btnVehicleBack = (gcnew System::Windows::Forms::Button());
			this->cboVehicleBody = (gcnew System::Windows::Forms::ComboBox());
			this->lblVehicleBody = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lblVehicleHeading
			// 
			this->lblVehicleHeading->AutoSize = true;
			this->lblVehicleHeading->Font = (gcnew System::Drawing::Font(L"Cooper Black", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblVehicleHeading->Location = System::Drawing::Point(27, 12);
			this->lblVehicleHeading->Name = L"lblVehicleHeading";
			this->lblVehicleHeading->Size = System::Drawing::Size(233, 36);
			this->lblVehicleHeading->TabIndex = 0;
			this->lblVehicleHeading->Text = L"Vehicle\'s Info";
			// 
			// txtVehiclePrice
			// 
			this->txtVehiclePrice->Location = System::Drawing::Point(222, 280);
			this->txtVehiclePrice->Name = L"txtVehiclePrice";
			this->txtVehiclePrice->Size = System::Drawing::Size(211, 20);
			this->txtVehiclePrice->TabIndex = 9;
			// 
			// lblVehiclePrice
			// 
			this->lblVehiclePrice->AutoSize = true;
			this->lblVehiclePrice->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblVehiclePrice->Location = System::Drawing::Point(29, 273);
			this->lblVehiclePrice->Name = L"lblVehiclePrice";
			this->lblVehiclePrice->Size = System::Drawing::Size(122, 25);
			this->lblVehiclePrice->TabIndex = 39;
			this->lblVehiclePrice->Text = L"Vehicle Price";
			// 
			// txtVehicleChasis
			// 
			this->txtVehicleChasis->Location = System::Drawing::Point(222, 97);
			this->txtVehicleChasis->Name = L"txtVehicleChasis";
			this->txtVehicleChasis->Size = System::Drawing::Size(211, 20);
			this->txtVehicleChasis->TabIndex = 2;
			// 
			// lblVehicleChasis
			// 
			this->lblVehicleChasis->AutoSize = true;
			this->lblVehicleChasis->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblVehicleChasis->Location = System::Drawing::Point(29, 91);
			this->lblVehicleChasis->Name = L"lblVehicleChasis";
			this->lblVehicleChasis->Size = System::Drawing::Size(141, 25);
			this->lblVehicleChasis->TabIndex = 37;
			this->lblVehicleChasis->Text = L"Chasis Number";
			// 
			// txtVehicleEngine
			// 
			this->txtVehicleEngine->Location = System::Drawing::Point(222, 71);
			this->txtVehicleEngine->Name = L"txtVehicleEngine";
			this->txtVehicleEngine->Size = System::Drawing::Size(211, 20);
			this->txtVehicleEngine->TabIndex = 1;
			// 
			// lblVehicleEngine
			// 
			this->lblVehicleEngine->AutoSize = true;
			this->lblVehicleEngine->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblVehicleEngine->Location = System::Drawing::Point(28, 66);
			this->lblVehicleEngine->Name = L"lblVehicleEngine";
			this->lblVehicleEngine->Size = System::Drawing::Size(142, 25);
			this->lblVehicleEngine->TabIndex = 35;
			this->lblVehicleEngine->Text = L"Engine Number";
			// 
			// txtVehicleSeating
			// 
			this->txtVehicleSeating->Location = System::Drawing::Point(222, 254);
			this->txtVehicleSeating->Name = L"txtVehicleSeating";
			this->txtVehicleSeating->Size = System::Drawing::Size(211, 20);
			this->txtVehicleSeating->TabIndex = 8;
			// 
			// lblVehicleSeating
			// 
			this->lblVehicleSeating->AutoSize = true;
			this->lblVehicleSeating->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblVehicleSeating->Location = System::Drawing::Point(29, 248);
			this->lblVehicleSeating->Name = L"lblVehicleSeating";
			this->lblVehicleSeating->Size = System::Drawing::Size(155, 25);
			this->lblVehicleSeating->TabIndex = 33;
			this->lblVehicleSeating->Text = L"Seating Capacity";
			// 
			// txtVehicleHorse
			// 
			this->txtVehicleHorse->Location = System::Drawing::Point(222, 228);
			this->txtVehicleHorse->Name = L"txtVehicleHorse";
			this->txtVehicleHorse->Size = System::Drawing::Size(211, 20);
			this->txtVehicleHorse->TabIndex = 7;
			// 
			// lblVehicleHorse
			// 
			this->lblVehicleHorse->AutoSize = true;
			this->lblVehicleHorse->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblVehicleHorse->Location = System::Drawing::Point(29, 221);
			this->lblVehicleHorse->Name = L"lblVehicleHorse";
			this->lblVehicleHorse->Size = System::Drawing::Size(119, 25);
			this->lblVehicleHorse->TabIndex = 31;
			this->lblVehicleHorse->Text = L"Horse Power";
			// 
			// txtVehicleColor
			// 
			this->txtVehicleColor->Location = System::Drawing::Point(222, 202);
			this->txtVehicleColor->Name = L"txtVehicleColor";
			this->txtVehicleColor->Size = System::Drawing::Size(211, 20);
			this->txtVehicleColor->TabIndex = 6;
			// 
			// lblVehicleColor
			// 
			this->lblVehicleColor->AutoSize = true;
			this->lblVehicleColor->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblVehicleColor->Location = System::Drawing::Point(29, 195);
			this->lblVehicleColor->Name = L"lblVehicleColor";
			this->lblVehicleColor->Size = System::Drawing::Size(58, 25);
			this->lblVehicleColor->TabIndex = 29;
			this->lblVehicleColor->Text = L"Color";
			// 
			// txtVehicleModel
			// 
			this->txtVehicleModel->Location = System::Drawing::Point(222, 176);
			this->txtVehicleModel->Name = L"txtVehicleModel";
			this->txtVehicleModel->Size = System::Drawing::Size(211, 20);
			this->txtVehicleModel->TabIndex = 5;
			// 
			// lblVehicleModel
			// 
			this->lblVehicleModel->AutoSize = true;
			this->lblVehicleModel->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblVehicleModel->Location = System::Drawing::Point(29, 170);
			this->lblVehicleModel->Name = L"lblVehicleModel";
			this->lblVehicleModel->Size = System::Drawing::Size(64, 25);
			this->lblVehicleModel->TabIndex = 27;
			this->lblVehicleModel->Text = L"Model";
			// 
			// txtVehicleCompany
			// 
			this->txtVehicleCompany->Location = System::Drawing::Point(222, 150);
			this->txtVehicleCompany->Name = L"txtVehicleCompany";
			this->txtVehicleCompany->Size = System::Drawing::Size(211, 20);
			this->txtVehicleCompany->TabIndex = 4;
			// 
			// lblVehicleCompany
			// 
			this->lblVehicleCompany->AutoSize = true;
			this->lblVehicleCompany->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblVehicleCompany->Location = System::Drawing::Point(29, 143);
			this->lblVehicleCompany->Name = L"lblVehicleCompany";
			this->lblVehicleCompany->Size = System::Drawing::Size(158, 25);
			this->lblVehicleCompany->TabIndex = 25;
			this->lblVehicleCompany->Text = L"Company\'s Name";
			// 
			// txtVehicleMake
			// 
			this->txtVehicleMake->Location = System::Drawing::Point(222, 125);
			this->txtVehicleMake->Name = L"txtVehicleMake";
			this->txtVehicleMake->Size = System::Drawing::Size(211, 20);
			this->txtVehicleMake->TabIndex = 3;
			// 
			// lblVehicleMake
			// 
			this->lblVehicleMake->AutoSize = true;
			this->lblVehicleMake->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblVehicleMake->Location = System::Drawing::Point(29, 116);
			this->lblVehicleMake->Name = L"lblVehicleMake";
			this->lblVehicleMake->Size = System::Drawing::Size(57, 25);
			this->lblVehicleMake->TabIndex = 21;
			this->lblVehicleMake->Text = L"Make";
			// 
			// btnVehicleNext
			// 
			this->btnVehicleNext->Location = System::Drawing::Point(300, 400);
			this->btnVehicleNext->Name = L"btnVehicleNext";
			this->btnVehicleNext->Size = System::Drawing::Size(75, 23);
			this->btnVehicleNext->TabIndex = 11;
			this->btnVehicleNext->Text = L"Next";
			this->btnVehicleNext->UseVisualStyleBackColor = true;
			this->btnVehicleNext->Click += gcnew System::EventHandler(this, &frmNewVehicle::btnVehicleNext_Click);
			// 
			// btnVehicleBack
			// 
			this->btnVehicleBack->Location = System::Drawing::Point(60, 400);
			this->btnVehicleBack->Name = L"btnVehicleBack";
			this->btnVehicleBack->Size = System::Drawing::Size(75, 23);
			this->btnVehicleBack->TabIndex = 12;
			this->btnVehicleBack->Text = L"Back";
			this->btnVehicleBack->UseVisualStyleBackColor = true;
			this->btnVehicleBack->Click += gcnew System::EventHandler(this, &frmNewVehicle::btnVehicleBack_Click);
			// 
			// cboVehicleBody
			// 
			this->cboVehicleBody->FormattingEnabled = true;
			this->cboVehicleBody->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Motorcycle", L"Car", L"Bus", L"Others" });
			this->cboVehicleBody->Location = System::Drawing::Point(222, 306);
			this->cboVehicleBody->Name = L"cboVehicleBody";
			this->cboVehicleBody->Size = System::Drawing::Size(211, 21);
			this->cboVehicleBody->TabIndex = 10;
			// 
			// lblVehicleBody
			// 
			this->lblVehicleBody->AutoSize = true;
			this->lblVehicleBody->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblVehicleBody->Location = System::Drawing::Point(29, 298);
			this->lblVehicleBody->Name = L"lblVehicleBody";
			this->lblVehicleBody->Size = System::Drawing::Size(125, 25);
			this->lblVehicleBody->TabIndex = 45;
			this->lblVehicleBody->Text = L"Type of Body";
			// 
			// frmNewVehicle
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->ClientSize = System::Drawing::Size(458, 454);
			this->Controls->Add(this->lblVehicleBody);
			this->Controls->Add(this->cboVehicleBody);
			this->Controls->Add(this->btnVehicleBack);
			this->Controls->Add(this->btnVehicleNext);
			this->Controls->Add(this->lblVehicleHeading);
			this->Controls->Add(this->txtVehiclePrice);
			this->Controls->Add(this->lblVehiclePrice);
			this->Controls->Add(this->txtVehicleChasis);
			this->Controls->Add(this->lblVehicleChasis);
			this->Controls->Add(this->txtVehicleEngine);
			this->Controls->Add(this->lblVehicleEngine);
			this->Controls->Add(this->txtVehicleSeating);
			this->Controls->Add(this->lblVehicleSeating);
			this->Controls->Add(this->txtVehicleHorse);
			this->Controls->Add(this->lblVehicleHorse);
			this->Controls->Add(this->txtVehicleColor);
			this->Controls->Add(this->lblVehicleColor);
			this->Controls->Add(this->txtVehicleModel);
			this->Controls->Add(this->lblVehicleModel);
			this->Controls->Add(this->txtVehicleCompany);
			this->Controls->Add(this->lblVehicleCompany);
			this->Controls->Add(this->txtVehicleMake);
			this->Controls->Add(this->lblVehicleMake);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"frmNewVehicle";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"New Registration - Vehicle\'s Info";
			this->Load += gcnew System::EventHandler(this, &frmNewVehicle::frmNewVehicle_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnVehicleNext_Click(System::Object^ sender, System::EventArgs^ e) {

		bool IsEmpty;

		IsEmpty = String::IsNullOrEmpty(txtVehicleEngine->Text);
		IsEmpty = IsEmpty || String::IsNullOrEmpty(txtVehicleChasis->Text);
		IsEmpty = IsEmpty || String::IsNullOrEmpty(txtVehicleMake->Text);
		IsEmpty = IsEmpty || String::IsNullOrEmpty(txtVehicleCompany->Text);
		IsEmpty = IsEmpty || String::IsNullOrEmpty(txtVehicleColor->Text);
		IsEmpty = IsEmpty || String::IsNullOrEmpty(txtVehicleHorse->Text);
		IsEmpty = IsEmpty || String::IsNullOrEmpty(txtVehicleSeating->Text);
		IsEmpty = IsEmpty || String::IsNullOrEmpty(txtVehiclePrice->Text);
		IsEmpty = IsEmpty || String::IsNullOrEmpty(txtVehicleModel->Text);
		IsEmpty = IsEmpty || String::IsNullOrEmpty(cboVehicleBody->Text);

		if (IsEmpty) {
			MessageBox::Show("Please fill all the fields", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			GlobalClass::VehicleEngine[i] = txtVehicleEngine->Text;
			GlobalClass::VehicleChasis[i] = txtVehicleChasis->Text;
			GlobalClass::VehicleMake[i] = txtVehicleMake->Text;
			GlobalClass::VehicleCompany[i] = txtVehicleCompany->Text;
			GlobalClass::VehicleColor[i] = txtVehicleColor->Text;
			GlobalClass::VehicleHorse[i] = txtVehicleHorse->Text;
			GlobalClass::VehicleSeating[i] = txtVehicleSeating->Text;
			GlobalClass::VehiclePrice[i] = txtVehiclePrice->Text;
			GlobalClass::VehicleModel[i] = txtVehicleModel->Text;
			GlobalClass::VehicleBody[i] = cboVehicleBody->Text;

			(gcnew frmNewDealer)->Show();
			this->Hide();
		}	
	}
private: System::Void frmNewVehicle_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnVehicleBack_Click(System::Object^ sender, System::EventArgs^ e) {

	GlobalClass::NewUserForm->Show();
	this->Hide();
}
};
}
