#pragma once
#include "GlobalClass.h"
#include <time.h>
#include <cstdlib>

namespace VehicleRegistrationSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Globals;

	/// <summary>
	/// Summary for frmRegistrationNumber
	/// </summary>
	public ref class frmRegistrationNumber : public System::Windows::Forms::Form
	{
	public:

		int i = GlobalClass::registeredVehicles;

		frmRegistrationNumber(void)
		{
			GlobalClass::RegistrationNumberForm = this;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmRegistrationNumber()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblRegistrationHeading;
	private: System::Windows::Forms::Label^ lblRegistrationNumber;
	private: System::Windows::Forms::Button^ btnMain;
	private: System::Windows::Forms::Label^ lblRegistrationDate;
	private: System::Windows::Forms::Label^ lblRegistrationTime;
	private: System::Windows::Forms::Label^ lblTimeHeading;
	private: System::Windows::Forms::Label^ lblDateHeading;
	private: System::Windows::Forms::Label^ label1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmRegistrationNumber::typeid));
			this->lblRegistrationHeading = (gcnew System::Windows::Forms::Label());
			this->lblRegistrationNumber = (gcnew System::Windows::Forms::Label());
			this->btnMain = (gcnew System::Windows::Forms::Button());
			this->lblRegistrationDate = (gcnew System::Windows::Forms::Label());
			this->lblRegistrationTime = (gcnew System::Windows::Forms::Label());
			this->lblTimeHeading = (gcnew System::Windows::Forms::Label());
			this->lblDateHeading = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lblRegistrationHeading
			// 
			this->lblRegistrationHeading->AutoSize = true;
			this->lblRegistrationHeading->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblRegistrationHeading->Location = System::Drawing::Point(11, 53);
			this->lblRegistrationHeading->Name = L"lblRegistrationHeading";
			this->lblRegistrationHeading->Size = System::Drawing::Size(197, 16);
			this->lblRegistrationHeading->TabIndex = 0;
			this->lblRegistrationHeading->Text = L"Your registration number is:";
			// 
			// lblRegistrationNumber
			// 
			this->lblRegistrationNumber->AutoSize = true;
			this->lblRegistrationNumber->Location = System::Drawing::Point(230, 53);
			this->lblRegistrationNumber->Name = L"lblRegistrationNumber";
			this->lblRegistrationNumber->Size = System::Drawing::Size(80, 13);
			this->lblRegistrationNumber->TabIndex = 1;
			this->lblRegistrationNumber->Text = L"ABC-YY-NNNN";
			// 
			// btnMain
			// 
			this->btnMain->Location = System::Drawing::Point(133, 161);
			this->btnMain->Name = L"btnMain";
			this->btnMain->Size = System::Drawing::Size(75, 23);
			this->btnMain->TabIndex = 0;
			this->btnMain->Text = L"Main Menu";
			this->btnMain->UseVisualStyleBackColor = true;
			this->btnMain->Click += gcnew System::EventHandler(this, &frmRegistrationNumber::btnMain_Click);
			// 
			// lblRegistrationDate
			// 
			this->lblRegistrationDate->AutoSize = true;
			this->lblRegistrationDate->Location = System::Drawing::Point(230, 83);
			this->lblRegistrationDate->Name = L"lblRegistrationDate";
			this->lblRegistrationDate->Size = System::Drawing::Size(59, 13);
			this->lblRegistrationDate->TabIndex = 3;
			this->lblRegistrationDate->Text = L"dd-mmm-yy";
			// 
			// lblRegistrationTime
			// 
			this->lblRegistrationTime->AutoSize = true;
			this->lblRegistrationTime->Location = System::Drawing::Point(230, 113);
			this->lblRegistrationTime->Name = L"lblRegistrationTime";
			this->lblRegistrationTime->Size = System::Drawing::Size(51, 13);
			this->lblRegistrationTime->TabIndex = 4;
			this->lblRegistrationTime->Text = L"hh:mm:ss";
			// 
			// lblTimeHeading
			// 
			this->lblTimeHeading->AutoSize = true;
			this->lblTimeHeading->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTimeHeading->Location = System::Drawing::Point(11, 113);
			this->lblTimeHeading->Name = L"lblTimeHeading";
			this->lblTimeHeading->Size = System::Drawing::Size(168, 16);
			this->lblTimeHeading->TabIndex = 6;
			this->lblTimeHeading->Text = L"Time of Registration is:";
			// 
			// lblDateHeading
			// 
			this->lblDateHeading->AutoSize = true;
			this->lblDateHeading->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDateHeading->Location = System::Drawing::Point(11, 83);
			this->lblDateHeading->Name = L"lblDateHeading";
			this->lblDateHeading->Size = System::Drawing::Size(166, 16);
			this->lblDateHeading->TabIndex = 5;
			this->lblDateHeading->Text = L"Date of Registration is:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(10, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(226, 25);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Registration Details:";
			// 
			// frmRegistrationNumber
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->ClientSize = System::Drawing::Size(336, 210);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lblTimeHeading);
			this->Controls->Add(this->lblDateHeading);
			this->Controls->Add(this->lblRegistrationTime);
			this->Controls->Add(this->lblRegistrationDate);
			this->Controls->Add(this->btnMain);
			this->Controls->Add(this->lblRegistrationNumber);
			this->Controls->Add(this->lblRegistrationHeading);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"frmRegistrationNumber";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Registration Details";
			this->Load += gcnew System::EventHandler(this, &frmRegistrationNumber::frmRegistrationNumber_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void frmRegistrationNumber_Load(System::Object^ sender, System::EventArgs^ e) {

		lblRegistrationDate->Text = DateTime::Now.Date.ToString("d");
		lblRegistrationTime->Text = DateTime::Now.TimeOfDay.ToString("T")->Remove(8);

		GlobalClass::RegistrationDate[i] = lblRegistrationDate->Text;
		GlobalClass::RegistrationTime[i] = lblRegistrationTime->Text;

		Again:

		srand(time(NULL));
		String^ TempRegistrationNumber = "ABC-" + GlobalClass::RegistrationDate[i]->Remove(0, 7) + "-" + (rand() % 9000 + 1000).ToString();

		for (int j = 0; j < 100; j++) {
			if (TempRegistrationNumber == GlobalClass::RegistrationNumber[j])
				goto Again;
		}
		
		lblRegistrationNumber->Text = TempRegistrationNumber;

		GlobalClass::RegistrationNumber[i] = lblRegistrationNumber->Text;

		GlobalClass::registeredVehicles++;
		
	}
	private: System::Void btnMain_Click(System::Object^ sender, System::EventArgs^ e) {

		GlobalClass::MainForm->Show();
		this->Hide();
	}
	};
}
