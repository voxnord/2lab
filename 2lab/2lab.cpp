#include "2lab.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	u2lab::u2lab form;
	Application::Run(% form);
}

