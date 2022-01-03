#pragma once
#include <vector>
#include <string>
#include <stack>
#include <time.h>


// members for card deck
enum class card_suit
{
	hearts,
	clubs,
	diamonds,
	spades
};

std::stack<std::pair<card_suit,int>> cards;
card_suit trump_suit;
//--//



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
	// fields for cards
	private: System::Windows::Forms::Button^ play_button;
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
	private: System::Windows::Forms::PictureBox^ Computer_player_cards;
	private: System::Windows::Forms::PictureBox^ Trupm_card;
	private: System::Windows::Forms::PictureBox^ Cards_in_the_desk;
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
	private: System::Windows::Forms::Button^ button1;

	private:
		/// Required designer variable.
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		void InitializeComponent(void);
		
#pragma endregion

	private: System::Void Play_Click(System::Object^ sender, System::EventArgs^ e);

	// methods for card deck
	public: 

	void random_distribution_of_cards();	
	bool get_card(std::pair<card_suit, int>& card);
	int get_random_int(const int& left_bound, const int& right_bound);
	bool load_card(const std::pair<card_suit, int>& card, String^% way);
	//



	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		std::pair<card_suit, int> card1;
		get_card(card1);
		int a12 = 5;
	}
	};
}
