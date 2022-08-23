#pragma once
namespace Globals
{
	using namespace System;
	using namespace System::Windows::Forms;
	public ref class GlobalClass
	{
	public:
		// Declaring Forms
		static Form^ MainForm;
		static Form^ NewDealerForm;
		static Form^ NewUserForm;
		static Form^ NewVehicleForm;
		static Form^ RegistrationNumberForm;
		static Form^ SearchForm;
		static Form^ TransferOwnershipForm;
		static Form^ VehicleDetailsForm;
		static Form^ VehicleDetailsTransferredForm;

		// User's Info
		static array< String^ >^ UserName = gcnew array< String^ >(100);
		static array< String^ >^ UserCNIC = gcnew array< String^ >(100);
		static array< String^ >^ UserFather = gcnew array< String^ >(100);
		static array< String^ >^ UserMobile = gcnew array< String^ >(100);
		static array< String^ >^ UserTelephone = gcnew array< String^ >(100);
		static array< String^ >^ UserTAddress = gcnew array< String^ >(100);
		static array< String^ >^ UserPAddress = gcnew array< String^ >(100);
		static array< String^ >^ UserEmail = gcnew array< String^ >(100);
		static array< String^ >^ UserNTN = gcnew array< String^ >(100);
		static array< String^ >^ UserPostal = gcnew array< String^ >(100);
		static array< String^ >^ UserCity = gcnew array< String^ >(100);
		// Vehicle's Info
		static array< String^ >^ VehicleEngine = gcnew array< String^ >(100);
		static array< String^ >^ VehicleChasis = gcnew array< String^ >(100);
		static array< String^ >^ VehicleMake = gcnew array< String^ >(100);
		static array< String^ >^ VehicleCompany = gcnew array< String^ >(100);
		static array< String^ >^ VehicleColor = gcnew array< String^ >(100);
		static array< String^ >^ VehicleHorse = gcnew array< String^ >(100);
		static array< String^ >^ VehicleSeating = gcnew array< String^ >(100);
		static array< String^ >^ VehiclePrice = gcnew array< String^ >(100);
		static array< String^ >^ VehicleModel = gcnew array< String^ >(100);
		static array< String^ >^ VehicleBody = gcnew array< String^ >(100);
		// Dealer's Info
		static array< String^ >^ DealerName = gcnew array< String^ >(100);
		static array< String^ >^ DealerCNIC = gcnew array< String^ >(100);
		static array< String^ >^ DealerPhone = gcnew array< String^ >(100);
		static array< String^ >^ DealerAddress = gcnew array< String^ >(100);
		// Registration Number
		static array< String^ >^ RegistrationNumber = gcnew array< String^ >(100);
		static array< String^ >^ RegistrationDate = gcnew array< String^ >(100);
		static array< String^ >^ RegistrationTime = gcnew array< String^ >(100);
		// Number of Registered Vehicles
		static int registeredVehicles = 1;

		// Transfered Ownership Info
		static array< String^ >^ TUserName = gcnew array< String^ >(100);
		static array< String^ >^ TUserCNIC = gcnew array< String^ >(100);
		static array< String^ >^ TUserFather = gcnew array< String^ >(100);
		static array< String^ >^ TUserMobile = gcnew array< String^ >(100);
		static array< String^ >^ TUserTelephone = gcnew array< String^ >(100);
		static array< String^ >^ TUserTAddress = gcnew array< String^ >(100);
		static array< String^ >^ TUserPAddress = gcnew array< String^ >(100);
		static array< String^ >^ TUserEmail = gcnew array< String^ >(100);
		static array< String^ >^ TUserNTN = gcnew array< String^ >(100);
		static array< String^ >^ TUserCity = gcnew array< String^ >(100);
		static array< String^ >^ TUserPostal = gcnew array< String^ >(100);

	};
}

