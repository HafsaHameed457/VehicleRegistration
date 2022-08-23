#include "frmMain.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	VehicleRegistrationSystem::frmMain MainForm;
	Application::Run(% MainForm);
}