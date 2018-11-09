#include "MyForm.h"
using namespace PickFood;
[STAThread]
#pragma comment(linker,"/subsystem:windows /ENTRY:mainCRTStartup")
int main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm());
	//textBox5.LostFocus += new EventHandler(txt_LostFocus);
}

void MyForm::ChangeLabel()
{
	this->label1->Text = "rr";
}

