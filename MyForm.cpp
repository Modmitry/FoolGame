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
	this->finished__take_cards_button = (gcnew System::Windows::Forms::Button());
	this->sort_cards_button = (gcnew System::Windows::Forms::Button());
	this->Label = (gcnew System::Windows::Forms::Label());
	this->label1 = (gcnew System::Windows::Forms::Label());
	this->Broken_card = (gcnew System::Windows::Forms::PictureBox());
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
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Broken_card))->BeginInit();
	this->SuspendLayout();
	// 
	// play_button
	// 
	this->play_button->Location = System::Drawing::Point(22, 21);
	this->play_button->Name = L"play_button";
	this->play_button->Size = System::Drawing::Size(95, 56);
	this->play_button->TabIndex = 0;
	this->play_button->Text = L"PlayGame";
	this->play_button->UseVisualStyleBackColor = true;
	this->play_button->Click += gcnew System::EventHandler(this, &MyForm::Play_Game_Click);
	// 
	// battleground_1
	// 
	this->battleground_1->Location = System::Drawing::Point(536, 182);
	this->battleground_1->Name = L"battleground_1";
	this->battleground_1->Size = System::Drawing::Size(100, 143);
	this->battleground_1->TabIndex = 2;
	this->battleground_1->TabStop = false;
	// 
	// battleground_2
	// 
	this->battleground_2->Location = System::Drawing::Point(536, 274);
	this->battleground_2->Name = L"battleground_2";
	this->battleground_2->Size = System::Drawing::Size(100, 143);
	this->battleground_2->TabIndex = 3;
	this->battleground_2->TabStop = false;
	// 
	// battleground_3
	// 
	this->battleground_3->Location = System::Drawing::Point(664, 182);
	this->battleground_3->Name = L"battleground_3";
	this->battleground_3->Size = System::Drawing::Size(100, 143);
	this->battleground_3->TabIndex = 4;
	this->battleground_3->TabStop = false;
	// 
	// battleground_4
	// 
	this->battleground_4->Location = System::Drawing::Point(664, 274);
	this->battleground_4->Name = L"battleground_4";
	this->battleground_4->Size = System::Drawing::Size(100, 143);
	this->battleground_4->TabIndex = 5;
	this->battleground_4->TabStop = false;
	// 
	// battleground_5
	// 
	this->battleground_5->Location = System::Drawing::Point(791, 182);
	this->battleground_5->Name = L"battleground_5";
	this->battleground_5->Size = System::Drawing::Size(100, 143);
	this->battleground_5->TabIndex = 6;
	this->battleground_5->TabStop = false;
	// 
	// battleground_6
	// 
	this->battleground_6->Location = System::Drawing::Point(791, 274);
	this->battleground_6->Name = L"battleground_6";
	this->battleground_6->Size = System::Drawing::Size(100, 143);
	this->battleground_6->TabIndex = 7;
	this->battleground_6->TabStop = false;
	// 
	// battleground_7
	// 
	this->battleground_7->Location = System::Drawing::Point(917, 182);
	this->battleground_7->Name = L"battleground_7";
	this->battleground_7->Size = System::Drawing::Size(100, 143);
	this->battleground_7->TabIndex = 8;
	this->battleground_7->TabStop = false;
	// 
	// battleground_8
	// 
	this->battleground_8->Location = System::Drawing::Point(917, 274);
	this->battleground_8->Name = L"battleground_8";
	this->battleground_8->Size = System::Drawing::Size(100, 143);
	this->battleground_8->TabIndex = 9;
	this->battleground_8->TabStop = false;
	// 
	// battleground_9
	// 
	this->battleground_9->Location = System::Drawing::Point(1045, 182);
	this->battleground_9->Name = L"battleground_9";
	this->battleground_9->Size = System::Drawing::Size(100, 143);
	this->battleground_9->TabIndex = 10;
	this->battleground_9->TabStop = false;
	// 
	// battleground_10
	// 
	this->battleground_10->Location = System::Drawing::Point(1045, 274);
	this->battleground_10->Name = L"battleground_10";
	this->battleground_10->Size = System::Drawing::Size(100, 143);
	this->battleground_10->TabIndex = 11;
	this->battleground_10->TabStop = false;
	// 
	// battleground_11
	// 
	this->battleground_11->Location = System::Drawing::Point(1172, 182);
	this->battleground_11->Name = L"battleground_11";
	this->battleground_11->Size = System::Drawing::Size(100, 143);
	this->battleground_11->TabIndex = 12;
	this->battleground_11->TabStop = false;
	// 
	// battleground_12
	// 
	this->battleground_12->Location = System::Drawing::Point(1172, 274);
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
	this->Trupm_card->Location = System::Drawing::Point(279, 182);
	this->Trupm_card->Name = L"Trupm_card";
	this->Trupm_card->Size = System::Drawing::Size(100, 143);
	this->Trupm_card->TabIndex = 15;
	this->Trupm_card->TabStop = false;
	// 
	// Cards_in_the_desk
	// 
	this->Cards_in_the_desk->Location = System::Drawing::Point(256, 274);
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
	this->Player_card_1->Click += gcnew System::EventHandler(this, &MyForm::Player_card_1_Click);
	// 
	// Player_card_2
	// 
	this->Player_card_2->Location = System::Drawing::Point(151, 451);
	this->Player_card_2->Name = L"Player_card_2";
	this->Player_card_2->Size = System::Drawing::Size(100, 143);
	this->Player_card_2->TabIndex = 18;
	this->Player_card_2->TabStop = false;
	this->Player_card_2->Click += gcnew System::EventHandler(this, &MyForm::Player_card_2_Click);
	// 
	// Player_card_3
	// 
	this->Player_card_3->Location = System::Drawing::Point(279, 451);
	this->Player_card_3->Name = L"Player_card_3";
	this->Player_card_3->Size = System::Drawing::Size(100, 143);
	this->Player_card_3->TabIndex = 19;
	this->Player_card_3->TabStop = false;
	this->Player_card_3->Click += gcnew System::EventHandler(this, &MyForm::Player_card_3_Click);
	// 
	// Player_card_4
	// 
	this->Player_card_4->Location = System::Drawing::Point(407, 451);
	this->Player_card_4->Name = L"Player_card_4";
	this->Player_card_4->Size = System::Drawing::Size(100, 143);
	this->Player_card_4->TabIndex = 20;
	this->Player_card_4->TabStop = false;
	this->Player_card_4->Click += gcnew System::EventHandler(this, &MyForm::Player_card_4_Click);
	// 
	// Player_card_5
	// 
	this->Player_card_5->Location = System::Drawing::Point(536, 451);
	this->Player_card_5->Name = L"Player_card_5";
	this->Player_card_5->Size = System::Drawing::Size(100, 143);
	this->Player_card_5->TabIndex = 25;
	this->Player_card_5->TabStop = false;
	this->Player_card_5->Click += gcnew System::EventHandler(this, &MyForm::Player_card_5_Click);
	// 
	// Player_card_6
	// 
	this->Player_card_6->Location = System::Drawing::Point(664, 451);
	this->Player_card_6->Name = L"Player_card_6";
	this->Player_card_6->Size = System::Drawing::Size(100, 143);
	this->Player_card_6->TabIndex = 21;
	this->Player_card_6->TabStop = false;
	this->Player_card_6->Click += gcnew System::EventHandler(this, &MyForm::Player_card_6_Click);
	// 
	// Player_card_7
	// 
	this->Player_card_7->Location = System::Drawing::Point(791, 451);
	this->Player_card_7->Name = L"Player_card_7";
	this->Player_card_7->Size = System::Drawing::Size(100, 143);
	this->Player_card_7->TabIndex = 22;
	this->Player_card_7->TabStop = false;
	this->Player_card_7->Click += gcnew System::EventHandler(this, &MyForm::Player_card_7_Click);
	// 
	// Player_card_8
	// 
	this->Player_card_8->Location = System::Drawing::Point(917, 451);
	this->Player_card_8->Name = L"Player_card_8";
	this->Player_card_8->Size = System::Drawing::Size(100, 143);
	this->Player_card_8->TabIndex = 23;
	this->Player_card_8->TabStop = false;
	this->Player_card_8->Click += gcnew System::EventHandler(this, &MyForm::Player_card_8_Click);
	// 
	// Player_card_9
	// 
	this->Player_card_9->Location = System::Drawing::Point(1045, 451);
	this->Player_card_9->Name = L"Player_card_9";
	this->Player_card_9->Size = System::Drawing::Size(100, 143);
	this->Player_card_9->TabIndex = 24;
	this->Player_card_9->TabStop = false;
	this->Player_card_9->Click += gcnew System::EventHandler(this, &MyForm::Player_card_9_Click);
	// 
	// Player_card_10
	// 
	this->Player_card_10->Location = System::Drawing::Point(1172, 451);
	this->Player_card_10->Name = L"Player_card_10";
	this->Player_card_10->Size = System::Drawing::Size(100, 143);
	this->Player_card_10->TabIndex = 26;
	this->Player_card_10->TabStop = false;
	this->Player_card_10->Click += gcnew System::EventHandler(this, &MyForm::Player_card_10_Click);
	// 
	// Player_card_11
	// 
	this->Player_card_11->Location = System::Drawing::Point(22, 615);
	this->Player_card_11->Name = L"Player_card_11";
	this->Player_card_11->Size = System::Drawing::Size(100, 143);
	this->Player_card_11->TabIndex = 27;
	this->Player_card_11->TabStop = false;
	this->Player_card_11->Click += gcnew System::EventHandler(this, &MyForm::Player_card_11_Click);
	// 
	// Player_card_12
	// 
	this->Player_card_12->Location = System::Drawing::Point(151, 615);
	this->Player_card_12->Name = L"Player_card_12";
	this->Player_card_12->Size = System::Drawing::Size(100, 143);
	this->Player_card_12->TabIndex = 28;
	this->Player_card_12->TabStop = false;
	this->Player_card_12->Click += gcnew System::EventHandler(this, &MyForm::Player_card_12_Click);
	// 
	// Player_card_13
	// 
	this->Player_card_13->Location = System::Drawing::Point(279, 615);
	this->Player_card_13->Name = L"Player_card_13";
	this->Player_card_13->Size = System::Drawing::Size(100, 143);
	this->Player_card_13->TabIndex = 29;
	this->Player_card_13->TabStop = false;
	this->Player_card_13->Click += gcnew System::EventHandler(this, &MyForm::Player_card_13_Click);
	// 
	// Player_card_14
	// 
	this->Player_card_14->Location = System::Drawing::Point(407, 615);
	this->Player_card_14->Name = L"Player_card_14";
	this->Player_card_14->Size = System::Drawing::Size(100, 143);
	this->Player_card_14->TabIndex = 30;
	this->Player_card_14->TabStop = false;
	this->Player_card_14->Click += gcnew System::EventHandler(this, &MyForm::Player_card_14_Click);
	// 
	// Player_card_15
	// 
	this->Player_card_15->Location = System::Drawing::Point(536, 615);
	this->Player_card_15->Name = L"Player_card_15";
	this->Player_card_15->Size = System::Drawing::Size(100, 143);
	this->Player_card_15->TabIndex = 31;
	this->Player_card_15->TabStop = false;
	this->Player_card_15->Click += gcnew System::EventHandler(this, &MyForm::Player_card_15_Click);
	// 
	// Player_card_16
	// 
	this->Player_card_16->Location = System::Drawing::Point(664, 615);
	this->Player_card_16->Name = L"Player_card_16";
	this->Player_card_16->Size = System::Drawing::Size(100, 143);
	this->Player_card_16->TabIndex = 32;
	this->Player_card_16->TabStop = false;
	this->Player_card_16->Click += gcnew System::EventHandler(this, &MyForm::Player_card_16_Click);
	// 
	// Player_card_17
	// 
	this->Player_card_17->Location = System::Drawing::Point(791, 615);
	this->Player_card_17->Name = L"Player_card_17";
	this->Player_card_17->Size = System::Drawing::Size(100, 143);
	this->Player_card_17->TabIndex = 33;
	this->Player_card_17->TabStop = false;
	this->Player_card_17->Click += gcnew System::EventHandler(this, &MyForm::Player_card_17_Click);
	// 
	// Player_card_18
	// 
	this->Player_card_18->Location = System::Drawing::Point(917, 615);
	this->Player_card_18->Name = L"Player_card_18";
	this->Player_card_18->Size = System::Drawing::Size(100, 143);
	this->Player_card_18->TabIndex = 34;
	this->Player_card_18->TabStop = false;
	this->Player_card_18->Click += gcnew System::EventHandler(this, &MyForm::Player_card_18_Click);
	// 
	// Player_card_19
	// 
	this->Player_card_19->Location = System::Drawing::Point(1045, 615);
	this->Player_card_19->Name = L"Player_card_19";
	this->Player_card_19->Size = System::Drawing::Size(100, 143);
	this->Player_card_19->TabIndex = 35;
	this->Player_card_19->TabStop = false;
	this->Player_card_19->Click += gcnew System::EventHandler(this, &MyForm::Player_card_19_Click);
	// 
	// Player_card_20
	// 
	this->Player_card_20->Location = System::Drawing::Point(1172, 615);
	this->Player_card_20->Name = L"Player_card_20";
	this->Player_card_20->Size = System::Drawing::Size(100, 143);
	this->Player_card_20->TabIndex = 36;
	this->Player_card_20->TabStop = false;
	this->Player_card_20->Click += gcnew System::EventHandler(this, &MyForm::Player_card_20_Click);
	// 
	// finished__take_cards_button
	// 
	this->finished__take_cards_button->Location = System::Drawing::Point(133, 21);
	this->finished__take_cards_button->Name = L"finished__take_cards_button";
	this->finished__take_cards_button->Size = System::Drawing::Size(95, 56);
	this->finished__take_cards_button->TabIndex = 37;
	this->finished__take_cards_button->Text = L"Finished/Pick up cards";
	this->finished__take_cards_button->UseVisualStyleBackColor = true;
	this->finished__take_cards_button->Click += gcnew System::EventHandler(this, &MyForm::finished_or_take_cards_button_Click);
	// 
	// sort_cards_button
	// 
	this->sort_cards_button->Location = System::Drawing::Point(246, 21);
	this->sort_cards_button->Name = L"sort_cards_button";
	this->sort_cards_button->Size = System::Drawing::Size(95, 56);
	this->sort_cards_button->TabIndex = 38;
	this->sort_cards_button->Text = L"Sort cards";
	this->sort_cards_button->UseVisualStyleBackColor = true;
	this->sort_cards_button->Click += gcnew System::EventHandler(this, &MyForm::sort_cards_button_Click);
	// 
	// Label
	// 
	this->Label->AutoSize = true;
	this->Label->Location = System::Drawing::Point(53, 113);
	this->Label->Name = L"Label";
	this->Label->Size = System::Drawing::Size(0, 13);
	this->Label->TabIndex = 39;
	// 
	// label1
	// 
	this->label1->AutoSize = true;
	this->label1->Location = System::Drawing::Point(972, 45);
	this->label1->Name = L"label1";
	this->label1->Size = System::Drawing::Size(175, 104);
	this->label1->TabIndex = 40;
	this->label1->Text = L"\r\n\r\n\r\n                              \r\n                          \r\n               "
		L"                           \r\n               \r\n                                  "
		L"                      ";
	// 
	// Broken_card
	// 
	this->Broken_card->Location = System::Drawing::Point(22, 224);
	this->Broken_card->Name = L"Broken_card";
	this->Broken_card->Size = System::Drawing::Size(158, 101);
	this->Broken_card->TabIndex = 41;
	this->Broken_card->TabStop = false;
	// 
	// MyForm
	// 
	this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
	this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
	this->BackColor = System::Drawing::SystemColors::ScrollBar;
	this->ClientSize = System::Drawing::Size(1298, 760);
	this->Controls->Add(this->Broken_card);
	this->Controls->Add(this->label1);
	this->Controls->Add(this->Label);
	this->Controls->Add(this->sort_cards_button);
	this->Controls->Add(this->finished__take_cards_button);
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
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Broken_card))->EndInit();
	this->ResumeLayout(false);
	this->PerformLayout();

}
//-----------------------------------------------------------------------------------------
void FoolGame::MyForm::Player_card_Click(System::Windows::Forms::PictureBox^% Player_card)
{
	if (!players_current_turn)
		return;

	if (!Player_card->Image)
		return;

	std::pair<card_methods::card_suit, int> card;

	if (!card_methods::card_by_index(card, Player_card->Text))
		return; // unlikely

	//determine if the card is suitable





	if (!move_card_in_battleground_field(card,true))
		return;

	update_player_cards();

	players_current_turn = false;
	// transfer of the turn to the computer
	computer_intelligence();
}
//-----------------------------------------------------------------------------------------
System::Void FoolGame::MyForm::Player_card_1_Click(System::Object^ sender, System::EventArgs^ e)
{
	Player_card_Click(Player_card_1);
}
//-----------------------------------------------------------------------------------------
System::Void  FoolGame::MyForm::Player_card_2_Click(System::Object^ sender, System::EventArgs^ e)
{
	Player_card_Click(Player_card_2);
}
//-----------------------------------------------------------------------------------------
System::Void  FoolGame::MyForm::Player_card_3_Click(System::Object^ sender, System::EventArgs^ e)
{
	Player_card_Click(Player_card_3);
}
//-----------------------------------------------------------------------------------------
System::Void  FoolGame::MyForm::Player_card_4_Click(System::Object^ sender, System::EventArgs^ e)
{
	Player_card_Click(Player_card_4);
}
//-----------------------------------------------------------------------------------------
System::Void  FoolGame::MyForm::Player_card_5_Click(System::Object^ sender, System::EventArgs^ e)
{
	Player_card_Click(Player_card_5);
}
//-----------------------------------------------------------------------------------------
System::Void  FoolGame::MyForm::Player_card_6_Click(System::Object^ sender, System::EventArgs^ e)
{
	Player_card_Click(Player_card_6);
}
//-----------------------------------------------------------------------------------------
System::Void FoolGame::MyForm::Player_card_7_Click(System::Object^ sender, System::EventArgs^ e)
{
	Player_card_Click(Player_card_7);
}
//-----------------------------------------------------------------------------------------
System::Void FoolGame::MyForm::Player_card_8_Click(System::Object^ sender, System::EventArgs^ e)
{
	Player_card_Click(Player_card_8);
}
//-----------------------------------------------------------------------------------------
System::Void FoolGame::MyForm::Player_card_9_Click(System::Object^ sender, System::EventArgs^ e)
{
	Player_card_Click(Player_card_9);
}
//-----------------------------------------------------------------------------------------
System::Void FoolGame::MyForm::Player_card_10_Click(System::Object^ sender, System::EventArgs^ e)
{
	Player_card_Click(Player_card_10);
}
//-----------------------------------------------------------------------------------------
System::Void FoolGame::MyForm::Player_card_11_Click(System::Object^ sender, System::EventArgs^ e)
{
	Player_card_Click(Player_card_11);
}
//-----------------------------------------------------------------------------------------
System::Void FoolGame::MyForm::Player_card_12_Click(System::Object^ sender, System::EventArgs^ e)
{
	Player_card_Click(Player_card_12);
}
//-----------------------------------------------------------------------------------------
System::Void FoolGame::MyForm::Player_card_13_Click(System::Object^ sender, System::EventArgs^ e)
{
	Player_card_Click(Player_card_13);
}
//-----------------------------------------------------------------------------------------
System::Void FoolGame::MyForm::Player_card_14_Click(System::Object^ sender, System::EventArgs^ e)
{
	Player_card_Click(Player_card_14);
}
//-----------------------------------------------------------------------------------------
System::Void FoolGame::MyForm::Player_card_15_Click(System::Object^ sender, System::EventArgs^ e)
{
	Player_card_Click(Player_card_15);
}
//-----------------------------------------------------------------------------------------
System::Void FoolGame::MyForm::Player_card_16_Click(System::Object^ sender, System::EventArgs^ e)
{
	Player_card_Click(Player_card_16);
}
//-----------------------------------------------------------------------------------------
System::Void FoolGame::MyForm::Player_card_17_Click(System::Object^ sender, System::EventArgs^ e)
{
	Player_card_Click(Player_card_17);
}
//-----------------------------------------------------------------------------------------
System::Void FoolGame::MyForm::Player_card_18_Click(System::Object^ sender, System::EventArgs^ e)
{
	Player_card_Click(Player_card_18);
}
//-----------------------------------------------------------------------------------------
System::Void FoolGame::MyForm::Player_card_19_Click(System::Object^ sender, System::EventArgs^ e)
{
	Player_card_Click(Player_card_19);
}
//-----------------------------------------------------------------------------------------
System::Void FoolGame::MyForm::Player_card_20_Click(System::Object^ sender, System::EventArgs^ e)
{
	Player_card_Click(Player_card_20);
}
//-----------------------------------------------------------------------------------------
//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
//-----------------------------------------------------------------------------------------
System::Void FoolGame::MyForm::Play_Game_Click(System::Object^ sender, System::EventArgs^ e)
{
	// 1 step. Clear all vectors and all fields
	clear_all();

	// 2 step. Getting the trump card and random put cards in the desk
	random_distribution_of_cards();

	// 3 step. recognize queue of turn. (RANDOM)
	determine_the_turn_of_the_move();

	// 4 step. Give cards to player
	give_cards_to_the_player();

	// 5 step. Give cards to computer opponent
	give_cards_to_the_computer();




	computer_intelligence();
	




}
//-----------------------------------------------------------------------------------------
System::Void FoolGame::MyForm::finished_or_take_cards_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	// if player want to finished current round
	if (players_turn)
	{
		if (!players_current_turn)
			return;

		finished_round();
	}
	//  if player want to take cards
	else
	{
		if (!players_current_turn)
			return;

		move_cards_from_battleground_field(true);

		players_turn = false;
		players_current_turn = false;
	}


	computer_intelligence();
}
//-----------------------------------------------------------------------------------------
System::Void FoolGame::MyForm::sort_cards_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (player_cards_in_storage.size() < 2)
		return;

	card_methods::sort_cards(player_cards_in_storage, trump_suit);
	update_player_cards();
}
//-----------------------------------------------------------------------------------------
//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
//-----------------------------------------------------------------------------------------
void FoolGame::MyForm::random_distribution_of_cards()
{
	std::vector<std::pair<card_methods::card_suit, int>> all_cards{
	{card_methods::card_suit::hearts,6},
	{card_methods::card_suit::hearts,7},
	{card_methods::card_suit::hearts,8},
	{card_methods::card_suit::hearts,9},
	{card_methods::card_suit::hearts,10},
	{card_methods::card_suit::hearts,11},
	{card_methods::card_suit::hearts,12},
	{card_methods::card_suit::hearts,13},
	{card_methods::card_suit::hearts,14},
	{card_methods::card_suit::clubs,6},
	{card_methods::card_suit::clubs,7},
	{card_methods::card_suit::clubs,8},
	{card_methods::card_suit::clubs,9},
	{card_methods::card_suit::clubs,10},
	{card_methods::card_suit::clubs,11},
	{card_methods::card_suit::clubs,12},
	{card_methods::card_suit::clubs,13},
	{card_methods::card_suit::clubs,14},
	{card_methods::card_suit::diamonds,6},
	{card_methods::card_suit::diamonds,7},
	{card_methods::card_suit::diamonds,8},
	{card_methods::card_suit::diamonds,9},
	{card_methods::card_suit::diamonds,10},
	{card_methods::card_suit::diamonds,11},
	{card_methods::card_suit::diamonds,12},
	{card_methods::card_suit::diamonds,13},
	{card_methods::card_suit::diamonds,14},
	{card_methods::card_suit::spades,6},
	{card_methods::card_suit::spades,7},
	{card_methods::card_suit::spades,8},
	{card_methods::card_suit::spades,9},
	{card_methods::card_suit::spades,10},
	{card_methods::card_suit::spades,11},
	{card_methods::card_suit::spades,12},
	{card_methods::card_suit::spades,13},
	{card_methods::card_suit::spades,14}
	};


	int number_of_cards = all_cards.size()-1;

	while (number_of_cards >= 0)
	{
		int rand_index = card_methods::get_random_int(0, number_of_cards);
		desc_cards.push(all_cards[rand_index]);

		// first card is a Trupm_card
		if (number_of_cards == 35)
		{
			String^ way_to_card;
			if (card_methods::load_card_image(all_cards[rand_index], way_to_card))
			{
				if (Trupm_card->Image)
					Trupm_card->Image = nullptr;

				Trupm_card->Image = Image::FromFile(way_to_card);
				Trupm_card->Refresh();
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
	Cards_in_the_desk->Refresh();


	Computer_player_cards->Image = Image::FromFile("cards_images/Card_back.PNG");
	Computer_player_cards->Refresh();
}
//-----------------------------------------------------------------------------------------
void FoolGame::MyForm::determine_the_turn_of_the_move()
{
	/*if (card_methods::get_random_int(1, 10) > 5)
	{
		players_turn = true;
		players_current_turn = true;
		this->Label->Text = L"     YOUR MOVE   ";
	}
	else*/
	{
		players_turn = false;
		players_current_turn = false;
		Label->Text = L"  OPPONENT'S MOVE  ";
		Label->Refresh();
	}
}
//-----------------------------------------------------------------------------------------
bool FoolGame::MyForm::get_card_from_desc(std::pair<card_methods::card_suit, int>& card)
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
		case card_methods::card_suit::hearts:
			Trupm_card->Image= Image::FromFile("cards_images/Badge_hearts.PNG");
			break;
		case card_methods::card_suit::clubs:
			Trupm_card->Image = Image::FromFile("cards_images/Badge_clubs.PNG");
			break;
		case card_methods::card_suit::diamonds:
			Trupm_card->Image = Image::FromFile("cards_images/Badge_diamonds.PNG");
			break;
		case card_methods::card_suit::spades:
			Trupm_card->Image = Image::FromFile("cards_images/Badge_spades.PNG");
			break;
		}
		return true;		
	}

	return true;
}
//-----------------------------------------------------------------------------------------
void FoolGame::MyForm::clear_all()
{
	// clear all vectors
	player_cards_in_storage.clear();
	computer_cards_in_storage.clear();
	cards_in_battleground.clear();
	broken_cards.clear();

	while (!desc_cards.empty())
		desc_cards.pop();

	// clear all fields
	clear_player_card_field();

	Computer_player_cards->Image = nullptr;
	Computer_player_cards->ResetText();
	Computer_player_cards->Refresh();

	clear_battleground_field();

	Broken_card->Image = nullptr;
	Broken_card->ResetText();
	Broken_card->Refresh();

	Cards_in_the_desk->Image = nullptr;
	Cards_in_the_desk->ResetText();
	Cards_in_the_desk->Refresh();

	Trupm_card->Image = nullptr;
	Trupm_card->ResetText();
	Trupm_card->Refresh();
}
//-----------------------------------------------------------------------------------------
void FoolGame::MyForm::finished_round()
{
	Label->Text = L"  FINISHED  ";
	Label->Refresh();

	// pause
	Sleep(1000);

	if (players_turn)
		Label->Text = L"     YOUR MOVE   ";
	else
		Label->Text = L"  OPPONENT'S MOVE  ";

	Label->Refresh();


	for (const auto& card : cards_in_battleground)
	{
		broken_cards.push_back(card);
	}

	cards_in_battleground.clear();
	clear_battleground_field();

	if (!Broken_card->Image)
	{
		Broken_card->Image = Image::FromFile("cards_images/Card_back.PNG");
		Broken_card->Image->RotateFlip(RotateFlipType::Rotate90FlipX);
		Broken_card->Refresh();
	}

	give_cards_to_the_player();
	give_cards_to_the_computer();

	debugFunc__show_cards();
}
//-----------------------------------------------------------------------------------------
//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
//-----------------------------------------------------------------------------------------
bool FoolGame::MyForm::place_player_card_in_storage(const std::pair<card_methods::card_suit, int>& card)
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
	if (!card_methods::load_card_image(card, way_to_card))
		return false;

	// unlikely
	String^ card_indx;
	if (!card_methods::index_by_card(card_indx, card))
		return false;


	player_cards_in_storage.push_back(card);
	card_place_in_storage->Image = Image::FromFile(way_to_card);
	card_place_in_storage->Text = card_indx;
	card_place_in_storage->Refresh();

	return true;
}
//-----------------------------------------------------------------------------------------
void FoolGame::MyForm::give_cards_to_the_player()
{
	while (player_cards_in_storage.size() < 6)
	{
		std::pair<card_methods::card_suit, int> player_card;

		if (get_card_from_desc(player_card))
		{
			if (!place_player_card_in_storage(player_card))
				return;
		}
		else
			return;

		Sleep(300);
	}
}
//-----------------------------------------------------------------------------------------
void FoolGame::MyForm::update_player_cards()
{
	clear_player_card_field();

	if (player_cards_in_storage.size() == 0)
		return;

	std::vector<std::pair<card_methods::card_suit, int>> player_cards_temp = player_cards_in_storage;
	player_cards_in_storage.clear();

	for (const auto& card : player_cards_temp)
	{
		place_player_card_in_storage(card);
	}
}
//-----------------------------------------------------------------------------------------
void FoolGame::MyForm::clear_player_card_field()
{
	Player_card_1->Image = nullptr; Player_card_1->ResetText(); Player_card_1->Refresh();
	Player_card_2->Image = nullptr; Player_card_2->ResetText(); Player_card_2->Refresh();
	Player_card_3->Image = nullptr; Player_card_3->ResetText(); Player_card_3->Refresh();
	Player_card_4->Image = nullptr; Player_card_4->ResetText(); Player_card_4->Refresh();
	Player_card_5->Image = nullptr; Player_card_5->ResetText(); Player_card_5->Refresh();
	Player_card_6->Image = nullptr; Player_card_6->ResetText(); Player_card_6->Refresh();
	Player_card_7->Image = nullptr; Player_card_7->ResetText(); Player_card_7->Refresh();
	Player_card_8->Image = nullptr; Player_card_8->ResetText(); Player_card_8->Refresh();
	Player_card_9->Image = nullptr; Player_card_9->ResetText(); Player_card_9->Refresh();
	Player_card_10->Image = nullptr; Player_card_10->ResetText(); Player_card_10->Refresh();
	Player_card_11->Image = nullptr; Player_card_11->ResetText(); Player_card_11->Refresh();
	Player_card_12->Image = nullptr; Player_card_12->ResetText(); Player_card_12->Refresh();
	Player_card_13->Image = nullptr; Player_card_13->ResetText(); Player_card_13->Refresh();
	Player_card_14->Image = nullptr; Player_card_14->ResetText(); Player_card_14->Refresh();
	Player_card_15->Image = nullptr; Player_card_15->ResetText(); Player_card_15->Refresh();
	Player_card_16->Image = nullptr; Player_card_16->ResetText(); Player_card_16->Refresh();
	Player_card_17->Image = nullptr; Player_card_17->ResetText(); Player_card_17->Refresh();
	Player_card_18->Image = nullptr; Player_card_18->ResetText(); Player_card_18->Refresh();
	Player_card_19->Image = nullptr; Player_card_19->ResetText(); Player_card_19->Refresh();
	Player_card_20->Image = nullptr; Player_card_20->ResetText(); Player_card_20->Refresh();
}
//-----------------------------------------------------------------------------------------
bool FoolGame::MyForm::determine_right_card(const std::pair<card_methods::card_suit, int>& card)
{
	auto it = std::find(player_cards_in_storage.begin(), player_cards_in_storage.end(), card);
	if (it == player_cards_in_storage.end())
		return false;
		









}
//-----------------------------------------------------------------------------------------
// if  1 card > 2 card return true, else return false
bool FoolGame::MyForm::card_comparison(const std::pair<card_methods::card_suit, int>& card_1, const std::pair<card_methods::card_suit, int>& card_2)
{
	if ((card_1.first == trump_suit) && (card_2.first != trump_suit))
		return true;






}
//-----------------------------------------------------------------------------------------
//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
//-----------------------------------------------------------------------------------------
void FoolGame::MyForm::give_cards_to_the_computer()
{
	if (computer_cards_in_storage.size() >= 6)
		return;


	while (computer_cards_in_storage.size() < 6)
	{
		std::pair<card_methods::card_suit, int> computer_card;

		if (get_card_from_desc(computer_card))
			computer_cards_in_storage.push_back(computer_card);
		else
			break;
	}

	card_methods::sort_cards(computer_cards_in_storage, trump_suit);
}
//-----------------------------------------------------------------------------------------
void FoolGame::MyForm::computer_intelligence()
{
	debugFunc__show_cards();

	Sleep(1000);

	










	if (players_current_turn)
		return;

	if (!players_turn)
	{
		





		computer_attacks();
	}





	debugFunc__show_cards();
}
//-----------------------------------------------------------------------------------------
void FoolGame::MyForm::computer_attacks()
{

	if (cards_in_battleground.size()==0)
	{
		give_cards_to_the_computer(); // if necessary

		std::pair<card_methods::card_suit, int> first_card = computer_cards_in_storage.front();

		if (!move_card_in_battleground_field(first_card, false))
			return;

		Label->Text = L"     YOUR MOVE   ";
		Label->Refresh();
		players_current_turn = true;

		return;
	}

	std::pair<card_methods::card_suit, int> card_to_attack;

	if (!card_methods::find_card_to_attack(cards_in_battleground, computer_cards_in_storage, trump_suit, card_to_attack))
	{
		// now player's turn
		players_current_turn = true;
		players_turn = true;

		//finished
		finished_round();	

		return;
	}
	else
	{
		if (!move_card_in_battleground_field(card_to_attack, false))
		{
			// unlikely
			
			// now player's turn
			players_current_turn = true;
			players_turn = true;

			//finished
			finished_round();
			return;
		}

	
		Label->Text = L"     YOUR MOVE   ";
		Label->Refresh();
		players_current_turn = true;

		return;
	}
}
//-----------------------------------------------------------------------------------------
void FoolGame::MyForm::computer_protects(std::pair<card_methods::card_suit, int>& card)
{
	
}
//-----------------------------------------------------------------------------------------
void FoolGame::MyForm::debugFunc__show_cards()
{
	label1->ResetText();


	String^ str12;
	for (const auto& c : computer_cards_in_storage)
	{
		String^ str1;

		if (c.first == card_methods::card_suit::clubs)
			str1 += "clubs";
		if (c.first == card_methods::card_suit::diamonds)
			str1 += "diamonds";
		if (c.first == card_methods::card_suit::hearts)
			str1 += "hearts";
		if (c.first == card_methods::card_suit::spades)
			str1 += "spades";

		str1 += "   ";
		str1 += c.second.ToString();

		str12 += str1;
		str12 += "\n";
	}
	label1->Text = str12;
	label1->Refresh();
}
//-----------------------------------------------------------------------------------------
//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
//-----------------------------------------------------------------------------------------
bool FoolGame::MyForm::move_card_in_battleground_field(const std::pair<card_methods::card_suit, int>& card, const bool& is_players_card)
{
	PictureBox^ card_place_in_battleground;

	switch (cards_in_battleground.size())
	{
	case 0:
	case 1:
		if (!is_players_card)
			card_place_in_battleground = battleground_1;
		else
			card_place_in_battleground = battleground_2;
		break;
	case 2:
	case 3:
		if (!is_players_card)
			card_place_in_battleground = battleground_3;
		else
			card_place_in_battleground = battleground_4;
		break;
	case 4:
	case 5:
		if (!is_players_card)
			card_place_in_battleground = battleground_5;
		else
			card_place_in_battleground = battleground_6;
		break;
	case 6:
	case 7:
		if (!is_players_card)
			card_place_in_battleground = battleground_7;
		else
			card_place_in_battleground = battleground_8;
		break;
	case 8:
	case 9:
		if (!is_players_card)
			card_place_in_battleground = battleground_9;
		else
			card_place_in_battleground = battleground_10;
		break;
	case 10:
	case 11:
		if (!is_players_card)
			card_place_in_battleground = battleground_11;
		else
			card_place_in_battleground = battleground_12;
		break;
	default:
		return false;
	}


	// unlikely
	String^ way_to_card;
	if (!card_methods::load_card_image(card, way_to_card))
		return false;

	// unlikely
	String^ card_indx;
	if (!card_methods::index_by_card(card_indx, card))
		return false;


	// now it is necessary to erase this card from player's or computer's card
	if (is_players_card)
	{
		auto it = std::find(player_cards_in_storage.begin(), player_cards_in_storage.end(), card);
		if (it != player_cards_in_storage.end())
			player_cards_in_storage.erase(it);
		else
			return false;
	}
	else
	{
		auto it = std::find(computer_cards_in_storage.begin(), computer_cards_in_storage.end(), card);
		if (it != computer_cards_in_storage.end())
			computer_cards_in_storage.erase(it);
		else
			return false;
	}

	// now it is necessary to place card in battleground
	cards_in_battleground.push_back(card);
	card_place_in_battleground->Image = Image::FromFile(way_to_card);
	card_place_in_battleground->Text = card_indx;
	card_place_in_battleground->Refresh();

	return true;
}
//-----------------------------------------------------------------------------------------
void FoolGame::MyForm::move_cards_from_battleground_field(const bool& is_players_card)
{
	clear_battleground_field();

	if (is_players_card)
	{
		for (const auto& card : cards_in_battleground)
			player_cards_in_storage.push_back(card);

		update_player_cards();
	}
	else
	{
		for (const auto& card : cards_in_battleground)
			computer_cards_in_storage.push_back(card);

		card_methods::sort_cards(computer_cards_in_storage, trump_suit);
	}

	cards_in_battleground.clear();
}
//-----------------------------------------------------------------------------------------
void FoolGame::MyForm::clear_battleground_field()
{
	battleground_1->Image = nullptr; battleground_1->ResetText(); battleground_1->Refresh();
	battleground_2->Image = nullptr; battleground_2->ResetText(); battleground_2->Refresh();
	battleground_3->Image = nullptr; battleground_3->ResetText(); battleground_3->Refresh();
	battleground_4->Image = nullptr; battleground_4->ResetText(); battleground_4->Refresh();
	battleground_5->Image = nullptr; battleground_5->ResetText(); battleground_5->Refresh();
	battleground_6->Image = nullptr; battleground_6->ResetText(); battleground_6->Refresh();
	battleground_7->Image = nullptr; battleground_7->ResetText(); battleground_7->Refresh();
	battleground_8->Image = nullptr; battleground_8->ResetText(); battleground_8->Refresh();
	battleground_9->Image = nullptr; battleground_9->ResetText(); battleground_9->Refresh();
	battleground_10->Image = nullptr; battleground_10->ResetText(); battleground_10->Refresh();
	battleground_11->Image = nullptr; battleground_11->ResetText(); battleground_11->Refresh();
	battleground_12->Image = nullptr; battleground_12->ResetText(); battleground_12->Refresh();
}
//-----------------------------------------------------------------------------------------
//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
//-----------------------------------------------------------------------------------------
bool FoolGame::MyForm::is_card_a_trump(const std::pair<card_methods::card_suit, int>& card)
{
	return (trump_suit == card.first);
}
//-----------------------------------------------------------------------------------------
