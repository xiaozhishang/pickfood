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

Void  MyForm::FoodPictureBox_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (timer1->Enabled == true) {
		timer1->Stop();
		this->label9->Visible = true;
	}
	else {
		timer1->Start();
		this->label9->Visible = false;
	}
}

Void MyForm::MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
{
	if (e->KeyCode == Keys::Space)
	{
		if (timer1->Enabled == true) {
			timer1->Stop();
		}
		else {
			timer1->Start();
		}
	}
}

Void MyForm::timer1_Tick(System::Object^ sender, System::EventArgs^ e)
{
	switch (num)
	{
	case 0:
		//this->label1->Visible = true;
		/*this->label2->Visible = false;
		this->label3->Visible = false;
		this->label4->Visible = false;
		this->label5->Visible = false;
		this->label6->Visible = false;
		this->label7->Visible = false;
		this->label8->Visible = false;*/
		this->label1->Location = System::Drawing::Point(80, 31);
		this->label1->Text = L"火锅";
		this->label1->ForeColor = System::Drawing::Color::ForestGreen;
		this->FoodPictureBox->Image = Image::FromFile("火锅.jpg");
		num = 1;
		break;
	case 1:
		/*this->label1->Visible = false;
		this->label2->Visible = true;
		this->label3->Visible = false;
		this->label4->Visible = false;
		this->label5->Visible = false;
		this->label6->Visible = false;
		this->label7->Visible = false;
		this->label8->Visible = false;*/
		this->label1->Text = L"烧烤";
		this->label1->Location = System::Drawing::Point(220, 31);
		this->label1->ForeColor = System::Drawing::Color::DarkOrange;
		this->FoodPictureBox->Image = Image::FromFile("烧烤.jpg");
		num = 2;
		break;
	case 2:
		/*this->label1->Visible = false;
		this->label2->Visible = false;
		this->label3->Visible = true;
		this->label4->Visible = false;
		this->label5->Visible = false;
		this->label6->Visible = false;
		this->label7->Visible = false;
		this->label8->Visible = false;*/
		this->label1->Text = L"大盘鸡";
		this->label1->Location = System::Drawing::Point(360, 31);
		this->label1->ForeColor = System::Drawing::Color::DarkOliveGreen;
		this->FoodPictureBox->Image = Image::FromFile("大盘鸡.jpg");
		num = 3;
		break;
	case 3:
		/*this->label1->Visible = false;
		this->label2->Visible = false;
		this->label3->Visible = false;
		this->label4->Visible = true;
		this->label5->Visible = false;
		this->label6->Visible = false;
		this->label7->Visible = false;
		this->label8->Visible = false;*/
		this->label1->Text = L"串串";
		this->label1->Location = System::Drawing::Point(80, 168);
		this->label1->ForeColor = System::Drawing::Color::BlueViolet;
		this->FoodPictureBox->Image = Image::FromFile("串串.jpg");
		num = 4;
		break;
	case 4:
		/*this->label1->Visible = false;
		this->label2->Visible = false;
		this->label3->Visible = false;
		this->label4->Visible = false;
		this->label5->Visible = true;
		this->label6->Visible = false;
		this->label7->Visible = false;
		this->label8->Visible = false;*/
		this->label1->Text = L"椰子鸡";
		this->label1->Location = System::Drawing::Point(360, 168);
		this->label1->ForeColor = System::Drawing::Color::Chocolate;
		this->FoodPictureBox->Image = Image::FromFile("椰子鸡.jpg");
		num = 5;
		break;
	case 5:
		/*this->label1->Visible = false;
		this->label2->Visible = false;
		this->label3->Visible = false;
		this->label4->Visible = false;
		this->label5->Visible = false;
		this->label6->Visible = true;
		this->label7->Visible = false;
		this->label8->Visible = false;*/
		this->label1->Text = L"日料";
		this->label1->Location = System::Drawing::Point(80, 305);
		this->label1->ForeColor = System::Drawing::Color::Chartreuse;
		this->FoodPictureBox->Image = Image::FromFile("日料.jpg");
		num = 6;
		break;
	case 6:
		/*this->label1->Visible = false;
		this->label2->Visible = false;
		this->label3->Visible = false;
		this->label4->Visible = false;
		this->label5->Visible = false;
		this->label6->Visible = false;
		this->label7->Visible = true;
		this->label8->Visible = false;*/
		this->label1->Text = L"酸菜鱼";
		this->label1->Location = System::Drawing::Point(220, 305);
		this->label1->ForeColor = System::Drawing::Color::Crimson;
		this->FoodPictureBox->Image = Image::FromFile("酸菜鱼.jpg");
		num = 7;
		break;
	case 7:
		/*this->label1->Visible = false;
		this->label2->Visible = false;
		this->label3->Visible = false;
		this->label4->Visible = false;
		this->label5->Visible = false;
		this->label6->Visible = false;
		this->label7->Visible = false;
		this->label8->Visible = true;*/
		this->label1->Text = L"自助";
		this->label1->Location = System::Drawing::Point(360, 305);
		this->label1->ForeColor = System::Drawing::Color::Khaki;
		this->FoodPictureBox->Image = Image::FromFile("自助.jpg");
		num = 0;
		break;
	default:
		break;
	}
}
