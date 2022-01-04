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
	this->battleground_1 = (gcnew System::Windows::Forms::PictureBox());
	this->battleground_2 = (gcnew System::Windows::Forms::PictureBox());
	this->battleground_3 = (gcnew System::Windows::Forms::PictureBox());
	this->battleground_4 = (gcnew System::Windows::Forms::PictureBox());
	this->battleground_5 = (gcnew System::Windows::Forms::PictureBox());
	this->battleground_6 = (gcnew System::Windows::Forms::PictureBox());
	this->battleground_7 = (gcnew System::Windows::Forms::PictureBox());
	this->battleground_8 = (gcnew System::Windows::Forms::PictureBox());
	this->battleground_9 = (gcnew System::Windows::Forms::PictureBox());
	this->battleground_10 = (gcnew System::Windows::Forms::PictureBox());
	this->battleground_11 = (gcnew System::Windows::Forms::PictureBox());
	this->battleground_12 = (gcnew System::Windows::Forms::PictureBox());
	this->Computer_player_cards = (gcnew System::Windows::Forms::PictureBox());
	this->Trupm_card = (gcnew System::Windows::Forms::PictureBox());
	this->Cards_in_the_desk = (gcnew System::Windows::Forms::PictureBox());
	this->Player_card_1 = (gcnew System::Windows::Forms::PictureBox());
	this->Player_card_2 = (gcnew System::Windows::Forms::PictureBox());
	this->Player_card_3 = (gcnew System::Windows::Forms::PictureBox());
	this->Player_card_4 = (gcnew System::Windows::Forms::PictureBox());
	this->Player_card_5 = (gcnew System::Windows::Forms::PictureBox());
	this->Player_card_6 = (gcnew System::Windows::Forms::PictureBox());
	this->Player_card_7 = (gcnew System::Windows::Forms::PictureBox());
	this->Player_card_8 = (gcnew System::Windows::Forms::PictureBox());
	this->Player_card_9 = (gcnew System::Windows::Forms::PictureBox());
	this->Player_card_10 = (gcnew System::Windows::Forms::PictureBox());
	this->Player_card_11 = (gcnew System::Windows::Forms::PictureBox());
	this->Player_card_12 = (gcnew System::Windows::Forms::PictureBox());
	this->Player_card_13 = (gcnew System::Windows::Forms::PictureBox());
	this->Player_card_14 = (gcnew System::Windows::Forms::PictureBox());
	this->Player_card_15 = (gcnew System::Windows::Forms::PictureBox());
	this->Player_card_16 = (gcnew System::Windows::Forms::PictureBox());
	this->Player_card_17 = (gcnew System::Windows::Forms::PictureBox());
	this->Player_card_18 = (gcnew System::Windows::Forms::PictureBox());
	this->Player_card_19 = (gcnew System::Windows::Forms::PictureBox());
	this->Player_card_20 = (gcnew System::Windows::Forms::PictureBox());
	this->button1 = (gcnew System::Windows::Forms::Button());
	this->button2 = (gcnew System::Windows::Forms::Button());
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->battleground_1))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->battleground_2))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->battleground_3))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->battleground_4))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->battleground_5))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->battleground_6))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->battleground_7))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->battleground_8))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->battleground_9))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->battleground_10))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->battleground_11))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->battleground_12))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Computer_player_cards))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Trupm_card))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Cards_in_the_desk))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Player_card_1))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Player_card_2))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Player_card_3))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Player_card_4))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Player_card_5))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Player_card_6))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Player_card_7))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Player_card_8))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Player_card_9))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Player_card_10))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Player_card_11))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Player_card_12))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Player_card_13))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Player_card_14))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Player_card_15))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Player_card_16))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Player_card_17))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Player_card_18))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Player_card_19))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Player_card_20))->BeginInit();
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
	// battleground_1
	// 
	this->battleground_1->Location = System::Drawing::Point(407, 193);
	this->battleground_1->Name = L"battleground_1";
	this->battleground_1->Size = System::Drawing::Size(100, 143);
	this->battleground_1->TabIndex = 2;
	this->battleground_1->TabStop = false;
	// 
	// battleground_2
	// 
	this->battleground_2->Location = System::Drawing::Point(407, 274);
	this->battleground_2->Name = L"battleground_2";
	this->battleground_2->Size = System::Drawing::Size(100, 143);
	this->battleground_2->TabIndex = 3;
	this->battleground_2->TabStop = false;
	// 
	// battleground_3
	// 
	this->battleground_3->Location = System::Drawing::Point(536, 193);
	this->battleground_3->Name = L"battleground_3";
	this->battleground_3->Size = System::Drawing::Size(100, 143);
	this->battleground_3->TabIndex = 4;
	this->battleground_3->TabStop = false;
	// 
	// battleground_4
	// 
	this->battleground_4->Location = System::Drawing::Point(536, 274);
	this->battleground_4->Name = L"battleground_4";
	this->battleground_4->Size = System::Drawing::Size(100, 143);
	this->battleground_4->TabIndex = 5;
	this->battleground_4->TabStop = false;
	// 
	// battleground_5
	// 
	this->battleground_5->Location = System::Drawing::Point(664, 193);
	this->battleground_5->Name = L"battleground_5";
	this->battleground_5->Size = System::Drawing::Size(100, 143);
	this->battleground_5->TabIndex = 6;
	this->battleground_5->TabStop = false;
	// 
	// battleground_6
	// 
	this->battleground_6->Location = System::Drawing::Point(664, 274);
	this->battleground_6->Name = L"battleground_6";
	this->battleground_6->Size = System::Drawing::Size(100, 143);
	this->battleground_6->TabIndex = 7;
	this->battleground_6->TabStop = false;
	// 
	// battleground_7
	// 
	this->battleground_7->Location = System::Drawing::Point(791, 193);
	this->battleground_7->Name = L"battleground_7";
	this->battleground_7->Size = System::Drawing::Size(100, 143);
	this->battleground_7->TabIndex = 8;
	this->battleground_7->TabStop = false;
	// 
	// battleground_8
	// 
	this->battleground_8->Location = System::Drawing::Point(791, 274);
	this->battleground_8->Name = L"battleground_8";
	this->battleground_8->Size = System::Drawing::Size(100, 143);
	this->battleground_8->TabIndex = 9;
	this->battleground_8->TabStop = false;
	// 
	// battleground_9
	// 
	this->battleground_9->Location = System::Drawing::Point(917, 193);
	this->battleground_9->Name = L"battleground_9";
	this->battleground_9->Size = System::Drawing::Size(100, 143);
	this->battleground_9->TabIndex = 10;
	this->battleground_9->TabStop = false;
	// 
	// battleground_10
	// 
	this->battleground_10->Location = System::Drawing::Point(917, 274);
	this->battleground_10->Name = L"battleground_10";
	this->battleground_10->Size = System::Drawing::Size(100, 143);
	this->battleground_10->TabIndex = 11;
	this->battleground_10->TabStop = false;
	// 
	// battleground_11
	// 
	this->battleground_11->Location = System::Drawing::Point(1045, 193);
	this->battleground_11->Name = L"battleground_11";
	this->battleground_11->Size = System::Drawing::Size(100, 143);
	this->battleground_11->TabIndex = 12;
	this->battleground_11->TabStop = false;
	// 
	// battleground_12
	// 
	this->battleground_12->Location = System::Drawing::Point(1045, 274);
	this->battleground_12->Name = L"battleground_12";
	this->battleground_12->Size = System::Drawing::Size(100, 143);
	this->battleground_12->TabIndex = 13;
	this->battleground_12->TabStop = false;
	// 
	// Computer_player_cards
	// 
	this->Computer_player_cards->Location = System::Drawing::Point(716, 12);
	this->Computer_player_cards->Name = L"Computer_player_cards";
	this->Computer_player_cards->Size = System::Drawing::Size(100, 143);
	this->Computer_player_cards->TabIndex = 14;
	this->Computer_player_cards->TabStop = false;
	// 
	// Trupm_card
	// 
	this->Trupm_card->Location = System::Drawing::Point(101, 193);
	this->Trupm_card->Name = L"Trupm_card";
	this->Trupm_card->Size = System::Drawing::Size(100, 143);
	this->Trupm_card->TabIndex = 15;
	this->Trupm_card->TabStop = false;
	// 
	// Cards_in_the_desk
	// 
	this->Cards_in_the_desk->Location = System::Drawing::Point(73, 288);
	this->Cards_in_the_desk->Name = L"Cards_in_the_desk";
	this->Cards_in_the_desk->Size = System::Drawing::Size(158, 101);
	this->Cards_in_the_desk->TabIndex = 16;
	this->Cards_in_the_desk->TabStop = false;
	// 
	// Player_card_1
	// 
	this->Player_card_1->Location = System::Drawing::Point(17, 451);
	this->Player_card_1->Name = L"Player_card_1";
	this->Player_card_1->Size = System::Drawing::Size(100, 143);
	this->Player_card_1->TabIndex = 17;
	this->Player_card_1->TabStop = false;
	// 
	// Player_card_2
	// 
	this->Player_card_2->Location = System::Drawing::Point(151, 451);
	this->Player_card_2->Name = L"Player_card_2";
	this->Player_card_2->Size = System::Drawing::Size(100, 143);
	this->Player_card_2->TabIndex = 18;
	this->Player_card_2->TabStop = false;
	// 
	// Player_card_3
	// 
	this->Player_card_3->Location = System::Drawing::Point(279, 451);
	this->Player_card_3->Name = L"Player_card_3";
	this->Player_card_3->Size = System::Drawing::Size(100, 143);
	this->Player_card_3->TabIndex = 19;
	this->Player_card_3->TabStop = false;
	// 
	// Player_card_4
	// 
	this->Player_card_4->Location = System::Drawing::Point(407, 451);
	this->Player_card_4->Name = L"Player_card_4";
	this->Player_card_4->Size = System::Drawing::Size(100, 143);
	this->Player_card_4->TabIndex = 20;
	this->Player_card_4->TabStop = false;
	// 
	// Player_card_5
	// 
	this->Player_card_5->Location = System::Drawing::Point(536, 451);
	this->Player_card_5->Name = L"Player_card_5";
	this->Player_card_5->Size = System::Drawing::Size(100, 143);
	this->Player_card_5->TabIndex = 25;
	this->Player_card_5->TabStop = false;
	// 
	// Player_card_6
	// 
	this->Player_card_6->Location = System::Drawing::Point(664, 451);
	this->Player_card_6->Name = L"Player_card_6";
	this->Player_card_6->Size = System::Drawing::Size(100, 143);
	this->Player_card_6->TabIndex = 21;
	this->Player_card_6->TabStop = false;
	// 
	// Player_card_7
	// 
	this->Player_card_7->Location = System::Drawing::Point(791, 451);
	this->Player_card_7->Name = L"Player_card_7";
	this->Player_card_7->Size = System::Drawing::Size(100, 143);
	this->Player_card_7->TabIndex = 22;
	this->Player_card_7->TabStop = false;
	// 
	// Player_card_8
	// 
	this->Player_card_8->Location = System::Drawing::Point(917, 451);
	this->Player_card_8->Name = L"Player_card_8";
	this->Player_card_8->Size = System::Drawing::Size(100, 143);
	this->Player_card_8->TabIndex = 23;
	this->Player_card_8->TabStop = false;
	// 
	// Player_card_9
	// 
	this->Player_card_9->Location = System::Drawing::Point(1045, 451);
	this->Player_card_9->Name = L"Player_card_9";
	this->Player_card_9->Size = System::Drawing::Size(100, 143);
	this->Player_card_9->TabIndex = 24;
	this->Player_card_9->TabStop = false;
	// 
	// Player_card_10
	// 
	this->Player_card_10->Location = System::Drawing::Point(1172, 451);
	this->Player_card_10->Name = L"Player_card_10";
	this->Player_card_10->Size = System::Drawing::Size(100, 143);
	this->Player_card_10->TabIndex = 26;
	this->Player_card_10->TabStop = false;
	// 
	// Player_card_11
	// 
	this->Player_card_11->Location = System::Drawing::Point(22, 615);
	this->Player_card_11->Name = L"Player_card_11";
	this->Player_card_11->Size = System::Drawing::Size(100, 143);
	this->Player_card_11->TabIndex = 27;
	this->Player_card_11->TabStop = false;
	// 
	// Player_card_12
	// 
	this->Player_card_12->Location = System::Drawing::Point(151, 615);
	this->Player_card_12->Name = L"Player_card_12";
	this->Player_card_12->Size = System::Drawing::Size(100, 143);
	this->Player_card_12->TabIndex = 28;
	this->Player_card_12->TabStop = false;
	// 
	// Player_card_13
	// 
	this->Player_card_13->Location = System::Drawing::Point(279, 615);
	this->Player_card_13->Name = L"Player_card_13";
	this->Player_card_13->Size = System::Drawing::Size(100, 143);
	this->Player_card_13->TabIndex = 29;
	this->Player_card_13->TabStop = false;
	// 
	// Player_card_14
	// 
	this->Player_card_14->Location = System::Drawing::Point(407, 615);
	this->Player_card_14->Name = L"Player_card_14";
	this->Player_card_14->Size = System::Drawing::Size(100, 143);
	this->Player_card_14->TabIndex = 30;
	this->Player_card_14->TabStop = false;
	// 
	// Player_card_15
	// 
	this->Player_card_15->Location = System::Drawing::Point(536, 615);
	this->Player_card_15->Name = L"Player_card_15";
	this->Player_card_15->Size = System::Drawing::Size(100, 143);
	this->Player_card_15->TabIndex = 31;
	this->Player_card_15->TabStop = false;
	// 
	// Player_card_16
	// 
	this->Player_card_16->Location = System::Drawing::Point(664, 615);
	this->Player_card_16->Name = L"Player_card_16";
	this->Player_card_16->Size = System::Drawing::Size(100, 143);
	this->Player_card_16->TabIndex = 32;
	this->Player_card_16->TabStop = false;
	// 
	// Player_card_17
	// 
	this->Player_card_17->Location = System::Drawing::Point(791, 615);
	this->Player_card_17->Name = L"Player_card_17";
	this->Player_card_17->Size = System::Drawing::Size(100, 143);
	this->Player_card_17->TabIndex = 33;
	this->Player_card_17->TabStop = false;
	// 
	// Player_card_18
	// 
	this->Player_card_18->Location = System::Drawing::Point(917, 615);
	this->Player_card_18->Name = L"Player_card_18";
	this->Player_card_18->Size = System::Drawing::Size(100, 143);
	this->Player_card_18->TabIndex = 34;
	this->Player_card_18->TabStop = false;
	// 
	// Player_card_19
	// 
	this->Player_card_19->Location = System::Drawing::Point(1045, 615);
	this->Player_card_19->Name = L"Player_card_19";
	this->Player_card_19->Size = System::Drawing::Size(100, 143);
	this->Player_card_19->TabIndex = 35;
	this->Player_card_19->TabStop = false;
	// 
	// Player_card_20
	// 
	this->Player_card_20->Location = System::Drawing::Point(1172, 615);
	this->Player_card_20->Name = L"Player_card_20";
	this->Player_card_20->Size = System::Drawing::Size(100, 143);
	this->Player_card_20->TabIndex = 36;
	this->Player_card_20->TabStop = false;
	// 
	// button1
	// 
	this->button1->Location = System::Drawing::Point(266, 27);
	this->button1->Name = L"button1";
	this->button1->Size = System::Drawing::Size(147, 50);
	this->button1->TabIndex = 37;
	this->button1->Text = L"button1";
	this->button1->UseVisualStyleBackColor = true;
	this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
	// 
	// button2
	// 
	this->button2->Location = System::Drawing::Point(468, 54);
	this->button2->Name = L"button2";
	this->button2->Size = System::Drawing::Size(196, 23);
	this->button2->TabIndex = 38;
	this->button2->Text = L"button2";
	this->button2->UseVisualStyleBackColor = true;
	this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
	// 
	// MyForm
	// 
	this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
	this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
	this->BackColor = System::Drawing::SystemColors::ScrollBar;
	this->ClientSize = System::Drawing::Size(1298, 760);
	this->Controls->Add(this->button2);
	this->Controls->Add(this->button1);
	this->Controls->Add(this->Player_card_20);
	this->Controls->Add(this->Player_card_19);
	this->Controls->Add(this->Player_card_18);
	this->Controls->Add(this->Player_card_17);
	this->Controls->Add(this->Player_card_16);
	this->Controls->Add(this->Player_card_15);
	this->Controls->Add(this->Player_card_14);
	this->Controls->Add(this->Player_card_13);
	this->Controls->Add(this->Player_card_12);
	this->Controls->Add(this->Player_card_11);
	this->Controls->Add(this->Player_card_10);
	this->Controls->Add(this->Player_card_9);
	this->Controls->Add(this->Player_card_8);
	this->Controls->Add(this->Player_card_7);
	this->Controls->Add(this->Player_card_6);
	this->Controls->Add(this->Player_card_5);
	this->Controls->Add(this->Player_card_4);
	this->Controls->Add(this->Player_card_3);
	this->Controls->Add(this->Player_card_2);
	this->Controls->Add(this->Player_card_1);
	this->Controls->Add(this->Cards_in_the_desk);
	this->Controls->Add(this->Trupm_card);
	this->Controls->Add(this->Computer_player_cards);
	this->Controls->Add(this->battleground_12);
	this->Controls->Add(this->battleground_11);
	this->Controls->Add(this->battleground_10);
	this->Controls->Add(this->battleground_9);
	this->Controls->Add(this->battleground_8);
	this->Controls->Add(this->battleground_7);
	this->Controls->Add(this->battleground_6);
	this->Controls->Add(this->battleground_5);
	this->Controls->Add(this->battleground_4);
	this->Controls->Add(this->battleground_3);
	this->Controls->Add(this->battleground_2);
	this->Controls->Add(this->battleground_1);
	this->Controls->Add(this->play_button);
	this->Name = L"MyForm";
	this->Text = L"Fool_game";
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->battleground_1))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->battleground_2))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->battleground_3))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->battleground_4))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->battleground_5))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->battleground_6))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->battleground_7))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->battleground_8))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->battleground_9))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->battleground_10))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->battleground_11))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->battleground_12))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Computer_player_cards))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Trupm_card))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Cards_in_the_desk))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Player_card_1))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Player_card_2))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Player_card_3))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Player_card_4))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Player_card_5))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Player_card_6))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Player_card_7))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Player_card_8))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Player_card_9))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Player_card_10))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Player_card_11))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Player_card_12))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Player_card_13))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Player_card_14))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Player_card_15))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Player_card_16))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Player_card_17))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Player_card_18))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Player_card_19))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Player_card_20))->EndInit();
	this->ResumeLayout(false);

}
//-----------------------------------------------------------------------------------------
System::Void FoolGame::MyForm::Play_Click(System::Object^ sender, System::EventArgs^ e)
{
	random_distribution_of_cards();

}
//-----------------------------------------------------------------------------------------
void FoolGame::MyForm::random_distribution_of_cards()
{
	if (desc_cards.size() > 0)
		return;

	std::vector<std::pair<card_suit, int>> all_cards{
	{card_suit::hearts,1},
	{card_suit::hearts,2},
	{card_suit::hearts,3},
	{card_suit::hearts,4},
	{card_suit::hearts,5},
	{card_suit::hearts,6},
	{card_suit::hearts,7},
	{card_suit::hearts,8},
	{card_suit::hearts,9},
	{card_suit::clubs,1},
	{card_suit::clubs,2},
	{card_suit::clubs,3},
	{card_suit::clubs,4},
	{card_suit::clubs,5},
	{card_suit::clubs,6},
	{card_suit::clubs,7},
	{card_suit::clubs,8},
	{card_suit::clubs,9},
	{card_suit::diamonds,1},
	{card_suit::diamonds,2},
	{card_suit::diamonds,3},
	{card_suit::diamonds,4},
	{card_suit::diamonds,5},
	{card_suit::diamonds,6},
	{card_suit::diamonds,7},
	{card_suit::diamonds,8},
	{card_suit::diamonds,9},
	{card_suit::spades,1},
	{card_suit::spades,2},
	{card_suit::spades,3},
	{card_suit::spades,4},
	{card_suit::spades,5},
	{card_suit::spades,6},
	{card_suit::spades,7},
	{card_suit::spades,8},
	{card_suit::spades,9}
	};


	int number_of_cards = all_cards.size()-1;

	while (number_of_cards >= 0)
	{
		int rand_index = get_random_int(0, number_of_cards);
		desc_cards.push(all_cards[rand_index]);

		// first card is a Trupm_card
		if (number_of_cards == 35)
		{
			String^ way_to_card;
			if (load_card_image(all_cards[rand_index], way_to_card))
			{
				if (Trupm_card->Image)
					Trupm_card->Image = nullptr;

				Trupm_card->Image = Image::FromFile(way_to_card);
				trump_suit = all_cards[rand_index].first;
			}
			// unlikely
			else
			{
				return;
			}
		}

		all_cards.erase(all_cards.begin() + rand_index);
		number_of_cards--;
	}


	Cards_in_the_desk->Image = Image::FromFile("cards_images/Card_back.PNG");
	Cards_in_the_desk->Image->RotateFlip(RotateFlipType::Rotate90FlipX);
}
//-----------------------------------------------------------------------------------------
bool FoolGame::MyForm::get_card_from_desc(std::pair<card_suit, int>& card)
{
	if (desc_cards.empty())
		return false;

	card = desc_cards.top();
	// erase top element
	desc_cards.pop();

	if (desc_cards.size() == 1)
	{
		Cards_in_the_desk->Image = nullptr;
		return true;
	}

	if (desc_cards.empty())
	{
		if (Cards_in_the_desk->Image)
			Cards_in_the_desk->Image = nullptr;

		Trupm_card->Image = nullptr;

		switch (card.first)
		{
		case card_suit::hearts:
			Trupm_card->Image= Image::FromFile("cards_images/Badge_hearts.PNG");
			break;
		case card_suit::clubs:
			Trupm_card->Image = Image::FromFile("cards_images/Badge_clubs.PNG");
			break;
		case card_suit::diamonds:
			Trupm_card->Image = Image::FromFile("cards_images/Badge_diamonds.PNG");
			break;
		case card_suit::spades:
			Trupm_card->Image = Image::FromFile("cards_images/Badge_spades.PNG");
			break;
		}
		return true;		
	}

	return true;
}
//-----------------------------------------------------------------------------------------
bool FoolGame::MyForm::load_card_image(const std::pair<card_suit, int>& card, String^% way)
{
	// 6
	if ((card.first == card_suit::hearts) && (card.second == 1))
	{
		way = "cards_images/6_hearts.PNG";
		return true;
	}
	if ((card.first == card_suit::clubs) && (card.second == 1))
	{
		way = "cards_images/6_clubs.PNG";
		return true;
	}
	if ((card.first == card_suit::diamonds) && (card.second == 1))
	{
		way = "cards_images/6_diamonds.PNG";
		return true;
	}
	if ((card.first == card_suit::spades) && (card.second == 1))
	{
		way = "cards_images/6_spades.PNG";
		return true;
	}
	// 7
	if ((card.first == card_suit::hearts) && (card.second == 2))
	{
		way = "cards_images/7_hearts.PNG";
		return true;
	}
	if ((card.first == card_suit::clubs) && (card.second == 2))
	{
		way = "cards_images/7_clubs.PNG";
		return true;
	}
	if ((card.first == card_suit::diamonds) && (card.second == 2))
	{
		way = "cards_images/7_diamonds.PNG";
		return true;
	}
	if ((card.first == card_suit::spades) && (card.second == 2))
	{
		way = "cards_images/7_spades.PNG";
		return true;
	}
	// 8
	if ((card.first == card_suit::hearts) && (card.second == 3))
	{
		way = "cards_images/8_hearts.PNG";
		return true;
	}
	if ((card.first == card_suit::clubs) && (card.second == 3))
	{
		way = "cards_images/8_clubs.PNG";
		return true;
	}
	if ((card.first == card_suit::diamonds) && (card.second == 3))
	{
		way = "cards_images/8_diamonds.PNG";
		return true;
	}
	if ((card.first == card_suit::spades) && (card.second == 3))
	{
		way = "cards_images/8_spades.PNG";
		return true;
	}
	// 9
	if ((card.first == card_suit::hearts) && (card.second == 4))
	{
		way = "cards_images/9_hearts.PNG";
		return true;
	}
	if ((card.first == card_suit::clubs) && (card.second == 4))
	{
		way = "cards_images/9_clubs.PNG";
		return true;
	}
	if ((card.first == card_suit::diamonds) && (card.second == 4))
	{
		way = "cards_images/9_diamonds.PNG";
		return true;
	}
	if ((card.first == card_suit::spades) && (card.second == 4))
	{
		way = "cards_images/9_spades.PNG";
		return true;
	}
	// 10
	if ((card.first == card_suit::hearts) && (card.second == 5))
	{
		way = "cards_images/10_hearts.PNG";
		return true;
	}
	if ((card.first == card_suit::clubs) && (card.second == 5))
	{
		way = "cards_images/10_clubs.PNG";
		return true;
	}
	if ((card.first == card_suit::diamonds) && (card.second == 5))
	{
		way = "cards_images/10_diamonds.PNG";
		return true;
	}
	if ((card.first == card_suit::spades) && (card.second == 5))
	{
		way = "cards_images/10_spades.PNG";
		return true;
	}
	// J
	if ((card.first == card_suit::hearts) && (card.second == 6))
	{
		way = "cards_images/J_hearts.PNG";
		return true;
	}
	if ((card.first == card_suit::clubs) && (card.second == 6))
	{
		way = "cards_images/J_clubs.PNG";
		return true;
	}
	if ((card.first == card_suit::diamonds) && (card.second == 6))
	{
		way = "cards_images/J_diamonds.PNG";
		return true;
	}
	if ((card.first == card_suit::spades) && (card.second == 6))
	{
		way = "cards_images/J_spades.PNG";
		return true;
	}
	// Q
	if ((card.first == card_suit::hearts) && (card.second == 7))
	{
		way = "cards_images/Q_hearts.PNG";
		return true;
	}
	if ((card.first == card_suit::clubs) && (card.second == 7))
	{
		way = "cards_images/Q_clubs.PNG";
		return true;
	}
	if ((card.first == card_suit::diamonds) && (card.second == 7))
	{
		way = "cards_images/Q_diamonds.PNG";
		return true;
	}
	if ((card.first == card_suit::spades) && (card.second == 7))
	{
		way = "cards_images/Q_spades.PNG";
		return true;
	}
	// K
	if ((card.first == card_suit::hearts) && (card.second == 8))
	{
		way = "cards_images/K_hearts.PNG";
		return true;
	}
	if ((card.first == card_suit::clubs) && (card.second == 8))
	{
		way = "cards_images/K_clubs.PNG";
		return true;
	}
	if ((card.first == card_suit::diamonds) && (card.second == 8))
	{
		way = "cards_images/K_diamonds.PNG";
		return true;
	}
	if ((card.first == card_suit::spades) && (card.second == 8))
	{
		way = "cards_images/K_spades.PNG";
		return true;
	}
	// A
	if ((card.first == card_suit::hearts) && (card.second == 9))
	{
		way = "cards_images/A_hearts.PNG";
		return true;
	}
	if ((card.first == card_suit::clubs) && (card.second == 9))
	{
		way = "cards_images/A_clubs.PNG";
		return true;
	}
	if ((card.first == card_suit::diamonds) && (card.second == 9))
	{
		way = "cards_images/A_diamonds.PNG";
		return true;
	}
	if ((card.first == card_suit::spades) && (card.second == 9))
	{
		way = "cards_images/A_spades.PNG";
		return true;
	}

	// if not found
	return false;
}
//-----------------------------------------------------------------------------------------
bool FoolGame::MyForm::take_card_for_player(const std::pair<card_suit, int>& card)
{
	PictureBox^ card_place;
	if (!place_player_card_in_storage(card))
		return false;

	player_cards_in_storage.push_back(card);
	return true;
}
//-----------------------------------------------------------------------------------------
bool FoolGame::MyForm::place_player_card_in_storage(const std::pair<card_suit, int>& card)
{
	PictureBox^ card_place_in_storage;

	switch (player_cards_in_storage.size())
	{
	case 0:
		card_place_in_storage = Player_card_1;
		break;
	case 1:
		card_place_in_storage = Player_card_2;
		break;
	case 2:
		card_place_in_storage = Player_card_3;
		break;
	case 3:
		card_place_in_storage = Player_card_4;
		break;
	case 4:
		card_place_in_storage = Player_card_5;
		break;
	case 5:
		card_place_in_storage = Player_card_6;
		break;
	case 6:
		card_place_in_storage = Player_card_7;
		break;
	case 7:
		card_place_in_storage = Player_card_8;
		break;
	case 8:
		card_place_in_storage = Player_card_9;
		break;
	case 9:
		card_place_in_storage = Player_card_10;
		break;
	case 10:
		card_place_in_storage = Player_card_11;
		break;
	case 11:
		card_place_in_storage = Player_card_12;
		break;
	case 12:
		card_place_in_storage = Player_card_13;
		break;
	case 13:
		card_place_in_storage = Player_card_14;
		break;
	case 14:
		card_place_in_storage = Player_card_15;
		break;
	case 15:
		card_place_in_storage = Player_card_16;
		break;
	case 16:
		card_place_in_storage = Player_card_17;
		break;
	case 17:
		card_place_in_storage = Player_card_18;
		break;
	case 18:
		card_place_in_storage = Player_card_19;
		break;
	case 19:
		card_place_in_storage = Player_card_20;
		break;
	default: 
		return false;
	}

	// unlikely
	String^ way_to_card;
	if (!load_card_image(card, way_to_card))
		return false;


	card_place_in_storage->Image = Image::FromFile(way_to_card);
	return true;
}
//-----------------------------------------------------------------------------------------
bool FoolGame::MyForm::place_player_card_in_field(const std::pair<card_suit, int>& card)
{
	PictureBox^ card_place_in_battleground;

	switch (player_cards_in_battleground.size())
	{
	case 0:
		card_place_in_battleground = battleground_2;
		break;
	case 1:
		card_place_in_battleground = battleground_4;
		break;
	case 2:
		card_place_in_battleground = battleground_6;
		break;
	case 3:
		card_place_in_battleground = battleground_8;
		break;
	case 4:
		card_place_in_battleground = battleground_10;
		break;
	case 5:
		card_place_in_battleground = battleground_12;
		break;
	default:
		return false;
	}

	// unlikely
	String^ way_to_card;
	if (!load_card_image(card, way_to_card))
		return false;


	card_place_in_battleground->Image = Image::FromFile(way_to_card);
	return true;
}
//-----------------------------------------------------------------------------------------
bool FoolGame::MyForm::make_a_move(const std::pair<card_suit, int>& card)
{
	for (auto& player_card : player_cards_in_storage)
	{
		if (player_card == card)
		{
			// 2 4 6 8 10 12 - fields for player
			if (!place_player_card_in_field(card))
				return false;
			else
				return true;
		}
	}

	return false;
}
//-----------------------------------------------------------------------------------------
bool FoolGame::MyForm::is_card_a_trump(const std::pair<card_suit, int>& card)
{
	return (trump_suit == card.first);
}
//-----------------------------------------------------------------------------------------
int FoolGame::MyForm::get_random_int(const int& left_bound, const int& right_bound)
{
	if (left_bound == right_bound)
		return left_bound;

	srand(time(NULL));
	return rand() % ((right_bound + 1) - left_bound) + left_bound;
}
//-----------------------------------------------------------------------------------------
