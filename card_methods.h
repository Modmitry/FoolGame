#pragma once

#include <Windows.h>
#include <utility>
#include <time.h>
#include <random>
#include <set>
#include <vector>
#include <stack>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

class card_methods
{
public:	
	// card suit
	enum class card_suit
	{
		hearts,
		clubs,
		diamonds,
		spades
	};

public:

	static bool load_card_image(const std::pair<card_suit, int>& card, String^% way);
	static bool index_by_card(String^% indx, const std::pair<card_suit, int>& card);
	static bool card_by_index(std::pair<card_suit, int>& card,String^% indx);
	static int get_random_int(const int& left_bound, const int& right_bound);
	static void sort_cards(std::vector<std::pair<card_suit, int>>& cards, const card_suit& trump);
	static bool get_match_history_from_file(int& wins, int& draws, int& loses);
	static void write_match_history(const int& wins, const int& draws, const int& loses);

};

