#pragma once
#include "GlobalClass.h"
#include "frmVehicleDetails.h"
#include "frmVehicleDetailsTransferred.h"

namespace VehicleRegistrationSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace Globals;

	/// <summary>
	/// Summary for frmSearch
	/// </summary>
	public ref class frmSearch : public System::Windows::Forms::Form
	{
	public:

		frmSearch(void)
		{
			GlobalClass::SearchForm = this;

			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	private: System::Windows::Forms::Label^ lblRegistrationNumberFormat2;
	private: System::Windows::Forms::Label^ lblRegistrationNumberFormat;
	private: System::Windows::Forms::Button^ btnMain;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmSearch()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnSearch;
	private: System::Windows::Forms::Label^ lblDealerHeading;
	private: System::Windows::Forms::TextBox^ txtSearchRegistrationNumber;
	private: System::Windows::Forms::Label^ lblSearchRegistrationNumber;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmSearch::typeid));
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->lblDealerHeading = (gcnew System::Windows::Forms::Label());
			this->txtSearchRegistrationNumber = (gcnew System::Windows::Forms::TextBox());
			this->lblSearchRegistrationNumber = (gcnew System::Windows::Forms::Label());
			this->btnMain = (gcnew System::Windows::Forms::Button());
			this->lblRegistrationNumberFormat2 = (gcnew System::Windows::Forms::Label());
			this->lblRegistrationNumberFormat = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnSearch
			// 
			this->btnSearch->Location = System::Drawing::Point(205, 172);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(173, 23);
			this->btnSearch->TabIndex = 2;
			this->btnSearch->Text = L"Search Registration Number";
			this->btnSearch->UseVisualStyleBackColor = true;
			this->btnSearch->Click += gcnew System::EventHandler(this, &frmSearch::btnSearch_Click);
			// 
			// lblDealerHeading
			// 
			this->lblDealerHeading->AutoSize = true;
			this->lblDealerHeading->Font = (gcnew System::Drawing::Font(L"Cooper Black", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDealerHeading->Location = System::Drawing::Point(9, 9);
			this->lblDealerHeading->Name = L"lblDealerHeading";
			this->lblDealerHeading->Size = System::Drawing::Size(338, 36);
			this->lblDealerHeading->TabIndex = 0;
			this->lblDealerHeading->Text = L"Search Registration";
			// 
			// txtSearchRegistrationNumber
			// 
			this->txtSearchRegistrationNumber->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->txtSearchRegistrationNumber->Location = System::Drawing::Point(212, 122);
			this->txtSearchRegistrationNumber->Name = L"txtSearchRegistrationNumber";
			this->txtSearchRegistrationNumber->Size = System::Drawing::Size(166, 20);
			this->txtSearchRegistrationNumber->TabIndex = 1;
			// 
			// lblSearchRegistrationNumber
			// 
			this->lblSearchRegistrationNumber->AutoSize = true;
			this->lblSearchRegistrationNumber->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblSearchRegistrationNumber->Location = System::Drawing::Point(12, 119);
			this->lblSearchRegistrationNumber->Name = L"lblSearchRegistrationNumber";
			this->lblSearchRegistrationNumber->Size = System::Drawing::Size(187, 25);
			this->lblSearchRegistrationNumber->TabIndex = 58;
			this->lblSearchRegistrationNumber->Text = L"Registration Number";
			// 
			// btnMain
			// 
			this->btnMain->Location = System::Drawing::Point(65, 172);
			this->btnMain->Name = L"btnMain";
			this->btnMain->Size = System::Drawing::Size(75, 23);
			this->btnMain->TabIndex = 3;
			this->btnMain->Text = L"Main Menu";
			this->btnMain->UseVisualStyleBackColor = true;
			this->btnMain->Click += gcnew System::EventHandler(this, &frmSearch::btnMain_Click);
			// 
			// lblRegistrationNumberFormat2
			// 
			this->lblRegistrationNumberFormat2->AutoSize = true;
			this->lblRegistrationNumberFormat2->Location = System::Drawing::Point(15, 56);
			this->lblRegistrationNumberFormat2->Name = L"lblRegistrationNumberFormat2";
			this->lblRegistrationNumberFormat2->Size = System::Drawing::Size(219, 13);
			this->lblRegistrationNumberFormat2->TabIndex = 67;
			this->lblRegistrationNumberFormat2->Text = L"Your registration number should look like this:";
			// 
			// lblRegistrationNumberFormat
			// 
			this->lblRegistrationNumberFormat->AutoSize = true;
			this->lblRegistrationNumberFormat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblRegistrationNumberFormat->Location = System::Drawing::Point(139, 81);
			this->lblRegistrationNumberFormat->Name = L"lblRegistrationNumberFormat";
			this->lblRegistrationNumberFormat->Size = System::Drawing::Size(120, 24);
			this->lblRegistrationNumberFormat->TabIndex = 68;
			this->lblRegistrationNumberFormat->Text = L"ABC-00-0000";
			// 
			// frmSearch
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->ClientSize = System::Drawing::Size(404, 225);
			this->Controls->Add(this->lblRegistrationNumberFormat);
			this->Controls->Add(this->lblRegistrationNumberFormat2);
			this->Controls->Add(this->btnMain);
			this->Controls->Add(this->btnSearch);
			this->Controls->Add(this->lblDealerHeading);
			this->Controls->Add(this->txtSearchRegistrationNumber);
			this->Controls->Add(this->lblSearchRegistrationNumber);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"frmSearch";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Search Registration";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e){
		bool IsFound = 0;
		for (int i = 0; i < 100; i++){
			if (txtSearchRegistrationNumber->Text == GlobalClass::RegistrationNumber[i]){
				IsFound = 1;
				if (String::IsNullOrEmpty(GlobalClass::TUserCNIC[i])){
					(gcnew frmVehicleDetails(i))->Show();
					this->Hide();
				}
				else {
					(gcnew frmVehicleDetailsTransferred(i))->Show();
					this->Hide();
				}

			}
		}

		if ((IsFound == 0))	{
			MessageBox::Show("Vehicle not found", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

private: System::Void btnMain_Click(System::Object^ sender, System::EventArgs^ e) {

	GlobalClass::MainForm->Show();
	this->Hide();
}
};
}
