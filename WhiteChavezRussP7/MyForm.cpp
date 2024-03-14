#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;

void Main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	WhiteChavezRussP7::MyForm form;
	Application::Run(% form);
}
