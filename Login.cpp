#include "Login.h"




using namespace std;
using namespace System;
using namespace System::Windows::Forms;


[STAThread]

void main()

{
	Application::EnableVisualStyles();

	Application::SetCompatibleTextRenderingDefault(false);

	GUI::Login form;
	Application::Run(% form);

	
}
