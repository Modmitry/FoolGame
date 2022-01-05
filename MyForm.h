#pragma once
#include "card_methods.h"


// members for card deck
std::stack<std::pair<card_methods::card_suit,int>> desc_cards;
card_methods::card_suit trump_suit;
//
// members for player
std::vector<std::pair<card_methods::card_suit, int>> player_cards_in_storage;
bool players_turn = false;
bool players_current_turn = false;
//
// members for computer opponent
std::vector<std::pair<card_methods::card_suit, int>> computer_cards_in_storage;
//
// members battleground cards
std::vector<std::pair<card_methods::card_suit, int>> cards_in_battleground;
//



namespace FoolGame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// Summary for MyForm
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// Clean up any resources being used.
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	// FIELDS FOR CARDS
	
	// fields for card desk
	private: System::Windows::Forms::PictureBox^ Trupm_card;
	private: System::Windows::Forms::PictureBox^ Cards_in_the_desk;

// field for Computer player's cards
	private: System::Windows::Forms::PictureBox^ Computer_player_cards;

	private: System::Windows::Forms::PictureBox^ battleground_1;
	private: System::Windows::Forms::PictureBox^ battleground_2;
	private: System::Windows::Forms::PictureBox^ battleground_3;
	private: System::Windows::Forms::PictureBox^ battleground_4;
	private: System::Windows::Forms::PictureBox^ battleground_5;
	private: System::Windows::Forms::PictureBox^ battleground_6;
	private: System::Windows::Forms::PictureBox^ battleground_7;
	private: System::Windows::Forms::PictureBox^ battleground_8;
	private: System::Windows::Forms::PictureBox^ battleground_9;
	private: System::Windows::Forms::PictureBox^ battleground_10;
	private: System::Windows::Forms::PictureBox^ battleground_11;
	private: System::Windows::Forms::PictureBox^ battleground_12;

	// field for player's cards
	private: System::Windows::Forms::PictureBox^ Player_card_1;
	private: System::Windows::Forms::PictureBox^ Player_card_2;
	private: System::Windows::Forms::PictureBox^ Player_card_3;
	private: System::Windows::Forms::PictureBox^ Player_card_4;
	private: System::Windows::Forms::PictureBox^ Player_card_5;
	private: System::Windows::Forms::PictureBox^ Player_card_6;
	private: System::Windows::Forms::PictureBox^ Player_card_7;
	private: System::Windows::Forms::PictureBox^ Player_card_8;
	private: System::Windows::Forms::PictureBox^ Player_card_9;	
	private: System::Windows::Forms::PictureBox^ Player_card_10;
	private: System::Windows::Forms::PictureBox^ Player_card_11;
	private: System::Windows::Forms::PictureBox^ Player_card_12;
	private: System::Windows::Forms::PictureBox^ Player_card_13;
	private: System::Windows::Forms::PictureBox^ Player_card_14;
	private: System::Windows::Forms::PictureBox^ Player_card_15;
	private: System::Windows::Forms::PictureBox^ Player_card_16;
	private: System::Windows::Forms::PictureBox^ Player_card_17;
	private: System::Windows::Forms::PictureBox^ Player_card_18;
	private: System::Windows::Forms::PictureBox^ Player_card_19;
	private: System::Windows::Forms::PictureBox^ Player_card_20;

	// buttons
	private: System::Windows::Forms::Button^ play_button;
	private: System::Windows::Forms::Button^ finished__take_cards_button;
	private: System::Windows::Forms::Button^ sort_cards_button;
	// label
	private: System::Windows::Forms::Label^ Label;



	/// Required designer variable.
	private: System::ComponentModel::Container ^components;


#pragma region Windows Form Designer generated code
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
	void InitializeComponent(void);
		
#pragma endregion

	// card clicks
	private: void Player_card_Click(System::Windows::Forms::PictureBox^% Player_card);
	private: System::Void Player_card_1_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Player_card_2_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Player_card_3_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Player_card_4_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Player_card_5_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Player_card_6_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Player_card_7_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Player_card_8_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Player_card_9_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Player_card_10_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Player_card_11_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Player_card_12_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Player_card_13_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Player_card_14_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Player_card_15_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Player_card_16_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Player_card_17_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Player_card_18_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Player_card_19_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Player_card_20_Click(System::Object^ sender, System::EventArgs^ e);
		   
	// button clicks
	private: System::Void Play_Game_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void finished_or_take_cards_button_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void sort_cards_button_Click(System::Object^ sender, System::EventArgs^ e); 



	// methods for card deck 
	void random_distribution_of_cards();	
	bool get_card_from_desc(std::pair<card_methods::card_suit, int>& card);
	//

	// methods for player
	bool place_player_card_in_storage(const std::pair<card_methods::card_suit, int>& card);
	void give_cards_to_the_player();
	void update_player_cards();
	//

	// methods for computer opponent
	void give_cards_to_the_computer();
	void determine_the_turn_of_the_move();
	void computer_intelligence();
	void computer_attacks();
	void computer_protects(std::pair<card_methods::card_suit, int>& card);
	//

	// methods battleground cards
	bool place_card_in_battleground_field(const std::pair<card_methods::card_suit, int>& card, const bool& is_players_card);
	void take_cards_from_battleground_field(std::vector<std::pair<card_methods::card_suit, int>>& cards, const bool& is_players_card);
	bool battleground_field_is_clear();


	bool is_card_a_trump(const std::pair<card_methods::card_suit, int>& card);


	
		 
};
}
