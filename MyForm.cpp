#include "MyForm.h"
#include <Windows.h>
using namespace FoolGame; // Название проекта
//-----------------------------------------------------------------------------------------
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0;
}
//-----------------------------------------------------------------------------------------
void FoolGame::MyForm::InitializeComponent(void)
{
	this->play_button = (gcnew System::Windows::Forms::Button());
	this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
	this->SuspendLayout();
	// 
	// play_button
	// 
	this->play_button->Location = System::Drawing::Point(22, 21);
	this->play_button->Name = L"play_button";
	this->play_button->Size = System::Drawing::Size(95, 30);
	this->play_button->TabIndex = 0;
	this->play_button->Text = L"PlayGame";
	this->play_button->UseVisualStyleBackColor = true;
	this->play_button->Click += gcnew System::EventHandler(this, &MyForm::Play_Click);
	// 
	// pictureBox1
	// 
	this->pictureBox1->Location = System::Drawing::Point(410, 21);
	this->pictureBox1->Name = L"pictureBox1";
	this->pictureBox1->Size = System::Drawing::Size(100, 130);
	this->pictureBox1->TabIndex = 1;
	this->pictureBox1->TabStop = false;
	this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
	// 
	// MyForm
	// 
	this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
	this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
	this->BackColor = System::Drawing::SystemColors::ScrollBar;
	this->ClientSize = System::Drawing::Size(1298, 690);
	this->Controls->Add(this->pictureBox1);
	this->Controls->Add(this->play_button);
	this->Name = L"Fool_game";
	this->Text = L"Fool_game";
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
	this->ResumeLayout(false);

}
//-----------------------------------------------------------------------------------------
System::Void FoolGame::MyForm::Play_Click(System::Object^ sender, System::EventArgs^ e)
{
	pictureBox1->Image = Image::FromFile("A_pik.PNG");
}
//-----------------------------------------------------------------------------------------
System::Void FoolGame::MyForm::pictureBox1_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->pictureBox1->Image = nullptr;
	/*Graphics^ g = Graphics::FromImage(pictureBox1->Image);
	g->Clear(SystemColors::ScrollBar);
	delete g;
	pictureBox1->Refresh();*/
}
//-----------------------------------------------------------------------------------------
