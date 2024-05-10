#include "MyForm.h"
#include "Windows.h"

using namespace System;
using namespace System::Windows::Forms;

int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	PSU4::MyForm form;
	Application::Run(% form);
	return 0;
}
