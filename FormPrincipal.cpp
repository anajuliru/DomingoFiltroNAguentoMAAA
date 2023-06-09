#include "FormPrincipal.h"


using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	DomingoFiltroNAguentoMAAA::FormPrincipal form;

	Application::Run(% form);
}
