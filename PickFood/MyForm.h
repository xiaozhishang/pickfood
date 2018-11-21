#pragma once

namespace PickFood {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MyForm 摘要
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			istt = false;
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::PictureBox^  FoodPictureBox;







	private: System::Windows::Forms::Label^  label9;









	protected:
	private: System::Windows::Forms::Label^  label1;
	protected:
		void MyForm::ChangeLabel(void);
	public: bool istt;
			int num = 0;
	private: System::ComponentModel::IContainer^  components;
	protected:
	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要修改
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->FoodPictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FoodPictureBox))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->Font = (gcnew System::Drawing::Font(L"等线 Light", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->label1->Location = System::Drawing::Point(222, 163);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(101, 108);
			this->label1->TabIndex = 0;
			this->label1->Text = L"火锅";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 10;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// FoodPictureBox
			// 
			this->FoodPictureBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->FoodPictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"FoodPictureBox.Image")));
			this->FoodPictureBox->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"FoodPictureBox.InitialImage")));
			this->FoodPictureBox->Location = System::Drawing::Point(222, 163);
			this->FoodPictureBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->FoodPictureBox->Name = L"FoodPictureBox";
			this->FoodPictureBox->Size = System::Drawing::Size(101, 108);
			this->FoodPictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->FoodPictureBox->TabIndex = 1;
			this->FoodPictureBox->TabStop = false;
			this->FoodPictureBox->Click += gcnew System::EventHandler(this, &MyForm::FoodPictureBox_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"等线", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label9->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->label9->Location = System::Drawing::Point(117, 430);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(321, 36);
			this->label9->TabIndex = 9;
			this->label9->Text = L"带最爱的敏哥哥去吃";
			this->label9->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(557, 512);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->FoodPictureBox);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FoodPictureBox))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		//ChangeLabel();
	}
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e)
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
	private: System::Void MyForm_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e)
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
private: System::Void FoodPictureBox_Click(System::Object^  sender, System::EventArgs^  e)
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
};
}
