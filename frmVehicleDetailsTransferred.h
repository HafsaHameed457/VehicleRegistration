#pragma once
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
	/// Summary for frmVehicleDetailsTransferred
	/// </summary>
	public ref class frmVehicleDetailsTransferred : public System::Windows::Forms::Form
	{
	public:

		int Index;

		frmVehicleDetailsTransferred(void)
		{
			GlobalClass::VehicleDetailsTransferredForm = this;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		frmVehicleDetailsTransferred(int i)
		{
			Index = i;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmVehicleDetailsTransferred()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblDetailsOwner;
	private: System::Windows::Forms::Label^ lblDetailsCity2;
	private: System::Windows::Forms::Label^ lblDetailsCity;
	private: System::Windows::Forms::Label^ lblDetailsModel;
	private: System::Windows::Forms::Label^ lblDetailsRegistrationDate;
	private: System::Windows::Forms::Label^ lblDetailsColor;
	private: System::Windows::Forms::Label^ lblDetailsVehiclePrice;
	private: System::Windows::Forms::Label^ lblDetailsRegistrationDate2;
	private: System::Windows::Forms::Label^ lblDetailsModel2;
	private: System::Windows::Forms::Label^ lblDetailsFather2;
	private: System::Windows::Forms::Label^ lblDetailsMake;
	private: System::Windows::Forms::Label^ lblDetailsChassis;
	private: System::Windows::Forms::Label^ lblDetailsChassis2;
	private: System::Windows::Forms::Label^ lblDetailsEngine2;
	private: System::Windows::Forms::Label^ lblDetailsOwner2;
	private: System::Windows::Forms::TableLayoutPanel^ tblDetailsRegistration;
	private: System::Windows::Forms::Label^ lblDetailsRegistration;
	private: System::Windows::Forms::Label^ lblDetailsRegistration2;
	private: System::Windows::Forms::Label^ lblOwnerDetails;
	private: System::Windows::Forms::Label^ lblDetailsEngine;
	private: System::Windows::Forms::Label^ lblDetailsMake2;
	private: System::Windows::Forms::Label^ lblVehicleDetails;
	private: System::Windows::Forms::TableLayoutPanel^ tblDetailsOwner;
	private: System::Windows::Forms::Label^ lblDetailsFather;
	private: System::Windows::Forms::Label^ lblDetailsVehiclePrice2;
	private: System::Windows::Forms::Label^ lblDetailsColor2;
	private: System::Windows::Forms::TableLayoutPanel^ tblDetailsVehicle;
	private: System::Windows::Forms::Button^ btnDetailsBack;
	private: System::Windows::Forms::Button^ btnDetailsMainMenu;
	private: System::Windows::Forms::Label^ lblFOwnerDetails;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Label^ lblDetailsFFather;
	private: System::Windows::Forms::Label^ lblDetailsFOwner;
	private: System::Windows::Forms::Label^ lblDetailsFOwner2;
	private: System::Windows::Forms::Label^ lblDetailsFCity2;
	private: System::Windows::Forms::Label^ lblDetailsFCity;
	private: System::Windows::Forms::Label^ lblDetailsFFather2;
	private: System::Windows::Forms::Label^ lblDetailsBody;
	private: System::Windows::Forms::Label^ lblDetailsBody2;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmVehicleDetailsTransferred::typeid));
			this->lblDetailsOwner = (gcnew System::Windows::Forms::Label());
			this->lblDetailsCity2 = (gcnew System::Windows::Forms::Label());
			this->lblDetailsCity = (gcnew System::Windows::Forms::Label());
			this->lblDetailsModel = (gcnew System::Windows::Forms::Label());
			this->lblDetailsRegistrationDate = (gcnew System::Windows::Forms::Label());
			this->lblDetailsColor = (gcnew System::Windows::Forms::Label());
			this->lblDetailsVehiclePrice = (gcnew System::Windows::Forms::Label());
			this->lblDetailsRegistrationDate2 = (gcnew System::Windows::Forms::Label());
			this->lblDetailsModel2 = (gcnew System::Windows::Forms::Label());
			this->lblDetailsFather2 = (gcnew System::Windows::Forms::Label());
			this->lblDetailsMake = (gcnew System::Windows::Forms::Label());
			this->lblDetailsChassis = (gcnew System::Windows::Forms::Label());
			this->lblDetailsChassis2 = (gcnew System::Windows::Forms::Label());
			this->lblDetailsEngine2 = (gcnew System::Windows::Forms::Label());
			this->lblDetailsOwner2 = (gcnew System::Windows::Forms::Label());
			this->tblDetailsRegistration = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->lblDetailsRegistration = (gcnew System::Windows::Forms::Label());
			this->lblDetailsRegistration2 = (gcnew System::Windows::Forms::Label());
			this->lblOwnerDetails = (gcnew System::Windows::Forms::Label());
			this->lblDetailsEngine = (gcnew System::Windows::Forms::Label());
			this->lblDetailsMake2 = (gcnew System::Windows::Forms::Label());
			this->lblVehicleDetails = (gcnew System::Windows::Forms::Label());
			this->tblDetailsOwner = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->lblDetailsFather = (gcnew System::Windows::Forms::Label());
			this->lblDetailsVehiclePrice2 = (gcnew System::Windows::Forms::Label());
			this->lblDetailsColor2 = (gcnew System::Windows::Forms::Label());
			this->tblDetailsVehicle = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->lblDetailsBody = (gcnew System::Windows::Forms::Label());
			this->lblDetailsBody2 = (gcnew System::Windows::Forms::Label());
			this->btnDetailsBack = (gcnew System::Windows::Forms::Button());
			this->btnDetailsMainMenu = (gcnew System::Windows::Forms::Button());
			this->lblFOwnerDetails = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->lblDetailsFFather = (gcnew System::Windows::Forms::Label());
			this->lblDetailsFOwner = (gcnew System::Windows::Forms::Label());
			this->lblDetailsFOwner2 = (gcnew System::Windows::Forms::Label());
			this->lblDetailsFCity2 = (gcnew System::Windows::Forms::Label());
			this->lblDetailsFCity = (gcnew System::Windows::Forms::Label());
			this->lblDetailsFFather2 = (gcnew System::Windows::Forms::Label());
			this->tblDetailsRegistration->SuspendLayout();
			this->tblDetailsOwner->SuspendLayout();
			this->tblDetailsVehicle->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// lblDetailsOwner
			// 
			this->lblDetailsOwner->AutoSize = true;
			this->lblDetailsOwner->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->lblDetailsOwner->Location = System::Drawing::Point(225, 0);
			this->lblDetailsOwner->Name = L"lblDetailsOwner";
			this->lblDetailsOwner->Size = System::Drawing::Size(0, 25);
			this->lblDetailsOwner->TabIndex = 73;
			// 
			// lblDetailsCity2
			// 
			this->lblDetailsCity2->AutoSize = true;
			this->lblDetailsCity2->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDetailsCity2->Location = System::Drawing::Point(3, 50);
			this->lblDetailsCity2->Name = L"lblDetailsCity2";
			this->lblDetailsCity2->Size = System::Drawing::Size(120, 24);
			this->lblDetailsCity2->TabIndex = 72;
			this->lblDetailsCity2->Text = L"Owner City:";
			// 
			// lblDetailsCity
			// 
			this->lblDetailsCity->AutoSize = true;
			this->lblDetailsCity->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->lblDetailsCity->Location = System::Drawing::Point(225, 50);
			this->lblDetailsCity->Name = L"lblDetailsCity";
			this->lblDetailsCity->Size = System::Drawing::Size(0, 25);
			this->lblDetailsCity->TabIndex = 75;
			// 
			// lblDetailsModel
			// 
			this->lblDetailsModel->AutoSize = true;
			this->lblDetailsModel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->lblDetailsModel->Location = System::Drawing::Point(223, 100);
			this->lblDetailsModel->Name = L"lblDetailsModel";
			this->lblDetailsModel->Size = System::Drawing::Size(0, 25);
			this->lblDetailsModel->TabIndex = 80;
			// 
			// lblDetailsRegistrationDate
			// 
			this->lblDetailsRegistrationDate->AutoSize = true;
			this->lblDetailsRegistrationDate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->lblDetailsRegistrationDate->Location = System::Drawing::Point(223, 75);
			this->lblDetailsRegistrationDate->Name = L"lblDetailsRegistrationDate";
			this->lblDetailsRegistrationDate->Size = System::Drawing::Size(0, 25);
			this->lblDetailsRegistrationDate->TabIndex = 81;
			// 
			// lblDetailsColor
			// 
			this->lblDetailsColor->AutoSize = true;
			this->lblDetailsColor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->lblDetailsColor->Location = System::Drawing::Point(223, 150);
			this->lblDetailsColor->Name = L"lblDetailsColor";
			this->lblDetailsColor->Size = System::Drawing::Size(0, 25);
			this->lblDetailsColor->TabIndex = 82;
			// 
			// lblDetailsVehiclePrice
			// 
			this->lblDetailsVehiclePrice->AutoSize = true;
			this->lblDetailsVehiclePrice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->lblDetailsVehiclePrice->Location = System::Drawing::Point(223, 125);
			this->lblDetailsVehiclePrice->Name = L"lblDetailsVehiclePrice";
			this->lblDetailsVehiclePrice->Size = System::Drawing::Size(0, 25);
			this->lblDetailsVehiclePrice->TabIndex = 76;
			// 
			// lblDetailsRegistrationDate2
			// 
			this->lblDetailsRegistrationDate2->AutoSize = true;
			this->lblDetailsRegistrationDate2->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDetailsRegistrationDate2->Location = System::Drawing::Point(3, 75);
			this->lblDetailsRegistrationDate2->Name = L"lblDetailsRegistrationDate2";
			this->lblDetailsRegistrationDate2->Size = System::Drawing::Size(180, 24);
			this->lblDetailsRegistrationDate2->TabIndex = 76;
			this->lblDetailsRegistrationDate2->Text = L"Registration Date:";
			// 
			// lblDetailsModel2
			// 
			this->lblDetailsModel2->AutoSize = true;
			this->lblDetailsModel2->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDetailsModel2->Location = System::Drawing::Point(3, 100);
			this->lblDetailsModel2->Name = L"lblDetailsModel2";
			this->lblDetailsModel2->Size = System::Drawing::Size(72, 24);
			this->lblDetailsModel2->TabIndex = 78;
			this->lblDetailsModel2->Text = L"Model:";
			// 
			// lblDetailsFather2
			// 
			this->lblDetailsFather2->AutoSize = true;
			this->lblDetailsFather2->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDetailsFather2->Location = System::Drawing::Point(3, 25);
			this->lblDetailsFather2->Name = L"lblDetailsFather2";
			this->lblDetailsFather2->Size = System::Drawing::Size(137, 24);
			this->lblDetailsFather2->TabIndex = 71;
			this->lblDetailsFather2->Text = L"Father Name:";
			// 
			// lblDetailsMake
			// 
			this->lblDetailsMake->AutoSize = true;
			this->lblDetailsMake->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->lblDetailsMake->Location = System::Drawing::Point(223, 50);
			this->lblDetailsMake->Name = L"lblDetailsMake";
			this->lblDetailsMake->Size = System::Drawing::Size(0, 25);
			this->lblDetailsMake->TabIndex = 75;
			// 
			// lblDetailsChassis
			// 
			this->lblDetailsChassis->AutoSize = true;
			this->lblDetailsChassis->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->lblDetailsChassis->Location = System::Drawing::Point(223, 0);
			this->lblDetailsChassis->Name = L"lblDetailsChassis";
			this->lblDetailsChassis->Size = System::Drawing::Size(0, 25);
			this->lblDetailsChassis->TabIndex = 73;
			// 
			// lblDetailsChassis2
			// 
			this->lblDetailsChassis2->AutoSize = true;
			this->lblDetailsChassis2->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDetailsChassis2->Location = System::Drawing::Point(3, 0);
			this->lblDetailsChassis2->Name = L"lblDetailsChassis2";
			this->lblDetailsChassis2->Size = System::Drawing::Size(169, 24);
			this->lblDetailsChassis2->TabIndex = 70;
			this->lblDetailsChassis2->Text = L"Chassis Number:";
			// 
			// lblDetailsEngine2
			// 
			this->lblDetailsEngine2->AutoSize = true;
			this->lblDetailsEngine2->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDetailsEngine2->Location = System::Drawing::Point(3, 25);
			this->lblDetailsEngine2->Name = L"lblDetailsEngine2";
			this->lblDetailsEngine2->Size = System::Drawing::Size(157, 24);
			this->lblDetailsEngine2->TabIndex = 71;
			this->lblDetailsEngine2->Text = L"Engine Number:";
			// 
			// lblDetailsOwner2
			// 
			this->lblDetailsOwner2->AutoSize = true;
			this->lblDetailsOwner2->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDetailsOwner2->Location = System::Drawing::Point(3, 0);
			this->lblDetailsOwner2->Name = L"lblDetailsOwner2";
			this->lblDetailsOwner2->Size = System::Drawing::Size(137, 24);
			this->lblDetailsOwner2->TabIndex = 70;
			this->lblDetailsOwner2->Text = L"Owner Name:";
			// 
			// tblDetailsRegistration
			// 
			this->tblDetailsRegistration->ColumnCount = 2;
			this->tblDetailsRegistration->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				223)));
			this->tblDetailsRegistration->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				202)));
			this->tblDetailsRegistration->Controls->Add(this->lblDetailsRegistration, 1, 0);
			this->tblDetailsRegistration->Controls->Add(this->lblDetailsRegistration2, 0, 0);
			this->tblDetailsRegistration->Location = System::Drawing::Point(23, 28);
			this->tblDetailsRegistration->Name = L"tblDetailsRegistration";
			this->tblDetailsRegistration->RowCount = 1;
			this->tblDetailsRegistration->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tblDetailsRegistration->Size = System::Drawing::Size(425, 34);
			this->tblDetailsRegistration->TabIndex = 83;
			// 
			// lblDetailsRegistration
			// 
			this->lblDetailsRegistration->AutoSize = true;
			this->lblDetailsRegistration->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->lblDetailsRegistration->Location = System::Drawing::Point(226, 0);
			this->lblDetailsRegistration->Name = L"lblDetailsRegistration";
			this->lblDetailsRegistration->Size = System::Drawing::Size(0, 25);
			this->lblDetailsRegistration->TabIndex = 73;
			// 
			// lblDetailsRegistration2
			// 
			this->lblDetailsRegistration2->AutoSize = true;
			this->lblDetailsRegistration2->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDetailsRegistration2->Location = System::Drawing::Point(3, 0);
			this->lblDetailsRegistration2->Name = L"lblDetailsRegistration2";
			this->lblDetailsRegistration2->Size = System::Drawing::Size(206, 24);
			this->lblDetailsRegistration2->TabIndex = 70;
			this->lblDetailsRegistration2->Text = L"Registration Number:";
			// 
			// lblOwnerDetails
			// 
			this->lblOwnerDetails->AutoSize = true;
			this->lblOwnerDetails->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 20.25F, System::Drawing::FontStyle::Bold));
			this->lblOwnerDetails->Location = System::Drawing::Point(134, 68);
			this->lblOwnerDetails->Name = L"lblOwnerDetails";
			this->lblOwnerDetails->Size = System::Drawing::Size(160, 31);
			this->lblOwnerDetails->TabIndex = 79;
			this->lblOwnerDetails->Text = L"Owner Details";
			// 
			// lblDetailsEngine
			// 
			this->lblDetailsEngine->AutoSize = true;
			this->lblDetailsEngine->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->lblDetailsEngine->Location = System::Drawing::Point(223, 25);
			this->lblDetailsEngine->Name = L"lblDetailsEngine";
			this->lblDetailsEngine->Size = System::Drawing::Size(0, 25);
			this->lblDetailsEngine->TabIndex = 74;
			// 
			// lblDetailsMake2
			// 
			this->lblDetailsMake2->AutoSize = true;
			this->lblDetailsMake2->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDetailsMake2->Location = System::Drawing::Point(3, 50);
			this->lblDetailsMake2->Name = L"lblDetailsMake2";
			this->lblDetailsMake2->Size = System::Drawing::Size(127, 24);
			this->lblDetailsMake2->TabIndex = 72;
			this->lblDetailsMake2->Text = L"Make Name:";
			// 
			// lblVehicleDetails
			// 
			this->lblVehicleDetails->AutoSize = true;
			this->lblVehicleDetails->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 20.25F, System::Drawing::FontStyle::Bold));
			this->lblVehicleDetails->Location = System::Drawing::Point(142, 311);
			this->lblVehicleDetails->Name = L"lblVehicleDetails";
			this->lblVehicleDetails->Size = System::Drawing::Size(168, 31);
			this->lblVehicleDetails->TabIndex = 81;
			this->lblVehicleDetails->Text = L"Vehicle Details";
			// 
			// tblDetailsOwner
			// 
			this->tblDetailsOwner->ColumnCount = 2;
			this->tblDetailsOwner->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				222)));
			this->tblDetailsOwner->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				203)));
			this->tblDetailsOwner->Controls->Add(this->lblDetailsFather, 1, 1);
			this->tblDetailsOwner->Controls->Add(this->lblDetailsOwner, 1, 0);
			this->tblDetailsOwner->Controls->Add(this->lblDetailsOwner2, 0, 0);
			this->tblDetailsOwner->Controls->Add(this->lblDetailsCity2, 0, 2);
			this->tblDetailsOwner->Controls->Add(this->lblDetailsCity, 1, 2);
			this->tblDetailsOwner->Controls->Add(this->lblDetailsFather2, 0, 1);
			this->tblDetailsOwner->Location = System::Drawing::Point(23, 99);
			this->tblDetailsOwner->Name = L"tblDetailsOwner";
			this->tblDetailsOwner->RowCount = 3;
			this->tblDetailsOwner->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tblDetailsOwner->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tblDetailsOwner->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tblDetailsOwner->Size = System::Drawing::Size(425, 84);
			this->tblDetailsOwner->TabIndex = 80;
			// 
			// lblDetailsFather
			// 
			this->lblDetailsFather->AutoSize = true;
			this->lblDetailsFather->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->lblDetailsFather->Location = System::Drawing::Point(225, 25);
			this->lblDetailsFather->Name = L"lblDetailsFather";
			this->lblDetailsFather->Size = System::Drawing::Size(0, 25);
			this->lblDetailsFather->TabIndex = 74;
			// 
			// lblDetailsVehiclePrice2
			// 
			this->lblDetailsVehiclePrice2->AutoSize = true;
			this->lblDetailsVehiclePrice2->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDetailsVehiclePrice2->Location = System::Drawing::Point(3, 125);
			this->lblDetailsVehiclePrice2->Name = L"lblDetailsVehiclePrice2";
			this->lblDetailsVehiclePrice2->Size = System::Drawing::Size(138, 24);
			this->lblDetailsVehiclePrice2->TabIndex = 77;
			this->lblDetailsVehiclePrice2->Text = L"Vehicle Price:";
			// 
			// lblDetailsColor2
			// 
			this->lblDetailsColor2->AutoSize = true;
			this->lblDetailsColor2->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDetailsColor2->Location = System::Drawing::Point(3, 150);
			this->lblDetailsColor2->Name = L"lblDetailsColor2";
			this->lblDetailsColor2->Size = System::Drawing::Size(66, 24);
			this->lblDetailsColor2->TabIndex = 79;
			this->lblDetailsColor2->Text = L"Color:";
			// 
			// tblDetailsVehicle
			// 
			this->tblDetailsVehicle->ColumnCount = 2;
			this->tblDetailsVehicle->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				220)));
			this->tblDetailsVehicle->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				205)));
			this->tblDetailsVehicle->Controls->Add(this->lblDetailsBody, 1, 7);
			this->tblDetailsVehicle->Controls->Add(this->lblDetailsModel, 1, 4);
			this->tblDetailsVehicle->Controls->Add(this->lblDetailsRegistrationDate, 1, 3);
			this->tblDetailsVehicle->Controls->Add(this->lblDetailsBody2, 0, 7);
			this->tblDetailsVehicle->Controls->Add(this->lblDetailsColor, 1, 6);
			this->tblDetailsVehicle->Controls->Add(this->lblDetailsVehiclePrice, 1, 5);
			this->tblDetailsVehicle->Controls->Add(this->lblDetailsRegistrationDate2, 0, 3);
			this->tblDetailsVehicle->Controls->Add(this->lblDetailsModel2, 0, 4);
			this->tblDetailsVehicle->Controls->Add(this->lblDetailsMake, 1, 2);
			this->tblDetailsVehicle->Controls->Add(this->lblDetailsEngine, 1, 1);
			this->tblDetailsVehicle->Controls->Add(this->lblDetailsChassis, 1, 0);
			this->tblDetailsVehicle->Controls->Add(this->lblDetailsChassis2, 0, 0);
			this->tblDetailsVehicle->Controls->Add(this->lblDetailsEngine2, 0, 1);
			this->tblDetailsVehicle->Controls->Add(this->lblDetailsMake2, 0, 2);
			this->tblDetailsVehicle->Controls->Add(this->lblDetailsVehiclePrice2, 0, 5);
			this->tblDetailsVehicle->Controls->Add(this->lblDetailsColor2, 0, 6);
			this->tblDetailsVehicle->Location = System::Drawing::Point(23, 346);
			this->tblDetailsVehicle->Name = L"tblDetailsVehicle";
			this->tblDetailsVehicle->RowCount = 8;
			this->tblDetailsVehicle->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tblDetailsVehicle->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tblDetailsVehicle->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tblDetailsVehicle->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tblDetailsVehicle->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tblDetailsVehicle->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tblDetailsVehicle->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tblDetailsVehicle->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tblDetailsVehicle->Size = System::Drawing::Size(425, 210);
			this->tblDetailsVehicle->TabIndex = 82;
			// 
			// lblDetailsBody
			// 
			this->lblDetailsBody->AutoSize = true;
			this->lblDetailsBody->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->lblDetailsBody->Location = System::Drawing::Point(223, 175);
			this->lblDetailsBody->Name = L"lblDetailsBody";
			this->lblDetailsBody->Size = System::Drawing::Size(0, 25);
			this->lblDetailsBody->TabIndex = 84;
			// 
			// lblDetailsBody2
			// 
			this->lblDetailsBody2->AutoSize = true;
			this->lblDetailsBody2->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDetailsBody2->Location = System::Drawing::Point(3, 175);
			this->lblDetailsBody2->Name = L"lblDetailsBody2";
			this->lblDetailsBody2->Size = System::Drawing::Size(139, 24);
			this->lblDetailsBody2->TabIndex = 83;
			this->lblDetailsBody2->Text = L"Type of Body:";
			// 
			// btnDetailsBack
			// 
			this->btnDetailsBack->Location = System::Drawing::Point(77, 567);
			this->btnDetailsBack->Name = L"btnDetailsBack";
			this->btnDetailsBack->Size = System::Drawing::Size(75, 23);
			this->btnDetailsBack->TabIndex = 2;
			this->btnDetailsBack->Text = L"Back";
			this->btnDetailsBack->UseVisualStyleBackColor = true;
			this->btnDetailsBack->Click += gcnew System::EventHandler(this, &frmVehicleDetailsTransferred::btnDetailsBack_Click);
			// 
			// btnDetailsMainMenu
			// 
			this->btnDetailsMainMenu->Location = System::Drawing::Point(301, 567);
			this->btnDetailsMainMenu->Name = L"btnDetailsMainMenu";
			this->btnDetailsMainMenu->Size = System::Drawing::Size(75, 23);
			this->btnDetailsMainMenu->TabIndex = 1;
			this->btnDetailsMainMenu->Text = L"Main Menu";
			this->btnDetailsMainMenu->UseVisualStyleBackColor = true;
			this->btnDetailsMainMenu->Click += gcnew System::EventHandler(this, &frmVehicleDetailsTransferred::btnDetailsMainMenu_Click);
			// 
			// lblFOwnerDetails
			// 
			this->lblFOwnerDetails->AutoSize = true;
			this->lblFOwnerDetails->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 20.25F, System::Drawing::FontStyle::Bold));
			this->lblFOwnerDetails->Location = System::Drawing::Point(116, 188);
			this->lblFOwnerDetails->Name = L"lblFOwnerDetails";
			this->lblFOwnerDetails->Size = System::Drawing::Size(244, 31);
			this->lblFOwnerDetails->TabIndex = 84;
			this->lblFOwnerDetails->Text = L"Former Owner Details";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				214)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				211)));
			this->tableLayoutPanel1->Controls->Add(this->lblDetailsFFather, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->lblDetailsFOwner, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->lblDetailsFOwner2, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->lblDetailsFCity2, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->lblDetailsFCity, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->lblDetailsFFather2, 0, 1);
			this->tableLayoutPanel1->Location = System::Drawing::Point(31, 219);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 3;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->Size = System::Drawing::Size(425, 84);
			this->tableLayoutPanel1->TabIndex = 85;
			// 
			// lblDetailsFFather
			// 
			this->lblDetailsFFather->AutoSize = true;
			this->lblDetailsFFather->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->lblDetailsFFather->Location = System::Drawing::Point(217, 25);
			this->lblDetailsFFather->Name = L"lblDetailsFFather";
			this->lblDetailsFFather->Size = System::Drawing::Size(0, 25);
			this->lblDetailsFFather->TabIndex = 74;
			// 
			// lblDetailsFOwner
			// 
			this->lblDetailsFOwner->AutoSize = true;
			this->lblDetailsFOwner->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->lblDetailsFOwner->Location = System::Drawing::Point(217, 0);
			this->lblDetailsFOwner->Name = L"lblDetailsFOwner";
			this->lblDetailsFOwner->Size = System::Drawing::Size(0, 25);
			this->lblDetailsFOwner->TabIndex = 73;
			// 
			// lblDetailsFOwner2
			// 
			this->lblDetailsFOwner2->AutoSize = true;
			this->lblDetailsFOwner2->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDetailsFOwner2->Location = System::Drawing::Point(3, 0);
			this->lblDetailsFOwner2->Name = L"lblDetailsFOwner2";
			this->lblDetailsFOwner2->Size = System::Drawing::Size(137, 24);
			this->lblDetailsFOwner2->TabIndex = 70;
			this->lblDetailsFOwner2->Text = L"Owner Name:";
			// 
			// lblDetailsFCity2
			// 
			this->lblDetailsFCity2->AutoSize = true;
			this->lblDetailsFCity2->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDetailsFCity2->Location = System::Drawing::Point(3, 50);
			this->lblDetailsFCity2->Name = L"lblDetailsFCity2";
			this->lblDetailsFCity2->Size = System::Drawing::Size(120, 24);
			this->lblDetailsFCity2->TabIndex = 72;
			this->lblDetailsFCity2->Text = L"Owner City:";
			// 
			// lblDetailsFCity
			// 
			this->lblDetailsFCity->AutoSize = true;
			this->lblDetailsFCity->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->lblDetailsFCity->Location = System::Drawing::Point(217, 50);
			this->lblDetailsFCity->Name = L"lblDetailsFCity";
			this->lblDetailsFCity->Size = System::Drawing::Size(0, 25);
			this->lblDetailsFCity->TabIndex = 75;
			// 
			// lblDetailsFFather2
			// 
			this->lblDetailsFFather2->AutoSize = true;
			this->lblDetailsFFather2->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDetailsFFather2->Location = System::Drawing::Point(3, 25);
			this->lblDetailsFFather2->Name = L"lblDetailsFFather2";
			this->lblDetailsFFather2->Size = System::Drawing::Size(137, 24);
			this->lblDetailsFFather2->TabIndex = 71;
			this->lblDetailsFFather2->Text = L"Father Name:";
			// 
			// frmVehicleDetailsTransferred
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->ClientSize = System::Drawing::Size(470, 606);
			this->Controls->Add(this->lblFOwnerDetails);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->tblDetailsRegistration);
			this->Controls->Add(this->lblOwnerDetails);
			this->Controls->Add(this->lblVehicleDetails);
			this->Controls->Add(this->tblDetailsOwner);
			this->Controls->Add(this->tblDetailsVehicle);
			this->Controls->Add(this->btnDetailsBack);
			this->Controls->Add(this->btnDetailsMainMenu);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"frmVehicleDetailsTransferred";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Vehicle Details";
			this->Load += gcnew System::EventHandler(this, &frmVehicleDetailsTransferred::frmVehicleDetailsTransferred_Load);
			this->tblDetailsRegistration->ResumeLayout(false);
			this->tblDetailsRegistration->PerformLayout();
			this->tblDetailsOwner->ResumeLayout(false);
			this->tblDetailsOwner->PerformLayout();
			this->tblDetailsVehicle->ResumeLayout(false);
			this->tblDetailsVehicle->PerformLayout();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void frmVehicleDetailsTransferred_Load(System::Object^ sender, System::EventArgs^ e) {

		lblDetailsRegistration->Text = GlobalClass::RegistrationNumber[Index];

		lblDetailsOwner->Text = GlobalClass::UserName[Index];
		lblDetailsFather->Text = GlobalClass::UserFather[Index];
		lblDetailsCity->Text = GlobalClass::UserCity[Index];
		
		lblDetailsChassis->Text = GlobalClass::VehicleChasis[Index];
		lblDetailsEngine->Text = GlobalClass::VehicleEngine[Index];
		lblDetailsMake->Text = GlobalClass::VehicleMake[Index];
		lblDetailsRegistrationDate->Text = GlobalClass::RegistrationDate[Index] + " " + GlobalClass::RegistrationTime[Index];
		lblDetailsModel->Text = GlobalClass::VehicleModel[Index];
		lblDetailsVehiclePrice->Text = GlobalClass::VehiclePrice[Index];
		lblDetailsColor->Text = GlobalClass::VehicleColor[Index];
		lblDetailsBody->Text = GlobalClass::VehicleBody[Index];

		lblDetailsFOwner->Text = GlobalClass::TUserName[Index];
		lblDetailsFFather->Text = GlobalClass::TUserFather[Index];
		lblDetailsFCity->Text = GlobalClass::TUserCity[Index];

	}
private: System::Void btnDetailsMainMenu_Click(System::Object^ sender, System::EventArgs^ e) {

	GlobalClass::MainForm->Show();
	this->Hide();

}
private: System::Void btnDetailsBack_Click(System::Object^ sender, System::EventArgs^ e) {

	GlobalClass::SearchForm->Show();
	this->Hide();

}
};
}
